#pragma once
#include <cstdint>
#include <cstddef>
#include <concepts>
#include <Windows.h>
#include <vector>
#include <memory>
#include <filesystem>
#include <string>


struct CSchemaSystem;
struct CSchemaSystemTypeScope;
struct CSchemaClassData;
struct CSchemaFieldData;
struct CSchemaEnumData;
struct CSchemaEnumValueData;

struct loaded_scope_t;
struct loaded_class_t;
struct loaded_field_t;
struct loaded_enum_t;
struct loaded_enum_value_t;

struct module_t {
    std::uintptr_t base{};
    std::size_t size{};
};
class dumper {
private:
	HANDLE handle_{};
    std::unique_ptr<std::vector<loaded_scope_t>> scopes_;
    std::unique_ptr<loaded_scope_t> global_scope_;
    std::vector<std::string> current_forward_declared_classes_;

public:
    dumper();
    ~dumper();

public:
    /// memory
	bool attach(const char* name);
    void detach();

	[[nodiscard]] bool has_valid_handle() const noexcept {
		return handle_ != NULL;
	}

    bool read(std::uintptr_t address, void* out, std::size_t size) const;

    template <typename T>
        requires(std::is_trivially_copyable_v<T>)
    [[nodiscard]] T read(std::uintptr_t address) const {
        T ret;
        read(
            address,
            &ret,
            sizeof(T)
        );

        return ret;
    }

    [[nodiscard]] module_t get_module(const char* name);
    [[nodiscard]] std::uintptr_t get_export(const module_t& module, const char* name) const;

public:
    /// dumping
    bool parse(CSchemaSystem* schema_system);

    void dump(const std::filesystem::path& path);

private:
    void add_forward_declared_classs(const std::string& name);
    void add_default_classes(loaded_scope_t& scope);

    bool parse_type_scope(const CSchemaSystemTypeScope* type_scope, loaded_scope_t& out);
    bool parse_class(const CSchemaClassData& cls, loaded_class_t& out);
    bool parse_field(const CSchemaFieldData& field, loaded_field_t& out);
    bool parse_enum(const CSchemaEnumData& en, loaded_enum_t& out);
    bool parse_enum_value(const CSchemaEnumValueData& data, std::uint32_t size, loaded_enum_value_t& out);

    bool get_field_type(loaded_field_t& field, std::string& out_name, std::uint32_t& out_pos,
                        std::uint32_t& last_pos_with_alignment, std::size_t& special_format_delimiter,
                        const std::vector<const loaded_scope_t*>& includes);
    void format_class(loaded_class_t& cls, const std::vector<const loaded_scope_t*>& includes, std::string& source);
    void format_enum(loaded_enum_t& en, std::string& source);
    void format_scope(loaded_scope_t& scope, const std::vector<const loaded_scope_t*>& includes, 
                      const std::filesystem::path& out_path);
};