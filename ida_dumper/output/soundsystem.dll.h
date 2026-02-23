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


/// SosActionStopType_t
_enum SosActionStopType_t0 : uint32_t {
    SOS_STOPTYPE_NONE = 0,
    SOS_STOPTYPE_TIME = 1,
    SOS_STOPTYPE_OPVAR = 2,
};

/// SosActionLimitSortType_t
_enum SosActionLimitSortType_t0 : uint32_t {
    SOS_LIMIT_SORTTYPE_HIGHEST = 0,
    SOS_LIMIT_SORTTYPE_LOWEST = 1,
};

/// SosActionSetParamSortType_t
_enum SosActionSetParamSortType_t0 : uint32_t {
    SOS_SETPARAM_SORTTYPE_HIGHEST = 0,
    SOS_SETPARAM_SORTTYPE_LOWEST = 1,
};

/// SosGroupType_t
_enum SosGroupType_t0 : uint32_t {
    SOS_GROUPTYPE_DYNAMIC = 0,
    SOS_GROUPTYPE_STATIC = 1,
};

/// SosGroupFieldBehavior_t
_enum SosGroupFieldBehavior_t0 : uint32_t {
    kIgnore = 0,
    kBranch = 1,
    kMatch = 2,
};

/// soundlevel_t
_enum soundlevel_t0 : uint32_t {
    SNDLVL_NONE = 0,
    SNDLVL_20dB = 20,
    SNDLVL_25dB = 25,
    SNDLVL_30dB = 30,
    SNDLVL_35dB = 35,
    SNDLVL_40dB = 40,
    SNDLVL_45dB = 45,
    SNDLVL_50dB = 50,
    SNDLVL_55dB = 55,
    SNDLVL_IDLE = 60,
    SNDLVL_60dB = 60,
    SNDLVL_65dB = 65,
    SNDLVL_STATIC = 66,
    SNDLVL_70dB = 70,
    SNDLVL_NORM = 75,
    SNDLVL_75dB = 75,
    SNDLVL_80dB = 80,
    SNDLVL_TALKING = 80,
    SNDLVL_85dB = 85,
    SNDLVL_90dB = 90,
    SNDLVL_95dB = 95,
    SNDLVL_100dB = 100,
    SNDLVL_105dB = 105,
    SNDLVL_110dB = 110,
    SNDLVL_120dB = 120,
    SNDLVL_130dB = 130,
    SNDLVL_GUNFIRE = 140,
    SNDLVL_140dB = 140,
    SNDLVL_150dB = 150,
    SNDLVL_180dB = 180,
};

/// SosEditItemType_t
_enum SosEditItemType_t0 : uint32_t {
    SOS_EDIT_ITEM_TYPE_SOUNDEVENTS = 0,
    SOS_EDIT_ITEM_TYPE_SOUNDEVENT = 1,
    SOS_EDIT_ITEM_TYPE_LIBRARYSTACKS = 2,
    SOS_EDIT_ITEM_TYPE_STACK = 3,
    SOS_EDIT_ITEM_TYPE_OPERATOR = 4,
    SOS_EDIT_ITEM_TYPE_FIELD = 5,
};

/// CVSoundFormat_t
_enum CVSoundFormat_t0 : uint8_t {
    PCM16 = 0,
    PCM8 = 1,
    MP3 = 2,
    ADPCM = 3,
};

/// EMode_t
_enum EMode_t0 : uint32_t {
    Peak = 0,
    RMS = 1,
};

/// PlayBackMode_t
_enum PlayBackMode_t0 : uint32_t {
    Random = 0,
    RandomNoRepeats = 1,
    RandomAvoidLast = 2,
    Sequential = 3,
    RandomWeights = 4,
};

/// EMidiNote
_enum EMidiNote0 : uint8_t {
    C = 0,
    C_Sharp = 1,
    D = 2,
    D_Sharp = 3,
    E = 4,
    F = 5,
    F_Sharp = 6,
    G = 7,
    G_Sharp = 8,
    A = 9,
    A_Sharp = 10,
    B = 11,
    Count = 12,
};

/// EWaveform
_enum EWaveform0 : uint8_t {
    Sine = 0,
    Square = 1,
    Saw = 2,
    Triangle = 3,
    Noise = 4,
};

/// VMixFilterType_t
_enum VMixFilterType_t0 : uint16_t {
    FILTER_UNKNOWN = 65535,
    FILTER_LOWPASS = 0,
    FILTER_HIGHPASS = 1,
    FILTER_BANDPASS = 2,
    FILTER_NOTCH = 3,
    FILTER_PEAKING_EQ = 4,
    FILTER_LOW_SHELF = 5,
    FILTER_HIGH_SHELF = 6,
    FILTER_ALLPASS = 7,
    FILTER_PASSTHROUGH = 8,
};

/// VMixFilterSlope_t
_enum VMixFilterSlope_t0 : uint8_t {
    FILTER_SLOPE_1POLE_6dB = 0,
    FILTER_SLOPE_1POLE_12dB = 1,
    FILTER_SLOPE_1POLE_18dB = 2,
    FILTER_SLOPE_1POLE_24dB = 3,
    FILTER_SLOPE_12dB = 4,
    FILTER_SLOPE_24dB = 5,
    FILTER_SLOPE_36dB = 6,
    FILTER_SLOPE_48dB = 7,
    FILTER_SLOPE_MAX = 7,
};

/// VMixLFOShape_t
_enum VMixLFOShape_t0 : uint32_t {
    LFO_SHAPE_SINE = 0,
    LFO_SHAPE_SQUARE = 1,
    LFO_SHAPE_TRI = 2,
    LFO_SHAPE_SAW = 3,
    LFO_SHAPE_NOISE = 4,
};

/// VMixPannerType_t
_enum VMixPannerType_t0 : uint32_t {
    PANNER_TYPE_LINEAR = 0,
    PANNER_TYPE_EQUAL_POWER = 1,
};

/// VMixSubgraphSwitchInterpolationType_t
_enum VMixSubgraphSwitchInterpolationType_t0 : uint32_t {
    SUBGRAPH_INTERPOLATION_TEMPORAL_CROSSFADE = 0,
    SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT = 1,
    SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING = 2,
};

/// VMixChannelOperation_t
_enum VMixChannelOperation_t0 : uint32_t {
    VMIX_CHAN_STEREO = 0,
    VMIX_CHAN_LEFT = 1,
    VMIX_CHAN_RIGHT = 2,
    VMIX_CHAN_SWAP = 3,
    VMIX_CHAN_MONO = 4,
    VMIX_CHAN_MID_SIDE = 5,
};

