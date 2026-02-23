enum HorizJustification_e : uint32_t {
    HORIZ_JUSTIFICATION_LEFT = 0,
    HORIZ_JUSTIFICATION_CENTER = 1,
    HORIZ_JUSTIFICATION_RIGHT = 2,
    HORIZ_JUSTIFICATION_NONE = 3,
};

enum VertJustification_e : uint32_t {
    VERT_JUSTIFICATION_TOP = 0,
    VERT_JUSTIFICATION_CENTER = 1,
    VERT_JUSTIFICATION_BOTTOM = 2,
    VERT_JUSTIFICATION_NONE = 3,
};

enum LayoutPositionType_e : uint32_t {
    LAYOUTPOSITIONTYPE_VIEWPORT_RELATIVE = 0,
    LAYOUTPOSITIONTYPE_FRACTIONAL = 1,
    LAYOUTPOSITIONTYPE_NONE = 2,
};

enum BloomBlendMode_t : uint32_t {
    BLOOM_BLEND_ADD = 0,
    BLOOM_BLEND_SCREEN = 1,
    BLOOM_BLEND_BLUR = 2,
};

enum ViewFadeMode_t : uint32_t {
    VIEW_FADE_CONSTANT_COLOR = 0,
    VIEW_FADE_MODULATE = 1,
    VIEW_FADE_MOD2X = 2,
};

class MaterialParam_t {
public:
    // CUtlString m_name;
    char pad_00[8];
};

class MaterialParamInt_t {
public:
    char pad_00[8];
    int32_t m_nValue;
    char pad_01[4];
};

class MaterialParamFloat_t {
public:
    char pad_00[8];
    float m_flValue;
    char pad_01[4];
};

class MaterialParamVector_t {
public:
    char pad_00[8];
    Vector4D m_value;
};

class MaterialParamTexture_t {
public:
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pValue;
    char pad_00[16];
};

class MaterialParamString_t {
public:
    // CUtlString m_value;
    char pad_00[16];
};

class MaterialParamBuffer_t {
public:
    // CUtlBinaryBlock m_value;
    char pad_00[24];
};

class MaterialResourceData_t {
public:
    // CUtlString m_materialName;
    // CUtlString m_shaderName;
    // CUtlVector< MaterialParamInt_t > m_intParams;
    // CUtlVector< MaterialParamFloat_t > m_floatParams;
    // CUtlVector< MaterialParamVector_t > m_vectorParams;
    // CUtlVector< MaterialParamTexture_t > m_textureParams;
    // CUtlVector< MaterialParamBuffer_t > m_dynamicParams;
    // CUtlVector< MaterialParamBuffer_t > m_dynamicTextureParams;
    // CUtlVector< MaterialParamInt_t > m_intAttributes;
    // CUtlVector< MaterialParamFloat_t > m_floatAttributes;
    // CUtlVector< MaterialParamVector_t > m_vectorAttributes;
    // CUtlVector< MaterialParamTexture_t > m_textureAttributes;
    // CUtlVector< MaterialParamString_t > m_stringAttributes;
    // CUtlVector< CUtlString > m_renderAttributesUsed;
    char pad_00[304];
};

class PostProcessingTonemapParameters_t {
public:
    float m_flExposureBias;
    float m_flShoulderStrength;
    float m_flLinearStrength;
    float m_flLinearAngle;
    float m_flToeStrength;
    float m_flToeNum;
    float m_flToeDenom;
    float m_flWhitePoint;
    float m_flLuminanceSource;
    float m_flExposureBiasShadows;
    float m_flExposureBiasHighlights;
    float m_flMinShadowLum;
    float m_flMaxShadowLum;
    float m_flMinHighlightLum;
    float m_flMaxHighlightLum;
};

class PostProcessingBloomParameters_t {
public:
    BloomBlendMode_t m_blendMode;
    float m_flBloomStrength;
    float m_flScreenBloomStrength;
    float m_flBlurBloomStrength;
    float m_flBloomThreshold;
    float m_flBloomThresholdWidth;
    float m_flSkyboxBloomStrength;
    float m_flBloomStartValue;
    float m_flComputeBloomStrength;
    float m_flComputeBloomThreshold;
    float m_flComputeBloomRadius;
    float m_flComputeBloomEffectsScale;
    float m_flComputeBloomLensDirtStrength;
    float m_flComputeBloomLensDirtBlackLevel;
    float m_flBlurWeight[5];
    Vector m_vBlurTint;
    char pad_00[48];
};

class PostProcessingVignetteParameters_t {
public:
    float m_flVignetteStrength;
    Vector2D m_vCenter;
    float m_flRadius;
    float m_flRoundness;
    float m_flFeather;
    Vector m_vColorTint;
};

class PostProcessingLocalContrastParameters_t {
public:
    float m_flLocalContrastStrength;
    float m_flLocalContrastEdgeStrength;
    float m_flLocalContrastVignetteStart;
    float m_flLocalContrastVignetteEnd;
    float m_flLocalContrastVignetteBlur;
};

class PostProcessingFogScatteringParameters_t {
public:
    float m_fRadius;
    float m_fScale;
    float m_fCubemapScale;
    float m_fVolumetricScale;
    float m_fGradientScale;
};

class PostProcessingResource_t {
public:
    bool m_bHasTonemapParams;
    PostProcessingTonemapParameters_t m_toneMapParams;
    bool m_bHasBloomParams;
    PostProcessingBloomParameters_t m_bloomParams;
    bool m_bHasVignetteParams;
    PostProcessingVignetteParameters_t m_vignetteParams;
    bool m_bHasLocalContrastParams;
    PostProcessingLocalContrastParameters_t m_localConstrastParams;
    int32_t m_nColorCorrectionVolumeDim;
    // CUtlBinaryBlock m_colorCorrectionVolumeData;
    char pad_00[16];
    bool m_bHasColorCorrection;
    bool m_bHasFogScatteringParams;
    PostProcessingFogScatteringParameters_t m_fogScatteringParams;
};

