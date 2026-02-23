enum SosActionStopType_t : uint32_t {
    SOS_STOPTYPE_NONE = 0,
    SOS_STOPTYPE_TIME = 1,
    SOS_STOPTYPE_OPVAR = 2,
};

enum SosActionLimitSortType_t : uint32_t {
    SOS_LIMIT_SORTTYPE_HIGHEST = 0,
    SOS_LIMIT_SORTTYPE_LOWEST = 1,
};

enum SosActionSetParamSortType_t : uint32_t {
    SOS_SETPARAM_SORTTYPE_HIGHEST = 0,
    SOS_SETPARAM_SORTTYPE_LOWEST = 1,
};

enum SosGroupType_t : uint32_t {
    SOS_GROUPTYPE_DYNAMIC = 0,
    SOS_GROUPTYPE_STATIC = 1,
};

enum SosGroupFieldBehavior_t : uint32_t {
    kIgnore = 0,
    kBranch = 1,
    kMatch = 2,
};

enum soundlevel_t : uint32_t {
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

enum SosEditItemType_t : uint32_t {
    SOS_EDIT_ITEM_TYPE_SOUNDEVENTS = 0,
    SOS_EDIT_ITEM_TYPE_SOUNDEVENT = 1,
    SOS_EDIT_ITEM_TYPE_LIBRARYSTACKS = 2,
    SOS_EDIT_ITEM_TYPE_STACK = 3,
    SOS_EDIT_ITEM_TYPE_OPERATOR = 4,
    SOS_EDIT_ITEM_TYPE_FIELD = 5,
};

enum CVSoundFormat_t : uint8_t {
    PCM16 = 0,
    PCM8 = 1,
    MP3 = 2,
    ADPCM = 3,
};

enum EMode_t : uint32_t {
    Peak = 0,
    RMS = 1,
};

enum PlayBackMode_t : uint32_t {
    Random = 0,
    RandomNoRepeats = 1,
    RandomAvoidLast = 2,
    Sequential = 3,
    RandomWeights = 4,
};

enum EMidiNote : uint8_t {
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

enum EWaveform : uint8_t {
    Sine = 0,
    Square = 1,
    Saw = 2,
    Triangle = 3,
    Noise = 4,
};

enum VMixFilterType_t : uint16_t {
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

enum VMixFilterSlope_t : uint8_t {
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

enum VMixLFOShape_t : uint32_t {
    LFO_SHAPE_SINE = 0,
    LFO_SHAPE_SQUARE = 1,
    LFO_SHAPE_TRI = 2,
    LFO_SHAPE_SAW = 3,
    LFO_SHAPE_NOISE = 4,
};

enum VMixPannerType_t : uint32_t {
    PANNER_TYPE_LINEAR = 0,
    PANNER_TYPE_EQUAL_POWER = 1,
};

enum VMixSubgraphSwitchInterpolationType_t : uint32_t {
    SUBGRAPH_INTERPOLATION_TEMPORAL_CROSSFADE = 0,
    SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT = 1,
    SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING = 2,
};

enum VMixChannelOperation_t : uint32_t {
    VMIX_CHAN_STEREO = 0,
    VMIX_CHAN_LEFT = 1,
    VMIX_CHAN_RIGHT = 2,
    VMIX_CHAN_SWAP = 3,
    VMIX_CHAN_MONO = 4,
    VMIX_CHAN_MID_SIDE = 5,
};

enum VMixGraphCommandID_t : uint32_t {
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

class CSosGroupActionSchema {
public:
    char pad_00[8];
};

class CSosGroupActionLimitSchema {
public:
    char pad_00[8];
    int32_t m_nMaxCount;
    SosActionStopType_t m_nStopType;
    SosActionLimitSortType_t m_nSortType;
    bool m_bStopImmediate;
    bool m_bCountStopped;
    char pad_01[2];
};

class CSosGroupActionTimeLimitSchema {
public:
    char pad_00[8];
    float m_flMaxDuration;
    char pad_01[4];
};

class CSosGroupActionTimeBlockLimitSchema {
public:
    char pad_00[8];
    int32_t m_nMaxCount;
    float m_flMaxDuration;
};

class CSosGroupActionSetSoundeventParameterSchema {
public:
    char pad_00[8];
    int32_t m_nMaxCount;
    float m_flMinValue;
    float m_flMaxValue;
    // CUtlString m_opvarName;
    char pad_01[12];
    SosActionSetParamSortType_t m_nSortType;
    char pad_02[4];
};

class CSosGroupActionSoundeventClusterSchema {
public:
    char pad_00[8];
    int32_t m_nMinNearby;
    float m_flClusterEpsilon;
    // CUtlString m_shouldPlayOpvar;
    // CUtlString m_shouldPlayClusterChild;
    // CUtlString m_clusterSizeOpvar;
    // CUtlString m_groupBoundingBoxMinsOpvar;
    // CUtlString m_groupBoundingBoxMaxsOpvar;
    char pad_01[64];
};

class CSosGroupActionSoundeventPrioritySchema {
public:
    // CUtlString m_priorityValue;
    // CUtlString m_priorityVolumeScalar;
    // CUtlString m_priorityContributeButDontRead;
    // CUtlString m_bPriorityReadButDontContribute;
    char pad_00[56];
};

class CSosGroupActionMemberCountEnvelopeSchema {
public:
    char pad_00[8];
    int32_t m_nBaseCount;
    int32_t m_nTargetCount;
    float m_flBaseValue;
    float m_flTargetValue;
    float m_flAttack;
    float m_flDecay;
    // CUtlString m_resultVarName;
    char pad_01[8];
    bool m_bSaveToGroup;
    char pad_02[7];
};

class CSosGroupActionSoundeventCountSchema {
public:
    char pad_00[8];
    bool m_bExcludeStoppedSounds;
    // CUtlString m_strCountKeyName;
    char pad_01[15];
};

class CSosGroupActionSoundeventMinMaxValuesSchema {
public:
    // CUtlString m_strQueryPublicFieldName;
    // CUtlString m_strDelayPublicFieldName;
    char pad_00[24];
    bool m_bExcludeStoppedSounds;
    bool m_bExcludeDelayedSounds;
    bool m_bExcludeSoundsBelowThreshold;
    float m_flExcludeSoundsMinThresholdValue;
    bool m_bExcludSoundsAboveThreshold;
    float m_flExcludeSoundsMaxThresholdValue;
    // CUtlString m_strMinValueName;
    // CUtlString m_strMaxValueName;
    char pad_01[24];
};

class CSosSoundEventGroupSchema {
public:
    char pad_00[8];
    SosGroupType_t m_nGroupType;
    bool m_bBlocksEvents;
    int32_t m_nBlockMaxCount;
    float m_flMemberLifespanTime;
    bool m_bInvertMatch;
    SosGroupFieldBehavior_t m_Behavior_EventName;
    // CUtlString m_matchSoundEventName;
    char pad_01[8];
    bool m_bMatchEventSubString;
    // CUtlString m_matchSoundEventSubString;
    char pad_02[12];
    SosGroupFieldBehavior_t m_Behavior_EntIndex;
    float m_flEntIndex;
    SosGroupFieldBehavior_t m_Behavior_Opvar;
    float m_flOpvar;
    SosGroupFieldBehavior_t m_Behavior_String;
    // CUtlString m_opvarString;
    // CUtlVector< CSosGroupActionSchema* > m_vActions;
    char pad_03[36];
};

class SosEditItemInfo_t {
public:
    SosEditItemType_t itemType;
    // CUtlString itemName;
    // CUtlString itemTypeName;
    // CUtlString itemKVString;
    char pad_00[36];
    Vector2D itemPos;
};

class SelectedEditItemInfo_t {
public:
    // CUtlVector< SosEditItemInfo_t > m_EditItems;
    char pad_00[24];
};

class CSoundEventMetaData {
public:
    // CStrongHandle< InfoForResourceTypeCVMixListResource > m_soundEventVMix;
    char pad_00[8];
};

class CDSPMixgroupModifier {
public:
    // CUtlString m_mixgroup;
    char pad_00[8];
    float m_flModifier;
    float m_flModifierMin;
    float m_flSourceModifier;
    float m_flSourceModifierMin;
    float m_flListenerReverbModifierWhenSourceReverbIsActive;
    char pad_01[4];
};

class CDspPresetModifierList {
public:
    // CUtlString m_dspName;
    // CUtlVector< CDSPMixgroupModifier > m_modifiers;
    char pad_00[32];
};

class CDSPPresetMixgroupModifierTable {
public:
    // CUtlVector< CDspPresetModifierList > m_table;
    char pad_00[24];
};

class CVoiceContainerAnalysisBase {
public:
    char pad_00[8];
    bool m_bRegenerateCurveOnCompile;
    // CPiecewiseCurve m_curve;
    char pad_01[71];
};

class CVoiceContainerBase {
public:
    char pad_00[40];
    CVSound m_vSound;
    CVoiceContainerAnalysisBase* m_pEnvelopeAnalyzer;
};

class CVSound {
public:
    int32_t m_nRate;
    CVSoundFormat_t m_nFormat;
    uint32_t m_nChannels;
    int32_t m_nLoopStart;
    uint32_t m_nSampleCount;
    float m_flDuration;
    // CUtlVector< CAudioSentence > m_Sentences;
    char pad_00[24];
    uint32_t m_nStreamingSize;
    // CUtlVector< int32 > m_nSeekTable;
    char pad_01[28];
    int32_t m_nLoopEnd;
    // CUtlBinaryBlock m_encodedHeader;
    char pad_02[36];
};

class CVoiceContainerDefault {
public:
    char pad_00[168];
};

class CVoiceContainerGenerator {
public:
    char pad_00[168];
};

class CVoiceContainerAsyncGenerator {
public:
    char pad_00[184];
};

class CVoiceContainerNull {
public:
    char pad_00[168];
};

class CSoundContainerReference {
public:
    bool m_bUseReference;
    // CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sound;
    char pad_00[8];
    CVoiceContainerBase* m_pSound;
};

class CSoundContainerReferenceArray {
public:
    bool m_bUseReference;
    // CUtlVector< CStrongHandle< InfoForResourceTypeCVoiceContainerBase > > m_sounds;
    // CUtlVector< CVoiceContainerBase* > m_pSounds;
    char pad_00[55];
};

class CAudioEmphasisSample {
public:
    float m_flTime;
    float m_flValue;
};

class CAudioPhonemeTag {
public:
    float m_flStartTime;
    float m_flEndTime;
    int32_t m_nPhonemeCode;
};

class CAudioMorphData {
public:
    // CUtlVector< float32 > m_times;
    // CUtlVector< uint32 > m_nameHashCodes;
    // CUtlVector< CUtlString > m_nameStrings;
    // CUtlVector< CUtlVector< float32 > > m_samples;
    char pad_00[96];
    float m_flEaseIn;
    float m_flEaseOut;
};

class CAudioSentence {
public:
    bool m_bShouldVoiceDuck;
    // CUtlVector< CAudioPhonemeTag > m_RunTimePhonemes;
    // CUtlVector< CAudioEmphasisSample > m_EmphasisSamples;
    char pad_00[48];
    CAudioMorphData m_morphData;
};

class CSoundInfoHeader {
public:
    char pad_00[1];
};

class CVoiceContainerEnvelopeAnalyzer {
public:
    char pad_00[80];
    EMode_t m_mode;
    float m_fAnalysisWindowMs;
    float m_flThreshold;
    char pad_01[4];
};

class CVoiceContainerEnvelope {
public:
    // CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sound;
    char pad_00[176];
    CVoiceContainerAnalysisBase* m_analysisContainer;
};

class CVoiceContainerSelector {
public:
    char pad_00[168];
    PlayBackMode_t m_mode;
    CSoundContainerReferenceArray m_soundsToPlay;
    // CUtlVector< float32 > m_fProbabilityWeights;
    char pad_01[56];
};

class CVoiceContainerBlender {
public:
    char pad_00[168];
    CSoundContainerReference m_firstSound;
    CSoundContainerReference m_secondSound;
    float m_flBlendFactor;
    char pad_01[4];
};

class CVoiceContainerMultiBlender {
public:
    char pad_00[168];
    CSoundContainerReferenceArray m_soundsToPlay;
    float m_flBlendFactor;
    float m_flCrossover;
};

class CVoiceContainerEnum {
public:
    char pad_00[168];
    CSoundContainerReferenceArray m_soundsToPlay;
    int32_t m_iSelection;
    float m_flCrossfadeTime;
};

class CVoiceContainerLoopTrigger {
public:
    char pad_00[168];
    CSoundContainerReference m_sound;
    float m_flRetriggerTimeMin;
    float m_flRetriggerTimeMax;
    float m_flFadeTime;
    bool m_bCrossFade;
    char pad_01[3];
};

class CVoiceContainerLoopXFade {
public:
    char pad_00[168];
    CSoundContainerReference m_sound;
    float m_flLoopEnd;
    float m_flLoopStart;
    float m_flFadeOut;
    float m_flFadeIn;
    bool m_bPlayHead;
    bool m_bPlayTail;
    bool m_bEqualPow;
    char pad_01[5];
};

class CVoiceContainerRandomSampler {
public:
    char pad_00[184];
    float m_flAmplitude;
    float m_flAmplitudeJitter;
    float m_flTimeJitter;
    float m_flMaxLength;
    int32_t m_nNumDelayVariations;
    // CUtlVector< CStrongHandle< InfoForResourceTypeCVoiceContainerBase > > m_grainResources;
    char pad_01[276];
};

class CVoiceContainerGranulator {
public:
    char pad_00[184];
    float m_flGrainLength;
    float m_flGrainCrossfadeAmount;
    float m_flStartJitter;
    float m_flPlaybackJitter;
    bool m_bShouldWraparound;
    // CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sourceAudio;
    char pad_01[199];
};

class CVoiceContainerTapePlayer {
public:
    char pad_00[184];
    bool m_bShouldWraparound;
    // CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sourceAudio;
    char pad_01[12];
    float m_flTapeSpeedAttackTime;
    float m_flTapeSpeedReleaseTime;
    char pad_02[40];
};

class CVoiceContainerStaticAdditiveSynth {
public:
    // CUtlVector< CVoiceContainerStaticAdditiveSynth::CTone > m_tones;
    char pad_00[232];
};

class CVoiceContainerStaticAdditiveSynth::CTone {
public:
    // CUtlVector< CVoiceContainerStaticAdditiveSynth::CHarmonic > m_harmonics;
    // CPiecewiseCurve m_curve;
    char pad_00[88];
    bool m_bSyncInstances;
    char pad_01[7];
};

class CVoiceContainerStaticAdditiveSynth::CGainScalePerInstance {
public:
    float m_flMinVolume;
    int32_t m_nInstancesAtMinVolume;
    float m_flMaxVolume;
    int32_t m_nInstancesAtMaxVolume;
};

class CVoiceContainerStaticAdditiveSynth::CHarmonic {
public:
    EWaveform m_nWaveform;
    EMidiNote m_nFundamental;
    int32_t m_nOctave;
    float m_flCents;
    float m_flPhase;
    // CPiecewiseCurve m_curve;
    char pad_00[64];
    CVoiceContainerStaticAdditiveSynth::CGainScalePerInstance m_volumeScaling;
    char pad_01[8];
};

class CVoiceContainerShapedNoise {
public:
    char pad_00[168];
    bool m_bUseCurveForFrequency;
    float m_flFrequency;
    // CPiecewiseCurve m_frequencySweep;
    char pad_01[64];
    bool m_bUseCurveForResonance;
    float m_flResonance;
    // CPiecewiseCurve m_resonanceSweep;
    char pad_02[64];
    bool m_bUseCurveForAmplitude;
    float m_flGainInDecibels;
    // CPiecewiseCurve m_gainSweep;
    char pad_03[64];
};

class CVoiceContainerSwitch {
public:
    // CUtlVector< CSoundContainerReference > m_soundsToPlay;
    char pad_00[192];
};

class CVoiceContainerSetElement {
public:
    CSoundContainerReference m_sound;
    float m_flVolumeDB;
    char pad_00[4];
};

class CVoiceContainerSet {
public:
    // CUtlVector< CVoiceContainerSetElement > m_soundsToPlay;
    char pad_00[192];
};

class CVoiceContainerDecayingSineWave {
public:
    char pad_00[168];
    float m_flFrequency;
    float m_flDecayTime;
};

class CVoiceContainerAmpedDecayingSineWave {
public:
    char pad_00[176];
    float m_flGainAmount;
    char pad_01[4];
};

class CVoiceContainerRealtimeFMSineWave {
public:
    char pad_00[168];
    float m_flCarrierFrequency;
    float m_flModulatorFrequency;
    float m_flModulatorAmount;
    char pad_01[4];
};

class CVoiceContainerParameterBlender {
public:
    char pad_00[168];
    CSoundContainerReference m_firstSound;
    CSoundContainerReference m_secondSound;
    bool m_bEnableOcclusionBlend;
    // CPiecewiseCurve m_curve1;
    // CPiecewiseCurve m_curve2;
    char pad_01[135];
    bool m_bEnableDistanceBlend;
    // CPiecewiseCurve m_curve3;
    // CPiecewiseCurve m_curve4;
    char pad_02[135];
};

class CVMixBaseProcessorDesc {
public:
    // CUtlString m_name;
    char pad_00[20];
    int32_t m_nChannels;
    float m_flxfade;
    char pad_01[4];
};

class VMixFilterDesc_t {
public:
    VMixFilterType_t m_nFilterType;
    VMixFilterSlope_t m_nFilterSlope;
    bool m_bEnabled;
    float m_fldbGain;
    float m_flCutoffFreq;
    float m_flQ;
};

class CVMixFilterProcessorDesc {
public:
    char pad_00[32];
    VMixFilterDesc_t m_desc;
};

class VMixEQ8Desc_t {
public:
    VMixFilterDesc_t m_stages;
    char pad_00[112];
};

class CVMixEQ8ProcessorDesc {
public:
    char pad_00[32];
    VMixEQ8Desc_t m_desc;
};

class VMixPresetDSPDesc_t {
public:
    // CUtlString m_effectName;
    char pad_00[16];
};

class CVMixPresetDSPProcessorDesc {
public:
    char pad_00[32];
    VMixPresetDSPDesc_t m_desc;
};

class VMixDelayDesc_t {
public:
    VMixFilterDesc_t m_feedbackFilter;
    bool m_bEnableFilter;
    float m_flDelay;
    float m_flDirectGain;
    float m_flDelayGain;
    float m_flFeedbackGain;
    float m_flWidth;
};

class CVMixDelayProcessorDesc {
public:
    char pad_00[32];
    VMixDelayDesc_t m_desc;
};

class VMixPannerDesc_t {
public:
    VMixPannerType_t m_type;
    float m_flStrength;
};

class CVMixPannerProcessorDesc {
public:
    char pad_00[32];
    VMixPannerDesc_t m_desc;
};

class VMixModDelayDesc_t {
public:
    VMixFilterDesc_t m_feedbackFilter;
    bool m_bPhaseInvert;
    float m_flGlideTime;
    float m_flDelay;
    float m_flOutputGain;
    float m_flFeedbackGain;
    float m_flModRate;
    float m_flModDepth;
    bool m_bApplyAntialiasing;
    char pad_00[3];
};

class CVMixModDelayProcessorDesc {
public:
    char pad_00[32];
    VMixModDelayDesc_t m_desc;
};

class VMixFlangerDesc_t {
public:
    bool m_bPhaseInvert;
    float m_flGlideTime;
    float m_flDelay;
    float m_flOutputGain;
    float m_flFeedbackGain;
    float m_flFeedforwardGain;
    float m_flModRate;
    float m_flModDepth;
    bool m_bApplyAntialiasing;
    char pad_00[3];
};

class CVMixFlangerProcessorDesc {
public:
    char pad_00[32];
    VMixFlangerDesc_t m_desc;
    char pad_01[4];
};

class VMixDiffusorDesc_t {
public:
    float m_flSize;
    float m_flComplexity;
    float m_flFeedback;
    float m_flOutputGain;
};

class CVMixDiffusorProcessorDesc {
public:
    char pad_00[32];
    VMixDiffusorDesc_t m_desc;
};

class VMixBoxverbDesc_t {
public:
    float m_flSizeMax;
    float m_flSizeMin;
    float m_flComplexity;
    float m_flDiffusion;
    float m_flModDepth;
    float m_flModRate;
    bool m_bParallel;
    VMixFilterDesc_t m_filterType;
    float m_flWidth;
    float m_flHeight;
    float m_flDepth;
    float m_flFeedbackScale;
    float m_flFeedbackWidth;
    float m_flFeedbackHeight;
    float m_flFeedbackDepth;
    float m_flOutputGain;
    float m_flTaps;
};

class CVMixBoxverbProcessorDesc {
public:
    char pad_00[32];
    VMixBoxverbDesc_t m_desc;
};

class CVMixBoxverb2ProcessorDesc {
public:
    char pad_00[32];
    VMixBoxverbDesc_t m_desc;
};

class VMixFreeverbDesc_t {
public:
    float m_flRoomSize;
    float m_flDamp;
    float m_flWidth;
    float m_flLateReflections;
};

class CVMixFreeverbProcessorDesc {
public:
    char pad_00[32];
    VMixFreeverbDesc_t m_desc;
};

class VMixPlateverbDesc_t {
public:
    float m_flPrefilter;
    float m_flInputDiffusion1;
    float m_flInputDiffusion2;
    float m_flDecay;
    float m_flDamp;
    float m_flFeedbackDiffusion1;
    float m_flFeedbackDiffusion2;
};

class CVMixPlateReverbProcessorDesc {
public:
    char pad_00[32];
    VMixPlateverbDesc_t m_desc;
    char pad_01[4];
};

class VMixDynamicsDesc_t {
public:
    float m_fldbGain;
    float m_fldbNoiseGateThreshold;
    float m_fldbCompressionThreshold;
    float m_fldbLimiterThreshold;
    float m_fldbKneeWidth;
    float m_flRatio;
    float m_flLimiterRatio;
    float m_flAttackTimeMS;
    float m_flReleaseTimeMS;
    float m_flRMSTimeMS;
    float m_flWetMix;
    bool m_bPeakMode;
    char pad_00[3];
};

class CVMixDynamicsProcessorDesc {
public:
    char pad_00[32];
    VMixDynamicsDesc_t m_desc;
};

class VMixDynamicsCompressorDesc_t {
public:
    float m_fldbOutputGain;
    float m_fldbCompressionThreshold;
    float m_fldbKneeWidth;
    float m_flCompressionRatio;
    float m_flAttackTimeMS;
    float m_flReleaseTimeMS;
    float m_flRMSTimeMS;
    float m_flWetMix;
    bool m_bPeakMode;
    char pad_00[3];
};

class CVMixDynamicsCompressorProcessorDesc {
public:
    char pad_00[32];
    VMixDynamicsCompressorDesc_t m_desc;
    char pad_01[4];
};

class VMixDynamicsBand_t {
public:
    float m_fldbGainInput;
    float m_fldbGainOutput;
    float m_fldbThresholdBelow;
    float m_fldbThresholdAbove;
    float m_flRatioBelow;
    float m_flRatioAbove;
    float m_flAttackTimeMS;
    float m_flReleaseTimeMS;
    bool m_bEnable;
    bool m_bSolo;
    char pad_00[2];
};

class VMixDynamics3BandDesc_t {
public:
    float m_fldbGainOutput;
    float m_flRMSTimeMS;
    float m_fldbKneeWidth;
    float m_flDepth;
    float m_flWetMix;
    float m_flTimeScale;
    float m_flLowCutoffFreq;
    float m_flHighCutoffFreq;
    bool m_bPeakMode;
    VMixDynamicsBand_t m_bandDesc;
    char pad_00[72];
};

class CVMixDynamics3BandProcessorDesc {
public:
    char pad_00[32];
    VMixDynamics3BandDesc_t m_desc;
};

class VMixDualCompressorDesc_t {
public:
    float m_flRMSTimeMS;
    float m_fldbKneeWidth;
    float m_flWetMix;
    bool m_bPeakMode;
    VMixDynamicsBand_t m_bandDesc;
};

class CVMixDualCompressorProcessorDesc {
public:
    char pad_00[32];
    VMixDualCompressorDesc_t m_desc;
    char pad_01[4];
};

class VMixEnvelopeDesc_t {
public:
    float m_flAttackTimeMS;
    float m_flHoldTimeMS;
    float m_flReleaseTimeMS;
};

class CVMixEnvelopeProcessorDesc {
public:
    char pad_00[32];
    VMixEnvelopeDesc_t m_desc;
    char pad_01[4];
};

class VMixPitchShiftDesc_t {
public:
    int32_t m_nGrainSampleCount;
    float m_flPitchShift;
    int32_t m_nQuality;
    int32_t m_nProcType;
};

class CVMixPitchShiftProcessorDesc {
public:
    char pad_00[32];
    VMixPitchShiftDesc_t m_desc;
};

class VMixConvolutionDesc_t {
public:
    float m_fldbGain;
    float m_flPreDelayMS;
    float m_flWetMix;
    float m_fldbLow;
    float m_fldbMid;
    float m_fldbHigh;
    float m_flLowCutoffFreq;
    float m_flHighCutoffFreq;
};

class CVMixConvolutionProcessorDesc {
public:
    char pad_00[32];
    VMixConvolutionDesc_t m_desc;
};

class VMixVocoderDesc_t {
public:
    int32_t m_nBandCount;
    float m_flBandwidth;
    float m_fldBModGain;
    float m_flFreqRangeStart;
    float m_flFreqRangeEnd;
    float m_fldBUnvoicedGain;
    float m_flAttackTimeMS;
    float m_flReleaseTimeMS;
    int32_t m_nDebugBand;
    bool m_bPeakMode;
    char pad_00[3];
};

class CVMixVocoderProcessorDesc {
public:
    char pad_00[32];
    VMixVocoderDesc_t m_desc;
};

class VMixShaperDesc_t {
public:
    int32_t m_nShape;
    float m_fldbDrive;
    float m_fldbOutputGain;
    float m_flWetMix;
    int32_t m_nOversampleFactor;
};

class CVMixShaperProcessorDesc {
public:
    char pad_00[32];
    VMixShaperDesc_t m_desc;
    char pad_01[4];
};

class VMixUtilityDesc_t {
public:
    VMixChannelOperation_t m_nOp;
    float m_flInputPan;
    float m_flOutputBalance;
    float m_fldbOutputGain;
    bool m_bBassMono;
    float m_flBassFreq;
};

class CVMixUtilityProcessorDesc {
public:
    char pad_00[32];
    VMixUtilityDesc_t m_desc;
};

class VMixAutoFilterDesc_t {
public:
    float m_flEnvelopeAmount;
    float m_flAttackTimeMS;
    float m_flReleaseTimeMS;
    VMixFilterDesc_t m_filter;
    float m_flLFOAmount;
    float m_flLFORate;
    float m_flPhase;
    VMixLFOShape_t m_nLFOShape;
};

class CVMixAutoFilterProcessorDesc {
public:
    char pad_00[32];
    VMixAutoFilterDesc_t m_desc;
    char pad_01[4];
};

class VMixOscDesc_t {
public:
    VMixLFOShape_t oscType;
    float m_freq;
    float m_flPhase;
};

class CVMixOscProcessorDesc {
public:
    char pad_00[32];
    VMixOscDesc_t m_desc;
    char pad_01[4];
};

class VMixEffectChainDesc_t {
public:
    // CUtlString m_effectName;
    char pad_00[8];
};

class CVMixEffectChainProcessorDesc {
public:
    char pad_00[32];
    VMixEffectChainDesc_t m_desc;
};

class CVMixSteamAudioDirectProcessorDesc {
public:
    char pad_00[32];
};

class CVMixSteamAudioHybridReverbProcessorDesc {
public:
    char pad_00[32];
};

class CVMixSteamAudioPathingProcessorDesc {
public:
    char pad_00[32];
};

class CVMixSteamAudioHRTFProcessorDesc {
public:
    char pad_00[32];
};

class CVMixStereoDelayProcessorDesc {
public:
    char pad_00[32];
};

class VMixSubgraphSwitchDesc_t {
public:
    // CUtlString m_name;
    // CUtlString m_effectName;
    // CUtlVector< CUtlString > m_subgraphs;
    char pad_00[40];
    VMixSubgraphSwitchInterpolationType_t m_interpolationMode;
    bool m_bOnlyTailsOnFadeOut;
    float m_flInterpolationTime;
    char pad_01[4];
};

class CVMixSubgraphSwitchProcessorDesc {
public:
    char pad_00[32];
    VMixSubgraphSwitchDesc_t m_desc;
};

class CVMixInputBase {
public:
    // CUtlString m_name;
    char pad_00[16];
};

class CVMixControlInput {
public:
    char pad_00[16];
    float m_flDefaultValue;
    char pad_01[4];
};

class CVMixControlOutput {
public:
    char pad_00[16];
    float m_flDefaultValue;
    char pad_01[4];
};

class CVMixControlInputArray {
public:
    char pad_00[16];
    int32_t m_nArrayIndex;
    char pad_01[4];
};

class CVMixImpulseResponseInput {
public:
    char pad_00[16];
};

class CVMixNameInput {
public:
    // CUtlString m_defaultValue;
    char pad_00[32];
};

class CVMixVsndInput {
public:
    // CUtlString m_defaultValue;
    char pad_00[24];
    int32_t m_nProcessor;
    char pad_01[4];
};

class CVMixCommand {
public:
    VMixGraphCommandID_t m_nCommand;
    uint32_t m_nParameterNameHash;
    int32_t m_nOutputSubmix;
    int32_t m_nInputSubmix0;
    int32_t m_nInputSubmix1;
    int32_t m_nProcessor;
    int32_t m_nInputValue0;
    int32_t m_nInputValue1;
};

class CVMixAudioMeter {
public:
    // CUtlString m_name;
    // CUtlString m_displayName;
    char pad_00[24];
};

class CVMixControlMeter {
public:
    char pad_00[16];
    int32_t m_nValueIndex;
    char pad_01[4];
};

class CVMixNameInputMeter {
public:
    char pad_00[16];
    int32_t m_nValueIndex;
    char pad_01[4];
};

class CVMixAdditionalOutput {
public:
    // CUtlString m_name;
    char pad_00[16];
};

class CVMixAutomaticControlInput {
public:
    // CUtlString m_name;
    char pad_00[8];
    int32_t m_nControlInputIndex;
    bool m_bIsTrackSend;
    bool m_bIsStackVar;
    char pad_01[2];
};

class CVMixCurveHeader {
public:
    uint32_t m_nControlPointCount;
    uint32_t m_nControlPointStart;
};

class CVMixGraphDescData {
public:
    // CUtlString m_name;
    char pad_00[8];
    int32_t m_nGraphOutputChannels;
    bool m_bIsMainGraph;
    char pad_01[3];
};