/// VMixGraphCommandID_t
_enum VMixGraphCommandID_t0 : uint32_t {
    CMD_INVALID = 4294967295,
    CMD_CONTROL_INPUT_STORE = 1,
    CMD_CONTROL_INPUT_STORE_DB = 2,
    CMD_CONTROL_TRANSIENT_INPUT_STORE = 3,
    CMD_CONTROL_TRANSIENT_INPUT_RESET = 4,
    CMD_CONTROL_OUTPUT_STORE = 5,
    CMD_CONTROL_EVALUATE_CURVE = 6,
    CMD_CONTROL_COPY = 7,
    CMD_CONTROL_COND_COPY_IF_NEGATIVE = 8,
    CMD_CONTROL_REMAP_LINEAR = 9,
    CMD_CONTROL_REMAP_SINE = 10,
    CMD_CONTROL_REMAP_LOGLINEAR = 11,
    CMD_CONTROL_MAX = 12,
    CMD_CONTROL_RESET_TIMER = 13,
    CMD_CONTROL_INCREMENT_TIMER = 14,
    CMD_CONTROL_EVAL_ENVELOPE = 15,
    CMD_CONTROL_SINE_BLEND = 16,
    CMD_PROCESSOR_SET_CONTROL_VALUE = 17,
    CMD_PROCESSOR_SET_NAME_INPUT = 18,
    CMD_PROCESSOR_SET_CONTROL_ARRAYVALUE = 19,
    CMD_PROCESSOR_STORE_CONTROL_VALUE = 20,
    CMD_PROCESSOR_SET_VSND_VALUE = 21,
    CMD_SUBMIX_PROCESS = 22,
    CMD_SUBMIX_GENERATE = 23,
    CMD_SUBMIX_GENERATE_SIDECHAIN = 24,
    CMD_SUBMIX_DEBUG = 25,
    CMD_SUBMIX_MIX2x1 = 26,
    CMD_SUBMIX_OUTPUT = 27,
    CMD_SUBMIX_OUTPUTx2 = 28,
    CMD_SUBMIX_COPY = 29,
    CMD_SUBMIX_ACCUMULATE = 30,
    CMD_SUBMIX_METER = 31,
    CMD_SUBMIX_METER_SPECTRUM = 32,
    CMD_IMPULSERESPONSE_INPUT_STORE = 33,
    CMD_PROCESSOR_SET_IMPULSERESPONSE_VALUE = 34,
    CMD_REMAP_VSND_TO_IMPULSERESPONSE = 35,
    CMD_IMPULSERESPONSE_RESET = 36,
    CMD_BLEND_VSNDS_TO_IMPULSERESPONSE = 37,
    CMD_IMPULSERESPONSE_DELAY = 38,
};

/// CSosGroupActionSchema
class __declspec(align(1)) CSosGroupActionSchema0 {
public:
    char pad_00[8];
}; // size: 0x8

/// CSosGroupActionLimitSchema
class __declspec(align(8)) CSosGroupActionLimitSchema0 {
public:
    char pad_00[8];
    int32_t m_nMaxCount; // 0x8
    SosActionStopType_t m_nStopType; // 0xc
    SosActionLimitSortType_t m_nSortType; // 0x10
    bool m_bStopImmediate; // 0x14
    bool m_bCountStopped; // 0x15
    char pad_01[2];
}; // size: 0x18

/// CSosGroupActionTimeLimitSchema
class __declspec(align(8)) CSosGroupActionTimeLimitSchema0 {
public:
    char pad_00[8];
    float m_flMaxDuration; // 0x8
    char pad_01[4];
}; // size: 0x10

/// CSosGroupActionTimeBlockLimitSchema
class __declspec(align(8)) CSosGroupActionTimeBlockLimitSchema0 {
public:
    char pad_00[8];
    int32_t m_nMaxCount; // 0x8
    float m_flMaxDuration; // 0xc
}; // size: 0x10

/// CSosGroupActionSetSoundeventParameterSchema
class __declspec(align(8)) CSosGroupActionSetSoundeventParameterSchema0 {
public:
    char pad_00[8];
    int32_t m_nMaxCount; // 0x8
    float m_flMinValue; // 0xc
    float m_flMaxValue; // 0x10
    // CUtlString m_opvarName;
    char pad_01[12];
    SosActionSetParamSortType_t m_nSortType; // 0x20
    char pad_02[4];
}; // size: 0x28

/// CSosGroupActionSoundeventClusterSchema
class __declspec(align(8)) CSosGroupActionSoundeventClusterSchema0 {
public:
    char pad_00[8];
    int32_t m_nMinNearby; // 0x8
    float m_flClusterEpsilon; // 0xc
    // CUtlString m_shouldPlayOpvar;
    // CUtlString m_shouldPlayClusterChild;
    // CUtlString m_clusterSizeOpvar;
    // CUtlString m_groupBoundingBoxMinsOpvar;
    // CUtlString m_groupBoundingBoxMaxsOpvar;
    char pad_01[64];
}; // size: 0x50

/// CSosGroupActionSoundeventPrioritySchema
class __declspec(align(8)) CSosGroupActionSoundeventPrioritySchema0 {
public:
    // CUtlString m_priorityValue;
    // CUtlString m_priorityVolumeScalar;
    // CUtlString m_priorityContributeButDontRead;
    // CUtlString m_bPriorityReadButDontContribute;
    char pad_00[56];
}; // size: 0x38

/// CSosGroupActionMemberCountEnvelopeSchema
class __declspec(align(8)) CSosGroupActionMemberCountEnvelopeSchema0 {
public:
    char pad_00[8];
    int32_t m_nBaseCount; // 0x8
    int32_t m_nTargetCount; // 0xc
    float m_flBaseValue; // 0x10
    float m_flTargetValue; // 0x14
    float m_flAttack; // 0x18
    float m_flDecay; // 0x1c
    // CUtlString m_resultVarName;
    char pad_01[8];
    bool m_bSaveToGroup; // 0x28
    char pad_02[7];
}; // size: 0x30

/// CSosGroupActionSoundeventCountSchema
class __declspec(align(8)) CSosGroupActionSoundeventCountSchema0 {
public:
    char pad_00[8];
    bool m_bExcludeStoppedSounds; // 0x8
    // CUtlString m_strCountKeyName;
    char pad_01[15];
}; // size: 0x18

/// CSosGroupActionSoundeventMinMaxValuesSchema
class __declspec(align(8)) CSosGroupActionSoundeventMinMaxValuesSchema0 {
public:
    // CUtlString m_strQueryPublicFieldName;
    // CUtlString m_strDelayPublicFieldName;
    char pad_00[24];
    bool m_bExcludeStoppedSounds; // 0x18
    bool m_bExcludeDelayedSounds; // 0x19
    bool m_bExcludeSoundsBelowThreshold; // 0x1a
    float m_flExcludeSoundsMinThresholdValue; // 0x1c
    bool m_bExcludSoundsAboveThreshold; // 0x20
    float m_flExcludeSoundsMaxThresholdValue; // 0x24
    // CUtlString m_strMinValueName;
    // CUtlString m_strMaxValueName;
    char pad_01[24];
}; // size: 0x40

