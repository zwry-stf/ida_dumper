enum PulseMethodCallMode_t : uint32_t {
    SYNC_WAIT_FOR_COMPLETION = 0,
    ASYNC_FIRE_AND_FORGET = 1,
};

enum PulseCursorCancelPriority_t : uint32_t {
    None = 0,
    CancelOnSucceeded = 1,
    SoftCancel = 2,
    HardCancel = 3,
};

enum PulseBestOutflowRules_t : uint32_t {
    SORT_BY_NUMBER_OF_VALID_CRITERIA = 0,
    SORT_BY_OUTFLOW_INDEX = 1,
};

enum CompositeMaterialMatchFilterType_t : uint32_t {
    MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0,
    MATCH_FILTER_MATERIAL_SHADER = 1,
    MATCH_FILTER_MATERIAL_NAME_SUBSTR = 2,
    MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 3,
    MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 4,
    MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 5,
};

enum CompositeMaterialVarSystemVar_t : uint32_t {
    COMPMATSYSVAR_COMPOSITETIME = 0,
    COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 1,
};

enum CompositeMaterialInputLooseVariableType_t : uint32_t {
    LOOSE_VARIABLE_TYPE_BOOLEAN = 0,
    LOOSE_VARIABLE_TYPE_INTEGER1 = 1,
    LOOSE_VARIABLE_TYPE_INTEGER2 = 2,
    LOOSE_VARIABLE_TYPE_INTEGER3 = 3,
    LOOSE_VARIABLE_TYPE_INTEGER4 = 4,
    LOOSE_VARIABLE_TYPE_FLOAT1 = 5,
    LOOSE_VARIABLE_TYPE_FLOAT2 = 6,
    LOOSE_VARIABLE_TYPE_FLOAT3 = 7,
    LOOSE_VARIABLE_TYPE_FLOAT4 = 8,
    LOOSE_VARIABLE_TYPE_COLOR4 = 9,
    LOOSE_VARIABLE_TYPE_STRING = 10,
    LOOSE_VARIABLE_TYPE_SYSTEMVAR = 11,
    LOOSE_VARIABLE_TYPE_RESOURCE_MATERIAL = 12,
    LOOSE_VARIABLE_TYPE_RESOURCE_TEXTURE = 13,
    LOOSE_VARIABLE_TYPE_PANORAMA_RENDER = 14,
};

enum CompositeMaterialInputTextureType_t : uint32_t {
    INPUT_TEXTURE_TYPE_DEFAULT = 0,
    INPUT_TEXTURE_TYPE_NORMALMAP = 1,
    INPUT_TEXTURE_TYPE_COLOR = 2,
    INPUT_TEXTURE_TYPE_MASKS = 3,
    INPUT_TEXTURE_TYPE_ROUGHNESS = 4,
    INPUT_TEXTURE_TYPE_PEARLESCENCE_MASK = 5,
    INPUT_TEXTURE_TYPE_AO = 6,
    INPUT_TEXTURE_TYPE_POSITION = 7,
};

enum CompMatPropertyMutatorType_t : uint32_t {
    COMP_MAT_PROPERTY_MUTATOR_INIT = 0,
    COMP_MAT_PROPERTY_MUTATOR_COPY_MATCHING_KEYS = 1,
    COMP_MAT_PROPERTY_MUTATOR_COPY_KEYS_WITH_SUFFIX = 2,
    COMP_MAT_PROPERTY_MUTATOR_COPY_PROPERTY = 3,
    COMP_MAT_PROPERTY_MUTATOR_SET_VALUE = 4,
    COMP_MAT_PROPERTY_MUTATOR_GENERATE_TEXTURE = 5,
    COMP_MAT_PROPERTY_MUTATOR_CONDITIONAL_MUTATORS = 6,
    COMP_MAT_PROPERTY_MUTATOR_POP_INPUT_QUEUE = 7,
    COMP_MAT_PROPERTY_MUTATOR_DRAW_TEXT = 8,
    COMP_MAT_PROPERTY_MUTATOR_RANDOM_ROLL_INPUT_VARIABLES = 9,
};

enum CompMatPropertyMutatorConditionType_t : uint32_t {
    COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0,
    COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 1,
    COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 2,
};

enum CompositeMaterialInputContainerSourceType_t : uint32_t {
    CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0,
    CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 1,
    CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 2,
    CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 3,
    CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 4,
    CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 5,
};

enum C_BaseCombatCharacter::WaterWakeMode_t : uint32_t {
    WATER_WAKE_NONE = 0,
    WATER_WAKE_IDLE = 1,
    WATER_WAKE_WALKING = 2,
    WATER_WAKE_RUNNING = 3,
    WATER_WAKE_WATER_OVERHEAD = 4,
};

enum InventoryNodeType_t : uint32_t {
    NODE_TYPE_INVALID = 0,
    VIRTUAL_NODE_SCHEMA_PREFAB = 1,
    VIRTUAL_NODE_SCHEMA_ITEMDEF = 2,
    VIRTUAL_NODE_SCHEMA_STICKER = 3,
    VIRTUAL_NODE_SCHEMA_KEYCHAIN = 4,
    CONCRETE_NODE_SCHEMA_PREFAB = 5,
    CONCRETE_NODE_SCHEMA_ITEMDEF = 6,
    CONCRETE_NODE_SCHEMA_STICKER = 7,
    CONCRETE_NODE_SCHEMA_KEYCHAIN = 8,
};

class CEntityIdentity;
class CBodyComponent;
class CGameSceneNode;
class CRenderComponent;
class CCollisionProperty;
class C_PointCamera;
class CDestructiblePartsComponent;
class CBaseAnimGraph;
class C_SkyCamera;
class CCSGameModeRules;
class CCSPlayer_PingServices;
class CCSPlayer_BulletServices;
class CCSPlayer_HostageServices;
class CCSPlayer_BuyServices;
class CCSPlayer_GlowServices;
class CCSPlayer_ActionTrackingServices;
class CCSPlayer_DamageReactServices;
class C_CSWeaponBase;
class CCSPlayerController_InGameMoneyServices;
class CCSPlayerController_InventoryServices;
class CCSPlayerController_DamageServices;
class CPointOffScreenIndicatorUi;


class CEntityComponent {
public:
    char pad_00[8];
};

class CScriptComponent : public CEntityComponent {
public:
    // CUtlSymbolLarge m_scriptClassName;
    char pad_01[56];
};

class CEntityInstance {
public:
    // CUtlSymbolLarge m_iszPrivateVScripts;
    char pad_00[16];
    CEntityIdentity* m_pEntity;
    char pad_01[24];
    CScriptComponent* m_CScriptComponent;
};

class C_BaseEntity : public CEntityInstance {
public:
    CBodyComponent* m_CBodyComponent;
    CNetworkTransmitComponent m_NetworkTransmitComponent;
    char pad_02[51];
    GameTick_t m_nLastThinkTick;
    CGameSceneNode* m_pGameSceneNode;
    CRenderComponent* m_pRenderComponent;
    CCollisionProperty* m_pCollision;
    int32_t m_iMaxHealth;
    int32_t m_iHealth;
    float m_flDamageAccumulator;
    uint8_t m_lifeState;
    bool m_bTakesDamage;
    TakeDamageFlags_t m_nTakeDamageFlags;
    EntityPlatformTypes_t m_nPlatformType;
    uint8_t m_ubInterpolationFrame;
    // CHandle< C_BaseEntity > m_hSceneObjectController;
    char pad_03[4];
    int32_t m_nNoInterpolationTick;
    int32_t m_nVisibilityNoInterpolationTick;
    float m_flProxyRandomValue;
    int32_t m_iEFlags;
    uint8_t m_nWaterType;
    bool m_bInterpolateEvenWithNoModel;
    bool m_bPredictionEligible;
    bool m_bApplyLayerMatchIDToModel;
    // CUtlStringToken m_tokLayerMatchID;
    // CUtlStringToken m_nSubclassID;
    char pad_04[20];
    int32_t m_nSimulationTick;
    int32_t m_iCurrentThinkContext;
    // CUtlVector< thinkfunc_t > m_aThinkFunctions;
    char pad_05[24];
    bool m_bDisabledContextThinks;
    float m_flAnimTime;
    float m_flSimulationTime;
    uint8_t m_nSceneObjectOverrideFlags;
    bool m_bHasSuccessfullyInterpolated;
    bool m_bHasAddedVarsToInterpolation;
    bool m_bRenderEvenWhenNotSuccessfullyInterpolated;
    int32_t m_nInterpolationLatchDirtyFlags[2];
    uint16_t m_ListEntry[11];
    GameTime_t m_flCreateTime;
    float m_flSpeed;
    uint16_t m_EntClientFlags;
    bool m_bClientSideRagdoll;
    uint8_t m_iTeamNum;
    uint32_t m_spawnflags;
    GameTick_t m_nNextThinkTick;
    char pad_06[4];
    uint32_t m_fFlags;
    Vector m_vecAbsVelocity;
    CNetworkVelocityVector m_vecServerVelocity;
    CNetworkVelocityVector m_vecVelocity;
    char pad_07[184];
    Vector m_vecBaseVelocity;
    // CHandle< C_BaseEntity > m_hEffectEntity;
    // CHandle< C_BaseEntity > m_hOwnerEntity;
    char pad_08[8];
    MoveCollide_t m_MoveCollide;
    MoveType_t m_MoveType;
    MoveType_t m_nActualMoveType;
    float m_flWaterLevel;
    uint32_t m_fEffects;
    // CHandle< C_BaseEntity > m_hGroundEntity;
    char pad_09[4];
    int32_t m_nGroundBodyIndex;
    float m_flFriction;
    float m_flElasticity;
    float m_flGravityScale;
    float m_flTimeScale;
    bool m_bAnimatedEveryTick;
    bool m_bGravityDisabled;
    GameTime_t m_flNavIgnoreUntilTime;
    uint16_t m_hThink;
    char pad_010[14];
    uint8_t m_fBBoxVisFlags;
    float m_flActualGravityScale;
    bool m_bGravityActuallyDisabled;
    bool m_bPredictable;
    bool m_bRenderWithViewModels;
    int32_t m_nFirstPredictableCommand;
    int32_t m_nLastPredictableCommand;
    // CHandle< C_BaseEntity > m_hOldMoveParent;
    CParticleProperty m_Particles;
    char pad_011[8];
    QAngle m_vecAngVelocity;
    int32_t m_DataChangeEventRef;
    // CUtlVector< CEntityHandle > m_dependencies;
    char pad_012[24];
    int32_t m_nCreationTick;
    char pad_013[13];
    bool m_bAnimTimeChanged;
    bool m_bSimulationTimeChanged;
    // CUtlString m_sUniqueHammerID;
    char pad_014[20];
    BloodType m_nBloodType;
    char pad_015[4];
};

class CountdownTimer {
public:
    char pad_00[8];
    float m_duration;
    GameTime_t m_timestamp;
    float m_timescale;
    // WorldGroupId_t m_nWorldGroupId;
    char pad_01[4];
};

class CPulseExecCursor {
public:
    char pad_00[208];
};

class CPulse_BlackboardReference {
public:
    // CStrongHandle< InfoForResourceTypeIPulseGraphDef > m_hBlackboardResource;
    // PulseSymbol_t m_BlackboardResource;
    char pad_00[24];
    PulseDocNodeID_t m_nNodeID;
    // CGlobalSymbol m_NodeName;
    char pad_01[12];
};

class CPulse_InvokeBinding {
public:
    PulseRegisterMap_t m_RegisterMap;
    // PulseSymbol_t m_FuncName;
    PulseRuntimeCellIndex_t m_nCellIndex;
    PulseRuntimeChunkIndex_t m_nSrcChunk;
    int32_t m_nSrcInstruction;
    char pad_00[100];
};

class CPulse_CallInfo {
public:
    // PulseSymbol_t m_PortName;
    char pad_00[16];
    PulseDocNodeID_t m_nEditorNodeID;
    PulseRegisterMap_t m_RegisterMap;
    PulseDocNodeID_t m_CallMethodID;
    PulseRuntimeChunkIndex_t m_nSrcChunk;
    int32_t m_nSrcInstruction;
    char pad_01[4];
};

class CPulseCell_Base {
public:
    char pad_00[8];
    PulseDocNodeID_t m_nEditorNodeID;
    char pad_01[60];
};

class CPulseGraphDef {
public:
    // PulseSymbol_t m_DomainIdentifier;
    // CPulseValueFullType m_DomainSubType;
    // PulseSymbol_t m_ParentMapName;
    // PulseSymbol_t m_ParentXmlName;
    // CUtlVector< CPulse_Chunk* > m_Chunks;
    // CUtlVector< CPulseCell_Base* > m_Cells;
    // CUtlVector< CPulse_Variable > m_Vars;
    // CUtlVector< CPulse_PublicOutput > m_PublicOutputs;
    // CUtlVector< CPulse_InvokeBinding* > m_InvokeBindings;
    // CUtlVector< CPulse_CallInfo* > m_CallInfos;
    // CUtlVector< CPulse_Constant > m_Constants;
    // CUtlVector< CPulse_DomainValue > m_DomainValues;
    // CUtlVector< CPulse_BlackboardReference > m_BlackboardReferences;
    // CUtlVector< CPulse_OutputConnection* > m_OutputConnections;
    char pad_00[408];
};

class CBasePulseGraphInstance {
public:
    char pad_00[280];
};

class CPulseArraylib {
public:
    char pad_00[1];
};

class CPulseMathlib {
public:
    char pad_00[1];
};

class CPulseTestScriptLib {
public:
    char pad_00[1];
};

class CPulse_OutflowConnection {
public:
    // PulseSymbol_t m_SourceOutflowName;
    char pad_00[16];
    PulseRuntimeChunkIndex_t m_nDestChunk;
    int32_t m_nInstruction;
    PulseRegisterMap_t m_OutflowRegisterMap;
};

class CPulse_ResumePoint {
public:
    char pad_00[72];
};

class SignatureOutflow_Continue {
public:
    char pad_00[72];
};

class SignatureOutflow_Resume {
public:
    char pad_00[72];
};

class PulseNodeDynamicOutflows_t::DynamicOutflow_t {
public:
    // CGlobalSymbol m_OutflowID;
    char pad_00[8];
    CPulse_OutflowConnection m_Connection;
};

class PulseNodeDynamicOutflows_t {
public:
    // CUtlVector< PulseNodeDynamicOutflows_t::DynamicOutflow_t > m_Outflows;
    char pad_00[24];
};

class CPulseCell_BaseFlow {
public:
    char pad_00[72];
};

class CPulseCell_BaseRequirement {
public:
    char pad_00[72];
};

class CPulseCell_Inflow_BaseEntrypoint {
public:
    char pad_00[72];
    PulseRuntimeChunkIndex_t m_EntryChunk;
    PulseRegisterMap_t m_RegisterMap;
};

class CPulseCell_Inflow_Method {
public:
    // PulseSymbol_t m_MethodName;
    // CUtlString m_Description;
    char pad_00[152];
    bool m_bIsPublic;
    // CPulseValueFullType m_ReturnType;
    // CUtlLeanVector< CPulseRuntimeMethodArg > m_Args;
    char pad_01[47];
};

class CPulseCell_Inflow_EventHandler {
public:
    // PulseSymbol_t m_EventName;
    char pad_00[144];
};

class CPulseCell_Inflow_GraphHook {
public:
    // PulseSymbol_t m_HookName;
    char pad_00[144];
};

class CPulseCell_Inflow_EntOutputHandler {
public:
    // PulseSymbol_t m_SourceEntity;
    // PulseSymbol_t m_SourceOutput;
    // CPulseValueFullType m_ExpectedParamType;
    char pad_00[184];
};

class CPulseCell_Inflow_ObservableVariableListener {
public:
    char pad_00[128];
    PulseRuntimeBlackboardReferenceIndex_t m_nBlackboardReference;
    bool m_bSelfReference;
    char pad_01[5];
};

class CPulseCell_BaseYieldingInflow {
public:
    char pad_00[72];
};

class CPulseCell_BaseLerp {
public:
    char pad_00[72];
    CPulse_ResumePoint m_WakeResume;
};

class CPulseCell_BaseLerp::CursorState_t {
public:
    GameTime_t m_StartTime;
    GameTime_t m_EndTime;
};

class CPulseCell_BaseValue {
public:
    char pad_00[72];
};

class CPulseCell_Step_PublicOutput {
public:
    char pad_00[72];
    PulseRuntimeOutputIndex_t m_OutputIndex;
    char pad_01[4];
};

class CPulseCell_Inflow_Yield {
public:
    char pad_00[72];
    CPulse_ResumePoint m_UnyieldResume;
};

class CPulseCell_Inflow_Wait {
public:
    char pad_00[72];
    CPulse_ResumePoint m_WakeResume;
};

class CPulseCell_Outflow_CycleOrdered {
public:
    // CUtlVector< CPulse_OutflowConnection > m_Outputs;
    char pad_00[96];
};

class CPulseCell_Outflow_CycleOrdered::InstanceState_t {
public:
    int32_t m_nNextIndex;
};

class CPulseCell_Outflow_CycleRandom {
public:
    // CUtlVector< CPulse_OutflowConnection > m_Outputs;
    char pad_00[96];
};

class CPulseCell_Outflow_CycleShuffled {
public:
    // CUtlVector< CPulse_OutflowConnection > m_Outputs;
    char pad_00[96];
};

class CPulseCell_Outflow_CycleShuffled::InstanceState_t {
public:
    // CUtlVectorFixedGrowable< uint8, 8 > m_Shuffle;
    char pad_00[32];
    int32_t m_nNextShuffle;
    char pad_01[4];
};

class CPulseCell_Value_RandomInt {
public:
    char pad_00[72];
};

class CPulseCell_Value_RandomFloat {
public:
    char pad_00[72];
};

class CPulseCell_Step_DebugLog {
public:
    char pad_00[72];
};

class CPulseCell_Step_CallExternalMethod {
public:
    // PulseSymbol_t m_MethodName;
    // PulseSymbol_t m_GameBlackboard;
    // CUtlLeanVector< CPulseRuntimeMethodArg > m_ExpectedArgs;
    char pad_00[120];
    PulseMethodCallMode_t m_nAsyncCallMode;
    CPulse_ResumePoint m_OnFinished;
};

class CPulseCell_Unknown {
public:
    // KeyValues3 m_UnknownKeys;
    char pad_00[88];
};

class CPulseCell_Value_Curve {
public:
    // CPiecewiseCurve m_Curve;
    char pad_00[136];
};

class CPulseCell_FireCursors {
public:
    // CUtlVector< CPulse_OutflowConnection > m_Outflows;
    char pad_00[96];
    bool m_bWaitForChildOutflows;
    CPulse_ResumePoint m_OnFinished;
    CPulse_ResumePoint m_OnCanceled;
};

class CPulseCell_Value_Gradient {
public:
    // CColorGradient m_Gradient;
    char pad_00[96];
};

class CPulseCell_IntervalTimer {
public:
    char pad_00[72];
    CPulse_ResumePoint m_Completed;
    SignatureOutflow_Continue m_OnInterval;
};

class CPulseCell_IntervalTimer::CursorState_t {
public:
    GameTime_t m_StartTime;
    GameTime_t m_EndTime;
    float m_flWaitInterval;
    float m_flWaitIntervalHigh;
    bool m_bCompleteOnNextWake;
    char pad_00[3];
};

class OutflowWithRequirements_t {
public:
    CPulse_OutflowConnection m_Connection;
    PulseDocNodeID_t m_DestinationFlowNodeID;
    // CUtlVector< PulseDocNodeID_t > m_RequirementNodeIDs;
    // CUtlVector< int32 > m_nCursorStateBlockIndex;
    char pad_00[52];
};

class PulseSelectorOutflowList_t {
public:
    // CUtlVector< OutflowWithRequirements_t > m_Outflows;
    char pad_00[24];
};

class CPulseCell_LimitCount {
public:
    char pad_00[72];
    int32_t m_nLimitCount;
    char pad_01[4];
};

class CPulseCell_LimitCount::Criteria_t {
public:
    bool m_bLimitCountPasses;
};

class CPulseCell_LimitCount::InstanceState_t {
public:
    int32_t m_nCurrentCount;
};

class CPulseCell_IsRequirementValid {
public:
    char pad_00[72];
};

class CPulseCell_IsRequirementValid::Criteria_t {
public:
    bool m_bIsValid;
};

class CPulseCell_InlineNodeSkipSelector {
public:
    char pad_00[72];
    PulseDocNodeID_t m_nFlowNodeID;
    bool m_bAnd;
    PulseSelectorOutflowList_t m_PassOutflow;
    CPulse_OutflowConnection m_FailOutflow;
};

class CPulseCell_PickBestOutflowSelector {
public:
    char pad_00[72];
    PulseBestOutflowRules_t m_nCheckType;
    PulseSelectorOutflowList_t m_OutflowList;
};

class CPulseCell_Timeline::TimelineEvent_t {
public:
    float m_flTimeFromPrevious;
    CPulse_OutflowConnection m_EventOutflow;
};

class CPulseCell_Timeline {
public:
    // CUtlVector< CPulseCell_Timeline::TimelineEvent_t > m_TimelineEvents;
    char pad_00[96];
    bool m_bWaitForChildOutflows;
    CPulse_ResumePoint m_OnFinished;
    CPulse_ResumePoint m_OnCanceled;
};

class PulseObservableBoolExpression_t {
public:
    CPulse_OutflowConnection m_EvaluateConnection;
    // CUtlVector< PulseRuntimeVarIndex_t > m_DependentObservableVars;
    // CUtlVector< PulseRuntimeBlackboardReferenceIndex_t > m_DependentObservableBlackboardReferences;
    char pad_00[48];
};

class CPulseCell_WaitForObservable {
public:
    char pad_00[72];
    PulseObservableBoolExpression_t m_Condition;
    CPulse_ResumePoint m_OnTrue;
};

class CPulseCell_BaseState {
public:
    char pad_00[72];
};

class CPulseCell_BooleanSwitchState {
public:
    char pad_00[72];
    PulseObservableBoolExpression_t m_Condition;
    CPulse_OutflowConnection m_SubGraph;
    CPulse_OutflowConnection m_WhenTrue;
    CPulse_OutflowConnection m_WhenFalse;
};

class CPulseCursorFuncs {
public:
    char pad_00[1];
};

class CPulseCell_WaitForCursorsWithTagBase {
public:
    char pad_00[72];
    int32_t m_nCursorsAllowedToWait;
    CPulse_ResumePoint m_WaitComplete;
};

class CPulseCell_WaitForCursorsWithTagBase::CursorState_t {
public:
    // PulseSymbol_t m_TagName;
    char pad_00[48];
};

class CPulseCell_WaitForCursorsWithTag {
public:
    char pad_00[152];
    bool m_bTagSelfWhenComplete;
    PulseCursorCancelPriority_t m_nDesiredKillPriority;
};

class CPulseCell_CursorQueue {
public:
    char pad_00[152];
    int32_t m_nCursorsAllowedToRunParallel;
    char pad_01[4];
};

class CEntityIdentity {
public:
    char pad_00[20];
    int32_t m_nameStringableIndex;
    // CUtlSymbolLarge m_name;
    // CUtlSymbolLarge m_designerName;
    char pad_01[24];
    uint32_t m_flags;
    // WorldGroupId_t m_worldGroupId;
    char pad_02[8];
    uint32_t m_fDataObjectTypes;
    ChangeAccessorFieldPathIndex_t m_PathIndex;
    CEntityAttributeTable* m_pAttributes;
    CEntityIdentity* m_pPrev;
    CEntityIdentity* m_pNext;
    CEntityIdentity* m_pPrevByClass;
    CEntityIdentity* m_pNextByClass;
};

class CompositeMaterialMatchFilter_t {
public:
    CompositeMaterialMatchFilterType_t m_nCompositeMaterialMatchFilterType;
    // CUtlString m_strMatchFilter;
    // CUtlString m_strMatchValue;
    char pad_00[20];
    bool m_bPassWhenTrue;
    char pad_01[7];
};

class CompositeMaterialInputLooseVariable_t {
public:
    // CUtlString m_strName;
    char pad_00[8];
    bool m_bExposeExternally;
    // CUtlString m_strExposedFriendlyName;
    // CUtlString m_strExposedFriendlyGroupName;
    char pad_01[23];
    bool m_bExposedVariableIsFixedRange;
    // CUtlString m_strExposedVisibleWhenTrue;
    // CUtlString m_strExposedHiddenWhenTrue;
    // CUtlString m_strExposedValueList;
    char pad_02[28];
    CompositeMaterialInputLooseVariableType_t m_nVariableType;
    bool m_bValueBoolean;
    int32_t m_nValueIntX;
    int32_t m_nValueIntY;
    int32_t m_nValueIntZ;
    int32_t m_nValueIntW;
    bool m_bHasFloatBounds;
    float m_flValueFloatX;
    float m_flValueFloatX_Min;
    float m_flValueFloatX_Max;
    float m_flValueFloatY;
    float m_flValueFloatY_Min;
    float m_flValueFloatY_Max;
    float m_flValueFloatZ;
    float m_flValueFloatZ_Min;
    float m_flValueFloatZ_Max;
    float m_flValueFloatW;
    float m_flValueFloatW_Min;
    float m_flValueFloatW_Max;
    // Color m_cValueColor4;
    char pad_03[4];
    CompositeMaterialVarSystemVar_t m_nValueSystemVar;
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_strResourceMaterial;
    // CUtlString m_strTextureContentAssetPath;
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCTextureBase > > m_strTextureRuntimeResourcePath;
    // CUtlString m_strTextureCompilationVtexTemplate;
    char pad_04[468];
    CompositeMaterialInputTextureType_t m_nTextureType;
    // CUtlString m_strString;
    // CUtlString m_strPanoramaPanelPath;
    char pad_05[20];
    int32_t m_nPanoramaRenderRes;
    char pad_06[4];
};

