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


/// HorizJustification_e
_enum HorizJustification_e0 : uint32_t {
    HORIZ_JUSTIFICATION_LEFT = 0,
    HORIZ_JUSTIFICATION_CENTER = 1,
    HORIZ_JUSTIFICATION_RIGHT = 2,
    HORIZ_JUSTIFICATION_NONE = 3,
};

/// VertJustification_e
_enum VertJustification_e0 : uint32_t {
    VERT_JUSTIFICATION_TOP = 0,
    VERT_JUSTIFICATION_CENTER = 1,
    VERT_JUSTIFICATION_BOTTOM = 2,
    VERT_JUSTIFICATION_NONE = 3,
};

/// LayoutPositionType_e
_enum LayoutPositionType_e0 : uint32_t {
    LAYOUTPOSITIONTYPE_VIEWPORT_RELATIVE = 0,
    LAYOUTPOSITIONTYPE_FRACTIONAL = 1,
    LAYOUTPOSITIONTYPE_NONE = 2,
};

/// BloomBlendMode_t
_enum BloomBlendMode_t0 : uint32_t {
    BLOOM_BLEND_ADD = 0,
    BLOOM_BLEND_SCREEN = 1,
    BLOOM_BLEND_BLUR = 2,
};

/// ViewFadeMode_t
_enum ViewFadeMode_t0 : uint32_t {
    VIEW_FADE_CONSTANT_COLOR = 0,
    VIEW_FADE_MODULATE = 1,
    VIEW_FADE_MOD2X = 2,
};

/// MaterialParam_t
class __declspec(align(8)) MaterialParam_t0 {
public:
    // CUtlString m_name;
    char pad_00[8];
}; // size: 0x8

/// MaterialParamInt_t
class __declspec(align(8)) MaterialParamInt_t0 {
public:
    char pad_00[8];
    int32_t m_nValue; // 0x8
    char pad_01[4];
}; // size: 0x10

/// MaterialParamFloat_t
class __declspec(align(8)) MaterialParamFloat_t0 {
public:
    char pad_00[8];
    float m_flValue; // 0x8
    char pad_01[4];
}; // size: 0x10

/// MaterialParamVector_t
class __declspec(align(8)) MaterialParamVector_t0 {
public:
    char pad_00[8];
    Vector4D m_value; // 0x8
}; // size: 0x18

/// MaterialParamTexture_t
class __declspec(align(8)) MaterialParamTexture_t0 {
public:
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pValue;
    char pad_00[16];
}; // size: 0x10

/// MaterialParamString_t
class __declspec(align(8)) MaterialParamString_t0 {
public:
    // CUtlString m_value;
    char pad_00[16];
}; // size: 0x10

/// MaterialParamBuffer_t
class __declspec(align(8)) MaterialParamBuffer_t0 {
public:
    // CUtlBinaryBlock m_value;
    char pad_00[24];
}; // size: 0x18

/// MaterialResourceData_t
class __declspec(align(8)) MaterialResourceData_t0 {
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
}; // size: 0x130

/// PostProcessingTonemapParameters_t
class __declspec(align(4)) PostProcessingTonemapParameters_t0 {
public:
    float m_flExposureBias; // 0x0
    float m_flShoulderStrength; // 0x4
    float m_flLinearStrength; // 0x8
    float m_flLinearAngle; // 0xc
    float m_flToeStrength; // 0x10
    float m_flToeNum; // 0x14
    float m_flToeDenom; // 0x18
    float m_flWhitePoint; // 0x1c
    float m_flLuminanceSource; // 0x20
    float m_flExposureBiasShadows; // 0x24
    float m_flExposureBiasHighlights; // 0x28
    float m_flMinShadowLum; // 0x2c
    float m_flMaxShadowLum; // 0x30
    float m_flMinHighlightLum; // 0x34
    float m_flMaxHighlightLum; // 0x38
}; // size: 0x3c

/// PostProcessingBloomParameters_t
class __declspec(align(4)) PostProcessingBloomParameters_t0 {
public:
    BloomBlendMode_t m_blendMode; // 0x0
    float m_flBloomStrength; // 0x4
    float m_flScreenBloomStrength; // 0x8
    float m_flBlurBloomStrength; // 0xc
    float m_flBloomThreshold; // 0x10
    float m_flBloomThresholdWidth; // 0x14
    float m_flSkyboxBloomStrength; // 0x18
    float m_flBloomStartValue; // 0x1c
    float m_flComputeBloomStrength; // 0x20
    float m_flComputeBloomThreshold; // 0x24
    float m_flComputeBloomRadius; // 0x28
    float m_flComputeBloomEffectsScale; // 0x2c
    float m_flComputeBloomLensDirtStrength; // 0x30
    float m_flComputeBloomLensDirtBlackLevel; // 0x34
    float m_flBlurWeight[5]; // 0x38
    Vector m_vBlurTint; // 0x4c
    char pad_00[48];
}; // size: 0x88

/// PostProcessingVignetteParameters_t
class __declspec(align(4)) PostProcessingVignetteParameters_t0 {
public:
    float m_flVignetteStrength; // 0x0
    Vector2D m_vCenter; // 0x4
    float m_flRadius; // 0xc
    float m_flRoundness; // 0x10
    float m_flFeather; // 0x14
    Vector m_vColorTint; // 0x18
}; // size: 0x24

/// PostProcessingLocalContrastParameters_t
class __declspec(align(4)) PostProcessingLocalContrastParameters_t0 {
public:
    float m_flLocalContrastStrength; // 0x0
    float m_flLocalContrastEdgeStrength; // 0x4
    float m_flLocalContrastVignetteStart; // 0x8
    float m_flLocalContrastVignetteEnd; // 0xc
    float m_flLocalContrastVignetteBlur; // 0x10
}; // size: 0x14

/// PostProcessingFogScatteringParameters_t
class __declspec(align(4)) PostProcessingFogScatteringParameters_t0 {
public:
    float m_fRadius; // 0x0
    float m_fScale; // 0x4
    float m_fCubemapScale; // 0x8
    float m_fVolumetricScale; // 0xc
    float m_fGradientScale; // 0x10
}; // size: 0x14

/// PostProcessingResource_t
class __declspec(align(8)) PostProcessingResource_t0 {
public:
    bool m_bHasTonemapParams; // 0x0
    PostProcessingTonemapParameters_t m_toneMapParams; // 0x4
    bool m_bHasBloomParams; // 0x40
    PostProcessingBloomParameters_t m_bloomParams; // 0x44
    bool m_bHasVignetteParams; // 0xcc
    PostProcessingVignetteParameters_t m_vignetteParams; // 0xd0
    bool m_bHasLocalContrastParams; // 0xf4
    PostProcessingLocalContrastParameters_t m_localConstrastParams; // 0xf8
    int32_t m_nColorCorrectionVolumeDim; // 0x10c
    // CUtlBinaryBlock m_colorCorrectionVolumeData;
    char pad_00[16];
    bool m_bHasColorCorrection; // 0x120
    bool m_bHasFogScatteringParams; // 0x121
    PostProcessingFogScatteringParameters_t m_fogScatteringParams; // 0x124
}; // size: 0x138

#ifdef __cplusplus
#pragma warning(pop)
#endif // __cplusplus