/// CSosSoundEventGroupSchema
class __declspec(align(8)) CSosSoundEventGroupSchema0 {
public:
    char pad_00[8];
    SosGroupType_t m_nGroupType; // 0x8
    bool m_bBlocksEvents; // 0xc
    int32_t m_nBlockMaxCount; // 0x10
    float m_flMemberLifespanTime; // 0x14
    bool m_bInvertMatch; // 0x18
    SosGroupFieldBehavior_t m_Behavior_EventName; // 0x1c
    // CUtlString m_matchSoundEventName;
    char pad_01[8];
    bool m_bMatchEventSubString; // 0x28
    // CUtlString m_matchSoundEventSubString;
    char pad_02[12];
    SosGroupFieldBehavior_t m_Behavior_EntIndex; // 0x38
    float m_flEntIndex; // 0x3c
    SosGroupFieldBehavior_t m_Behavior_Opvar; // 0x40
    float m_flOpvar; // 0x44
    SosGroupFieldBehavior_t m_Behavior_String; // 0x48
    // CUtlString m_opvarString;
    // CUtlVector< CSosGroupActionSchema* > m_vActions;
    char pad_03[36];
}; // size: 0x70

/// SosEditItemInfo_t
class __declspec(align(8)) SosEditItemInfo_t0 {
public:
    SosEditItemType_t itemType; // 0x0
    // CUtlString itemName;
    // CUtlString itemTypeName;
    // CUtlString itemKVString;
    char pad_00[36];
    Vector2D itemPos; // 0x28
}; // size: 0x30

/// SelectedEditItemInfo_t
class __declspec(align(8)) SelectedEditItemInfo_t0 {
public:
    // CUtlVector< SosEditItemInfo_t > m_EditItems;
    char pad_00[24];
}; // size: 0x18

/// CSoundEventMetaData
class __declspec(align(8)) CSoundEventMetaData0 {
public:
    // CStrongHandle< InfoForResourceTypeCVMixListResource > m_soundEventVMix;
    char pad_00[8];
}; // size: 0x8

/// CDSPMixgroupModifier
class __declspec(align(8)) CDSPMixgroupModifier0 {
public:
    // CUtlString m_mixgroup;
    char pad_00[8];
    float m_flModifier; // 0x8
    float m_flModifierMin; // 0xc
    float m_flSourceModifier; // 0x10
    float m_flSourceModifierMin; // 0x14
    float m_flListenerReverbModifierWhenSourceReverbIsActive; // 0x18
    char pad_01[4];
}; // size: 0x20

/// CDspPresetModifierList
class __declspec(align(8)) CDspPresetModifierList0 {
public:
    // CUtlString m_dspName;
    // CUtlVector< CDSPMixgroupModifier > m_modifiers;
    char pad_00[32];
}; // size: 0x20

/// CDSPPresetMixgroupModifierTable
class __declspec(align(8)) CDSPPresetMixgroupModifierTable0 {
public:
    // CUtlVector< CDspPresetModifierList > m_table;
    char pad_00[24];
}; // size: 0x18

/// CVoiceContainerAnalysisBase
class __declspec(align(8)) CVoiceContainerAnalysisBase0 {
public:
    char pad_00[8];
    bool m_bRegenerateCurveOnCompile; // 0x8
    // CPiecewiseCurve m_curve;
    char pad_01[71];
}; // size: 0x50

/// CVoiceContainerBase
class __declspec(align(8)) CVoiceContainerBase0 {
public:
    char pad_00[40];
    CVSound m_vSound; // 0x28
    CVoiceContainerAnalysisBase* m_pEnvelopeAnalyzer; // 0xa0
}; // size: 0xa8

/// CVSound
class __declspec(align(8)) CVSound0 {
public:
    int32_t m_nRate; // 0x0
    CVSoundFormat_t m_nFormat; // 0x4
    uint32_t m_nChannels; // 0x8
    int32_t m_nLoopStart; // 0xc
    uint32_t m_nSampleCount; // 0x10
    float m_flDuration; // 0x14
    // CUtlVector< CAudioSentence > m_Sentences;
    char pad_00[24];
    uint32_t m_nStreamingSize; // 0x30
    // CUtlVector< int32 > m_nSeekTable;
    char pad_01[28];
    int32_t m_nLoopEnd; // 0x50
    // CUtlBinaryBlock m_encodedHeader;
    char pad_02[36];
}; // size: 0x78

/// CVoiceContainerDefault
class __declspec(align(8)) CVoiceContainerDefault0 {
public:
    char pad_00[168];
}; // size: 0xa8

/// CVoiceContainerGenerator
class __declspec(align(1)) CVoiceContainerGenerator0 {
public:
    char pad_00[168];
}; // size: 0xa8

/// CVoiceContainerAsyncGenerator
class __declspec(align(1)) CVoiceContainerAsyncGenerator0 {
public:
    char pad_00[184];
}; // size: 0xb8

/// CVoiceContainerNull
class __declspec(align(8)) CVoiceContainerNull0 {
public:
    char pad_00[168];
}; // size: 0xa8

/// CSoundContainerReference
class __declspec(align(8)) CSoundContainerReference0 {
public:
    bool m_bUseReference; // 0x0
    // CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sound;
    char pad_00[8];
    CVoiceContainerBase* m_pSound; // 0x10
}; // size: 0x18

/// CSoundContainerReferenceArray
class __declspec(align(8)) CSoundContainerReferenceArray0 {
public:
    bool m_bUseReference; // 0x0
    // CUtlVector< CStrongHandle< InfoForResourceTypeCVoiceContainerBase > > m_sounds;
    // CUtlVector< CVoiceContainerBase* > m_pSounds;
    char pad_00[55];
}; // size: 0x38

/// CAudioEmphasisSample
class __declspec(align(4)) CAudioEmphasisSample0 {
public:
    float m_flTime; // 0x0
    float m_flValue; // 0x4
}; // size: 0x8

/// CAudioPhonemeTag
class __declspec(align(4)) CAudioPhonemeTag0 {
public:
    float m_flStartTime; // 0x0
    float m_flEndTime; // 0x4
    int32_t m_nPhonemeCode; // 0x8
}; // size: 0xc

/// CAudioMorphData
class __declspec(align(8)) CAudioMorphData0 {
public:
    // CUtlVector< float32 > m_times;
    // CUtlVector< uint32 > m_nameHashCodes;
    // CUtlVector< CUtlString > m_nameStrings;
    // CUtlVector< CUtlVector< float32 > > m_samples;
    char pad_00[96];
    float m_flEaseIn; // 0x60
    float m_flEaseOut; // 0x64
}; // size: 0x68