class CompMatMutatorCondition_t {
public:
    CompMatPropertyMutatorConditionType_t m_nMutatorCondition;
    // CUtlString m_strMutatorConditionContainerName;
    // CUtlString m_strMutatorConditionContainerVarName;
    // CUtlString m_strMutatorConditionContainerVarValue;
    char pad_00[28];
    bool m_bPassWhenTrue;
    char pad_01[7];
};

class CompMatPropertyMutator_t {
public:
    bool m_bEnabled;
    CompMatPropertyMutatorType_t m_nMutatorCommandType;
    // CUtlString m_strInitWith_Container;
    // CUtlString m_strCopyProperty_InputContainerSrc;
    // CUtlString m_strCopyProperty_InputContainerProperty;
    // CUtlString m_strCopyProperty_TargetProperty;
    // CUtlString m_strRandomRollInputVars_SeedInputVar;
    // CUtlVector< CUtlString > m_vecRandomRollInputVars_InputVarsToRoll;
    // CUtlString m_strCopyMatchingKeys_InputContainerSrc;
    // CUtlString m_strCopyKeysWithSuffix_InputContainerSrc;
    // CUtlString m_strCopyKeysWithSuffix_FindSuffix;
    // CUtlString m_strCopyKeysWithSuffix_ReplaceSuffix;
    char pad_00[96];
    CompositeMaterialInputLooseVariable_t m_nSetValue_Value;
    // CUtlString m_strGenerateTexture_TargetParam;
    // CUtlString m_strGenerateTexture_InitialContainer;
    char pad_01[16];
    int32_t m_nResolution;
    bool m_bIsScratchTarget;
    // CUtlString m_strCompressionFormat;
    char pad_02[11];
    bool m_bSplatDebugInfo;
    bool m_bCaptureInRenderDoc;
    // CUtlVector< CompMatPropertyMutator_t > m_vecTexGenInstructions;
    // CUtlVector< CompMatPropertyMutator_t > m_vecConditionalMutators;
    // CUtlString m_strPopInputQueue_Container;
    // CUtlString m_strDrawText_InputContainerSrc;
    // CUtlString m_strDrawText_InputContainerProperty;
    char pad_03[76];
    Vector2D m_vecDrawText_Position;
    // Color m_colDrawText_Color;
    // CUtlString m_strDrawText_Font;
    // CUtlVector< CompMatMutatorCondition_t > m_vecConditions;
    char pad_04[40];
};

class CompositeMaterialInputContainer_t {
public:
    bool m_bEnabled;
    CompositeMaterialInputContainerSourceType_t m_nCompositeMaterialInputContainerSourceType;
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_strSpecificContainerMaterial;
    // CUtlString m_strAttrName;
    // CUtlString m_strAlias;
    // CUtlVector< CompositeMaterialInputLooseVariable_t > m_vecLooseVariables;
    // CUtlString m_strAttrNameForVar;
    char pad_00[272];
    bool m_bExposeExternally;
    char pad_01[31];
};

class CompositeMaterialAssemblyProcedure_t {
public:
    // CUtlVector< CResourceNameTyped< CWeakHandle< InfoForResourceTypeCCompositeMaterialKit > > > m_vecCompMatIncludes;
    // CUtlVector< CompositeMaterialMatchFilter_t > m_vecMatchFilters;
    // CUtlVector< CompositeMaterialInputContainer_t > m_vecCompositeInputContainers;
    // CUtlVector< CompMatPropertyMutator_t > m_vecPropertyMutators;
    char pad_00[96];
};

class GeneratedTextureHandle_t {
public:
    // CUtlString m_strBitmapName;
    char pad_00[96];
};

class CompositeMaterial_t {
public:
    // KeyValues3 m_TargetKVs;
    // KeyValues3 m_PreGenerationKVs;
    // KeyValues3 m_FinalKVs;
    // CUtlVector< GeneratedTextureHandle_t > m_vecGeneratedTextures;
    char pad_00[160];
};

class CompositeMaterialEditorPoint_t {
public:
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ModelName;
    char pad_00[224];
    int32_t m_nSequenceIndex;
    float m_flCycle;
    // KeyValues3 m_KVModelStateChoices;
    char pad_01[16];
    bool m_bEnableChildModel;
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ChildModelName;
    // CUtlVector< CompositeMaterialAssemblyProcedure_t > m_vecCompositeMaterialAssemblyProcedures;
    // CUtlVector< CompositeMaterial_t > m_vecCompositeMaterials;
    char pad_02[287];
};

class CCompositeMaterialEditorDoc {
public:
    char pad_00[8];
    int32_t m_nVersion;
    // CUtlVector< CompositeMaterialEditorPoint_t > m_Points;
    // KeyValues3 m_KVthumbnail;
    char pad_01[44];
};

class CGameSceneNode {
public:
    // CTransformWS m_nodeToWorld;
    char pad_00[48];
    CEntityInstance* m_pOwner;
    CGameSceneNode* m_pParent;
    CGameSceneNode* m_pChild;
    CGameSceneNode* m_pNextSibling;
    // CGameSceneNodeHandle m_hParent;
    CNetworkOriginCellCoordQuantizedVector m_vecOrigin;
    char pad_01[8];
    QAngle m_angRotation;
    float m_flScale;
    // VectorWS m_vecAbsOrigin;
    char pad_02[12];
    QAngle m_angAbsRotation;
    float m_flAbsScale;
    Vector m_vecWrappedLocalOrigin;
    QAngle m_angWrappedLocalRotation;
    float m_flWrappedScale;
    int16_t m_nParentAttachmentOrBone;
    bool m_bDebugAbsOriginChanges;
    bool m_bDormant;
    bool m_bForceParentToBeNetworked;
    // bitfield:1 m_bDirtyHierarchy;
    // bitfield:1 m_bDirtyBoneMergeInfo;
    // bitfield:1 m_bNetworkedPositionChanged;
    // bitfield:1 m_bNetworkedAnglesChanged;
    // bitfield:1 m_bNetworkedScaleChanged;
    // bitfield:1 m_bWillBeCallingPostDataUpdate;
    // bitfield:1 m_bBoneMergeFlex;
    // bitfield:2 m_nLatchAbsOrigin;
    // bitfield:1 m_bDirtyBoneMergeBoneToRoot;
    char pad_03[2];
    uint8_t m_nHierarchicalDepth;
    uint8_t m_nHierarchyType;
    uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount;
    // CUtlStringToken m_name;
    // CUtlStringToken m_hierarchyAttachName;
    char pad_04[24];
    float m_flZOffset;
    float m_flClientLocalScale;
    Vector m_vRenderOrigin;
    char pad_05[16];
};

class CBodyComponent : public CEntityComponent {
public:
    CGameSceneNode* m_pSceneNode;
    CNetworkVarChainer __m_pChainEntity;
    char pad_01[8];
};

class CBodyComponentPoint : public CBodyComponent {
public:
    CGameSceneNode m_sceneNode;
};

class CSkeletonInstance : public CGameSceneNode {
public:
    // CModelState m_modelState;
    char pad_06[736];
    bool m_bIsAnimationEnabled;
    bool m_bUseParentRenderBounds;
    bool m_bDisableSolidCollisionsForHierarchy;
    // bitfield:1 m_bDirtyMotionType;
    // bitfield:1 m_bIsGeneratingLatchedParentSpaceState;
    // CUtlStringToken m_materialGroup;
    char pad_07[5];
    uint8_t m_nHitboxSet;
    char pad_08[151];
};

class CBodyComponentSkeletonInstance : public CBodyComponent {
public:
    CSkeletonInstance m_skeletonInstance;
};

class CHitboxComponent : public CEntityComponent {
public:
    char pad_01[12];
    float m_flBoundsExpandRadius;
};

class CLightComponent : public CEntityComponent {
public:
    CNetworkVarChainer __m_pChainEntity;
    // Color m_Color;
    // Color m_SecondaryColor;
    char pad_01[32];
    float m_flBrightness;
    float m_flBrightnessScale;
    float m_flBrightnessMult;
    float m_flRange;
    float m_flFalloff;
    float m_flAttenuation0;
    float m_flAttenuation1;
    float m_flAttenuation2;
    float m_flTheta;
    float m_flPhi;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie;
    char pad_02[8];
    int32_t m_nCascades;
    int32_t m_nCastShadows;
    int32_t m_nShadowWidth;
    int32_t m_nShadowHeight;
    bool m_bRenderDiffuse;
    int32_t m_nRenderSpecular;
    bool m_bRenderTransmissive;
    float m_flOrthoLightWidth;
    float m_flOrthoLightHeight;
    int32_t m_nStyle;
    // CUtlString m_Pattern;
    char pad_03[8];
    int32_t m_nCascadeRenderStaticObjects;
    float m_flShadowCascadeCrossFade;
    float m_flShadowCascadeDistanceFade;
    float m_flShadowCascadeDistance0;
    float m_flShadowCascadeDistance1;
    float m_flShadowCascadeDistance2;
    float m_flShadowCascadeDistance3;
    int32_t m_nShadowCascadeResolution0;
    int32_t m_nShadowCascadeResolution1;
    int32_t m_nShadowCascadeResolution2;
    int32_t m_nShadowCascadeResolution3;
    bool m_bUsesBakedShadowing;
    int32_t m_nShadowPriority;
    int32_t m_nBakedShadowIndex;
    int32_t m_nLightPathUniqueId;
    int32_t m_nLightMapUniqueId;
    bool m_bRenderToCubemaps;
    bool m_bAllowSSTGeneration;
    int32_t m_nDirectLight;
    int32_t m_nIndirectLight;
    bool m_bDynamicBounce;
    float m_flFadeMinDist;
    float m_flFadeMaxDist;
    float m_flShadowFadeMinDist;
    float m_flShadowFadeMaxDist;
    bool m_bEnabled;
    bool m_bFlicker;
    bool m_bPrecomputedFieldsValid;
    Vector m_vPrecomputedBoundsMins;
    Vector m_vPrecomputedBoundsMaxs;
    Vector m_vPrecomputedOBBOrigin;
    QAngle m_vPrecomputedOBBAngles;
    Vector m_vPrecomputedOBBExtent;
    float m_flPrecomputedMaxRange;
    int32_t m_nFogLightingMode;
    float m_flFogContributionStength;
    float m_flNearClipPlane;
    // Color m_SkyColor;
    char pad_04[4];
    float m_flSkyIntensity;
    // Color m_SkyAmbientBounce;
    char pad_05[4];
    bool m_bUseSecondaryColor;
    bool m_bMixedShadows;
    GameTime_t m_flLightStyleStartTime;
    float m_flCapsuleLength;
    float m_flMinRoughness;
    char pad_06[68];
};

class CRenderComponent : public CEntityComponent {
public:
    CNetworkVarChainer __m_pChainEntity;
    char pad_01[24];
    bool m_bIsRenderingWithViewModels;
    uint32_t m_nSplitscreenFlags;
    bool m_bEnableRendering;
    char pad_02[79];
    bool m_bInterpolationReadyToDraw;
    char pad_03[39];
};

class CPulseCell_LerpCameraSettings {
public:
    char pad_00[144];
    float m_flSeconds;
    PointCameraSettings_t m_Start;
    PointCameraSettings_t m_End;
    char pad_01[4];
};

class C_PointCamera : public C_BaseEntity {
public:
    float m_FOV;
    float m_Resolution;
    bool m_bFogEnable;
    // Color m_FogColor;
    char pad_016[4];
    float m_flFogStart;
    float m_flFogEnd;
    float m_flFogMaxDensity;
    bool m_bActive;
    bool m_bUseScreenAspectRatio;
    float m_flAspectRatio;
    bool m_bNoSky;
    float m_fBrightness;
    float m_flZFar;
    float m_flZNear;
    bool m_bCanHLTVUse;
    bool m_bAlignWithParent;
    bool m_bDofEnabled;
    float m_flDofNearBlurry;
    float m_flDofNearCrisp;
    float m_flDofFarCrisp;
    float m_flDofFarBlurry;
    float m_flDofTiltToGround;
    float m_TargetFOV;
    float m_DegreesPerSecond;
    bool m_bIsOn;
    C_PointCamera* m_pNext;
};

class CPulseCell_LerpCameraSettings::CursorState_t {
public:
    // CHandle< C_PointCamera > m_hCamera;
    char pad_00[12];
    PointCameraSettings_t m_OverlaidStart;
    PointCameraSettings_t m_OverlaidEnd;
};

class CPointTemplateAPI {
public:
    char pad_00[8];
};

class CPropDataComponent : public CEntityComponent {
public:
    char pad_01[8];
    float m_flDmgModBullet;
    float m_flDmgModClub;
    float m_flDmgModExplosive;
    float m_flDmgModFire;
    // CUtlSymbolLarge m_iszPhysicsDamageTableName;
    // CUtlSymbolLarge m_iszBasePropData;
    char pad_02[16];
    int32_t m_nInteractions;
    bool m_bSpawnMotionDisabled;
    int32_t m_nDisableTakePhysicsDamageSpawnFlag;
    int32_t m_nMotionDisabledSpawnFlag;
};

class CBuoyancyHelper {
public:
    // CUtlStringToken m_nFluidType;
    char pad_00[28];
    float m_flFluidDensity;
    float m_flNeutrallyBuoyantGravity;
    float m_flNeutrallyBuoyantLinearDamping;
    float m_flNeutrallyBuoyantAngularDamping;
    bool m_bNeutrallyBuoyant;
    // CUtlVector< float32 > m_vecFractionOfWheelSubmergedForWheelFriction;
    // CUtlVector< float32 > m_vecWheelFrictionScales;
    // CUtlVector< float32 > m_vecFractionOfWheelSubmergedForWheelDrag;
    // CUtlVector< float32 > m_vecWheelDrag;
    char pad_01[235];
};

class CBaseTriggerAPI {
public:
    char pad_00[8];
};

class CPulseCell_Step_EntFire {
public:
    // CUtlString m_Input;
    char pad_00[80];
};

class CPulseCell_PlaySequence {
public:
    // CUtlString m_SequenceName;
    char pad_00[80];
    PulseNodeDynamicOutflows_t m_PulseAnimEvents;
    CPulse_ResumePoint m_OnFinished;
    CPulse_ResumePoint m_OnCanceled;
};

class C_BaseModelEntity : public C_BaseEntity {
public:
    char pad_016[1256];
    CRenderComponent* m_CRenderComponent;
    CHitboxComponent m_CHitboxComponent;
    HitGroup_t m_nDestructiblePartInitialStateDestructed0;
    HitGroup_t m_nDestructiblePartInitialStateDestructed1;
    HitGroup_t m_nDestructiblePartInitialStateDestructed2;
    HitGroup_t m_nDestructiblePartInitialStateDestructed3;
    HitGroup_t m_nDestructiblePartInitialStateDestructed4;
    int32_t m_nDestructiblePartInitialStateDestructed0_PartIndex;
    int32_t m_nDestructiblePartInitialStateDestructed1_PartIndex;
    int32_t m_nDestructiblePartInitialStateDestructed2_PartIndex;
    int32_t m_nDestructiblePartInitialStateDestructed3_PartIndex;
    int32_t m_nDestructiblePartInitialStateDestructed4_PartIndex;
    CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent;
    char pad_017[24];
    bool m_bInitModelEffects;
    bool m_bDoingModelEffects;
    bool m_bIsStaticProp;
    int32_t m_iOldHealth;
    RenderMode_t m_nRenderMode;
    RenderFx_t m_nRenderFX;
    bool m_bAllowFadeInView;
    // Color m_clrRender;
    // C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes;
    char pad_018[165];
    bool m_bRenderToCubemaps;
    bool m_bNoInterpolate;
    // CCollisionProperty m_Collision;
    // CGlowProperty m_Glow;
    char pad_019[268];
    float m_flGlowBackfaceMult;
    float m_fadeMinDist;
    float m_fadeMaxDist;
    float m_flFadeScale;
    float m_flShadowStrength;
    uint8_t m_nObjectCulling;
    DecalRtEncoding_t m_nRequiredDecalRtEncoding;
    CNetworkViewOffsetVector m_vecViewOffset;
    char pad_020[184];
    CClientAlphaProperty* m_pClientAlphaProperty;
    // Color m_ClientOverrideTint;
    char pad_021[4];
    bool m_bUseClientOverrideTint;
    char pad_022[56];
    uint32_t m_bvDisabledHitGroups[1];
    char pad_023[4];
};

class CBaseAnimGraph : public C_BaseModelEntity {
public:
    CAnimGraphControllerManager m_graphControllerManager;
    CAnimGraphControllerBase* m_pMainGraphController;
    bool m_bInitiallyPopulateInterpHistory;
    char pad_024[1];
    bool m_bSuppressAnimEventSounds;
    char pad_025[13];
    bool m_bAnimGraphUpdateEnabled;
    float m_flMaxSlopeDistance;
    // VectorWS m_vLastSlopeCheckPos;
    char pad_026[12];
    uint32_t m_nAnimGraphUpdateId;
    bool m_bAnimationUpdateScheduled;
    Vector m_vecForce;
    int32_t m_nForceBone;
    CBaseAnimGraph* m_pClientsideRagdoll;
    bool m_bBuiltRagdoll;
    // PhysicsRagdollPose_t m_RagdollPose;
    char pad_027[95];
    bool m_bRagdollEnabled;
    bool m_bRagdollClientSide;
    char pad_028[14];
    bool m_bHasAnimatedMaterialAttributes;
    char pad_029[367];
};

class CPulseCell_PlaySequence::CursorState_t {
public:
    // CHandle< CBaseAnimGraph > m_hTarget;
    char pad_00[4];
};

class CPulseAnimFuncs {
public:
    char pad_00[8];
};

class CBasePlayerControllerAPI {
public:
    char pad_00[8];
};

class C_CommandContext {
public:
    bool needsprocessing;
    char pad_00[156];
    int32_t command_number;
    char pad_01[4];
};

class ViewAngleServerChange_t {
public:
    char pad_00[48];
    FixAngleSet_t nType;
    QAngle qAngle;
    uint32_t nIndex;
    char pad_01[4];
};

class CFilterMultipleAPI {
public:
    char pad_00[8];
};

class CPlayer_AutoaimServices : public CPlayerPawnComponent {
public:
    char pad_02[72];
};

class audioparams_t {
public:
    char pad_00[8];
    Vector localSound;
    char pad_01[84];
    int32_t soundscapeIndex;
    uint8_t localBits;
    int32_t soundscapeEntityListIndex;
    uint32_t soundEventHash;
};

class C_fogplayerparams_t {
public:
    // CHandle< C_FogController > m_hCtrl;
    char pad_00[12];
    float m_flTransitionTime;
    // Color m_OldColor;
    char pad_01[4];
    float m_flOldStart;
    float m_flOldEnd;
    float m_flOldMaxDensity;
    float m_flOldHDRColorScale;
    float m_flOldFarZ;
    // Color m_NewColor;
    char pad_02[4];
    float m_flNewStart;
    float m_flNewEnd;
    float m_flNewMaxDensity;
    float m_flNewHDRColorScale;
    float m_flNewFarZ;
};

class C_ColorCorrection : public C_BaseEntity {
public:
    Vector m_vecOrigin;
    float m_MinFalloff;
    float m_MaxFalloff;
    float m_flFadeInDuration;
    float m_flFadeOutDuration;
    float m_flMaxWeight;
    float m_flCurWeight;
    char m_netlookupFilename[512];
    bool m_bEnabled;
    bool m_bMaster;
    bool m_bClientSide;
    bool m_bExclusive;
    bool m_bEnabledOnClient[1];
    float m_flCurWeightOnClient[1];
    bool m_bFadingIn[1];
    float m_flFadeStartWeight[1];
    float m_flFadeStartTime[1];
    float m_flFadeDuration[1];
    char pad_016[8];
};

class C_TonemapController2 : public C_BaseEntity {
public:
    float m_flAutoExposureMin;
    float m_flAutoExposureMax;
    float m_flExposureAdaptationSpeedUp;
    float m_flExposureAdaptationSpeedDown;
    float m_flTonemapEVSmoothingRange;
    char pad_016[4];
};

class C_BaseToggle : public C_BaseModelEntity {
public:
    char pad_024[3720];
};

class C_BaseTrigger : public C_BaseToggle {
public:
    CEntityIOOutput m_OnStartTouch;
    CEntityIOOutput m_OnStartTouchAll;
    CEntityIOOutput m_OnEndTouch;
    CEntityIOOutput m_OnEndTouchAll;
    CEntityIOOutput m_OnTouching;
    CEntityIOOutput m_OnTouchingEachEntity;
    CEntityIOOutput m_OnNotTouching;
    // CUtlVector< CHandle< C_BaseEntity > > m_hTouchingEntities;
    // CUtlSymbolLarge m_iFilterName;
    // CHandle< CBaseFilter > m_hFilter;
    char pad_025[36];
    bool m_bDisabled;
    char pad_026[3];
};

class C_PostProcessingVolume : public C_BaseTrigger {
public:
    // CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings;
    char pad_027[24];
    float m_flFadeDuration;
    float m_flMinLogExposure;
    float m_flMaxLogExposure;
    float m_flMinExposure;
    float m_flMaxExposure;
    float m_flExposureCompensation;
    float m_flExposureFadeSpeedUp;
    float m_flExposureFadeSpeedDown;
    float m_flTonemapEVSmoothingRange;
    bool m_bMaster;
    bool m_bExposureControl;
    char pad_028[2];
};

class fogparams_t {
public:
    char pad_00[8];
    Vector dirPrimary;
    // Color colorPrimary;
    // Color colorSecondary;
    // Color colorPrimaryLerpTo;
    // Color colorSecondaryLerpTo;
    char pad_01[16];
    float start;
    float end;
    float farz;
    float maxdensity;
    float exponent;
    float HDRColorScale;
    float skyboxFogFactor;
    float skyboxFogFactorLerpTo;
    float startLerpTo;
    float endLerpTo;
    float maxdensityLerpTo;
    GameTime_t lerptime;
    float duration;
    float blendtobackground;
    float scattering;
    float locallightscale;
    bool enable;
    bool blend;
    bool m_bPadding2;
    bool m_bPadding;
};

class C_FogController : public C_BaseEntity {
public:
    fogparams_t m_fog;
    bool m_bUseAngles;
    int32_t m_iChangedVariables;
};

class CPlayer_CameraServices : public CPlayerPawnComponent {
public:
    QAngle m_vecCsViewPunchAngle;
    GameTick_t m_nCsViewPunchAngleTick;
    float m_flCsViewPunchAngleTickRatio;
    C_fogplayerparams_t m_PlayerFog;
    // CHandle< C_ColorCorrection > m_hColorCorrectionCtrl;
    // CHandle< C_BaseEntity > m_hViewEntity;
    // CHandle< C_TonemapController2 > m_hTonemapController;
    audioparams_t m_audio;
    // C_NetworkUtlVectorBase< CHandle< C_PostProcessingVolume > > m_PostProcessingVolumes;
    char pad_02[24];
    float m_flOldPlayerZ;
    float m_flOldPlayerViewOffsetZ;
    fogparams_t m_CurrentFog;
    // CHandle< C_FogController > m_hOldFogController;
    char pad_03[4];
    bool m_bOverrideFogColor[5];
    // Color[5] m_OverrideFogColor;
    char pad_04[20];
    bool m_bOverrideFogStartEnd[5];
    float m_fOverrideFogStart[5];
    float m_fOverrideFogEnd[5];
    // CHandle< C_PostProcessingVolume > m_hActivePostProcessingVolume;
    char pad_05[4];
    QAngle m_angDemoViewAngles;
    char pad_06[132];
};

class CPlayer_FlashlightServices : public CPlayerPawnComponent {
public:
    char pad_02[72];
};

class CPlayer_ItemServices : public CPlayerPawnComponent {
public:
    char pad_02[72];
};

class CPlayer_MovementServices : public CPlayerPawnComponent {
public:
    int32_t m_nImpulse;
    CInButtonState m_nButtons;
    uint64_t m_nQueuedButtonDownMask;
    uint64_t m_nQueuedButtonChangeMask;
    uint64_t m_nButtonDoublePressed;
    uint32_t m_pButtonPressedCmdNumber[64];
    uint32_t m_nLastCommandNumberProcessed;
    uint64_t m_nToggleButtonDownMask;
    char pad_02[8];
    float m_flMaxspeed;
    float m_arrForceSubtickMoveWhen[4];
    float m_flForwardMove;
    float m_flLeftMove;
    float m_flUpMove;
    Vector m_vecLastMovementImpulses;
    char pad_03[92];
    QAngle m_vecOldViewAngles;
    char pad_04[12];
};

