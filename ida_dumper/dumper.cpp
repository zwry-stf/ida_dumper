#include "dumper.h"
#include <string>
#include <assert.h>
#include "mem.h"
#include "sdk.h"
#include <print>
#include <fstream>


struct loaded_field_t {
    std::string name;
    std::string type_name;
    std::uint32_t offset;
    std::uint32_t size{};
    std::uint32_t alignment{};
    bool was_valid{};
};

struct loaded_class_t {
    std::string name;
    std::string parent_name;
    std::uint32_t size;
    std::uint32_t alignment{ 1 };
    bool parent_removed{};
    std::uint32_t pad_idx{};
    const loaded_class_t* parent_cls{};
    std::vector<loaded_field_t> fields;
    bool formatted{};
};

struct loaded_enum_value_t {
    std::string name;
    std::uint64_t value_big;
};

struct loaded_enum_t {
    std::string name;
    std::uint32_t size;
    std::uint32_t alignment;
    std::vector<loaded_enum_value_t> values;
};

struct loaded_scope_t {
    std::string name;
    std::vector<loaded_class_t> classes;
    std::vector<loaded_enum_t> enums;
};

struct field_type_t {
    std::string_view source_name;
    std::string_view target_name;
    std::uint32_t size;
    std::uint32_t alignment;
};

#define _define_int_type(_name) { #_name, #_name "_t", sizeof(##_name##_t), alignof(##_name##_t) }
#define _define_constant_type(_name) { #_name, #_name, sizeof(_name), alignof(_name) }
constexpr field_type_t k_types[] = {
    _define_int_type(int8),
    _define_int_type(uint8),
    _define_int_type(int16),
    _define_int_type(uint16),
    _define_int_type(int32),
    _define_int_type(uint32),
    _define_int_type(int64),
    _define_int_type(uint64),
    _define_constant_type(bool),
    _define_constant_type(float),
    _define_constant_type(double),
    _define_constant_type(int),
    _define_constant_type(short),
    _define_constant_type(char),
    _define_constant_type(wchar_t),
    { "float32", "float", sizeof(float), alignof(float) },
};
#undef _define_int_type
#undef _define_constant_type

std::optional<int> parse_int_safe(const char* begin, const char* end) {
    if (end <= begin)
        return std::nullopt;

    int value{};
    auto [ptr, ec] = std::from_chars(begin, end, value);

    if (ec == std::errc{} &&
        ptr == end) {
        return value;
    }
    return std::nullopt;   // or throw, or return sentinel value...
}

dumper::dumper() {
    scopes_ = std::make_unique<std::vector<loaded_scope_t>>();
}

dumper::~dumper() {
    if (has_valid_handle()) {
        detach();
    }
}

bool dumper::attach(const char* name) {
    assert(!has_valid_handle());

    const auto pid = get_pid_from_name(name);
    if (pid == 0) {
        return false;
    }

    handle_ = OpenProcess(PROCESS_ALL_ACCESS, FALSE /* bInheritHandle */, pid);

    return has_valid_handle();
}

void dumper::detach() {
    assert(has_valid_handle());

    CloseHandle(handle_);
    handle_ = NULL;
}

bool dumper::read(std::uintptr_t address, void* out, std::size_t size) const {
    assert(has_valid_handle());

    return read_mem(
        handle_,
        address,
        out,
        size
    );
}

module_t dumper::get_module(const char* name)
{
    assert(has_valid_handle());

    module_t ret;
    const auto res = ::get_module(
        GetProcessId(handle_),
        name,
        ret.base,
        ret.size
    );
    if (!res) {
        return {};
    }
    return ret;
}

std::uintptr_t dumper::get_export(const module_t& module, const char* name) const
{
    assert(has_valid_handle());

    return ::get_export(
        handle_,
        module.base,
        module.size,
        name
    );
}