/// CAudioSentence
class __declspec(align(8)) CAudioSentence0 {
public:
    bool m_bShouldVoiceDuck; // 0x0
    // CUtlVector< CAudioPhonemeTag > m_RunTimePhonemes;
    // CUtlVector< CAudioEmphasisSample > m_EmphasisSamples;
    char pad_00[48];
    CAudioMorphData m_morphData; // 0x38
}; // size: 0xa0

/// CSoundInfoHeader
class __declspec(align(1)) CSoundInfoHeader0 {
public:
    char pad_00[1];
}; // size: 0x1

/// CVoiceContainerEnvelopeAnalyzer
class __declspec(align(8)) CVoiceContainerEnvelopeAnalyzer0 {
public:
    char pad_00[80];
    EMode_t m_mode; // 0x50
    float m_fAnalysisWindowMs; // 0x54
    float m_flThreshold; // 0x58
    char pad_01[4];
}; // size: 0x60

/// CVoiceContainerEnvelope
class __declspec(align(8)) CVoiceContainerEnvelope0 {
public:
    // CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sound;
    char pad_00[176];
    CVoiceContainerAnalysisBase* m_analysisContainer; // 0xb0
}; // size: 0xb8

/// CVoiceContainerSelector
class __declspec(align(8)) CVoiceContainerSelector0 {
public:
    char pad_00[168];
    PlayBackMode_t m_mode; // 0xa8
    CSoundContainerReferenceArray m_soundsToPlay; // 0xb0
    // CUtlVector< float32 > m_fProbabilityWeights;
    char pad_01[56];
}; // size: 0x120

/// CVoiceContainerBlender
class __declspec(align(8)) CVoiceContainerBlender0 {
public:
    char pad_00[168];
    CSoundContainerReference m_firstSound; // 0xa8
    CSoundContainerReference m_secondSound; // 0xc0
    float m_flBlendFactor; // 0xd8
    char pad_01[4];
}; // size: 0xe0

/// CVoiceContainerMultiBlender
class __declspec(align(8)) CVoiceContainerMultiBlender0 {
public:
    char pad_00[168];
    CSoundContainerReferenceArray m_soundsToPlay; // 0xa8
    float m_flBlendFactor; // 0xe0
    float m_flCrossover; // 0xe4
}; // size: 0xe8

/// CVoiceContainerEnum
class __declspec(align(8)) CVoiceContainerEnum0 {
public:
    char pad_00[168];
    CSoundContainerReferenceArray m_soundsToPlay; // 0xa8
    int32_t m_iSelection; // 0xe0
    float m_flCrossfadeTime; // 0xe4
}; // size: 0xe8

/// CVoiceContainerLoopTrigger
class __declspec(align(8)) CVoiceContainerLoopTrigger0 {
public:
    char pad_00[168];
    CSoundContainerReference m_sound; // 0xa8
    float m_flRetriggerTimeMin; // 0xc0
    float m_flRetriggerTimeMax; // 0xc4
    float m_flFadeTime; // 0xc8
    bool m_bCrossFade; // 0xcc
    char pad_01[3];
}; // size: 0xd0

/// CVoiceContainerLoopXFade
class __declspec(align(8)) CVoiceContainerLoopXFade0 {
public:
    char pad_00[168];
    CSoundContainerReference m_sound; // 0xa8
    float m_flLoopEnd; // 0xc0
    float m_flLoopStart; // 0xc4
    float m_flFadeOut; // 0xc8
    float m_flFadeIn; // 0xcc
    bool m_bPlayHead; // 0xd0
    bool m_bPlayTail; // 0xd1
    bool m_bEqualPow; // 0xd2
    char pad_01[5];
}; // size: 0xd8

/// CVoiceContainerRandomSampler
class __declspec(align(8)) CVoiceContainerRandomSampler0 {
public:
    char pad_00[184];
    float m_flAmplitude; // 0xb8
    float m_flAmplitudeJitter; // 0xbc
    float m_flTimeJitter; // 0xc0
    float m_flMaxLength; // 0xc4
    int32_t m_nNumDelayVariations; // 0xc8
    // CUtlVector< CStrongHandle< InfoForResourceTypeCVoiceContainerBase > > m_grainResources;
    char pad_01[276];
}; // size: 0x1e0

/// CVoiceContainerGranulator
class __declspec(align(8)) CVoiceContainerGranulator0 {
public:
    char pad_00[184];
    float m_flGrainLength; // 0xb8
    float m_flGrainCrossfadeAmount; // 0xbc
    float m_flStartJitter; // 0xc0
    float m_flPlaybackJitter; // 0xc4
    bool m_bShouldWraparound; // 0xc8
    // CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sourceAudio;
    char pad_01[199];
}; // size: 0x190

/// CVoiceContainerTapePlayer
class __declspec(align(8)) CVoiceContainerTapePlayer0 {
public:
    char pad_00[184];
    bool m_bShouldWraparound; // 0xb8
    // CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sourceAudio;
    char pad_01[12];
    float m_flTapeSpeedAttackTime; // 0xc8
    float m_flTapeSpeedReleaseTime; // 0xcc
    char pad_02[40];
}; // size: 0xf8

/// CVoiceContainerStaticAdditiveSynth
class __declspec(align(8)) CVoiceContainerStaticAdditiveSynth0 {
public:
    // CUtlVector< CVoiceContainerStaticAdditiveSynth::CTone > m_tones;
    char pad_00[232];
}; // size: 0xe8

/// CVoiceContainerStaticAdditiveSynth::CTone
class __declspec(align(8)) CVoiceContainerStaticAdditiveSynth__CTone0 {
public:
    // CUtlVector< CVoiceContainerStaticAdditiveSynth::CHarmonic > m_harmonics;
    // CPiecewiseCurve m_curve;
    char pad_00[88];
    bool m_bSyncInstances; // 0x58
    char pad_01[7];
}; // size: 0x60

/// CVoiceContainerStaticAdditiveSynth::CGainScalePerInstance
class __declspec(align(4)) CVoiceContainerStaticAdditiveSynth__CGainScalePerInstance0 {
public:
    float m_flMinVolume; // 0x0
    int32_t m_nInstancesAtMinVolume; // 0x4
    float m_flMaxVolume; // 0x8
    int32_t m_nInstancesAtMaxVolume; // 0xc
}; // size: 0x10

