#pragma once
#include <Windows.h>
#include <TlHelp32.h>
#include <cstdint>
#include <cstddef>
#include <assert.h>
#include <vector>


template <typename Char, bool CaseSensitive = false>
[[nodiscard]] bool string_equals(const Char* a, const Char* b) {
    while (true) {
        auto c_a = *a;
        auto c_b = *b;

        if constexpr (CaseSensitive) {
            if (c_a >= Char('A') && c_a <= Char('Z'))
                c_a += Char('a') - Char('A');
            if (c_b >= Char('A') && c_b <= Char('Z'))
                c_b += Char('a') - Char('A');
        }

        if (c_a != c_b)
            return false;

        if (c_a == '\0')
            break;

        a++;
        b++;
    }

    return true;
}

template <typename Char>
[[nodiscard]] bool string_equals_non_case_sensitive(const Char* a, const Char* b) {
    return string_equals<Char, true>(a, b);
}

[[nodiscard]] DWORD get_pid_from_name(const char* name) {
#undef Process32First
#undef Process32Next
#undef PROCESSENTRY32

    PROCESSENTRY32 entry_32{};
    entry_32.dwSize = sizeof(entry_32);

    auto snap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (snap == NULL)
        return 0;

    if (Process32First(snap, &entry_32)) {
        do {
            if (string_equals_non_case_sensitive(entry_32.szExeFile, name)) {
                CloseHandle(snap);
                return entry_32.th32ProcessID;
            }
        } while (Process32Next(snap, &entry_32));
    }

    CloseHandle(snap);

    return 0;
}

struct module_t {
    std::uintptr_t base{};
    std::size_t size{};
};

[[nodiscard]] module_t get_module(DWORD pid, const char* name) {
#undef Module32First
#undef Module32Next
#undef MODULEENTRY32

    MODULEENTRY32 entry_32{};
    entry_32.dwSize = sizeof(entry_32);

    auto snap = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, pid);
    if (snap == NULL)
        return {};

    if (Module32First(snap, &entry_32)) {
        do {
            // find last '\'
            const auto* c = entry_32.szExePath;
            std::size_t last = 0u;
            while (*c != '\0') {
                if (*c == '\\')
                    last = c - entry_32.szExePath;
                c++;
            }

            if (string_equals_non_case_sensitive(entry_32.szExePath + last + 1, name)) {
                CloseHandle(snap);
                return {
                    reinterpret_cast<std::uintptr_t>(entry_32.modBaseAddr),
                    static_cast<std::size_t>(entry_32.modBaseSize)
                };
            }
        } while (Module32Next(snap, &entry_32));
    }
    else {
        __debugbreak();
    }

    CloseHandle(snap);

    return {};
}


bool read_mem(HANDLE handle, std::uintptr_t address, void* out, std::size_t size) {
    assert(address != 0u);
    assert(size > 0u);

    SIZE_T num_bytes_read = 0u;
    const auto res = ReadProcessMemory(
        handle,
        reinterpret_cast<LPCVOID>(address),
        reinterpret_cast<LPVOID>(out),
        static_cast<SIZE_T>(size),
        &num_bytes_read
    );

    return res != FALSE && 
        num_bytes_read == static_cast<SIZE_T>(size);
}

template <typename T>
    requires(std::is_trivially_copyable_v<T>)
[[nodiscard]] T read_mem(HANDLE handle, std::uintptr_t address) {
    T ret;
    read_mem(
        handle,
        address, 
        &ret, 
        sizeof(T)
    );

    return ret;
}


[[nodiscard]] std::uintptr_t get_export(HANDLE handle, const module_t& module, const char* name) {
    if (module.size < sizeof(LONG))
        return 0;

    const auto lfanew = read_mem<LONG>(handle, module.base + offsetof(IMAGE_DOS_HEADER, e_lfanew));

    if (module.size < lfanew + sizeof(IMAGE_NT_HEADERS))
        return 0;

    const auto nt = read_mem<IMAGE_NT_HEADERS>(handle, module.base + lfanew);

    auto& exp_dir_entry = nt.OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT];
    const auto export_rva = exp_dir_entry.VirtualAddress;
    const auto export_size = exp_dir_entry.Size;
    if (export_rva == 0u ||
        export_size == 0u)
        return 0;

    if (module.size < export_rva + sizeof(IMAGE_EXPORT_DIRECTORY))
        return 0;

    const auto exp = read_mem<IMAGE_EXPORT_DIRECTORY>(handle, module.base + export_rva);

    if (module.size < exp.AddressOfNames + exp.NumberOfNames * sizeof(std::uint32_t))
        return 0;

    if (module.size < exp.AddressOfNameOrdinals + exp.NumberOfNames * sizeof(std::uint16_t))
        return 0;

    if (module.size < exp.AddressOfFunctions + exp.NumberOfNames * sizeof(std::uint32_t))
        return 0;

    std::vector<std::uint32_t> name_rvas(exp.NumberOfNames);
    std::vector<std::uint16_t> ordinals(exp.NumberOfNames);
    std::vector<std::uint32_t> func_rvas(exp.NumberOfFunctions);

    if (
        !read_mem(
            handle,
            module.base + exp.AddressOfNames,
            name_rvas.data(),
            exp.NumberOfNames * sizeof(std::uint32_t)
        )) {
        return 0;
    }
    if (
        !read_mem(
            handle,
            module.base + exp.AddressOfNameOrdinals,
            ordinals.data(),
            exp.NumberOfNames * sizeof(std::uint16_t)
        )) {
        return 0;
    }
    if (
        !read_mem(
            handle,
            module.base + exp.AddressOfFunctions,
            func_rvas.data(),
            exp.NumberOfFunctions * sizeof(std::uint32_t)
        )) {
        return 0;
    }

    for (std::uint32_t i = 0u; i < exp.NumberOfNames; i++) {
        char func_name[MAX_PATH]{};
        if (module.size < name_rvas[i] + sizeof(func_name))
            return 0;

        if (
            !read_mem(
                handle,
                module.base + name_rvas[i],
                func_name,
                sizeof(func_name) - 1
            )) {
            continue;
        }

        if (string_equals_non_case_sensitive(
            func_name, name)) {
            std::uint16_t ordinal = ordinals[i];
            std::uint32_t rva = func_rvas[ordinal];
            std::uintptr_t addr = module.base + rva;

            if (rva >= export_rva &&
                rva < export_rva + export_size) {
                char forwarder[260]{};
                if (module.size < rva + sizeof(forwarder))
                    return 0;

                if (
                    !read_mem(
                        handle,
                        addr,
                        forwarder,
                        sizeof(forwarder) - 1
                    )) {
                    continue;
                }

                char* func_part = nullptr;

                char* it = forwarder;
                while (*it) {
                    if (*it == '.') {
                        *it = '\0';
                        func_part = it + 1;
                    }
                    it++;
                }
                if (func_part == nullptr)
                    return 0; // malformed

                std::string mod_name_(&forwarder[0], &func_part[0]);
                mod_name_ += ".dll";
                const auto fwd_mod = get_module(GetProcessId(handle), mod_name_.c_str());
                if (fwd_mod.base == 0u)
                    return 0;

                return get_export(handle, fwd_mod, func_part);
            }

            return addr;
        }
    }

    return 0;
}