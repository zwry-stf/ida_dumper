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


/// SteamAudioReverbSettings_t
class __declspec(align(4)) SteamAudioReverbSettings_t0 {
public:
    int32_t m_nNumRays; // 0x0
    int32_t m_nNumBounces; // 0x4
    float m_flIRDuration; // 0x8
    int32_t m_nAmbisonicsOrder; // 0xc
}; // size: 0x10

/// SteamAudioReverbClusteringSettings_t
class __declspec(align(4)) SteamAudioReverbClusteringSettings_t0 {
public:
    bool m_bEnableClustering; // 0x0
    int32_t m_nCubeMapResolution; // 0x4
    float m_flDepthThreshold; // 0x8
}; // size: 0xc

/// SteamAudioReverbCompressionSettings_t
class __declspec(align(4)) SteamAudioReverbCompressionSettings_t0 {
public:
    bool m_bEnableCompression; // 0x0
    float m_flQuality; // 0x4
}; // size: 0x8

/// SteamAudioPathSettings_t
class __declspec(align(4)) SteamAudioPathSettings_t0 {
public:
    int32_t m_nNumVisSamples; // 0x0
    float m_flProbeVisRadius; // 0x4
    float m_flProbeVisThreshold; // 0x8
    float m_flProbePathRange; // 0xc
}; // size: 0x10

/// SteamAudioCustomDataOcclusionSettings_t
class __declspec(align(4)) SteamAudioCustomDataOcclusionSettings_t0 {
public:
    bool m_bEnablePathing; // 0x0
    bool m_bEnableReflections; // 0x1
    int32_t m_nReflectionRays; // 0x4
    int32_t m_nReflectionBounces; // 0x8
}; // size: 0xc

/// SteamAudioCustomDataDimensionsSettings_t
class __declspec(align(4)) SteamAudioCustomDataDimensionsSettings_t0 {
public:
    int32_t m_nAmbisonicsOrderOutsideField; // 0x0
    int32_t m_nAmbisonicsOrderInsideSizeField; // 0x4
    float m_flOutsideThreshold; // 0x8
    float m_flSizeThreshold; // 0xc
    float m_flInsideThreshold; // 0x10
}; // size: 0x14

/// CSteamAudioProbeData
class __declspec(align(8)) CSteamAudioProbeData0 {
public:
    // IPLProbeBatch m_pProbeBatch;
    char m_pProbeBatch[1]; // 0x0
    char pad_00[7];
}; // size: 0x8

/// CSteamAudioProbeLineSegment
class __declspec(align(8)) CSteamAudioProbeLineSegment0 {
public:
    Vector m_vStart; // 0x0
    Vector m_vEnd; // 0xc
    // CUtlVector< float32 > m_vecIntervals;
    char m_vecIntervals[1]; // 0x18
    // CUtlVector< int32 > m_vecProbeIndices;
    char pad_00[23];
    char m_vecProbeIndices[1]; // 0x30
    char pad_01[23];
}; // size: 0x48

/// CSteamAudioProbeGrid
class __declspec(align(8)) CSteamAudioProbeGrid0 {
public:
    AABB_t m_aabb; // 0x0
    float m_flSpacing; // 0x18
    int32_t m_nx; // 0x1c
    int32_t m_ny; // 0x20
    int32_t m_nz; // 0x24
    // CUtlVector< CSteamAudioProbeLineSegment > m_vecLineSegments;
    char m_vecLineSegments[1]; // 0x28
    // CUtlVector< Vector > m_vecProbes;
    char pad_00[23];
    char m_vecProbes[1]; // 0x40
    char pad_01[23];
}; // size: 0x58

/// CSteamAudioCompressedReverb
class __declspec(align(8)) CSteamAudioCompressedReverb0 {
public:
    int32_t m_nChannels; // 0x0
    int32_t m_nBands; // 0x4
    int32_t m_nBins; // 0x8
    int32_t m_nProbes; // 0xc
    // CUtlVector< int32 > m_vecNumSingularValues;
    char m_vecNumSingularValues[1]; // 0x10
    // CUtlVector< float32 > m_vecDictionary;
    char pad_00[23];
    char m_vecDictionary[1]; // 0x28
    // CUtlVector< float32 > m_vecCompressedData;
    char pad_01[23];
    char m_vecCompressedData[1]; // 0x40
    // IPLCompressedEnergyFields m_pCompressedData;
    char pad_02[23];
    char m_pCompressedData[1]; // 0x58
    char pad_03[7];
}; // size: 0x60

