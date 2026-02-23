#pragma once
#include <cstdint>
#include <functional>


struct c_interface_register {
    void* fn_create; // 0x0
    const char* name; // 0x8
    c_interface_register* next; // 0x10
};

struct CSchemaClassData;
struct CSchemaClassDataRef {
    char pad00[0x8]; // 0x0
    CSchemaClassData* value; // 0x8
};

struct CSchemaType {
    char pad00[0x8]; // 0x0
    const char* name; // 0x8
};

struct CSchemaFieldData {
    const char* name; // 0x0
    CSchemaType* type; // 0x8
    std::uint32_t offset; // 0x10
    char pad00[0xc]; // 0x14
};

struct CSchemaBaseClassData {
    char pad00[0x10]; // 0x0
    const char* name; // 0x10
    CSchemaBaseClassData* next; // 0x18
};

struct CSchemaClassData {
    char pad00[0x8]; // 0x0
    const char* name; // 0x8
    char pad01[0x8]; // 0x10
    std::uint32_t class_size; // 0x18
    std::uint16_t field_size; // 0x1c
    char pad02[0x2]; // 0x1e
    std::uint8_t alignment; // 0x20
    char pad03[3]; // 0x21
    std::uint8_t base_class_count; // 0x24
    CSchemaFieldData* fields; // 0x28
    CSchemaClassDataRef* base_classes; // 0x30;
    CSchemaBaseClassData* derrived_classes; // 0x38
};

struct CSchemaEnumValueData {
    const char* name;
    union {
        std::uint8_t value_u8;
        std::uint16_t value_u16;
        std::uint32_t value_u32;
        std::uint64_t value_u64;
    };
    char pad00[0x10];
};

struct CSchemaEnumData {
    char pad00[0x8]; // 0x0
    const char* name; // 0x8
    char pad01[0x8]; // 0x10
    std::uint8_t size; // 0x18
    std::uint8_t alignment; // 0x19
    std::uint32_t num_values; // 0x1c
    CSchemaEnumValueData* values; // 0x20
};

struct CSchemaDeclaredClass {
    char pad00[0x20];
    CSchemaClassData* value;
};

struct CSchemaDeclaredClassEntry {
    char pad00[0x10];
    CSchemaDeclaredClass* declared_class;
};

struct CSchemaDeclaredEnum {
    char pad00[0x20];
    CSchemaEnumData* value;
};

struct CSchemaDeclaredEnumEntry {
    char pad00[0x10];
    CSchemaDeclaredClass* declared_class;
};

struct CSchemaSystemTypeScope {
    char pad00[0x8]; // 0x0
    char name[0x100]; // 0x8
    CSchemaSystemTypeScope* global_scope; // 0x108
    char pad01[0x360]; // 0x110
    std::uint16_t num_classes; // 0x470
    CSchemaDeclaredClassEntry* classes; // 0x478
    char pad02[0x20]; // 0x480
    std::uint16_t num_enums; // 0x4a0
    CSchemaDeclaredEnumEntry* enums; // 0x4a8
};

template <class T>
struct CUtlVector {
    std::int32_t count;
    std::int32_t capacity;
    T* data;
    std::uint32_t max_capacity;
    std::int32_t flags;
};

struct CSchemaSystem {
    char pad00[0x190];
    CUtlVector<CSchemaSystemTypeScope*> type_scopes;
};