class CPlayer_MovementServices_Humanoid : public CPlayer_MovementServices {
public:
    float m_flStepSoundTime;
    float m_flFallVelocity;
    Vector m_groundNormal;
    float m_flSurfaceFriction;
    // CUtlStringToken m_surfaceProps;
    char pad_05[16];
    int32_t m_nStepside;
    char pad_06[4];
};

class CPlayer_ObserverServices : public CPlayerPawnComponent {
public:
    uint8_t m_iObserverMode;
    // CHandle< C_BaseEntity > m_hObserverTarget;
    char pad_02[4];
    ObserverMode_t m_iObserverLastMode;
    bool m_bForcedObserverMode;
    float m_flObserverChaseDistance;
    GameTime_t m_flObserverChaseDistanceCalcTime;
};

class CPlayer_UseServices : public CPlayerPawnComponent {
public:
    char pad_02[72];
};

class CPlayer_WaterServices : public CPlayerPawnComponent {
public:
    char pad_02[72];
};

class C_BaseFlex : public CBaseAnimGraph {
public:
    // C_NetworkUtlVectorBase< float32 > m_flexWeight;
    // VectorWS m_vLookTargetPosition;
    char pad_030[264];
    int32_t m_nLastFlexUpdateFrameCount;
    Vector m_CachedViewTarget;
    SceneEventId_t m_nNextSceneEventId;
    AttachmentHandle_t m_iMouthAttachment;
    AttachmentHandle_t m_iEyeAttachment;
    bool m_bResetFlexWeightsOnModelChange;
    char pad_031[24];
    int32_t m_nEyeOcclusionRendererBone;
    // matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform;
    char pad_032[48];
    Vector m_vEyeOcclusionRendererHalfExtent;
    // C_BaseFlex::Emphasized_Phoneme[3] m_PhonemeClasses;
    char pad_033[112];
};

class C_EconEntity : public C_BaseFlex {
public:
    char pad_034[16];
    float m_flFlexDelayTime;
    float* m_flFlexDelayedWeight;
    bool m_bAttributesInitialized;
    // C_AttributeContainer m_AttributeManager;
    char pad_035[1236];
    uint32_t m_OriginalOwnerXuidLow;
    uint32_t m_OriginalOwnerXuidHigh;
    int32_t m_nFallbackPaintKit;
    int32_t m_nFallbackSeed;
    float m_flFallbackWear;
    int32_t m_nFallbackStatTrak;
    bool m_bClientside;
    bool m_bParticleSystemsCreated;
    // CUtlVector< int32 > m_vecAttachedParticles;
    // CHandle< CBaseAnimGraph > m_hViewmodelAttachment;
    char pad_036[32];
    int32_t m_iOldTeam;
    bool m_bAttachmentDirty;
    int32_t m_nUnloadedModelIndex;
    int32_t m_iNumOwnerValidationRetries;
    // CHandle< C_BaseEntity > m_hOldProvidee;
    // CUtlVector< C_EconEntity::AttachedModelData_t > m_vecAttachedModels;
    char pad_037[44];
};

class C_BasePlayerWeapon : public C_EconEntity {
public:
    GameTick_t m_nNextPrimaryAttackTick;
    float m_flNextPrimaryAttackTickRatio;
    GameTick_t m_nNextSecondaryAttackTick;
    float m_flNextSecondaryAttackTickRatio;
    int32_t m_iClip1;
    int32_t m_iClip2;
    int32_t m_pReserveAmmo[2];
    char pad_038[24];
};

class CPlayer_WeaponServices : public CPlayerPawnComponent {
public:
    // C_NetworkUtlVectorBase< CHandle< C_BasePlayerWeapon > > m_hMyWeapons;
    // CHandle< C_BasePlayerWeapon > m_hActiveWeapon;
    // CHandle< C_BasePlayerWeapon > m_hLastWeapon;
    char pad_02[32];
    uint16_t m_iAmmo[32];
};

class CBaseAnimGraphController : public CSkeletonAnimationController {
public:
    char pad_02[8];
    AnimationAlgorithm_t m_nAnimationAlgorithm;
    // CAnimGraphNetworkedVariables m_animGraphNetworkedVars;
    // CSmartPtr< IAnimationGraphInstance > m_pAnimGraphInstance;
    char pad_03[5137];
    ExternalAnimGraphHandle_t m_nNextExternalGraphHandle;
    // CUtlVector< CGlobalSymbol > m_vecSecondarySkeletonNames;
    // C_NetworkUtlVectorBase< CHandle< CBaseAnimGraph > > m_vecSecondarySkeletons;
    char pad_04[52];
    int32_t m_nSecondarySkeletonMasterCount;
    char pad_05[4];
    float m_flSoundSyncTime;
    uint32_t m_nActiveIKChainMask;
    HSequence m_hSequence;
    GameTime_t m_flSeqStartTime;
    float m_flSeqFixedCycle;
    AnimLoopMode_t m_nAnimLoopMode;
    // CNetworkedQuantizedFloat m_flPlaybackRate;
    char pad_06[12];
    SequenceFinishNotifyState_t m_nNotifyState;
    bool m_bNetworkedAnimationInputsChanged;
    bool m_bNetworkedSequenceChanged;
    bool m_bLastUpdateSkipped;
    bool m_bSequenceFinished;
    GameTick_t m_nPrevAnimUpdateTick;
    // CStrongHandle< InfoForResourceTypeCNmGraphDefinition > m_hGraphDefinitionAG2;
    // C_NetworkUtlVectorBase< uint8 > m_serializedPoseRecipeAG2;
    char pad_07[696];
    int32_t m_nSerializePoseRecipeSizeAG2;
    int32_t m_nSerializePoseRecipeVersionAG2;
    int32_t m_nServerGraphInstanceIteration;
    int32_t m_nServerSerializationContextIteration;
    ResourceId_t m_primaryGraphId;
    // C_NetworkUtlVectorBase< ResourceId_t > m_vecExternalGraphIds;
    // C_NetworkUtlVectorBase< ResourceId_t > m_vecExternalClipIds;
    // CGlobalSymbol m_sAnimGraph2Identifier;
    // CUtlVector< ExternalAnimGraph_t > m_vecExternalGraphs;
    char pad_08[657];
    AnimationAlgorithm_t m_nPrevAnimationAlgorithm;
    char pad_09[6];
};

class CBodyComponentBaseAnimGraph : public CBodyComponentSkeletonInstance {
public:
    CBaseAnimGraphController m_animationController;
    char pad_02[8];
};

class EntityRenderAttribute_t {
public:
    // CUtlStringToken m_ID;
    char pad_00[52];
    Vector4D m_Values;
    char pad_01[4];
};

class ActiveModelConfig_t {
public:
    char pad_00[48];
    ModelConfigHandle_t m_Handle;
    // CUtlSymbolLarge m_Name;
    // C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_AssociatedEntities;
    // C_NetworkUtlVectorBase< CUtlSymbolLarge > m_AssociatedEntityNames;
    char pad_01[60];
};

class CBodyComponentBaseModelEntity : public CBodyComponentSkeletonInstance {
public:
    char pad_02[1360];
};

class CDestructiblePartsComponent {
public:
    CNetworkVarChainer __m_pChainEntity;
    // CUtlVector< uint16 > m_vecDamageTakenByHitGroup;
    // CHandle< C_BaseModelEntity > m_hOwner;
    char pad_00[72];
};

class CGameSceneNodeHandle {
public:
    // CEntityHandle m_hOwner;
    // CUtlStringToken m_name;
    char pad_00[16];
};

class CLogicRelayAPI {
public:
    char pad_00[8];
};

class CPathQueryComponent : public CEntityComponent {
public:
    char pad_01[160];
};

class CPathSimpleAPI {
public:
    char pad_00[8];
};

class SequenceHistory_t {
public:
    HSequence m_hSequence;
    GameTime_t m_flSeqStartTime;
    float m_flSeqFixedCycle;
    AnimLoopMode_t m_nSeqLoopMode;
    float m_flPlaybackRate;
    float m_flCyclesPerSecond;
};

class CNetworkedSequenceOperation {
public:
    char pad_00[8];
    HSequence m_hSequence;
    float m_flPrevCycle;
    float m_flCycle;
    // CNetworkedQuantizedFloat m_flWeight;
    char pad_01[8];
    bool m_bSequenceChangeNetworked;
    bool m_bDiscontinuity;
    float m_flPrevCycleFromDiscontinuity;
    float m_flPrevCycleForAnimEventDetection;
};

class CModelState {
public:
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    // CUtlSymbolLarge m_ModelName;
    char pad_00[377];
    bool m_bClientClothCreationSuppressed;
    char pad_01[160];
    uint64_t m_MeshGroupMask;
    // C_NetworkUtlVectorBase< int32 > m_nBodyGroupChoices;
    char pad_02[146];
    int8_t m_nIdealMotionType;
    int8_t m_nForceLOD;
    int8_t m_nClothUpdateFlags;
    char pad_03[19];
};

class IntervalTimer {
public:
    char pad_00[8];
    GameTime_t m_timestamp;
    // WorldGroupId_t m_nWorldGroupId;
    char pad_01[4];
};

class EngineCountdownTimer {
public:
    char pad_00[8];
    float m_duration;
    float m_timestamp;
    float m_timescale;
    char pad_01[4];
};

class CTimeline : public IntervalTimer {
public:
    float m_flValues[64];
    int32_t m_nValueCounts[64];
    int32_t m_nBucketCount;
    float m_flInterval;
    float m_flFinalValue;
    TimelineCompression_t m_nCompressionType;
    bool m_bStopped;
    char pad_02[7];
};

class CAnimGraphNetworkedVariables {
public:
    // C_NetworkUtlVectorBase< uint32 > m_PredNetBoolVariables;
    // C_NetworkUtlVectorBase< uint8 > m_PredNetByteVariables;
    // C_NetworkUtlVectorBase< uint16 > m_PredNetUInt16Variables;
    // C_NetworkUtlVectorBase< int32 > m_PredNetIntVariables;
    // C_NetworkUtlVectorBase< uint32 > m_PredNetUInt32Variables;
    // C_NetworkUtlVectorBase< uint64 > m_PredNetUInt64Variables;
    // C_NetworkUtlVectorBase< float32 > m_PredNetFloatVariables;
    // C_NetworkUtlVectorBase< Vector > m_PredNetVectorVariables;
    // C_NetworkUtlVectorBase< Quaternion > m_PredNetQuaternionVariables;
    // C_NetworkUtlVectorBase< CGlobalSymbol > m_PredNetGlobalSymbolVariables;
    // C_NetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetBoolVariables;
    // C_NetworkUtlVectorBase< uint8 > m_OwnerOnlyPredNetByteVariables;
    // C_NetworkUtlVectorBase< uint16 > m_OwnerOnlyPredNetUInt16Variables;
    // C_NetworkUtlVectorBase< int32 > m_OwnerOnlyPredNetIntVariables;
    // C_NetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetUInt32Variables;
    // C_NetworkUtlVectorBase< uint64 > m_OwnerOnlyPredNetUInt64Variables;
    // C_NetworkUtlVectorBase< float32 > m_OwnerOnlyPredNetFloatVariables;
    // C_NetworkUtlVectorBase< Vector > m_OwnerOnlyPredNetVectorVariables;
    // C_NetworkUtlVectorBase< Quaternion > m_OwnerOnlyPredNetQuaternionVariables;
    // C_NetworkUtlVectorBase< CGlobalSymbol > m_OwnerOnlyPredNetGlobalSymbolVariables;
    char pad_00[488];
    int32_t m_nBoolVariablesCount;
    int32_t m_nOwnerOnlyBoolVariablesCount;
    int32_t m_nRandomSeedOffset;
    float m_flLastTeleportTime;
    char pad_01[4760];
};

class C_BaseEntityAPI {
public:
    char pad_00[8];
};

class CTakeDamageInfoAPI {
public:
    char pad_00[8];
};

class CCollisionProperty {
public:
    // VPhysicsCollisionAttribute_t m_collisionAttribute;
    char pad_00[64];
    Vector m_vecMins;
    Vector m_vecMaxs;
    char pad_01[2];
    uint8_t m_usSolidFlags;
    SolidType_t m_nSolidType;
    uint8_t m_triggerBloat;
    SurroundingBoundsType_t m_nSurroundType;
    uint8_t m_CollisionGroup;
    uint8_t m_nEnablePhysics;
    float m_flBoundingRadius;
    Vector m_vecSpecifiedSurroundingMins;
    Vector m_vecSpecifiedSurroundingMaxs;
    Vector m_vecSurroundingMaxs;
    Vector m_vecSurroundingMins;
    Vector m_vCapsuleCenter1;
    Vector m_vCapsuleCenter2;
    float m_flCapsuleRadius;
};

class CLogicalEntity : public C_BaseEntity {
public:
    char pad_016[1544];
};

class C_BaseFlex::Emphasized_Phoneme {
public:
    // CUtlString m_sClassName;
    char pad_00[24];
    float m_flAmount;
    bool m_bRequired;
    bool m_bBasechecked;
    bool m_bValid;
    char pad_01[1];
};

class C_EntityFlame : public C_BaseEntity {
public:
    // CHandle< C_BaseEntity > m_hEntAttached;
    // CHandle< C_BaseEntity > m_hOldAttached;
    char pad_016[44];
    bool m_bCheapEffect;
    char pad_017[27];
};

class C_RopeKeyframe : public C_BaseModelEntity {
public:
    // CBitVec< 10 > m_LinksTouchingSomething;
    char pad_024[12];
    int32_t m_nLinksTouchingSomething;
    bool m_bApplyWind;
    int32_t m_fPrevLockedPoints;
    int32_t m_iForcePointMoveCounter;
    bool m_bPrevEndPointPos[2];
    Vector m_vPrevEndPointPos;
    char pad_025[12];
    float m_flCurScroll;
    float m_flScrollSpeed;
    uint16_t m_RopeFlags;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex;
    char pad_026[638];
    uint8_t m_nSegments;
    // CHandle< C_BaseEntity > m_hStartPoint;
    // CHandle< C_BaseEntity > m_hEndPoint;
    AttachmentHandle_t m_iStartAttachment;
    AttachmentHandle_t m_iEndAttachment;
    uint8_t m_Subdiv;
    int16_t m_RopeLength;
    int16_t m_Slack;
    float m_TextureScale;
    uint8_t m_fLockedPoints;
    uint8_t m_nChangeCount;
    float m_Width;
    // C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial;
    char pad_027[24];
    int32_t m_TextureHeight;
    Vector m_vecImpulse;
    Vector m_vecPreviousImpulse;
    float m_flCurrentGustTimer;
    float m_flCurrentGustLifetime;
    float m_flTimeToNextGust;
    Vector m_vWindDir;
    Vector m_vColorMod;
    Vector m_vCachedEndPointAttachmentPos;
    char pad_028[12];
    QAngle m_vCachedEndPointAttachmentAngle;
    char pad_029[12];
    bool m_bConstrainBetweenEndpoints;
    // bitfield:1 m_bEndPointAttachmentPositionsDirty;
    // bitfield:1 m_bEndPointAttachmentAnglesDirty;
    // bitfield:1 m_bNewDataThisFrame;
    // bitfield:1 m_bPhysicsInitted;
    char pad_030[7];
};

class C_RopeKeyframe::CPhysicsDelegate {
public:
    char pad_00[8];
    C_RopeKeyframe* m_pKeyframe;
};

class C_SceneEntity::QueuedEvents_t {
public:
    float starttime;
    char pad_00[20];
};

class C_TintController : public C_BaseEntity {
public:
    char pad_016[1568];
};

class CFlashlightEffect {
public:
    char pad_00[16];
    bool m_bIsOn;
    char pad_01[15];
    bool m_bMuzzleFlashEnabled;
    float m_flMuzzleFlashBrightness;
    // Quaternion m_quatMuzzleFlashOrientation;
    char pad_02[24];
    Vector m_vecMuzzleFlashOrigin;
    float m_flFov;
    float m_flFarZ;
    float m_flLinearAtten;
    bool m_bCastsShadows;
    float m_flCurrentPullBackDist;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_FlashlightTexture;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_MuzzleFlashTexture;
    char pad_03[16];
    char m_textureName[64];
    char pad_04[560];
};

class CInterpolatedValue {
public:
    float m_flStartTime;
    float m_flEndTime;
    float m_flStartValue;
    float m_flEndValue;
    int32_t m_nInterpType;
};

class IClientAlphaProperty {
public:
    char pad_00[8];
};

class C_SkyCamera : public C_BaseEntity {
public:
    // sky3dparams_t m_skyboxData;
    // CUtlStringToken m_skyboxSlotToken;
    char pad_016[148];
    bool m_bUseAngles;
    C_SkyCamera* m_pNext;
};

class CSkyboxReference : public C_BaseEntity {
public:
    // WorldGroupId_t m_worldGroupId;
    // CHandle< C_SkyCamera > m_hSkyCamera;
    char pad_016[1552];
};

class sky3dparams_t {
public:
    char pad_00[8];
    int16_t scale;
    Vector origin;
    bool bClip3DSkyBoxNearToWorldFar;
    float flClip3DSkyBoxNearToWorldFarOffset;
    fogparams_t fog;
    // WorldGroupId_t m_nWorldGroupID;
    char pad_01[8];
};

class TimedEvent {
public:
    float m_TimeBetweenEvents;
    float m_fNextEvent;
};

class VPhysicsCollisionAttribute_t {
public:
    char pad_00[8];
    uint64_t m_nInteractsAs;
    uint64_t m_nInteractsWith;
    uint64_t m_nInteractsExclude;
    uint32_t m_nEntityId;
    uint32_t m_nOwnerId;
    uint16_t m_nHierarchyId;
    uint16_t m_nDetailLayerMask;
    uint8_t m_nDetailLayerMaskType;
    uint8_t m_nTargetDetailLayer;
    uint8_t m_nCollisionGroup;
    uint8_t m_nCollisionFunctionMask;
};

class CEffectData {
public:
    // VectorWS m_vOrigin;
    // VectorWS m_vStart;
    char pad_00[32];
    Vector m_vNormal;
    QAngle m_vAngles;
    // CEntityHandle m_hEntity;
    // CEntityHandle m_hOtherEntity;
    char pad_01[8];
    float m_flScale;
    float m_flMagnitude;
    float m_flRadius;
    // CUtlStringToken m_nSurfaceProp;
    // CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > m_nEffectIndex;
    char pad_02[12];
    uint32_t m_nDamageType;
    uint8_t m_nPenetrate;
    uint16_t m_nMaterial;
    int16_t m_nHitBox;
    uint8_t m_nColor;
    uint8_t m_fFlags;
    AttachmentHandle_t m_nAttachmentIndex;
    // CUtlStringToken m_nAttachmentName;
    char pad_03[6];
    uint16_t m_iEffectName;
    uint8_t m_nExplosionType;
    char pad_04[9];
};

class C_EnvDetailController : public C_BaseEntity {
public:
    float m_flFadeStartDist;
    float m_flFadeEndDist;
};

class C_EnvWindShared {
public:
    char pad_00[8];
    GameTime_t m_flStartTime;
    uint32_t m_iWindSeed;
    uint16_t m_iMinWind;
    uint16_t m_iMaxWind;
    int32_t m_windRadius;
    uint16_t m_iMinGust;
    uint16_t m_iMaxGust;
    float m_flMinGustDelay;
    float m_flMaxGustDelay;
    float m_flGustDuration;
    uint16_t m_iGustDirChange;
    uint16_t m_iInitialWindDir;
    float m_flInitialWindSpeed;
    Vector m_location;
    // CHandle< C_BaseEntity > m_hEntOwner;
    char pad_01[188];
};

class C_InfoLadderDismount : public C_BaseEntity {
public:
    char pad_016[1544];
};

class shard_model_desc_t {
public:
    char pad_00[8];
    int32_t m_nModelID;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterialBase;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterialDamageOverlay;
    char pad_01[20];
    ShardSolid_t m_solid;
    Vector2D m_vecPanelSize;
    Vector2D m_vecStressPositionA;
    Vector2D m_vecStressPositionB;
    // C_NetworkUtlVectorBase< Vector2D > m_vecPanelVertices;
    // C_NetworkUtlVectorBase< Vector4D > m_vInitialPanelVertices;
    char pad_02[52];
    float m_flGlassHalfThickness;
    bool m_bHasParent;
    bool m_bParentFrozen;
    // CUtlStringToken m_SurfacePropStringToken;
    char pad_03[10];
};

class C_GameRulesProxy : public C_BaseEntity {
public:
    char pad_016[1544];
};

class C_GameRules {
public:
    char pad_00[8];
    CNetworkVarChainer __m_pChainEntity;
    int32_t m_nTotalPausedTicks;
    int32_t m_nPauseStartTick;
    bool m_bGamePaused;
    char pad_01[7];
};

class CGlowProperty {
public:
    char pad_00[8];
    Vector m_fGlowColor;
    char pad_01[28];
    int32_t m_iGlowType;
    int32_t m_iGlowTeam;
    int32_t m_nGlowRange;
    int32_t m_nGlowRangeMin;
    // Color m_glowColorOverride;
    char pad_02[4];
    bool m_bFlashing;
    float m_flGlowTime;
    float m_flGlowStartTime;
    bool m_bEligibleForScreenHighlight;
    bool m_bGlowing;
    char pad_03[6];
};

class C_MultiplayRules {
public:
    char pad_00[64];
};

class PhysicsRagdollPose_t {
public:
    // C_NetworkUtlVectorBase< CTransform > m_Transforms;
    // CHandle< C_BaseEntity > m_hOwner;
    char pad_00[36];
    bool m_bSetFromDebugHistory;
    char pad_01[35];
};

class C_SingleplayRules {
public:
    char pad_00[64];
};

class C_SoundOpvarSetPointBase : public C_BaseEntity {
public:
    // CUtlSymbolLarge m_iszStackName;
    // CUtlSymbolLarge m_iszOperatorName;
    // CUtlSymbolLarge m_iszOpvarName;
    char pad_016[24];
    int32_t m_iOpvarIndex;
    bool m_bUseAutoCompare;
    bool m_bFastRefresh;
    char pad_017[2];
};

class C_SoundOpvarSetPointEntity : public C_SoundOpvarSetPointBase {
public:
    char pad_018[1576];
};

class C_SoundOpvarSetAABBEntity : public C_SoundOpvarSetPointEntity {
public:
    char pad_019[1576];
};

class C_SoundOpvarSetOBBEntity : public C_SoundOpvarSetAABBEntity {
public:
    char pad_020[1576];
};

class C_SoundOpvarSetPathCornerEntity : public C_SoundOpvarSetPointEntity {
public:
    char pad_019[1576];
};

class C_SoundOpvarSetAutoRoomEntity : public C_SoundOpvarSetPointEntity {
public:
    char pad_019[1576];
};

class C_SoundOpvarSetOBBWindEntity : public C_SoundOpvarSetPointBase {
public:
    char pad_018[1576];
};

class C_TeamplayRules {
public:
    char pad_00[64];
};

class C_PortraitWorldCallbackHandler : public C_BaseEntity {
public:
    char pad_016[1552];
};

class CEconItemAttribute {
public:
    char pad_00[48];
    uint16_t m_iAttributeDefinitionIndex;
    float m_flValue;
    float m_flInitialValue;
    int32_t m_nRefundableCurrency;
    bool m_bSetBonus;
    char pad_01[7];
};

class CAttributeManager {
public:
    // CUtlVector< CHandle< C_BaseEntity > > m_Providers;
    char pad_00[32];
    int32_t m_iReapplyProvisionParity;
    // CHandle< C_BaseEntity > m_hOuter;
    char pad_01[4];
    bool m_bPreventLoopback;
    attributeprovidertypes_t m_ProviderType;
    // CUtlVector< CAttributeManager::cached_attribute_float_t > m_CachedResults;
    char pad_02[32];
};

class CAttributeList {
public:
    // C_UtlVectorEmbeddedNetworkVar< CEconItemAttribute > m_Attributes;
    char pad_00[112];
    CAttributeManager* m_pManager;
};

class CAttributeManager::cached_attribute_float_t {
public:
    float flIn;
    // CUtlSymbolLarge iAttribHook;
    char pad_00[12];
    float flOut;
    char pad_01[4];
};

class C_EconItemView : public IEconItemInterface {
public:
    char pad_01[88];
    bool m_bInventoryImageRgbaRequested;
    bool m_bInventoryImageTriedCache;
    char pad_02[28];
    int32_t m_nInventoryImageRgbaWidth;
    int32_t m_nInventoryImageRgbaHeight;
    char m_szCurrentLoadCachedFileName[260];
    char pad_03[44];
    bool m_bRestoreCustomMaterialAfterPrecache;
    uint16_t m_iItemDefinitionIndex;
    int32_t m_iEntityQuality;
    uint32_t m_iEntityLevel;
    uint64_t m_iItemID;
    uint32_t m_iItemIDHigh;
    uint32_t m_iItemIDLow;
    uint32_t m_iAccountID;
    uint32_t m_iInventoryPosition;
    char pad_04[8];
    bool m_bInitialized;
    bool m_bDisallowSOC;
    bool m_bIsStoreItem;
    bool m_bIsTradeItem;
    int32_t m_iEntityQuantity;
    int32_t m_iRarityOverride;
    int32_t m_iQualityOverride;
    int32_t m_iOriginOverride;
    uint8_t m_ubStyleOverride;
    uint8_t m_unClientFlags;
    char pad_05[10];
    CAttributeList m_AttributeList;
    CAttributeList m_NetworkedDynamicAttributes;
    char m_szCustomName[161];
    char m_szCustomNameOverride[161];
    char pad_06[46];
    bool m_bInitializedTags;
    char pad_07[7];
};