/// CVoiceContainerStaticAdditiveSynth::CHarmonic
class __declspec(align(8)) CVoiceContainerStaticAdditiveSynth__CHarmonic0 {
public:
    EWaveform m_nWaveform; // 0x0
    EMidiNote m_nFundamental; // 0x1
    int32_t m_nOctave; // 0x4
    float m_flCents; // 0x8
    float m_flPhase; // 0xc
    // CPiecewiseCurve m_curve;
    // CVoiceContainerStaticAdditiveSynth::CGainScalePerInstance m_volumeScaling;
    char pad_00[88];
}; // size: 0x68

/// CVoiceContainerShapedNoise
class __declspec(align(8)) CVoiceContainerShapedNoise0 {
public:
    char pad_00[168];
    bool m_bUseCurveForFrequency; // 0xa8
    float m_flFrequency; // 0xac
    // CPiecewiseCurve m_frequencySweep;
    char pad_01[64];
    bool m_bUseCurveForResonance; // 0xf0
    float m_flResonance; // 0xf4
    // CPiecewiseCurve m_resonanceSweep;
    char pad_02[64];
    bool m_bUseCurveForAmplitude; // 0x138
    float m_flGainInDecibels; // 0x13c
    // CPiecewiseCurve m_gainSweep;
    char pad_03[64];
}; // size: 0x180

/// CVoiceContainerSwitch
class __declspec(align(8)) CVoiceContainerSwitch0 {
public:
    // CUtlVector< CSoundContainerReference > m_soundsToPlay;
    char pad_00[192];
}; // size: 0xc0

/// CVoiceContainerSetElement
class __declspec(align(8)) CVoiceContainerSetElement0 {
public:
    CSoundContainerReference m_sound; // 0x0
    float m_flVolumeDB; // 0x18
    char pad_00[4];
}; // size: 0x20

/// CVoiceContainerSet
class __declspec(align(8)) CVoiceContainerSet0 {
public:
    // CUtlVector< CVoiceContainerSetElement > m_soundsToPlay;
    char pad_00[192];
}; // size: 0xc0

/// CVoiceContainerDecayingSineWave
class __declspec(align(8)) CVoiceContainerDecayingSineWave0 {
public:
    char pad_00[168];
    float m_flFrequency; // 0xa8
    float m_flDecayTime; // 0xac
}; // size: 0xb0

/// CVoiceContainerAmpedDecayingSineWave
class __declspec(align(8)) CVoiceContainerAmpedDecayingSineWave0 {
public:
    char pad_00[176];
    float m_flGainAmount; // 0xb0
    char pad_01[4];
}; // size: 0xb8

/// CVoiceContainerRealtimeFMSineWave
class __declspec(align(8)) CVoiceContainerRealtimeFMSineWave0 {
public:
    char pad_00[168];
    float m_flCarrierFrequency; // 0xa8
    float m_flModulatorFrequency; // 0xac
    float m_flModulatorAmount; // 0xb0
    char pad_01[4];
}; // size: 0xb8

/// CVoiceContainerParameterBlender
class __declspec(align(8)) CVoiceContainerParameterBlender0 {
public:
    char pad_00[168];
    CSoundContainerReference m_firstSound; // 0xa8
    CSoundContainerReference m_secondSound; // 0xc0
    bool m_bEnableOcclusionBlend; // 0xd8
    // CPiecewiseCurve m_curve1;
    // CPiecewiseCurve m_curve2;
    char pad_01[135];
    bool m_bEnableDistanceBlend; // 0x160
    // CPiecewiseCurve m_curve3;
    // CPiecewiseCurve m_curve4;
    char pad_02[135];
}; // size: 0x1e8

/// CVMixBaseProcessorDesc
class __declspec(align(4)) CVMixBaseProcessorDesc0 {
public:
    // CUtlString m_name;
    char pad_00[20];
    int32_t m_nChannels; // 0x14
    float m_flxfade; // 0x18
    char pad_01[4];
}; // size: 0x20

/// VMixFilterDesc_t
class __declspec(align(4)) VMixFilterDesc_t0 {
public:
    VMixFilterType_t m_nFilterType; // 0x0
    VMixFilterSlope_t m_nFilterSlope; // 0x2
    bool m_bEnabled; // 0x3
    float m_fldbGain; // 0x4
    float m_flCutoffFreq; // 0x8
    float m_flQ; // 0xc
}; // size: 0x10

/// CVMixFilterProcessorDesc
class __declspec(align(8)) CVMixFilterProcessorDesc0 {
public:
    char pad_00[32];
    VMixFilterDesc_t m_desc; // 0x20
}; // size: 0x30

/// VMixEQ8Desc_t
class __declspec(align(4)) VMixEQ8Desc_t0 {
public:
    VMixFilterDesc_t m_stages; // 0x0
    char pad_00[112];
}; // size: 0x80

/// CVMixEQ8ProcessorDesc
class __declspec(align(8)) CVMixEQ8ProcessorDesc0 {
public:
    char pad_00[32];
    VMixEQ8Desc_t m_desc; // 0x20
}; // size: 0xa0

/// VMixPresetDSPDesc_t
class __declspec(align(8)) VMixPresetDSPDesc_t0 {
public:
    // CUtlString m_effectName;
    char pad_00[16];
}; // size: 0x10

/// CVMixPresetDSPProcessorDesc
class __declspec(align(8)) CVMixPresetDSPProcessorDesc0 {
public:
    char pad_00[32];
    VMixPresetDSPDesc_t m_desc; // 0x20
}; // size: 0x30

/// VMixDelayDesc_t
class __declspec(align(4)) VMixDelayDesc_t0 {
public:
    VMixFilterDesc_t m_feedbackFilter; // 0x0
    bool m_bEnableFilter; // 0x10
    float m_flDelay; // 0x14
    float m_flDirectGain; // 0x18
    float m_flDelayGain; // 0x1c
    float m_flFeedbackGain; // 0x20
    float m_flWidth; // 0x24
}; // size: 0x28

/// CVMixDelayProcessorDesc
class __declspec(align(8)) CVMixDelayProcessorDesc0 {
public:
    char pad_00[32];
    VMixDelayDesc_t m_desc; // 0x20
}; // size: 0x48

/// VMixPannerDesc_t
class __declspec(align(4)) VMixPannerDesc_t0 {
public:
    VMixPannerType_t m_type; // 0x0
    float m_flStrength; // 0x4
}; // size: 0x8

/// CVMixPannerProcessorDesc
class __declspec(align(8)) CVMixPannerProcessorDesc0 {
public:
    char pad_00[32];
    VMixPannerDesc_t m_desc; // 0x20
}; // size: 0x28

/// VMixModDelayDesc_t
class __declspec(align(4)) VMixModDelayDesc_t0 {
public:
    VMixFilterDesc_t m_feedbackFilter; // 0x0
    bool m_bPhaseInvert; // 0x10
    float m_flGlideTime; // 0x14
    float m_flDelay; // 0x18
    float m_flOutputGain; // 0x1c
    float m_flFeedbackGain; // 0x20
    float m_flModRate; // 0x24
    float m_flModDepth; // 0x28
    bool m_bApplyAntialiasing; // 0x2c
    char pad_00[3];
}; // size: 0x30