bool dumper::parse(CSchemaSystem* schema_system)
{
    assert(has_valid_handle());

    auto type_scopes = read<CUtlVector<CSchemaSystemTypeScope*>>(
        reinterpret_cast<std::uintptr_t>(&schema_system->type_scopes)
    );

    scopes_->reserve(type_scopes.count);

    CSchemaSystemTypeScope* global_scope = nullptr;

    assert(!global_scope_);
    global_scope_ = std::make_unique<loaded_scope_t>();

    std::int32_t num_parsed = 0;
    for (std::int32_t i = 0; i < type_scopes.count; i++) {
        const auto* type_scope = read<CSchemaSystemTypeScope*>(
            reinterpret_cast<std::uintptr_t>(type_scopes.data + i)
        );
        if (type_scope == nullptr)
            continue;

        if (global_scope == nullptr) {
            global_scope = read<CSchemaSystemTypeScope*>(
                reinterpret_cast<std::uintptr_t>(&type_scope->global_scope)
            );
            if (global_scope == nullptr) {
                std::println(stderr, "failed to acquire global types");
                return 1;
            }

            const auto res = parse_type_scope(
                global_scope,
                *global_scope_
            );
            if (!res) {
                std::println(stderr, "failed to parse global types");
                return 1;
            }

            add_default_classes(*global_scope_);
        }

        assert(
            read<CSchemaSystemTypeScope*>(
                reinterpret_cast<std::uintptr_t>(&type_scope->global_scope)
            ) == global_scope
        );

        loaded_scope_t parsed_scope;
        const auto res = parse_type_scope(
            type_scope,
            parsed_scope
        );
        if (res &&
            !parsed_scope.classes.empty()) {
            num_parsed++;
            std::println("parsed scope '{}'", parsed_scope.name);
            scopes_->push_back(std::move(parsed_scope));
        }
        else {
            std::println("failed to parse scope '{}' at address '{:p}", parsed_scope.name, (void*)(type_scopes.data + i));
        }
    }

    std::println("parsed '{}' type scopes", num_parsed);

    return true;
}

void dumper::add_forward_declared_classs(const std::string& name)
{
    for (auto& c : current_forward_declared_classes_) {
        if (c == name)
            return;
    }

    current_forward_declared_classes_.push_back(name);
}

void dumper::add_default_classes(loaded_scope_t& scope) {
    auto& vector = scope.classes.emplace_back("Vector");
    vector.alignment = alignof(float);
    vector.size = sizeof(float) * 3;
    vector.fields.emplace_back("x", "float", 0 * (std::uint32_t)sizeof(float));
    vector.fields.emplace_back("y", "float", 1 * (std::uint32_t)sizeof(float));
    vector.fields.emplace_back("z", "float", 2 * (std::uint32_t)sizeof(float));

    auto& vector4d = scope.classes.emplace_back("Vector4D");
    vector4d.alignment = alignof(float);
    vector4d.size = sizeof(float) * 4;
    vector4d.fields.emplace_back("x", "float", 0 * (std::uint32_t)sizeof(float));
    vector4d.fields.emplace_back("y", "float", 1 * (std::uint32_t)sizeof(float));
    vector4d.fields.emplace_back("z", "float", 2 * (std::uint32_t)sizeof(float));
    vector4d.fields.emplace_back("w", "float", 3 * (std::uint32_t)sizeof(float));

    auto& vector2d = scope.classes.emplace_back("Vector2D");
    vector2d.alignment = alignof(float);
    vector2d.size = sizeof(float) * 2;
    vector2d.fields.emplace_back("x", "float", 0 * (std::uint32_t)sizeof(float));
    vector2d.fields.emplace_back("y", "float", 1 * (std::uint32_t)sizeof(float));

    auto& qangle = scope.classes.emplace_back("QAngle");
    qangle.alignment = alignof(float);
    qangle.size = sizeof(float) * 3;
    qangle.fields.emplace_back("pitch", "float", 0 * (std::uint32_t)sizeof(float));
    qangle.fields.emplace_back("yaw",   "float", 1 * (std::uint32_t)sizeof(float));
    qangle.fields.emplace_back("roll",  "float", 2 * (std::uint32_t)sizeof(float));
}


/// parsing

bool dumper::parse_field(const CSchemaFieldData& field, loaded_field_t& out) {
    char field_name_buffer[256];
    if (
        !read(
            reinterpret_cast<std::uintptr_t>(field.name),
            field_name_buffer,
            sizeof(field_name_buffer)
        )) {
        return false;
    }

    out.name = field_name_buffer;

    const auto* p_type_name = read<const char*>(
        reinterpret_cast<std::uintptr_t>(&field.type->name)
    );
    if (p_type_name == nullptr) {
        return false;
    }

    char field_type_buffer[256];
    if (
        !read(
            reinterpret_cast<std::uintptr_t>(p_type_name),
            field_type_buffer,
            sizeof(field_type_buffer)
        )) {
        return false;
    }

    out.type_name = field_type_buffer;

    out.offset = field.offset;

    return true;
}

