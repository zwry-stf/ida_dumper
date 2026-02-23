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


/// RsCullMode_t
_enum RsCullMode_t0 : uint8_t {
    RS_CULL_NONE = 0,
    RS_CULL_BACK = 1,
    RS_CULL_FRONT = 2,
};

/// RsFillMode_t
_enum RsFillMode_t0 : uint8_t {
    RS_FILL_SOLID = 0,
    RS_FILL_WIREFRAME = 1,
};

/// RsComparison_t
_enum RsComparison_t0 : uint8_t {
    RS_CMP_NEVER = 0,
    RS_CMP_LESS = 1,
    RS_CMP_EQUAL = 2,
    RS_CMP_LESS_EQUAL = 3,
    RS_CMP_GREATER = 4,
    RS_CMP_NOT_EQUAL = 5,
    RS_CMP_GREATER_EQUAL = 6,
    RS_CMP_ALWAYS = 7,
};

/// RenderSlotType_t
_enum RenderSlotType_t0 : uint8_t {
    RENDER_SLOT_INVALID = 255,
    RENDER_SLOT_PER_VERTEX = 0,
    RENDER_SLOT_PER_INSTANCE = 1,
};

/// RenderBufferFlags_t
_enum RenderBufferFlags_t0 : uint32_t {
    RENDER_BUFFER_USAGE_NONE = 0,
    RENDER_BUFFER_USAGE_VERTEX_BUFFER = 1,
    RENDER_BUFFER_USAGE_INDEX_BUFFER = 2,
    RENDER_BUFFER_USAGE_SHADER_RESOURCE = 4,
    RENDER_BUFFER_USAGE_UNORDERED_ACCESS = 8,
    RENDER_BUFFER_BYTEADDRESS_BUFFER = 16,
    RENDER_BUFFER_STRUCTURED_BUFFER = 32,
    RENDER_BUFFER_UAV_DRAW_INDIRECT_ARGS = 256,
    RENDER_BUFFER_ACCELERATION_STRUCTURE = 512,
    RENDER_BUFFER_SHADER_BINDING_TABLE = 1024,
    RENDER_BUFFER_POOL_ALLOCATED = 2048,
    RENDER_BUFFER_USAGE_CONDITIONAL_RENDERING = 4096,
    RENDER_BUFFER_IMMOVABLE_ALLOCATION = 8192,
};

/// RenderPrimitiveType_t
_enum RenderPrimitiveType_t0 : uint32_t {
    RENDER_PRIM_POINTS = 0,
    RENDER_PRIM_LINES = 1,
    RENDER_PRIM_LINES_WITH_ADJACENCY = 2,
    RENDER_PRIM_LINE_STRIP = 3,
    RENDER_PRIM_LINE_STRIP_WITH_ADJACENCY = 4,
    RENDER_PRIM_TRIANGLES = 5,
    RENDER_PRIM_TRIANGLES_WITH_ADJACENCY = 6,
    RENDER_PRIM_TRIANGLE_STRIP = 7,
    RENDER_PRIM_TRIANGLE_STRIP_WITH_ADJACENCY = 8,
    RENDER_PRIM_INSTANCED_QUADS = 9,
    RENDER_PRIM_HETEROGENOUS = 10,
    RENDER_PRIM_COMPUTE_SHADER = 11,
    RENDER_PRIM_MESH_SHADER = 12,
    RENDER_PRIM_TYPE_COUNT = 13,
};

/// InputLayoutVariation_t
_enum InputLayoutVariation_t0 : uint8_t {
    INPUT_LAYOUT_VARIATION_DEFAULT = 0,
    INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID = 1,
    INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID_MORPH_VERT_ID = 2,
    INPUT_LAYOUT_VARIATION_MAX = 3,
};

/// RenderMultisampleType_t
_enum RenderMultisampleType_t0 : uint8_t {
    RENDER_MULTISAMPLE_INVALID = 255,
    RENDER_MULTISAMPLE_NONE = 0,
    RENDER_MULTISAMPLE_2X = 1,
    RENDER_MULTISAMPLE_4X = 2,
    RENDER_MULTISAMPLE_6X = 3,
    RENDER_MULTISAMPLE_8X = 4,
    RENDER_MULTISAMPLE_16X = 5,
    RENDER_MULTISAMPLE_TYPE_COUNT = 6,
};