class C_AttributeContainer : public CAttributeManager {
public:
    C_EconItemView m_Item;
    int32_t m_iExternalItemProviderRegisteredToken;
    uint64_t m_ullRegisteredAsItemID;
};

class C_EconEntity::AttachedModelData_t {
public:
    int32_t m_iModelDisplayFlags;
};

class EntitySpottedState_t {
public:
    char pad_00[8];
    bool m_bSpotted;
    uint32_t m_bSpottedByMask[2];
    char pad_01[4];
};

class C_CSGameRules {
public:
    char pad_00[64];
    bool m_bFreezePeriod;
    bool m_bWarmupPeriod;
    GameTime_t m_fWarmupPeriodEnd;
    GameTime_t m_fWarmupPeriodStart;
    bool m_bTerroristTimeOutActive;
    bool m_bCTTimeOutActive;
    float m_flTerroristTimeOutRemaining;
    float m_flCTTimeOutRemaining;
    int32_t m_nTerroristTimeOuts;
    int32_t m_nCTTimeOuts;
    bool m_bTechnicalTimeOut;
    bool m_bMatchWaitingForResume;
    int32_t m_iFreezeTime;
    int32_t m_iRoundTime;
    float m_fMatchStartTime;
    GameTime_t m_fRoundStartTime;
    GameTime_t m_flRestartRoundTime;
    bool m_bGameRestart;
    float m_flGameStartTime;
    float m_timeUntilNextPhaseStarts;
    int32_t m_gamePhase;
    int32_t m_totalRoundsPlayed;
    int32_t m_nRoundsPlayedThisPhase;
    int32_t m_nOvertimePlaying;
    int32_t m_iHostagesRemaining;
    bool m_bAnyHostageReached;
    bool m_bMapHasBombTarget;
    bool m_bMapHasRescueZone;
    bool m_bMapHasBuyZone;
    bool m_bIsQueuedMatchmaking;
    int32_t m_nQueuedMatchmakingMode;
    bool m_bIsValveDS;
    bool m_bLogoMap;
    bool m_bPlayAllStepSoundsOnServer;
    int32_t m_iSpectatorSlotCount;
    int32_t m_MatchDevice;
    bool m_bHasMatchStarted;
    int32_t m_nNextMapInMapgroup;
    char m_szTournamentEventName[512];
    char m_szTournamentEventStage[512];
    char m_szMatchStatTxt[512];
    char m_szTournamentPredictionsTxt[512];
    int32_t m_nTournamentPredictionsPct;
    GameTime_t m_flCMMItemDropRevealStartTime;
    GameTime_t m_flCMMItemDropRevealEndTime;
    bool m_bIsDroppingItems;
    bool m_bIsQuestEligible;
    bool m_bIsHltvActive;
    bool m_bBombPlanted;
    uint16_t m_arrProhibitedItemIndices[100];
    uint32_t m_arrTournamentActiveCasterAccounts[4];
    int32_t m_numBestOfMaps;
    int32_t m_nHalloweenMaskListSeed;
    bool m_bBombDropped;
    int32_t m_iRoundWinStatus;
    int32_t m_eRoundWinReason;
    bool m_bTCantBuy;
    bool m_bCTCantBuy;
    int32_t m_iMatchStats_RoundResults[30];
    int32_t m_iMatchStats_PlayersAlive_CT[30];
    int32_t m_iMatchStats_PlayersAlive_T[30];
    float m_TeamRespawnWaveTimes[32];
    GameTime_t m_flNextRespawnWave;
    char pad_01[124];
    Vector m_vMinimapMins;
    Vector m_vMinimapMaxs;
    float m_MinimapVerticalSectionHeights[8];
    uint64_t m_ullLocalMatchID;
    int32_t m_nEndMatchMapGroupVoteTypes[10];
    int32_t m_nEndMatchMapGroupVoteOptions[10];
    int32_t m_nEndMatchMapVoteWinner;
    int32_t m_iNumConsecutiveCTLoses;
    int32_t m_iNumConsecutiveTerroristLoses;
    char pad_02[188];
    int32_t m_nMatchAbortedEarlyReason;
    bool m_bHasTriggeredRoundStartMusic;
    bool m_bSwitchingTeamsAtRoundReset;
    char pad_03[24];
    CCSGameModeRules* m_pGameModeRules;
    // C_RetakeGameRules m_RetakeRules;
    char pad_04[344];
    uint8_t m_nMatchEndCount;
    int32_t m_nTTeamIntroVariant;
    int32_t m_nCTTeamIntroVariant;
    bool m_bTeamIntroPeriod;
    int32_t m_iRoundEndWinnerTeam;
    int32_t m_eRoundEndReason;
    bool m_bRoundEndShowTimerDefend;
    int32_t m_iRoundEndTimerTime;
    // CUtlString m_sRoundEndFunFactToken;
    // CPlayerSlot m_iRoundEndFunFactPlayerSlot;
    char pad_05[12];
    int32_t m_iRoundEndFunFactData1;
    int32_t m_iRoundEndFunFactData2;
    int32_t m_iRoundEndFunFactData3;
    // CUtlString m_sRoundEndMessage;
    char pad_06[8];
    int32_t m_iRoundEndPlayerCount;
    bool m_bRoundEndNoMusic;
    int32_t m_iRoundEndLegacy;
    uint8_t m_nRoundEndCount;
    int32_t m_iRoundStartRoundNumber;
    uint8_t m_nRoundStartCount;
    // float64 m_flLastPerfSampleTime;
    char pad_07[16403];
};

class C_CSGameRulesProxy : public C_GameRulesProxy {
public:
    C_CSGameRules* m_pGameRules;
};

class CCSGameModeRules {
public:
    char pad_00[8];
    CNetworkVarChainer __m_pChainEntity;
};

class C_RetakeGameRules {
public:
    char pad_00[312];
    int32_t m_nMatchSeed;
    bool m_bBlockersPresent;
    bool m_bRoundInProgress;
    int32_t m_iFirstSecondHalfRound;
    int32_t m_iBombSite;
    // CHandle< C_CSPlayerPawn > m_hBombPlanter;
    char pad_01[16];
};

class CCSGameModeRules_Noop {
public:
    char pad_00[48];
};

class CCSGameModeRules_ArmsRace {
public:
    // C_NetworkUtlVectorBase< CUtlString > m_WeaponSequence;
    char pad_00[72];
};

class CCSGameModeRules_Deathmatch {
public:
    char pad_00[48];
    GameTime_t m_flDMBonusStartTime;
    float m_flDMBonusTimeLength;
    // CUtlString m_sDMBonusWeapon;
    char pad_01[8];
};

class C_BaseCombatCharacter : public C_BaseFlex {
public:
    // C_NetworkUtlVectorBase< CHandle< C_EconWearable > > m_hMyWearables;
    AttachmentHandle_t m_leftFootAttachment;
    AttachmentHandle_t m_rightFootAttachment;
    C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode;
    float m_flWaterWorldZ;
    float m_flWaterNextTraceTime;
    char pad_034[96];
};

class C_BasePlayerPawn : public C_BaseCombatCharacter {
public:
    CPlayer_WeaponServices* m_pWeaponServices;
    CPlayer_ItemServices* m_pItemServices;
    CPlayer_AutoaimServices* m_pAutoaimServices;
    CPlayer_ObserverServices* m_pObserverServices;
    CPlayer_WaterServices* m_pWaterServices;
    CPlayer_UseServices* m_pUseServices;
    CPlayer_FlashlightServices* m_pFlashlightServices;
    CPlayer_CameraServices* m_pCameraServices;
    CPlayer_MovementServices* m_pMovementServices;
    // C_UtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges;
    char pad_035[112];
    QAngle v_angle;
    QAngle v_anglePrevious;
    uint32_t m_iHideHUD;
    sky3dparams_t m_skybox3d;
    GameTime_t m_flDeathTime;
    Vector m_vecPredictionError;
    GameTime_t m_flPredictionErrorTime;
    char pad_036[28];
    Vector m_vecLastCameraSetupLocalOrigin;
    GameTime_t m_flLastCameraSetupTime;
    float m_flFOVSensitivityAdjust;
    float m_flMouseSensitivity;
    Vector m_vOldOrigin;
    float m_flOldSimulationTime;
    int32_t m_nLastExecutedCommandNumber;
    int32_t m_nLastExecutedCommandTick;
    // CHandle< CBasePlayerController > m_hController;
    // CHandle< CBasePlayerController > m_hDefaultController;
    char pad_037[8];
    bool m_bIsSwappingToPredictableController;
    char pad_038[7];
};

class C_CSPlayerPawnBase : public C_BasePlayerPawn {
public:
    char pad_039[16];
    CCSPlayer_PingServices* m_pPingServices;
    CSPlayerState m_previousPlayerState;
    CSPlayerState m_iPlayerState;
    bool m_bHasMovedSinceSpawn;
    GameTime_t m_flLastSpawnTimeIndex;
    int32_t m_iProgressBarDuration;
    float m_flProgressBarStartTime;
    GameTime_t m_flClientDeathTime;
    float m_flFlashBangTime;
    float m_flFlashScreenshotAlpha;
    float m_flFlashOverlayAlpha;
    bool m_bFlashBuildUp;
    bool m_bFlashDspHasBeenCleared;
    bool m_bFlashScreenshotHasBeenGrabbed;
    float m_flFlashMaxAlpha;
    float m_flFlashDuration;
    GameTime_t m_flClientHealthFadeChangeTimestamp;
    int32_t m_nClientHealthFadeParityValue;
    float m_fNextThinkPushAway;
    char pad_040[4];
    float m_flCurrentMusicStartTime;
    float m_flMusicRoundStartTime;
    bool m_bDeferStartMusicOnWarmup;
    float m_flLastSmokeOverlayAlpha;
    float m_flLastSmokeAge;
    Vector m_vLastSmokeOverlayColor;
    // CHandle< CCSPlayerController > m_hOriginalController;
    char pad_041[36];
};

class C_CSPlayerPawn : public C_CSPlayerPawnBase {
public:
    char pad_042[16];
    CCSPlayer_BulletServices* m_pBulletServices;
    CCSPlayer_HostageServices* m_pHostageServices;
    CCSPlayer_BuyServices* m_pBuyServices;
    CCSPlayer_GlowServices* m_pGlowServices;
    CCSPlayer_ActionTrackingServices* m_pActionTrackingServices;
    CCSPlayer_DamageReactServices* m_pDamageReactServices;
    GameTime_t m_flHealthShotBoostExpirationTime;
    GameTime_t m_flLastFiredWeaponTime;
    bool m_bHasFemaleVoice;
    float m_flLandingTimeSeconds;
    float m_flOldFallVelocity;
    char m_szLastPlaceName[18];
    bool m_bPrevDefuser;
    bool m_bPrevHelmet;
    int32_t m_nPrevArmorVal;
    int32_t m_nPrevGrenadeAmmoCount;
    uint32_t m_unPreviousWeaponHash;
    uint32_t m_unWeaponHash;
    bool m_bInBuyZone;
    bool m_bPreviouslyInBuyZone;
    QAngle m_aimPunchAngle;
    QAngle m_aimPunchAngleVel;
    GameTick_t m_aimPunchTickBase;
    float m_aimPunchTickFraction;
    char pad_043[36];
    bool m_bInLanding;
    float m_flLandingStartTime;
    bool m_bInHostageRescueZone;
    bool m_bInBombZone;
    bool m_bIsBuyMenuOpen;
    GameTime_t m_flTimeOfLastInjury;
    GameTime_t m_flNextSprayDecalTime;
    char pad_044[340];
    int32_t m_iRetakesOffering;
    int32_t m_iRetakesOfferingCard;
    bool m_bRetakesHasDefuseKit;
    bool m_bRetakesMVPLastRound;
    int32_t m_iRetakesMVPBoostItem;
    loadout_slot_t m_RetakesMVPBoostExtraUtility;
    char pad_045[1];
    bool m_bNeedToReApplyGloves;
    C_EconItemView m_EconGloves;
    uint8_t m_nEconGlovesChanged;
    bool m_bMustSyncRagdollState;
    int32_t m_nRagdollDamageBone;
    Vector m_vRagdollDamageForce;
    Vector m_vRagdollDamagePosition;
    char m_szRagdollDamageWeaponName[64];
    bool m_bRagdollDamageHeadshot;
    Vector m_vRagdollServerOrigin;
    char pad_046[1534];
    GameTime_t m_lastLandTime;
    bool m_bOnGroundLastTick;
    // CHandle< C_CS2HudModelArms > m_hHudModelArms;
    char pad_047[28];
    QAngle m_qDeathEyeAngles;
    bool m_bSkipOneHeadConstraintUpdate;
    bool m_bLeftHanded;
    GameTime_t m_fSwitchedHandednessTime;
    float m_flViewmodelOffsetX;
    float m_flViewmodelOffsetY;
    float m_flViewmodelOffsetZ;
    float m_flViewmodelFOV;
    uint32_t m_vecPlayerPatchEconIndices[5];
    // Color m_GunGameImmunityColor;
    // CUtlVector< C_BulletHitModel* > m_vecBulletHitModels;
    char pad_048[140];
    bool m_bIsWalking;
    char pad_049[4];
    QAngle m_thirdPersonHeading;
    char pad_050[132];
    float m_flSlopeDropOffset;
    char pad_051[116];
    float m_flSlopeDropHeight;
    char pad_052[116];
    Vector m_vHeadConstraintOffset;
    char pad_053[7];
    EntitySpottedState_t m_entitySpottedState;
    bool m_bIsScoped;
    bool m_bResumeZoom;
    bool m_bIsDefusing;
    bool m_bIsGrabbingHostage;
    CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress;
    GameTime_t m_flEmitSoundTime;
    bool m_bInNoDefuseArea;
    int32_t m_nWhichBombZone;
    int32_t m_iShotsFired;
    float m_flFlinchStack;
    float m_flVelocityModifier;
    float m_flHitHeading;
    int32_t m_nHitBodyPart;
    bool m_bWaitForNoAttack;
    float m_ignoreLadderJumpTime;
    char pad_054[1];
    bool m_bKilledByHeadshot;
    int32_t m_ArmorValue;
    uint16_t m_unCurrentEquipmentValue;
    uint16_t m_unRoundStartEquipmentValue;
    uint16_t m_unFreezetimeEndEquipmentValue;
    // CEntityIndex m_nLastKillerIndex;
    char pad_055[6];
    bool m_bOldIsScoped;
    bool m_bHasDeathInfo;
    float m_flDeathInfoTime;
    Vector m_vecDeathInfoOrigin;
    GameTime_t m_grenadeParameterStashTime;
    bool m_bGrenadeParametersStashed;
    QAngle m_angStashedShootAngles;
    Vector m_vecStashedGrenadeThrowPosition;
    Vector m_vecStashedVelocity;
    QAngle m_angShootAngleHistory;
    char pad_056[12];
    Vector m_vecThrowPositionHistory;
    char pad_057[12];
    Vector m_vecVelocityHistory;
    // C_UtlVectorEmbeddedNetworkVar< PredictedDamageTag_t > m_PredictedDamageTags;
    char pad_058[88];
    GameTick_t m_nPrevHighestReceivedDamageTagTick;
    int32_t m_nHighestAppliedDamageTagTick;
    char pad_059[5428];
    bool m_bShouldAutobuyDMWeapons;
    GameTime_t m_fImmuneToGunGameDamageTime;
    bool m_bGunGameImmunity;
    GameTime_t m_fImmuneToGunGameDamageTimeLast;
    float m_fMolotovDamageTime;
    char pad_060[4];
    Vector m_vecLastAliveLocalVelocity;
    float m_fRenderingClipPlane[4];
    int32_t m_nLastClipPlaneSetupFrame;
    Vector m_vecLastClipCameraPos;
    Vector m_vecLastClipCameraForward;
    bool m_bClipHitStaticWorld;
    bool m_bCachedPlaneIsValid;
    C_CSWeaponBase* m_pClippingWeapon;
    ParticleIndex_t m_nPlayerInfernoBodyFx;
    char pad_061[4];
    QAngle m_angEyeAngles;
    GameTime_t m_arrOldEyeAnglesTimes;
    char pad_062[12];
    QAngle m_arrOldEyeAngles;
    char pad_063[36];
    QAngle m_angEyeAnglesVelocity;
    // CEntityIndex m_iIDEntIndex;
    CountdownTimer m_delayTargetIDTimer;
    // CEntityIndex m_iTargetItemEntIdx;
    // CEntityIndex m_iOldIDEntIndex;
    CountdownTimer m_holdTargetIDTimer;
    char pad_064[8];
};

class CSPerRoundStats_t {
public:
    char pad_00[48];
    int32_t m_iKills;
    int32_t m_iDeaths;
    int32_t m_iAssists;
    int32_t m_iDamage;
    int32_t m_iEquipmentValue;
    int32_t m_iMoneySaved;
    int32_t m_iKillReward;
    int32_t m_iLiveTime;
    int32_t m_iHeadShotKills;
    int32_t m_iObjective;
    int32_t m_iCashEarned;
    int32_t m_iUtilityDamage;
    int32_t m_iEnemiesFlashed;
    char pad_01[4];
};

class CSMatchStats_t {
public:
    char pad_00[104];
    int32_t m_iEnemy5Ks;
    int32_t m_iEnemy4Ks;
    int32_t m_iEnemy3Ks;
    int32_t m_iEnemyKnifeKills;
    int32_t m_iEnemyTaserKills;
    char pad_01[4];
};

class C_CSGO_TeamPreviewCharacterPosition : public C_BaseEntity {
public:
    int32_t m_nVariant;
    int32_t m_nRandom;
    int32_t m_nOrdinal;
    // CUtlString m_sWeaponName;
    char pad_016[8];
    uint64_t m_xuid;
    C_EconItemView m_agentItem;
    C_EconItemView m_glovesItem;
    C_EconItemView m_weaponItem;
    char pad_017[48];
};

class C_CSGO_TeamSelectCharacterPosition : public C_CSGO_TeamPreviewCharacterPosition {
public:
    char pad_018[5032];
};

class C_CSGO_TeamSelectTerroristPosition : public C_CSGO_TeamSelectCharacterPosition {
public:
    char pad_019[5032];
};

class C_CSGO_TeamSelectCounterTerroristPosition : public C_CSGO_TeamSelectCharacterPosition {
public:
    char pad_019[5032];
};

class C_CSGO_TeamIntroCharacterPosition : public C_CSGO_TeamPreviewCharacterPosition {
public:
    char pad_018[5032];
};

class C_CSGO_TeamIntroTerroristPosition : public C_CSGO_TeamIntroCharacterPosition {
public:
    char pad_019[5032];
};

class C_CSGO_TeamIntroCounterTerroristPosition : public C_CSGO_TeamIntroCharacterPosition {
public:
    char pad_019[5032];
};

class CCSGO_WingmanIntroCharacterPosition : public C_CSGO_TeamIntroCharacterPosition {
public:
    char pad_019[5032];
};

class CCSGO_WingmanIntroTerroristPosition : public CCSGO_WingmanIntroCharacterPosition {
public:
    char pad_020[5032];
};

class CCSGO_WingmanIntroCounterTerroristPosition : public CCSGO_WingmanIntroCharacterPosition {
public:
    char pad_020[5032];
};

class C_CSMinimapBoundary : public C_BaseEntity {
public:
    char pad_016[1544];
};

class C_CSPetPlacement : public C_BaseEntity {
public:
    char pad_016[1544];
};

class PredictedDamageTag_t {
public:
    char pad_00[48];
    GameTick_t nTagTick;
    float flFlinchModSmall;
    float flFlinchModLarge;
    float flFriendlyFireDamageReductionRatio;
};

class C_PlayerPing : public C_BaseEntity {
public:
    // CHandle< C_CSPlayerPawn > m_hPlayer;
    // CHandle< C_BaseEntity > m_hPingedEntity;
    char pad_016[56];
    int32_t m_iType;
    bool m_bUrgent;
    char m_szPlaceName[18];
    char pad_017[1];
};

class CCSPlayer_PingServices : public CPlayerPawnComponent {
public:
    // CHandle< C_PlayerPing > m_hPlayerPing;
    char pad_02[80];
};

class C_CSPlayerResource : public C_BaseEntity {
public:
    bool m_bHostageAlive[12];
    bool m_isHostageFollowingSomeone[12];
    // CEntityIndex[12] m_iHostageEntityIDs;
    char pad_016[48];
    Vector m_bombsiteCenterA;
    Vector m_bombsiteCenterB;
    int32_t m_hostageRescueX[4];
    int32_t m_hostageRescueY[4];
    int32_t m_hostageRescueZ[4];
    bool m_bEndMatchNextMapAllVoted;
    bool m_foundGoalPositions;
    char pad_017[6];
};

class CCSPlayer_DamageReactServices : public CPlayerPawnComponent {
public:
    char pad_02[80];
};

class CCSPlayerBase_CameraServices : public CPlayer_CameraServices {
public:
    uint32_t m_iFOV;
    uint32_t m_iFOVStart;
    GameTime_t m_flFOVTime;
    float m_flFOVRate;
    // CHandle< C_BaseEntity > m_hZoomOwner;
    char pad_07[4];
    float m_flLastShotFOV;
};

class WeaponPurchaseCount_t {
public:
    char pad_00[48];
    uint16_t m_nItemDefIndex;
    uint16_t m_nCount;
    char pad_01[4];
};

class WeaponPurchaseTracker_t {
public:
    // C_UtlVectorEmbeddedNetworkVar< WeaponPurchaseCount_t > m_weaponPurchases;
    char pad_00[112];
};

class CCSPlayer_ActionTrackingServices : public CPlayerPawnComponent {
public:
    // CHandle< C_BasePlayerWeapon > m_hLastWeaponBeforeC4AutoSwitch;
    char pad_02[4];
    bool m_bIsRescuing;
    WeaponPurchaseTracker_t m_weaponPurchasesThisMatch;
    WeaponPurchaseTracker_t m_weaponPurchasesThisRound;
};

class CCSPlayer_BulletServices : public CPlayerPawnComponent {
public:
    int32_t m_totalHitsOnServer;
    char pad_02[92];
};

class SellbackPurchaseEntry_t {
public:
    char pad_00[48];
    uint16_t m_unDefIdx;
    int32_t m_nCost;
    int32_t m_nPrevArmor;
    bool m_bPrevHelmet;
    // CEntityHandle m_hItem;
    char pad_01[11];
};

class CCSPlayer_BuyServices : public CPlayerPawnComponent {
public:
    // C_UtlVectorEmbeddedNetworkVar< SellbackPurchaseEntry_t > m_vecSellbackPurchaseEntries;
    char pad_02[176];
};

class CCSPlayer_CameraServices : public CCSPlayerBase_CameraServices {
public:
    float m_flDeathCamTilt;
    char pad_08[4];
    Vector m_vClientScopeInaccuracy;
    char pad_09[132];
};

class CCSPlayer_HostageServices : public CPlayerPawnComponent {
public:
    // CHandle< C_BaseEntity > m_hCarriedHostage;
    // CHandle< C_BaseEntity > m_hCarriedHostageProp;
    char pad_02[80];
};

class CCSPlayer_ItemServices : public CPlayer_ItemServices {
public:
    bool m_bHasDefuser;
    bool m_bHasHelmet;
    char pad_03[6];
};

class CCSPlayerLegacyJump {
public:
    char pad_00[16];
    bool m_bOldJumpPressed;
    float m_flJumpPressedTime;
};

class CCSPlayerModernJump {
public:
    char pad_00[16];
    GameTick_t m_nLastActualJumpPressTick;
    float m_flLastActualJumpPressFrac;
    GameTick_t m_nLastUsableJumpPressTick;
    float m_flLastUsableJumpPressFrac;
    GameTick_t m_nLastLandedTick;
    float m_flLastLandedFrac;
    float m_flLastLandedVelocityX;
    float m_flLastLandedVelocityY;
    float m_flLastLandedVelocityZ;
    char pad_01[4];
};