bool dumper::parse_enum_value(const CSchemaEnumValueData& data, std::uint32_t size, loaded_enum_value_t& out) {
    char value_name_buffer[256];
    if (
        !read(
            reinterpret_cast<std::uintptr_t>(data.name),
            value_name_buffer,
            sizeof(value_name_buffer)
        )) {
        return false;
    }

    out.name = value_name_buffer;

    switch (size) {
    case 1:
        out.value_big = static_cast<std::uint64_t>(data.value_u8);
        break;
    case 2:
        out.value_big = static_cast<std::uint64_t>(data.value_u16);
        break;
    case 4:
        out.value_big = static_cast<std::uint64_t>(data.value_u32);
        break;
    case 8:
        out.value_big = data.value_u64;
        break;
    default:
        assert(false);
        return false;
    }

    return true;
}

bool dumper::parse_enum(const CSchemaEnumData& en, loaded_enum_t& out) {
    char enum_name_buffer[256];
    if (
        !read(
            reinterpret_cast<std::uintptr_t>(en.name),
            enum_name_buffer,
            sizeof(enum_name_buffer)
        )) {
        return false;
    }

    out.name = enum_name_buffer;
    out.size = en.size;
    out.alignment = en.alignment;

    if (en.num_values == 0)
        return true;

    std::vector<CSchemaEnumValueData> values(en.num_values);
    if (
        !read(
            reinterpret_cast<std::uintptr_t>(en.values),
            values.data(),
            values.size() * sizeof(CSchemaEnumValueData)
        )) {
        return false;
    }

    for (auto& value : values) {
        loaded_enum_value_t parsed_value;

        if (parse_enum_value(value, en.size, parsed_value)) {
            out.values.push_back(std::move(parsed_value));
        }
    }

    return true;
}

bool dumper::parse_class(const CSchemaClassData& cls, loaded_class_t& out) {
    char class_name_buffer[256];
    if (
        !read(
        reinterpret_cast<std::uintptr_t>(cls.name),
        class_name_buffer,
        sizeof(class_name_buffer)
    )) {
        return false;
    }

    out.name = class_name_buffer;
    out.size = cls.class_size;
    out.alignment = cls.alignment;

    // get parent class
    if (cls.base_class_count > 0 &&
        cls.derrived_classes != nullptr) {
        const auto parent_cls_ref = read<CSchemaClassDataRef>(
            reinterpret_cast<std::uintptr_t>(&cls.base_classes[0])
        );

        const auto* parent_cls = read<CSchemaClassData*>(
            reinterpret_cast<std::uintptr_t>(parent_cls_ref.value)
        );

        if (parent_cls != nullptr) {
            const auto* name_ptr = read<const char*>(
                reinterpret_cast<std::uintptr_t>(&parent_cls->name)
            );

            if (name_ptr != nullptr) {
                char parent_name_buffer[256];
                if (
                    read(
                        reinterpret_cast<std::uintptr_t>(name_ptr),
                        parent_name_buffer,
                        sizeof(parent_name_buffer)
                    )) {
                    out.parent_name = parent_name_buffer;
                }
            }
        }
    }

    // fields
    if (cls.field_size == 0)
        return true;

    std::vector<CSchemaFieldData> fields(cls.field_size);
    if (
        !read(
            reinterpret_cast<std::uintptr_t>(cls.fields),
            fields.data(),
            fields.size() * sizeof(CSchemaFieldData)
        )) {
        return false;
    }

    for (auto& field : fields) {
        loaded_field_t parsed_field;

        if (parse_field(field, parsed_field)) {
            out.fields.push_back(std::move(parsed_field));
        }
    }

    return true;
};