/// CSteamAudioBakedReverbData
class __declspec(align(8)) CSteamAudioBakedReverbData0 {
public:
    int32_t m_nBands; // 0x0
    CSteamAudioProbeData m_probes; // 0x8
    CSteamAudioProbeGrid m_grid; // 0x10
    SteamAudioReverbSettings_t m_reverbSettings; // 0x68
    SteamAudioReverbClusteringSettings_t m_reverbClusteringSettings; // 0x78
    SteamAudioReverbCompressionSettings_t m_reverbCompressionSettings; // 0x84
    CSteamAudioProbeData m_clusteredProbes; // 0x90
    // CUtlVector< int16 > m_vecClusterForProbe;
    char m_vecClusterForProbe[1]; // 0x98
    char pad_00[16];
    CSteamAudioCompressedReverb m_compressedData; // 0xb0
    CSteamAudioCompressedReverb m_compressedClusteredData; // 0x110
    // CSteamAudioMovableBakedData< CSteamAudioBakedReverbData > m_movables;
    char m_movables[1]; // 0x170
    char pad_01[167];
}; // size: 0x218

/// CSteamAudioBakedPathingData
class __declspec(align(8)) CSteamAudioBakedPathingData0 {
public:
    int32_t m_nBands; // 0x0
    CSteamAudioProbeData m_probes; // 0x8
    // CSteamAudioMovableBakedData< CSteamAudioBakedPathingData > m_movables;
    char m_movables[1]; // 0x10
    char pad_00[167];
}; // size: 0xb8

/// CSteamAudioAmbisonicsField
class __declspec(align(8)) CSteamAudioAmbisonicsField0 {
public:
    // CUtlVector< float32 > m_field;
    char m_field[1]; // 0x0
    char pad_00[23];
}; // size: 0x18

/// CSteamAudioBakedDimensionsData
class __declspec(align(8)) CSteamAudioBakedDimensionsData0 {
public:
    SteamAudioCustomDataDimensionsSettings_t m_settings; // 0x0
    CSteamAudioProbeData m_probes; // 0x18
    // CUtlVector< float32 > m_vecInOut;
    char m_vecInOut[1]; // 0x20
    // CUtlVector< float32 > m_vecSize;
    char pad_00[23];
    char m_vecSize[1]; // 0x38
    // CUtlVector< CSteamAudioAmbisonicsField > m_vecOutsideField;
    char pad_01[23];
    char m_vecOutsideField[1]; // 0x50
    // CUtlVector< CSteamAudioAmbisonicsField > m_vecInsideSmallSizeField;
    char pad_02[23];
    char m_vecInsideSmallSizeField[1]; // 0x68
    // CSteamAudioMovableBakedData< CSteamAudioBakedDimensionsData > m_movables;
    char pad_03[23];
    char m_movables[1]; // 0x80
    char pad_04[167];
}; // size: 0x128

/// CSteamAudioBakedMaterialsData
class __declspec(align(8)) CSteamAudioBakedMaterialsData0 {
public:
    CSteamAudioProbeData m_probes; // 0x0
    // CUtlVector< uint32 > m_vecMaterialTokens;
    char m_vecMaterialTokens[1]; // 0x8
    // CUtlVector< float32 > m_vecMaterialWeights;
    char pad_00[23];
    char m_vecMaterialWeights[1]; // 0x20
    char pad_01[23];
}; // size: 0x38

/// CSteamAudioBakedOcclusionData
class __declspec(align(8)) CSteamAudioBakedOcclusionData0 {
public:
    SteamAudioCustomDataOcclusionSettings_t m_settings; // 0x0
    CSteamAudioProbeData m_probes; // 0x10
    // CUtlVector< float32 > m_vecPathingRatio;
    char m_vecPathingRatio[1]; // 0x18
    // CUtlVector< float32 > m_vecPathingDeviation;
    char pad_00[23];
    char m_vecPathingDeviation[1]; // 0x30
    // CUtlVector< float32 > m_vecReflectionRatio;
    char pad_01[23];
    char m_vecReflectionRatio[1]; // 0x48
    char pad_02[23];
}; // size: 0x60

#ifdef __cplusplus
#pragma warning(pop)
#endif // __cplusplus