class CCSPlayer_MovementServices : public CPlayer_MovementServices_Humanoid {
public:
    Vector m_vecLadderNormal;
    int32_t m_nLadderSurfacePropIndex;
    bool m_bDucked;
    float m_flDuckAmount;
    float m_flDuckSpeed;
    bool m_bDuckOverride;
    bool m_bDesiresDuck;
    bool m_bDucking;
    float m_flDuckOffset;
    uint32_t m_nDuckTimeMsecs;
    uint32_t m_nDuckJumpTimeMsecs;
    uint32_t m_nJumpTimeMsecs;
    float m_flLastDuckTime;
    char pad_07[12];
    Vector2D m_vecLastPositionAtFullCrouchSpeed;
    bool m_duckUntilOnGround;
    bool m_bHasWalkMovedSinceLastJump;
    bool m_bInStuckTest;
    char pad_08[524];
    int32_t m_nTraceCount;
    int32_t m_StuckLast;
    bool m_bSpeedCropped;
    int32_t m_nOldWaterLevel;
    float m_flWaterEntryTime;
    Vector m_vecForward;
    Vector m_vecLeft;
    Vector m_vecUp;
    int32_t m_nGameCodeHasMovedPlayerAfterCommand;
    GameTime_t m_fStashGrenadeParameterWhen;
    uint64_t m_nButtonDownMaskPrev;
    float m_flOffsetTickCompleteTime;
    float m_flOffsetTickStashedSpeed;
    float m_flStamina;
    float m_flHeightAtJumpStart;
    float m_flMaxJumpHeightThisJump;
    float m_flMaxJumpHeightLastJump;
    float m_flStaminaAtJumpStart;
    float m_flVelMulAtJumpStart;
    float m_flAccumulatedJumpError;
    CCSPlayerLegacyJump m_LegacyJump;
    CCSPlayerModernJump m_ModernJump;
    GameTick_t m_nLastJumpTick;
    float m_flLastJumpFrac;
    float m_flLastJumpVelocityZ;
    bool m_bJumpApexPending;
    float m_flTicksSinceLastSurfingDetected;
    bool m_bWasSurfing;
    char pad_09[140];
    Vector m_vecInputRotated;
    char pad_010[2080];
};

class CCSPlayer_UseServices : public CPlayer_UseServices {
public:
    char pad_03[72];
};

class CCSPlayer_WaterServices : public CPlayer_WaterServices {
public:
    float m_flWaterJumpTime;
    Vector m_vecWaterJumpVel;
    float m_flSwimSoundTime;
    char pad_03[20];
};

class CCSPlayer_WeaponServices : public CPlayer_WeaponServices {
public:
    GameTime_t m_flNextAttack;
    bool m_bIsLookingAtWeapon;
    bool m_bIsHoldingLookAtWeapon;
    uint32_t m_nOldTotalShootPositionHistoryCount;
    char pad_03[660];
    uint32_t m_nOldTotalInputHistoryCount;
    // C_NetworkUtlVectorBase< uint8 > m_networkAnimTiming;
    char pad_04[4652];
    bool m_bBlockInspectUntilNextGraphUpdate;
    char pad_05[47];
};

class CCS2WeaponGraphController {
public:
    // CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_action;
    // CAnimGraph2ParamOptionalRef< bool > m_bActionReset;
    // CAnimGraph2ParamOptionalRef< float32 > m_flWeaponActionSpeedScale;
    // CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_weaponCategory;
    // CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_weaponType;
    // CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_weaponExtraInfo;
    // CAnimGraph2ParamOptionalRef< float32 > m_flWeaponAmmo;
    // CAnimGraph2ParamOptionalRef< float32 > m_flWeaponAmmoMax;
    // CAnimGraph2ParamOptionalRef< float32 > m_flWeaponAmmoReserve;
    // CAnimGraph2ParamOptionalRef< bool > m_bWeaponIsSilenced;
    // CAnimGraph2ParamOptionalRef< float32 > m_flWeaponIronsightAmount;
    // CAnimGraph2ParamOptionalRef< bool > m_bIsUsingLegacyModel;
    // CAnimGraph2ParamOptionalRef< float32 > m_idleVariation;
    // CAnimGraph2ParamOptionalRef< float32 > m_deployVariation;
    // CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_attackType;
    // CAnimGraph2ParamOptionalRef< float32 > m_attackThrowStrength;
    // CAnimGraph2ParamOptionalRef< float32 > m_flAttackVariation;
    // CAnimGraph2ParamOptionalRef< float32 > m_inspectVariation;
    // CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_inspectExtraInfo;
    // CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_reloadStage;
    char pad_00[672];
};

class CCSObserver_ObserverServices : public CPlayer_ObserverServices {
public:
    char pad_03[4];
    ObserverInterpState_t m_obsInterpState;
    char pad_04[136];
};

class CCSObserver_CameraServices : public CCSPlayerBase_CameraServices {
public:
    char pad_08[680];
};

class CCSObserver_MovementServices : public CPlayer_MovementServices {
public:
    char pad_05[576];
};

class CCSObserver_UseServices : public CPlayer_UseServices {
public:
    char pad_03[72];
};

class CCSPlayerController_ActionTrackingServices : public CPlayerControllerComponent {
public:
    // C_UtlVectorEmbeddedNetworkVar< CSPerRoundStats_t > m_perRoundStats;
    CSMatchStats_t m_matchStats;
    int32_t m_iNumRoundKills;
    int32_t m_iNumRoundKillsHeadshots;
    float m_flTotalRoundDamageDealt;
    char pad_02[4];
};

class CBasePlayerController : public C_BaseEntity {
public:
    C_CommandContext m_CommandContext;
    uint64_t m_nInButtonsWhichAreToggles;
    uint32_t m_nTickBase;
    // CHandle< C_BasePlayerPawn > m_hPawn;
    char pad_016[4];
    bool m_bKnownTeamMismatch;
    // CHandle< C_BasePlayerPawn > m_hPredictedPawn;
    // CSplitScreenSlot m_nSplitScreenSlot;
    // CHandle< CBasePlayerController > m_hSplitOwner;
    // CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers;
    char pad_017[39];
    bool m_bIsHLTV;
    PlayerConnectedState m_iConnected;
    char m_iszPlayerName[128];
    char pad_018[8];
    uint64_t m_steamID;
    bool m_bIsLocalPlayerController;
    bool m_bNoClipEnabled;
    uint32_t m_iDesiredFOV;
    char pad_019[104];
};

class CCSPlayerController : public CBasePlayerController {
public:
    char pad_020[16];
    CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices;
    CCSPlayerController_InventoryServices* m_pInventoryServices;
    CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices;
    CCSPlayerController_DamageServices* m_pDamageServices;
    uint32_t m_iPing;
    bool m_bHasCommunicationAbuseMute;
    uint32_t m_uiCommunicationMuteFlags;
    // CUtlSymbolLarge m_szCrosshairCodes;
    char pad_021[12];
    uint8_t m_iPendingTeamNum;
    GameTime_t m_flForceTeamTime;
    int32_t m_iCompTeammateColor;
    bool m_bEverPlayedOnTeam;
    GameTime_t m_flPreviousForceJoinTeamTime;
    // CUtlSymbolLarge m_szClan;
    // CUtlString m_sSanitizedPlayerName;
    char pad_022[20];
    int32_t m_iCoachingTeam;
    uint64_t m_nPlayerDominated;
    uint64_t m_nPlayerDominatingMe;
    int32_t m_iCompetitiveRanking;
    int32_t m_iCompetitiveWins;
    int8_t m_iCompetitiveRankType;
    int32_t m_iCompetitiveRankingPredicted_Win;
    int32_t m_iCompetitiveRankingPredicted_Loss;
    int32_t m_iCompetitiveRankingPredicted_Tie;
    int32_t m_nEndMatchNextMapVote;
    uint16_t m_unActiveQuestId;
    uint32_t m_rtActiveMissionPeriod;
    QuestProgress::Reason m_nQuestProgressReason;
    uint32_t m_unPlayerTvControlFlags;
    char pad_023[44];
    int32_t m_iDraftIndex;
    uint32_t m_msQueuedModeDisconnectionTimestamp;
    uint32_t m_uiAbandonRecordedReason;
    uint32_t m_eNetworkDisconnectionReason;
    bool m_bCannotBeKicked;
    bool m_bEverFullyConnected;
    bool m_bAbandonAllowsSurrender;
    bool m_bAbandonOffersInstantSurrender;
    bool m_bDisconnection1MinWarningPrinted;
    bool m_bScoreReported;
    int32_t m_nDisconnectionTick;
    char pad_024[12];
    bool m_bControllingBot;
    bool m_bHasControlledBotThisRound;
    bool m_bHasBeenControlledByPlayerThisRound;
    int32_t m_nBotsControlledThisRound;
    bool m_bCanControlObservedBot;
    // CHandle< C_CSPlayerPawn > m_hPlayerPawn;
    // CHandle< C_CSObserverPawn > m_hObserverPawn;
    char pad_025[11];
    bool m_bPawnIsAlive;
    uint32_t m_iPawnHealth;
    int32_t m_iPawnArmor;
    bool m_bPawnHasDefuser;
    bool m_bPawnHasHelmet;
    uint16_t m_nPawnCharacterDefIndex;
    int32_t m_iPawnLifetimeStart;
    int32_t m_iPawnLifetimeEnd;
    int32_t m_iPawnBotDifficulty;
    // CHandle< CCSPlayerController > m_hOriginalControllerOfCurrentPawn;
    char pad_026[4];
    int32_t m_iScore;
    uint8_t m_recentKillQueue[8];
    uint8_t m_nFirstKill;
    uint8_t m_nKillCount;
    bool m_bMvpNoMusic;
    int32_t m_eMvpReason;
    int32_t m_iMusicKitID;
    int32_t m_iMusicKitMVPs;
    int32_t m_iMVPs;
    bool m_bIsPlayerNameDirty;
    bool m_bFireBulletsSeedSynchronized;
    char pad_027[2];
};

class CDamageRecord {
public:
    // CHandle< C_CSPlayerPawn > m_PlayerDamager;
    // CHandle< C_CSPlayerPawn > m_PlayerRecipient;
    // CHandle< CCSPlayerController > m_hPlayerControllerDamager;
    // CHandle< CCSPlayerController > m_hPlayerControllerRecipient;
    // CUtlString m_szPlayerDamagerName;
    // CUtlString m_szPlayerRecipientName;
    char pad_00[80];
    uint64_t m_DamagerXuid;
    uint64_t m_RecipientXuid;
    float m_flBulletsDamage;
    float m_flDamage;
    float m_flActualHealthRemoved;
    int32_t m_iNumHits;
    int32_t m_iLastBulletUpdate;
    bool m_bIsOtherEnemy;
    EKillTypes_t m_killType;
    char pad_01[2];
};

class CCSPlayerController_DamageServices : public CPlayerControllerComponent {
public:
    int32_t m_nSendUpdate;
    // C_UtlVectorEmbeddedNetworkVar< CDamageRecord > m_DamageList;
    char pad_02[108];
};

class CCSPlayerController_InGameMoneyServices : public CPlayerControllerComponent {
public:
    int32_t m_iAccount;
    int32_t m_iStartAccount;
    int32_t m_iTotalCashSpent;
    int32_t m_iCashSpentThisRound;
};

class ServerAuthoritativeWeaponSlot_t {
public:
    char pad_00[48];
    uint16_t unClass;
    uint16_t unSlot;
    uint16_t unItemDefIdx;
    char pad_01[2];
};

class CCSPlayerController_InventoryServices::NetworkedLoadoutSlot_t {
public:
    C_EconItemView* pItem;
    uint16_t team;
    uint16_t slot;
    char pad_00[188];
};

class CCSPlayerController_InventoryServices : public CPlayerControllerComponent {
public:
    // CUtlVector< CCSPlayerController_InventoryServices::NetworkedLoadoutSlot_t > m_vecNetworkableLoadout;
    char pad_02[24];
    uint16_t m_unMusicID;
    MedalRank_t m_rank;
    char pad_03[20];
    int32_t m_nPersonaDataPublicLevel;
    int32_t m_nPersonaDataPublicCommendsLeader;
    int32_t m_nPersonaDataPublicCommendsTeacher;
    int32_t m_nPersonaDataPublicCommendsFriendly;
    int32_t m_nPersonaDataXpTrailLevel;
    // C_UtlVectorEmbeddedNetworkVar< ServerAuthoritativeWeaponSlot_t > m_vecServerAuthoritativeWeaponSlots;
    char pad_04[104];
};

class C_IronSightController {
public:
    char pad_00[16];
    bool m_bIronSightAvailable;
    float m_flIronSightAmount;
    float m_flIronSightAmountGained;
    float m_flIronSightAmountBiased;
    float m_flIronSightAmount_Interpolated;
    float m_flIronSightAmountGained_Interpolated;
    float m_flIronSightAmountBiased_Interpolated;
    float m_flInterpolationLastUpdated;
    QAngle m_angDeltaAverage;
    char pad_01[84];
    QAngle m_angViewLast;
    Vector2D m_vecDotCoords;
    float m_flFiringInaccuracyExtraWidthMultiplier;
    float m_flSpeedRatio;
    char pad_02[4];
};

class C_EnvWindClientside : public C_BaseEntity {
public:
    C_EnvWindShared m_EnvWindShared;
};

class CGlobalLightBase {
public:
    char pad_00[16];
    bool m_bSpotLight;
    Vector m_SpotLightOrigin;
    QAngle m_SpotLightAngles;
    Vector m_ShadowDirection;
    Vector m_AmbientDirection;
    Vector m_SpecularDirection;
    Vector m_InspectorSpecularDirection;
    float m_flSpecularPower;
    float m_flSpecularIndependence;
    // Color m_SpecularColor;
    char pad_01[4];
    bool m_bStartDisabled;
    bool m_bEnabled;
    // Color m_LightColor;
    // Color m_AmbientColor1;
    // Color m_AmbientColor2;
    // Color m_AmbientColor3;
    char pad_02[16];
    float m_flSunDistance;
    float m_flFOV;
    float m_flNearZ;
    float m_flFarZ;
    bool m_bEnableShadows;
    bool m_bOldEnableShadows;
    bool m_bBackgroundClearNotRequired;
    float m_flCloudScale;
    float m_flCloud1Speed;
    float m_flCloud1Direction;
    float m_flCloud2Speed;
    float m_flCloud2Direction;
    char pad_03[12];
    float m_flAmbientScale1;
    float m_flAmbientScale2;
    float m_flGroundScale;
    float m_flLightScale;
    float m_flFoWDarkness;
    bool m_bEnableSeparateSkyboxFog;
    Vector m_vFowColor;
    Vector m_ViewOrigin;
    QAngle m_ViewAngles;
    float m_flViewFoV;
    Vector m_WorldPoints;
    char pad_04[940];
    Vector2D m_vFogOffsetLayer0;
    Vector2D m_vFogOffsetLayer1;
    // CHandle< C_BaseEntity > m_hEnvWind;
    // CHandle< C_BaseEntity > m_hEnvSky;
    char pad_05[8];
};

class C_GlobalLight : public C_BaseEntity {
public:
    char pad_016[1224];
    uint16_t m_WindClothForceHandle;
    char pad_017[46];
};

class C_CSGO_PreviewPlayer_GraphController {
public:
    // CAnimGraphParamRef< char* > m_pszCharacterMode;
    // CAnimGraphParamRef< char* > m_pszTeamPreviewVariant;
    // CAnimGraphParamRef< char* > m_pszTeamPreviewPosition;
    // CAnimGraphParamRef< char* > m_pszEndOfMatchCelebration;
    // CAnimGraphParamRef< int32 > m_nTeamPreviewRandom;
    // CAnimGraphParamRef< char* > m_pszWeaponState;
    // CAnimGraphParamRef< char* > m_pszWeaponType;
    // CAnimGraphParamRef< bool > m_bCT;
    char pad_00[512];
};

class C_CSGO_MapPreviewCameraPathNode : public C_BaseEntity {
public:
    // CUtlSymbolLarge m_szParentPathUniqueID;
    char pad_016[8];
    int32_t m_nPathIndex;
    Vector m_vInTangentLocal;
    Vector m_vOutTangentLocal;
    float m_flFOV;
    float m_flCameraSpeed;
    float m_flEaseIn;
    float m_flEaseOut;
    Vector m_vInTangentWorld;
    Vector m_vOutTangentWorld;
    char pad_017[4];
};

class C_CSGO_MapPreviewCameraPath : public C_BaseEntity {
public:
    float m_flZFar;
    float m_flZNear;
    bool m_bLoop;
    bool m_bVerticalFOV;
    bool m_bConstantSpeed;
    float m_flDuration;
    char pad_016[64];
    float m_flPathLength;
    float m_flPathDuration;
    char pad_017[20];
    bool m_bDofEnabled;
    float m_flDofNearBlurry;
    float m_flDofNearCrisp;
    float m_flDofFarCrisp;
    float m_flDofFarBlurry;
    float m_flDofTiltToGround;
    char pad_018[4];
};

class CCSPlayer_GlowServices : public CPlayerPawnComponent {
public:
    char pad_02[80];
};

class C_VoteController : public C_BaseEntity {
public:
    char pad_016[16];
    int32_t m_iActiveIssueIndex;
    int32_t m_iOnlyTeamToVote;
    int32_t m_nVoteOptionCount[5];
    int32_t m_nPotentialVotes;
    bool m_bVotesDirty;
    bool m_bTypeDirty;
    bool m_bIsYesNoVote;
    char pad_017[5];
};

class C_MapVetoPickController : public C_BaseEntity {
public:
    char pad_016[16];
    int32_t m_nDraftType;
    int32_t m_nTeamWinningCoinToss;
    int32_t m_nTeamWithFirstChoice[64];
    int32_t m_nVoteMapIdsList[7];
    int32_t m_nAccountIDs[64];
    int32_t m_nMapId0[64];
    int32_t m_nMapId1[64];
    int32_t m_nMapId2[64];
    int32_t m_nMapId3[64];
    int32_t m_nMapId4[64];
    int32_t m_nMapId5[64];
    int32_t m_nStartingSide0[64];
    int32_t m_nCurrentPhase;
    int32_t m_nPhaseStartTick;
    int32_t m_nPhaseDurationTicks;
    int32_t m_nPostDataUpdateTick;
    bool m_bDisabledHud;
    char pad_017[3];
};

class CPlayerSprayDecalRenderHelper {
public:
    char pad_00[48];
};

class C_CSGO_TeamPreviewCamera : public C_CSGO_MapPreviewCameraPath {
public:
    int32_t m_nVariant;
    char pad_019[4];
};

class C_CSGO_TeamSelectCamera : public C_CSGO_TeamPreviewCamera {
public:
    char pad_020[1688];
};

class C_CSGO_TerroristTeamIntroCamera : public C_CSGO_TeamPreviewCamera {
public:
    char pad_020[1688];
};

class C_CSGO_TerroristWingmanIntroCamera : public C_CSGO_TeamPreviewCamera {
public:
    char pad_020[1688];
};

class C_CSGO_CounterTerroristTeamIntroCamera : public C_CSGO_TeamPreviewCamera {
public:
    char pad_020[1688];
};

class C_CSGO_CounterTerroristWingmanIntroCamera : public C_CSGO_TeamPreviewCamera {
public:
    char pad_020[1688];
};

class C_CSGO_EndOfMatchCamera : public C_CSGO_TeamPreviewCamera {
public:
    char pad_020[1688];
};

class C_CSGO_EndOfMatchCharacterPosition : public C_CSGO_TeamPreviewCharacterPosition {
public:
    char pad_018[5032];
};

class C_CSGO_EndOfMatchLineupEndpoint : public C_BaseEntity {
public:
    char pad_016[1544];
};

class C_CSGO_EndOfMatchLineupStart : public C_CSGO_EndOfMatchLineupEndpoint {
public:
    char pad_017[1544];
};

class C_CSGO_EndOfMatchLineupEnd : public C_CSGO_EndOfMatchLineupEndpoint {
public:
    char pad_017[1544];
};

class C_CsmFovOverride : public C_BaseEntity {
public:
    // CUtlString m_cameraName;
    char pad_016[8];
    float m_flCsmFovOverrideValue;
    char pad_017[4];
};

class CNmEventConsumerHudModelArmsAttributes {
public:
    char pad_00[88];
};

class inv_image_map_t {
public:
    // CUtlString map_name;
    char pad_00[8];
    float map_rotation;
    char pad_01[4];
};

class inv_image_item_t {
public:
    Vector position;
    QAngle angle;
    // CUtlString pose_sequence;
    char pad_00[8];
};

class inv_image_camera_t {
public:
    QAngle angle;
    float fov;
    float znear;
    float zfar;
    Vector target;
    Vector target_nudge;
    float orbit_distance;
};

class inv_image_light_sun_t {
public:
    Vector color;
    QAngle angle;
    float brightness;
};

class inv_image_clearcolor_t {
public:
    Vector color;
};

class inv_image_light_fill_t {
public:
    Vector color;
    QAngle angle;
    float brightness;
};

class inv_image_light_barn_t {
public:
    Vector color;
    QAngle angle;
    float brightness;
    float orbit_distance;
};

class inv_image_data_t {
public:
    inv_image_map_t map;
    inv_image_item_t item;
    inv_image_camera_t camera;
    inv_image_light_sun_t lightsun;
    inv_image_light_fill_t lightfill;
    inv_image_light_barn_t light0;
    inv_image_light_barn_t light1;
    inv_image_clearcolor_t clearcolor;
};

class CInventoryImageData {
public:
    InventoryNodeType_t m_nNodeType;
    // CUtlString name;
    char pad_00[8];
    inv_image_data_t inventory_image_data;
};

class CCS_PortraitWorldCallbackHandler : public C_BaseEntity {
public:
    char pad_016[1552];
};

class C_PointEntity : public C_BaseEntity {
public:
    char pad_016[1544];
};

class C_EnvCombinedLightProbeVolume : public C_BaseEntity {
public:
    // Color m_Entity_Color;
    char pad_016[4220];
    float m_Entity_flBrightness;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture;
    char pad_017[8];
    bool m_Entity_bCustomCubemapTexture;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_AmbientCube;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SDF;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_DC;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_R;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_G;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_B;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture;
    char pad_018[76];
    Vector m_Entity_vBoxMins;
    Vector m_Entity_vBoxMaxs;
    bool m_Entity_bMoveable;
    int32_t m_Entity_nHandshake;
    int32_t m_Entity_nEnvCubeMapArrayIndex;
    int32_t m_Entity_nPriority;
    bool m_Entity_bStartDisabled;
    float m_Entity_flEdgeFadeDist;
    Vector m_Entity_vEdgeFadeDists;
    int32_t m_Entity_nLightProbeSizeX;
    int32_t m_Entity_nLightProbeSizeY;
    int32_t m_Entity_nLightProbeSizeZ;
    int32_t m_Entity_nLightProbeAtlasX;
    int32_t m_Entity_nLightProbeAtlasY;
    int32_t m_Entity_nLightProbeAtlasZ;
    char pad_019[21];
    bool m_Entity_bEnabled;
    char pad_020[6];
};

class C_EnvCubemap : public C_BaseEntity {
public:
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture;
    char pad_016[136];
    bool m_Entity_bCustomCubemapTexture;
    float m_Entity_flInfluenceRadius;
    Vector m_Entity_vBoxProjectMins;
    Vector m_Entity_vBoxProjectMaxs;
    bool m_Entity_bMoveable;
    int32_t m_Entity_nHandshake;
    int32_t m_Entity_nEnvCubeMapArrayIndex;
    int32_t m_Entity_nPriority;
    float m_Entity_flEdgeFadeDist;
    Vector m_Entity_vEdgeFadeDists;
    float m_Entity_flDiffuseScale;
    bool m_Entity_bStartDisabled;
    bool m_Entity_bDefaultEnvMap;
    bool m_Entity_bDefaultSpecEnvMap;
    bool m_Entity_bIndoorCubeMap;
    bool m_Entity_bCopyDiffuseFromDefaultCubemap;
    char pad_017[15];
    bool m_Entity_bEnabled;
    char pad_018[7];
};

class C_EnvCubemapBox : public C_EnvCubemap {
public:
    char pad_019[1776];
};

class C_EnvCubemapFog : public C_BaseEntity {
public:
    float m_flEndDistance;
    float m_flStartDistance;
    float m_flFogFalloffExponent;
    bool m_bHeightFogEnabled;
    float m_flFogHeightWidth;
    float m_flFogHeightEnd;
    float m_flFogHeightStart;
    float m_flFogHeightExponent;
    float m_flLODBias;
    bool m_bActive;
    bool m_bStartDisabled;
    float m_flFogMaxOpacity;
    int32_t m_nCubemapSourceType;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial;
    // CUtlSymbolLarge m_iszSkyEntity;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture;
    char pad_016[24];
    bool m_bHasHeightFogEnd;
    bool m_bFirstTime;
    char pad_017[6];
};

class C_GradientFog : public C_BaseEntity {
public:
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hGradientFogTexture;
    char pad_016[8];
    float m_flFogStartDistance;
    float m_flFogEndDistance;
    bool m_bHeightFogEnabled;
    float m_flFogStartHeight;
    float m_flFogEndHeight;
    float m_flFarZ;
    float m_flFogMaxOpacity;
    float m_flFogFalloffExponent;
    float m_flFogVerticalExponent;
    // Color m_fogColor;
    char pad_017[4];
    float m_flFogStrength;
    float m_flFadeTime;
    bool m_bStartDisabled;
    bool m_bIsEnabled;
    bool m_bGradientFogNeedsTextures;
    char pad_018[93];
};