bool dumper::parse_type_scope(const CSchemaSystemTypeScope* type_scope, loaded_scope_t& out) {
    // name
    char name_buf[256];
    if (!
        read(
            reinterpret_cast<std::uintptr_t>(&type_scope->name),
            name_buf,
            sizeof(name_buf)
        )) {
        return false;
    }

    out.name = name_buf;

    /// classes

    const auto num_classes = read<std::uint16_t>(
        reinterpret_cast<std::uintptr_t>(&type_scope->num_classes)
    );
    if (num_classes == 0)
        return false;

    auto* p_classes = read<CSchemaDeclaredClassEntry*>(
        reinterpret_cast<std::uintptr_t>(&type_scope->classes)
    );
    if (p_classes == nullptr)
        return false;

    std::vector<CSchemaDeclaredClassEntry> class_entries(num_classes);

    if (
        !read(
            reinterpret_cast<std::uintptr_t>(p_classes),
            class_entries.data(),
            class_entries.size() * sizeof(CSchemaDeclaredClassEntry)
        )) {
        return false;
    }

    for (auto& e : class_entries) {
        const auto* p_class = read<const CSchemaClassData*>(
            reinterpret_cast<std::uintptr_t>(&e.declared_class->value)
        );
        if (p_class == nullptr)
            continue;

        CSchemaClassData cls;
        if (
            read(
                reinterpret_cast<std::uintptr_t>(p_class),
                &cls,
                sizeof(cls)
            )) {
            loaded_class_t parsed_cls;
            if (parse_class(cls, parsed_cls)) {
                out.classes.push_back(std::move(parsed_cls));
            }
        }
    }


    /// enums

    const auto num_enums = read<std::uint16_t>(
        reinterpret_cast<std::uintptr_t>(&type_scope->num_enums)
    );
    if (num_enums == 0)
        return true; // probably possible

    auto* p_enums = read<CSchemaDeclaredEnumEntry*>(
        reinterpret_cast<std::uintptr_t>(&type_scope->enums)
    );
    if (p_enums == nullptr)
        return false;

    std::vector<CSchemaDeclaredEnumEntry> enum_entries(num_enums);

    if (
        !read(
            reinterpret_cast<std::uintptr_t>(p_enums),
            enum_entries.data(),
            enum_entries.size() * sizeof(CSchemaDeclaredEnumEntry)
        )) {
        return false;
    }

    for (auto& e : enum_entries) {
        const auto* p_enum = read<const CSchemaEnumData*>(
            reinterpret_cast<std::uintptr_t>(&e.declared_class->value)
        );
        if (p_enum == nullptr)
            continue;

        CSchemaEnumData en;
        if (
            read(
                reinterpret_cast<std::uintptr_t>(p_enum),
                &en,
                sizeof(en)
            )) {
            loaded_enum_t parsed_enum;
            if (parse_enum(en, parsed_enum)) {
                out.enums.push_back(std::move(parsed_enum));
            }
        }
    }

    return true;
}


/// formatting

bool dumper::get_field_type(loaded_field_t& field, std::string& out_name, std::uint32_t& out_pos, 
                            std::uint32_t& last_pos_with_alignment, std::size_t& special_format_delimiter, 
                            const std::vector<const loaded_scope_t*>& includes) {
    if (field.type_name.empty())
        return false;

    special_format_delimiter = std::string::npos;
    last_pos_with_alignment = out_pos;

    std::string type_name = field.type_name;
    constexpr auto bitfield_name = std::string_view("bitfield");
    if (type_name.find(bitfield_name) != std::string::npos) {
        return false;
    }

    bool is_array = false;
    const auto array_start_pos = type_name.find("[");
    std::uint32_t array_count = 0;
    if (array_start_pos != std::string::npos) {
        is_array = true;
        const auto array_end_pos = type_name.find("]");
        assert(array_end_pos != std::string::npos);

        const auto res = parse_int_safe(
            type_name.c_str() + array_start_pos + 1,
            type_name.c_str() + array_end_pos
        );
        assert(res && *res > 0);
        array_count = static_cast<std::uint32_t>(*res);
        type_name = type_name.substr(0, array_start_pos);
    }

    const bool is_pointer = type_name.back() == '*';
    if (is_pointer) {
        type_name.pop_back();
    }

    for (auto& t : k_types) {
        if (type_name == t.source_name) {
            out_name = t.target_name;
            std::uint32_t size, alignment;
            if (is_pointer) {
                out_name += '*';
                size = sizeof(void*);
                alignment = alignof(void*);
            }
            else if (is_array) {
                size = t.size * array_count;
                alignment = t.alignment;
                special_format_delimiter = out_name.size();
                out_name += "[";
                out_name += std::to_string(array_count);
                out_name += "]";
            }
            else {
                size = t.size;
                alignment = t.alignment;
            }

            const auto aligned = out_pos % alignment;
            if (aligned == 0) {
                last_pos_with_alignment = out_pos;
            }
            else {
                last_pos_with_alignment = out_pos + alignment - aligned;
            }
            out_pos = field.offset + size;
            field.size = size;
            field.alignment = alignment;
            return true;
        }
    }

    for (const auto* scope : includes) {
        for (const auto& c : scope->classes) {
            if (c.name == type_name) {
                if (!c.formatted) {
                    if (!is_pointer)
                        return false;
                    assert(is_pointer);
                    add_forward_declared_classs(c.name);
                }
                out_name = type_name;
                std::uint32_t size, alignment;
                if (is_pointer) {
                    out_name += '*';
                    size = sizeof(void*);
                    alignment = alignof(void*);
                }
                else {
                    size = c.size;
                    alignment = c.alignment;
                }

                const auto aligned = out_pos % alignment;
                if (aligned == 0) {
                    last_pos_with_alignment = out_pos;
                }
                else {
                    last_pos_with_alignment = out_pos + alignment - aligned;
                }
                out_pos = field.offset + size;
                field.size = size;
                field.alignment = alignment;
                return true;
            }
        }

        for (const auto& e : scope->enums) {
            if (e.name == type_name) {
                out_name = type_name;
                std::uint32_t size, alignment;
                if (is_pointer) {
                    out_name += '*';
                    size = sizeof(void*);
                    alignment = alignof(void*);
                }
                else {
                    size = e.size;
                    alignment = e.alignment;
                }

                const auto aligned = out_pos % alignment;
                if (aligned == 0) {
                    last_pos_with_alignment = out_pos;
                }
                else {
                    last_pos_with_alignment = out_pos + alignment - aligned;
                }
                out_pos = field.offset + size;
                field.size = size;
                field.alignment = alignment;
                return true;
            }
        }
    }

    return false;
}