/// CVMixModDelayProcessorDesc
class __declspec(align(8)) CVMixModDelayProcessorDesc0 {
public:
    char pad_00[32];
    VMixModDelayDesc_t m_desc; // 0x20
}; // size: 0x50

/// VMixFlangerDesc_t
class __declspec(align(4)) VMixFlangerDesc_t0 {
public:
    bool m_bPhaseInvert; // 0x0
    float m_flGlideTime; // 0x4
    float m_flDelay; // 0x8
    float m_flOutputGain; // 0xc
    float m_flFeedbackGain; // 0x10
    float m_flFeedforwardGain; // 0x14
    float m_flModRate; // 0x18
    float m_flModDepth; // 0x1c
    bool m_bApplyAntialiasing; // 0x20
    char pad_00[3];
}; // size: 0x24

/// CVMixFlangerProcessorDesc
class __declspec(align(8)) CVMixFlangerProcessorDesc0 {
public:
    char pad_00[32];
    VMixFlangerDesc_t m_desc; // 0x20
    char pad_01[4];
}; // size: 0x48

/// VMixDiffusorDesc_t
class __declspec(align(4)) VMixDiffusorDesc_t0 {
public:
    float m_flSize; // 0x0
    float m_flComplexity; // 0x4
    float m_flFeedback; // 0x8
    float m_flOutputGain; // 0xc
}; // size: 0x10

/// CVMixDiffusorProcessorDesc
class __declspec(align(8)) CVMixDiffusorProcessorDesc0 {
public:
    char pad_00[32];
    VMixDiffusorDesc_t m_desc; // 0x20
}; // size: 0x30

/// VMixBoxverbDesc_t
class __declspec(align(4)) VMixBoxverbDesc_t0 {
public:
    float m_flSizeMax; // 0x0
    float m_flSizeMin; // 0x4
    float m_flComplexity; // 0x8
    float m_flDiffusion; // 0xc
    float m_flModDepth; // 0x10
    float m_flModRate; // 0x14
    bool m_bParallel; // 0x18
    VMixFilterDesc_t m_filterType; // 0x1c
    float m_flWidth; // 0x2c
    float m_flHeight; // 0x30
    float m_flDepth; // 0x34
    float m_flFeedbackScale; // 0x38
    float m_flFeedbackWidth; // 0x3c
    float m_flFeedbackHeight; // 0x40
    float m_flFeedbackDepth; // 0x44
    float m_flOutputGain; // 0x48
    float m_flTaps; // 0x4c
}; // size: 0x50

/// CVMixBoxverbProcessorDesc
class __declspec(align(8)) CVMixBoxverbProcessorDesc0 {
public:
    char pad_00[32];
    VMixBoxverbDesc_t m_desc; // 0x20
}; // size: 0x70

/// CVMixBoxverb2ProcessorDesc
class __declspec(align(8)) CVMixBoxverb2ProcessorDesc0 {
public:
    char pad_00[32];
    VMixBoxverbDesc_t m_desc; // 0x20
}; // size: 0x70

/// VMixFreeverbDesc_t
class __declspec(align(4)) VMixFreeverbDesc_t0 {
public:
    float m_flRoomSize; // 0x0
    float m_flDamp; // 0x4
    float m_flWidth; // 0x8
    float m_flLateReflections; // 0xc
}; // size: 0x10

/// CVMixFreeverbProcessorDesc
class __declspec(align(8)) CVMixFreeverbProcessorDesc0 {
public:
    char pad_00[32];
    VMixFreeverbDesc_t m_desc; // 0x20
}; // size: 0x30

/// VMixPlateverbDesc_t
class __declspec(align(4)) VMixPlateverbDesc_t0 {
public:
    float m_flPrefilter; // 0x0
    float m_flInputDiffusion1; // 0x4
    float m_flInputDiffusion2; // 0x8
    float m_flDecay; // 0xc
    float m_flDamp; // 0x10
    float m_flFeedbackDiffusion1; // 0x14
    float m_flFeedbackDiffusion2; // 0x18
}; // size: 0x1c

/// CVMixPlateReverbProcessorDesc
class __declspec(align(8)) CVMixPlateReverbProcessorDesc0 {
public:
    char pad_00[32];
    VMixPlateverbDesc_t m_desc; // 0x20
    char pad_01[4];
}; // size: 0x40

/// VMixDynamicsDesc_t
class __declspec(align(4)) VMixDynamicsDesc_t0 {
public:
    float m_fldbGain; // 0x0
    float m_fldbNoiseGateThreshold; // 0x4
    float m_fldbCompressionThreshold; // 0x8
    float m_fldbLimiterThreshold; // 0xc
    float m_fldbKneeWidth; // 0x10
    float m_flRatio; // 0x14
    float m_flLimiterRatio; // 0x18
    float m_flAttackTimeMS; // 0x1c
    float m_flReleaseTimeMS; // 0x20
    float m_flRMSTimeMS; // 0x24
    float m_flWetMix; // 0x28
    bool m_bPeakMode; // 0x2c
    char pad_00[3];
}; // size: 0x30

/// CVMixDynamicsProcessorDesc
class __declspec(align(8)) CVMixDynamicsProcessorDesc0 {
public:
    char pad_00[32];
    VMixDynamicsDesc_t m_desc; // 0x20
}; // size: 0x50

/// VMixDynamicsCompressorDesc_t
class __declspec(align(4)) VMixDynamicsCompressorDesc_t0 {
public:
    float m_fldbOutputGain; // 0x0
    float m_fldbCompressionThreshold; // 0x4
    float m_fldbKneeWidth; // 0x8
    float m_flCompressionRatio; // 0xc
    float m_flAttackTimeMS; // 0x10
    float m_flReleaseTimeMS; // 0x14
    float m_flRMSTimeMS; // 0x18
    float m_flWetMix; // 0x1c
    bool m_bPeakMode; // 0x20
    char pad_00[3];
}; // size: 0x24

/// CVMixDynamicsCompressorProcessorDesc
class __declspec(align(8)) CVMixDynamicsCompressorProcessorDesc0 {
public:
    char pad_00[32];
    VMixDynamicsCompressorDesc_t m_desc; // 0x20
    char pad_01[4];
}; // size: 0x48