class C_EnvLightProbeVolume : public C_BaseEntity {
public:
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_AmbientCube;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SDF;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_DC;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_R;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_G;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_B;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture;
    char pad_016[4160];
    Vector m_Entity_vBoxMins;
    Vector m_Entity_vBoxMaxs;
    bool m_Entity_bMoveable;
    int32_t m_Entity_nHandshake;
    int32_t m_Entity_nPriority;
    bool m_Entity_bStartDisabled;
    int32_t m_Entity_nLightProbeSizeX;
    int32_t m_Entity_nLightProbeSizeY;
    int32_t m_Entity_nLightProbeSizeZ;
    int32_t m_Entity_nLightProbeAtlasX;
    int32_t m_Entity_nLightProbeAtlasY;
    int32_t m_Entity_nLightProbeAtlasZ;
    char pad_017[9];
    bool m_Entity_bEnabled;
    char pad_018[6];
};

class C_PlayerVisibility : public C_BaseEntity {
public:
    float m_flVisibilityStrength;
    float m_flFogDistanceMultiplier;
    float m_flFogMaxDensityMultiplier;
    float m_flFadeTime;
    bool m_bStartDisabled;
    bool m_bIsEnabled;
    char pad_016[30];
};

class C_EnvVolumetricFogController : public C_BaseEntity {
public:
    float m_flScattering;
    // Color m_TintColor;
    char pad_016[4];
    float m_flAnisotropy;
    float m_flFadeSpeed;
    float m_flDrawDistance;
    float m_flFadeInStart;
    float m_flFadeInEnd;
    float m_flIndirectStrength;
    int32_t m_nVolumeDepth;
    float m_fFirstVolumeSliceThickness;
    int32_t m_nIndirectTextureDimX;
    int32_t m_nIndirectTextureDimY;
    int32_t m_nIndirectTextureDimZ;
    Vector m_vBoxMins;
    Vector m_vBoxMaxs;
    bool m_bActive;
    GameTime_t m_flStartAnisoTime;
    GameTime_t m_flStartScatterTime;
    GameTime_t m_flStartDrawDistanceTime;
    float m_flStartAnisotropy;
    float m_flStartScattering;
    float m_flStartDrawDistance;
    float m_flDefaultAnisotropy;
    float m_flDefaultScattering;
    float m_flDefaultDrawDistance;
    bool m_bStartDisabled;
    bool m_bEnableIndirect;
    bool m_bIsMaster;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogIndirectTexture;
    char pad_017[8];
    int32_t m_nForceRefreshCount;
    float m_fNoiseSpeed;
    float m_fNoiseStrength;
    Vector m_vNoiseScale;
    float m_fWindSpeed;
    Vector m_vWindDirection;
    bool m_bFirstTime;
    char pad_018[7];
};

class C_EnvVolumetricFogVolume : public C_BaseEntity {
public:
    bool m_bActive;
    Vector m_vBoxMins;
    Vector m_vBoxMaxs;
    bool m_bStartDisabled;
    bool m_bIndirectUseLPVs;
    float m_flStrength;
    int32_t m_nFalloffShape;
    float m_flFalloffExponent;
    float m_flHeightFogDepth;
    float m_fHeightFogEdgeWidth;
    float m_fIndirectLightStrength;
    float m_fSunLightStrength;
    float m_fNoiseStrength;
    // Color m_TintColor;
    char pad_016[4];
    bool m_bOverrideTintColor;
    bool m_bOverrideIndirectLightStrength;
    bool m_bOverrideSunLightStrength;
    bool m_bOverrideNoiseStrength;
};

class C_EnvWindController : public C_BaseEntity {
public:
    C_EnvWindShared m_EnvWindShared;
    float m_fDirectionVariation;
    float m_fSpeedVariation;
    float m_fTurbulence;
    float m_fVolumeHalfExtentXY;
    float m_fVolumeHalfExtentZ;
    int32_t m_nVolumeResolutionXY;
    int32_t m_nVolumeResolutionZ;
    int32_t m_nClipmapLevels;
    bool m_bIsMaster;
    bool m_bFirstTime;
    char pad_016[6];
};

class C_EnvWindVolume : public C_BaseEntity {
public:
    bool m_bActive;
    Vector m_vBoxMins;
    Vector m_vBoxMaxs;
    bool m_bStartDisabled;
    int32_t m_nShape;
    float m_fWindSpeedMultiplier;
    float m_fWindTurbulenceMultiplier;
    float m_fWindSpeedVariationMultiplier;
    float m_fWindDirectionVariationMultiplier;
    char pad_016[4];
};

class CInfoTarget : public C_PointEntity {
public:
    char pad_017[1544];
};

class CInfoParticleTarget : public C_PointEntity {
public:
    char pad_017[1544];
};

class CChoreoInfoTarget : public C_PointEntity {
public:
    char pad_017[1544];
};

class C_InfoVisibilityBox : public C_BaseEntity {
public:
    char pad_016[4];
    int32_t m_nMode;
    Vector m_vBoxSize;
    bool m_bEnabled;
    char pad_017[3];
};

class CInfoWorldLayer : public C_BaseEntity {
public:
    CEntityIOOutput m_pOutputOnEntitiesSpawned;
    // CUtlSymbolLarge m_worldName;
    // CUtlSymbolLarge m_layerName;
    char pad_016[16];
    bool m_bWorldLayerVisible;
    bool m_bEntitiesSpawned;
    bool m_bCreateAsChildSpawnGroup;
    uint32_t m_hLayerSpawnGroup;
    bool m_bWorldLayerActuallyVisible;
    char pad_017[7];
};

class CPointChildModifier : public C_PointEntity {
public:
    bool m_bOrphanInsteadOfDeletingChildrenOnRemove;
    char pad_017[7];
};

class C_PointCameraVFOV : public C_PointCamera {
public:
    float m_flVerticalFOV;
    char pad_017[4];
};

class CPointOrient : public C_BaseEntity {
public:
    // CUtlSymbolLarge m_iszSpawnTargetName;
    // CHandle< C_BaseEntity > m_hTarget;
    char pad_016[12];
    bool m_bActive;
    PointOrientGoalDirectionType_t m_nGoalDirection;
    PointOrientConstraint_t m_nConstraint;
    float m_flMaxTurnRate;
    GameTime_t m_flLastGameTime;
};

class CPointTemplate : public CLogicalEntity {
public:
    // CUtlSymbolLarge m_iszWorldName;
    // CUtlSymbolLarge m_iszSource2EntityLumpName;
    // CUtlSymbolLarge m_iszEntityFilterName;
    char pad_017[24];
    float m_flTimeoutInterval;
    bool m_bAsynchronouslySpawnEntities;
    PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior;
    PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType;
    // CUtlVector< uint32 > m_createdSpawnGroupHandles;
    // CUtlVector< CEntityHandle > m_SpawnedEntityHandles;
    // HSCRIPT m_ScriptSpawnCallback;
    // HSCRIPT m_ScriptCallbackScope;
    char pad_018[64];
};

class CRagdollManager : public C_BaseEntity {
public:
    int8_t m_iCurrentMaxRagdollCount;
    char pad_016[7];
};

class C_SoundAreaEntityBase : public C_BaseEntity {
public:
    bool m_bDisabled;
    char pad_016[7];
    bool m_bWasEnabled;
    // CUtlSymbolLarge m_iszSoundAreaType;
    char pad_017[12];
    Vector m_vPos;
    char pad_018[4];
};

class C_SoundAreaEntitySphere : public C_SoundAreaEntityBase {
public:
    float m_flRadius;
    char pad_019[4];
};

class C_SoundAreaEntityOrientedBox : public C_SoundAreaEntityBase {
public:
    Vector m_vMin;
    Vector m_vMax;
};

class C_SoundEventEntity : public C_BaseEntity {
public:
    bool m_bStartOnSpawn;
    bool m_bToLocalPlayer;
    bool m_bStopOnNew;
    bool m_bSaveRestore;
    bool m_bSavedIsPlaying;
    float m_flSavedElapsedTime;
    // CUtlSymbolLarge m_iszSourceEntityName;
    // CUtlSymbolLarge m_iszAttachmentName;
    // CEntityOutputTemplate< uint64, uint64 > m_onGUIDChanged;
    CEntityIOOutput m_onSoundFinished;
    float m_flClientCullRadius;
    // CUtlSymbolLarge m_iszSoundName;
    // CEntityHandle m_hSource;
    char pad_016[76];
    int32_t m_nEntityIndexSelection;
    // bitfield:1 m_bClientSideOnly;
    char pad_017[4];
};

class C_SoundEventEntityAlias_snd_event_point : public C_SoundEventEntity {
public:
    char pad_018[1720];
};

class C_SoundEventAABBEntity : public C_SoundEventEntity {
public:
    Vector m_vMins;
    Vector m_vMaxs;
};

class C_SoundEventOBBEntity : public C_SoundEventEntity {
public:
    Vector m_vMins;
    Vector m_vMaxs;
    char pad_018[16];
};

class C_SoundEventSphereEntity : public C_SoundEventEntity {
public:
    float m_flRadius;
    char pad_018[4];
};

class C_SoundEventConeEntity : public C_SoundEventEntity {
public:
    float m_flEmitterAngle;
    float m_flSweetSpotAngle;
    float m_flAttenMin;
    float m_flAttenMax;
    // CUtlSymbolLarge m_iszParameterName;
    char pad_018[8];
};

class C_SoundEventPathCornerEntity : public C_SoundEventEntity {
public:
    // C_NetworkUtlVectorBase< SoundeventPathCornerPairNetworked_t > m_vecCornerPairsNetworked;
    char pad_018[1744];
};

class C_Team : public C_BaseEntity {
public:
    // C_NetworkUtlVectorBase< CHandle< CBasePlayerController > > m_aPlayerControllers;
    // C_NetworkUtlVectorBase< CHandle< C_BasePlayerPawn > > m_aPlayers;
    char pad_016[48];
    int32_t m_iScore;
    char m_szTeamname[129];
    char pad_017[3];
};

class CInfoFan : public C_PointEntity {
public:
    char pad_017[64];
    float m_fFanForceMaxRadius;
    float m_fFanForceMinRadius;
    float m_flCurveDistRange;
    // CUtlSymbolLarge m_FanForceCurveString;
    char pad_018[12];
};

class CPulseGameBlackboard : public C_BaseEntity {
public:
    // CUtlString m_strGraphName;
    // CUtlString m_strStateBlob;
    char pad_016[1568];
};

class CBasePlayerVData {
public:
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName;
    char pad_00[264];
    CSkillFloat m_flHeadDamageMultiplier;
    CSkillFloat m_flChestDamageMultiplier;
    CSkillFloat m_flStomachDamageMultiplier;
    CSkillFloat m_flArmDamageMultiplier;
    CSkillFloat m_flLegDamageMultiplier;
    float m_flHoldBreathTime;
    float m_flDrowningDamageInterval;
    int32_t m_nDrowningDamageInitial;
    int32_t m_nDrowningDamageMax;
    int32_t m_nWaterSpeed;
    float m_flUseRange;
    float m_flUseAngleTolerance;
    float m_flCrouchTime;
};

class CBaseFilter : public CLogicalEntity {
public:
    bool m_bNegated;
    CEntityIOOutput m_OnPass;
    CEntityIOOutput m_OnFail;
};

class CFilterMultiple : public CBaseFilter {
public:
    filter_t m_nFilterType;
    // CUtlSymbolLarge[10] m_iFilterName;
    // CHandle< C_BaseEntity >[10] m_hFilter;
    char pad_017[124];
};

class CFilterProximity : public CBaseFilter {
public:
    float m_flRadius;
    char pad_017[4];
};

class CFilterLOS : public CBaseFilter {
public:
    char pad_017[1600];
};

class CFilterClass : public CBaseFilter {
public:
    // CUtlSymbolLarge m_iFilterClass;
    char pad_017[1608];
};

class CBasePlayerWeaponVData {
public:
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldModel;
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sToolsOnlyOwnerModelName;
    char pad_00[488];
    bool m_bBuiltRightHanded;
    bool m_bAllowFlipping;
    // CAttachmentNameSymbolWithStorage m_sMuzzleAttachment;
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashParticle;
    // CUtlString m_szMuzzleFlashParticleConfig;
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szBarrelSmokeParticle;
    char pad_01[494];
    uint8_t m_nMuzzleSmokeShotThreshold;
    float m_flMuzzleSmokeTimeout;
    float m_flMuzzleSmokeDecrementRate;
    bool m_bGenerateMuzzleLight;
    bool m_bLinkedCooldowns;
    ItemFlagTypes_t m_iFlags;
    int32_t m_iWeight;
    bool m_bAutoSwitchTo;
    bool m_bAutoSwitchFrom;
    AmmoIndex_t m_nPrimaryAmmoType;
    AmmoIndex_t m_nSecondaryAmmoType;
    int32_t m_iMaxClip1;
    int32_t m_iMaxClip2;
    int32_t m_iDefaultClip1;
    int32_t m_iDefaultClip2;
    bool m_bReserveAmmoAsClips;
    bool m_bTreatAsSingleClip;
    bool m_bKeepLoadedAmmo;
    RumbleEffect_t m_iRumbleEffect;
    float m_flDropSpeed;
    int32_t m_iSlot;
    int32_t m_iPosition;
    // CUtlOrderedMap< WeaponSound_t, CSoundEventName > m_aShootSounds;
    char pad_02[44];
};

class CClientAlphaProperty {
public:
    char pad_00[16];
    uint16_t m_nDistFadeStart;
    uint16_t m_nDistFadeEnd;
    // bitfield:14 m_nDesyncOffset;
    // bitfield:1 m_bAlphaOverride;
    // bitfield:1 m_bShadowAlphaOverride;
    // bitfield:3 m_nRenderMode;
    // bitfield:5 m_nRenderFX;
    char pad_01[3];
    uint8_t m_nAlpha;
    float m_flFadeScale;
    GameTime_t m_flRenderFxStartTime;
    float m_flRenderFxDuration;
    char pad_02[12];
};

class CServerOnlyModelEntity : public C_BaseModelEntity {
public:
    char pad_024[3720];
};

class C_ModelPointEntity : public C_BaseModelEntity {
public:
    char pad_024[3720];
};

class CInfoInteraction : public C_PointEntity {
public:
    // CUtlSymbolLarge[8] m_strSlotEntityName;
    // CUtlSymbolLarge m_strInteractVData;
    char pad_017[72];
    float m_flInteractRadius;
    char pad_018[4];
};

class CLogicRelay : public CLogicalEntity {
public:
    bool m_bDisabled;
    bool m_bWaitForRefire;
    bool m_bTriggerOnce;
    bool m_bFastRetrigger;
    bool m_bPassthoughCaller;
    char pad_017[3];
};

class C_PathParticleRope : public C_BaseEntity {
public:
    char pad_016[8];
    bool m_bStartActive;
    float m_flMaxSimulationTime;
    // CUtlSymbolLarge m_iszEffectName;
    // CUtlVector< CUtlSymbolLarge > m_PathNodes_Name;
    char pad_017[32];
    float m_flParticleSpacing;
    float m_flSlack;
    float m_flRadius;
    // Color m_ColorTint;
    char pad_018[4];
    int32_t m_nEffectState;
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex;
    // C_NetworkUtlVectorBase< Vector > m_PathNodes_Position;
    // C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentIn;
    // C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentOut;
    // C_NetworkUtlVectorBase< Vector > m_PathNodes_Color;
    // C_NetworkUtlVectorBase< bool > m_PathNodes_PinEnabled;
    // C_NetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale;
    char pad_019[204];
};

class C_PathParticleRopeAlias_path_particle_rope_clientside : public C_PathParticleRope {
public:
    char pad_020[1816];
};

class CPathSimple : public C_BaseEntity {
public:
    CPathQueryComponent m_CPathQueryComponent;
    // CUtlString m_pathString;
    char pad_016[88];
    bool m_bClosedLoop;
    char pad_017[7];
};

class CPathWithDynamicNodes : public CPathSimple {
public:
    // C_NetworkUtlVectorBase< CHandle< CPathNode > > m_vecPathNodes;
    // CTransform m_xInitialPathWorldToLocal;
    char pad_018[1872];
};

class CPathNode : public C_PointEntity {
public:
    Vector m_vInTangentLocal;
    Vector m_vOutTangentLocal;
    // CUtlString m_strParentPathUniqueID;
    // CUtlString m_strPathNodeParameter;
    // CTransform m_xWSPrevParent;
    // CHandle< CPathWithDynamicNodes > m_hPath;
    char pad_017[64];
};

class CEnvSoundscape : public C_BaseEntity {
public:
    CEntityIOOutput m_OnPlay;
    float m_flRadius;
    // CUtlSymbolLarge m_soundEventName;
    char pad_016[12];
    bool m_bOverrideWithEvent;
    int32_t m_soundscapeIndex;
    int32_t m_soundscapeEntityListId;
    // CUtlSymbolLarge[8] m_positionNames;
    // CHandle< CEnvSoundscape > m_hProxySoundscape;
    char pad_017[72];
    bool m_bDisabled;
    // CUtlSymbolLarge m_soundscapeName;
    char pad_018[8];
    uint32_t m_soundEventHash;
    char pad_019[4];
};

class CEnvSoundscapeProxy : public CEnvSoundscape {
public:
    // CUtlSymbolLarge m_MainSoundscapeName;
    char pad_020[1696];
};

class CEnvSoundscapeTriggerable : public CEnvSoundscape {
public:
    char pad_020[1688];
};

class C_DynamicLight : public C_BaseModelEntity {
public:
    uint8_t m_Flags;
    uint8_t m_LightStyle;
    float m_Radius;
    int32_t m_Exponent;
    float m_InnerAngle;
    float m_OuterAngle;
    float m_SpotRadius;
    char pad_024[16];
};

class C_FuncTrackTrain : public C_BaseModelEntity {
public:
    int32_t m_nLongAxis;
    float m_flRadius;
    float m_flLineLength;
    char pad_024[4];
};

class C_SpotlightEnd : public C_BaseModelEntity {
public:
    float m_flLightScale;
    float m_Radius;
    char pad_024[8];
};

class C_PointValueRemapper : public C_BaseEntity {
public:
    bool m_bDisabled;
    bool m_bDisabledOld;
    bool m_bUpdateOnClient;
    ValueRemapperInputType_t m_nInputType;
    // CHandle< C_BaseEntity > m_hRemapLineStart;
    // CHandle< C_BaseEntity > m_hRemapLineEnd;
    char pad_016[8];
    float m_flMaximumChangePerSecond;
    float m_flDisengageDistance;
    float m_flEngageDistance;
    bool m_bRequiresUseKey;
    ValueRemapperOutputType_t m_nOutputType;
    // C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hOutputEntities;
    char pad_017[28];
    ValueRemapperHapticsType_t m_nHapticsType;
    ValueRemapperMomentumType_t m_nMomentumType;
    float m_flMomentumModifier;
    float m_flSnapValue;
    float m_flCurrentMomentum;
    ValueRemapperRatchetType_t m_nRatchetType;
    float m_flRatchetOffset;
    float m_flInputOffset;
    bool m_bEngaged;
    bool m_bFirstUpdate;
    float m_flPreviousValue;
    GameTime_t m_flPreviousUpdateTickTime;
    Vector m_vecPreviousTestPoint;
};

class C_PointWorldText : public C_ModelPointEntity {
public:
    char pad_025[8];
    bool m_bForceRecreateNextUpdate;
    char pad_026[20];
    int32_t m_nTextWidthPx;
    int32_t m_nTextHeightPx;
    char m_messageText[512];
    char m_FontName[64];
    char m_BackgroundMaterialName[64];
    bool m_bEnabled;
    bool m_bFullbright;
    float m_flWorldUnitsPerPx;
    float m_flFontSize;
    float m_flDepthOffset;
    bool m_bDrawBackground;
    float m_flBackgroundBorderWidth;
    float m_flBackgroundBorderHeight;
    float m_flBackgroundWorldToUV;
    // Color m_Color;
    char pad_027[4];
    PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal;
    PointWorldTextJustifyVertical_t m_nJustifyVertical;
    PointWorldTextReorientMode_t m_nReorientMode;
};

class CCitadelSoundOpvarSetOBB : public C_BaseEntity {
public:
    // CUtlSymbolLarge m_iszStackName;
    // CUtlSymbolLarge m_iszOperatorName;
    // CUtlSymbolLarge m_iszOpvarName;
    char pad_016[48];
    Vector m_vDistanceInnerMins;
    Vector m_vDistanceInnerMaxs;
    Vector m_vDistanceOuterMins;
    Vector m_vDistanceOuterMaxs;
    int32_t m_nAABBDirection;
    char pad_017[4];
};

class C_HandleTest : public C_BaseEntity {
public:
    // CHandle< C_BaseEntity > m_Handle;
    char pad_016[4];
    bool m_bSendHandle;
    char pad_017[3];
};

class C_EnvWind : public C_BaseEntity {
public:
    C_EnvWindShared m_EnvWindShared;
};

class C_BaseButton : public C_BaseToggle {
public:
    // CHandle< C_BaseModelEntity > m_glowEntity;
    char pad_025[4];
    bool m_usable;
    // CUtlSymbolLarge m_szDisplayText;
    char pad_026[11];
};

class C_PrecipitationBlocker : public C_BaseModelEntity {
public:
    char pad_024[3720];
};

class C_EntityDissolve : public C_BaseModelEntity {
public:
    GameTime_t m_flStartTime;
    float m_flFadeInStart;
    float m_flFadeInLength;
    float m_flFadeOutModelStart;
    float m_flFadeOutModelLength;
    float m_flFadeOutStart;
    float m_flFadeOutLength;
    GameTime_t m_flNextSparkTime;
    EntityDisolveType_t m_nDissolveType;
    Vector m_vDissolverOrigin;
    uint32_t m_nMagnitude;
    bool m_bCoreExplode;
    bool m_bLinkedToServerEnt;
    char pad_024[10];
};

class C_EnvDecal : public C_BaseModelEntity {
public:
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial;
    char pad_024[8];
    float m_flWidth;
    float m_flHeight;
    float m_flDepth;
    uint32_t m_nRenderOrder;
    bool m_bProjectOnWorld;
    bool m_bProjectOnCharacters;
    bool m_bProjectOnWater;
    float m_flDepthSortBias;
    char pad_025[24];
};

class C_FuncBrush : public C_BaseModelEntity {
public:
    char pad_024[3720];
};

class C_FuncElectrifiedVolume : public C_FuncBrush {
public:
    ParticleIndex_t m_nAmbientEffect;
    // CUtlSymbolLarge m_EffectName;
    char pad_025[12];
    bool m_bState;
    char pad_026[7];
};

class C_FuncRotating : public C_BaseModelEntity {
public:
    char pad_024[3720];
};

class C_Breakable : public C_BaseModelEntity {
public:
    char pad_024[3720];
};

class C_PhysBox : public C_Breakable {
public:
    char pad_025[3720];
};

class C_SceneEntity : public C_PointEntity {
public:
    char pad_017[8];
    bool m_bIsPlayingBack;
    bool m_bPaused;
    bool m_bMultiplayer;
    bool m_bAutogenerated;
    float m_flForceClientTime;
    uint16_t m_nSceneStringIndex;
    bool m_bClientOnly;
    // CHandle< C_BaseFlex > m_hOwner;
    // C_NetworkUtlVectorBase< CHandle< C_BaseFlex > > m_hActorList;
    char pad_018[29];
    bool m_bWasPlaying;
    // CUtlVector< C_SceneEntity::QueuedEvents_t > m_QueuedEvents;
    char pad_019[36];
    float m_flCurrentTime;
    char pad_020[4];
};

class C_TriggerVolume : public C_BaseModelEntity {
public:
    char pad_024[3720];
};

class C_Beam : public C_BaseModelEntity {
public:
    float m_flFrameRate;
    float m_flHDRColorScale;
    GameTime_t m_flFireTime;
    float m_flDamage;
    uint8_t m_nNumBeamEnts;
    int32_t m_queryHandleHalo;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex;
    char pad_024[48];
    BeamType_t m_nBeamType;
    uint32_t m_nBeamFlags;
    // CHandle< C_BaseEntity >[10] m_hAttachEntity;
    char pad_025[15];
    AttachmentHandle_t m_nAttachIndex;
    char pad_026[8];
    float m_fWidth;
    float m_fEndWidth;
    float m_fFadeLength;
    float m_fHaloScale;
    float m_fAmplitude;
    float m_fStartFrame;
    float m_fSpeed;
    float m_flFrame;
    BeamClipStyle_t m_nClipStyle;
    bool m_bTurnedOff;
    // VectorWS m_vecEndPos;
    // CHandle< C_BaseEntity > m_hEndEntity;
    char pad_027[23];
};

class C_FuncLadder : public C_BaseModelEntity {
public:
    Vector m_vecLadderDir;
    // CUtlVector< CHandle< C_InfoLadderDismount > > m_Dismounts;
    char pad_024[28];
    Vector m_vecLocalTop;
    // VectorWS m_vecPlayerMountPositionTop;
    // VectorWS m_vecPlayerMountPositionBottom;
    char pad_025[24];
    float m_flAutoRideSpeed;
    bool m_bDisabled;
    bool m_bFakeLadder;
    bool m_bHasSlack;
    char pad_026[5];
};

class CPrecipitationVData {
public:
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szParticlePrecipitationEffect;
    char pad_00[264];
    float m_flInnerDistance;
    ParticleAttachment_t m_nAttachType;
    bool m_bBatchSameVolumeType;
    int32_t m_nRTEnvCP;
    int32_t m_nRTEnvCPComponent;
    // CUtlString m_szModifier;
    char pad_01[12];
};

