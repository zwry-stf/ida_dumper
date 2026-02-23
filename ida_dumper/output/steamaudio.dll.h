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
    char pad_00[8];
}; // size: 0x8

/// CSteamAudioProbeLineSegment
class __declspec(align(8)) CSteamAudioProbeLineSegment0 {
public:
    Vector m_vStart; // 0x0
    Vector m_vEnd; // 0xc
    // CUtlVector< float32 > m_vecIntervals;
    // CUtlVector< int32 > m_vecProbeIndices;
    char pad_00[48];
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
    // CUtlVector< Vector > m_vecProbes;
    char pad_00[48];
}; // size: 0x58

/// CSteamAudioCompressedReverb
class __declspec(align(8)) CSteamAudioCompressedReverb0 {
public:
    int32_t m_nChannels; // 0x0
    int32_t m_nBands; // 0x4
    int32_t m_nBins; // 0x8
    int32_t m_nProbes; // 0xc
    // CUtlVector< int32 > m_vecNumSingularValues;
    // CUtlVector< float32 > m_vecDictionary;
    // CUtlVector< float32 > m_vecCompressedData;
    // IPLCompressedEnergyFields m_pCompressedData;
    char pad_00[80];
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
    char pad_00[24];
    CSteamAudioCompressedReverb m_compressedData; // 0xb0
    CSteamAudioCompressedReverb m_compressedClusteredData; // 0x110
    // CSteamAudioMovableBakedData< CSteamAudioBakedReverbData > m_movables;
    char pad_01[168];
}; // size: 0x218

/// CSteamAudioBakedPathingData
class __declspec(align(8)) CSteamAudioBakedPathingData0 {
public:
    int32_t m_nBands; // 0x0
    CSteamAudioProbeData m_probes; // 0x8
    // CSteamAudioMovableBakedData< CSteamAudioBakedPathingData > m_movables;
    char pad_00[168];
}; // size: 0xb8

/// CSteamAudioAmbisonicsField
class __declspec(align(8)) CSteamAudioAmbisonicsField0 {
public:
    // CUtlVector< float32 > m_field;
    char pad_00[24];
}; // size: 0x18

/// CSteamAudioBakedDimensionsData
class __declspec(align(8)) CSteamAudioBakedDimensionsData0 {
public:
    SteamAudioCustomDataDimensionsSettings_t m_settings; // 0x0
    CSteamAudioProbeData m_probes; // 0x18
    // CUtlVector< float32 > m_vecInOut;
    // CUtlVector< float32 > m_vecSize;
    // CUtlVector< CSteamAudioAmbisonicsField > m_vecOutsideField;
    // CUtlVector< CSteamAudioAmbisonicsField > m_vecInsideSmallSizeField;
    // CSteamAudioMovableBakedData< CSteamAudioBakedDimensionsData > m_movables;
    char pad_00[264];
}; // size: 0x128

/// CSteamAudioBakedMaterialsData
class __declspec(align(8)) CSteamAudioBakedMaterialsData0 {
public:
    CSteamAudioProbeData m_probes; // 0x0
    // CUtlVector< uint32 > m_vecMaterialTokens;
    // CUtlVector< float32 > m_vecMaterialWeights;
    char pad_00[48];
}; // size: 0x38

/// CSteamAudioBakedOcclusionData
class __declspec(align(8)) CSteamAudioBakedOcclusionData0 {
public:
    SteamAudioCustomDataOcclusionSettings_t m_settings; // 0x0
    CSteamAudioProbeData m_probes; // 0x10
    // CUtlVector< float32 > m_vecPathingRatio;
    // CUtlVector< float32 > m_vecPathingDeviation;
    // CUtlVector< float32 > m_vecReflectionRatio;
    char pad_00[72];
}; // size: 0x60

#ifdef __cplusplus
#pragma warning(pop)
#endif // __cplusplus