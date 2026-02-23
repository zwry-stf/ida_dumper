#ifdef __cplusplus
#include <stdint.h>
#pragma warning(push)
#pragma warning(disable: 4324)
#ifndef _enum
#define _enum enum class
#endif // _enum
#include "global_types.h"
#else
#ifndef _enum
#define _enum enum
#endif // _enum
#endif // __cplusplus


/// ThreeState_t
_enum ThreeState_t0 : uint32_t {
    TRS_FALSE = 0,
    TRS_TRUE = 1,
    TRS_NONE = 2,
};

/// fieldtype_t
_enum fieldtype_t0 : uint8_t {
    FIELD_VOID = 0,
    FIELD_FLOAT32 = 1,
    FIELD_STRING = 2,
    FIELD_VECTOR = 3,
    FIELD_QUATERNION = 4,
    FIELD_INT32 = 5,
    FIELD_BOOLEAN = 6,
    FIELD_INT16 = 7,
    FIELD_CHARACTER = 8,
    FIELD_COLOR32 = 9,
    FIELD_EMBEDDED = 10,
    FIELD_CUSTOM = 11,
    FIELD_CLASSPTR = 12,
    FIELD_EHANDLE = 13,
    FIELD_POSITION_VECTOR = 14,
    FIELD_TIME = 15,
    FIELD_TICK = 16,
    FIELD_SOUNDNAME = 17,
    FIELD_INPUT = 18,
    FIELD_FUNCTION = 19,
    FIELD_VMATRIX = 20,
    FIELD_VMATRIX_WORLDSPACE = 21,
    FIELD_MATRIX3X4_WORLDSPACE = 22,
    FIELD_INTERVAL = 23,
    FIELD_UNUSED = 24,
    FIELD_VECTOR2D = 25,
    FIELD_INT64 = 26,
    FIELD_VECTOR4D = 27,
    FIELD_RESOURCE = 28,
    FIELD_TYPEUNKNOWN = 29,
    FIELD_CSTRING = 30,
    FIELD_HSCRIPT = 31,
    FIELD_VARIANT = 32,
    FIELD_UINT64 = 33,
    FIELD_FLOAT64 = 34,
    FIELD_POSITIVEINTEGER_OR_NULL = 35,
    FIELD_HSCRIPT_NEW_INSTANCE = 36,
    FIELD_UINT32 = 37,
    FIELD_UTLSTRINGTOKEN = 38,
    FIELD_QANGLE = 39,
    FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_VECTOR = 40,
    FIELD_HMATERIAL = 41,
    FIELD_HMODEL = 42,
    FIELD_NETWORK_QUANTIZED_VECTOR = 43,
    FIELD_NETWORK_QUANTIZED_FLOAT = 44,
    FIELD_DIRECTION_VECTOR_WORLDSPACE = 45,
    FIELD_QANGLE_WORLDSPACE = 46,
    FIELD_QUATERNION_WORLDSPACE = 47,
    FIELD_HSCRIPT_LIGHTBINDING = 48,
    FIELD_V8_VALUE = 49,
    FIELD_V8_OBJECT = 50,
    FIELD_V8_ARRAY = 51,
    FIELD_V8_CALLBACK_INFO = 52,
    FIELD_UTLSTRING = 53,
    FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_POSITION_VECTOR = 54,
    FIELD_HRENDERTEXTURE = 55,
    FIELD_HPARTICLESYSTEMDEFINITION = 56,
    FIELD_UINT8 = 57,
    FIELD_UINT16 = 58,
    FIELD_CTRANSFORM = 59,
    FIELD_CTRANSFORM_WORLDSPACE = 60,
    FIELD_HPOSTPROCESSING = 61,
    FIELD_MATRIX3X4 = 62,
    FIELD_SHIM = 63,
    FIELD_CMOTIONTRANSFORM = 64,
    FIELD_CMOTIONTRANSFORM_WORLDSPACE = 65,
    FIELD_ATTACHMENT_HANDLE = 66,
    FIELD_AMMO_INDEX = 67,
    FIELD_CONDITION_ID = 68,
    FIELD_AI_SCHEDULE_BITS = 69,
    FIELD_MODIFIER_HANDLE = 70,
    FIELD_ROTATION_VECTOR = 71,
    FIELD_ROTATION_VECTOR_WORLDSPACE = 72,
    FIELD_HVDATA = 73,
    FIELD_SCALE32 = 74,
    FIELD_STRING_AND_TOKEN = 75,
    FIELD_ENGINE_TIME = 76,
    FIELD_ENGINE_TICK = 77,
    FIELD_WORLD_GROUP_ID = 78,
    FIELD_GLOBALSYMBOL = 79,
    FIELD_HNMGRAPHDEFINITION = 80,
    FIELD_TYPECOUNT = 81,
};

/// CSchemaSystemInternalRegistration
class __declspec(align(4)) CSchemaSystemInternalRegistration0 {
public:
    Vector2D m_Vector2D; // 0x0
    Vector m_Vector; // 0x8
    // VectorWS m_VectorWS;
    // VectorAligned m_VectorAligned;
    // Quaternion m_Quaternion;
    char pad_00[44];
    QAngle m_QAngle; // 0x40
    // RotationVector m_RotationVector;
    // RadianEuler m_RadianEuler;
    // DegreeEuler m_DegreeEuler;
    // QuaternionStorage m_QuaternionStorage;
    // matrix3x4_t m_matrix3x4_t;
    // matrix3x4a_t m_matrix3x4a_t;
    // Color m_Color;
    char pad_01[152];
    Vector4D m_Vector4D; // 0xe4
    // CTransform m_CTransform;
    // KeyValues* m_pKeyValues;
    // CUtlBinaryBlock m_CUtlBinaryBlock;
    // CUtlString m_CUtlString;
    // CUtlSymbol m_CUtlSymbol;
    // CUtlStringToken m_stringToken;
    // CUtlStringTokenWithStorage m_stringTokenWithStorage;
    // CResourceArray< CResourcePointer< CResourceString > > m_ResourceTypes;
    // KeyValues3 m_KV3;
    char pad_02[140];
}; // size: 0x180

/// InfoForResourceTypeCResourceManifestInternal
class __declspec(align(1)) InfoForResourceTypeCResourceManifestInternal0 {
public:
    char pad_00[1];
}; // size: 0x1

/// ResourceId_t
class __declspec(align(8)) ResourceId_t0 {
public:
    uint64_t m_Value; // 0x0
}; // size: 0x8

/// CExampleSchemaVData_Monomorphic
class __declspec(align(4)) CExampleSchemaVData_Monomorphic0 {
public:
    int32_t m_nExample1; // 0x0
    int32_t m_nExample2; // 0x4
}; // size: 0x8

/// CExampleSchemaVData_PolymorphicBase
class __declspec(align(8)) CExampleSchemaVData_PolymorphicBase0 {
public:
    char pad_00[8];
    int32_t m_nBase; // 0x8
    char pad_01[4];
}; // size: 0x10

/// CExampleSchemaVData_PolymorphicDerivedA
class __declspec(align(8)) CExampleSchemaVData_PolymorphicDerivedA0 {
public:
    char pad_00[16];
    int32_t m_nDerivedA; // 0x10
    char pad_01[4];
}; // size: 0x18

/// CExampleSchemaVData_PolymorphicDerivedB
class __declspec(align(8)) CExampleSchemaVData_PolymorphicDerivedB0 {
public:
    char pad_00[16];
    int32_t m_nDerivedB; // 0x10
    char pad_01[4];
}; // size: 0x18

#ifdef __cplusplus
#pragma warning(pop)
#endif // __cplusplus