class C_Sprite : public C_BaseModelEntity {
public:
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial;
    // CHandle< C_BaseEntity > m_hAttachedToEntity;
    AttachmentHandle_t m_nAttachment;
    float m_flSpriteFramerate;
    float m_flFrame;
    GameTime_t m_flDieTime;
    char pad_024[12];
    uint32_t m_nBrightness;
    float m_flBrightnessDuration;
    float m_flSpriteScale;
    float m_flScaleDuration;
    bool m_bWorldSpaceScale;
    float m_flGlowProxySize;
    float m_flHDRColorScale;
    GameTime_t m_flLastTime;
    float m_flMaxFrame;
    float m_flStartScale;
    float m_flDestScale;
    GameTime_t m_flScaleTimeStart;
    int32_t m_nStartBrightness;
    int32_t m_nDestBrightness;
    GameTime_t m_flBrightnessTimeStart;
    char pad_025[12];
    int32_t m_nSpriteWidth;
    int32_t m_nSpriteHeight;
};

class CSpriteOriented : public C_Sprite {
public:
    char pad_026[3840];
};

class C_BaseClientUIEntity : public C_BaseModelEntity {
public:
    char pad_024[8];
    bool m_bEnabled;
    // CUtlSymbolLarge m_DialogXMLName;
    // CUtlSymbolLarge m_PanelClassName;
    // CUtlSymbolLarge m_PanelID;
    char pad_025[39];
};

class C_PointClientUIDialog : public C_BaseClientUIEntity {
public:
    // CHandle< C_BaseEntity > m_hActivator;
    char pad_026[4];
    bool m_bStartEnabled;
    char pad_027[3];
};

class C_PointClientUIHUD : public C_BaseClientUIEntity {
public:
    char pad_026[8];
    bool m_bCheckCSSClasses;
    char pad_027[375];
    bool m_bIgnoreInput;
    float m_flWidth;
    float m_flHeight;
    float m_flDPI;
    float m_flInteractDistance;
    float m_flDepthOffset;
    uint32_t m_unOwnerContext;
    uint32_t m_unHorizontalAlign;
    uint32_t m_unVerticalAlign;
    uint32_t m_unOrientation;
    bool m_bAllowInteractionFromAllSceneWorlds;
    // C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses;
    char pad_028[31];
};

class C_PointClientUIWorldPanel : public C_BaseClientUIEntity {
public:
    char pad_026[8];
    bool m_bForceRecreateNextUpdate;
    bool m_bMoveViewToPlayerNextThink;
    bool m_bCheckCSSClasses;
    // CTransform m_anchorDeltaTransform;
    char pad_027[408];
    CPointOffScreenIndicatorUi* m_pOffScreenIndicator;
    char pad_028[32];
    bool m_bIgnoreInput;
    bool m_bLit;
    bool m_bFollowPlayerAcrossTeleport;
    float m_flWidth;
    float m_flHeight;
    float m_flDPI;
    float m_flInteractDistance;
    float m_flDepthOffset;
    uint32_t m_unOwnerContext;
    uint32_t m_unHorizontalAlign;
    uint32_t m_unVerticalAlign;
    uint32_t m_unOrientation;
    bool m_bAllowInteractionFromAllSceneWorlds;
    // C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses;
    char pad_029[31];
    bool m_bOpaque;
    bool m_bNoDepth;
    bool m_bVisibleWhenParentNoDraw;
    bool m_bRenderBackface;
    bool m_bUseOffScreenIndicator;
    bool m_bExcludeFromSaveGames;
    bool m_bGrabbable;
    bool m_bOnlyRenderToTexture;
    bool m_bDisableMipGen;
    int32_t m_nExplicitImageLayout;
};

class CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel {
public:
    bool m_bBeenEnabled;
    bool m_bHide;
    float m_flSeenTargetTime;
    C_PointClientUIWorldPanel* m_pTargetPanel;
};

class C_PointClientUIWorldTextPanel : public C_PointClientUIWorldPanel {
public:
    char m_messageText[512];
};

class CInfoOffscreenPanoramaTexture : public C_PointEntity {
public:
    bool m_bDisabled;
    int32_t m_nResolutionX;
    int32_t m_nResolutionY;
    // CUtlSymbolLarge m_szPanelType;
    // CUtlSymbolLarge m_szLayoutFileName;
    // CUtlSymbolLarge m_RenderAttrName;
    // C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_TargetEntities;
    char pad_017[52];
    int32_t m_nTargetChangeCount;
    // C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses;
    // CUtlSymbolLarge m_szTargetsName;
    // CUtlVector< CHandle< C_BaseModelEntity > > m_AdditionalTargetEntities;
    char pad_018[412];
    bool m_bCheckCSSClasses;
    char pad_019[39];
};

class CFuncWater : public C_BaseModelEntity {
public:
    CBuoyancyHelper m_BuoyancyHelper;
};

class CWaterSplasher : public C_BaseModelEntity {
public:
    char pad_024[3720];
};

class C_InfoInstructorHintHostageRescueZone : public C_PointEntity {
public:
    char pad_017[1544];
};

class C_CSObserverPawn : public C_CSPlayerPawnBase {
public:
    // CEntityHandle m_hDetectParentChange;
    char pad_042[5720];
};

class CCSWeaponBaseVData {
public:
    char pad_00[1088];
    CSWeaponType m_WeaponType;
    CSWeaponCategory m_WeaponCategory;
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCNmSkeleton > > m_szAnimSkeleton;
    char pad_01[224];
    Vector m_vecMuzzlePos0;
    Vector m_vecMuzzlePos1;
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szTracerParticle;
    char pad_02[224];
    gear_slot_t m_GearSlot;
    int32_t m_GearSlotPosition;
    loadout_slot_t m_DefaultLoadoutSlot;
    int32_t m_nPrice;
    int32_t m_nKillAward;
    int32_t m_nPrimaryReserveAmmoMax;
    int32_t m_nSecondaryReserveAmmoMax;
    bool m_bMeleeWeapon;
    bool m_bHasBurstMode;
    bool m_bIsRevolver;
    bool m_bCannotShootUnderwater;
    // CGlobalSymbol m_szName;
    char pad_03[8];
    CSWeaponSilencerType m_eSilencerType;
    int32_t m_nCrosshairMinDistance;
    int32_t m_nCrosshairDeltaDistance;
    bool m_bIsFullAuto;
    int32_t m_nNumBullets;
    bool m_bReloadsSingleShells;
    CFiringModeFloat m_flCycleTime;
    CFiringModeFloat m_flMaxSpeed;
    CFiringModeFloat m_flSpread;
    CFiringModeFloat m_flInaccuracyCrouch;
    CFiringModeFloat m_flInaccuracyStand;
    CFiringModeFloat m_flInaccuracyJump;
    CFiringModeFloat m_flInaccuracyLand;
    CFiringModeFloat m_flInaccuracyLadder;
    CFiringModeFloat m_flInaccuracyFire;
    CFiringModeFloat m_flInaccuracyMove;
    CFiringModeFloat m_flRecoilAngle;
    CFiringModeFloat m_flRecoilAngleVariance;
    CFiringModeFloat m_flRecoilMagnitude;
    CFiringModeFloat m_flRecoilMagnitudeVariance;
    CFiringModeInt m_nTracerFrequency;
    float m_flInaccuracyJumpInitial;
    float m_flInaccuracyJumpApex;
    float m_flInaccuracyReload;
    float m_flDeployDuration;
    float m_flDisallowAttackAfterReloadStartDuration;
    int32_t m_nBurstShotCount;
    bool m_bAllowBurstHolster;
    int32_t m_nRecoilSeed;
    int32_t m_nSpreadSeed;
    float m_flAttackMovespeedFactor;
    float m_flInaccuracyPitchShift;
    float m_flInaccuracyAltSoundThreshold;
    // CUtlString m_szUseRadioSubtitle;
    char pad_04[8];
    bool m_bUnzoomsAfterShot;
    bool m_bHideViewModelWhenZoomed;
    int32_t m_nZoomLevels;
    int32_t m_nZoomFOV1;
    int32_t m_nZoomFOV2;
    float m_flZoomTime0;
    float m_flZoomTime1;
    float m_flZoomTime2;
    float m_flIronSightPullUpSpeed;
    float m_flIronSightPutDownSpeed;
    float m_flIronSightFOV;
    float m_flIronSightPivotForward;
    float m_flIronSightLooseness;
    int32_t m_nDamage;
    float m_flHeadshotMultiplier;
    float m_flArmorRatio;
    float m_flPenetration;
    float m_flRange;
    float m_flRangeModifier;
    float m_flFlinchVelocityModifierLarge;
    float m_flFlinchVelocityModifierSmall;
    float m_flRecoveryTimeCrouch;
    float m_flRecoveryTimeStand;
    float m_flRecoveryTimeCrouchFinal;
    float m_flRecoveryTimeStandFinal;
    int32_t m_nRecoveryTransitionStartBullet;
    int32_t m_nRecoveryTransitionEndBullet;
    float m_flThrowVelocity;
    Vector m_vSmokeColor;
    // CGlobalSymbol m_szAnimClass;
    char pad_05[56];
};

class C_PlayerSprayDecal : public C_ModelPointEntity {
public:
    int32_t m_nUniqueID;
    uint32_t m_unAccountID;
    uint32_t m_unTraceID;
    uint32_t m_rtGcTime;
    Vector m_vecEndPos;
    Vector m_vecStart;
    Vector m_vecLeft;
    Vector m_vecNormal;
    int32_t m_nPlayer;
    int32_t m_nEntity;
    int32_t m_nHitbox;
    float m_flCreationTime;
    int32_t m_nTintID;
    uint8_t m_nVersion;
    uint8_t m_ubSignature[128];
    CPlayerSprayDecalRenderHelper m_SprayRenderHelper;
};

class C_FuncConveyor : public C_BaseModelEntity {
public:
    char pad_024[8];
    Vector m_vecMoveDirEntitySpace;
    float m_flTargetSpeed;
    GameTick_t m_nTransitionStartTick;
    int32_t m_nTransitionDurationTicks;
    float m_flTransitionStartSpeed;
    // C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hConveyorModels;
    char pad_025[28];
    float m_flCurrentConveyorOffset;
    float m_flCurrentConveyorSpeed;
};

class CGrenadeTracer : public C_BaseModelEntity {
public:
    char pad_024[24];
    float m_flTracerDuration;
    GrenadeType_t m_nType;
    char pad_025[1144];
};

class C_Inferno : public C_BaseModelEntity {
public:
    ParticleIndex_t m_nfxFireDamageEffect;
    // CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoPointsSnapshot;
    // CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoFillerPointsSnapshot;
    // CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoOutlinePointsSnapshot;
    // CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoClimbingOutlinePointsSnapshot;
    // CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoDecalsSnapshot;
    char pad_024[44];
    Vector m_firePositions;
    char pad_025[756];
    Vector m_fireParentPositions;
    char pad_026[756];
    bool m_bFireIsBurning[64];
    Vector m_BurnNormal;
    char pad_027[756];
    int32_t m_fireCount;
    int32_t m_nInfernoType;
    float m_nFireLifetime;
    bool m_bInPostEffectTime;
    int32_t m_lastFireCount;
    int32_t m_nFireEffectTickBegin;
    char pad_028[27648];
    int32_t m_drawableCount;
    bool m_blosCheck;
    int32_t m_nlosperiod;
    float m_maxFireHalfWidth;
    float m_maxFireHeight;
    Vector m_minBounds;
    Vector m_maxBounds;
    float m_flLastGrassBurnThink;
    char pad_029[16];
};

class C_FireCrackerBlast : public C_Inferno {
public:
    char pad_030[33936];
};

class C_BarnLight : public C_BaseModelEntity {
public:
    bool m_bEnabled;
    int32_t m_nColorMode;
    // Color m_Color;
    char pad_024[4];
    float m_flColorTemperature;
    float m_flBrightness;
    float m_flBrightnessScale;
    int32_t m_nDirectLight;
    int32_t m_nBakedShadowIndex;
    int32_t m_nLightPathUniqueId;
    int32_t m_nLightMapUniqueId;
    int32_t m_nLuminaireShape;
    float m_flLuminaireSize;
    float m_flLuminaireAnisotropy;
    // CUtlString m_LightStyleString;
    GameTime_t m_flLightStyleStartTime;
    // C_NetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings;
    // C_NetworkUtlVectorBase< CUtlString > m_LightStyleEvents;
    // C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_LightStyleTargets;
    char pad_025[39];
    CEntityIOOutput m_StyleEvent;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie;
    char pad_026[80];
    float m_flShape;
    float m_flSoftX;
    float m_flSoftY;
    float m_flSkirt;
    float m_flSkirtNear;
    Vector m_vSizeParams;
    float m_flRange;
    Vector m_vShear;
    int32_t m_nBakeSpecularToCubemaps;
    Vector m_vBakeSpecularToCubemapsSize;
    int32_t m_nCastShadows;
    int32_t m_nShadowMapSize;
    int32_t m_nShadowPriority;
    bool m_bContactShadow;
    bool m_bForceShadowsEnabled;
    int32_t m_nBounceLight;
    float m_flBounceScale;
    bool m_bDynamicBounce;
    float m_flMinRoughness;
    Vector m_vAlternateColor;
    float m_fAlternateColorBrightness;
    int32_t m_nFog;
    float m_flFogStrength;
    int32_t m_nFogShadows;
    float m_flFogScale;
    bool m_bFogMixedShadows;
    float m_flFadeSizeStart;
    float m_flFadeSizeEnd;
    float m_flShadowFadeSizeStart;
    float m_flShadowFadeSizeEnd;
    bool m_bPrecomputedFieldsValid;
    Vector m_vPrecomputedBoundsMins;
    Vector m_vPrecomputedBoundsMaxs;
    Vector m_vPrecomputedOBBOrigin;
    QAngle m_vPrecomputedOBBAngles;
    Vector m_vPrecomputedOBBExtent;
    int32_t m_nPrecomputedSubFrusta;
    Vector m_vPrecomputedOBBOrigin0;
    QAngle m_vPrecomputedOBBAngles0;
    Vector m_vPrecomputedOBBExtent0;
    Vector m_vPrecomputedOBBOrigin1;
    QAngle m_vPrecomputedOBBAngles1;
    Vector m_vPrecomputedOBBExtent1;
    Vector m_vPrecomputedOBBOrigin2;
    QAngle m_vPrecomputedOBBAngles2;
    Vector m_vPrecomputedOBBExtent2;
    Vector m_vPrecomputedOBBOrigin3;
    QAngle m_vPrecomputedOBBAngles3;
    Vector m_vPrecomputedOBBExtent3;
    Vector m_vPrecomputedOBBOrigin4;
    QAngle m_vPrecomputedOBBAngles4;
    Vector m_vPrecomputedOBBExtent4;
    Vector m_vPrecomputedOBBOrigin5;
    QAngle m_vPrecomputedOBBAngles5;
    Vector m_vPrecomputedOBBExtent5;
    char pad_027[64];
    bool m_bInitialBoneSetup;
    // C_NetworkUtlVectorBase< uint16 > m_VisClusters;
    char pad_028[39];
};

class C_RectLight : public C_BarnLight {
public:
    bool m_bShowLight;
    char pad_029[7];
};

class C_OmniLight : public C_BarnLight {
public:
    float m_flInnerAngle;
    float m_flOuterAngle;
    bool m_bShowLight;
    char pad_029[7];
};

class CMapInfo : public C_PointEntity {
public:
    int32_t m_iBuyingStatus;
    float m_flBombRadius;
    int32_t m_iPetPopulation;
    bool m_bUseNormalSpawnsForDM;
    bool m_bDisableAutoGeneratedDMSpawns;
    float m_flBotMaxVisionDistance;
    int32_t m_iHostageCount;
    bool m_bFadePlayerVisibilityFarZ;
    bool m_bRainTraceToSkyEnabled;
    float m_flEnvRainStrength;
    float m_flEnvPuddleRippleStrength;
    float m_flEnvPuddleRippleDirection;
    float m_flEnvWetnessCoverage;
    float m_flEnvWetnessDryingAmount;
};

class C_CSTeam : public C_Team {
public:
    char m_szTeamMatchStat[512];
    int32_t m_numMapVictories;
    bool m_bSurrendered;
    int32_t m_scoreFirstHalf;
    int32_t m_scoreSecondHalf;
    int32_t m_scoreOvertime;
    char m_szClanTeamname[129];
    uint32_t m_iClanID;
    char m_szTeamFlagImage[8];
    char m_szTeamLogoImage[8];
    char pad_018[4];
};

class CInfoDynamicShadowHint : public C_PointEntity {
public:
    bool m_bDisabled;
    float m_flRange;
    int32_t m_nImportance;
    int32_t m_nLightChoice;
    // CHandle< C_BaseEntity > m_hLight;
    char pad_017[8];
};

class CInfoDynamicShadowHintBox : public CInfoDynamicShadowHint {
public:
    Vector m_vBoxMins;
    Vector m_vBoxMaxs;
};

class C_EnvSky : public C_BaseModelEntity {
public:
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly;
    char pad_024[16];
    bool m_bStartDisabled;
    // Color m_vTintColor;
    // Color m_vTintColorLightingOnly;
    char pad_025[8];
    float m_flBrightnessScale;
    int32_t m_nFogType;
    float m_flFogMinStart;
    float m_flFogMinEnd;
    float m_flFogMaxStart;
    float m_flFogMaxEnd;
    bool m_bEnabled;
    char pad_026[43];
};

class C_TonemapController2Alias_env_tonemap_controller2 : public C_TonemapController2 {
public:
    char pad_017[1568];
};

class C_LightEntity : public C_BaseModelEntity {
public:
    CLightComponent* m_CLightComponent;
};

class C_LightSpotEntity : public C_LightEntity {
public:
    char pad_024[3728];
};

class C_LightOrthoEntity : public C_LightEntity {
public:
    char pad_024[3728];
};

class C_LightDirectionalEntity : public C_LightEntity {
public:
    char pad_024[3728];
};

class C_LightEnvironmentEntity : public C_LightDirectionalEntity {
public:
    char pad_025[3728];
};

class CTriggerFan : public C_BaseTrigger {
public:
    Vector m_vFanOriginOffset;
    Vector m_vDirection;
    bool m_bPushTowardsInfoTarget;
    bool m_bPushAwayFromInfoTarget;
    // Quaternion m_qNoiseDelta;
    // CHandle< CInfoFan > m_hInfoFan;
    char pad_027[32];
    float m_flForce;
    bool m_bFalloff;
    CountdownTimer m_RampTimer;
    char pad_028[8];
};

class CEnvSoundscapeProxyAlias_snd_soundscape_proxy : public CEnvSoundscapeProxy {
public:
    char pad_021[1696];
};

class CEnvSoundscapeAlias_snd_soundscape : public CEnvSoundscape {
public:
    char pad_020[1688];
};

class CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable : public CEnvSoundscapeTriggerable {
public:
    char pad_021[1688];
};

class CFilterName : public CBaseFilter {
public:
    // CUtlSymbolLarge m_iFilterName;
    char pad_017[1608];
};

class CFilterModel : public CBaseFilter {
public:
    // CUtlSymbolLarge m_iFilterModel;
    char pad_017[1608];
};

class CFilterTeam : public CBaseFilter {
public:
    int32_t m_iFilterTeam;
    char pad_017[4];
};

class CFilterMassGreater : public CBaseFilter {
public:
    float m_fFilterMass;
    char pad_017[4];
};

class FilterDamageType : public CBaseFilter {
public:
    int32_t m_iDamageType;
    char pad_017[4];
};

class FilterHealth : public CBaseFilter {
public:
    bool m_bAdrenalineActive;
    int32_t m_iHealthMin;
    int32_t m_iHealthMax;
    char pad_017[4];
};

class CFilterAttributeInt : public CBaseFilter {
public:
    // CUtlSymbolLarge m_sAttributeName;
    char pad_017[1608];
};

class C_ParticleSystem : public C_BaseModelEntity {
public:
    char m_szSnapshotFileName[512];
    bool m_bActive;
    bool m_bFrozen;
    float m_flFreezeTransitionDuration;
    int32_t m_nStopType;
    bool m_bAnimateDuringGameplayPause;
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex;
    GameTime_t m_flStartTime;
    float m_flPreSimTime;
    Vector m_vServerControlPoints;
    char pad_024[36];
    uint8_t m_iServerControlPointAssignments[4];
    // CHandle< C_BaseEntity >[64] m_hControlPointEnts;
    char pad_025[256];
    bool m_bNoSave;
    bool m_bNoFreeze;
    bool m_bNoRamp;
    bool m_bStartActive;
    // CUtlSymbolLarge m_iszEffectName;
    // CUtlSymbolLarge[64] m_iszControlPointNames;
    char pad_026[520];
    int32_t m_nDataCP;
    Vector m_vecDataCPValue;
    int32_t m_nTintCP;
    // Color m_clrTint;
    char pad_027[36];
    bool m_bOldActive;
    bool m_bOldFrozen;
    char pad_028[22];
};

class C_TextureBasedAnimatable : public C_BaseModelEntity {
public:
    bool m_bLoop;
    float m_flFPS;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys;
    char pad_024[16];
    Vector m_vAnimationBoundsMin;
    Vector m_vAnimationBoundsMax;
    float m_flStartTime;
    float m_flStartFrame;
};

class C_World : public C_BaseModelEntity {
public:
    char pad_024[3720];
};

class CBaseProp : public CBaseAnimGraph {
public:
    bool m_bModelOverrodeBlockLOS;
    int32_t m_iShapeType;
    bool m_bConformToCollisionBounds;
    // CTransform m_mPreferredCatchTransform;
    char pad_030[47];
};

class C_BreakableProp : public CBaseProp {
public:
    CPropDataComponent m_CPropDataComponent;
    CEntityIOOutput m_OnStartDeath;
    CEntityIOOutput m_OnBreak;
    // CEntityOutputTemplate< float32, float32 > m_OnHealthChanged;
    CEntityIOOutput m_OnTakeDamage;
    float m_impactEnergyScale;
    int32_t m_iMinHealthDmg;
    float m_flPressureDelay;
    float m_flDefBurstScale;
    Vector m_vDefBurstOffset;
    // CHandle< C_BaseEntity > m_hBreaker;
    char pad_031[4];
    PerformanceMode_t m_PerformanceMode;
    GameTime_t m_flPreventDamageBeforeTime;
    BreakableContentsType_t m_BreakableContentsType;
    // CUtlString m_strBreakableContentsPropGroupOverride;
    // CUtlString m_strBreakableContentsParticleOverride;
    char pad_032[20];
    bool m_bHasBreakPiecesOrCommands;
    float m_explodeDamage;
    float m_explodeRadius;
    BaseExplosionTypes_t m_nExplosionType;
    float m_explosionDelay;
    // CUtlSymbolLarge m_explosionBuildupSound;
    // CUtlSymbolLarge m_explosionCustomEffect;
    // CUtlSymbolLarge m_explosionCustomSound;
    // CUtlSymbolLarge m_explosionModifier;
    // CHandle< C_BasePlayerPawn > m_hPhysicsAttacker;
    GameTime_t m_flLastPhysicsInfluenceTime;
    float m_flDefaultFadeScale;
    // CHandle< C_BaseEntity > m_hLastAttacker;
    char pad_033[4];
};

class C_DynamicProp : public C_BreakableProp {
public:
    bool m_bUseHitboxesForRenderBox;
    bool m_bUseAnimGraph;
    CEntityIOOutput m_pOutputAnimBegun;
    CEntityIOOutput m_pOutputAnimOver;
    CEntityIOOutput m_pOutputAnimLoopCycleOver;
    CEntityIOOutput m_OnAnimReachedStart;
    CEntityIOOutput m_OnAnimReachedEnd;
    // CUtlSymbolLarge m_iszIdleAnim;
    char pad_034[8];
    AnimLoopMode_t m_nIdleAnimLoopMode;
    bool m_bRandomizeCycle;
    bool m_bStartDisabled;
    bool m_bFiredStartEndOutput;
    bool m_bForceNpcExclude;
    bool m_bCreateNonSolid;
    bool m_bIsOverrideProp;
    int32_t m_iInitialGlowState;
    int32_t m_nGlowRange;
    int32_t m_nGlowRangeMin;
    // Color m_glowColor;
    char pad_035[4];
    int32_t m_nGlowTeam;
    int32_t m_iCachedFrameCount;
    Vector m_vecCachedRenderMins;
    Vector m_vecCachedRenderMaxs;
    char pad_036[12];
};

class C_DynamicPropAlias_dynamic_prop : public C_DynamicProp {
public:
    char pad_037[5024];
};

class C_DynamicPropAlias_prop_dynamic_override : public C_DynamicProp {
public:
    char pad_037[5024];
};

class C_DynamicPropAlias_cable_dynamic : public C_DynamicProp {
public:
    char pad_037[5024];
};