void dumper::format_class(loaded_class_t& cls, const std::vector<const loaded_scope_t*>& includes, std::string& source) {
    source += "class ";
    source += cls.name;

    if (!cls.parent_name.empty() &&
        !cls.parent_removed) {
        assert(cls.parent_cls != nullptr);
        assert(cls.parent_cls->formatted);

        source += " : public ";
        source += cls.parent_name;

        cls.pad_idx = cls.parent_cls->pad_idx;
    }

    source += " {";

    if (cls.parent_removed) {
        assert(!cls.parent_name.empty());
        source += " // " + cls.parent_name;
    }

    source += "\npublic:\n";

    std::uint32_t byte_pos = 0;
    std::uint32_t last_pos = 0;
    bool is_first_field = true;
    for (auto& f : cls.fields) {
        std::string translated_type_name;
        std::uint32_t last_pos_with_alignment;
        std::size_t format_delimiter;
        if (
            !get_field_type(
                f,
                translated_type_name,
                byte_pos,
                last_pos_with_alignment,
                format_delimiter,
                includes
            )) {
            source += "    // ";
            source += f.type_name;
            source += " ";
            source += f.name;
            source += ";\n";
            continue;
        }

        cls.alignment = (std::max)(cls.alignment, f.alignment);

        f.was_valid = true;

        // add padding
        // check parent for padding first
        if (is_first_field) {
            if (!cls.parent_name.empty() &&
                !cls.parent_removed) {
                const auto aligned = cls.parent_cls->size % f.alignment;
                if (aligned == 0) {
                    last_pos_with_alignment = cls.parent_cls->size;
                }
                else {
                    last_pos_with_alignment = cls.parent_cls->size + f.alignment - aligned;
                }

            }
        }

        // would like to assert here, but some structs can ignore alignment
        if (last_pos_with_alignment < f.offset) {
            const auto padding_size = f.offset - last_pos_with_alignment;
            source += "    char pad_0" + std::to_string(cls.pad_idx);
            source += "[" + std::to_string(padding_size) + "];\n";
            cls.pad_idx++;
        }

        // add type
        source += "    ";

        if (format_delimiter == std::string::npos) {
            source += translated_type_name;
        }
        else {
            source += translated_type_name.substr(0, format_delimiter);
        }

        source += " ";
        source += f.name;

        if (format_delimiter != std::string::npos) {
            source += translated_type_name.substr(format_delimiter);
        }

        source += ";\n";

        last_pos = byte_pos;
        is_first_field = false;
    }

    // end padding
    if (byte_pos < cls.size) {
        source += "    char pad_0" + std::to_string(cls.pad_idx);
        source += "[" + std::to_string(cls.size - byte_pos) + "];\n";
        cls.pad_idx++;
    }
    else {
        cls.size = byte_pos;
    }

    source += "};\n\n";

    cls.formatted = true;
}

