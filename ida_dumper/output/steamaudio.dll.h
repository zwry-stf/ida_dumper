class SteamAudioReverbSettings_t {
public:
    int32_t m_nNumRays;
    int32_t m_nNumBounces;
    float m_flIRDuration;
    int32_t m_nAmbisonicsOrder;
};

class SteamAudioReverbClusteringSettings_t {
public:
    bool m_bEnableClustering;
    int32_t m_nCubeMapResolution;
    float m_flDepthThreshold;
};

class SteamAudioReverbCompressionSettings_t {
public:
    bool m_bEnableCompression;
    float m_flQuality;
};

class SteamAudioPathSettings_t {
public:
    int32_t m_nNumVisSamples;
    float m_flProbeVisRadius;
    float m_flProbeVisThreshold;
    float m_flProbePathRange;
};

class SteamAudioCustomDataOcclusionSettings_t {
public:
    bool m_bEnablePathing;
    bool m_bEnableReflections;
    int32_t m_nReflectionRays;
    int32_t m_nReflectionBounces;
};

class SteamAudioCustomDataDimensionsSettings_t {
public:
    int32_t m_nAmbisonicsOrderOutsideField;
    int32_t m_nAmbisonicsOrderInsideSizeField;
    float m_flOutsideThreshold;
    float m_flSizeThreshold;
    float m_flInsideThreshold;
};

class CSteamAudioProbeData {
public:
    // IPLProbeBatch m_pProbeBatch;
    char pad_00[8];
};

class CSteamAudioProbeLineSegment {
public:
    Vector m_vStart;
    Vector m_vEnd;
    // CUtlVector< float32 > m_vecIntervals;
    // CUtlVector< int32 > m_vecProbeIndices;
    char pad_00[48];
};

class CSteamAudioProbeGrid {
public:
    AABB_t m_aabb;
    float m_flSpacing;
    int32_t m_nx;
    int32_t m_ny;
    int32_t m_nz;
    // CUtlVector< CSteamAudioProbeLineSegment > m_vecLineSegments;
    // CUtlVector< Vector > m_vecProbes;
    char pad_00[48];
};

class CSteamAudioCompressedReverb {
public:
    int32_t m_nChannels;
    int32_t m_nBands;
    int32_t m_nBins;
    int32_t m_nProbes;
    // CUtlVector< int32 > m_vecNumSingularValues;
    // CUtlVector< float32 > m_vecDictionary;
    // CUtlVector< float32 > m_vecCompressedData;
    // IPLCompressedEnergyFields m_pCompressedData;
    char pad_00[80];
};

class CSteamAudioBakedReverbData {
public:
    int32_t m_nBands;
    CSteamAudioProbeData m_probes;
    CSteamAudioProbeGrid m_grid;
    SteamAudioReverbSettings_t m_reverbSettings;
    SteamAudioReverbClusteringSettings_t m_reverbClusteringSettings;
    SteamAudioReverbCompressionSettings_t m_reverbCompressionSettings;
    CSteamAudioProbeData m_clusteredProbes;
    // CUtlVector< int16 > m_vecClusterForProbe;
    char pad_00[24];
    CSteamAudioCompressedReverb m_compressedData;
    CSteamAudioCompressedReverb m_compressedClusteredData;
    // CSteamAudioMovableBakedData< CSteamAudioBakedReverbData > m_movables;
    char pad_01[168];
};

class CSteamAudioBakedPathingData {
public:
    int32_t m_nBands;
    CSteamAudioProbeData m_probes;
    // CSteamAudioMovableBakedData< CSteamAudioBakedPathingData > m_movables;
    char pad_00[168];
};

class CSteamAudioAmbisonicsField {
public:
    // CUtlVector< float32 > m_field;
    char pad_00[24];
};

class CSteamAudioBakedDimensionsData {
public:
    SteamAudioCustomDataDimensionsSettings_t m_settings;
    CSteamAudioProbeData m_probes;
    // CUtlVector< float32 > m_vecInOut;
    // CUtlVector< float32 > m_vecSize;
    // CUtlVector< CSteamAudioAmbisonicsField > m_vecOutsideField;
    // CUtlVector< CSteamAudioAmbisonicsField > m_vecInsideSmallSizeField;
    // CSteamAudioMovableBakedData< CSteamAudioBakedDimensionsData > m_movables;
    char pad_00[264];
};

class CSteamAudioBakedMaterialsData {
public:
    CSteamAudioProbeData m_probes;
    // CUtlVector< uint32 > m_vecMaterialTokens;
    // CUtlVector< float32 > m_vecMaterialWeights;
    char pad_00[48];
};

class CSteamAudioBakedOcclusionData {
public:
    SteamAudioCustomDataOcclusionSettings_t m_settings;
    CSteamAudioProbeData m_probes;
    // CUtlVector< float32 > m_vecPathingRatio;
    // CUtlVector< float32 > m_vecPathingDeviation;
    // CUtlVector< float32 > m_vecReflectionRatio;
    char pad_00[72];
};