class C_ColorCorrectionVolume : public C_BaseTrigger {
public:
    float m_LastEnterWeight;
    GameTime_t m_LastEnterTime;
    float m_LastExitWeight;
    GameTime_t m_LastExitTime;
    bool m_bEnabled;
    float m_MaxWeight;
    float m_FadeDuration;
    float m_Weight;
    char m_lookupFilename[512];
    char pad_027[8];
};

class C_FuncMonitor : public C_FuncBrush {
public:
    // CUtlString m_targetCamera;
    char pad_025[8];
    int32_t m_nResolutionEnum;
    bool m_bRenderShadows;
    bool m_bUseUniqueColorTarget;
    // CUtlString m_brushModelName;
    // CHandle< C_BaseEntity > m_hTargetCamera;
    char pad_026[14];
    bool m_bEnabled;
    bool m_bDraw3DSkybox;
    char pad_027[1114];
};

class C_FuncMoveLinear : public C_BaseToggle {
public:
    char pad_025[3720];
};

class C_FuncMover : public C_BaseToggle {
public:
    char pad_025[3720];
};

class C_PhysMagnet : public CBaseAnimGraph {
public:
    // CUtlVector< int32 > m_aAttachedObjectsFromServer;
    // CUtlVector< CHandle< C_BaseEntity > > m_aAttachedObjects;
    char pad_030[4504];
};

class C_PointCommentaryNode : public CBaseAnimGraph {
public:
    char pad_030[24];
    bool m_bActive;
    bool m_bWasActive;
    GameTime_t m_flEndTime;
    GameTime_t m_flStartTime;
    float m_flStartTimeInCommentary;
    // CUtlSymbolLarge m_iszCommentaryFile;
    // CUtlSymbolLarge m_iszTitle;
    // CUtlSymbolLarge m_iszSpeakers;
    char pad_031[24];
    int32_t m_iNodeNumber;
    int32_t m_iNodeNumberMax;
    bool m_bListenedTo;
    CSoundPatch* m_sndCommentary;
    // CHandle< C_BaseEntity > m_hViewPosition;
    char pad_032[4];
    bool m_bRestartAfterRestore;
    char pad_033[3];
};

class C_WaterBullet : public CBaseAnimGraph {
public:
    char pad_030[4456];
};

class C_BaseDoor : public C_BaseToggle {
public:
    bool m_bIsUsable;
    char pad_025[7];
};

class C_ClientRagdoll : public CBaseAnimGraph {
public:
    bool m_bFadeOut;
    bool m_bImportant;
    GameTime_t m_flEffectTime;
    GameTime_t m_gibDespawnTime;
    int32_t m_iCurrentFriction;
    int32_t m_iMinFriction;
    int32_t m_iMaxFriction;
    int32_t m_iFrictionAnimState;
    bool m_bReleaseRagdoll;
    AttachmentHandle_t m_iEyeAttachment;
    bool m_bFadingOut;
    float m_flScaleEnd[10];
    GameTime_t m_flScaleTimeStart;
    GameTime_t m_flScaleTimeEnd;
    char pad_030[36];
};

class C_Precipitation : public C_BaseTrigger {
public:
    float m_flDensity;
    char pad_027[12];
    float m_flParticleInnerDist;
    char* m_pParticleDef;
    TimedEvent m_tParticlePrecipTraceTimer;
    bool m_bActiveParticlePrecipEmitter[1];
    bool m_bParticlePrecipInitialized;
    bool m_bHasSimulatedSinceLastSceneObjectUpdate;
    int32_t m_nAvailableSheetSequencesMaxIndex;
};

class C_Fish : public CBaseAnimGraph {
public:
    Vector m_pos;
    Vector m_vel;
    QAngle m_angles;
    int32_t m_localLifeState;
    float m_deathDepth;
    float m_deathAngle;
    float m_buoyancy;
    CountdownTimer m_wiggleTimer;
    float m_wigglePhase;
    float m_wiggleRate;
    Vector m_actualPos;
    QAngle m_actualAngles;
    Vector m_poolOrigin;
    float m_waterLevel;
    bool m_gotUpdate;
    float m_x;
    float m_y;
    float m_z;
    float m_angle;
    float m_errorHistory[20];
    int32_t m_errorHistoryIndex;
    int32_t m_errorHistoryCount;
    float m_averageError;
};

class C_PhysicsProp : public C_BreakableProp {
public:
    bool m_bAwake;
    char pad_034[15];
};

class C_BasePropDoor : public C_DynamicProp {
public:
    char pad_037[16];
    DoorState_t m_eDoorState;
    bool m_modelChanged;
    bool m_bLocked;
    bool m_bNoNPCs;
    Vector m_closedPosition;
    QAngle m_closedAngles;
    // CHandle< C_BasePropDoor > m_hMaster;
    char pad_038[4];
    Vector m_vWhereToSetLightingOrigin;
};

class C_PropDoorRotating : public C_BasePropDoor {
public:
    char pad_039[5088];
};

class C_TriggerMultiple : public C_BaseTrigger {
public:
    char pad_027[3928];
};

class C_TriggerLerpObject : public C_BaseTrigger {
public:
    char pad_027[3928];
};

class C_TriggerPhysics : public C_BaseTrigger {
public:
    float m_gravityScale;
    float m_linearLimit;
    float m_linearDamping;
    float m_angularLimit;
    float m_angularDamping;
    float m_linearForce;
    float m_flFrequency;
    float m_flDampingRatio;
    Vector m_vecLinearForcePointAt;
    bool m_bCollapseToForcePoint;
    Vector m_vecLinearForcePointAtWorld;
    Vector m_vecLinearForceDirection;
    bool m_bConvertToDebrisWhenPossible;
    char pad_027[7];
};

class C_PhysPropClientside : public C_BreakableProp {
public:
    GameTime_t m_flTouchDelta;
    GameTime_t m_fDeathTime;
    Vector m_vecDamagePosition;
    Vector m_vecDamageDirection;
    DamageTypes_t m_nDamageType;
    char pad_034[12];
};

class C_RagdollProp : public CBaseAnimGraph {
public:
    // C_NetworkUtlVectorBase< bool > m_ragEnabled;
    // C_NetworkUtlVectorBase< Vector > m_ragPos;
    // C_NetworkUtlVectorBase< QAngle > m_ragAngles;
    char pad_030[80];
    float m_flBlendWeight;
    // CHandle< C_BaseEntity > m_hRagdollSource;
    AttachmentHandle_t m_iEyeAttachment;
    float m_flBlendWeightCurrent;
    // CUtlVector< int32 > m_parentPhysicsBoneIndices;
    // CUtlVector< int32 > m_worldSpaceBoneComputationOrder;
    char pad_031[48];
};

class C_LocalTempEntity : public CBaseAnimGraph {
public:
    int32_t flags;
    GameTime_t die;
    float m_flFrameMax;
    float x;
    float y;
    float fadeSpeed;
    float bounceFactor;
    int32_t hitSound;
    int32_t priority;
    Vector tentOffset;
    QAngle m_vecTempEntAngVelocity;
    int32_t tempent_renderamt;
    Vector m_vecNormal;
    float m_flSpriteScale;
    int32_t m_nFlickerFrame;
    float m_flFrameRate;
    float m_flFrame;
    char* m_pszImpactEffect;
    char* m_pszParticleEffect;
    bool m_bParticleCollision;
    int32_t m_iLastCollisionFrame;
    Vector m_vLastCollisionOrigin;
    Vector m_vecTempEntVelocity;
    Vector m_vecPrevAbsOrigin;
    Vector m_vecTempEntAcceleration;
};

class C_ShatterGlassShardPhysics : public C_PhysicsProp {
public:
    shard_model_desc_t m_ShardDesc;
    char pad_035[8];
};

class C_EconWearable : public C_EconEntity {
public:
    int32_t m_nForceSkin;
    bool m_bAlwaysAllow;
    char pad_038[3];
};

class C_BaseGrenade : public C_BaseFlex {
public:
    bool m_bHasWarnedAI;
    bool m_bIsSmokeGrenade;
    bool m_bIsLive;
    float m_DmgRadius;
    GameTime_t m_flDetonateTime;
    float m_flWarnAITime;
    float m_flDamage;
    // CUtlSymbolLarge m_iszBounceSound;
    // CUtlString m_ExplosionSound;
    // CHandle< C_CSPlayerPawn > m_hThrower;
    GameTime_t m_flNextAttack;
    // CHandle< C_CSPlayerPawn > m_hOriginalThrower;
    char pad_034[8];
};

class CFuncRetakeBarrier : public C_DynamicProp {
public:
    char pad_037[5056];
};

class CBombTarget : public C_BaseTrigger {
public:
    bool m_bBombPlantedHere;
    char pad_027[7];
};

class CHostageRescueZoneShim : public C_BaseTrigger {
public:
    char pad_027[3928];
};

class CHostageRescueZone : public CHostageRescueZoneShim {
public:
    char pad_028[3952];
};

class C_TriggerBuoyancy : public C_BaseTrigger {
public:
    CBuoyancyHelper m_BuoyancyHelper;
    float m_flFluidDensity;
    char pad_027[4];
};

class C_PhysicsPropMultiplayer : public C_PhysicsProp {
public:
    char pad_035[4832];
};

class C_FootstepControl : public C_BaseTrigger {
public:
    // CUtlSymbolLarge m_source;
    // CUtlSymbolLarge m_destination;
    char pad_027[3944];
};

class C_CS2WeaponModuleBase : public CBaseAnimGraph {
public:
    char pad_030[4464];
};

class C_StattrakModule : public C_CS2WeaponModuleBase {
public:
    bool m_bKnife;
    char pad_031[7];
};

class C_NametagModule : public C_CS2WeaponModuleBase {
public:
    // CUtlString m_strNametagString;
    char pad_031[4472];
};

class C_KeychainModule : public C_CS2WeaponModuleBase {
public:
    uint32_t m_nKeychainDefID;
    uint32_t m_nKeychainSeed;
};

class C_BaseCSGrenadeProjectile : public C_BaseGrenade {
public:
    Vector m_vInitialPosition;
    Vector m_vInitialVelocity;
    int32_t m_nBounces;
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nExplodeEffectIndex;
    char pad_035[12];
    int32_t m_nExplodeEffectTickBegin;
    Vector m_vecExplodeEffectOrigin;
    GameTime_t m_flSpawnTime;
    Vector vecLastTrailLinePos;
    GameTime_t flNextTrailLineTime;
    bool m_bExplodeEffectBegan;
    bool m_bCanCreateGrenadeTrail;
    ParticleIndex_t m_nSnapshotTrajectoryEffectIndex;
    // CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hSnapshotTrajectoryParticleSnapshot;
    // CUtlVector< Vector > m_arrTrajectoryTrailPoints;
    // CUtlVector< float32 > m_arrTrajectoryTrailPointCreationTimes;
    char pad_036[60];
    float m_flTrajectoryTrailEffectCreationTime;
    char pad_037[4];
};

class C_CSGO_PreviewModel : public C_BaseFlex {
public:
    // CUtlString m_defaultAnim;
    char pad_034[8];
    AnimLoopMode_t m_nDefaultAnimLoopMode;
    float m_flInitialModelScale;
    // CUtlString m_sInitialWeaponState;
    char pad_035[1280];
};

class C_CSGO_PreviewModelAlias_csgo_item_previewmodel : public C_CSGO_PreviewModel {
public:
    char pad_036[6240];
};

class C_WorldModelGloves : public CBaseAnimGraph {
public:
    char pad_030[4464];
};

class C_BulletHitModel {
public:
    // matrix3x4_t m_matLocal;
    char pad_00[4504];
    int32_t m_iBoneIndex;
    // CHandle< C_BaseEntity > m_hPlayerParent;
    char pad_01[4];
    bool m_bIsHit;
    float m_flTimeCreated;
    Vector m_vecStartPos;
    char pad_02[4];
};

class C_HostageCarriableProp : public CBaseAnimGraph {
public:
    char pad_030[4464];
};

class C_PlantedC4 : public CBaseAnimGraph {
public:
    char pad_030[8];
    bool m_bBombTicking;
    int32_t m_nBombSite;
    int32_t m_nSourceSoundscapeHash;
    EntitySpottedState_t m_entitySpottedState;
    GameTime_t m_flNextGlow;
    GameTime_t m_flNextBeep;
    GameTime_t m_flC4Blow;
    bool m_bCannotBeDefused;
    bool m_bHasExploded;
    float m_flTimerLength;
    bool m_bBeingDefused;
    float m_bTriggerWarning;
    float m_bExplodeWarning;
    bool m_bC4Activated;
    bool m_bTenSecWarning;
    float m_flDefuseLength;
    GameTime_t m_flDefuseCountDown;
    bool m_bBombDefused;
    // CHandle< C_CSPlayerPawn > m_hBombDefuser;
    C_AttributeContainer m_AttributeManager;
    // CHandle< C_Multimeter > m_hDefuserMultimeter;
    GameTime_t m_flNextRadarFlashTime;
    bool m_bRadarFlash;
    // CHandle< C_CSPlayerPawn > m_pBombDefuser;
    GameTime_t m_fLastDefuseTime;
    CBasePlayerController* m_pPredictionOwner;
    Vector m_vecC4ExplodeSpectatePos;
    QAngle m_vecC4ExplodeSpectateAng;
    float m_flC4ExplodeSpectateDuration;
    char pad_031[4];
};

class C_Multimeter : public CBaseAnimGraph {
public:
    // CHandle< C_PlantedC4 > m_hTargetC4;
    char pad_030[4472];
};

class C_Item : public C_EconEntity {
public:
    char m_pReticleHintTextName[256];
};

class C_LateUpdatedAnimating : public CBaseAnimGraph {
public:
    char pad_030[4608];
};

class C_CS2HudModelAddon : public C_LateUpdatedAnimating {
public:
    char pad_031[4624];
};

class C_CS2HudModelBase : public C_LateUpdatedAnimating {
public:
    char pad_031[4656];
};

class C_CS2HudModelWeapon : public C_CS2HudModelBase {
public:
    char pad_032[4736];
};

class C_CS2HudModelArms : public C_CS2HudModelBase {
public:
    char pad_032[4928];
};

class C_HEGrenadeProjectile : public C_BaseCSGrenadeProjectile {
public:
    char pad_038[5176];
};

class C_FlashbangProjectile : public C_BaseCSGrenadeProjectile {
public:
    char pad_038[5176];
};

class C_Chicken : public C_DynamicProp {
public:
    // CHandle< CBaseAnimGraph > m_hHolidayHatAddon;
    char pad_037[12];
    bool m_jumpedThisFrame;
    // CHandle< C_CSPlayerPawn > m_leader;
    C_AttributeContainer m_AttributeManager;
    bool m_bAttributesInitialized;
    ParticleIndex_t m_hWaterWakeParticles;
    bool m_bIsPreviewModel;
    char pad_038[15];
};

class C_MapPreviewParticleSystem : public C_ParticleSystem {
public:
    char pad_029[5176];
};

class C_EnvParticleGlow : public C_ParticleSystem {
public:
    float m_flAlphaScale;
    float m_flRadiusScale;
    float m_flSelfIllumScale;
    // Color m_ColorTint;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hTextureOverride;
    char pad_029[12];
};

class C_RagdollPropAttached : public C_RagdollProp {
public:
    uint32_t m_boneIndexAttached;
    uint32_t m_ragdollAttachedObjectIndex;
    Vector m_attachmentPointBoneSpace;
    Vector m_attachmentPointRagdollSpace;
    Vector m_vecOffset;
    float m_parentTime;
    bool m_bHasParent;
    char pad_032[7];
};

class C_CSWeaponBase : public C_BasePlayerWeapon {
public:
    char pad_039[80];
    WeaponGameplayAnimState m_iWeaponGameplayAnimState;
    GameTime_t m_flWeaponGameplayAnimStateTimestamp;
    GameTime_t m_flInspectCancelCompleteTime;
    bool m_bInspectPending;
    bool m_bInspectShouldLoop;
    char pad_040[40];
    float m_flCrosshairDistance;
    int32_t m_iAmmoLastCheck;
    int32_t m_nLastEmptySoundCmdNum;
    bool m_bFireOnEmpty;
    CEntityIOOutput m_OnPlayerPickup;
    CSWeaponMode m_weaponMode;
    float m_flTurningInaccuracyDelta;
    Vector m_vecTurningInaccuracyEyeDirLast;
    float m_flTurningInaccuracy;
    float m_fAccuracyPenalty;
    GameTime_t m_flLastAccuracyUpdateTime;
    float m_fAccuracySmoothedForZoom;
    int32_t m_iRecoilIndex;
    float m_flRecoilIndex;
    bool m_bBurstMode;
    GameTime_t m_flLastBurstModeChangeTime;
    GameTick_t m_nPostponeFireReadyTicks;
    float m_flPostponeFireReadyFrac;
    bool m_bInReload;
    char pad_041[2];
    GameTime_t m_flDroppedAtTime;
    bool m_bIsHauledBack;
    bool m_bSilencerOn;
    GameTime_t m_flTimeSilencerSwitchComplete;
    float m_flWeaponActionPlaybackRate;
    int32_t m_iOriginalTeamNumber;
    int32_t m_iMostRecentTeamNumber;
    bool m_bDroppedNearBuyZone;
    float m_flNextAttackRenderTimeOffset;
    char pad_042[152];
    bool m_bClearWeaponIdentifyingUGC;
    bool m_bVisualsDataSet;
    bool m_bUIWeapon;
    int32_t m_nCustomEconReloadEventId;
    GameTime_t m_nextPrevOwnerUseTime;
    // CHandle< C_CSPlayerPawn > m_hPrevOwner;
    GameTick_t m_nDropTick;
    bool m_bWasActiveWeaponWhenDropped;
    char pad_043[31];
    bool m_donated;
    GameTime_t m_fLastShotTime;
    bool m_bWasOwnedByCT;
    bool m_bWasOwnedByTerrorist;
    float m_flNextClientFireBulletTime;
    float m_flNextClientFireBulletTime_Repredict;
    char pad_044[108];
    C_IronSightController m_IronSightController;
    int32_t m_iIronSightMode;
    GameTime_t m_flLastLOSTraceFailureTime;
    char pad_045[92];
    float m_flWatTickOffset;
    GameTime_t m_flLastShakeTime;
    char pad_046[432];
};

class C_CSWeaponBaseGun : public C_CSWeaponBase {
public:
    int32_t m_zoomLevel;
    int32_t m_iBurstShotsRemaining;
    int32_t m_iSilencerBodygroup;
    char pad_047[12];
    int32_t m_silencedModelIndex;
    bool m_inPrecache;
    bool m_bNeedsBoltAction;
    int32_t m_nRevolverCylinderIdx;
    char pad_048[12];
};

class C_CSWeaponBaseShotgun : public C_CSWeaponBase {
public:
    char pad_047[8000];
};

class C_C4 : public C_CSWeaponBase {
public:
    ParticleIndex_t m_activeLightParticleIndex;
    C4LightEffect_t m_eActiveLightEffect;
    bool m_bStartedArming;
    GameTime_t m_fArmedTime;
    bool m_bBombPlacedAnimation;
    bool m_bIsPlantingViaUse;
    EntitySpottedState_t m_entitySpottedState;
    int32_t m_nSpotRules;
    bool m_bPlayedArmingBeeps[7];
    bool m_bBombPlanted;
    char pad_047[4];
};

class C_WeaponCZ75a : public C_CSWeaponBaseGun {
public:
    bool m_bMagazineRemoved;
    char pad_049[15];
};

class C_DEagle : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponElite : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponTaser : public C_CSWeaponBaseGun {
public:
    GameTime_t m_fFireTime;
    int32_t m_nLastAttackTick;
    char pad_049[8];
};

class C_Knife : public C_CSWeaponBase {
public:
    bool m_bFirstAttack;
    char pad_047[15];
};

class C_MolotovProjectile : public C_BaseCSGrenadeProjectile {
public:
    bool m_bIsIncGrenade;
    char pad_038[39];
};

class C_DecoyProjectile : public C_BaseCSGrenadeProjectile {
public:
    int32_t m_nDecoyShotTick;
    int32_t m_nClientLastKnownDecoyShotTick;
    GameTime_t m_flTimeParticleEffectSpawn;
    char pad_038[4];
};

class C_SmokeGrenadeProjectile : public C_BaseCSGrenadeProjectile {
public:
    char pad_038[24];
    int32_t m_nSmokeEffectTickBegin;
    bool m_bDidSmokeEffect;
    int32_t m_nRandomSeed;
    Vector m_vSmokeColor;
    Vector m_vSmokeDetonationPos;
    // C_NetworkUtlVectorBase< uint8 > m_VoxelFrameData;
    char pad_039[28];
    int32_t m_nVoxelFrameDataSize;
    int32_t m_nVoxelUpdate;
    bool m_bSmokeVolumeDataReceived;
    bool m_bSmokeEffectSpawned;
    char pad_040[342];
};

class C_BaseCSGrenade : public C_CSWeaponBase {
public:
    bool m_bClientPredictDelete;
    bool m_bRedraw;
    bool m_bIsHeldByPlayer;
    bool m_bPinPulled;
    bool m_bJumpThrow;
    bool m_bThrowAnimating;
    GameTime_t m_fThrowTime;
    char pad_047[4];
    float m_flThrowStrength;
    GameTime_t m_fDropTime;
    GameTime_t m_fPinPullTime;
    bool m_bJustPulledPin;
    GameTick_t m_nNextHoldTick;
    float m_flNextHoldFrac;
    // CHandle< C_CSWeaponBase > m_hSwitchToWeaponAfterThrow;
    char pad_048[36];
};

class C_WeaponBaseItem : public C_CSWeaponBase {
public:
    bool m_bSequenceInProgress;
    bool m_bRedraw;
    char pad_047[14];
};

class C_ItemDogtags : public C_Item {
public:
    // CHandle< C_CSPlayerPawn > m_OwningPlayer;
    // CHandle< C_CSPlayerPawn > m_KillingPlayer;
    char pad_038[6600];
};

class C_Item_Healthshot : public C_WeaponBaseItem {
public:
    char pad_048[8016];
};

class C_Hostage : public C_BaseCombatCharacter {
public:
    EntitySpottedState_t m_entitySpottedState;
    // CHandle< C_BaseEntity > m_leader;
    CountdownTimer m_reuseTimer;
    Vector m_vel;
    bool m_isRescued;
    bool m_jumpedThisFrame;
    int32_t m_nHostageState;
    bool m_bHandsHaveBeenCut;
    // CHandle< C_CSPlayerPawn > m_hHostageGrabber;
    GameTime_t m_fLastGrabTime;
    Vector m_vecGrabbedPos;
    GameTime_t m_flRescueStartTime;
    GameTime_t m_flGrabSuccessTime;
    GameTime_t m_flDropStartTime;
    GameTime_t m_flDeadOrRescuedTime;
    CountdownTimer m_blinkTimer;
    Vector m_lookAt;
    CountdownTimer m_lookAroundTimer;
    bool m_isInit;
    AttachmentHandle_t m_eyeAttachment;
    AttachmentHandle_t m_chestAttachment;
    CBasePlayerController* m_pPredictionOwner;
    GameTime_t m_fNewestAlphaThinkTime;
    char pad_035[4];
};

class C_NetTestBaseCombatCharacter : public C_BaseCombatCharacter {
public:
    char pad_035[5080];
};

class C_AK47 : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponAug : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponAWP : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponBizon : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponFamas : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponFiveSeven : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponG3SG1 : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponGalilAR : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponGlock : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponHKP2000 : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponUSPSilencer : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponM4A1 : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponM4A1Silencer : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponMAC10 : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponMag7 : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponMP5SD : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponMP7 : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponMP9 : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponNegev : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponP250 : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponP90 : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponSCAR20 : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponSG556 : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponSSG08 : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponTec9 : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponUMP45 : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponM249 : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponRevolver : public C_CSWeaponBaseGun {
public:
    char pad_049[8048];
};

class C_WeaponNOVA : public C_CSWeaponBaseShotgun {
public:
    char pad_048[8000];
};

class C_WeaponSawedoff : public C_CSWeaponBaseShotgun {
public:
    char pad_048[8000];
};

class C_WeaponXM1014 : public C_CSWeaponBaseShotgun {
public:
    char pad_048[8000];
};

class C_MolotovGrenade : public C_BaseCSGrenade {
public:
    char pad_049[8192];
};

class C_IncendiaryGrenade : public C_MolotovGrenade {
public:
    char pad_050[8192];
};

class C_DecoyGrenade : public C_BaseCSGrenade {
public:
    char pad_049[8192];
};

class C_Flashbang : public C_BaseCSGrenade {
public:
    char pad_049[8192];
};

class C_HEGrenade : public C_BaseCSGrenade {
public:
    char pad_049[8192];
};

class C_SmokeGrenade : public C_BaseCSGrenade {
public:
    char pad_049[8192];
};

class C_CSGO_PreviewPlayer : public C_CSPlayerPawn {
public:
    // CGlobalSymbol m_animgraphCharacterModeString;
    char pad_065[8];
    float m_flInitialModelScale;
    char pad_066[164];
};

class C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel : public C_CSGO_PreviewPlayer {
public:
    char pad_067[16288];
};

class C_CSGO_TeamPreviewModel : public C_CSGO_PreviewPlayer {
public:
    char pad_067[16288];
};

