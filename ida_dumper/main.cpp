#include <print>
#include <string>
#include "dumper.h"
#include "str_util.h"


struct c_interface_register {
    void* fn_create; // 0x0
    const char* name; // 0x8
    c_interface_register* next; // 0x10
};

int main() {
    auto d = dumper();

    if (!d.attach("cs2.exe")) {
        std::println(stderr, "failed to attach to game with error '{}'", GetLastError());
        return 1;
    }

    const auto schema_system = d.get_module("schemasystem.dll");
    if (schema_system.base == 0) {
        std::println(stderr, "failed to find schema system module");
        return 1;
    }

    const auto fn_create_interface = d.get_export(schema_system, "CreateInterface");
    if (fn_create_interface == 0) {
        std::println(stderr, "failed to find 'CreateInterface' in scheamsystem.dll");
        return 1;
    }

    const auto offset = d.read<std::int32_t>(
        fn_create_interface + 3
    );

    std::uintptr_t interface_register = d.read<std::uintptr_t>(
        fn_create_interface + 
            3 + offset + sizeof(std::uint32_t)
    );

    CSchemaSystem* i_schema_system = nullptr;
    c_interface_register reg;
    do {
        reg = d.read<c_interface_register>(interface_register);
        interface_register = reinterpret_cast<std::uintptr_t>(reg.next);

        char name_buf[260];
        if (
            d.read(
                reinterpret_cast<std::uintptr_t>(reg.name),
                name_buf,
                sizeof(name_buf)
            )) {
            if (string_equals(name_buf, "SchemaSystem_001")) {
                const auto i_offset = d.read<std::int32_t>(
                    reinterpret_cast<std::uintptr_t>(reg.fn_create) + 3
                );
                i_schema_system = reinterpret_cast<CSchemaSystem*>(
                    reinterpret_cast<std::uintptr_t>(reg.fn_create) +
                        3 + i_offset + sizeof(std::uint32_t)
                );
            }
        }
    } while (reg.next != nullptr);

    if (i_schema_system == nullptr) {
        std::println(stderr, "failed to find 'SchemaSystem_001' interface");
        return 1;
    }

    std::filesystem::path out_path = std::filesystem::current_path() / "output";
    if (!std::filesystem::exists(out_path) ||
        !std::filesystem::is_directory(out_path)) {
        std::filesystem::create_directories(out_path);
    }

    if (!d.parse(i_schema_system)) {
        std::println(stderr, "failed to parse...");
        return 1;
    }

    std::println("formatting...");
    d.dump(out_path);
    std::println("done!");

    return 0;
}