/// VMixDynamicsBand_t
class __declspec(align(4)) VMixDynamicsBand_t0 {
public:
    float m_fldbGainInput; // 0x0
    float m_fldbGainOutput; // 0x4
    float m_fldbThresholdBelow; // 0x8
    float m_fldbThresholdAbove; // 0xc
    float m_flRatioBelow; // 0x10
    float m_flRatioAbove; // 0x14
    float m_flAttackTimeMS; // 0x18
    float m_flReleaseTimeMS; // 0x1c
    bool m_bEnable; // 0x20
    bool m_bSolo; // 0x21
    char pad_00[2];
}; // size: 0x24

/// VMixDynamics3BandDesc_t
class __declspec(align(4)) VMixDynamics3BandDesc_t0 {
public:
    float m_fldbGainOutput; // 0x0
    float m_flRMSTimeMS; // 0x4
    float m_fldbKneeWidth; // 0x8
    float m_flDepth; // 0xc
    float m_flWetMix; // 0x10
    float m_flTimeScale; // 0x14
    float m_flLowCutoffFreq; // 0x18
    float m_flHighCutoffFreq; // 0x1c
    bool m_bPeakMode; // 0x20
    VMixDynamicsBand_t m_bandDesc; // 0x24
    char pad_00[72];
}; // size: 0x90

/// CVMixDynamics3BandProcessorDesc
class __declspec(align(8)) CVMixDynamics3BandProcessorDesc0 {
public:
    char pad_00[32];
    VMixDynamics3BandDesc_t m_desc; // 0x20
}; // size: 0xb0

/// VMixDualCompressorDesc_t
class __declspec(align(4)) VMixDualCompressorDesc_t0 {
public:
    float m_flRMSTimeMS; // 0x0
    float m_fldbKneeWidth; // 0x4
    float m_flWetMix; // 0x8
    bool m_bPeakMode; // 0xc
    VMixDynamicsBand_t m_bandDesc; // 0x10
}; // size: 0x34

/// CVMixDualCompressorProcessorDesc
class __declspec(align(8)) CVMixDualCompressorProcessorDesc0 {
public:
    char pad_00[32];
    VMixDualCompressorDesc_t m_desc; // 0x20
    char pad_01[4];
}; // size: 0x58

/// VMixEnvelopeDesc_t
class __declspec(align(4)) VMixEnvelopeDesc_t0 {
public:
    float m_flAttackTimeMS; // 0x0
    float m_flHoldTimeMS; // 0x4
    float m_flReleaseTimeMS; // 0x8
}; // size: 0xc

/// CVMixEnvelopeProcessorDesc
class __declspec(align(8)) CVMixEnvelopeProcessorDesc0 {
public:
    char pad_00[32];
    VMixEnvelopeDesc_t m_desc; // 0x20
    char pad_01[4];
}; // size: 0x30

/// VMixPitchShiftDesc_t
class __declspec(align(4)) VMixPitchShiftDesc_t0 {
public:
    int32_t m_nGrainSampleCount; // 0x0
    float m_flPitchShift; // 0x4
    int32_t m_nQuality; // 0x8
    int32_t m_nProcType; // 0xc
}; // size: 0x10

/// CVMixPitchShiftProcessorDesc
class __declspec(align(8)) CVMixPitchShiftProcessorDesc0 {
public:
    char pad_00[32];
    VMixPitchShiftDesc_t m_desc; // 0x20
}; // size: 0x30

/// VMixConvolutionDesc_t
class __declspec(align(4)) VMixConvolutionDesc_t0 {
public:
    float m_fldbGain; // 0x0
    float m_flPreDelayMS; // 0x4
    float m_flWetMix; // 0x8
    float m_fldbLow; // 0xc
    float m_fldbMid; // 0x10
    float m_fldbHigh; // 0x14
    float m_flLowCutoffFreq; // 0x18
    float m_flHighCutoffFreq; // 0x1c
}; // size: 0x20

/// CVMixConvolutionProcessorDesc
class __declspec(align(8)) CVMixConvolutionProcessorDesc0 {
public:
    char pad_00[32];
    VMixConvolutionDesc_t m_desc; // 0x20
}; // size: 0x40

/// VMixVocoderDesc_t
class __declspec(align(4)) VMixVocoderDesc_t0 {
public:
    int32_t m_nBandCount; // 0x0
    float m_flBandwidth; // 0x4
    float m_fldBModGain; // 0x8
    float m_flFreqRangeStart; // 0xc
    float m_flFreqRangeEnd; // 0x10
    float m_fldBUnvoicedGain; // 0x14
    float m_flAttackTimeMS; // 0x18
    float m_flReleaseTimeMS; // 0x1c
    int32_t m_nDebugBand; // 0x20
    bool m_bPeakMode; // 0x24
    char pad_00[3];
}; // size: 0x28

/// CVMixVocoderProcessorDesc
class __declspec(align(8)) CVMixVocoderProcessorDesc0 {
public:
    char pad_00[32];
    VMixVocoderDesc_t m_desc; // 0x20
}; // size: 0x48

/// VMixShaperDesc_t
class __declspec(align(4)) VMixShaperDesc_t0 {
public:
    int32_t m_nShape; // 0x0
    float m_fldbDrive; // 0x4
    float m_fldbOutputGain; // 0x8
    float m_flWetMix; // 0xc
    int32_t m_nOversampleFactor; // 0x10
}; // size: 0x14

/// CVMixShaperProcessorDesc
class __declspec(align(8)) CVMixShaperProcessorDesc0 {
public:
    char pad_00[32];
    VMixShaperDesc_t m_desc; // 0x20
    char pad_01[4];
}; // size: 0x38

/// VMixUtilityDesc_t
class __declspec(align(4)) VMixUtilityDesc_t0 {
public:
    VMixChannelOperation_t m_nOp; // 0x0
    float m_flInputPan; // 0x4
    float m_flOutputBalance; // 0x8
    float m_fldbOutputGain; // 0xc
    bool m_bBassMono; // 0x10
    float m_flBassFreq; // 0x14
}; // size: 0x18

/// CVMixUtilityProcessorDesc
class __declspec(align(8)) CVMixUtilityProcessorDesc0 {
public:
    char pad_00[32];
    VMixUtilityDesc_t m_desc; // 0x20
}; // size: 0x38

/// VMixAutoFilterDesc_t
class __declspec(align(4)) VMixAutoFilterDesc_t0 {
public:
    float m_flEnvelopeAmount; // 0x0
    float m_flAttackTimeMS; // 0x4
    float m_flReleaseTimeMS; // 0x8
    VMixFilterDesc_t m_filter; // 0xc
    float m_flLFOAmount; // 0x1c
    float m_flLFORate; // 0x20
    float m_flPhase; // 0x24
    VMixLFOShape_t m_nLFOShape; // 0x28
}; // size: 0x2c

/// CVMixAutoFilterProcessorDesc
class __declspec(align(8)) CVMixAutoFilterProcessorDesc0 {
public:
    char pad_00[32];
    VMixAutoFilterDesc_t m_desc; // 0x20
    char pad_01[4];
}; // size: 0x50