/// RsRasterizerStateDesc_t
class __declspec(align(4)) RsRasterizerStateDesc_t0 {
public:
    RsFillMode_t m_nFillMode; // 0x0
    RsCullMode_t m_nCullMode; // 0x1
    bool m_bDepthClipEnable; // 0x2
    bool m_bMultisampleEnable; // 0x3
    int32_t m_nDepthBias; // 0x4
    float m_flDepthBiasClamp; // 0x8
    float m_flSlopeScaledDepthBias; // 0xc
}; // size: 0x10

/// RsStencilStateDesc_t
class __declspec(align(1)) RsStencilStateDesc_t0 {
public:
    // bitfield:1 m_bStencilEnable;
    // bitfield:3 m_frontStencilFailOp;
    // bitfield:3 m_frontStencilDepthFailOp;
    // bitfield:3 m_frontStencilPassOp;
    // bitfield:3 m_frontStencilFunc;
    // bitfield:3 m_backStencilFailOp;
    // bitfield:3 m_backStencilDepthFailOp;
    // bitfield:3 m_backStencilPassOp;
    // bitfield:3 m_backStencilFunc;
    char pad_00[4];
    uint8_t m_nStencilReadMask; // 0x4
    uint8_t m_nStencilWriteMask; // 0x5
}; // size: 0x6

/// RsDepthStencilStateDesc_t
class __declspec(align(1)) RsDepthStencilStateDesc_t0 {
public:
    // bitfield:1 m_bDepthTestEnable;
    // bitfield:1 m_bDepthWriteEnable;
    char pad_00[1];
    RsComparison_t m_depthFunc; // 0x1
    RsStencilStateDesc_t m_stencilState; // 0x2
}; // size: 0x8

/// RsBlendStateDesc_t
class __declspec(align(4)) RsBlendStateDesc_t0 {
public:
    uint32_t m_srcBlendBits; // 0x0
    uint32_t m_destBlendBits; // 0x4
    uint32_t m_srcBlendAlphaBits; // 0x8
    uint32_t m_destBlendAlphaBits; // 0xc
    uint32_t m_renderTargetWriteMaskBits; // 0x10
    // bitfield:30 m_blendOpBits;
    // bitfield:1 m_bAlphaToCoverageEnable;
    // bitfield:1 m_bIndependentBlendEnable;
    char pad_00[4];
    uint32_t m_blendOpAlphaBits; // 0x18
    uint8_t m_blendEnableBits; // 0x1c
    uint8_t m_srgbWriteEnableBits; // 0x1d
    char pad_01[2];
}; // size: 0x20

/// SheetSequenceIntegerId_t
class __declspec(align(4)) SheetSequenceIntegerId_t0 {
public:
    uint32_t m_Value; // 0x0
}; // size: 0x4

/// RenderInputLayoutField_t
class __declspec(align(2)) RenderInputLayoutField_t0 {
public:
    char m_pSemanticName[32]; // 0x0
    int8_t m_nSemanticIndex; // 0x20
    char pad_00[6];
    int16_t m_nOffset; // 0x28
    int8_t m_nSlot; // 0x2a
    RenderSlotType_t m_nSlotType; // 0x2b
    char m_szShaderSemantic[32]; // 0x2c
}; // size: 0x4c

/// VsInputSignatureElement_t
class __declspec(align(4)) VsInputSignatureElement_t0 {
public:
    char m_pName[64]; // 0x0
    char m_pSemantic[64]; // 0x40
    char m_pD3DSemanticName[64]; // 0x80
    int32_t m_nD3DSemanticIndex; // 0xc0
}; // size: 0xc4

/// VsInputSignature_t
class __declspec(align(1)) VsInputSignature_t0 {
public:
    // CUtlVector< VsInputSignatureElement_t > m_elems;
    // CUtlVector< VsInputSignatureElement_t > m_depth_elems;
    char pad_00[48];
}; // size: 0x30

#ifdef __cplusplus
#pragma warning(pop)
#endif // __cplusplus