void dumper::format_enum(loaded_enum_t& en, std::string& source) {
    source += "enum ";
    source += en.name;
    source += " : ";

    switch (en.size) {
    case 1:
        source += "uint8_t";
        assert(en.alignment == alignof(uint8_t));
        break;
    case 2:
        source += "uint16_t";
        assert(en.alignment == alignof(uint16_t));
        break;
    case 4:
        source += "uint32_t";
        assert(en.alignment == alignof(uint32_t));
        break;
    case 8:
        source += "uint64_t";
        assert(en.alignment == alignof(uint64_t));
        break;
    default:
        assert(false);
    }

    source += " {\n";
    
    for (auto& v : en.values) {
        source += "    ";
        source += v.name;
        source += " = ";
        source += std::to_string(v.value_big);
        source += ",\n";
    }

    source += "};\n\n";
}

void dumper::format_scope(loaded_scope_t& scope, const std::vector<const loaded_scope_t*>& includes,
                          const std::filesystem::path& out_path) {
    auto file_name = scope.name;
    if (scope.name == "!GlobalTypes") {
        file_name = "global_types";
    }

    for (auto& c : file_name) {
        if (c < 'a' && c > 'z') {
            if (c < 'A' && c > 'Z') {
                c = '_';
            }
        }
    }

    const auto file_path = out_path / (file_name + ".h");
    std::ofstream file(file_path, std::ios::trunc);
    if (!file) {
        std::println(stderr, "failed to open file '{}' for write", file_path.string());
        return;
    }

    std::size_t num_moved = 0;
    while (true) {
        num_moved = 0;
        for (std::size_t i = 0; i < scope.classes.size(); i++) {
            auto& c = scope.classes[i];
            if (c.parent_name.empty()) {
                continue;
            }

            // find parent class
            std::size_t i2;
            bool found = false;
            for (i2 = 0; i2 < scope.classes.size(); i2++) {
                auto& c2 = scope.classes[i2];
                if (c2.name == c.parent_name) {
                    found = true;
                    break;
                }
            }

            if (found &&
                i2 > i) {
                num_moved++;
                scope.classes.insert(
                    scope.classes.begin() + i,
                    std::move(scope.classes[i2])
                );

                scope.classes.erase(
                    scope.classes.begin() + i2 + 1
                );

                // we added one before i, so increase twice
                i++;
            }
        }

        if (num_moved == 0)
            break;
    }

    // find parent_cls
    for (auto& c : scope.classes) {
        if (c.parent_name.empty()) {
            continue;
        }


        c.parent_removed = true;
        for (auto& s : includes) {
            for (auto& c2 : s->classes) {
                if (c2.name == c.parent_name) {
                    c.parent_removed = false;
                    c.parent_cls = &c2;
                    break;
                }
            }
        }
    }

    std::string source;

    for (auto& e : scope.enums) {
        format_enum(e, source);
    }

    const std::size_t forward_def_insert_pos = source.length();

    current_forward_declared_classes_.clear();
    for (auto& c : scope.classes) {
        format_class(c, includes, source);
    }

    std::string fwd_source;
    for (const auto& c : current_forward_declared_classes_) {
        fwd_source += "class ";
        fwd_source += std::move(c);
        fwd_source += ";\n";
    }

    if (!fwd_source.empty()) {
        fwd_source += "\n\n";
        source.insert(
            source.begin() + forward_def_insert_pos,
            fwd_source.begin(),
            fwd_source.end()
        );
    }

    file.write(source.data(), source.length());
    file.close();
}

void dumper::dump(const std::filesystem::path& out_path) {
    assert(global_scope_);

    {
        std::vector<const loaded_scope_t*> includes;
        includes.push_back(global_scope_.get());
        format_scope(*global_scope_, includes, out_path);
    }

    for (auto& s : *scopes_) {
        std::vector<const loaded_scope_t*> includes;
        includes.push_back(global_scope_.get());
        includes.push_back(&s);
        format_scope(s, includes, out_path);
    }
}