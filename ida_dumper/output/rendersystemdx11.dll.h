enum RsCullMode_t : uint8_t {
    RS_CULL_NONE = 0,
    RS_CULL_BACK = 1,
    RS_CULL_FRONT = 2,
};

enum RsFillMode_t : uint8_t {
    RS_FILL_SOLID = 0,
    RS_FILL_WIREFRAME = 1,
};

enum RsComparison_t : uint8_t {
    RS_CMP_NEVER = 0,
    RS_CMP_LESS = 1,
    RS_CMP_EQUAL = 2,
    RS_CMP_LESS_EQUAL = 3,
    RS_CMP_GREATER = 4,
    RS_CMP_NOT_EQUAL = 5,
    RS_CMP_GREATER_EQUAL = 6,
    RS_CMP_ALWAYS = 7,
};

enum RenderSlotType_t : uint8_t {
    RENDER_SLOT_INVALID = 255,
    RENDER_SLOT_PER_VERTEX = 0,
    RENDER_SLOT_PER_INSTANCE = 1,
};

enum RenderBufferFlags_t : uint32_t {
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

enum RenderPrimitiveType_t : uint32_t {
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

enum InputLayoutVariation_t : uint8_t {
    INPUT_LAYOUT_VARIATION_DEFAULT = 0,
    INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID = 1,
    INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID_MORPH_VERT_ID = 2,
    INPUT_LAYOUT_VARIATION_MAX = 3,
};

enum RenderMultisampleType_t : uint8_t {
    RENDER_MULTISAMPLE_INVALID = 255,
    RENDER_MULTISAMPLE_NONE = 0,
    RENDER_MULTISAMPLE_2X = 1,
    RENDER_MULTISAMPLE_4X = 2,
    RENDER_MULTISAMPLE_6X = 3,
    RENDER_MULTISAMPLE_8X = 4,
    RENDER_MULTISAMPLE_16X = 5,
    RENDER_MULTISAMPLE_TYPE_COUNT = 6,
};

class RsRasterizerStateDesc_t {
public:
    RsFillMode_t m_nFillMode;
    RsCullMode_t m_nCullMode;
    bool m_bDepthClipEnable;
    bool m_bMultisampleEnable;
    int32_t m_nDepthBias;
    float m_flDepthBiasClamp;
    float m_flSlopeScaledDepthBias;
};

class RsStencilStateDesc_t {
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
    uint8_t m_nStencilReadMask;
    uint8_t m_nStencilWriteMask;
};

class RsDepthStencilStateDesc_t {
public:
    // bitfield:1 m_bDepthTestEnable;
    // bitfield:1 m_bDepthWriteEnable;
    char pad_00[1];
    RsComparison_t m_depthFunc;
    RsStencilStateDesc_t m_stencilState;
};

class RsBlendStateDesc_t {
public:
    uint32_t m_srcBlendBits;
    uint32_t m_destBlendBits;
    uint32_t m_srcBlendAlphaBits;
    uint32_t m_destBlendAlphaBits;
    uint32_t m_renderTargetWriteMaskBits;
    // bitfield:30 m_blendOpBits;
    // bitfield:1 m_bAlphaToCoverageEnable;
    // bitfield:1 m_bIndependentBlendEnable;
    char pad_00[4];
    uint32_t m_blendOpAlphaBits;
    uint8_t m_blendEnableBits;
    uint8_t m_srgbWriteEnableBits;
    char pad_01[2];
};

class SheetSequenceIntegerId_t {
public:
    uint32_t m_Value;
};

class RenderInputLayoutField_t {
public:
    char m_pSemanticName[32];
    int8_t m_nSemanticIndex;
    char pad_00[6];
    int16_t m_nOffset;
    int8_t m_nSlot;
    RenderSlotType_t m_nSlotType;
    char m_szShaderSemantic[32];
};

class VsInputSignatureElement_t {
public:
    char m_pName[64];
    char m_pSemantic[64];
    char m_pD3DSemanticName[64];
    int32_t m_nD3DSemanticIndex;
};

class VsInputSignature_t {
public:
    // CUtlVector< VsInputSignatureElement_t > m_elems;
    // CUtlVector< VsInputSignatureElement_t > m_depth_elems;
    char pad_00[48];
};