/// VMixOscDesc_t
class __declspec(align(4)) VMixOscDesc_t0 {
public:
    VMixLFOShape_t oscType; // 0x0
    float m_freq; // 0x4
    float m_flPhase; // 0x8
}; // size: 0xc

/// CVMixOscProcessorDesc
class __declspec(align(8)) CVMixOscProcessorDesc0 {
public:
    char pad_00[32];
    VMixOscDesc_t m_desc; // 0x20
    char pad_01[4];
}; // size: 0x30

/// VMixEffectChainDesc_t
class __declspec(align(8)) VMixEffectChainDesc_t0 {
public:
    // CUtlString m_effectName;
    char pad_00[8];
}; // size: 0x8

/// CVMixEffectChainProcessorDesc
class __declspec(align(8)) CVMixEffectChainProcessorDesc0 {
public:
    char pad_00[32];
    VMixEffectChainDesc_t m_desc; // 0x20
}; // size: 0x28

/// CVMixSteamAudioDirectProcessorDesc
class __declspec(align(8)) CVMixSteamAudioDirectProcessorDesc0 {
public:
    char pad_00[32];
}; // size: 0x20

/// CVMixSteamAudioHybridReverbProcessorDesc
class __declspec(align(8)) CVMixSteamAudioHybridReverbProcessorDesc0 {
public:
    char pad_00[32];
}; // size: 0x20

/// CVMixSteamAudioPathingProcessorDesc
class __declspec(align(8)) CVMixSteamAudioPathingProcessorDesc0 {
public:
    char pad_00[32];
}; // size: 0x20

/// CVMixSteamAudioHRTFProcessorDesc
class __declspec(align(8)) CVMixSteamAudioHRTFProcessorDesc0 {
public:
    char pad_00[32];
}; // size: 0x20

/// CVMixStereoDelayProcessorDesc
class __declspec(align(8)) CVMixStereoDelayProcessorDesc0 {
public:
    char pad_00[32];
}; // size: 0x20

/// VMixSubgraphSwitchDesc_t
class __declspec(align(8)) VMixSubgraphSwitchDesc_t0 {
public:
    // CUtlString m_name;
    // CUtlString m_effectName;
    // CUtlVector< CUtlString > m_subgraphs;
    char pad_00[40];
    VMixSubgraphSwitchInterpolationType_t m_interpolationMode; // 0x28
    bool m_bOnlyTailsOnFadeOut; // 0x2c
    float m_flInterpolationTime; // 0x30
    char pad_01[4];
}; // size: 0x38

/// CVMixSubgraphSwitchProcessorDesc
class __declspec(align(8)) CVMixSubgraphSwitchProcessorDesc0 {
public:
    char pad_00[32];
    VMixSubgraphSwitchDesc_t m_desc; // 0x20
}; // size: 0x58

/// CVMixInputBase
class __declspec(align(8)) CVMixInputBase0 {
public:
    // CUtlString m_name;
    char pad_00[16];
}; // size: 0x10

/// CVMixControlInput
class __declspec(align(8)) CVMixControlInput0 {
public:
    char pad_00[16];
    float m_flDefaultValue; // 0x10
    char pad_01[4];
}; // size: 0x18

/// CVMixControlOutput
class __declspec(align(8)) CVMixControlOutput0 {
public:
    char pad_00[16];
    float m_flDefaultValue; // 0x10
    char pad_01[4];
}; // size: 0x18

/// CVMixControlInputArray
class __declspec(align(8)) CVMixControlInputArray0 {
public:
    char pad_00[16];
    int32_t m_nArrayIndex; // 0x10
    char pad_01[4];
}; // size: 0x18

/// CVMixImpulseResponseInput
class __declspec(align(8)) CVMixImpulseResponseInput0 {
public:
    char pad_00[16];
}; // size: 0x10

/// CVMixNameInput
class __declspec(align(8)) CVMixNameInput0 {
public:
    // CUtlString m_defaultValue;
    char pad_00[32];
}; // size: 0x20

/// CVMixVsndInput
class __declspec(align(8)) CVMixVsndInput0 {
public:
    // CUtlString m_defaultValue;
    char pad_00[24];
    int32_t m_nProcessor; // 0x18
    char pad_01[4];
}; // size: 0x20

/// CVMixCommand
class __declspec(align(4)) CVMixCommand0 {
public:
    VMixGraphCommandID_t m_nCommand; // 0x0
    uint32_t m_nParameterNameHash; // 0x4
    int32_t m_nOutputSubmix; // 0x8
    int32_t m_nInputSubmix0; // 0xc
    int32_t m_nInputSubmix1; // 0x10
    int32_t m_nProcessor; // 0x14
    int32_t m_nInputValue0; // 0x18
    int32_t m_nInputValue1; // 0x1c
}; // size: 0x20

/// CVMixAudioMeter
class __declspec(align(8)) CVMixAudioMeter0 {
public:
    // CUtlString m_name;
    // CUtlString m_displayName;
    char pad_00[24];
}; // size: 0x18

/// CVMixControlMeter
class __declspec(align(8)) CVMixControlMeter0 {
public:
    char pad_00[16];
    int32_t m_nValueIndex; // 0x10
    char pad_01[4];
}; // size: 0x18

/// CVMixNameInputMeter
class __declspec(align(8)) CVMixNameInputMeter0 {
public:
    char pad_00[16];
    int32_t m_nValueIndex; // 0x10
    char pad_01[4];
}; // size: 0x18

/// CVMixAdditionalOutput
class __declspec(align(8)) CVMixAdditionalOutput0 {
public:
    // CUtlString m_name;
    char pad_00[16];
}; // size: 0x10

/// CVMixAutomaticControlInput
class __declspec(align(8)) CVMixAutomaticControlInput0 {
public:
    // CUtlString m_name;
    char pad_00[8];
    int32_t m_nControlInputIndex; // 0x8
    bool m_bIsTrackSend; // 0xc
    bool m_bIsStackVar; // 0xd
    char pad_01[2];
}; // size: 0x10

/// CVMixCurveHeader
class __declspec(align(4)) CVMixCurveHeader0 {
public:
    uint32_t m_nControlPointCount; // 0x0
    uint32_t m_nControlPointStart; // 0x4
}; // size: 0x8

/// CVMixGraphDescData
class __declspec(align(8)) CVMixGraphDescData0 {
public:
    // CUtlString m_name;
    char pad_00[8];
    int32_t m_nGraphOutputChannels; // 0x8
    bool m_bIsMainGraph; // 0xc
    char pad_01[3];
}; // size: 0x10

#ifdef __cplusplus
#pragma warning(pop)
#endif // __cplusplus