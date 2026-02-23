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


_enum PulseMethodCallMode_t : uint32_t {
    SYNC_WAIT_FOR_COMPLETION = 0,
    ASYNC_FIRE_AND_FORGET = 1,
};

_enum PulseCursorCancelPriority_t : uint32_t {
    None = 0,
    CancelOnSucceeded = 1,
    SoftCancel = 2,
    HardCancel = 3,
};

_enum PulseBestOutflowRules_t : uint32_t {
    SORT_BY_NUMBER_OF_VALID_CRITERIA = 0,
    SORT_BY_OUTFLOW_INDEX = 1,
};

/// CompositeMaterialMatchFilterType_t
_enum CompositeMaterialMatchFilterType_t0 : uint32_t {
    MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0,
    MATCH_FILTER_MATERIAL_SHADER = 1,
    MATCH_FILTER_MATERIAL_NAME_SUBSTR = 2,
    MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 3,
    MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 4,
    MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 5,
};

/// CompositeMaterialVarSystemVar_t
_enum CompositeMaterialVarSystemVar_t0 : uint32_t {
    COMPMATSYSVAR_COMPOSITETIME = 0,
    COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 1,
};

/// CompositeMaterialInputLooseVariableType_t
_enum CompositeMaterialInputLooseVariableType_t0 : uint32_t {
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

/// CompositeMaterialInputTextureType_t
_enum CompositeMaterialInputTextureType_t0 : uint32_t {
    INPUT_TEXTURE_TYPE_DEFAULT = 0,
    INPUT_TEXTURE_TYPE_NORMALMAP = 1,
    INPUT_TEXTURE_TYPE_COLOR = 2,
    INPUT_TEXTURE_TYPE_MASKS = 3,
    INPUT_TEXTURE_TYPE_ROUGHNESS = 4,
    INPUT_TEXTURE_TYPE_PEARLESCENCE_MASK = 5,
    INPUT_TEXTURE_TYPE_AO = 6,
    INPUT_TEXTURE_TYPE_POSITION = 7,
};

/// CompMatPropertyMutatorType_t
_enum CompMatPropertyMutatorType_t0 : uint32_t {
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

/// CompMatPropertyMutatorConditionType_t
_enum CompMatPropertyMutatorConditionType_t0 : uint32_t {
    COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0,
    COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 1,
    COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 2,
};

/// CompositeMaterialInputContainerSourceType_t
_enum CompositeMaterialInputContainerSourceType_t0 : uint32_t {
    CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0,
    CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 1,
    CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 2,
    CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 3,
    CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 4,
    CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 5,
};

/// C_BaseCombatCharacter::WaterWakeMode_t
_enum C_BaseCombatCharacter__WaterWakeMode_t : uint32_t {
    WATER_WAKE_NONE = 0,
    WATER_WAKE_IDLE = 1,
    WATER_WAKE_WALKING = 2,
    WATER_WAKE_RUNNING = 3,
    WATER_WAKE_WATER_OVERHEAD = 4,
};

/// InventoryNodeType_t
_enum InventoryNodeType_t0 : uint32_t {
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


class __declspec(align(1)) CEntityComponent {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(1)) CScriptComponent : public CEntityComponent {
public:
    // CUtlSymbolLarge m_scriptClassName;
    char pad_01[48];
}; // size: 0x38

class __declspec(align(8)) CEntityInstance {
public:
    // CUtlSymbolLarge m_iszPrivateVScripts;
    char pad_00[16];
    CEntityIdentity* m_pEntity; // 0x10
    char pad_01[24];
    CScriptComponent* m_CScriptComponent; // 0x30
}; // size: 0x38

class __declspec(align(8)) C_BaseEntity : public CEntityInstance {
public:
    CBodyComponent* m_CBodyComponent; // 0x38
    CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x40
    char pad_02[288];
    GameTick_t m_nLastThinkTick; // 0x330
    CGameSceneNode* m_pGameSceneNode; // 0x338
    CRenderComponent* m_pRenderComponent; // 0x340
    CCollisionProperty* m_pCollision; // 0x348
    int32_t m_iMaxHealth; // 0x350
    int32_t m_iHealth; // 0x354
    float m_flDamageAccumulator; // 0x358
    uint8_t m_lifeState; // 0x35c
    bool m_bTakesDamage; // 0x35d
    TakeDamageFlags_t m_nTakeDamageFlags; // 0x360
    EntityPlatformTypes_t m_nPlatformType; // 0x368
    uint8_t m_ubInterpolationFrame; // 0x369
    // CHandle< C_BaseEntity > m_hSceneObjectController;
    char pad_03[4];
    int32_t m_nNoInterpolationTick; // 0x370
    int32_t m_nVisibilityNoInterpolationTick; // 0x374
    float m_flProxyRandomValue; // 0x378
    int32_t m_iEFlags; // 0x37c
    uint8_t m_nWaterType; // 0x380
    bool m_bInterpolateEvenWithNoModel; // 0x381
    bool m_bPredictionEligible; // 0x382
    bool m_bApplyLayerMatchIDToModel; // 0x383
    // CUtlStringToken m_tokLayerMatchID;
    // CUtlStringToken m_nSubclassID;
    char pad_04[20];
    int32_t m_nSimulationTick; // 0x398
    int32_t m_iCurrentThinkContext; // 0x39c
    // CUtlVector< thinkfunc_t > m_aThinkFunctions;
    char pad_05[24];
    bool m_bDisabledContextThinks; // 0x3b8
    float m_flAnimTime; // 0x3bc
    float m_flSimulationTime; // 0x3c0
    uint8_t m_nSceneObjectOverrideFlags; // 0x3c4
    bool m_bHasSuccessfullyInterpolated; // 0x3c5
    bool m_bHasAddedVarsToInterpolation; // 0x3c6
    bool m_bRenderEvenWhenNotSuccessfullyInterpolated; // 0x3c7
    int32_t m_nInterpolationLatchDirtyFlags[2]; // 0x3c8
    uint16_t m_ListEntry[11]; // 0x3d0
    GameTime_t m_flCreateTime; // 0x3e8
    float m_flSpeed; // 0x3ec
    uint16_t m_EntClientFlags; // 0x3f0
    bool m_bClientSideRagdoll; // 0x3f2
    uint8_t m_iTeamNum; // 0x3f3
    uint32_t m_spawnflags; // 0x3f4
    GameTick_t m_nNextThinkTick; // 0x3f8
    char pad_06[4];
    uint32_t m_fFlags; // 0x400
    Vector m_vecAbsVelocity; // 0x404
    CNetworkVelocityVector m_vecServerVelocity; // 0x410
    CNetworkVelocityVector m_vecVelocity; // 0x438
    char pad_07[184];
    Vector m_vecBaseVelocity; // 0x518
    // CHandle< C_BaseEntity > m_hEffectEntity;
    // CHandle< C_BaseEntity > m_hOwnerEntity;
    char pad_08[8];
    MoveCollide_t m_MoveCollide; // 0x52c
    MoveType_t m_MoveType; // 0x52d
    MoveType_t m_nActualMoveType; // 0x52e
    float m_flWaterLevel; // 0x530
    uint32_t m_fEffects; // 0x534
    // CHandle< C_BaseEntity > m_hGroundEntity;
    char pad_09[4];
    int32_t m_nGroundBodyIndex; // 0x53c
    float m_flFriction; // 0x540
    float m_flElasticity; // 0x544
    float m_flGravityScale; // 0x548
    float m_flTimeScale; // 0x54c
    bool m_bAnimatedEveryTick; // 0x550
    bool m_bGravityDisabled; // 0x551
    GameTime_t m_flNavIgnoreUntilTime; // 0x554
    uint16_t m_hThink; // 0x558
    char pad_010[14];
    uint8_t m_fBBoxVisFlags; // 0x568
    float m_flActualGravityScale; // 0x56c
    bool m_bGravityActuallyDisabled; // 0x570
    bool m_bPredictable; // 0x571
    bool m_bRenderWithViewModels; // 0x572
    int32_t m_nFirstPredictableCommand; // 0x574
    int32_t m_nLastPredictableCommand; // 0x578
    // CHandle< C_BaseEntity > m_hOldMoveParent;
    char pad_011[4];
    CParticleProperty m_Particles; // 0x580
    char pad_012[8];
    QAngle m_vecAngVelocity; // 0x5b0
    int32_t m_DataChangeEventRef; // 0x5bc
    // CUtlVector< CEntityHandle > m_dependencies;
    char pad_013[24];
    int32_t m_nCreationTick; // 0x5d8
    char pad_014[13];
    bool m_bAnimTimeChanged; // 0x5e9
    bool m_bSimulationTimeChanged; // 0x5ea
    // CUtlString m_sUniqueHammerID;
    char pad_015[20];
    BloodType m_nBloodType; // 0x600
    char pad_016[4];
}; // size: 0x608

class __declspec(align(4)) CountdownTimer {
public:
    char pad_00[8];
    float m_duration; // 0x8
    GameTime_t m_timestamp; // 0xc
    float m_timescale; // 0x10
    // WorldGroupId_t m_nWorldGroupId;
    char pad_01[4];
}; // size: 0x18

class __declspec(align(1)) CPulseExecCursor {
public:
    char pad_00[208];
}; // size: 0xd0

class __declspec(align(8)) CPulse_BlackboardReference {
public:
    // CStrongHandle< InfoForResourceTypeIPulseGraphDef > m_hBlackboardResource;
    // PulseSymbol_t m_BlackboardResource;
    char pad_00[24];
    PulseDocNodeID_t m_nNodeID; // 0x18
    // CGlobalSymbol m_NodeName;
    char pad_01[12];
}; // size: 0x28

class __declspec(align(8)) CPulse_InvokeBinding {
public:
    PulseRegisterMap_t m_RegisterMap; // 0x0
    // PulseSymbol_t m_FuncName;
    char pad_00[16];
    PulseRuntimeCellIndex_t m_nCellIndex; // 0x40
    PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x44
    int32_t m_nSrcInstruction; // 0x48
    char pad_01[100];
}; // size: 0xb0

class __declspec(align(8)) CPulse_CallInfo {
public:
    // PulseSymbol_t m_PortName;
    char pad_00[16];
    PulseDocNodeID_t m_nEditorNodeID; // 0x10
    char pad_01[4];
    PulseRegisterMap_t m_RegisterMap; // 0x18
    PulseDocNodeID_t m_CallMethodID; // 0x48
    PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x4c
    int32_t m_nSrcInstruction; // 0x50
    char pad_02[4];
}; // size: 0x58

class __declspec(align(8)) CPulseCell_Base {
public:
    char pad_00[8];
    PulseDocNodeID_t m_nEditorNodeID; // 0x8
    char pad_01[60];
}; // size: 0x48

class __declspec(align(8)) CPulseGraphDef {
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
}; // size: 0x198

class __declspec(align(1)) CBasePulseGraphInstance {
public:
    char pad_00[280];
}; // size: 0x118

class __declspec(align(1)) CPulseArraylib {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) CPulseMathlib {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) CPulseTestScriptLib {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(4)) CPulse_OutflowConnection {
public:
    // PulseSymbol_t m_SourceOutflowName;
    char pad_00[16];
    PulseRuntimeChunkIndex_t m_nDestChunk; // 0x10
    int32_t m_nInstruction; // 0x14
    PulseRegisterMap_t m_OutflowRegisterMap; // 0x18
}; // size: 0x48

class __declspec(align(1)) CPulse_ResumePoint {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(1)) SignatureOutflow_Continue {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(1)) SignatureOutflow_Resume {
public:
    char pad_00[72];
}; // size: 0x48

/// PulseNodeDynamicOutflows_t::DynamicOutflow_t
class __declspec(align(8)) PulseNodeDynamicOutflows_t__DynamicOutflow_t {
public:
    // CGlobalSymbol m_OutflowID;
    char pad_00[8];
    CPulse_OutflowConnection m_Connection; // 0x8
}; // size: 0x50

class __declspec(align(8)) PulseNodeDynamicOutflows_t {
public:
    // CUtlVector< PulseNodeDynamicOutflows_t::DynamicOutflow_t > m_Outflows;
    char pad_00[24];
}; // size: 0x18

class __declspec(align(8)) CPulseCell_BaseFlow {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CPulseCell_BaseRequirement {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CPulseCell_Inflow_BaseEntrypoint {
public:
    char pad_00[72];
    PulseRuntimeChunkIndex_t m_EntryChunk; // 0x48
    char pad_01[4];
    PulseRegisterMap_t m_RegisterMap; // 0x50
}; // size: 0x80

class __declspec(align(8)) CPulseCell_Inflow_Method {
public:
    // PulseSymbol_t m_MethodName;
    // CUtlString m_Description;
    char pad_00[152];
    bool m_bIsPublic; // 0x98
    // CPulseValueFullType m_ReturnType;
    // CUtlLeanVector< CPulseRuntimeMethodArg > m_Args;
    char pad_01[47];
}; // size: 0xc8

class __declspec(align(8)) CPulseCell_Inflow_EventHandler {
public:
    // PulseSymbol_t m_EventName;
    char pad_00[144];
}; // size: 0x90

class __declspec(align(8)) CPulseCell_Inflow_GraphHook {
public:
    // PulseSymbol_t m_HookName;
    char pad_00[144];
}; // size: 0x90

class __declspec(align(8)) CPulseCell_Inflow_EntOutputHandler {
public:
    // PulseSymbol_t m_SourceEntity;
    // PulseSymbol_t m_SourceOutput;
    // CPulseValueFullType m_ExpectedParamType;
    char pad_00[184];
}; // size: 0xb8

class __declspec(align(8)) CPulseCell_Inflow_ObservableVariableListener {
public:
    char pad_00[128];
    PulseRuntimeBlackboardReferenceIndex_t m_nBlackboardReference; // 0x80
    bool m_bSelfReference; // 0x82
    char pad_01[5];
}; // size: 0x88

class __declspec(align(1)) CPulseCell_BaseYieldingInflow {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(1)) CPulseCell_BaseLerp {
public:
    char pad_00[72];
    CPulse_ResumePoint m_WakeResume; // 0x48
}; // size: 0x90

/// CPulseCell_BaseLerp::CursorState_t
class __declspec(align(4)) CPulseCell_BaseLerp__CursorState_t {
public:
    GameTime_t m_StartTime; // 0x0
    GameTime_t m_EndTime; // 0x4
}; // size: 0x8

class __declspec(align(8)) CPulseCell_BaseValue {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CPulseCell_Step_PublicOutput {
public:
    char pad_00[72];
    PulseRuntimeOutputIndex_t m_OutputIndex; // 0x48
    char pad_01[4];
}; // size: 0x50

class __declspec(align(8)) CPulseCell_Inflow_Yield {
public:
    char pad_00[72];
    CPulse_ResumePoint m_UnyieldResume; // 0x48
}; // size: 0x90

class __declspec(align(8)) CPulseCell_Inflow_Wait {
public:
    char pad_00[72];
    CPulse_ResumePoint m_WakeResume; // 0x48
}; // size: 0x90

class __declspec(align(8)) CPulseCell_Outflow_CycleOrdered {
public:
    // CUtlVector< CPulse_OutflowConnection > m_Outputs;
    char pad_00[96];
}; // size: 0x60

/// CPulseCell_Outflow_CycleOrdered::InstanceState_t
class __declspec(align(4)) CPulseCell_Outflow_CycleOrdered__InstanceState_t {
public:
    int32_t m_nNextIndex; // 0x0
}; // size: 0x4

class __declspec(align(8)) CPulseCell_Outflow_CycleRandom {
public:
    // CUtlVector< CPulse_OutflowConnection > m_Outputs;
    char pad_00[96];
}; // size: 0x60

class __declspec(align(8)) CPulseCell_Outflow_CycleShuffled {
public:
    // CUtlVector< CPulse_OutflowConnection > m_Outputs;
    char pad_00[96];
}; // size: 0x60

/// CPulseCell_Outflow_CycleShuffled::InstanceState_t
class __declspec(align(8)) CPulseCell_Outflow_CycleShuffled__InstanceState_t {
public:
    // CUtlVectorFixedGrowable< uint8, 8 > m_Shuffle;
    char pad_00[32];
    int32_t m_nNextShuffle; // 0x20
    char pad_01[4];
}; // size: 0x28

class __declspec(align(8)) CPulseCell_Value_RandomInt {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CPulseCell_Value_RandomFloat {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CPulseCell_Step_DebugLog {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CPulseCell_Step_CallExternalMethod {
public:
    // PulseSymbol_t m_MethodName;
    // PulseSymbol_t m_GameBlackboard;
    // CUtlLeanVector< CPulseRuntimeMethodArg > m_ExpectedArgs;
    char pad_00[120];
    PulseMethodCallMode_t m_nAsyncCallMode; // 0x78
    char pad_01[4];
    CPulse_ResumePoint m_OnFinished; // 0x80
}; // size: 0xc8

class __declspec(align(8)) CPulseCell_Unknown {
public:
    // KeyValues3 m_UnknownKeys;
    char pad_00[88];
}; // size: 0x58

class __declspec(align(8)) CPulseCell_Value_Curve {
public:
    // CPiecewiseCurve m_Curve;
    char pad_00[136];
}; // size: 0x88

class __declspec(align(8)) CPulseCell_FireCursors {
public:
    // CUtlVector< CPulse_OutflowConnection > m_Outflows;
    char pad_00[96];
    bool m_bWaitForChildOutflows; // 0x60
    char pad_01[7];
    CPulse_ResumePoint m_OnFinished; // 0x68
    CPulse_ResumePoint m_OnCanceled; // 0xb0
}; // size: 0xf8

class __declspec(align(8)) CPulseCell_Value_Gradient {
public:
    // CColorGradient m_Gradient;
    char pad_00[96];
}; // size: 0x60

class __declspec(align(8)) CPulseCell_IntervalTimer {
public:
    char pad_00[72];
    CPulse_ResumePoint m_Completed; // 0x48
    SignatureOutflow_Continue m_OnInterval; // 0x90
}; // size: 0xd8

/// CPulseCell_IntervalTimer::CursorState_t
class __declspec(align(4)) CPulseCell_IntervalTimer__CursorState_t {
public:
    GameTime_t m_StartTime; // 0x0
    GameTime_t m_EndTime; // 0x4
    float m_flWaitInterval; // 0x8
    float m_flWaitIntervalHigh; // 0xc
    bool m_bCompleteOnNextWake; // 0x10
    char pad_00[3];
}; // size: 0x14

class __declspec(align(8)) OutflowWithRequirements_t {
public:
    CPulse_OutflowConnection m_Connection; // 0x0
    PulseDocNodeID_t m_DestinationFlowNodeID; // 0x48
    // CUtlVector< PulseDocNodeID_t > m_RequirementNodeIDs;
    // CUtlVector< int32 > m_nCursorStateBlockIndex;
    char pad_00[52];
}; // size: 0x80

class __declspec(align(8)) PulseSelectorOutflowList_t {
public:
    // CUtlVector< OutflowWithRequirements_t > m_Outflows;
    char pad_00[24];
}; // size: 0x18

class __declspec(align(8)) CPulseCell_LimitCount {
public:
    char pad_00[72];
    int32_t m_nLimitCount; // 0x48
    char pad_01[4];
}; // size: 0x50

/// CPulseCell_LimitCount::Criteria_t
class __declspec(align(1)) CPulseCell_LimitCount__Criteria_t {
public:
    bool m_bLimitCountPasses; // 0x0
}; // size: 0x1

/// CPulseCell_LimitCount::InstanceState_t
class __declspec(align(4)) CPulseCell_LimitCount__InstanceState_t {
public:
    int32_t m_nCurrentCount; // 0x0
}; // size: 0x4

class __declspec(align(8)) CPulseCell_IsRequirementValid {
public:
    char pad_00[72];
}; // size: 0x48

/// CPulseCell_IsRequirementValid::Criteria_t
class __declspec(align(1)) CPulseCell_IsRequirementValid__Criteria_t {
public:
    bool m_bIsValid; // 0x0
}; // size: 0x1

class __declspec(align(8)) CPulseCell_InlineNodeSkipSelector {
public:
    char pad_00[72];
    PulseDocNodeID_t m_nFlowNodeID; // 0x48
    bool m_bAnd; // 0x4c
    PulseSelectorOutflowList_t m_PassOutflow; // 0x50
    CPulse_OutflowConnection m_FailOutflow; // 0x68
}; // size: 0xb0

class __declspec(align(8)) CPulseCell_PickBestOutflowSelector {
public:
    char pad_00[72];
    PulseBestOutflowRules_t m_nCheckType; // 0x48
    PulseSelectorOutflowList_t m_OutflowList; // 0x50
}; // size: 0x68

/// CPulseCell_Timeline::TimelineEvent_t
class __declspec(align(8)) CPulseCell_Timeline__TimelineEvent_t {
public:
    float m_flTimeFromPrevious; // 0x0
    char pad_00[4];
    CPulse_OutflowConnection m_EventOutflow; // 0x8
}; // size: 0x50

class __declspec(align(8)) CPulseCell_Timeline {
public:
    // CUtlVector< CPulseCell_Timeline::TimelineEvent_t > m_TimelineEvents;
    char pad_00[96];
    bool m_bWaitForChildOutflows; // 0x60
    char pad_01[7];
    CPulse_ResumePoint m_OnFinished; // 0x68
    CPulse_ResumePoint m_OnCanceled; // 0xb0
}; // size: 0xf8

class __declspec(align(8)) PulseObservableBoolExpression_t {
public:
    CPulse_OutflowConnection m_EvaluateConnection; // 0x0
    // CUtlVector< PulseRuntimeVarIndex_t > m_DependentObservableVars;
    // CUtlVector< PulseRuntimeBlackboardReferenceIndex_t > m_DependentObservableBlackboardReferences;
    char pad_00[48];
}; // size: 0x78

class __declspec(align(8)) CPulseCell_WaitForObservable {
public:
    char pad_00[72];
    PulseObservableBoolExpression_t m_Condition; // 0x48
    CPulse_ResumePoint m_OnTrue; // 0xc0
}; // size: 0x108

class __declspec(align(1)) CPulseCell_BaseState {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CPulseCell_BooleanSwitchState {
public:
    char pad_00[72];
    PulseObservableBoolExpression_t m_Condition; // 0x48
    CPulse_OutflowConnection m_SubGraph; // 0xc0
    CPulse_OutflowConnection m_WhenTrue; // 0x108
    CPulse_OutflowConnection m_WhenFalse; // 0x150
}; // size: 0x198

class __declspec(align(1)) CPulseCursorFuncs {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(8)) CPulseCell_WaitForCursorsWithTagBase {
public:
    char pad_00[72];
    int32_t m_nCursorsAllowedToWait; // 0x48
    char pad_01[4];
    CPulse_ResumePoint m_WaitComplete; // 0x50
}; // size: 0x98

/// CPulseCell_WaitForCursorsWithTagBase::CursorState_t
class __declspec(align(1)) CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
public:
    // PulseSymbol_t m_TagName;
    char pad_00[48];
}; // size: 0x30

class __declspec(align(8)) CPulseCell_WaitForCursorsWithTag {
public:
    char pad_00[152];
    bool m_bTagSelfWhenComplete; // 0x98
    PulseCursorCancelPriority_t m_nDesiredKillPriority; // 0x9c
}; // size: 0xa0

class __declspec(align(8)) CPulseCell_CursorQueue {
public:
    char pad_00[152];
    int32_t m_nCursorsAllowedToRunParallel; // 0x98
    char pad_01[4];
}; // size: 0xa0

class __declspec(align(8)) CEntityIdentity {
public:
    char pad_00[20];
    int32_t m_nameStringableIndex; // 0x14
    // CUtlSymbolLarge m_name;
    // CUtlSymbolLarge m_designerName;
    char pad_01[24];
    uint32_t m_flags; // 0x30
    // WorldGroupId_t m_worldGroupId;
    char pad_02[8];
    uint32_t m_fDataObjectTypes; // 0x3c
    ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x40
    CEntityAttributeTable* m_pAttributes; // 0x48
    CEntityIdentity* m_pPrev; // 0x50
    CEntityIdentity* m_pNext; // 0x58
    CEntityIdentity* m_pPrevByClass; // 0x60
    CEntityIdentity* m_pNextByClass; // 0x68
}; // size: 0x70

/// CompositeMaterialMatchFilter_t
class __declspec(align(8)) CompositeMaterialMatchFilter_t0 {
public:
    CompositeMaterialMatchFilterType_t m_nCompositeMaterialMatchFilterType; // 0x0
    // CUtlString m_strMatchFilter;
    // CUtlString m_strMatchValue;
    char pad_00[20];
    bool m_bPassWhenTrue; // 0x18
    char pad_01[7];
}; // size: 0x20

/// CompositeMaterialInputLooseVariable_t
class __declspec(align(8)) CompositeMaterialInputLooseVariable_t0 {
public:
    // CUtlString m_strName;
    char pad_00[8];
    bool m_bExposeExternally; // 0x8
    // CUtlString m_strExposedFriendlyName;
    // CUtlString m_strExposedFriendlyGroupName;
    char pad_01[23];
    bool m_bExposedVariableIsFixedRange; // 0x20
    // CUtlString m_strExposedVisibleWhenTrue;
    // CUtlString m_strExposedHiddenWhenTrue;
    // CUtlString m_strExposedValueList;
    char pad_02[28];
    CompositeMaterialInputLooseVariableType_t m_nVariableType; // 0x40
    bool m_bValueBoolean; // 0x44
    int32_t m_nValueIntX; // 0x48
    int32_t m_nValueIntY; // 0x4c
    int32_t m_nValueIntZ; // 0x50
    int32_t m_nValueIntW; // 0x54
    bool m_bHasFloatBounds; // 0x58
    float m_flValueFloatX; // 0x5c
    float m_flValueFloatX_Min; // 0x60
    float m_flValueFloatX_Max; // 0x64
    float m_flValueFloatY; // 0x68
    float m_flValueFloatY_Min; // 0x6c
    float m_flValueFloatY_Max; // 0x70
    float m_flValueFloatZ; // 0x74
    float m_flValueFloatZ_Min; // 0x78
    float m_flValueFloatZ_Max; // 0x7c
    float m_flValueFloatW; // 0x80
    float m_flValueFloatW_Min; // 0x84
    float m_flValueFloatW_Max; // 0x88
    // Color m_cValueColor4;
    char pad_03[4];
    CompositeMaterialVarSystemVar_t m_nValueSystemVar; // 0x90
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_strResourceMaterial;
    // CUtlString m_strTextureContentAssetPath;
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCTextureBase > > m_strTextureRuntimeResourcePath;
    // CUtlString m_strTextureCompilationVtexTemplate;
    char pad_04[468];
    CompositeMaterialInputTextureType_t m_nTextureType; // 0x268
    // CUtlString m_strString;
    // CUtlString m_strPanoramaPanelPath;
    char pad_05[20];
    int32_t m_nPanoramaRenderRes; // 0x280
    char pad_06[4];
}; // size: 0x288

/// CompMatMutatorCondition_t
class __declspec(align(8)) CompMatMutatorCondition_t0 {
public:
    CompMatPropertyMutatorConditionType_t m_nMutatorCondition; // 0x0
    // CUtlString m_strMutatorConditionContainerName;
    // CUtlString m_strMutatorConditionContainerVarName;
    // CUtlString m_strMutatorConditionContainerVarValue;
    char pad_00[28];
    bool m_bPassWhenTrue; // 0x20
    char pad_01[7];
}; // size: 0x28

/// CompMatPropertyMutator_t
class __declspec(align(8)) CompMatPropertyMutator_t0 {
public:
    bool m_bEnabled; // 0x0
    CompMatPropertyMutatorType_t m_nMutatorCommandType; // 0x4
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
    CompositeMaterialInputLooseVariable_t m_nSetValue_Value; // 0x68
    // CUtlString m_strGenerateTexture_TargetParam;
    // CUtlString m_strGenerateTexture_InitialContainer;
    char pad_01[16];
    int32_t m_nResolution; // 0x300
    bool m_bIsScratchTarget; // 0x304
    // CUtlString m_strCompressionFormat;
    char pad_02[11];
    bool m_bSplatDebugInfo; // 0x310
    bool m_bCaptureInRenderDoc; // 0x311
    // CUtlVector< CompMatPropertyMutator_t > m_vecTexGenInstructions;
    // CUtlVector< CompMatPropertyMutator_t > m_vecConditionalMutators;
    // CUtlString m_strPopInputQueue_Container;
    // CUtlString m_strDrawText_InputContainerSrc;
    // CUtlString m_strDrawText_InputContainerProperty;
    char pad_03[76];
    Vector2D m_vecDrawText_Position; // 0x360
    // Color m_colDrawText_Color;
    // CUtlString m_strDrawText_Font;
    // CUtlVector< CompMatMutatorCondition_t > m_vecConditions;
    char pad_04[40];
}; // size: 0x390

/// CompositeMaterialInputContainer_t
class __declspec(align(8)) CompositeMaterialInputContainer_t0 {
public:
    bool m_bEnabled; // 0x0
    CompositeMaterialInputContainerSourceType_t m_nCompositeMaterialInputContainerSourceType; // 0x4
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_strSpecificContainerMaterial;
    // CUtlString m_strAttrName;
    // CUtlString m_strAlias;
    // CUtlVector< CompositeMaterialInputLooseVariable_t > m_vecLooseVariables;
    // CUtlString m_strAttrNameForVar;
    char pad_00[272];
    bool m_bExposeExternally; // 0x118
    char pad_01[31];
}; // size: 0x138

/// CompositeMaterialAssemblyProcedure_t
class __declspec(align(8)) CompositeMaterialAssemblyProcedure_t0 {
public:
    // CUtlVector< CResourceNameTyped< CWeakHandle< InfoForResourceTypeCCompositeMaterialKit > > > m_vecCompMatIncludes;
    // CUtlVector< CompositeMaterialMatchFilter_t > m_vecMatchFilters;
    // CUtlVector< CompositeMaterialInputContainer_t > m_vecCompositeInputContainers;
    // CUtlVector< CompMatPropertyMutator_t > m_vecPropertyMutators;
    char pad_00[96];
}; // size: 0x60

/// GeneratedTextureHandle_t
class __declspec(align(1)) GeneratedTextureHandle_t0 {
public:
    // CUtlString m_strBitmapName;
    char pad_00[96];
}; // size: 0x60

/// CompositeMaterial_t
class __declspec(align(1)) CompositeMaterial_t0 {
public:
    // KeyValues3 m_TargetKVs;
    // KeyValues3 m_PreGenerationKVs;
    // KeyValues3 m_FinalKVs;
    // CUtlVector< GeneratedTextureHandle_t > m_vecGeneratedTextures;
    char pad_00[160];
}; // size: 0xa0

/// CompositeMaterialEditorPoint_t
class __declspec(align(8)) CompositeMaterialEditorPoint_t0 {
public:
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ModelName;
    char pad_00[224];
    int32_t m_nSequenceIndex; // 0xe0
    float m_flCycle; // 0xe4
    // KeyValues3 m_KVModelStateChoices;
    char pad_01[16];
    bool m_bEnableChildModel; // 0xf8
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ChildModelName;
    // CUtlVector< CompositeMaterialAssemblyProcedure_t > m_vecCompositeMaterialAssemblyProcedures;
    // CUtlVector< CompositeMaterial_t > m_vecCompositeMaterials;
    char pad_02[287];
}; // size: 0x218

/// CCompositeMaterialEditorDoc
class __declspec(align(8)) CCompositeMaterialEditorDoc0 {
public:
    char pad_00[8];
    int32_t m_nVersion; // 0x8
    // CUtlVector< CompositeMaterialEditorPoint_t > m_Points;
    // KeyValues3 m_KVthumbnail;
    char pad_01[44];
}; // size: 0x38

class __declspec(align(8)) CGameSceneNode {
public:
    // CTransformWS m_nodeToWorld;
    char pad_00[48];
    CEntityInstance* m_pOwner; // 0x30
    CGameSceneNode* m_pParent; // 0x38
    CGameSceneNode* m_pChild; // 0x40
    CGameSceneNode* m_pNextSibling; // 0x48
    // CGameSceneNodeHandle m_hParent;
    char pad_01[56];
    CNetworkOriginCellCoordQuantizedVector m_vecOrigin; // 0x88
    char pad_02[8];
    QAngle m_angRotation; // 0xc0
    float m_flScale; // 0xcc
    // VectorWS m_vecAbsOrigin;
    char pad_03[12];
    QAngle m_angAbsRotation; // 0xdc
    float m_flAbsScale; // 0xe8
    Vector m_vecWrappedLocalOrigin; // 0xec
    QAngle m_angWrappedLocalRotation; // 0xf8
    float m_flWrappedScale; // 0x104
    int16_t m_nParentAttachmentOrBone; // 0x108
    bool m_bDebugAbsOriginChanges; // 0x10a
    bool m_bDormant; // 0x10b
    bool m_bForceParentToBeNetworked; // 0x10c
    // bitfield:1 m_bDirtyHierarchy;
    // bitfield:1 m_bDirtyBoneMergeInfo;
    // bitfield:1 m_bNetworkedPositionChanged;
    // bitfield:1 m_bNetworkedAnglesChanged;
    // bitfield:1 m_bNetworkedScaleChanged;
    // bitfield:1 m_bWillBeCallingPostDataUpdate;
    // bitfield:1 m_bBoneMergeFlex;
    // bitfield:2 m_nLatchAbsOrigin;
    // bitfield:1 m_bDirtyBoneMergeBoneToRoot;
    char pad_04[2];
    uint8_t m_nHierarchicalDepth; // 0x10f
    uint8_t m_nHierarchyType; // 0x110
    uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // 0x111
    // CUtlStringToken m_name;
    // CUtlStringToken m_hierarchyAttachName;
    char pad_05[24];
    float m_flZOffset; // 0x12c
    float m_flClientLocalScale; // 0x130
    Vector m_vRenderOrigin; // 0x134
    char pad_06[16];
}; // size: 0x150

class __declspec(align(8)) CBodyComponent : public CEntityComponent {
public:
    CGameSceneNode* m_pSceneNode; // 0x8
    char pad_01[56];
    CNetworkVarChainer __m_pChainEntity; // 0x48
    char pad_02[8];
}; // size: 0x78

class __declspec(align(8)) CBodyComponentPoint : public CBodyComponent {
public:
    char pad_03[8];
    CGameSceneNode m_sceneNode; // 0x80
}; // size: 0x1d0

class __declspec(align(8)) CSkeletonInstance : public CGameSceneNode {
public:
    // CModelState m_modelState;
    char pad_07[736];
    bool m_bIsAnimationEnabled; // 0x430
    bool m_bUseParentRenderBounds; // 0x431
    bool m_bDisableSolidCollisionsForHierarchy; // 0x432
    // bitfield:1 m_bDirtyMotionType;
    // bitfield:1 m_bIsGeneratingLatchedParentSpaceState;
    // CUtlStringToken m_materialGroup;
    char pad_08[5];
    uint8_t m_nHitboxSet; // 0x438
    char pad_09[151];
}; // size: 0x4d0

class __declspec(align(8)) CBodyComponentSkeletonInstance : public CBodyComponent {
public:
    char pad_03[8];
    CSkeletonInstance m_skeletonInstance; // 0x80
}; // size: 0x550

class __declspec(align(4)) CHitboxComponent : public CEntityComponent {
public:
    char pad_01[12];
    float m_flBoundsExpandRadius; // 0x14
}; // size: 0x18

class __declspec(align(4)) CLightComponent : public CEntityComponent {
public:
    char pad_01[48];
    CNetworkVarChainer __m_pChainEntity; // 0x38
    // Color m_Color;
    // Color m_SecondaryColor;
    char pad_02[32];
    float m_flBrightness; // 0x80
    float m_flBrightnessScale; // 0x84
    float m_flBrightnessMult; // 0x88
    float m_flRange; // 0x8c
    float m_flFalloff; // 0x90
    float m_flAttenuation0; // 0x94
    float m_flAttenuation1; // 0x98
    float m_flAttenuation2; // 0x9c
    float m_flTheta; // 0xa0
    float m_flPhi; // 0xa4
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie;
    char pad_03[8];
    int32_t m_nCascades; // 0xb0
    int32_t m_nCastShadows; // 0xb4
    int32_t m_nShadowWidth; // 0xb8
    int32_t m_nShadowHeight; // 0xbc
    bool m_bRenderDiffuse; // 0xc0
    int32_t m_nRenderSpecular; // 0xc4
    bool m_bRenderTransmissive; // 0xc8
    float m_flOrthoLightWidth; // 0xcc
    float m_flOrthoLightHeight; // 0xd0
    int32_t m_nStyle; // 0xd4
    // CUtlString m_Pattern;
    char pad_04[8];
    int32_t m_nCascadeRenderStaticObjects; // 0xe0
    float m_flShadowCascadeCrossFade; // 0xe4
    float m_flShadowCascadeDistanceFade; // 0xe8
    float m_flShadowCascadeDistance0; // 0xec
    float m_flShadowCascadeDistance1; // 0xf0
    float m_flShadowCascadeDistance2; // 0xf4
    float m_flShadowCascadeDistance3; // 0xf8
    int32_t m_nShadowCascadeResolution0; // 0xfc
    int32_t m_nShadowCascadeResolution1; // 0x100
    int32_t m_nShadowCascadeResolution2; // 0x104
    int32_t m_nShadowCascadeResolution3; // 0x108
    bool m_bUsesBakedShadowing; // 0x10c
    int32_t m_nShadowPriority; // 0x110
    int32_t m_nBakedShadowIndex; // 0x114
    int32_t m_nLightPathUniqueId; // 0x118
    int32_t m_nLightMapUniqueId; // 0x11c
    bool m_bRenderToCubemaps; // 0x120
    bool m_bAllowSSTGeneration; // 0x121
    int32_t m_nDirectLight; // 0x124
    int32_t m_nIndirectLight; // 0x128
    bool m_bDynamicBounce; // 0x12c
    float m_flFadeMinDist; // 0x130
    float m_flFadeMaxDist; // 0x134
    float m_flShadowFadeMinDist; // 0x138
    float m_flShadowFadeMaxDist; // 0x13c
    bool m_bEnabled; // 0x140
    bool m_bFlicker; // 0x141
    bool m_bPrecomputedFieldsValid; // 0x142
    Vector m_vPrecomputedBoundsMins; // 0x144
    Vector m_vPrecomputedBoundsMaxs; // 0x150
    Vector m_vPrecomputedOBBOrigin; // 0x15c
    QAngle m_vPrecomputedOBBAngles; // 0x168
    Vector m_vPrecomputedOBBExtent; // 0x174
    float m_flPrecomputedMaxRange; // 0x180
    int32_t m_nFogLightingMode; // 0x184
    float m_flFogContributionStength; // 0x188
    float m_flNearClipPlane; // 0x18c
    // Color m_SkyColor;
    char pad_05[4];
    float m_flSkyIntensity; // 0x194
    // Color m_SkyAmbientBounce;
    char pad_06[4];
    bool m_bUseSecondaryColor; // 0x19c
    bool m_bMixedShadows; // 0x19d
    GameTime_t m_flLightStyleStartTime; // 0x1a0
    float m_flCapsuleLength; // 0x1a4
    float m_flMinRoughness; // 0x1a8
    char pad_07[68];
}; // size: 0x1f0

class __declspec(align(4)) CRenderComponent : public CEntityComponent {
public:
    char pad_01[8];
    CNetworkVarChainer __m_pChainEntity; // 0x10
    char pad_02[24];
    bool m_bIsRenderingWithViewModels; // 0x50
    uint32_t m_nSplitscreenFlags; // 0x54
    bool m_bEnableRendering; // 0x58
    char pad_03[79];
    bool m_bInterpolationReadyToDraw; // 0xa8
    char pad_04[39];
}; // size: 0xd0

class __declspec(align(8)) CPulseCell_LerpCameraSettings {
public:
    char pad_00[144];
    float m_flSeconds; // 0x90
    PointCameraSettings_t m_Start; // 0x94
    PointCameraSettings_t m_End; // 0xa4
    char pad_01[4];
}; // size: 0xb8

class __declspec(align(8)) C_PointCamera : public C_BaseEntity {
public:
    float m_FOV; // 0x608
    float m_Resolution; // 0x60c
    bool m_bFogEnable; // 0x610
    // Color m_FogColor;
    char pad_017[4];
    float m_flFogStart; // 0x618
    float m_flFogEnd; // 0x61c
    float m_flFogMaxDensity; // 0x620
    bool m_bActive; // 0x624
    bool m_bUseScreenAspectRatio; // 0x625
    float m_flAspectRatio; // 0x628
    bool m_bNoSky; // 0x62c
    float m_fBrightness; // 0x630
    float m_flZFar; // 0x634
    float m_flZNear; // 0x638
    bool m_bCanHLTVUse; // 0x63c
    bool m_bAlignWithParent; // 0x63d
    bool m_bDofEnabled; // 0x63e
    float m_flDofNearBlurry; // 0x640
    float m_flDofNearCrisp; // 0x644
    float m_flDofFarCrisp; // 0x648
    float m_flDofFarBlurry; // 0x64c
    float m_flDofTiltToGround; // 0x650
    float m_TargetFOV; // 0x654
    float m_DegreesPerSecond; // 0x658
    bool m_bIsOn; // 0x65c
    C_PointCamera* m_pNext; // 0x660
}; // size: 0x668

/// CPulseCell_LerpCameraSettings::CursorState_t
class __declspec(align(4)) CPulseCell_LerpCameraSettings__CursorState_t {
public:
    // CHandle< C_PointCamera > m_hCamera;
    char pad_00[12];
    PointCameraSettings_t m_OverlaidStart; // 0xc
    PointCameraSettings_t m_OverlaidEnd; // 0x1c
}; // size: 0x2c

class __declspec(align(1)) CPointTemplateAPI {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(4)) CPropDataComponent : public CEntityComponent {
public:
    char pad_01[8];
    float m_flDmgModBullet; // 0x10
    float m_flDmgModClub; // 0x14
    float m_flDmgModExplosive; // 0x18
    float m_flDmgModFire; // 0x1c
    // CUtlSymbolLarge m_iszPhysicsDamageTableName;
    // CUtlSymbolLarge m_iszBasePropData;
    char pad_02[16];
    int32_t m_nInteractions; // 0x30
    bool m_bSpawnMotionDisabled; // 0x34
    int32_t m_nDisableTakePhysicsDamageSpawnFlag; // 0x38
    int32_t m_nMotionDisabledSpawnFlag; // 0x3c
}; // size: 0x40

class __declspec(align(4)) CBuoyancyHelper {
public:
    // CUtlStringToken m_nFluidType;
    char pad_00[28];
    float m_flFluidDensity; // 0x1c
    float m_flNeutrallyBuoyantGravity; // 0x20
    float m_flNeutrallyBuoyantLinearDamping; // 0x24
    float m_flNeutrallyBuoyantAngularDamping; // 0x28
    bool m_bNeutrallyBuoyant; // 0x2c
    // CUtlVector< float32 > m_vecFractionOfWheelSubmergedForWheelFriction;
    // CUtlVector< float32 > m_vecWheelFrictionScales;
    // CUtlVector< float32 > m_vecFractionOfWheelSubmergedForWheelDrag;
    // CUtlVector< float32 > m_vecWheelDrag;
    char pad_01[235];
}; // size: 0x118

class __declspec(align(1)) CBaseTriggerAPI {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(8)) CPulseCell_Step_EntFire {
public:
    // CUtlString m_Input;
    char pad_00[80];
}; // size: 0x50

class __declspec(align(8)) CPulseCell_PlaySequence {
public:
    // CUtlString m_SequenceName;
    char pad_00[80];
    PulseNodeDynamicOutflows_t m_PulseAnimEvents; // 0x50
    CPulse_ResumePoint m_OnFinished; // 0x68
    CPulse_ResumePoint m_OnCanceled; // 0xb0
}; // size: 0xf8

class __declspec(align(8)) C_BaseModelEntity : public C_BaseEntity {
public:
    char pad_017[1256];
    CRenderComponent* m_CRenderComponent; // 0xaf0
    CHitboxComponent m_CHitboxComponent; // 0xaf8
    HitGroup_t m_nDestructiblePartInitialStateDestructed0; // 0xb10
    HitGroup_t m_nDestructiblePartInitialStateDestructed1; // 0xb14
    HitGroup_t m_nDestructiblePartInitialStateDestructed2; // 0xb18
    HitGroup_t m_nDestructiblePartInitialStateDestructed3; // 0xb1c
    HitGroup_t m_nDestructiblePartInitialStateDestructed4; // 0xb20
    int32_t m_nDestructiblePartInitialStateDestructed0_PartIndex; // 0xb24
    int32_t m_nDestructiblePartInitialStateDestructed1_PartIndex; // 0xb28
    int32_t m_nDestructiblePartInitialStateDestructed2_PartIndex; // 0xb2c
    int32_t m_nDestructiblePartInitialStateDestructed3_PartIndex; // 0xb30
    int32_t m_nDestructiblePartInitialStateDestructed4_PartIndex; // 0xb34
    CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent; // 0xb38
    char pad_018[24];
    bool m_bInitModelEffects; // 0xb58
    bool m_bDoingModelEffects; // 0xb59
    bool m_bIsStaticProp; // 0xb5a
    int32_t m_iOldHealth; // 0xb5c
    RenderMode_t m_nRenderMode; // 0xb60
    RenderFx_t m_nRenderFX; // 0xb61
    bool m_bAllowFadeInView; // 0xb62
    // Color m_clrRender;
    // C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes;
    char pad_019[165];
    bool m_bRenderToCubemaps; // 0xc08
    bool m_bNoInterpolate; // 0xc09
    // CCollisionProperty m_Collision;
    // CGlowProperty m_Glow;
    char pad_020[268];
    float m_flGlowBackfaceMult; // 0xd18
    float m_fadeMinDist; // 0xd1c
    float m_fadeMaxDist; // 0xd20
    float m_flFadeScale; // 0xd24
    float m_flShadowStrength; // 0xd28
    uint8_t m_nObjectCulling; // 0xd2c
    DecalRtEncoding_t m_nRequiredDecalRtEncoding; // 0xd2d
    char pad_021[42];
    CNetworkViewOffsetVector m_vecViewOffset; // 0xd58
    char pad_022[184];
    CClientAlphaProperty* m_pClientAlphaProperty; // 0xe38
    // Color m_ClientOverrideTint;
    char pad_023[4];
    bool m_bUseClientOverrideTint; // 0xe44
    char pad_024[56];
    uint32_t m_bvDisabledHitGroups[1]; // 0xe80
    char pad_025[4];
}; // size: 0xe88

class __declspec(align(8)) CBaseAnimGraph : public C_BaseModelEntity {
public:
    CAnimGraphControllerManager m_graphControllerManager; // 0xe88
    CAnimGraphControllerBase* m_pMainGraphController; // 0xf38
    bool m_bInitiallyPopulateInterpHistory; // 0xf40
    char pad_026[1];
    bool m_bSuppressAnimEventSounds; // 0xf42
    char pad_027[13];
    bool m_bAnimGraphUpdateEnabled; // 0xf50
    float m_flMaxSlopeDistance; // 0xf54
    // VectorWS m_vLastSlopeCheckPos;
    char pad_028[12];
    uint32_t m_nAnimGraphUpdateId; // 0xf64
    bool m_bAnimationUpdateScheduled; // 0xf68
    Vector m_vecForce; // 0xf6c
    int32_t m_nForceBone; // 0xf78
    CBaseAnimGraph* m_pClientsideRagdoll; // 0xf80
    bool m_bBuiltRagdoll; // 0xf88
    // PhysicsRagdollPose_t m_RagdollPose;
    char pad_029[95];
    bool m_bRagdollEnabled; // 0xfe8
    bool m_bRagdollClientSide; // 0xfe9
    char pad_030[14];
    bool m_bHasAnimatedMaterialAttributes; // 0xff8
    char pad_031[367];
}; // size: 0x1168

/// CPulseCell_PlaySequence::CursorState_t
class __declspec(align(4)) CPulseCell_PlaySequence__CursorState_t {
public:
    // CHandle< CBaseAnimGraph > m_hTarget;
    char pad_00[4];
}; // size: 0x4

class __declspec(align(1)) CPulseAnimFuncs {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(1)) CBasePlayerControllerAPI {
public:
    char pad_00[8];
}; // size: 0x8

/// C_CommandContext
class __declspec(align(4)) C_CommandContext0 {
public:
    bool needsprocessing; // 0x0
    char pad_00[156];
    int32_t command_number; // 0xa0
    char pad_01[4];
}; // size: 0xa8

class __declspec(align(4)) ViewAngleServerChange_t {
public:
    char pad_00[48];
    FixAngleSet_t nType; // 0x30
    QAngle qAngle; // 0x34
    uint32_t nIndex; // 0x40
    char pad_01[4];
}; // size: 0x48

class __declspec(align(1)) CFilterMultipleAPI {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(4)) CPlayer_AutoaimServices : public CPlayerPawnComponent {
public:
}; // size: 0x48

class __declspec(align(4)) audioparams_t {
public:
    char pad_00[8];
    Vector localSound; // 0x8
    char pad_01[84];
    int32_t soundscapeIndex; // 0x68
    uint8_t localBits; // 0x6c
    int32_t soundscapeEntityListIndex; // 0x70
    uint32_t soundEventHash; // 0x74
}; // size: 0x78

class __declspec(align(4)) C_fogplayerparams_t {
public:
    // CHandle< C_FogController > m_hCtrl;
    char pad_00[12];
    float m_flTransitionTime; // 0xc
    // Color m_OldColor;
    char pad_01[4];
    float m_flOldStart; // 0x14
    float m_flOldEnd; // 0x18
    float m_flOldMaxDensity; // 0x1c
    float m_flOldHDRColorScale; // 0x20
    float m_flOldFarZ; // 0x24
    // Color m_NewColor;
    char pad_02[4];
    float m_flNewStart; // 0x2c
    float m_flNewEnd; // 0x30
    float m_flNewMaxDensity; // 0x34
    float m_flNewHDRColorScale; // 0x38
    float m_flNewFarZ; // 0x3c
}; // size: 0x40

class __declspec(align(8)) C_ColorCorrection : public C_BaseEntity {
public:
    Vector m_vecOrigin; // 0x608
    float m_MinFalloff; // 0x614
    float m_MaxFalloff; // 0x618
    float m_flFadeInDuration; // 0x61c
    float m_flFadeOutDuration; // 0x620
    float m_flMaxWeight; // 0x624
    float m_flCurWeight; // 0x628
    char m_netlookupFilename[512]; // 0x62c
    bool m_bEnabled; // 0x82c
    bool m_bMaster; // 0x82d
    bool m_bClientSide; // 0x82e
    bool m_bExclusive; // 0x82f
    bool m_bEnabledOnClient[1]; // 0x830
    float m_flCurWeightOnClient[1]; // 0x834
    bool m_bFadingIn[1]; // 0x838
    float m_flFadeStartWeight[1]; // 0x83c
    float m_flFadeStartTime[1]; // 0x840
    float m_flFadeDuration[1]; // 0x844
    char pad_017[8];
}; // size: 0x850

class __declspec(align(8)) C_TonemapController2 : public C_BaseEntity {
public:
    float m_flAutoExposureMin; // 0x608
    float m_flAutoExposureMax; // 0x60c
    float m_flExposureAdaptationSpeedUp; // 0x610
    float m_flExposureAdaptationSpeedDown; // 0x614
    float m_flTonemapEVSmoothingRange; // 0x618
    char pad_017[4];
}; // size: 0x620

class __declspec(align(8)) C_BaseToggle : public C_BaseModelEntity {
public:
}; // size: 0xe88

class __declspec(align(8)) C_BaseTrigger : public C_BaseToggle {
public:
    CEntityIOOutput m_OnStartTouch; // 0xe88
    CEntityIOOutput m_OnStartTouchAll; // 0xea0
    CEntityIOOutput m_OnEndTouch; // 0xeb8
    CEntityIOOutput m_OnEndTouchAll; // 0xed0
    CEntityIOOutput m_OnTouching; // 0xee8
    CEntityIOOutput m_OnTouchingEachEntity; // 0xf00
    CEntityIOOutput m_OnNotTouching; // 0xf18
    // CUtlVector< CHandle< C_BaseEntity > > m_hTouchingEntities;
    // CUtlSymbolLarge m_iFilterName;
    // CHandle< CBaseFilter > m_hFilter;
    char pad_026[36];
    bool m_bDisabled; // 0xf54
    char pad_027[3];
}; // size: 0xf58

class __declspec(align(8)) C_PostProcessingVolume : public C_BaseTrigger {
public:
    // CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings;
    char pad_028[24];
    float m_flFadeDuration; // 0xf70
    float m_flMinLogExposure; // 0xf74
    float m_flMaxLogExposure; // 0xf78
    float m_flMinExposure; // 0xf7c
    float m_flMaxExposure; // 0xf80
    float m_flExposureCompensation; // 0xf84
    float m_flExposureFadeSpeedUp; // 0xf88
    float m_flExposureFadeSpeedDown; // 0xf8c
    float m_flTonemapEVSmoothingRange; // 0xf90
    bool m_bMaster; // 0xf94
    bool m_bExposureControl; // 0xf95
    char pad_029[2];
}; // size: 0xf98

class __declspec(align(4)) fogparams_t {
public:
    char pad_00[8];
    Vector dirPrimary; // 0x8
    // Color colorPrimary;
    // Color colorSecondary;
    // Color colorPrimaryLerpTo;
    // Color colorSecondaryLerpTo;
    char pad_01[16];
    float start; // 0x24
    float end; // 0x28
    float farz; // 0x2c
    float maxdensity; // 0x30
    float exponent; // 0x34
    float HDRColorScale; // 0x38
    float skyboxFogFactor; // 0x3c
    float skyboxFogFactorLerpTo; // 0x40
    float startLerpTo; // 0x44
    float endLerpTo; // 0x48
    float maxdensityLerpTo; // 0x4c
    GameTime_t lerptime; // 0x50
    float duration; // 0x54
    float blendtobackground; // 0x58
    float scattering; // 0x5c
    float locallightscale; // 0x60
    bool enable; // 0x64
    bool blend; // 0x65
    bool m_bPadding2; // 0x66
    bool m_bPadding; // 0x67
}; // size: 0x68

class __declspec(align(8)) C_FogController : public C_BaseEntity {
public:
    fogparams_t m_fog; // 0x608
    bool m_bUseAngles; // 0x670
    int32_t m_iChangedVariables; // 0x674
}; // size: 0x678

class __declspec(align(4)) CPlayer_CameraServices : public CPlayerPawnComponent {
public:
    QAngle m_vecCsViewPunchAngle; // 0x48
    GameTick_t m_nCsViewPunchAngleTick; // 0x54
    float m_flCsViewPunchAngleTickRatio; // 0x58
    char pad_02[4];
    C_fogplayerparams_t m_PlayerFog; // 0x60
    // CHandle< C_ColorCorrection > m_hColorCorrectionCtrl;
    // CHandle< C_BaseEntity > m_hViewEntity;
    // CHandle< C_TonemapController2 > m_hTonemapController;
    char pad_03[16];
    audioparams_t m_audio; // 0xb0
    // C_NetworkUtlVectorBase< CHandle< C_PostProcessingVolume > > m_PostProcessingVolumes;
    char pad_04[24];
    float m_flOldPlayerZ; // 0x140
    float m_flOldPlayerViewOffsetZ; // 0x144
    fogparams_t m_CurrentFog; // 0x148
    // CHandle< C_FogController > m_hOldFogController;
    char pad_05[4];
    bool m_bOverrideFogColor[5]; // 0x1b4
    // Color[5] m_OverrideFogColor;
    char pad_06[20];
    bool m_bOverrideFogStartEnd[5]; // 0x1cd
    float m_fOverrideFogStart[5]; // 0x1d4
    float m_fOverrideFogEnd[5]; // 0x1e8
    // CHandle< C_PostProcessingVolume > m_hActivePostProcessingVolume;
    char pad_07[4];
    QAngle m_angDemoViewAngles; // 0x200
    char pad_08[132];
}; // size: 0x290

class __declspec(align(4)) CPlayer_FlashlightServices : public CPlayerPawnComponent {
public:
}; // size: 0x48

class __declspec(align(4)) CPlayer_ItemServices : public CPlayerPawnComponent {
public:
}; // size: 0x48

class __declspec(align(8)) CPlayer_MovementServices : public CPlayerPawnComponent {
public:
    int32_t m_nImpulse; // 0x48
    CInButtonState m_nButtons; // 0x50
    uint64_t m_nQueuedButtonDownMask; // 0x70
    uint64_t m_nQueuedButtonChangeMask; // 0x78
    uint64_t m_nButtonDoublePressed; // 0x80
    uint32_t m_pButtonPressedCmdNumber[64]; // 0x88
    uint32_t m_nLastCommandNumberProcessed; // 0x188
    uint64_t m_nToggleButtonDownMask; // 0x190
    char pad_02[8];
    float m_flMaxspeed; // 0x1a0
    float m_arrForceSubtickMoveWhen[4]; // 0x1a4
    float m_flForwardMove; // 0x1b4
    float m_flLeftMove; // 0x1b8
    float m_flUpMove; // 0x1bc
    Vector m_vecLastMovementImpulses; // 0x1c0
    char pad_03[92];
    QAngle m_vecOldViewAngles; // 0x228
    char pad_04[12];
}; // size: 0x240

class __declspec(align(8)) CPlayer_MovementServices_Humanoid : public CPlayer_MovementServices {
public:
    float m_flStepSoundTime; // 0x240
    float m_flFallVelocity; // 0x244
    Vector m_groundNormal; // 0x248
    float m_flSurfaceFriction; // 0x254
    // CUtlStringToken m_surfaceProps;
    char pad_05[16];
    int32_t m_nStepside; // 0x268
    char pad_06[4];
}; // size: 0x270

class __declspec(align(4)) CPlayer_ObserverServices : public CPlayerPawnComponent {
public:
    uint8_t m_iObserverMode; // 0x48
    // CHandle< C_BaseEntity > m_hObserverTarget;
    char pad_02[4];
    ObserverMode_t m_iObserverLastMode; // 0x50
    bool m_bForcedObserverMode; // 0x54
    float m_flObserverChaseDistance; // 0x58
    GameTime_t m_flObserverChaseDistanceCalcTime; // 0x5c
}; // size: 0x60

class __declspec(align(4)) CPlayer_UseServices : public CPlayerPawnComponent {
public:
}; // size: 0x48

class __declspec(align(4)) CPlayer_WaterServices : public CPlayerPawnComponent {
public:
}; // size: 0x48

class __declspec(align(8)) C_BaseFlex : public CBaseAnimGraph {
public:
    // C_NetworkUtlVectorBase< float32 > m_flexWeight;
    // VectorWS m_vLookTargetPosition;
    char pad_032[264];
    int32_t m_nLastFlexUpdateFrameCount; // 0x1270
    Vector m_CachedViewTarget; // 0x1274
    SceneEventId_t m_nNextSceneEventId; // 0x1280
    AttachmentHandle_t m_iMouthAttachment; // 0x1284
    AttachmentHandle_t m_iEyeAttachment; // 0x1285
    bool m_bResetFlexWeightsOnModelChange; // 0x1286
    char pad_033[24];
    int32_t m_nEyeOcclusionRendererBone; // 0x12a0
    // matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform;
    char pad_034[48];
    Vector m_vEyeOcclusionRendererHalfExtent; // 0x12d4
    // C_BaseFlex::Emphasized_Phoneme[3] m_PhonemeClasses;
    char pad_035[112];
}; // size: 0x1350

class __declspec(align(8)) C_EconEntity : public C_BaseFlex {
public:
    char pad_036[16];
    float m_flFlexDelayTime; // 0x1360
    float* m_flFlexDelayedWeight; // 0x1368
    bool m_bAttributesInitialized; // 0x1370
    // C_AttributeContainer m_AttributeManager;
    char pad_037[1236];
    uint32_t m_OriginalOwnerXuidLow; // 0x1848
    uint32_t m_OriginalOwnerXuidHigh; // 0x184c
    int32_t m_nFallbackPaintKit; // 0x1850
    int32_t m_nFallbackSeed; // 0x1854
    float m_flFallbackWear; // 0x1858
    int32_t m_nFallbackStatTrak; // 0x185c
    bool m_bClientside; // 0x1860
    bool m_bParticleSystemsCreated; // 0x1861
    // CUtlVector< int32 > m_vecAttachedParticles;
    // CHandle< CBaseAnimGraph > m_hViewmodelAttachment;
    char pad_038[32];
    int32_t m_iOldTeam; // 0x1884
    bool m_bAttachmentDirty; // 0x1888
    int32_t m_nUnloadedModelIndex; // 0x188c
    int32_t m_iNumOwnerValidationRetries; // 0x1890
    // CHandle< C_BaseEntity > m_hOldProvidee;
    // CUtlVector< C_EconEntity::AttachedModelData_t > m_vecAttachedModels;
    char pad_039[44];
}; // size: 0x18c0

class __declspec(align(8)) C_BasePlayerWeapon : public C_EconEntity {
public:
    GameTick_t m_nNextPrimaryAttackTick; // 0x18c0
    float m_flNextPrimaryAttackTickRatio; // 0x18c4
    GameTick_t m_nNextSecondaryAttackTick; // 0x18c8
    float m_flNextSecondaryAttackTickRatio; // 0x18cc
    int32_t m_iClip1; // 0x18d0
    int32_t m_iClip2; // 0x18d4
    int32_t m_pReserveAmmo[2]; // 0x18d8
    char pad_040[24];
}; // size: 0x18f8

class __declspec(align(4)) CPlayer_WeaponServices : public CPlayerPawnComponent {
public:
    // C_NetworkUtlVectorBase< CHandle< C_BasePlayerWeapon > > m_hMyWeapons;
    // CHandle< C_BasePlayerWeapon > m_hActiveWeapon;
    // CHandle< C_BasePlayerWeapon > m_hLastWeapon;
    char pad_02[32];
    uint16_t m_iAmmo[32]; // 0x68
}; // size: 0xa8

class __declspec(align(8)) CBaseAnimGraphController : public CSkeletonAnimationController {
public:
    char pad_02[8];
    AnimationAlgorithm_t m_nAnimationAlgorithm; // 0x18
    // CAnimGraphNetworkedVariables m_animGraphNetworkedVars;
    // CSmartPtr< IAnimationGraphInstance > m_pAnimGraphInstance;
    char pad_03[5364];
    ExternalAnimGraphHandle_t m_nNextExternalGraphHandle; // 0x1510
    // CUtlVector< CGlobalSymbol > m_vecSecondarySkeletonNames;
    // C_NetworkUtlVectorBase< CHandle< CBaseAnimGraph > > m_vecSecondarySkeletons;
    char pad_04[52];
    int32_t m_nSecondarySkeletonMasterCount; // 0x1548
    char pad_05[4];
    float m_flSoundSyncTime; // 0x1550
    uint32_t m_nActiveIKChainMask; // 0x1554
    char pad_06[80];
    HSequence m_hSequence; // 0x15a8
    GameTime_t m_flSeqStartTime; // 0x15ac
    float m_flSeqFixedCycle; // 0x15b0
    AnimLoopMode_t m_nAnimLoopMode; // 0x15b4
    // CNetworkedQuantizedFloat m_flPlaybackRate;
    char pad_07[12];
    SequenceFinishNotifyState_t m_nNotifyState; // 0x15c4
    bool m_bNetworkedAnimationInputsChanged; // 0x15c5
    bool m_bNetworkedSequenceChanged; // 0x15c6
    bool m_bLastUpdateSkipped; // 0x15c7
    bool m_bSequenceFinished; // 0x15c8
    GameTick_t m_nPrevAnimUpdateTick; // 0x15cc
    // CStrongHandle< InfoForResourceTypeCNmGraphDefinition > m_hGraphDefinitionAG2;
    // C_NetworkUtlVectorBase< uint8 > m_serializedPoseRecipeAG2;
    char pad_08[696];
    int32_t m_nSerializePoseRecipeSizeAG2; // 0x1888
    int32_t m_nSerializePoseRecipeVersionAG2; // 0x188c
    int32_t m_nServerGraphInstanceIteration; // 0x1890
    int32_t m_nServerSerializationContextIteration; // 0x1894
    ResourceId_t m_primaryGraphId; // 0x1898
    // C_NetworkUtlVectorBase< ResourceId_t > m_vecExternalGraphIds;
    // C_NetworkUtlVectorBase< ResourceId_t > m_vecExternalClipIds;
    // CGlobalSymbol m_sAnimGraph2Identifier;
    // CUtlVector< ExternalAnimGraph_t > m_vecExternalGraphs;
    char pad_09[657];
    AnimationAlgorithm_t m_nPrevAnimationAlgorithm; // 0x1b31
    char pad_010[6];
}; // size: 0x1b38

class __declspec(align(8)) CBodyComponentBaseAnimGraph : public CBodyComponentSkeletonInstance {
public:
    CBaseAnimGraphController m_animationController; // 0x550
    char pad_04[8];
}; // size: 0x2090

class __declspec(align(4)) EntityRenderAttribute_t {
public:
    // CUtlStringToken m_ID;
    char pad_00[52];
    Vector4D m_Values; // 0x34
    char pad_01[4];
}; // size: 0x48

class __declspec(align(4)) ActiveModelConfig_t {
public:
    char pad_00[48];
    ModelConfigHandle_t m_Handle; // 0x30
    // CUtlSymbolLarge m_Name;
    // C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_AssociatedEntities;
    // C_NetworkUtlVectorBase< CUtlSymbolLarge > m_AssociatedEntityNames;
    char pad_01[60];
}; // size: 0x70

class __declspec(align(8)) CBodyComponentBaseModelEntity : public CBodyComponentSkeletonInstance {
public:
}; // size: 0x550

class __declspec(align(8)) CDestructiblePartsComponent {
public:
    CNetworkVarChainer __m_pChainEntity; // 0x0
    // CUtlVector< uint16 > m_vecDamageTakenByHitGroup;
    // CHandle< C_BaseModelEntity > m_hOwner;
    char pad_00[72];
}; // size: 0x70

class __declspec(align(1)) CGameSceneNodeHandle {
public:
    // CEntityHandle m_hOwner;
    // CUtlStringToken m_name;
    char pad_00[16];
}; // size: 0x10

class __declspec(align(1)) CLogicRelayAPI {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(1)) CPathQueryComponent : public CEntityComponent {
public:
    char pad_01[152];
}; // size: 0xa0

class __declspec(align(1)) CPathSimpleAPI {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(4)) SequenceHistory_t {
public:
    HSequence m_hSequence; // 0x0
    GameTime_t m_flSeqStartTime; // 0x4
    float m_flSeqFixedCycle; // 0x8
    AnimLoopMode_t m_nSeqLoopMode; // 0xc
    float m_flPlaybackRate; // 0x10
    float m_flCyclesPerSecond; // 0x14
}; // size: 0x18

class __declspec(align(4)) CNetworkedSequenceOperation {
public:
    char pad_00[8];
    HSequence m_hSequence; // 0x8
    float m_flPrevCycle; // 0xc
    float m_flCycle; // 0x10
    // CNetworkedQuantizedFloat m_flWeight;
    char pad_01[8];
    bool m_bSequenceChangeNetworked; // 0x1c
    bool m_bDiscontinuity; // 0x1d
    float m_flPrevCycleFromDiscontinuity; // 0x20
    float m_flPrevCycleForAnimEventDetection; // 0x24
}; // size: 0x28

class __declspec(align(8)) CModelState {
public:
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    // CUtlSymbolLarge m_ModelName;
    char pad_00[377];
    bool m_bClientClothCreationSuppressed; // 0x179
    char pad_01[160];
    uint64_t m_MeshGroupMask; // 0x220
    // C_NetworkUtlVectorBase< int32 > m_nBodyGroupChoices;
    char pad_02[146];
    int8_t m_nIdealMotionType; // 0x2ba
    int8_t m_nForceLOD; // 0x2bb
    int8_t m_nClothUpdateFlags; // 0x2bc
    char pad_03[19];
}; // size: 0x2d0

class __declspec(align(4)) IntervalTimer {
public:
    char pad_00[8];
    GameTime_t m_timestamp; // 0x8
    // WorldGroupId_t m_nWorldGroupId;
    char pad_01[4];
}; // size: 0x10

class __declspec(align(4)) EngineCountdownTimer {
public:
    char pad_00[8];
    float m_duration; // 0x8
    float m_timestamp; // 0xc
    float m_timescale; // 0x10
    char pad_01[4];
}; // size: 0x18

class __declspec(align(4)) CTimeline : public IntervalTimer {
public:
    float m_flValues[64]; // 0x10
    int32_t m_nValueCounts[64]; // 0x110
    int32_t m_nBucketCount; // 0x210
    float m_flInterval; // 0x214
    float m_flFinalValue; // 0x218
    TimelineCompression_t m_nCompressionType; // 0x21c
    bool m_bStopped; // 0x220
    char pad_02[7];
}; // size: 0x228

class __declspec(align(4)) CAnimGraphNetworkedVariables {
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
    int32_t m_nBoolVariablesCount; // 0x1e8
    int32_t m_nOwnerOnlyBoolVariablesCount; // 0x1ec
    int32_t m_nRandomSeedOffset; // 0x1f0
    float m_flLastTeleportTime; // 0x1f4
    char pad_01[4760];
}; // size: 0x1490

class __declspec(align(1)) C_BaseEntityAPI {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(1)) CTakeDamageInfoAPI {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(4)) CCollisionProperty {
public:
    // VPhysicsCollisionAttribute_t m_collisionAttribute;
    char pad_00[64];
    Vector m_vecMins; // 0x40
    Vector m_vecMaxs; // 0x4c
    char pad_01[2];
    uint8_t m_usSolidFlags; // 0x5a
    SolidType_t m_nSolidType; // 0x5b
    uint8_t m_triggerBloat; // 0x5c
    SurroundingBoundsType_t m_nSurroundType; // 0x5d
    uint8_t m_CollisionGroup; // 0x5e
    uint8_t m_nEnablePhysics; // 0x5f
    float m_flBoundingRadius; // 0x60
    Vector m_vecSpecifiedSurroundingMins; // 0x64
    Vector m_vecSpecifiedSurroundingMaxs; // 0x70
    Vector m_vecSurroundingMaxs; // 0x7c
    Vector m_vecSurroundingMins; // 0x88
    Vector m_vCapsuleCenter1; // 0x94
    Vector m_vCapsuleCenter2; // 0xa0
    float m_flCapsuleRadius; // 0xac
}; // size: 0xb0

class __declspec(align(8)) CLogicalEntity : public C_BaseEntity {
public:
}; // size: 0x608

/// C_BaseFlex::Emphasized_Phoneme
class __declspec(align(4)) C_BaseFlex__Emphasized_Phoneme {
public:
    // CUtlString m_sClassName;
    char pad_00[24];
    float m_flAmount; // 0x18
    bool m_bRequired; // 0x1c
    bool m_bBasechecked; // 0x1d
    bool m_bValid; // 0x1e
    char pad_01[1];
}; // size: 0x20

class __declspec(align(8)) C_EntityFlame : public C_BaseEntity {
public:
    // CHandle< C_BaseEntity > m_hEntAttached;
    // CHandle< C_BaseEntity > m_hOldAttached;
    char pad_017[44];
    bool m_bCheapEffect; // 0x634
    char pad_018[27];
}; // size: 0x650

class __declspec(align(8)) C_RopeKeyframe : public C_BaseModelEntity {
public:
    // CBitVec< 10 > m_LinksTouchingSomething;
    char pad_026[12];
    int32_t m_nLinksTouchingSomething; // 0xe94
    bool m_bApplyWind; // 0xe98
    int32_t m_fPrevLockedPoints; // 0xe9c
    int32_t m_iForcePointMoveCounter; // 0xea0
    bool m_bPrevEndPointPos[2]; // 0xea4
    Vector m_vPrevEndPointPos; // 0xea8
    char pad_027[12];
    float m_flCurScroll; // 0xec0
    float m_flScrollSpeed; // 0xec4
    uint16_t m_RopeFlags; // 0xec8
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex;
    char pad_028[638];
    uint8_t m_nSegments; // 0x1148
    // CHandle< C_BaseEntity > m_hStartPoint;
    // CHandle< C_BaseEntity > m_hEndPoint;
    char pad_029[11];
    AttachmentHandle_t m_iStartAttachment; // 0x1154
    AttachmentHandle_t m_iEndAttachment; // 0x1155
    uint8_t m_Subdiv; // 0x1156
    int16_t m_RopeLength; // 0x1158
    int16_t m_Slack; // 0x115a
    float m_TextureScale; // 0x115c
    uint8_t m_fLockedPoints; // 0x1160
    uint8_t m_nChangeCount; // 0x1161
    float m_Width; // 0x1164
    // C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial;
    char pad_030[24];
    int32_t m_TextureHeight; // 0x1180
    Vector m_vecImpulse; // 0x1184
    Vector m_vecPreviousImpulse; // 0x1190
    float m_flCurrentGustTimer; // 0x119c
    float m_flCurrentGustLifetime; // 0x11a0
    float m_flTimeToNextGust; // 0x11a4
    Vector m_vWindDir; // 0x11a8
    Vector m_vColorMod; // 0x11b4
    Vector m_vCachedEndPointAttachmentPos; // 0x11c0
    char pad_031[12];
    QAngle m_vCachedEndPointAttachmentAngle; // 0x11d8
    char pad_032[12];
    bool m_bConstrainBetweenEndpoints; // 0x11f0
    // bitfield:1 m_bEndPointAttachmentPositionsDirty;
    // bitfield:1 m_bEndPointAttachmentAnglesDirty;
    // bitfield:1 m_bNewDataThisFrame;
    // bitfield:1 m_bPhysicsInitted;
    char pad_033[7];
}; // size: 0x11f8

/// C_RopeKeyframe::CPhysicsDelegate
class __declspec(align(8)) C_RopeKeyframe__CPhysicsDelegate {
public:
    char pad_00[8];
    C_RopeKeyframe* m_pKeyframe; // 0x8
}; // size: 0x10

/// C_SceneEntity::QueuedEvents_t
class __declspec(align(4)) C_SceneEntity__QueuedEvents_t {
public:
    float starttime; // 0x0
    char pad_00[20];
}; // size: 0x18

class __declspec(align(8)) C_TintController : public C_BaseEntity {
public:
    char pad_017[24];
}; // size: 0x620

/// CFlashlightEffect
class __declspec(align(4)) CFlashlightEffect0 {
public:
    char pad_00[16];
    bool m_bIsOn; // 0x10
    char pad_01[15];
    bool m_bMuzzleFlashEnabled; // 0x20
    float m_flMuzzleFlashBrightness; // 0x24
    // Quaternion m_quatMuzzleFlashOrientation;
    char pad_02[24];
    Vector m_vecMuzzleFlashOrigin; // 0x40
    float m_flFov; // 0x4c
    float m_flFarZ; // 0x50
    float m_flLinearAtten; // 0x54
    bool m_bCastsShadows; // 0x58
    float m_flCurrentPullBackDist; // 0x5c
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_FlashlightTexture;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_MuzzleFlashTexture;
    char pad_03[16];
    char m_textureName[64]; // 0x70
    char pad_04[560];
}; // size: 0x2e0

/// CInterpolatedValue
class __declspec(align(4)) CInterpolatedValue0 {
public:
    float m_flStartTime; // 0x0
    float m_flEndTime; // 0x4
    float m_flStartValue; // 0x8
    float m_flEndValue; // 0xc
    int32_t m_nInterpType; // 0x10
}; // size: 0x14

/// IClientAlphaProperty
class __declspec(align(1)) IClientAlphaProperty0 {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(8)) C_SkyCamera : public C_BaseEntity {
public:
    // sky3dparams_t m_skyboxData;
    // CUtlStringToken m_skyboxSlotToken;
    char pad_017[148];
    bool m_bUseAngles; // 0x69c
    C_SkyCamera* m_pNext; // 0x6a0
}; // size: 0x6a8

class __declspec(align(8)) CSkyboxReference : public C_BaseEntity {
public:
    // WorldGroupId_t m_worldGroupId;
    // CHandle< C_SkyCamera > m_hSkyCamera;
    char pad_017[8];
}; // size: 0x610

class __declspec(align(4)) sky3dparams_t {
public:
    char pad_00[8];
    int16_t scale; // 0x8
    Vector origin; // 0xc
    bool bClip3DSkyBoxNearToWorldFar; // 0x18
    float flClip3DSkyBoxNearToWorldFarOffset; // 0x1c
    fogparams_t fog; // 0x20
    // WorldGroupId_t m_nWorldGroupID;
    char pad_01[8];
}; // size: 0x90

/// TimedEvent
class __declspec(align(4)) TimedEvent0 {
public:
    float m_TimeBetweenEvents; // 0x0
    float m_fNextEvent; // 0x4
}; // size: 0x8

class __declspec(align(8)) VPhysicsCollisionAttribute_t {
public:
    char pad_00[8];
    uint64_t m_nInteractsAs; // 0x8
    uint64_t m_nInteractsWith; // 0x10
    uint64_t m_nInteractsExclude; // 0x18
    uint32_t m_nEntityId; // 0x20
    uint32_t m_nOwnerId; // 0x24
    uint16_t m_nHierarchyId; // 0x28
    uint16_t m_nDetailLayerMask; // 0x2a
    uint8_t m_nDetailLayerMaskType; // 0x2c
    uint8_t m_nTargetDetailLayer; // 0x2d
    uint8_t m_nCollisionGroup; // 0x2e
    uint8_t m_nCollisionFunctionMask; // 0x2f
}; // size: 0x30

class __declspec(align(4)) CEffectData {
public:
    // VectorWS m_vOrigin;
    // VectorWS m_vStart;
    char pad_00[32];
    Vector m_vNormal; // 0x20
    QAngle m_vAngles; // 0x2c
    // CEntityHandle m_hEntity;
    // CEntityHandle m_hOtherEntity;
    char pad_01[8];
    float m_flScale; // 0x40
    float m_flMagnitude; // 0x44
    float m_flRadius; // 0x48
    // CUtlStringToken m_nSurfaceProp;
    // CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > m_nEffectIndex;
    char pad_02[12];
    uint32_t m_nDamageType; // 0x58
    uint8_t m_nPenetrate; // 0x5c
    uint16_t m_nMaterial; // 0x5e
    int16_t m_nHitBox; // 0x60
    uint8_t m_nColor; // 0x62
    uint8_t m_fFlags; // 0x63
    AttachmentHandle_t m_nAttachmentIndex; // 0x64
    // CUtlStringToken m_nAttachmentName;
    char pad_03[6];
    uint16_t m_iEffectName; // 0x6c
    uint8_t m_nExplosionType; // 0x6e
    char pad_04[9];
}; // size: 0x78

class __declspec(align(8)) C_EnvDetailController : public C_BaseEntity {
public:
    float m_flFadeStartDist; // 0x608
    float m_flFadeEndDist; // 0x60c
}; // size: 0x610

class __declspec(align(4)) C_EnvWindShared {
public:
    char pad_00[8];
    GameTime_t m_flStartTime; // 0x8
    uint32_t m_iWindSeed; // 0xc
    uint16_t m_iMinWind; // 0x10
    uint16_t m_iMaxWind; // 0x12
    int32_t m_windRadius; // 0x14
    uint16_t m_iMinGust; // 0x18
    uint16_t m_iMaxGust; // 0x1a
    float m_flMinGustDelay; // 0x1c
    float m_flMaxGustDelay; // 0x20
    float m_flGustDuration; // 0x24
    uint16_t m_iGustDirChange; // 0x28
    uint16_t m_iInitialWindDir; // 0x2a
    float m_flInitialWindSpeed; // 0x2c
    Vector m_location; // 0x30
    // CHandle< C_BaseEntity > m_hEntOwner;
    char pad_01[188];
}; // size: 0xf8

class __declspec(align(8)) C_InfoLadderDismount : public C_BaseEntity {
public:
}; // size: 0x608

class __declspec(align(4)) shard_model_desc_t {
public:
    char pad_00[8];
    int32_t m_nModelID; // 0x8
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterialBase;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterialDamageOverlay;
    char pad_01[20];
    ShardSolid_t m_solid; // 0x20
    Vector2D m_vecPanelSize; // 0x24
    Vector2D m_vecStressPositionA; // 0x2c
    Vector2D m_vecStressPositionB; // 0x34
    // C_NetworkUtlVectorBase< Vector2D > m_vecPanelVertices;
    // C_NetworkUtlVectorBase< Vector4D > m_vInitialPanelVertices;
    char pad_02[52];
    float m_flGlassHalfThickness; // 0x70
    bool m_bHasParent; // 0x74
    bool m_bParentFrozen; // 0x75
    // CUtlStringToken m_SurfacePropStringToken;
    char pad_03[10];
}; // size: 0x80

class __declspec(align(8)) C_GameRulesProxy : public C_BaseEntity {
public:
}; // size: 0x608

class __declspec(align(4)) C_GameRules {
public:
    char pad_00[8];
    CNetworkVarChainer __m_pChainEntity; // 0x8
    int32_t m_nTotalPausedTicks; // 0x30
    int32_t m_nPauseStartTick; // 0x34
    bool m_bGamePaused; // 0x38
    char pad_01[7];
}; // size: 0x40

class __declspec(align(4)) CGlowProperty {
public:
    char pad_00[8];
    Vector m_fGlowColor; // 0x8
    char pad_01[28];
    int32_t m_iGlowType; // 0x30
    int32_t m_iGlowTeam; // 0x34
    int32_t m_nGlowRange; // 0x38
    int32_t m_nGlowRangeMin; // 0x3c
    // Color m_glowColorOverride;
    char pad_02[4];
    bool m_bFlashing; // 0x44
    float m_flGlowTime; // 0x48
    float m_flGlowStartTime; // 0x4c
    bool m_bEligibleForScreenHighlight; // 0x50
    bool m_bGlowing; // 0x51
    char pad_03[6];
}; // size: 0x58

class __declspec(align(1)) C_MultiplayRules {
public:
    char pad_00[64];
}; // size: 0x40

class __declspec(align(8)) PhysicsRagdollPose_t {
public:
    // C_NetworkUtlVectorBase< CTransform > m_Transforms;
    // CHandle< C_BaseEntity > m_hOwner;
    char pad_00[36];
    bool m_bSetFromDebugHistory; // 0x24
    char pad_01[35];
}; // size: 0x48

class __declspec(align(1)) C_SingleplayRules {
public:
    char pad_00[64];
}; // size: 0x40

class __declspec(align(8)) C_SoundOpvarSetPointBase : public C_BaseEntity {
public:
    // CUtlSymbolLarge m_iszStackName;
    // CUtlSymbolLarge m_iszOperatorName;
    // CUtlSymbolLarge m_iszOpvarName;
    char pad_017[24];
    int32_t m_iOpvarIndex; // 0x620
    bool m_bUseAutoCompare; // 0x624
    bool m_bFastRefresh; // 0x625
    char pad_018[2];
}; // size: 0x628

class __declspec(align(8)) C_SoundOpvarSetPointEntity : public C_SoundOpvarSetPointBase {
public:
}; // size: 0x628

class __declspec(align(8)) C_SoundOpvarSetAABBEntity : public C_SoundOpvarSetPointEntity {
public:
}; // size: 0x628

class __declspec(align(8)) C_SoundOpvarSetOBBEntity : public C_SoundOpvarSetAABBEntity {
public:
}; // size: 0x628

class __declspec(align(8)) C_SoundOpvarSetPathCornerEntity : public C_SoundOpvarSetPointEntity {
public:
}; // size: 0x628

class __declspec(align(8)) C_SoundOpvarSetAutoRoomEntity : public C_SoundOpvarSetPointEntity {
public:
}; // size: 0x628

class __declspec(align(8)) C_SoundOpvarSetOBBWindEntity : public C_SoundOpvarSetPointBase {
public:
}; // size: 0x628

class __declspec(align(1)) C_TeamplayRules {
public:
    char pad_00[64];
}; // size: 0x40

class __declspec(align(8)) C_PortraitWorldCallbackHandler : public C_BaseEntity {
public:
    char pad_017[8];
}; // size: 0x610

class __declspec(align(4)) CEconItemAttribute {
public:
    char pad_00[48];
    uint16_t m_iAttributeDefinitionIndex; // 0x30
    float m_flValue; // 0x34
    float m_flInitialValue; // 0x38
    int32_t m_nRefundableCurrency; // 0x3c
    bool m_bSetBonus; // 0x40
    char pad_01[7];
}; // size: 0x48

class __declspec(align(4)) CAttributeManager {
public:
    // CUtlVector< CHandle< C_BaseEntity > > m_Providers;
    char pad_00[32];
    int32_t m_iReapplyProvisionParity; // 0x20
    // CHandle< C_BaseEntity > m_hOuter;
    char pad_01[4];
    bool m_bPreventLoopback; // 0x28
    attributeprovidertypes_t m_ProviderType; // 0x2c
    // CUtlVector< CAttributeManager::cached_attribute_float_t > m_CachedResults;
    char pad_02[32];
}; // size: 0x50

class __declspec(align(8)) CAttributeList {
public:
    // C_UtlVectorEmbeddedNetworkVar< CEconItemAttribute > m_Attributes;
    char pad_00[112];
    CAttributeManager* m_pManager; // 0x70
}; // size: 0x78

/// CAttributeManager::cached_attribute_float_t
class __declspec(align(4)) CAttributeManager__cached_attribute_float_t {
public:
    float flIn; // 0x0
    // CUtlSymbolLarge iAttribHook;
    char pad_00[12];
    float flOut; // 0x10
    char pad_01[4];
}; // size: 0x18

class __declspec(align(8)) C_EconItemView : public IEconItemInterface {
public:
    char pad_01[88];
    bool m_bInventoryImageRgbaRequested; // 0x60
    bool m_bInventoryImageTriedCache; // 0x61
    char pad_02[28];
    int32_t m_nInventoryImageRgbaWidth; // 0x80
    int32_t m_nInventoryImageRgbaHeight; // 0x84
    char m_szCurrentLoadCachedFileName[260]; // 0x88
    char pad_03[44];
    bool m_bRestoreCustomMaterialAfterPrecache; // 0x1b8
    uint16_t m_iItemDefinitionIndex; // 0x1ba
    int32_t m_iEntityQuality; // 0x1bc
    uint32_t m_iEntityLevel; // 0x1c0
    uint64_t m_iItemID; // 0x1c8
    uint32_t m_iItemIDHigh; // 0x1d0
    uint32_t m_iItemIDLow; // 0x1d4
    uint32_t m_iAccountID; // 0x1d8
    uint32_t m_iInventoryPosition; // 0x1dc
    char pad_04[8];
    bool m_bInitialized; // 0x1e8
    bool m_bDisallowSOC; // 0x1e9
    bool m_bIsStoreItem; // 0x1ea
    bool m_bIsTradeItem; // 0x1eb
    int32_t m_iEntityQuantity; // 0x1ec
    int32_t m_iRarityOverride; // 0x1f0
    int32_t m_iQualityOverride; // 0x1f4
    int32_t m_iOriginOverride; // 0x1f8
    uint8_t m_ubStyleOverride; // 0x1fc
    uint8_t m_unClientFlags; // 0x1fd
    char pad_05[8];
    CAttributeList m_AttributeList; // 0x208
    CAttributeList m_NetworkedDynamicAttributes; // 0x280
    char m_szCustomName[161]; // 0x2f8
    char m_szCustomNameOverride[161]; // 0x399
    char pad_06[46];
    bool m_bInitializedTags; // 0x468
    char pad_07[7];
}; // size: 0x470

class __declspec(align(8)) C_AttributeContainer : public CAttributeManager {
public:
    C_EconItemView m_Item; // 0x50
    int32_t m_iExternalItemProviderRegisteredToken; // 0x4c0
    uint64_t m_ullRegisteredAsItemID; // 0x4c8
}; // size: 0x4d0

/// C_EconEntity::AttachedModelData_t
class __declspec(align(4)) C_EconEntity__AttachedModelData_t {
public:
    int32_t m_iModelDisplayFlags; // 0x0
}; // size: 0x4

class __declspec(align(4)) EntitySpottedState_t {
public:
    char pad_00[8];
    bool m_bSpotted; // 0x8
    uint32_t m_bSpottedByMask[2]; // 0xc
    char pad_01[4];
}; // size: 0x18

class __declspec(align(8)) C_CSGameRules {
public:
    char pad_00[64];
    bool m_bFreezePeriod; // 0x40
    bool m_bWarmupPeriod; // 0x41
    GameTime_t m_fWarmupPeriodEnd; // 0x44
    GameTime_t m_fWarmupPeriodStart; // 0x48
    bool m_bTerroristTimeOutActive; // 0x4c
    bool m_bCTTimeOutActive; // 0x4d
    float m_flTerroristTimeOutRemaining; // 0x50
    float m_flCTTimeOutRemaining; // 0x54
    int32_t m_nTerroristTimeOuts; // 0x58
    int32_t m_nCTTimeOuts; // 0x5c
    bool m_bTechnicalTimeOut; // 0x60
    bool m_bMatchWaitingForResume; // 0x61
    int32_t m_iFreezeTime; // 0x64
    int32_t m_iRoundTime; // 0x68
    float m_fMatchStartTime; // 0x6c
    GameTime_t m_fRoundStartTime; // 0x70
    GameTime_t m_flRestartRoundTime; // 0x74
    bool m_bGameRestart; // 0x78
    float m_flGameStartTime; // 0x7c
    float m_timeUntilNextPhaseStarts; // 0x80
    int32_t m_gamePhase; // 0x84
    int32_t m_totalRoundsPlayed; // 0x88
    int32_t m_nRoundsPlayedThisPhase; // 0x8c
    int32_t m_nOvertimePlaying; // 0x90
    int32_t m_iHostagesRemaining; // 0x94
    bool m_bAnyHostageReached; // 0x98
    bool m_bMapHasBombTarget; // 0x99
    bool m_bMapHasRescueZone; // 0x9a
    bool m_bMapHasBuyZone; // 0x9b
    bool m_bIsQueuedMatchmaking; // 0x9c
    int32_t m_nQueuedMatchmakingMode; // 0xa0
    bool m_bIsValveDS; // 0xa4
    bool m_bLogoMap; // 0xa5
    bool m_bPlayAllStepSoundsOnServer; // 0xa6
    int32_t m_iSpectatorSlotCount; // 0xa8
    int32_t m_MatchDevice; // 0xac
    bool m_bHasMatchStarted; // 0xb0
    int32_t m_nNextMapInMapgroup; // 0xb4
    char m_szTournamentEventName[512]; // 0xb8
    char m_szTournamentEventStage[512]; // 0x2b8
    char m_szMatchStatTxt[512]; // 0x4b8
    char m_szTournamentPredictionsTxt[512]; // 0x6b8
    int32_t m_nTournamentPredictionsPct; // 0x8b8
    GameTime_t m_flCMMItemDropRevealStartTime; // 0x8bc
    GameTime_t m_flCMMItemDropRevealEndTime; // 0x8c0
    bool m_bIsDroppingItems; // 0x8c4
    bool m_bIsQuestEligible; // 0x8c5
    bool m_bIsHltvActive; // 0x8c6
    bool m_bBombPlanted; // 0x8c7
    uint16_t m_arrProhibitedItemIndices[100]; // 0x8c8
    uint32_t m_arrTournamentActiveCasterAccounts[4]; // 0x990
    int32_t m_numBestOfMaps; // 0x9a0
    int32_t m_nHalloweenMaskListSeed; // 0x9a4
    bool m_bBombDropped; // 0x9a8
    int32_t m_iRoundWinStatus; // 0x9ac
    int32_t m_eRoundWinReason; // 0x9b0
    bool m_bTCantBuy; // 0x9b4
    bool m_bCTCantBuy; // 0x9b5
    int32_t m_iMatchStats_RoundResults[30]; // 0x9b8
    int32_t m_iMatchStats_PlayersAlive_CT[30]; // 0xa30
    int32_t m_iMatchStats_PlayersAlive_T[30]; // 0xaa8
    float m_TeamRespawnWaveTimes[32]; // 0xb20
    GameTime_t m_flNextRespawnWave; // 0xba0
    char pad_01[124];
    Vector m_vMinimapMins; // 0xc20
    Vector m_vMinimapMaxs; // 0xc2c
    float m_MinimapVerticalSectionHeights[8]; // 0xc38
    uint64_t m_ullLocalMatchID; // 0xc58
    int32_t m_nEndMatchMapGroupVoteTypes[10]; // 0xc60
    int32_t m_nEndMatchMapGroupVoteOptions[10]; // 0xc88
    int32_t m_nEndMatchMapVoteWinner; // 0xcb0
    int32_t m_iNumConsecutiveCTLoses; // 0xcb4
    int32_t m_iNumConsecutiveTerroristLoses; // 0xcb8
    char pad_02[188];
    int32_t m_nMatchAbortedEarlyReason; // 0xd78
    bool m_bHasTriggeredRoundStartMusic; // 0xd7c
    bool m_bSwitchingTeamsAtRoundReset; // 0xd7d
    char pad_03[24];
    CCSGameModeRules* m_pGameModeRules; // 0xd98
    // C_RetakeGameRules m_RetakeRules;
    char pad_04[344];
    uint8_t m_nMatchEndCount; // 0xef8
    int32_t m_nTTeamIntroVariant; // 0xefc
    int32_t m_nCTTeamIntroVariant; // 0xf00
    bool m_bTeamIntroPeriod; // 0xf04
    int32_t m_iRoundEndWinnerTeam; // 0xf08
    int32_t m_eRoundEndReason; // 0xf0c
    bool m_bRoundEndShowTimerDefend; // 0xf10
    int32_t m_iRoundEndTimerTime; // 0xf14
    // CUtlString m_sRoundEndFunFactToken;
    // CPlayerSlot m_iRoundEndFunFactPlayerSlot;
    char pad_05[12];
    int32_t m_iRoundEndFunFactData1; // 0xf24
    int32_t m_iRoundEndFunFactData2; // 0xf28
    int32_t m_iRoundEndFunFactData3; // 0xf2c
    // CUtlString m_sRoundEndMessage;
    char pad_06[8];
    int32_t m_iRoundEndPlayerCount; // 0xf38
    bool m_bRoundEndNoMusic; // 0xf3c
    int32_t m_iRoundEndLegacy; // 0xf40
    uint8_t m_nRoundEndCount; // 0xf44
    int32_t m_iRoundStartRoundNumber; // 0xf48
    uint8_t m_nRoundStartCount; // 0xf4c
    // float64 m_flLastPerfSampleTime;
    char pad_07[16403];
}; // size: 0x4f60

class __declspec(align(8)) C_CSGameRulesProxy : public C_GameRulesProxy {
public:
    C_CSGameRules* m_pGameRules; // 0x608
}; // size: 0x610

class __declspec(align(8)) CCSGameModeRules {
public:
    char pad_00[8];
    CNetworkVarChainer __m_pChainEntity; // 0x8
}; // size: 0x30

class __declspec(align(4)) C_RetakeGameRules {
public:
    char pad_00[312];
    int32_t m_nMatchSeed; // 0x138
    bool m_bBlockersPresent; // 0x13c
    bool m_bRoundInProgress; // 0x13d
    int32_t m_iFirstSecondHalfRound; // 0x140
    int32_t m_iBombSite; // 0x144
    // CHandle< C_CSPlayerPawn > m_hBombPlanter;
    char pad_01[16];
}; // size: 0x158

class __declspec(align(8)) CCSGameModeRules_Noop {
public:
    char pad_00[48];
}; // size: 0x30

class __declspec(align(8)) CCSGameModeRules_ArmsRace {
public:
    // C_NetworkUtlVectorBase< CUtlString > m_WeaponSequence;
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CCSGameModeRules_Deathmatch {
public:
    char pad_00[48];
    GameTime_t m_flDMBonusStartTime; // 0x30
    float m_flDMBonusTimeLength; // 0x34
    // CUtlString m_sDMBonusWeapon;
    char pad_01[8];
}; // size: 0x40

class __declspec(align(8)) C_BaseCombatCharacter : public C_BaseFlex {
public:
    // C_NetworkUtlVectorBase< CHandle< C_EconWearable > > m_hMyWearables;
    char pad_036[24];
    AttachmentHandle_t m_leftFootAttachment; // 0x1368
    AttachmentHandle_t m_rightFootAttachment; // 0x1369
    // C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode;
    char pad_037[4];
    float m_flWaterWorldZ; // 0x1370
    float m_flWaterNextTraceTime; // 0x1374
    char pad_038[96];
}; // size: 0x13d8

class __declspec(align(8)) C_BasePlayerPawn : public C_BaseCombatCharacter {
public:
    CPlayer_WeaponServices* m_pWeaponServices; // 0x13d8
    CPlayer_ItemServices* m_pItemServices; // 0x13e0
    CPlayer_AutoaimServices* m_pAutoaimServices; // 0x13e8
    CPlayer_ObserverServices* m_pObserverServices; // 0x13f0
    CPlayer_WaterServices* m_pWaterServices; // 0x13f8
    CPlayer_UseServices* m_pUseServices; // 0x1400
    CPlayer_FlashlightServices* m_pFlashlightServices; // 0x1408
    CPlayer_CameraServices* m_pCameraServices; // 0x1410
    CPlayer_MovementServices* m_pMovementServices; // 0x1418
    // C_UtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges;
    char pad_039[112];
    QAngle v_angle; // 0x1490
    QAngle v_anglePrevious; // 0x149c
    uint32_t m_iHideHUD; // 0x14a8
    char pad_040[4];
    sky3dparams_t m_skybox3d; // 0x14b0
    GameTime_t m_flDeathTime; // 0x1540
    Vector m_vecPredictionError; // 0x1544
    GameTime_t m_flPredictionErrorTime; // 0x1550
    char pad_041[28];
    Vector m_vecLastCameraSetupLocalOrigin; // 0x1570
    GameTime_t m_flLastCameraSetupTime; // 0x157c
    float m_flFOVSensitivityAdjust; // 0x1580
    float m_flMouseSensitivity; // 0x1584
    Vector m_vOldOrigin; // 0x1588
    float m_flOldSimulationTime; // 0x1594
    int32_t m_nLastExecutedCommandNumber; // 0x1598
    int32_t m_nLastExecutedCommandTick; // 0x159c
    // CHandle< CBasePlayerController > m_hController;
    // CHandle< CBasePlayerController > m_hDefaultController;
    char pad_042[8];
    bool m_bIsSwappingToPredictableController; // 0x15a8
    char pad_043[7];
}; // size: 0x15b0

class __declspec(align(8)) C_CSPlayerPawnBase : public C_BasePlayerPawn {
public:
    char pad_044[16];
    CCSPlayer_PingServices* m_pPingServices; // 0x15c0
    CSPlayerState m_previousPlayerState; // 0x15c8
    CSPlayerState m_iPlayerState; // 0x15cc
    bool m_bHasMovedSinceSpawn; // 0x15d0
    GameTime_t m_flLastSpawnTimeIndex; // 0x15d4
    int32_t m_iProgressBarDuration; // 0x15d8
    float m_flProgressBarStartTime; // 0x15dc
    GameTime_t m_flClientDeathTime; // 0x15e0
    float m_flFlashBangTime; // 0x15e4
    float m_flFlashScreenshotAlpha; // 0x15e8
    float m_flFlashOverlayAlpha; // 0x15ec
    bool m_bFlashBuildUp; // 0x15f0
    bool m_bFlashDspHasBeenCleared; // 0x15f1
    bool m_bFlashScreenshotHasBeenGrabbed; // 0x15f2
    float m_flFlashMaxAlpha; // 0x15f4
    float m_flFlashDuration; // 0x15f8
    GameTime_t m_flClientHealthFadeChangeTimestamp; // 0x15fc
    int32_t m_nClientHealthFadeParityValue; // 0x1600
    float m_fNextThinkPushAway; // 0x1604
    char pad_045[4];
    float m_flCurrentMusicStartTime; // 0x160c
    float m_flMusicRoundStartTime; // 0x1610
    bool m_bDeferStartMusicOnWarmup; // 0x1614
    float m_flLastSmokeOverlayAlpha; // 0x1618
    float m_flLastSmokeAge; // 0x161c
    Vector m_vLastSmokeOverlayColor; // 0x1620
    // CHandle< CCSPlayerController > m_hOriginalController;
    char pad_046[36];
}; // size: 0x1650

class __declspec(align(16)) C_CSPlayerPawn : public C_CSPlayerPawnBase {
public:
    char pad_047[16];
    CCSPlayer_BulletServices* m_pBulletServices; // 0x1660
    CCSPlayer_HostageServices* m_pHostageServices; // 0x1668
    CCSPlayer_BuyServices* m_pBuyServices; // 0x1670
    CCSPlayer_GlowServices* m_pGlowServices; // 0x1678
    CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0x1680
    CCSPlayer_DamageReactServices* m_pDamageReactServices; // 0x1688
    GameTime_t m_flHealthShotBoostExpirationTime; // 0x1690
    GameTime_t m_flLastFiredWeaponTime; // 0x1694
    bool m_bHasFemaleVoice; // 0x1698
    float m_flLandingTimeSeconds; // 0x169c
    float m_flOldFallVelocity; // 0x16a0
    char m_szLastPlaceName[18]; // 0x16a4
    bool m_bPrevDefuser; // 0x16b6
    bool m_bPrevHelmet; // 0x16b7
    int32_t m_nPrevArmorVal; // 0x16b8
    int32_t m_nPrevGrenadeAmmoCount; // 0x16bc
    uint32_t m_unPreviousWeaponHash; // 0x16c0
    uint32_t m_unWeaponHash; // 0x16c4
    bool m_bInBuyZone; // 0x16c8
    bool m_bPreviouslyInBuyZone; // 0x16c9
    QAngle m_aimPunchAngle; // 0x16cc
    QAngle m_aimPunchAngleVel; // 0x16d8
    GameTick_t m_aimPunchTickBase; // 0x16e4
    float m_aimPunchTickFraction; // 0x16e8
    char pad_048[36];
    bool m_bInLanding; // 0x1710
    float m_flLandingStartTime; // 0x1714
    bool m_bInHostageRescueZone; // 0x1718
    bool m_bInBombZone; // 0x1719
    bool m_bIsBuyMenuOpen; // 0x171a
    GameTime_t m_flTimeOfLastInjury; // 0x171c
    GameTime_t m_flNextSprayDecalTime; // 0x1720
    char pad_049[340];
    int32_t m_iRetakesOffering; // 0x1878
    int32_t m_iRetakesOfferingCard; // 0x187c
    bool m_bRetakesHasDefuseKit; // 0x1880
    bool m_bRetakesMVPLastRound; // 0x1881
    int32_t m_iRetakesMVPBoostItem; // 0x1884
    loadout_slot_t m_RetakesMVPBoostExtraUtility; // 0x1888
    char pad_050[1];
    bool m_bNeedToReApplyGloves; // 0x188d
    C_EconItemView m_EconGloves; // 0x1890
    uint8_t m_nEconGlovesChanged; // 0x1d00
    bool m_bMustSyncRagdollState; // 0x1d01
    int32_t m_nRagdollDamageBone; // 0x1d04
    Vector m_vRagdollDamageForce; // 0x1d08
    Vector m_vRagdollDamagePosition; // 0x1d14
    char m_szRagdollDamageWeaponName[64]; // 0x1d20
    bool m_bRagdollDamageHeadshot; // 0x1d60
    Vector m_vRagdollServerOrigin; // 0x1d64
    char pad_051[1648];
    GameTime_t m_lastLandTime; // 0x23e0
    bool m_bOnGroundLastTick; // 0x23e4
    // CHandle< C_CS2HudModelArms > m_hHudModelArms;
    char pad_052[28];
    QAngle m_qDeathEyeAngles; // 0x2404
    bool m_bSkipOneHeadConstraintUpdate; // 0x2410
    bool m_bLeftHanded; // 0x2411
    GameTime_t m_fSwitchedHandednessTime; // 0x2414
    float m_flViewmodelOffsetX; // 0x2418
    float m_flViewmodelOffsetY; // 0x241c
    float m_flViewmodelOffsetZ; // 0x2420
    float m_flViewmodelFOV; // 0x2424
    uint32_t m_vecPlayerPatchEconIndices[5]; // 0x2428
    // Color m_GunGameImmunityColor;
    // CUtlVector< C_BulletHitModel* > m_vecBulletHitModels;
    char pad_053[140];
    bool m_bIsWalking; // 0x24c8
    char pad_054[4];
    QAngle m_thirdPersonHeading; // 0x24d0
    char pad_055[132];
    float m_flSlopeDropOffset; // 0x2560
    char pad_056[116];
    float m_flSlopeDropHeight; // 0x25d8
    char pad_057[116];
    Vector m_vHeadConstraintOffset; // 0x2650
    char pad_058[132];
    EntitySpottedState_t m_entitySpottedState; // 0x26e0
    bool m_bIsScoped; // 0x26f8
    bool m_bResumeZoom; // 0x26f9
    bool m_bIsDefusing; // 0x26fa
    bool m_bIsGrabbingHostage; // 0x26fb
    CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0x26fc
    GameTime_t m_flEmitSoundTime; // 0x2700
    bool m_bInNoDefuseArea; // 0x2704
    int32_t m_nWhichBombZone; // 0x2708
    int32_t m_iShotsFired; // 0x270c
    float m_flFlinchStack; // 0x2710
    float m_flVelocityModifier; // 0x2714
    float m_flHitHeading; // 0x2718
    int32_t m_nHitBodyPart; // 0x271c
    bool m_bWaitForNoAttack; // 0x2720
    float m_ignoreLadderJumpTime; // 0x2724
    char pad_059[1];
    bool m_bKilledByHeadshot; // 0x2729
    int32_t m_ArmorValue; // 0x272c
    uint16_t m_unCurrentEquipmentValue; // 0x2730
    uint16_t m_unRoundStartEquipmentValue; // 0x2732
    uint16_t m_unFreezetimeEndEquipmentValue; // 0x2734
    // CEntityIndex m_nLastKillerIndex;
    char pad_060[6];
    bool m_bOldIsScoped; // 0x273c
    bool m_bHasDeathInfo; // 0x273d
    float m_flDeathInfoTime; // 0x2740
    Vector m_vecDeathInfoOrigin; // 0x2744
    char pad_061[4];
    GameTime_t m_grenadeParameterStashTime; // 0x2754
    bool m_bGrenadeParametersStashed; // 0x2758
    QAngle m_angStashedShootAngles; // 0x275c
    Vector m_vecStashedGrenadeThrowPosition; // 0x2768
    Vector m_vecStashedVelocity; // 0x2774
    QAngle m_angShootAngleHistory; // 0x2780
    char pad_062[12];
    Vector m_vecThrowPositionHistory; // 0x2798
    char pad_063[12];
    Vector m_vecVelocityHistory; // 0x27b0
    // C_UtlVectorEmbeddedNetworkVar< PredictedDamageTag_t > m_PredictedDamageTags;
    char pad_064[116];
    GameTick_t m_nPrevHighestReceivedDamageTagTick; // 0x2830
    int32_t m_nHighestAppliedDamageTagTick; // 0x2834
    char pad_065[5428];
    bool m_bShouldAutobuyDMWeapons; // 0x3d6c
    GameTime_t m_fImmuneToGunGameDamageTime; // 0x3d70
    bool m_bGunGameImmunity; // 0x3d74
    GameTime_t m_fImmuneToGunGameDamageTimeLast; // 0x3d78
    float m_fMolotovDamageTime; // 0x3d7c
    char pad_066[4];
    Vector m_vecLastAliveLocalVelocity; // 0x3d84
    float m_fRenderingClipPlane[4]; // 0x3d90
    int32_t m_nLastClipPlaneSetupFrame; // 0x3da0
    Vector m_vecLastClipCameraPos; // 0x3da4
    Vector m_vecLastClipCameraForward; // 0x3db0
    bool m_bClipHitStaticWorld; // 0x3dbc
    bool m_bCachedPlaneIsValid; // 0x3dbd
    C_CSWeaponBase* m_pClippingWeapon; // 0x3dc0
    ParticleIndex_t m_nPlayerInfernoBodyFx; // 0x3dc8
    char pad_067[4];
    QAngle m_angEyeAngles; // 0x3dd0
    char pad_068[132];
    GameTime_t m_arrOldEyeAnglesTimes; // 0x3e60
    char pad_069[12];
    QAngle m_arrOldEyeAngles; // 0x3e70
    char pad_070[36];
    QAngle m_angEyeAnglesVelocity; // 0x3ea0
    // CEntityIndex m_iIDEntIndex;
    char pad_071[4];
    CountdownTimer m_delayTargetIDTimer; // 0x3eb0
    // CEntityIndex m_iTargetItemEntIdx;
    // CEntityIndex m_iOldIDEntIndex;
    char pad_072[8];
    CountdownTimer m_holdTargetIDTimer; // 0x3ed0
    char pad_073[8];
}; // size: 0x3ef0

class __declspec(align(4)) CSPerRoundStats_t {
public:
    char pad_00[48];
    int32_t m_iKills; // 0x30
    int32_t m_iDeaths; // 0x34
    int32_t m_iAssists; // 0x38
    int32_t m_iDamage; // 0x3c
    int32_t m_iEquipmentValue; // 0x40
    int32_t m_iMoneySaved; // 0x44
    int32_t m_iKillReward; // 0x48
    int32_t m_iLiveTime; // 0x4c
    int32_t m_iHeadShotKills; // 0x50
    int32_t m_iObjective; // 0x54
    int32_t m_iCashEarned; // 0x58
    int32_t m_iUtilityDamage; // 0x5c
    int32_t m_iEnemiesFlashed; // 0x60
    char pad_01[4];
}; // size: 0x68

class __declspec(align(4)) CSMatchStats_t {
public:
    char pad_00[104];
    int32_t m_iEnemy5Ks; // 0x68
    int32_t m_iEnemy4Ks; // 0x6c
    int32_t m_iEnemy3Ks; // 0x70
    int32_t m_iEnemyKnifeKills; // 0x74
    int32_t m_iEnemyTaserKills; // 0x78
    char pad_01[4];
}; // size: 0x80

class __declspec(align(8)) C_CSGO_TeamPreviewCharacterPosition : public C_BaseEntity {
public:
    int32_t m_nVariant; // 0x608
    int32_t m_nRandom; // 0x60c
    int32_t m_nOrdinal; // 0x610
    // CUtlString m_sWeaponName;
    char pad_017[8];
    uint64_t m_xuid; // 0x620
    C_EconItemView m_agentItem; // 0x628
    C_EconItemView m_glovesItem; // 0xa98
    C_EconItemView m_weaponItem; // 0xf08
    char pad_018[48];
}; // size: 0x13a8

class __declspec(align(8)) C_CSGO_TeamSelectCharacterPosition : public C_CSGO_TeamPreviewCharacterPosition {
public:
}; // size: 0x13a8

class __declspec(align(8)) C_CSGO_TeamSelectTerroristPosition : public C_CSGO_TeamSelectCharacterPosition {
public:
}; // size: 0x13a8

class __declspec(align(8)) C_CSGO_TeamSelectCounterTerroristPosition : public C_CSGO_TeamSelectCharacterPosition {
public:
}; // size: 0x13a8

class __declspec(align(8)) C_CSGO_TeamIntroCharacterPosition : public C_CSGO_TeamPreviewCharacterPosition {
public:
}; // size: 0x13a8

class __declspec(align(8)) C_CSGO_TeamIntroTerroristPosition : public C_CSGO_TeamIntroCharacterPosition {
public:
}; // size: 0x13a8

class __declspec(align(8)) C_CSGO_TeamIntroCounterTerroristPosition : public C_CSGO_TeamIntroCharacterPosition {
public:
}; // size: 0x13a8

class __declspec(align(8)) CCSGO_WingmanIntroCharacterPosition : public C_CSGO_TeamIntroCharacterPosition {
public:
}; // size: 0x13a8

class __declspec(align(8)) CCSGO_WingmanIntroTerroristPosition : public CCSGO_WingmanIntroCharacterPosition {
public:
}; // size: 0x13a8

class __declspec(align(8)) CCSGO_WingmanIntroCounterTerroristPosition : public CCSGO_WingmanIntroCharacterPosition {
public:
}; // size: 0x13a8

class __declspec(align(8)) C_CSMinimapBoundary : public C_BaseEntity {
public:
}; // size: 0x608

class __declspec(align(8)) C_CSPetPlacement : public C_BaseEntity {
public:
}; // size: 0x608

class __declspec(align(4)) PredictedDamageTag_t {
public:
    char pad_00[48];
    GameTick_t nTagTick; // 0x30
    float flFlinchModSmall; // 0x34
    float flFlinchModLarge; // 0x38
    float flFriendlyFireDamageReductionRatio; // 0x3c
}; // size: 0x40

class __declspec(align(8)) C_PlayerPing : public C_BaseEntity {
public:
    // CHandle< C_CSPlayerPawn > m_hPlayer;
    // CHandle< C_BaseEntity > m_hPingedEntity;
    char pad_017[56];
    int32_t m_iType; // 0x640
    bool m_bUrgent; // 0x644
    char m_szPlaceName[18]; // 0x645
    char pad_018[1];
}; // size: 0x658

class __declspec(align(4)) CCSPlayer_PingServices : public CPlayerPawnComponent {
public:
    // CHandle< C_PlayerPing > m_hPlayerPing;
    char pad_02[8];
}; // size: 0x50

class __declspec(align(8)) C_CSPlayerResource : public C_BaseEntity {
public:
    bool m_bHostageAlive[12]; // 0x608
    bool m_isHostageFollowingSomeone[12]; // 0x614
    // CEntityIndex[12] m_iHostageEntityIDs;
    char pad_017[48];
    Vector m_bombsiteCenterA; // 0x650
    Vector m_bombsiteCenterB; // 0x65c
    int32_t m_hostageRescueX[4]; // 0x668
    int32_t m_hostageRescueY[4]; // 0x678
    int32_t m_hostageRescueZ[4]; // 0x688
    bool m_bEndMatchNextMapAllVoted; // 0x698
    bool m_foundGoalPositions; // 0x699
    char pad_018[6];
}; // size: 0x6a0

class __declspec(align(4)) CCSPlayer_DamageReactServices : public CPlayerPawnComponent {
public:
    char pad_02[8];
}; // size: 0x50

class __declspec(align(4)) CCSPlayerBase_CameraServices : public CPlayer_CameraServices {
public:
    uint32_t m_iFOV; // 0x290
    uint32_t m_iFOVStart; // 0x294
    GameTime_t m_flFOVTime; // 0x298
    float m_flFOVRate; // 0x29c
    // CHandle< C_BaseEntity > m_hZoomOwner;
    char pad_09[4];
    float m_flLastShotFOV; // 0x2a4
}; // size: 0x2a8

class __declspec(align(2)) WeaponPurchaseCount_t {
public:
    char pad_00[48];
    uint16_t m_nItemDefIndex; // 0x30
    uint16_t m_nCount; // 0x32
    char pad_01[4];
}; // size: 0x38

class __declspec(align(1)) WeaponPurchaseTracker_t {
public:
    // C_UtlVectorEmbeddedNetworkVar< WeaponPurchaseCount_t > m_weaponPurchases;
    char pad_00[112];
}; // size: 0x70

class __declspec(align(4)) CCSPlayer_ActionTrackingServices : public CPlayerPawnComponent {
public:
    // CHandle< C_BasePlayerWeapon > m_hLastWeaponBeforeC4AutoSwitch;
    char pad_02[4];
    bool m_bIsRescuing; // 0x4c
    char pad_03[3];
    WeaponPurchaseTracker_t m_weaponPurchasesThisMatch; // 0x50
    WeaponPurchaseTracker_t m_weaponPurchasesThisRound; // 0xc0
}; // size: 0x130

class __declspec(align(4)) CCSPlayer_BulletServices : public CPlayerPawnComponent {
public:
    int32_t m_totalHitsOnServer; // 0x48
    char pad_02[92];
}; // size: 0xa8

class __declspec(align(4)) SellbackPurchaseEntry_t {
public:
    char pad_00[48];
    uint16_t m_unDefIdx; // 0x30
    int32_t m_nCost; // 0x34
    int32_t m_nPrevArmor; // 0x38
    bool m_bPrevHelmet; // 0x3c
    // CEntityHandle m_hItem;
    char pad_01[11];
}; // size: 0x48

class __declspec(align(4)) CCSPlayer_BuyServices : public CPlayerPawnComponent {
public:
    // C_UtlVectorEmbeddedNetworkVar< SellbackPurchaseEntry_t > m_vecSellbackPurchaseEntries;
    char pad_02[104];
}; // size: 0xb0

class __declspec(align(4)) CCSPlayer_CameraServices : public CCSPlayerBase_CameraServices {
public:
    float m_flDeathCamTilt; // 0x2a8
    char pad_010[4];
    Vector m_vClientScopeInaccuracy; // 0x2b0
    char pad_011[132];
}; // size: 0x340

class __declspec(align(4)) CCSPlayer_HostageServices : public CPlayerPawnComponent {
public:
    // CHandle< C_BaseEntity > m_hCarriedHostage;
    // CHandle< C_BaseEntity > m_hCarriedHostageProp;
    char pad_02[8];
}; // size: 0x50

class __declspec(align(4)) CCSPlayer_ItemServices : public CPlayer_ItemServices {
public:
    bool m_bHasDefuser; // 0x48
    bool m_bHasHelmet; // 0x49
    char pad_02[6];
}; // size: 0x50

class __declspec(align(4)) CCSPlayerLegacyJump {
public:
    char pad_00[16];
    bool m_bOldJumpPressed; // 0x10
    float m_flJumpPressedTime; // 0x14
}; // size: 0x18

class __declspec(align(4)) CCSPlayerModernJump {
public:
    char pad_00[16];
    GameTick_t m_nLastActualJumpPressTick; // 0x10
    float m_flLastActualJumpPressFrac; // 0x14
    GameTick_t m_nLastUsableJumpPressTick; // 0x18
    float m_flLastUsableJumpPressFrac; // 0x1c
    GameTick_t m_nLastLandedTick; // 0x20
    float m_flLastLandedFrac; // 0x24
    float m_flLastLandedVelocityX; // 0x28
    float m_flLastLandedVelocityY; // 0x2c
    float m_flLastLandedVelocityZ; // 0x30
    char pad_01[4];
}; // size: 0x38

class __declspec(align(8)) CCSPlayer_MovementServices : public CPlayer_MovementServices_Humanoid {
public:
    Vector m_vecLadderNormal; // 0x270
    int32_t m_nLadderSurfacePropIndex; // 0x27c
    bool m_bDucked; // 0x280
    float m_flDuckAmount; // 0x284
    float m_flDuckSpeed; // 0x288
    bool m_bDuckOverride; // 0x28c
    bool m_bDesiresDuck; // 0x28d
    bool m_bDucking; // 0x28e
    float m_flDuckOffset; // 0x290
    uint32_t m_nDuckTimeMsecs; // 0x294
    uint32_t m_nDuckJumpTimeMsecs; // 0x298
    uint32_t m_nJumpTimeMsecs; // 0x29c
    float m_flLastDuckTime; // 0x2a0
    char pad_07[12];
    Vector2D m_vecLastPositionAtFullCrouchSpeed; // 0x2b0
    bool m_duckUntilOnGround; // 0x2b8
    bool m_bHasWalkMovedSinceLastJump; // 0x2b9
    bool m_bInStuckTest; // 0x2ba
    char pad_08[524];
    int32_t m_nTraceCount; // 0x4c8
    int32_t m_StuckLast; // 0x4cc
    bool m_bSpeedCropped; // 0x4d0
    int32_t m_nOldWaterLevel; // 0x4d4
    float m_flWaterEntryTime; // 0x4d8
    Vector m_vecForward; // 0x4dc
    Vector m_vecLeft; // 0x4e8
    Vector m_vecUp; // 0x4f4
    int32_t m_nGameCodeHasMovedPlayerAfterCommand; // 0x500
    GameTime_t m_fStashGrenadeParameterWhen; // 0x504
    uint64_t m_nButtonDownMaskPrev; // 0x508
    float m_flOffsetTickCompleteTime; // 0x510
    float m_flOffsetTickStashedSpeed; // 0x514
    float m_flStamina; // 0x518
    float m_flHeightAtJumpStart; // 0x51c
    float m_flMaxJumpHeightThisJump; // 0x520
    float m_flMaxJumpHeightLastJump; // 0x524
    float m_flStaminaAtJumpStart; // 0x528
    float m_flVelMulAtJumpStart; // 0x52c
    float m_flAccumulatedJumpError; // 0x530
    char pad_09[4];
    CCSPlayerLegacyJump m_LegacyJump; // 0x538
    CCSPlayerModernJump m_ModernJump; // 0x550
    GameTick_t m_nLastJumpTick; // 0x588
    float m_flLastJumpFrac; // 0x58c
    float m_flLastJumpVelocityZ; // 0x590
    bool m_bJumpApexPending; // 0x594
    float m_flTicksSinceLastSurfingDetected; // 0x598
    bool m_bWasSurfing; // 0x59c
    char pad_010[140];
    Vector m_vecInputRotated; // 0x62c
    char pad_011[2080];
}; // size: 0xe58

class __declspec(align(4)) CCSPlayer_UseServices : public CPlayer_UseServices {
public:
}; // size: 0x48

class __declspec(align(4)) CCSPlayer_WaterServices : public CPlayer_WaterServices {
public:
    float m_flWaterJumpTime; // 0x48
    Vector m_vecWaterJumpVel; // 0x4c
    float m_flSwimSoundTime; // 0x58
    char pad_02[20];
}; // size: 0x70

class __declspec(align(4)) CCSPlayer_WeaponServices : public CPlayer_WeaponServices {
public:
    char pad_03[40];
    GameTime_t m_flNextAttack; // 0xd0
    bool m_bIsLookingAtWeapon; // 0xd4
    bool m_bIsHoldingLookAtWeapon; // 0xd5
    uint32_t m_nOldTotalShootPositionHistoryCount; // 0xd8
    char pad_04[660];
    uint32_t m_nOldTotalInputHistoryCount; // 0x370
    // C_NetworkUtlVectorBase< uint8 > m_networkAnimTiming;
    char pad_05[4652];
    bool m_bBlockInspectUntilNextGraphUpdate; // 0x15a0
    char pad_06[47];
}; // size: 0x15d0

class __declspec(align(8)) CCS2WeaponGraphController {
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
}; // size: 0x2a0

class __declspec(align(4)) CCSObserver_ObserverServices : public CPlayer_ObserverServices {
public:
    char pad_03[4];
    ObserverInterpState_t m_obsInterpState; // 0x64
    char pad_04[136];
}; // size: 0xf0

class __declspec(align(4)) CCSObserver_CameraServices : public CCSPlayerBase_CameraServices {
public:
}; // size: 0x2a8

class __declspec(align(8)) CCSObserver_MovementServices : public CPlayer_MovementServices {
public:
}; // size: 0x240

class __declspec(align(4)) CCSObserver_UseServices : public CPlayer_UseServices {
public:
}; // size: 0x48

class __declspec(align(4)) CCSPlayerController_ActionTrackingServices : public CPlayerControllerComponent {
public:
    // C_UtlVectorEmbeddedNetworkVar< CSPerRoundStats_t > m_perRoundStats;
    char pad_02[104];
    CSMatchStats_t m_matchStats; // 0xa8
    int32_t m_iNumRoundKills; // 0x128
    int32_t m_iNumRoundKillsHeadshots; // 0x12c
    float m_flTotalRoundDamageDealt; // 0x130
    char pad_03[4];
}; // size: 0x138

class __declspec(align(8)) CBasePlayerController : public C_BaseEntity {
public:
    char pad_017[8];
    C_CommandContext m_CommandContext; // 0x610
    uint64_t m_nInButtonsWhichAreToggles; // 0x6b8
    uint32_t m_nTickBase; // 0x6c0
    // CHandle< C_BasePlayerPawn > m_hPawn;
    char pad_018[4];
    bool m_bKnownTeamMismatch; // 0x6c8
    // CHandle< C_BasePlayerPawn > m_hPredictedPawn;
    // CSplitScreenSlot m_nSplitScreenSlot;
    // CHandle< CBasePlayerController > m_hSplitOwner;
    // CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers;
    char pad_019[39];
    bool m_bIsHLTV; // 0x6f0
    PlayerConnectedState m_iConnected; // 0x6f4
    char m_iszPlayerName[128]; // 0x6f8
    char pad_020[8];
    uint64_t m_steamID; // 0x780
    bool m_bIsLocalPlayerController; // 0x788
    bool m_bNoClipEnabled; // 0x789
    uint32_t m_iDesiredFOV; // 0x78c
    char pad_021[104];
}; // size: 0x7f8

class __declspec(align(8)) CCSPlayerController : public CBasePlayerController {
public:
    char pad_022[16];
    CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // 0x808
    CCSPlayerController_InventoryServices* m_pInventoryServices; // 0x810
    CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // 0x818
    CCSPlayerController_DamageServices* m_pDamageServices; // 0x820
    uint32_t m_iPing; // 0x828
    bool m_bHasCommunicationAbuseMute; // 0x82c
    uint32_t m_uiCommunicationMuteFlags; // 0x830
    // CUtlSymbolLarge m_szCrosshairCodes;
    char pad_023[12];
    uint8_t m_iPendingTeamNum; // 0x840
    GameTime_t m_flForceTeamTime; // 0x844
    int32_t m_iCompTeammateColor; // 0x848
    bool m_bEverPlayedOnTeam; // 0x84c
    GameTime_t m_flPreviousForceJoinTeamTime; // 0x850
    // CUtlSymbolLarge m_szClan;
    // CUtlString m_sSanitizedPlayerName;
    char pad_024[20];
    int32_t m_iCoachingTeam; // 0x868
    uint64_t m_nPlayerDominated; // 0x870
    uint64_t m_nPlayerDominatingMe; // 0x878
    int32_t m_iCompetitiveRanking; // 0x880
    int32_t m_iCompetitiveWins; // 0x884
    int8_t m_iCompetitiveRankType; // 0x888
    int32_t m_iCompetitiveRankingPredicted_Win; // 0x88c
    int32_t m_iCompetitiveRankingPredicted_Loss; // 0x890
    int32_t m_iCompetitiveRankingPredicted_Tie; // 0x894
    int32_t m_nEndMatchNextMapVote; // 0x898
    uint16_t m_unActiveQuestId; // 0x89c
    uint32_t m_rtActiveMissionPeriod; // 0x8a0
    // QuestProgress::Reason m_nQuestProgressReason;
    char pad_025[4];
    uint32_t m_unPlayerTvControlFlags; // 0x8a8
    char pad_026[44];
    int32_t m_iDraftIndex; // 0x8d8
    uint32_t m_msQueuedModeDisconnectionTimestamp; // 0x8dc
    uint32_t m_uiAbandonRecordedReason; // 0x8e0
    uint32_t m_eNetworkDisconnectionReason; // 0x8e4
    bool m_bCannotBeKicked; // 0x8e8
    bool m_bEverFullyConnected; // 0x8e9
    bool m_bAbandonAllowsSurrender; // 0x8ea
    bool m_bAbandonOffersInstantSurrender; // 0x8eb
    bool m_bDisconnection1MinWarningPrinted; // 0x8ec
    bool m_bScoreReported; // 0x8ed
    int32_t m_nDisconnectionTick; // 0x8f0
    char pad_027[12];
    bool m_bControllingBot; // 0x900
    bool m_bHasControlledBotThisRound; // 0x901
    bool m_bHasBeenControlledByPlayerThisRound; // 0x902
    int32_t m_nBotsControlledThisRound; // 0x904
    bool m_bCanControlObservedBot; // 0x908
    // CHandle< C_CSPlayerPawn > m_hPlayerPawn;
    // CHandle< C_CSObserverPawn > m_hObserverPawn;
    char pad_028[11];
    bool m_bPawnIsAlive; // 0x914
    uint32_t m_iPawnHealth; // 0x918
    int32_t m_iPawnArmor; // 0x91c
    bool m_bPawnHasDefuser; // 0x920
    bool m_bPawnHasHelmet; // 0x921
    uint16_t m_nPawnCharacterDefIndex; // 0x922
    int32_t m_iPawnLifetimeStart; // 0x924
    int32_t m_iPawnLifetimeEnd; // 0x928
    int32_t m_iPawnBotDifficulty; // 0x92c
    // CHandle< CCSPlayerController > m_hOriginalControllerOfCurrentPawn;
    char pad_029[4];
    int32_t m_iScore; // 0x934
    uint8_t m_recentKillQueue[8]; // 0x938
    uint8_t m_nFirstKill; // 0x940
    uint8_t m_nKillCount; // 0x941
    bool m_bMvpNoMusic; // 0x942
    int32_t m_eMvpReason; // 0x944
    int32_t m_iMusicKitID; // 0x948
    int32_t m_iMusicKitMVPs; // 0x94c
    int32_t m_iMVPs; // 0x950
    bool m_bIsPlayerNameDirty; // 0x954
    bool m_bFireBulletsSeedSynchronized; // 0x955
    char pad_030[2];
}; // size: 0x958

class __declspec(align(8)) CDamageRecord {
public:
    // CHandle< C_CSPlayerPawn > m_PlayerDamager;
    // CHandle< C_CSPlayerPawn > m_PlayerRecipient;
    // CHandle< CCSPlayerController > m_hPlayerControllerDamager;
    // CHandle< CCSPlayerController > m_hPlayerControllerRecipient;
    // CUtlString m_szPlayerDamagerName;
    // CUtlString m_szPlayerRecipientName;
    char pad_00[80];
    uint64_t m_DamagerXuid; // 0x50
    uint64_t m_RecipientXuid; // 0x58
    float m_flBulletsDamage; // 0x60
    float m_flDamage; // 0x64
    float m_flActualHealthRemoved; // 0x68
    int32_t m_iNumHits; // 0x6c
    int32_t m_iLastBulletUpdate; // 0x70
    bool m_bIsOtherEnemy; // 0x74
    EKillTypes_t m_killType; // 0x75
    char pad_01[2];
}; // size: 0x78

class __declspec(align(4)) CCSPlayerController_DamageServices : public CPlayerControllerComponent {
public:
    int32_t m_nSendUpdate; // 0x40
    // C_UtlVectorEmbeddedNetworkVar< CDamageRecord > m_DamageList;
    char pad_02[108];
}; // size: 0xb0

class __declspec(align(4)) CCSPlayerController_InGameMoneyServices : public CPlayerControllerComponent {
public:
    int32_t m_iAccount; // 0x40
    int32_t m_iStartAccount; // 0x44
    int32_t m_iTotalCashSpent; // 0x48
    int32_t m_iCashSpentThisRound; // 0x4c
}; // size: 0x50

class __declspec(align(2)) ServerAuthoritativeWeaponSlot_t {
public:
    char pad_00[48];
    uint16_t unClass; // 0x30
    uint16_t unSlot; // 0x32
    uint16_t unItemDefIdx; // 0x34
    char pad_01[2];
}; // size: 0x38

/// CCSPlayerController_InventoryServices::NetworkedLoadoutSlot_t
class __declspec(align(8)) CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
public:
    C_EconItemView* pItem; // 0x0
    uint16_t team; // 0x8
    uint16_t slot; // 0xa
    char pad_00[188];
}; // size: 0xc8

class __declspec(align(4)) CCSPlayerController_InventoryServices : public CPlayerControllerComponent {
public:
    // CUtlVector< CCSPlayerController_InventoryServices::NetworkedLoadoutSlot_t > m_vecNetworkableLoadout;
    char pad_02[24];
    uint16_t m_unMusicID; // 0x58
    MedalRank_t m_rank; // 0x5c
    char pad_03[20];
    int32_t m_nPersonaDataPublicLevel; // 0x74
    int32_t m_nPersonaDataPublicCommendsLeader; // 0x78
    int32_t m_nPersonaDataPublicCommendsTeacher; // 0x7c
    int32_t m_nPersonaDataPublicCommendsFriendly; // 0x80
    int32_t m_nPersonaDataXpTrailLevel; // 0x84
    // C_UtlVectorEmbeddedNetworkVar< ServerAuthoritativeWeaponSlot_t > m_vecServerAuthoritativeWeaponSlots;
    char pad_04[104];
}; // size: 0xf0

/// C_IronSightController
class __declspec(align(4)) C_IronSightController0 {
public:
    char pad_00[16];
    bool m_bIronSightAvailable; // 0x10
    float m_flIronSightAmount; // 0x14
    float m_flIronSightAmountGained; // 0x18
    float m_flIronSightAmountBiased; // 0x1c
    float m_flIronSightAmount_Interpolated; // 0x20
    float m_flIronSightAmountGained_Interpolated; // 0x24
    float m_flIronSightAmountBiased_Interpolated; // 0x28
    float m_flInterpolationLastUpdated; // 0x2c
    QAngle m_angDeltaAverage; // 0x30
    char pad_01[84];
    QAngle m_angViewLast; // 0x90
    Vector2D m_vecDotCoords; // 0x9c
    float m_flFiringInaccuracyExtraWidthMultiplier; // 0xa4
    float m_flSpeedRatio; // 0xa8
    char pad_02[4];
}; // size: 0xb0

class __declspec(align(8)) C_EnvWindClientside : public C_BaseEntity {
public:
    C_EnvWindShared m_EnvWindShared; // 0x608
}; // size: 0x700

/// CGlobalLightBase
class __declspec(align(4)) CGlobalLightBase0 {
public:
    char pad_00[16];
    bool m_bSpotLight; // 0x10
    Vector m_SpotLightOrigin; // 0x14
    QAngle m_SpotLightAngles; // 0x20
    Vector m_ShadowDirection; // 0x2c
    Vector m_AmbientDirection; // 0x38
    Vector m_SpecularDirection; // 0x44
    Vector m_InspectorSpecularDirection; // 0x50
    float m_flSpecularPower; // 0x5c
    float m_flSpecularIndependence; // 0x60
    // Color m_SpecularColor;
    char pad_01[4];
    bool m_bStartDisabled; // 0x68
    bool m_bEnabled; // 0x69
    // Color m_LightColor;
    // Color m_AmbientColor1;
    // Color m_AmbientColor2;
    // Color m_AmbientColor3;
    char pad_02[16];
    float m_flSunDistance; // 0x7c
    float m_flFOV; // 0x80
    float m_flNearZ; // 0x84
    float m_flFarZ; // 0x88
    bool m_bEnableShadows; // 0x8c
    bool m_bOldEnableShadows; // 0x8d
    bool m_bBackgroundClearNotRequired; // 0x8e
    float m_flCloudScale; // 0x90
    float m_flCloud1Speed; // 0x94
    float m_flCloud1Direction; // 0x98
    float m_flCloud2Speed; // 0x9c
    float m_flCloud2Direction; // 0xa0
    char pad_03[12];
    float m_flAmbientScale1; // 0xb0
    float m_flAmbientScale2; // 0xb4
    float m_flGroundScale; // 0xb8
    float m_flLightScale; // 0xbc
    float m_flFoWDarkness; // 0xc0
    bool m_bEnableSeparateSkyboxFog; // 0xc4
    Vector m_vFowColor; // 0xc8
    Vector m_ViewOrigin; // 0xd4
    QAngle m_ViewAngles; // 0xe0
    float m_flViewFoV; // 0xec
    Vector m_WorldPoints; // 0xf0
    char pad_04[940];
    Vector2D m_vFogOffsetLayer0; // 0x4a8
    Vector2D m_vFogOffsetLayer1; // 0x4b0
    // CHandle< C_BaseEntity > m_hEnvWind;
    // CHandle< C_BaseEntity > m_hEnvSky;
    char pad_05[8];
}; // size: 0x4c0

class __declspec(align(16)) C_GlobalLight : public C_BaseEntity {
public:
    char pad_017[1224];
    uint16_t m_WindClothForceHandle; // 0xad0
    char pad_018[46];
}; // size: 0xb00

/// C_CSGO_PreviewPlayer_GraphController
class __declspec(align(8)) C_CSGO_PreviewPlayer_GraphController0 {
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
}; // size: 0x200

class __declspec(align(8)) C_CSGO_MapPreviewCameraPathNode : public C_BaseEntity {
public:
    // CUtlSymbolLarge m_szParentPathUniqueID;
    char pad_017[8];
    int32_t m_nPathIndex; // 0x610
    Vector m_vInTangentLocal; // 0x614
    Vector m_vOutTangentLocal; // 0x620
    float m_flFOV; // 0x62c
    float m_flCameraSpeed; // 0x630
    float m_flEaseIn; // 0x634
    float m_flEaseOut; // 0x638
    Vector m_vInTangentWorld; // 0x63c
    Vector m_vOutTangentWorld; // 0x648
    char pad_018[4];
}; // size: 0x658

class __declspec(align(8)) C_CSGO_MapPreviewCameraPath : public C_BaseEntity {
public:
    float m_flZFar; // 0x608
    float m_flZNear; // 0x60c
    bool m_bLoop; // 0x610
    bool m_bVerticalFOV; // 0x611
    bool m_bConstantSpeed; // 0x612
    float m_flDuration; // 0x614
    char pad_017[64];
    float m_flPathLength; // 0x658
    float m_flPathDuration; // 0x65c
    char pad_018[20];
    bool m_bDofEnabled; // 0x674
    float m_flDofNearBlurry; // 0x678
    float m_flDofNearCrisp; // 0x67c
    float m_flDofFarCrisp; // 0x680
    float m_flDofFarBlurry; // 0x684
    float m_flDofTiltToGround; // 0x688
    char pad_019[4];
}; // size: 0x690

class __declspec(align(4)) CCSPlayer_GlowServices : public CPlayerPawnComponent {
public:
    char pad_02[8];
}; // size: 0x50

class __declspec(align(8)) C_VoteController : public C_BaseEntity {
public:
    char pad_017[16];
    int32_t m_iActiveIssueIndex; // 0x618
    int32_t m_iOnlyTeamToVote; // 0x61c
    int32_t m_nVoteOptionCount[5]; // 0x620
    int32_t m_nPotentialVotes; // 0x634
    bool m_bVotesDirty; // 0x638
    bool m_bTypeDirty; // 0x639
    bool m_bIsYesNoVote; // 0x63a
    char pad_018[5];
}; // size: 0x640

class __declspec(align(8)) C_MapVetoPickController : public C_BaseEntity {
public:
    char pad_017[16];
    int32_t m_nDraftType; // 0x618
    int32_t m_nTeamWinningCoinToss; // 0x61c
    int32_t m_nTeamWithFirstChoice[64]; // 0x620
    int32_t m_nVoteMapIdsList[7]; // 0x720
    int32_t m_nAccountIDs[64]; // 0x73c
    int32_t m_nMapId0[64]; // 0x83c
    int32_t m_nMapId1[64]; // 0x93c
    int32_t m_nMapId2[64]; // 0xa3c
    int32_t m_nMapId3[64]; // 0xb3c
    int32_t m_nMapId4[64]; // 0xc3c
    int32_t m_nMapId5[64]; // 0xd3c
    int32_t m_nStartingSide0[64]; // 0xe3c
    int32_t m_nCurrentPhase; // 0xf3c
    int32_t m_nPhaseStartTick; // 0xf40
    int32_t m_nPhaseDurationTicks; // 0xf44
    int32_t m_nPostDataUpdateTick; // 0xf48
    bool m_bDisabledHud; // 0xf4c
    char pad_018[3];
}; // size: 0xf50

/// CPlayerSprayDecalRenderHelper
class __declspec(align(1)) CPlayerSprayDecalRenderHelper0 {
public:
    char pad_00[48];
}; // size: 0x30

class __declspec(align(8)) C_CSGO_TeamPreviewCamera : public C_CSGO_MapPreviewCameraPath {
public:
    int32_t m_nVariant; // 0x690
    char pad_020[4];
}; // size: 0x698

class __declspec(align(8)) C_CSGO_TeamSelectCamera : public C_CSGO_TeamPreviewCamera {
public:
}; // size: 0x698

class __declspec(align(8)) C_CSGO_TerroristTeamIntroCamera : public C_CSGO_TeamPreviewCamera {
public:
}; // size: 0x698

class __declspec(align(8)) C_CSGO_TerroristWingmanIntroCamera : public C_CSGO_TeamPreviewCamera {
public:
}; // size: 0x698

class __declspec(align(8)) C_CSGO_CounterTerroristTeamIntroCamera : public C_CSGO_TeamPreviewCamera {
public:
}; // size: 0x698

class __declspec(align(8)) C_CSGO_CounterTerroristWingmanIntroCamera : public C_CSGO_TeamPreviewCamera {
public:
}; // size: 0x698

class __declspec(align(8)) C_CSGO_EndOfMatchCamera : public C_CSGO_TeamPreviewCamera {
public:
}; // size: 0x698

class __declspec(align(8)) C_CSGO_EndOfMatchCharacterPosition : public C_CSGO_TeamPreviewCharacterPosition {
public:
}; // size: 0x13a8

class __declspec(align(8)) C_CSGO_EndOfMatchLineupEndpoint : public C_BaseEntity {
public:
}; // size: 0x608

class __declspec(align(8)) C_CSGO_EndOfMatchLineupStart : public C_CSGO_EndOfMatchLineupEndpoint {
public:
}; // size: 0x608

class __declspec(align(8)) C_CSGO_EndOfMatchLineupEnd : public C_CSGO_EndOfMatchLineupEndpoint {
public:
}; // size: 0x608

class __declspec(align(8)) C_CsmFovOverride : public C_BaseEntity {
public:
    // CUtlString m_cameraName;
    char pad_017[8];
    float m_flCsmFovOverrideValue; // 0x610
    char pad_018[4];
}; // size: 0x618

/// CNmEventConsumerHudModelArmsAttributes
class __declspec(align(8)) CNmEventConsumerHudModelArmsAttributes0 {
public:
    char pad_00[88];
}; // size: 0x58

/// inv_image_map_t
class __declspec(align(8)) inv_image_map_t0 {
public:
    // CUtlString map_name;
    char pad_00[8];
    float map_rotation; // 0x8
    char pad_01[4];
}; // size: 0x10

/// inv_image_item_t
class __declspec(align(8)) inv_image_item_t0 {
public:
    Vector position; // 0x0
    QAngle angle; // 0xc
    // CUtlString pose_sequence;
    char pad_00[8];
}; // size: 0x20

/// inv_image_camera_t
class __declspec(align(4)) inv_image_camera_t0 {
public:
    QAngle angle; // 0x0
    float fov; // 0xc
    float znear; // 0x10
    float zfar; // 0x14
    Vector target; // 0x18
    Vector target_nudge; // 0x24
    float orbit_distance; // 0x30
}; // size: 0x34

/// inv_image_light_sun_t
class __declspec(align(4)) inv_image_light_sun_t0 {
public:
    Vector color; // 0x0
    QAngle angle; // 0xc
    float brightness; // 0x18
}; // size: 0x1c

/// inv_image_clearcolor_t
class __declspec(align(4)) inv_image_clearcolor_t0 {
public:
    Vector color; // 0x0
}; // size: 0xc

/// inv_image_light_fill_t
class __declspec(align(4)) inv_image_light_fill_t0 {
public:
    Vector color; // 0x0
    QAngle angle; // 0xc
    float brightness; // 0x18
}; // size: 0x1c

/// inv_image_light_barn_t
class __declspec(align(4)) inv_image_light_barn_t0 {
public:
    Vector color; // 0x0
    QAngle angle; // 0xc
    float brightness; // 0x18
    float orbit_distance; // 0x1c
}; // size: 0x20

/// inv_image_data_t
class __declspec(align(8)) inv_image_data_t0 {
public:
    inv_image_map_t map; // 0x0
    inv_image_item_t item; // 0x10
    inv_image_camera_t camera; // 0x30
    inv_image_light_sun_t lightsun; // 0x64
    inv_image_light_fill_t lightfill; // 0x80
    inv_image_light_barn_t light0; // 0x9c
    inv_image_light_barn_t light1; // 0xbc
    inv_image_clearcolor_t clearcolor; // 0xdc
}; // size: 0xe8

/// CInventoryImageData
class __declspec(align(8)) CInventoryImageData0 {
public:
    InventoryNodeType_t m_nNodeType; // 0x0
    // CUtlString name;
    char pad_00[8];
    inv_image_data_t inventory_image_data; // 0x10
}; // size: 0xf8

class __declspec(align(8)) CCS_PortraitWorldCallbackHandler : public C_BaseEntity {
public:
    char pad_017[8];
}; // size: 0x610

class __declspec(align(8)) C_PointEntity : public C_BaseEntity {
public:
}; // size: 0x608

class __declspec(align(8)) C_EnvCombinedLightProbeVolume : public C_BaseEntity {
public:
    // Color m_Entity_Color;
    char pad_017[4220];
    float m_Entity_flBrightness; // 0x1684
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture;
    char pad_018[8];
    bool m_Entity_bCustomCubemapTexture; // 0x1690
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_AmbientCube;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SDF;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_DC;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_R;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_G;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_B;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture;
    char pad_019[76];
    Vector m_Entity_vBoxMins; // 0x16e0
    Vector m_Entity_vBoxMaxs; // 0x16ec
    bool m_Entity_bMoveable; // 0x16f8
    int32_t m_Entity_nHandshake; // 0x16fc
    int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x1700
    int32_t m_Entity_nPriority; // 0x1704
    bool m_Entity_bStartDisabled; // 0x1708
    float m_Entity_flEdgeFadeDist; // 0x170c
    Vector m_Entity_vEdgeFadeDists; // 0x1710
    int32_t m_Entity_nLightProbeSizeX; // 0x171c
    int32_t m_Entity_nLightProbeSizeY; // 0x1720
    int32_t m_Entity_nLightProbeSizeZ; // 0x1724
    int32_t m_Entity_nLightProbeAtlasX; // 0x1728
    int32_t m_Entity_nLightProbeAtlasY; // 0x172c
    int32_t m_Entity_nLightProbeAtlasZ; // 0x1730
    char pad_020[21];
    bool m_Entity_bEnabled; // 0x1749
    char pad_021[6];
}; // size: 0x1750

class __declspec(align(8)) C_EnvCubemap : public C_BaseEntity {
public:
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture;
    char pad_017[136];
    bool m_Entity_bCustomCubemapTexture; // 0x690
    float m_Entity_flInfluenceRadius; // 0x694
    Vector m_Entity_vBoxProjectMins; // 0x698
    Vector m_Entity_vBoxProjectMaxs; // 0x6a4
    bool m_Entity_bMoveable; // 0x6b0
    int32_t m_Entity_nHandshake; // 0x6b4
    int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x6b8
    int32_t m_Entity_nPriority; // 0x6bc
    float m_Entity_flEdgeFadeDist; // 0x6c0
    Vector m_Entity_vEdgeFadeDists; // 0x6c4
    float m_Entity_flDiffuseScale; // 0x6d0
    bool m_Entity_bStartDisabled; // 0x6d4
    bool m_Entity_bDefaultEnvMap; // 0x6d5
    bool m_Entity_bDefaultSpecEnvMap; // 0x6d6
    bool m_Entity_bIndoorCubeMap; // 0x6d7
    bool m_Entity_bCopyDiffuseFromDefaultCubemap; // 0x6d8
    char pad_018[15];
    bool m_Entity_bEnabled; // 0x6e8
    char pad_019[7];
}; // size: 0x6f0

class __declspec(align(8)) C_EnvCubemapBox : public C_EnvCubemap {
public:
}; // size: 0x6f0

class __declspec(align(8)) C_EnvCubemapFog : public C_BaseEntity {
public:
    float m_flEndDistance; // 0x608
    float m_flStartDistance; // 0x60c
    float m_flFogFalloffExponent; // 0x610
    bool m_bHeightFogEnabled; // 0x614
    float m_flFogHeightWidth; // 0x618
    float m_flFogHeightEnd; // 0x61c
    float m_flFogHeightStart; // 0x620
    float m_flFogHeightExponent; // 0x624
    float m_flLODBias; // 0x628
    bool m_bActive; // 0x62c
    bool m_bStartDisabled; // 0x62d
    float m_flFogMaxOpacity; // 0x630
    int32_t m_nCubemapSourceType; // 0x634
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial;
    // CUtlSymbolLarge m_iszSkyEntity;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture;
    char pad_017[24];
    bool m_bHasHeightFogEnd; // 0x650
    bool m_bFirstTime; // 0x651
    char pad_018[6];
}; // size: 0x658

class __declspec(align(8)) C_GradientFog : public C_BaseEntity {
public:
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hGradientFogTexture;
    char pad_017[8];
    float m_flFogStartDistance; // 0x610
    float m_flFogEndDistance; // 0x614
    bool m_bHeightFogEnabled; // 0x618
    float m_flFogStartHeight; // 0x61c
    float m_flFogEndHeight; // 0x620
    float m_flFarZ; // 0x624
    float m_flFogMaxOpacity; // 0x628
    float m_flFogFalloffExponent; // 0x62c
    float m_flFogVerticalExponent; // 0x630
    // Color m_fogColor;
    char pad_018[4];
    float m_flFogStrength; // 0x638
    float m_flFadeTime; // 0x63c
    bool m_bStartDisabled; // 0x640
    bool m_bIsEnabled; // 0x641
    bool m_bGradientFogNeedsTextures; // 0x642
    char pad_019[93];
}; // size: 0x6a0

class __declspec(align(8)) C_EnvLightProbeVolume : public C_BaseEntity {
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
    char pad_017[4160];
    Vector m_Entity_vBoxMins; // 0x1648
    Vector m_Entity_vBoxMaxs; // 0x1654
    bool m_Entity_bMoveable; // 0x1660
    int32_t m_Entity_nHandshake; // 0x1664
    int32_t m_Entity_nPriority; // 0x1668
    bool m_Entity_bStartDisabled; // 0x166c
    int32_t m_Entity_nLightProbeSizeX; // 0x1670
    int32_t m_Entity_nLightProbeSizeY; // 0x1674
    int32_t m_Entity_nLightProbeSizeZ; // 0x1678
    int32_t m_Entity_nLightProbeAtlasX; // 0x167c
    int32_t m_Entity_nLightProbeAtlasY; // 0x1680
    int32_t m_Entity_nLightProbeAtlasZ; // 0x1684
    char pad_018[9];
    bool m_Entity_bEnabled; // 0x1691
    char pad_019[6];
}; // size: 0x1698

class __declspec(align(8)) C_PlayerVisibility : public C_BaseEntity {
public:
    float m_flVisibilityStrength; // 0x608
    float m_flFogDistanceMultiplier; // 0x60c
    float m_flFogMaxDensityMultiplier; // 0x610
    float m_flFadeTime; // 0x614
    bool m_bStartDisabled; // 0x618
    bool m_bIsEnabled; // 0x619
    char pad_017[30];
}; // size: 0x638

class __declspec(align(8)) C_EnvVolumetricFogController : public C_BaseEntity {
public:
    float m_flScattering; // 0x608
    // Color m_TintColor;
    char pad_017[4];
    float m_flAnisotropy; // 0x610
    float m_flFadeSpeed; // 0x614
    float m_flDrawDistance; // 0x618
    float m_flFadeInStart; // 0x61c
    float m_flFadeInEnd; // 0x620
    float m_flIndirectStrength; // 0x624
    int32_t m_nVolumeDepth; // 0x628
    float m_fFirstVolumeSliceThickness; // 0x62c
    int32_t m_nIndirectTextureDimX; // 0x630
    int32_t m_nIndirectTextureDimY; // 0x634
    int32_t m_nIndirectTextureDimZ; // 0x638
    Vector m_vBoxMins; // 0x63c
    Vector m_vBoxMaxs; // 0x648
    bool m_bActive; // 0x654
    GameTime_t m_flStartAnisoTime; // 0x658
    GameTime_t m_flStartScatterTime; // 0x65c
    GameTime_t m_flStartDrawDistanceTime; // 0x660
    float m_flStartAnisotropy; // 0x664
    float m_flStartScattering; // 0x668
    float m_flStartDrawDistance; // 0x66c
    float m_flDefaultAnisotropy; // 0x670
    float m_flDefaultScattering; // 0x674
    float m_flDefaultDrawDistance; // 0x678
    bool m_bStartDisabled; // 0x67c
    bool m_bEnableIndirect; // 0x67d
    bool m_bIsMaster; // 0x67e
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogIndirectTexture;
    char pad_018[8];
    int32_t m_nForceRefreshCount; // 0x688
    float m_fNoiseSpeed; // 0x68c
    float m_fNoiseStrength; // 0x690
    Vector m_vNoiseScale; // 0x694
    float m_fWindSpeed; // 0x6a0
    Vector m_vWindDirection; // 0x6a4
    bool m_bFirstTime; // 0x6b0
    char pad_019[7];
}; // size: 0x6b8

class __declspec(align(8)) C_EnvVolumetricFogVolume : public C_BaseEntity {
public:
    bool m_bActive; // 0x608
    Vector m_vBoxMins; // 0x60c
    Vector m_vBoxMaxs; // 0x618
    bool m_bStartDisabled; // 0x624
    bool m_bIndirectUseLPVs; // 0x625
    float m_flStrength; // 0x628
    int32_t m_nFalloffShape; // 0x62c
    float m_flFalloffExponent; // 0x630
    float m_flHeightFogDepth; // 0x634
    float m_fHeightFogEdgeWidth; // 0x638
    float m_fIndirectLightStrength; // 0x63c
    float m_fSunLightStrength; // 0x640
    float m_fNoiseStrength; // 0x644
    // Color m_TintColor;
    char pad_017[4];
    bool m_bOverrideTintColor; // 0x64c
    bool m_bOverrideIndirectLightStrength; // 0x64d
    bool m_bOverrideSunLightStrength; // 0x64e
    bool m_bOverrideNoiseStrength; // 0x64f
}; // size: 0x650

class __declspec(align(8)) C_EnvWindController : public C_BaseEntity {
public:
    C_EnvWindShared m_EnvWindShared; // 0x608
    float m_fDirectionVariation; // 0x700
    float m_fSpeedVariation; // 0x704
    float m_fTurbulence; // 0x708
    float m_fVolumeHalfExtentXY; // 0x70c
    float m_fVolumeHalfExtentZ; // 0x710
    int32_t m_nVolumeResolutionXY; // 0x714
    int32_t m_nVolumeResolutionZ; // 0x718
    int32_t m_nClipmapLevels; // 0x71c
    bool m_bIsMaster; // 0x720
    bool m_bFirstTime; // 0x721
    char pad_017[6];
}; // size: 0x728

class __declspec(align(8)) C_EnvWindVolume : public C_BaseEntity {
public:
    bool m_bActive; // 0x608
    Vector m_vBoxMins; // 0x60c
    Vector m_vBoxMaxs; // 0x618
    bool m_bStartDisabled; // 0x624
    int32_t m_nShape; // 0x628
    float m_fWindSpeedMultiplier; // 0x62c
    float m_fWindTurbulenceMultiplier; // 0x630
    float m_fWindSpeedVariationMultiplier; // 0x634
    float m_fWindDirectionVariationMultiplier; // 0x638
    char pad_017[4];
}; // size: 0x640

class __declspec(align(8)) CInfoTarget : public C_PointEntity {
public:
}; // size: 0x608

class __declspec(align(8)) CInfoParticleTarget : public C_PointEntity {
public:
}; // size: 0x608

class __declspec(align(8)) CChoreoInfoTarget : public C_PointEntity {
public:
}; // size: 0x608

class __declspec(align(8)) C_InfoVisibilityBox : public C_BaseEntity {
public:
    char pad_017[4];
    int32_t m_nMode; // 0x60c
    Vector m_vBoxSize; // 0x610
    bool m_bEnabled; // 0x61c
    char pad_018[3];
}; // size: 0x620

class __declspec(align(8)) CInfoWorldLayer : public C_BaseEntity {
public:
    CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x608
    // CUtlSymbolLarge m_worldName;
    // CUtlSymbolLarge m_layerName;
    char pad_017[16];
    bool m_bWorldLayerVisible; // 0x630
    bool m_bEntitiesSpawned; // 0x631
    bool m_bCreateAsChildSpawnGroup; // 0x632
    uint32_t m_hLayerSpawnGroup; // 0x634
    bool m_bWorldLayerActuallyVisible; // 0x638
    char pad_018[7];
}; // size: 0x640

class __declspec(align(8)) CPointChildModifier : public C_PointEntity {
public:
    bool m_bOrphanInsteadOfDeletingChildrenOnRemove; // 0x608
    char pad_017[7];
}; // size: 0x610

class __declspec(align(8)) C_PointCameraVFOV : public C_PointCamera {
public:
    float m_flVerticalFOV; // 0x668
    char pad_018[4];
}; // size: 0x670

class __declspec(align(8)) CPointOrient : public C_BaseEntity {
public:
    // CUtlSymbolLarge m_iszSpawnTargetName;
    // CHandle< C_BaseEntity > m_hTarget;
    char pad_017[12];
    bool m_bActive; // 0x614
    PointOrientGoalDirectionType_t m_nGoalDirection; // 0x618
    PointOrientConstraint_t m_nConstraint; // 0x61c
    float m_flMaxTurnRate; // 0x620
    GameTime_t m_flLastGameTime; // 0x624
}; // size: 0x628

class __declspec(align(8)) CPointTemplate : public CLogicalEntity {
public:
    // CUtlSymbolLarge m_iszWorldName;
    // CUtlSymbolLarge m_iszSource2EntityLumpName;
    // CUtlSymbolLarge m_iszEntityFilterName;
    char pad_017[24];
    float m_flTimeoutInterval; // 0x620
    bool m_bAsynchronouslySpawnEntities; // 0x624
    PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x628
    PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x62c
    // CUtlVector< uint32 > m_createdSpawnGroupHandles;
    // CUtlVector< CEntityHandle > m_SpawnedEntityHandles;
    // HSCRIPT m_ScriptSpawnCallback;
    // HSCRIPT m_ScriptCallbackScope;
    char pad_018[64];
}; // size: 0x670

class __declspec(align(8)) CRagdollManager : public C_BaseEntity {
public:
    int8_t m_iCurrentMaxRagdollCount; // 0x608
    char pad_017[7];
}; // size: 0x610

class __declspec(align(8)) C_SoundAreaEntityBase : public C_BaseEntity {
public:
    bool m_bDisabled; // 0x608
    char pad_017[7];
    bool m_bWasEnabled; // 0x610
    // CUtlSymbolLarge m_iszSoundAreaType;
    char pad_018[12];
    Vector m_vPos; // 0x620
    char pad_019[4];
}; // size: 0x630

class __declspec(align(8)) C_SoundAreaEntitySphere : public C_SoundAreaEntityBase {
public:
    float m_flRadius; // 0x630
    char pad_020[4];
}; // size: 0x638

class __declspec(align(8)) C_SoundAreaEntityOrientedBox : public C_SoundAreaEntityBase {
public:
    Vector m_vMin; // 0x630
    Vector m_vMax; // 0x63c
}; // size: 0x648

class __declspec(align(8)) C_SoundEventEntity : public C_BaseEntity {
public:
    bool m_bStartOnSpawn; // 0x608
    bool m_bToLocalPlayer; // 0x609
    bool m_bStopOnNew; // 0x60a
    bool m_bSaveRestore; // 0x60b
    bool m_bSavedIsPlaying; // 0x60c
    float m_flSavedElapsedTime; // 0x610
    // CUtlSymbolLarge m_iszSourceEntityName;
    // CUtlSymbolLarge m_iszAttachmentName;
    // CEntityOutputTemplate< uint64, uint64 > m_onGUIDChanged;
    char pad_017[52];
    CEntityIOOutput m_onSoundFinished; // 0x648
    float m_flClientCullRadius; // 0x660
    // CUtlSymbolLarge m_iszSoundName;
    // CEntityHandle m_hSource;
    char pad_018[76];
    int32_t m_nEntityIndexSelection; // 0x6b0
    // bitfield:1 m_bClientSideOnly;
    char pad_019[4];
}; // size: 0x6b8

class __declspec(align(8)) C_SoundEventEntityAlias_snd_event_point : public C_SoundEventEntity {
public:
}; // size: 0x6b8

class __declspec(align(8)) C_SoundEventAABBEntity : public C_SoundEventEntity {
public:
    Vector m_vMins; // 0x6b8
    Vector m_vMaxs; // 0x6c4
}; // size: 0x6d0

class __declspec(align(8)) C_SoundEventOBBEntity : public C_SoundEventEntity {
public:
    Vector m_vMins; // 0x6b8
    Vector m_vMaxs; // 0x6c4
    char pad_020[16];
}; // size: 0x6e0

class __declspec(align(8)) C_SoundEventSphereEntity : public C_SoundEventEntity {
public:
    float m_flRadius; // 0x6b8
    char pad_020[4];
}; // size: 0x6c0

class __declspec(align(8)) C_SoundEventConeEntity : public C_SoundEventEntity {
public:
    float m_flEmitterAngle; // 0x6b8
    float m_flSweetSpotAngle; // 0x6bc
    float m_flAttenMin; // 0x6c0
    float m_flAttenMax; // 0x6c4
    // CUtlSymbolLarge m_iszParameterName;
    char pad_020[8];
}; // size: 0x6d0

class __declspec(align(8)) C_SoundEventPathCornerEntity : public C_SoundEventEntity {
public:
    // C_NetworkUtlVectorBase< SoundeventPathCornerPairNetworked_t > m_vecCornerPairsNetworked;
    char pad_020[24];
}; // size: 0x6d0

class __declspec(align(8)) C_Team : public C_BaseEntity {
public:
    // C_NetworkUtlVectorBase< CHandle< CBasePlayerController > > m_aPlayerControllers;
    // C_NetworkUtlVectorBase< CHandle< C_BasePlayerPawn > > m_aPlayers;
    char pad_017[48];
    int32_t m_iScore; // 0x638
    char m_szTeamname[129]; // 0x63c
    char pad_018[3];
}; // size: 0x6c0

class __declspec(align(8)) CInfoFan : public C_PointEntity {
public:
    char pad_017[64];
    float m_fFanForceMaxRadius; // 0x648
    float m_fFanForceMinRadius; // 0x64c
    float m_flCurveDistRange; // 0x650
    // CUtlSymbolLarge m_FanForceCurveString;
    char pad_018[12];
}; // size: 0x660

class __declspec(align(8)) CPulseGameBlackboard : public C_BaseEntity {
public:
    // CUtlString m_strGraphName;
    // CUtlString m_strStateBlob;
    char pad_017[24];
}; // size: 0x620

class __declspec(align(8)) CBasePlayerVData {
public:
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName;
    char pad_00[264];
    CSkillFloat m_flHeadDamageMultiplier; // 0x108
    CSkillFloat m_flChestDamageMultiplier; // 0x118
    CSkillFloat m_flStomachDamageMultiplier; // 0x128
    CSkillFloat m_flArmDamageMultiplier; // 0x138
    CSkillFloat m_flLegDamageMultiplier; // 0x148
    float m_flHoldBreathTime; // 0x158
    float m_flDrowningDamageInterval; // 0x15c
    int32_t m_nDrowningDamageInitial; // 0x160
    int32_t m_nDrowningDamageMax; // 0x164
    int32_t m_nWaterSpeed; // 0x168
    float m_flUseRange; // 0x16c
    float m_flUseAngleTolerance; // 0x170
    float m_flCrouchTime; // 0x174
}; // size: 0x178

class __declspec(align(8)) CBaseFilter : public CLogicalEntity {
public:
    bool m_bNegated; // 0x608
    char pad_017[7];
    CEntityIOOutput m_OnPass; // 0x610
    CEntityIOOutput m_OnFail; // 0x628
}; // size: 0x640

class __declspec(align(8)) CFilterMultiple : public CBaseFilter {
public:
    filter_t m_nFilterType; // 0x640
    // CUtlSymbolLarge[10] m_iFilterName;
    // CHandle< C_BaseEntity >[10] m_hFilter;
    char pad_018[124];
}; // size: 0x6c0

class __declspec(align(8)) CFilterProximity : public CBaseFilter {
public:
    float m_flRadius; // 0x640
    char pad_018[4];
}; // size: 0x648

class __declspec(align(8)) CFilterLOS : public CBaseFilter {
public:
}; // size: 0x640

class __declspec(align(8)) CFilterClass : public CBaseFilter {
public:
    // CUtlSymbolLarge m_iFilterClass;
    char pad_018[8];
}; // size: 0x648

class __declspec(align(8)) CBasePlayerWeaponVData {
public:
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldModel;
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sToolsOnlyOwnerModelName;
    char pad_00[488];
    bool m_bBuiltRightHanded; // 0x1e8
    bool m_bAllowFlipping; // 0x1e9
    // CAttachmentNameSymbolWithStorage m_sMuzzleAttachment;
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashParticle;
    // CUtlString m_szMuzzleFlashParticleConfig;
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szBarrelSmokeParticle;
    char pad_01[494];
    uint8_t m_nMuzzleSmokeShotThreshold; // 0x3d8
    float m_flMuzzleSmokeTimeout; // 0x3dc
    float m_flMuzzleSmokeDecrementRate; // 0x3e0
    bool m_bGenerateMuzzleLight; // 0x3e4
    bool m_bLinkedCooldowns; // 0x3e5
    ItemFlagTypes_t m_iFlags; // 0x3e6
    int32_t m_iWeight; // 0x3e8
    bool m_bAutoSwitchTo; // 0x3ec
    bool m_bAutoSwitchFrom; // 0x3ed
    AmmoIndex_t m_nPrimaryAmmoType; // 0x3ee
    AmmoIndex_t m_nSecondaryAmmoType; // 0x3ef
    int32_t m_iMaxClip1; // 0x3f0
    int32_t m_iMaxClip2; // 0x3f4
    int32_t m_iDefaultClip1; // 0x3f8
    int32_t m_iDefaultClip2; // 0x3fc
    bool m_bReserveAmmoAsClips; // 0x400
    bool m_bTreatAsSingleClip; // 0x401
    bool m_bKeepLoadedAmmo; // 0x402
    RumbleEffect_t m_iRumbleEffect; // 0x404
    float m_flDropSpeed; // 0x408
    int32_t m_iSlot; // 0x40c
    int32_t m_iPosition; // 0x410
    // CUtlOrderedMap< WeaponSound_t, CSoundEventName > m_aShootSounds;
    char pad_02[44];
}; // size: 0x440

/// CClientAlphaProperty
class __declspec(align(4)) CClientAlphaProperty0 {
public:
    char pad_00[16];
    uint16_t m_nDistFadeStart; // 0x10
    uint16_t m_nDistFadeEnd; // 0x12
    // bitfield:14 m_nDesyncOffset;
    // bitfield:1 m_bAlphaOverride;
    // bitfield:1 m_bShadowAlphaOverride;
    // bitfield:3 m_nRenderMode;
    // bitfield:5 m_nRenderFX;
    char pad_01[3];
    uint8_t m_nAlpha; // 0x17
    float m_flFadeScale; // 0x18
    GameTime_t m_flRenderFxStartTime; // 0x1c
    float m_flRenderFxDuration; // 0x20
    char pad_02[12];
}; // size: 0x30

class __declspec(align(8)) CServerOnlyModelEntity : public C_BaseModelEntity {
public:
}; // size: 0xe88

class __declspec(align(8)) C_ModelPointEntity : public C_BaseModelEntity {
public:
}; // size: 0xe88

class __declspec(align(8)) CInfoInteraction : public C_PointEntity {
public:
    // CUtlSymbolLarge[8] m_strSlotEntityName;
    // CUtlSymbolLarge m_strInteractVData;
    char pad_017[72];
    float m_flInteractRadius; // 0x650
    char pad_018[4];
}; // size: 0x658

class __declspec(align(8)) CLogicRelay : public CLogicalEntity {
public:
    bool m_bDisabled; // 0x608
    bool m_bWaitForRefire; // 0x609
    bool m_bTriggerOnce; // 0x60a
    bool m_bFastRetrigger; // 0x60b
    bool m_bPassthoughCaller; // 0x60c
    char pad_017[3];
}; // size: 0x610

class __declspec(align(8)) C_PathParticleRope : public C_BaseEntity {
public:
    char pad_017[8];
    bool m_bStartActive; // 0x610
    float m_flMaxSimulationTime; // 0x614
    // CUtlSymbolLarge m_iszEffectName;
    // CUtlVector< CUtlSymbolLarge > m_PathNodes_Name;
    char pad_018[32];
    float m_flParticleSpacing; // 0x638
    float m_flSlack; // 0x63c
    float m_flRadius; // 0x640
    // Color m_ColorTint;
    char pad_019[4];
    int32_t m_nEffectState; // 0x648
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex;
    // C_NetworkUtlVectorBase< Vector > m_PathNodes_Position;
    // C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentIn;
    // C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentOut;
    // C_NetworkUtlVectorBase< Vector > m_PathNodes_Color;
    // C_NetworkUtlVectorBase< bool > m_PathNodes_PinEnabled;
    // C_NetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale;
    char pad_020[204];
}; // size: 0x718

class __declspec(align(8)) C_PathParticleRopeAlias_path_particle_rope_clientside : public C_PathParticleRope {
public:
}; // size: 0x718

class __declspec(align(16)) CPathSimple : public C_BaseEntity {
public:
    char pad_017[8];
    CPathQueryComponent m_CPathQueryComponent; // 0x610
    // CUtlString m_pathString;
    char pad_018[88];
    bool m_bClosedLoop; // 0x708
    char pad_019[7];
}; // size: 0x710

class __declspec(align(16)) CPathWithDynamicNodes : public CPathSimple {
public:
    // C_NetworkUtlVectorBase< CHandle< CPathNode > > m_vecPathNodes;
    // CTransform m_xInitialPathWorldToLocal;
    char pad_020[64];
}; // size: 0x750

class __declspec(align(16)) CPathNode : public C_PointEntity {
public:
    Vector m_vInTangentLocal; // 0x608
    Vector m_vOutTangentLocal; // 0x614
    // CUtlString m_strParentPathUniqueID;
    // CUtlString m_strPathNodeParameter;
    // CTransform m_xWSPrevParent;
    // CHandle< CPathWithDynamicNodes > m_hPath;
    char pad_017[64];
}; // size: 0x660

class __declspec(align(8)) CEnvSoundscape : public C_BaseEntity {
public:
    CEntityIOOutput m_OnPlay; // 0x608
    float m_flRadius; // 0x620
    // CUtlSymbolLarge m_soundEventName;
    char pad_017[12];
    bool m_bOverrideWithEvent; // 0x630
    int32_t m_soundscapeIndex; // 0x634
    int32_t m_soundscapeEntityListId; // 0x638
    // CUtlSymbolLarge[8] m_positionNames;
    // CHandle< CEnvSoundscape > m_hProxySoundscape;
    char pad_018[72];
    bool m_bDisabled; // 0x684
    // CUtlSymbolLarge m_soundscapeName;
    char pad_019[8];
    uint32_t m_soundEventHash; // 0x690
    char pad_020[4];
}; // size: 0x698

class __declspec(align(8)) CEnvSoundscapeProxy : public CEnvSoundscape {
public:
    // CUtlSymbolLarge m_MainSoundscapeName;
    char pad_021[8];
}; // size: 0x6a0

class __declspec(align(8)) CEnvSoundscapeTriggerable : public CEnvSoundscape {
public:
}; // size: 0x698

class __declspec(align(8)) C_DynamicLight : public C_BaseModelEntity {
public:
    uint8_t m_Flags; // 0xe88
    uint8_t m_LightStyle; // 0xe89
    float m_Radius; // 0xe8c
    int32_t m_Exponent; // 0xe90
    float m_InnerAngle; // 0xe94
    float m_OuterAngle; // 0xe98
    float m_SpotRadius; // 0xe9c
    char pad_026[16];
}; // size: 0xeb0

class __declspec(align(8)) C_FuncTrackTrain : public C_BaseModelEntity {
public:
    int32_t m_nLongAxis; // 0xe88
    float m_flRadius; // 0xe8c
    float m_flLineLength; // 0xe90
    char pad_026[4];
}; // size: 0xe98

class __declspec(align(8)) C_SpotlightEnd : public C_BaseModelEntity {
public:
    float m_flLightScale; // 0xe88
    float m_Radius; // 0xe8c
    char pad_026[8];
}; // size: 0xe98

class __declspec(align(8)) C_PointValueRemapper : public C_BaseEntity {
public:
    bool m_bDisabled; // 0x608
    bool m_bDisabledOld; // 0x609
    bool m_bUpdateOnClient; // 0x60a
    ValueRemapperInputType_t m_nInputType; // 0x60c
    // CHandle< C_BaseEntity > m_hRemapLineStart;
    // CHandle< C_BaseEntity > m_hRemapLineEnd;
    char pad_017[8];
    float m_flMaximumChangePerSecond; // 0x618
    float m_flDisengageDistance; // 0x61c
    float m_flEngageDistance; // 0x620
    bool m_bRequiresUseKey; // 0x624
    ValueRemapperOutputType_t m_nOutputType; // 0x628
    // C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hOutputEntities;
    char pad_018[28];
    ValueRemapperHapticsType_t m_nHapticsType; // 0x648
    ValueRemapperMomentumType_t m_nMomentumType; // 0x64c
    float m_flMomentumModifier; // 0x650
    float m_flSnapValue; // 0x654
    float m_flCurrentMomentum; // 0x658
    ValueRemapperRatchetType_t m_nRatchetType; // 0x65c
    float m_flRatchetOffset; // 0x660
    float m_flInputOffset; // 0x664
    bool m_bEngaged; // 0x668
    bool m_bFirstUpdate; // 0x669
    float m_flPreviousValue; // 0x66c
    GameTime_t m_flPreviousUpdateTickTime; // 0x670
    Vector m_vecPreviousTestPoint; // 0x674
}; // size: 0x680

class __declspec(align(8)) C_PointWorldText : public C_ModelPointEntity {
public:
    char pad_026[8];
    bool m_bForceRecreateNextUpdate; // 0xe90
    char pad_027[20];
    int32_t m_nTextWidthPx; // 0xea8
    int32_t m_nTextHeightPx; // 0xeac
    char m_messageText[512]; // 0xeb0
    char m_FontName[64]; // 0x10b0
    char m_BackgroundMaterialName[64]; // 0x10f0
    bool m_bEnabled; // 0x1130
    bool m_bFullbright; // 0x1131
    float m_flWorldUnitsPerPx; // 0x1134
    float m_flFontSize; // 0x1138
    float m_flDepthOffset; // 0x113c
    bool m_bDrawBackground; // 0x1140
    float m_flBackgroundBorderWidth; // 0x1144
    float m_flBackgroundBorderHeight; // 0x1148
    float m_flBackgroundWorldToUV; // 0x114c
    // Color m_Color;
    char pad_028[4];
    PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0x1154
    PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0x1158
    PointWorldTextReorientMode_t m_nReorientMode; // 0x115c
}; // size: 0x1160

class __declspec(align(8)) CCitadelSoundOpvarSetOBB : public C_BaseEntity {
public:
    // CUtlSymbolLarge m_iszStackName;
    // CUtlSymbolLarge m_iszOperatorName;
    // CUtlSymbolLarge m_iszOpvarName;
    char pad_017[48];
    Vector m_vDistanceInnerMins; // 0x638
    Vector m_vDistanceInnerMaxs; // 0x644
    Vector m_vDistanceOuterMins; // 0x650
    Vector m_vDistanceOuterMaxs; // 0x65c
    int32_t m_nAABBDirection; // 0x668
    char pad_018[4];
}; // size: 0x670

class __declspec(align(8)) C_HandleTest : public C_BaseEntity {
public:
    // CHandle< C_BaseEntity > m_Handle;
    char pad_017[4];
    bool m_bSendHandle; // 0x60c
    char pad_018[3];
}; // size: 0x610

class __declspec(align(8)) C_EnvWind : public C_BaseEntity {
public:
    C_EnvWindShared m_EnvWindShared; // 0x608
}; // size: 0x700

class __declspec(align(8)) C_BaseButton : public C_BaseToggle {
public:
    // CHandle< C_BaseModelEntity > m_glowEntity;
    char pad_026[4];
    bool m_usable; // 0xe8c
    // CUtlSymbolLarge m_szDisplayText;
    char pad_027[11];
}; // size: 0xe98

class __declspec(align(8)) C_PrecipitationBlocker : public C_BaseModelEntity {
public:
}; // size: 0xe88

class __declspec(align(8)) C_EntityDissolve : public C_BaseModelEntity {
public:
    char pad_026[8];
    GameTime_t m_flStartTime; // 0xe90
    float m_flFadeInStart; // 0xe94
    float m_flFadeInLength; // 0xe98
    float m_flFadeOutModelStart; // 0xe9c
    float m_flFadeOutModelLength; // 0xea0
    float m_flFadeOutStart; // 0xea4
    float m_flFadeOutLength; // 0xea8
    GameTime_t m_flNextSparkTime; // 0xeac
    EntityDisolveType_t m_nDissolveType; // 0xeb0
    Vector m_vDissolverOrigin; // 0xeb4
    uint32_t m_nMagnitude; // 0xec0
    bool m_bCoreExplode; // 0xec4
    bool m_bLinkedToServerEnt; // 0xec5
    char pad_027[10];
}; // size: 0xed0

class __declspec(align(8)) C_EnvDecal : public C_BaseModelEntity {
public:
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial;
    char pad_026[8];
    float m_flWidth; // 0xe90
    float m_flHeight; // 0xe94
    float m_flDepth; // 0xe98
    uint32_t m_nRenderOrder; // 0xe9c
    bool m_bProjectOnWorld; // 0xea0
    bool m_bProjectOnCharacters; // 0xea1
    bool m_bProjectOnWater; // 0xea2
    float m_flDepthSortBias; // 0xea4
    char pad_027[24];
}; // size: 0xec0

class __declspec(align(8)) C_FuncBrush : public C_BaseModelEntity {
public:
}; // size: 0xe88

class __declspec(align(8)) C_FuncElectrifiedVolume : public C_FuncBrush {
public:
    ParticleIndex_t m_nAmbientEffect; // 0xe88
    // CUtlSymbolLarge m_EffectName;
    char pad_026[12];
    bool m_bState; // 0xe98
    char pad_027[7];
}; // size: 0xea0

class __declspec(align(8)) C_FuncRotating : public C_BaseModelEntity {
public:
}; // size: 0xe88

class __declspec(align(8)) C_Breakable : public C_BaseModelEntity {
public:
}; // size: 0xe88

class __declspec(align(8)) C_PhysBox : public C_Breakable {
public:
}; // size: 0xe88

class __declspec(align(8)) C_SceneEntity : public C_PointEntity {
public:
    char pad_017[8];
    bool m_bIsPlayingBack; // 0x610
    bool m_bPaused; // 0x611
    bool m_bMultiplayer; // 0x612
    bool m_bAutogenerated; // 0x613
    float m_flForceClientTime; // 0x614
    uint16_t m_nSceneStringIndex; // 0x618
    bool m_bClientOnly; // 0x61a
    // CHandle< C_BaseFlex > m_hOwner;
    // C_NetworkUtlVectorBase< CHandle< C_BaseFlex > > m_hActorList;
    char pad_018[29];
    bool m_bWasPlaying; // 0x638
    // CUtlVector< C_SceneEntity::QueuedEvents_t > m_QueuedEvents;
    char pad_019[36];
    float m_flCurrentTime; // 0x660
    char pad_020[4];
}; // size: 0x668

class __declspec(align(8)) C_TriggerVolume : public C_BaseModelEntity {
public:
}; // size: 0xe88

class __declspec(align(8)) C_Beam : public C_BaseModelEntity {
public:
    float m_flFrameRate; // 0xe88
    float m_flHDRColorScale; // 0xe8c
    GameTime_t m_flFireTime; // 0xe90
    float m_flDamage; // 0xe94
    uint8_t m_nNumBeamEnts; // 0xe98
    int32_t m_queryHandleHalo; // 0xe9c
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex;
    char pad_026[48];
    BeamType_t m_nBeamType; // 0xed0
    uint32_t m_nBeamFlags; // 0xed4
    // CHandle< C_BaseEntity >[10] m_hAttachEntity;
    char pad_027[40];
    AttachmentHandle_t m_nAttachIndex; // 0xf00
    char pad_028[8];
    float m_fWidth; // 0xf0c
    float m_fEndWidth; // 0xf10
    float m_fFadeLength; // 0xf14
    float m_fHaloScale; // 0xf18
    float m_fAmplitude; // 0xf1c
    float m_fStartFrame; // 0xf20
    float m_fSpeed; // 0xf24
    float m_flFrame; // 0xf28
    BeamClipStyle_t m_nClipStyle; // 0xf2c
    bool m_bTurnedOff; // 0xf30
    // VectorWS m_vecEndPos;
    // CHandle< C_BaseEntity > m_hEndEntity;
    char pad_029[23];
}; // size: 0xf48

class __declspec(align(8)) C_FuncLadder : public C_BaseModelEntity {
public:
    Vector m_vecLadderDir; // 0xe88
    // CUtlVector< CHandle< C_InfoLadderDismount > > m_Dismounts;
    char pad_026[28];
    Vector m_vecLocalTop; // 0xeb0
    // VectorWS m_vecPlayerMountPositionTop;
    // VectorWS m_vecPlayerMountPositionBottom;
    char pad_027[24];
    float m_flAutoRideSpeed; // 0xed4
    bool m_bDisabled; // 0xed8
    bool m_bFakeLadder; // 0xed9
    bool m_bHasSlack; // 0xeda
    char pad_028[5];
}; // size: 0xee0

class __declspec(align(8)) CPrecipitationVData {
public:
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szParticlePrecipitationEffect;
    char pad_00[264];
    float m_flInnerDistance; // 0x108
    ParticleAttachment_t m_nAttachType; // 0x10c
    bool m_bBatchSameVolumeType; // 0x110
    int32_t m_nRTEnvCP; // 0x114
    int32_t m_nRTEnvCPComponent; // 0x118
    // CUtlString m_szModifier;
    char pad_01[12];
}; // size: 0x128

class __declspec(align(8)) C_Sprite : public C_BaseModelEntity {
public:
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial;
    // CHandle< C_BaseEntity > m_hAttachedToEntity;
    char pad_026[12];
    AttachmentHandle_t m_nAttachment; // 0xe94
    float m_flSpriteFramerate; // 0xe98
    float m_flFrame; // 0xe9c
    GameTime_t m_flDieTime; // 0xea0
    char pad_027[12];
    uint32_t m_nBrightness; // 0xeb0
    float m_flBrightnessDuration; // 0xeb4
    float m_flSpriteScale; // 0xeb8
    float m_flScaleDuration; // 0xebc
    bool m_bWorldSpaceScale; // 0xec0
    float m_flGlowProxySize; // 0xec4
    float m_flHDRColorScale; // 0xec8
    GameTime_t m_flLastTime; // 0xecc
    float m_flMaxFrame; // 0xed0
    float m_flStartScale; // 0xed4
    float m_flDestScale; // 0xed8
    GameTime_t m_flScaleTimeStart; // 0xedc
    int32_t m_nStartBrightness; // 0xee0
    int32_t m_nDestBrightness; // 0xee4
    GameTime_t m_flBrightnessTimeStart; // 0xee8
    char pad_028[12];
    int32_t m_nSpriteWidth; // 0xef8
    int32_t m_nSpriteHeight; // 0xefc
}; // size: 0xf00

class __declspec(align(8)) CSpriteOriented : public C_Sprite {
public:
}; // size: 0xf00

class __declspec(align(8)) C_BaseClientUIEntity : public C_BaseModelEntity {
public:
    char pad_026[8];
    bool m_bEnabled; // 0xe90
    // CUtlSymbolLarge m_DialogXMLName;
    // CUtlSymbolLarge m_PanelClassName;
    // CUtlSymbolLarge m_PanelID;
    char pad_027[39];
}; // size: 0xeb8

class __declspec(align(8)) C_PointClientUIDialog : public C_BaseClientUIEntity {
public:
    // CHandle< C_BaseEntity > m_hActivator;
    char pad_028[4];
    bool m_bStartEnabled; // 0xebc
    char pad_029[3];
}; // size: 0xec0

class __declspec(align(8)) C_PointClientUIHUD : public C_BaseClientUIEntity {
public:
    char pad_028[8];
    bool m_bCheckCSSClasses; // 0xec0
    char pad_029[375];
    bool m_bIgnoreInput; // 0x1038
    float m_flWidth; // 0x103c
    float m_flHeight; // 0x1040
    float m_flDPI; // 0x1044
    float m_flInteractDistance; // 0x1048
    float m_flDepthOffset; // 0x104c
    uint32_t m_unOwnerContext; // 0x1050
    uint32_t m_unHorizontalAlign; // 0x1054
    uint32_t m_unVerticalAlign; // 0x1058
    uint32_t m_unOrientation; // 0x105c
    bool m_bAllowInteractionFromAllSceneWorlds; // 0x1060
    // C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses;
    char pad_030[31];
}; // size: 0x1080

class __declspec(align(16)) C_PointClientUIWorldPanel : public C_BaseClientUIEntity {
public:
    char pad_028[8];
    bool m_bForceRecreateNextUpdate; // 0xec0
    bool m_bMoveViewToPlayerNextThink; // 0xec1
    bool m_bCheckCSSClasses; // 0xec2
    // CTransform m_anchorDeltaTransform;
    char pad_029[408];
    CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0x1060
    char pad_030[32];
    bool m_bIgnoreInput; // 0x1088
    bool m_bLit; // 0x1089
    bool m_bFollowPlayerAcrossTeleport; // 0x108a
    float m_flWidth; // 0x108c
    float m_flHeight; // 0x1090
    float m_flDPI; // 0x1094
    float m_flInteractDistance; // 0x1098
    float m_flDepthOffset; // 0x109c
    uint32_t m_unOwnerContext; // 0x10a0
    uint32_t m_unHorizontalAlign; // 0x10a4
    uint32_t m_unVerticalAlign; // 0x10a8
    uint32_t m_unOrientation; // 0x10ac
    bool m_bAllowInteractionFromAllSceneWorlds; // 0x10b0
    // C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses;
    char pad_031[31];
    bool m_bOpaque; // 0x10d0
    bool m_bNoDepth; // 0x10d1
    bool m_bVisibleWhenParentNoDraw; // 0x10d2
    bool m_bRenderBackface; // 0x10d3
    bool m_bUseOffScreenIndicator; // 0x10d4
    bool m_bExcludeFromSaveGames; // 0x10d5
    bool m_bGrabbable; // 0x10d6
    bool m_bOnlyRenderToTexture; // 0x10d7
    bool m_bDisableMipGen; // 0x10d8
    int32_t m_nExplicitImageLayout; // 0x10dc
}; // size: 0x10e0

class __declspec(align(16)) CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel {
public:
    bool m_bBeenEnabled; // 0x10e0
    bool m_bHide; // 0x10e1
    float m_flSeenTargetTime; // 0x10e4
    C_PointClientUIWorldPanel* m_pTargetPanel; // 0x10e8
}; // size: 0x10f0

class __declspec(align(16)) C_PointClientUIWorldTextPanel : public C_PointClientUIWorldPanel {
public:
    char m_messageText[512]; // 0x10e0
}; // size: 0x12e0

class __declspec(align(8)) CInfoOffscreenPanoramaTexture : public C_PointEntity {
public:
    bool m_bDisabled; // 0x608
    int32_t m_nResolutionX; // 0x60c
    int32_t m_nResolutionY; // 0x610
    // CUtlSymbolLarge m_szPanelType;
    // CUtlSymbolLarge m_szLayoutFileName;
    // CUtlSymbolLarge m_RenderAttrName;
    // C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_TargetEntities;
    char pad_017[52];
    int32_t m_nTargetChangeCount; // 0x648
    // C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses;
    // CUtlSymbolLarge m_szTargetsName;
    // CUtlVector< CHandle< C_BaseModelEntity > > m_AdditionalTargetEntities;
    char pad_018[412];
    bool m_bCheckCSSClasses; // 0x7e8
    char pad_019[39];
}; // size: 0x810

class __declspec(align(8)) CFuncWater : public C_BaseModelEntity {
public:
    CBuoyancyHelper m_BuoyancyHelper; // 0xe88
}; // size: 0xfa0

class __declspec(align(8)) CWaterSplasher : public C_BaseModelEntity {
public:
}; // size: 0xe88

class __declspec(align(8)) C_InfoInstructorHintHostageRescueZone : public C_PointEntity {
public:
}; // size: 0x608

class __declspec(align(8)) C_CSObserverPawn : public C_CSPlayerPawnBase {
public:
    // CEntityHandle m_hDetectParentChange;
    char pad_047[8];
}; // size: 0x1658

class __declspec(align(8)) CCSWeaponBaseVData {
public:
    char pad_00[1088];
    CSWeaponType m_WeaponType; // 0x440
    CSWeaponCategory m_WeaponCategory; // 0x444
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCNmSkeleton > > m_szAnimSkeleton;
    char pad_01[224];
    Vector m_vecMuzzlePos0; // 0x528
    Vector m_vecMuzzlePos1; // 0x534
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szTracerParticle;
    char pad_02[224];
    gear_slot_t m_GearSlot; // 0x620
    int32_t m_GearSlotPosition; // 0x624
    loadout_slot_t m_DefaultLoadoutSlot; // 0x628
    int32_t m_nPrice; // 0x62c
    int32_t m_nKillAward; // 0x630
    int32_t m_nPrimaryReserveAmmoMax; // 0x634
    int32_t m_nSecondaryReserveAmmoMax; // 0x638
    bool m_bMeleeWeapon; // 0x63c
    bool m_bHasBurstMode; // 0x63d
    bool m_bIsRevolver; // 0x63e
    bool m_bCannotShootUnderwater; // 0x63f
    // CGlobalSymbol m_szName;
    char pad_03[8];
    CSWeaponSilencerType m_eSilencerType; // 0x648
    int32_t m_nCrosshairMinDistance; // 0x64c
    int32_t m_nCrosshairDeltaDistance; // 0x650
    bool m_bIsFullAuto; // 0x654
    int32_t m_nNumBullets; // 0x658
    bool m_bReloadsSingleShells; // 0x65c
    CFiringModeFloat m_flCycleTime; // 0x660
    CFiringModeFloat m_flMaxSpeed; // 0x668
    CFiringModeFloat m_flSpread; // 0x670
    CFiringModeFloat m_flInaccuracyCrouch; // 0x678
    CFiringModeFloat m_flInaccuracyStand; // 0x680
    CFiringModeFloat m_flInaccuracyJump; // 0x688
    CFiringModeFloat m_flInaccuracyLand; // 0x690
    CFiringModeFloat m_flInaccuracyLadder; // 0x698
    CFiringModeFloat m_flInaccuracyFire; // 0x6a0
    CFiringModeFloat m_flInaccuracyMove; // 0x6a8
    CFiringModeFloat m_flRecoilAngle; // 0x6b0
    CFiringModeFloat m_flRecoilAngleVariance; // 0x6b8
    CFiringModeFloat m_flRecoilMagnitude; // 0x6c0
    CFiringModeFloat m_flRecoilMagnitudeVariance; // 0x6c8
    CFiringModeInt m_nTracerFrequency; // 0x6d0
    float m_flInaccuracyJumpInitial; // 0x6d8
    float m_flInaccuracyJumpApex; // 0x6dc
    float m_flInaccuracyReload; // 0x6e0
    float m_flDeployDuration; // 0x6e4
    float m_flDisallowAttackAfterReloadStartDuration; // 0x6e8
    int32_t m_nBurstShotCount; // 0x6ec
    bool m_bAllowBurstHolster; // 0x6f0
    int32_t m_nRecoilSeed; // 0x6f4
    int32_t m_nSpreadSeed; // 0x6f8
    float m_flAttackMovespeedFactor; // 0x6fc
    float m_flInaccuracyPitchShift; // 0x700
    float m_flInaccuracyAltSoundThreshold; // 0x704
    // CUtlString m_szUseRadioSubtitle;
    char pad_04[8];
    bool m_bUnzoomsAfterShot; // 0x710
    bool m_bHideViewModelWhenZoomed; // 0x711
    int32_t m_nZoomLevels; // 0x714
    int32_t m_nZoomFOV1; // 0x718
    int32_t m_nZoomFOV2; // 0x71c
    float m_flZoomTime0; // 0x720
    float m_flZoomTime1; // 0x724
    float m_flZoomTime2; // 0x728
    float m_flIronSightPullUpSpeed; // 0x72c
    float m_flIronSightPutDownSpeed; // 0x730
    float m_flIronSightFOV; // 0x734
    float m_flIronSightPivotForward; // 0x738
    float m_flIronSightLooseness; // 0x73c
    int32_t m_nDamage; // 0x740
    float m_flHeadshotMultiplier; // 0x744
    float m_flArmorRatio; // 0x748
    float m_flPenetration; // 0x74c
    float m_flRange; // 0x750
    float m_flRangeModifier; // 0x754
    float m_flFlinchVelocityModifierLarge; // 0x758
    float m_flFlinchVelocityModifierSmall; // 0x75c
    float m_flRecoveryTimeCrouch; // 0x760
    float m_flRecoveryTimeStand; // 0x764
    float m_flRecoveryTimeCrouchFinal; // 0x768
    float m_flRecoveryTimeStandFinal; // 0x76c
    int32_t m_nRecoveryTransitionStartBullet; // 0x770
    int32_t m_nRecoveryTransitionEndBullet; // 0x774
    float m_flThrowVelocity; // 0x778
    Vector m_vSmokeColor; // 0x77c
    // CGlobalSymbol m_szAnimClass;
    char pad_05[56];
}; // size: 0x7c0

class __declspec(align(8)) C_PlayerSprayDecal : public C_ModelPointEntity {
public:
    int32_t m_nUniqueID; // 0xe88
    uint32_t m_unAccountID; // 0xe8c
    uint32_t m_unTraceID; // 0xe90
    uint32_t m_rtGcTime; // 0xe94
    Vector m_vecEndPos; // 0xe98
    Vector m_vecStart; // 0xea4
    Vector m_vecLeft; // 0xeb0
    Vector m_vecNormal; // 0xebc
    int32_t m_nPlayer; // 0xec8
    int32_t m_nEntity; // 0xecc
    int32_t m_nHitbox; // 0xed0
    float m_flCreationTime; // 0xed4
    int32_t m_nTintID; // 0xed8
    uint8_t m_nVersion; // 0xedc
    uint8_t m_ubSignature[128]; // 0xedd
    char pad_026[11];
    CPlayerSprayDecalRenderHelper m_SprayRenderHelper; // 0xf68
}; // size: 0xf98

class __declspec(align(8)) C_FuncConveyor : public C_BaseModelEntity {
public:
    char pad_026[8];
    Vector m_vecMoveDirEntitySpace; // 0xe90
    float m_flTargetSpeed; // 0xe9c
    GameTick_t m_nTransitionStartTick; // 0xea0
    int32_t m_nTransitionDurationTicks; // 0xea4
    float m_flTransitionStartSpeed; // 0xea8
    // C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hConveyorModels;
    char pad_027[28];
    float m_flCurrentConveyorOffset; // 0xec8
    float m_flCurrentConveyorSpeed; // 0xecc
}; // size: 0xed0

class __declspec(align(16)) CGrenadeTracer : public C_BaseModelEntity {
public:
    char pad_026[24];
    float m_flTracerDuration; // 0xea0
    GrenadeType_t m_nType; // 0xea4
    char pad_027[1144];
}; // size: 0x1320

class __declspec(align(16)) C_Inferno : public C_BaseModelEntity {
public:
    char pad_026[64];
    ParticleIndex_t m_nfxFireDamageEffect; // 0xec8
    // CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoPointsSnapshot;
    // CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoFillerPointsSnapshot;
    // CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoOutlinePointsSnapshot;
    // CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoClimbingOutlinePointsSnapshot;
    // CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoDecalsSnapshot;
    char pad_027[44];
    Vector m_firePositions; // 0xef8
    char pad_028[756];
    Vector m_fireParentPositions; // 0x11f8
    char pad_029[756];
    bool m_bFireIsBurning[64]; // 0x14f8
    Vector m_BurnNormal; // 0x1538
    char pad_030[756];
    int32_t m_fireCount; // 0x1838
    int32_t m_nInfernoType; // 0x183c
    float m_nFireLifetime; // 0x1840
    bool m_bInPostEffectTime; // 0x1844
    int32_t m_lastFireCount; // 0x1848
    int32_t m_nFireEffectTickBegin; // 0x184c
    char pad_031[27648];
    int32_t m_drawableCount; // 0x8450
    bool m_blosCheck; // 0x8454
    int32_t m_nlosperiod; // 0x8458
    float m_maxFireHalfWidth; // 0x845c
    float m_maxFireHeight; // 0x8460
    Vector m_minBounds; // 0x8464
    Vector m_maxBounds; // 0x8470
    float m_flLastGrassBurnThink; // 0x847c
    char pad_032[16];
}; // size: 0x8490

class __declspec(align(16)) C_FireCrackerBlast : public C_Inferno {
public:
}; // size: 0x8490

class __declspec(align(8)) C_BarnLight : public C_BaseModelEntity {
public:
    bool m_bEnabled; // 0xe88
    int32_t m_nColorMode; // 0xe8c
    // Color m_Color;
    char pad_026[4];
    float m_flColorTemperature; // 0xe94
    float m_flBrightness; // 0xe98
    float m_flBrightnessScale; // 0xe9c
    int32_t m_nDirectLight; // 0xea0
    int32_t m_nBakedShadowIndex; // 0xea4
    int32_t m_nLightPathUniqueId; // 0xea8
    int32_t m_nLightMapUniqueId; // 0xeac
    int32_t m_nLuminaireShape; // 0xeb0
    float m_flLuminaireSize; // 0xeb4
    float m_flLuminaireAnisotropy; // 0xeb8
    // CUtlString m_LightStyleString;
    char pad_027[12];
    GameTime_t m_flLightStyleStartTime; // 0xec8
    // C_NetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings;
    // C_NetworkUtlVectorBase< CUtlString > m_LightStyleEvents;
    // C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_LightStyleTargets;
    char pad_028[76];
    CEntityIOOutput m_StyleEvent; // 0xf18
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie;
    char pad_029[80];
    float m_flShape; // 0xf80
    float m_flSoftX; // 0xf84
    float m_flSoftY; // 0xf88
    float m_flSkirt; // 0xf8c
    float m_flSkirtNear; // 0xf90
    Vector m_vSizeParams; // 0xf94
    float m_flRange; // 0xfa0
    Vector m_vShear; // 0xfa4
    int32_t m_nBakeSpecularToCubemaps; // 0xfb0
    Vector m_vBakeSpecularToCubemapsSize; // 0xfb4
    int32_t m_nCastShadows; // 0xfc0
    int32_t m_nShadowMapSize; // 0xfc4
    int32_t m_nShadowPriority; // 0xfc8
    bool m_bContactShadow; // 0xfcc
    bool m_bForceShadowsEnabled; // 0xfcd
    int32_t m_nBounceLight; // 0xfd0
    float m_flBounceScale; // 0xfd4
    bool m_bDynamicBounce; // 0xfd8
    float m_flMinRoughness; // 0xfdc
    Vector m_vAlternateColor; // 0xfe0
    float m_fAlternateColorBrightness; // 0xfec
    int32_t m_nFog; // 0xff0
    float m_flFogStrength; // 0xff4
    int32_t m_nFogShadows; // 0xff8
    float m_flFogScale; // 0xffc
    bool m_bFogMixedShadows; // 0x1000
    float m_flFadeSizeStart; // 0x1004
    float m_flFadeSizeEnd; // 0x1008
    float m_flShadowFadeSizeStart; // 0x100c
    float m_flShadowFadeSizeEnd; // 0x1010
    bool m_bPrecomputedFieldsValid; // 0x1014
    Vector m_vPrecomputedBoundsMins; // 0x1018
    Vector m_vPrecomputedBoundsMaxs; // 0x1024
    Vector m_vPrecomputedOBBOrigin; // 0x1030
    QAngle m_vPrecomputedOBBAngles; // 0x103c
    Vector m_vPrecomputedOBBExtent; // 0x1048
    int32_t m_nPrecomputedSubFrusta; // 0x1054
    Vector m_vPrecomputedOBBOrigin0; // 0x1058
    QAngle m_vPrecomputedOBBAngles0; // 0x1064
    Vector m_vPrecomputedOBBExtent0; // 0x1070
    Vector m_vPrecomputedOBBOrigin1; // 0x107c
    QAngle m_vPrecomputedOBBAngles1; // 0x1088
    Vector m_vPrecomputedOBBExtent1; // 0x1094
    Vector m_vPrecomputedOBBOrigin2; // 0x10a0
    QAngle m_vPrecomputedOBBAngles2; // 0x10ac
    Vector m_vPrecomputedOBBExtent2; // 0x10b8
    Vector m_vPrecomputedOBBOrigin3; // 0x10c4
    QAngle m_vPrecomputedOBBAngles3; // 0x10d0
    Vector m_vPrecomputedOBBExtent3; // 0x10dc
    Vector m_vPrecomputedOBBOrigin4; // 0x10e8
    QAngle m_vPrecomputedOBBAngles4; // 0x10f4
    Vector m_vPrecomputedOBBExtent4; // 0x1100
    Vector m_vPrecomputedOBBOrigin5; // 0x110c
    QAngle m_vPrecomputedOBBAngles5; // 0x1118
    Vector m_vPrecomputedOBBExtent5; // 0x1124
    char pad_030[64];
    bool m_bInitialBoneSetup; // 0x1170
    // C_NetworkUtlVectorBase< uint16 > m_VisClusters;
    char pad_031[39];
}; // size: 0x1198

class __declspec(align(8)) C_RectLight : public C_BarnLight {
public:
    bool m_bShowLight; // 0x1198
    char pad_032[7];
}; // size: 0x11a0

class __declspec(align(8)) C_OmniLight : public C_BarnLight {
public:
    float m_flInnerAngle; // 0x1198
    float m_flOuterAngle; // 0x119c
    bool m_bShowLight; // 0x11a0
    char pad_032[7];
}; // size: 0x11a8

class __declspec(align(8)) CMapInfo : public C_PointEntity {
public:
    int32_t m_iBuyingStatus; // 0x608
    float m_flBombRadius; // 0x60c
    int32_t m_iPetPopulation; // 0x610
    bool m_bUseNormalSpawnsForDM; // 0x614
    bool m_bDisableAutoGeneratedDMSpawns; // 0x615
    float m_flBotMaxVisionDistance; // 0x618
    int32_t m_iHostageCount; // 0x61c
    bool m_bFadePlayerVisibilityFarZ; // 0x620
    bool m_bRainTraceToSkyEnabled; // 0x621
    float m_flEnvRainStrength; // 0x624
    float m_flEnvPuddleRippleStrength; // 0x628
    float m_flEnvPuddleRippleDirection; // 0x62c
    float m_flEnvWetnessCoverage; // 0x630
    float m_flEnvWetnessDryingAmount; // 0x634
}; // size: 0x638

class __declspec(align(8)) C_CSTeam : public C_Team {
public:
    char m_szTeamMatchStat[512]; // 0x6c0
    int32_t m_numMapVictories; // 0x8c0
    bool m_bSurrendered; // 0x8c4
    int32_t m_scoreFirstHalf; // 0x8c8
    int32_t m_scoreSecondHalf; // 0x8cc
    int32_t m_scoreOvertime; // 0x8d0
    char m_szClanTeamname[129]; // 0x8d4
    uint32_t m_iClanID; // 0x958
    char m_szTeamFlagImage[8]; // 0x95c
    char m_szTeamLogoImage[8]; // 0x964
    char pad_019[4];
}; // size: 0x970

class __declspec(align(8)) CInfoDynamicShadowHint : public C_PointEntity {
public:
    bool m_bDisabled; // 0x608
    float m_flRange; // 0x60c
    int32_t m_nImportance; // 0x610
    int32_t m_nLightChoice; // 0x614
    // CHandle< C_BaseEntity > m_hLight;
    char pad_017[8];
}; // size: 0x620

class __declspec(align(8)) CInfoDynamicShadowHintBox : public CInfoDynamicShadowHint {
public:
    Vector m_vBoxMins; // 0x620
    Vector m_vBoxMaxs; // 0x62c
}; // size: 0x638

class __declspec(align(8)) C_EnvSky : public C_BaseModelEntity {
public:
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly;
    char pad_026[16];
    bool m_bStartDisabled; // 0xe98
    // Color m_vTintColor;
    // Color m_vTintColorLightingOnly;
    char pad_027[8];
    float m_flBrightnessScale; // 0xea4
    int32_t m_nFogType; // 0xea8
    float m_flFogMinStart; // 0xeac
    float m_flFogMinEnd; // 0xeb0
    float m_flFogMaxStart; // 0xeb4
    float m_flFogMaxEnd; // 0xeb8
    bool m_bEnabled; // 0xebc
    char pad_028[43];
}; // size: 0xee8

class __declspec(align(8)) C_TonemapController2Alias_env_tonemap_controller2 : public C_TonemapController2 {
public:
}; // size: 0x620

class __declspec(align(8)) C_LightEntity : public C_BaseModelEntity {
public:
    CLightComponent* m_CLightComponent; // 0xe88
}; // size: 0xe90

class __declspec(align(8)) C_LightSpotEntity : public C_LightEntity {
public:
}; // size: 0xe90

class __declspec(align(8)) C_LightOrthoEntity : public C_LightEntity {
public:
}; // size: 0xe90

class __declspec(align(8)) C_LightDirectionalEntity : public C_LightEntity {
public:
}; // size: 0xe90

class __declspec(align(8)) C_LightEnvironmentEntity : public C_LightDirectionalEntity {
public:
}; // size: 0xe90

class __declspec(align(16)) CTriggerFan : public C_BaseTrigger {
public:
    Vector m_vFanOriginOffset; // 0xf58
    Vector m_vDirection; // 0xf64
    bool m_bPushTowardsInfoTarget; // 0xf70
    bool m_bPushAwayFromInfoTarget; // 0xf71
    // Quaternion m_qNoiseDelta;
    // CHandle< CInfoFan > m_hInfoFan;
    char pad_028[32];
    float m_flForce; // 0xf94
    bool m_bFalloff; // 0xf98
    char pad_029[4];
    CountdownTimer m_RampTimer; // 0xfa0
    char pad_030[8];
}; // size: 0xfc0

class __declspec(align(8)) CEnvSoundscapeProxyAlias_snd_soundscape_proxy : public CEnvSoundscapeProxy {
public:
}; // size: 0x6a0

class __declspec(align(8)) CEnvSoundscapeAlias_snd_soundscape : public CEnvSoundscape {
public:
}; // size: 0x698

class __declspec(align(8)) CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable : public CEnvSoundscapeTriggerable {
public:
}; // size: 0x698

class __declspec(align(8)) CFilterName : public CBaseFilter {
public:
    // CUtlSymbolLarge m_iFilterName;
    char pad_018[8];
}; // size: 0x648

class __declspec(align(8)) CFilterModel : public CBaseFilter {
public:
    // CUtlSymbolLarge m_iFilterModel;
    char pad_018[8];
}; // size: 0x648

class __declspec(align(8)) CFilterTeam : public CBaseFilter {
public:
    int32_t m_iFilterTeam; // 0x640
    char pad_018[4];
}; // size: 0x648

class __declspec(align(8)) CFilterMassGreater : public CBaseFilter {
public:
    float m_fFilterMass; // 0x640
    char pad_018[4];
}; // size: 0x648

class __declspec(align(8)) FilterDamageType : public CBaseFilter {
public:
    int32_t m_iDamageType; // 0x640
    char pad_018[4];
}; // size: 0x648

class __declspec(align(8)) FilterHealth : public CBaseFilter {
public:
    bool m_bAdrenalineActive; // 0x640
    int32_t m_iHealthMin; // 0x644
    int32_t m_iHealthMax; // 0x648
    char pad_018[4];
}; // size: 0x650

class __declspec(align(8)) CFilterAttributeInt : public CBaseFilter {
public:
    // CUtlSymbolLarge m_sAttributeName;
    char pad_018[8];
}; // size: 0x648

class __declspec(align(8)) C_ParticleSystem : public C_BaseModelEntity {
public:
    char m_szSnapshotFileName[512]; // 0xe88
    bool m_bActive; // 0x1088
    bool m_bFrozen; // 0x1089
    float m_flFreezeTransitionDuration; // 0x108c
    int32_t m_nStopType; // 0x1090
    bool m_bAnimateDuringGameplayPause; // 0x1094
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex;
    char pad_026[8];
    GameTime_t m_flStartTime; // 0x10a0
    float m_flPreSimTime; // 0x10a4
    Vector m_vServerControlPoints; // 0x10a8
    char pad_027[36];
    uint8_t m_iServerControlPointAssignments[4]; // 0x10d8
    // CHandle< C_BaseEntity >[64] m_hControlPointEnts;
    char pad_028[256];
    bool m_bNoSave; // 0x11dc
    bool m_bNoFreeze; // 0x11dd
    bool m_bNoRamp; // 0x11de
    bool m_bStartActive; // 0x11df
    // CUtlSymbolLarge m_iszEffectName;
    // CUtlSymbolLarge[64] m_iszControlPointNames;
    char pad_029[520];
    int32_t m_nDataCP; // 0x13e8
    Vector m_vecDataCPValue; // 0x13ec
    int32_t m_nTintCP; // 0x13f8
    // Color m_clrTint;
    char pad_030[36];
    bool m_bOldActive; // 0x1420
    bool m_bOldFrozen; // 0x1421
    char pad_031[22];
}; // size: 0x1438

class __declspec(align(8)) C_TextureBasedAnimatable : public C_BaseModelEntity {
public:
    bool m_bLoop; // 0xe88
    float m_flFPS; // 0xe8c
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys;
    char pad_026[16];
    Vector m_vAnimationBoundsMin; // 0xea0
    Vector m_vAnimationBoundsMax; // 0xeac
    float m_flStartTime; // 0xeb8
    float m_flStartFrame; // 0xebc
}; // size: 0xec0

class __declspec(align(8)) C_World : public C_BaseModelEntity {
public:
}; // size: 0xe88

class __declspec(align(16)) CBaseProp : public CBaseAnimGraph {
public:
    bool m_bModelOverrodeBlockLOS; // 0x1168
    int32_t m_iShapeType; // 0x116c
    bool m_bConformToCollisionBounds; // 0x1170
    // CTransform m_mPreferredCatchTransform;
    char pad_032[47];
}; // size: 0x11a0

class __declspec(align(16)) C_BreakableProp : public CBaseProp {
public:
    CPropDataComponent m_CPropDataComponent; // 0x11a0
    CEntityIOOutput m_OnStartDeath; // 0x11e0
    CEntityIOOutput m_OnBreak; // 0x11f8
    // CEntityOutputTemplate< float32, float32 > m_OnHealthChanged;
    char pad_033[32];
    CEntityIOOutput m_OnTakeDamage; // 0x1230
    float m_impactEnergyScale; // 0x1248
    int32_t m_iMinHealthDmg; // 0x124c
    float m_flPressureDelay; // 0x1250
    float m_flDefBurstScale; // 0x1254
    Vector m_vDefBurstOffset; // 0x1258
    // CHandle< C_BaseEntity > m_hBreaker;
    char pad_034[4];
    PerformanceMode_t m_PerformanceMode; // 0x1268
    GameTime_t m_flPreventDamageBeforeTime; // 0x126c
    BreakableContentsType_t m_BreakableContentsType; // 0x1270
    // CUtlString m_strBreakableContentsPropGroupOverride;
    // CUtlString m_strBreakableContentsParticleOverride;
    char pad_035[20];
    bool m_bHasBreakPiecesOrCommands; // 0x1288
    float m_explodeDamage; // 0x128c
    float m_explodeRadius; // 0x1290
    BaseExplosionTypes_t m_nExplosionType; // 0x1294
    float m_explosionDelay; // 0x1298
    // CUtlSymbolLarge m_explosionBuildupSound;
    // CUtlSymbolLarge m_explosionCustomEffect;
    // CUtlSymbolLarge m_explosionCustomSound;
    // CUtlSymbolLarge m_explosionModifier;
    // CHandle< C_BasePlayerPawn > m_hPhysicsAttacker;
    char pad_036[40];
    GameTime_t m_flLastPhysicsInfluenceTime; // 0x12c4
    float m_flDefaultFadeScale; // 0x12c8
    // CHandle< C_BaseEntity > m_hLastAttacker;
    char pad_037[4];
}; // size: 0x12d0

class __declspec(align(16)) C_DynamicProp : public C_BreakableProp {
public:
    bool m_bUseHitboxesForRenderBox; // 0x12d0
    bool m_bUseAnimGraph; // 0x12d1
    char pad_038[6];
    CEntityIOOutput m_pOutputAnimBegun; // 0x12d8
    CEntityIOOutput m_pOutputAnimOver; // 0x12f0
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0x1308
    CEntityIOOutput m_OnAnimReachedStart; // 0x1320
    CEntityIOOutput m_OnAnimReachedEnd; // 0x1338
    // CUtlSymbolLarge m_iszIdleAnim;
    char pad_039[8];
    AnimLoopMode_t m_nIdleAnimLoopMode; // 0x1358
    bool m_bRandomizeCycle; // 0x135c
    bool m_bStartDisabled; // 0x135d
    bool m_bFiredStartEndOutput; // 0x135e
    bool m_bForceNpcExclude; // 0x135f
    bool m_bCreateNonSolid; // 0x1360
    bool m_bIsOverrideProp; // 0x1361
    int32_t m_iInitialGlowState; // 0x1364
    int32_t m_nGlowRange; // 0x1368
    int32_t m_nGlowRangeMin; // 0x136c
    // Color m_glowColor;
    char pad_040[4];
    int32_t m_nGlowTeam; // 0x1374
    int32_t m_iCachedFrameCount; // 0x1378
    Vector m_vecCachedRenderMins; // 0x137c
    Vector m_vecCachedRenderMaxs; // 0x1388
    char pad_041[12];
}; // size: 0x13a0

class __declspec(align(16)) C_DynamicPropAlias_dynamic_prop : public C_DynamicProp {
public:
}; // size: 0x13a0

class __declspec(align(16)) C_DynamicPropAlias_prop_dynamic_override : public C_DynamicProp {
public:
}; // size: 0x13a0

class __declspec(align(16)) C_DynamicPropAlias_cable_dynamic : public C_DynamicProp {
public:
}; // size: 0x13a0

class __declspec(align(8)) C_ColorCorrectionVolume : public C_BaseTrigger {
public:
    float m_LastEnterWeight; // 0xf58
    GameTime_t m_LastEnterTime; // 0xf5c
    float m_LastExitWeight; // 0xf60
    GameTime_t m_LastExitTime; // 0xf64
    bool m_bEnabled; // 0xf68
    float m_MaxWeight; // 0xf6c
    float m_FadeDuration; // 0xf70
    float m_Weight; // 0xf74
    char m_lookupFilename[512]; // 0xf78
    char pad_028[8];
}; // size: 0x1180

class __declspec(align(16)) C_FuncMonitor : public C_FuncBrush {
public:
    // CUtlString m_targetCamera;
    char pad_026[8];
    int32_t m_nResolutionEnum; // 0xe90
    bool m_bRenderShadows; // 0xe94
    bool m_bUseUniqueColorTarget; // 0xe95
    // CUtlString m_brushModelName;
    // CHandle< C_BaseEntity > m_hTargetCamera;
    char pad_027[14];
    bool m_bEnabled; // 0xea4
    bool m_bDraw3DSkybox; // 0xea5
    char pad_028[1114];
}; // size: 0x1300

class __declspec(align(8)) C_FuncMoveLinear : public C_BaseToggle {
public:
}; // size: 0xe88

class __declspec(align(8)) C_FuncMover : public C_BaseToggle {
public:
}; // size: 0xe88

class __declspec(align(8)) C_PhysMagnet : public CBaseAnimGraph {
public:
    // CUtlVector< int32 > m_aAttachedObjectsFromServer;
    // CUtlVector< CHandle< C_BaseEntity > > m_aAttachedObjects;
    char pad_032[48];
}; // size: 0x1198

class __declspec(align(8)) C_PointCommentaryNode : public CBaseAnimGraph {
public:
    char pad_032[24];
    bool m_bActive; // 0x1180
    bool m_bWasActive; // 0x1181
    GameTime_t m_flEndTime; // 0x1184
    GameTime_t m_flStartTime; // 0x1188
    float m_flStartTimeInCommentary; // 0x118c
    // CUtlSymbolLarge m_iszCommentaryFile;
    // CUtlSymbolLarge m_iszTitle;
    // CUtlSymbolLarge m_iszSpeakers;
    char pad_033[24];
    int32_t m_iNodeNumber; // 0x11a8
    int32_t m_iNodeNumberMax; // 0x11ac
    bool m_bListenedTo; // 0x11b0
    CSoundPatch* m_sndCommentary; // 0x11b8
    // CHandle< C_BaseEntity > m_hViewPosition;
    char pad_034[4];
    bool m_bRestartAfterRestore; // 0x11c4
    char pad_035[3];
}; // size: 0x11c8

class __declspec(align(8)) C_WaterBullet : public CBaseAnimGraph {
public:
}; // size: 0x1168

class __declspec(align(8)) C_BaseDoor : public C_BaseToggle {
public:
    bool m_bIsUsable; // 0xe88
    char pad_026[7];
}; // size: 0xe90

class __declspec(align(8)) C_ClientRagdoll : public CBaseAnimGraph {
public:
    bool m_bFadeOut; // 0x1168
    bool m_bImportant; // 0x1169
    GameTime_t m_flEffectTime; // 0x116c
    GameTime_t m_gibDespawnTime; // 0x1170
    int32_t m_iCurrentFriction; // 0x1174
    int32_t m_iMinFriction; // 0x1178
    int32_t m_iMaxFriction; // 0x117c
    int32_t m_iFrictionAnimState; // 0x1180
    bool m_bReleaseRagdoll; // 0x1184
    AttachmentHandle_t m_iEyeAttachment; // 0x1185
    bool m_bFadingOut; // 0x1186
    float m_flScaleEnd[10]; // 0x1188
    GameTime_t m_flScaleTimeStart; // 0x11b0
    char pad_032[36];
    GameTime_t m_flScaleTimeEnd; // 0x11d8
    char pad_033[36];
}; // size: 0x1200

class __declspec(align(8)) C_Precipitation : public C_BaseTrigger {
public:
    float m_flDensity; // 0xf58
    char pad_028[12];
    float m_flParticleInnerDist; // 0xf68
    char* m_pParticleDef; // 0xf70
    char pad_029[32];
    TimedEvent m_tParticlePrecipTraceTimer; // 0xf98
    bool m_bActiveParticlePrecipEmitter[1]; // 0xfa0
    bool m_bParticlePrecipInitialized; // 0xfa1
    bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0xfa2
    int32_t m_nAvailableSheetSequencesMaxIndex; // 0xfa4
}; // size: 0xfa8

class __declspec(align(8)) C_Fish : public CBaseAnimGraph {
public:
    Vector m_pos; // 0x1168
    Vector m_vel; // 0x1174
    QAngle m_angles; // 0x1180
    int32_t m_localLifeState; // 0x118c
    float m_deathDepth; // 0x1190
    float m_deathAngle; // 0x1194
    float m_buoyancy; // 0x1198
    char pad_032[4];
    CountdownTimer m_wiggleTimer; // 0x11a0
    float m_wigglePhase; // 0x11b8
    float m_wiggleRate; // 0x11bc
    Vector m_actualPos; // 0x11c0
    QAngle m_actualAngles; // 0x11cc
    Vector m_poolOrigin; // 0x11d8
    float m_waterLevel; // 0x11e4
    bool m_gotUpdate; // 0x11e8
    float m_x; // 0x11ec
    float m_y; // 0x11f0
    float m_z; // 0x11f4
    float m_angle; // 0x11f8
    float m_errorHistory[20]; // 0x11fc
    int32_t m_errorHistoryIndex; // 0x124c
    int32_t m_errorHistoryCount; // 0x1250
    float m_averageError; // 0x1254
}; // size: 0x1258

class __declspec(align(16)) C_PhysicsProp : public C_BreakableProp {
public:
    bool m_bAwake; // 0x12d0
    char pad_038[15];
}; // size: 0x12e0

class __declspec(align(16)) C_BasePropDoor : public C_DynamicProp {
public:
    char pad_042[16];
    DoorState_t m_eDoorState; // 0x13b0
    bool m_modelChanged; // 0x13b4
    bool m_bLocked; // 0x13b5
    bool m_bNoNPCs; // 0x13b6
    Vector m_closedPosition; // 0x13b8
    QAngle m_closedAngles; // 0x13c4
    // CHandle< C_BasePropDoor > m_hMaster;
    char pad_043[4];
    Vector m_vWhereToSetLightingOrigin; // 0x13d4
}; // size: 0x13e0

class __declspec(align(16)) C_PropDoorRotating : public C_BasePropDoor {
public:
}; // size: 0x13e0

class __declspec(align(8)) C_TriggerMultiple : public C_BaseTrigger {
public:
}; // size: 0xf58

class __declspec(align(8)) C_TriggerLerpObject : public C_BaseTrigger {
public:
}; // size: 0xf58

class __declspec(align(8)) C_TriggerPhysics : public C_BaseTrigger {
public:
    float m_gravityScale; // 0xf58
    float m_linearLimit; // 0xf5c
    float m_linearDamping; // 0xf60
    float m_angularLimit; // 0xf64
    float m_angularDamping; // 0xf68
    float m_linearForce; // 0xf6c
    float m_flFrequency; // 0xf70
    float m_flDampingRatio; // 0xf74
    Vector m_vecLinearForcePointAt; // 0xf78
    bool m_bCollapseToForcePoint; // 0xf84
    Vector m_vecLinearForcePointAtWorld; // 0xf88
    Vector m_vecLinearForceDirection; // 0xf94
    bool m_bConvertToDebrisWhenPossible; // 0xfa0
    char pad_028[7];
}; // size: 0xfa8

class __declspec(align(16)) C_PhysPropClientside : public C_BreakableProp {
public:
    GameTime_t m_flTouchDelta; // 0x12d0
    GameTime_t m_fDeathTime; // 0x12d4
    Vector m_vecDamagePosition; // 0x12d8
    Vector m_vecDamageDirection; // 0x12e4
    DamageTypes_t m_nDamageType; // 0x12f0
    char pad_038[12];
}; // size: 0x1300

class __declspec(align(8)) C_RagdollProp : public CBaseAnimGraph {
public:
    // C_NetworkUtlVectorBase< bool > m_ragEnabled;
    // C_NetworkUtlVectorBase< Vector > m_ragPos;
    // C_NetworkUtlVectorBase< QAngle > m_ragAngles;
    char pad_032[80];
    float m_flBlendWeight; // 0x11b8
    // CHandle< C_BaseEntity > m_hRagdollSource;
    char pad_033[4];
    AttachmentHandle_t m_iEyeAttachment; // 0x11c0
    float m_flBlendWeightCurrent; // 0x11c4
    // CUtlVector< int32 > m_parentPhysicsBoneIndices;
    // CUtlVector< int32 > m_worldSpaceBoneComputationOrder;
    char pad_034[48];
}; // size: 0x11f8

class __declspec(align(8)) C_LocalTempEntity : public CBaseAnimGraph {
public:
    int32_t flags; // 0x1168
    GameTime_t die; // 0x116c
    float m_flFrameMax; // 0x1170
    float x; // 0x1174
    float y; // 0x1178
    float fadeSpeed; // 0x117c
    float bounceFactor; // 0x1180
    int32_t hitSound; // 0x1184
    int32_t priority; // 0x1188
    Vector tentOffset; // 0x118c
    QAngle m_vecTempEntAngVelocity; // 0x1198
    int32_t tempent_renderamt; // 0x11a4
    Vector m_vecNormal; // 0x11a8
    float m_flSpriteScale; // 0x11b4
    int32_t m_nFlickerFrame; // 0x11b8
    float m_flFrameRate; // 0x11bc
    float m_flFrame; // 0x11c0
    char* m_pszImpactEffect; // 0x11c8
    char* m_pszParticleEffect; // 0x11d0
    bool m_bParticleCollision; // 0x11d8
    int32_t m_iLastCollisionFrame; // 0x11dc
    Vector m_vLastCollisionOrigin; // 0x11e0
    Vector m_vecTempEntVelocity; // 0x11ec
    Vector m_vecPrevAbsOrigin; // 0x11f8
    Vector m_vecTempEntAcceleration; // 0x1204
}; // size: 0x1210

class __declspec(align(16)) C_ShatterGlassShardPhysics : public C_PhysicsProp {
public:
    char pad_039[8];
    shard_model_desc_t m_ShardDesc; // 0x12e8
    char pad_040[8];
}; // size: 0x1370

class __declspec(align(8)) C_EconWearable : public C_EconEntity {
public:
    int32_t m_nForceSkin; // 0x18c0
    bool m_bAlwaysAllow; // 0x18c4
    char pad_040[3];
}; // size: 0x18c8

class __declspec(align(8)) C_BaseGrenade : public C_BaseFlex {
public:
    bool m_bHasWarnedAI; // 0x1350
    bool m_bIsSmokeGrenade; // 0x1351
    bool m_bIsLive; // 0x1352
    float m_DmgRadius; // 0x1354
    GameTime_t m_flDetonateTime; // 0x1358
    float m_flWarnAITime; // 0x135c
    float m_flDamage; // 0x1360
    // CUtlSymbolLarge m_iszBounceSound;
    // CUtlString m_ExplosionSound;
    // CHandle< C_CSPlayerPawn > m_hThrower;
    char pad_036[48];
    GameTime_t m_flNextAttack; // 0x1394
    // CHandle< C_CSPlayerPawn > m_hOriginalThrower;
    char pad_037[8];
}; // size: 0x13a0

class __declspec(align(16)) CFuncRetakeBarrier : public C_DynamicProp {
public:
    char pad_042[32];
}; // size: 0x13c0

class __declspec(align(8)) CBombTarget : public C_BaseTrigger {
public:
    bool m_bBombPlantedHere; // 0xf58
    char pad_028[7];
}; // size: 0xf60

class __declspec(align(8)) CHostageRescueZoneShim : public C_BaseTrigger {
public:
}; // size: 0xf58

class __declspec(align(8)) CHostageRescueZone : public CHostageRescueZoneShim {
public:
    char pad_028[24];
}; // size: 0xf70

class __declspec(align(8)) C_TriggerBuoyancy : public C_BaseTrigger {
public:
    CBuoyancyHelper m_BuoyancyHelper; // 0xf58
    float m_flFluidDensity; // 0x1070
    char pad_028[4];
}; // size: 0x1078

class __declspec(align(16)) C_PhysicsPropMultiplayer : public C_PhysicsProp {
public:
}; // size: 0x12e0

class __declspec(align(8)) C_FootstepControl : public C_BaseTrigger {
public:
    // CUtlSymbolLarge m_source;
    // CUtlSymbolLarge m_destination;
    char pad_028[16];
}; // size: 0xf68

class __declspec(align(8)) C_CS2WeaponModuleBase : public CBaseAnimGraph {
public:
    char pad_032[8];
}; // size: 0x1170

class __declspec(align(8)) C_StattrakModule : public C_CS2WeaponModuleBase {
public:
    bool m_bKnife; // 0x1170
    char pad_033[7];
}; // size: 0x1178

class __declspec(align(8)) C_NametagModule : public C_CS2WeaponModuleBase {
public:
    // CUtlString m_strNametagString;
    char pad_033[8];
}; // size: 0x1178

class __declspec(align(8)) C_KeychainModule : public C_CS2WeaponModuleBase {
public:
    uint32_t m_nKeychainDefID; // 0x1170
    uint32_t m_nKeychainSeed; // 0x1174
}; // size: 0x1178

class __declspec(align(8)) C_BaseCSGrenadeProjectile : public C_BaseGrenade {
public:
    Vector m_vInitialPosition; // 0x13a0
    Vector m_vInitialVelocity; // 0x13ac
    int32_t m_nBounces; // 0x13b8
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nExplodeEffectIndex;
    char pad_038[12];
    int32_t m_nExplodeEffectTickBegin; // 0x13c8
    Vector m_vecExplodeEffectOrigin; // 0x13cc
    GameTime_t m_flSpawnTime; // 0x13d8
    Vector vecLastTrailLinePos; // 0x13dc
    GameTime_t flNextTrailLineTime; // 0x13e8
    bool m_bExplodeEffectBegan; // 0x13ec
    bool m_bCanCreateGrenadeTrail; // 0x13ed
    ParticleIndex_t m_nSnapshotTrajectoryEffectIndex; // 0x13f0
    // CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hSnapshotTrajectoryParticleSnapshot;
    // CUtlVector< Vector > m_arrTrajectoryTrailPoints;
    // CUtlVector< float32 > m_arrTrajectoryTrailPointCreationTimes;
    char pad_039[60];
    float m_flTrajectoryTrailEffectCreationTime; // 0x1430
    char pad_040[4];
}; // size: 0x1438

class __declspec(align(8)) C_CSGO_PreviewModel : public C_BaseFlex {
public:
    // CUtlString m_defaultAnim;
    char pad_036[8];
    AnimLoopMode_t m_nDefaultAnimLoopMode; // 0x1358
    float m_flInitialModelScale; // 0x135c
    // CUtlString m_sInitialWeaponState;
    char pad_037[1280];
}; // size: 0x1860

class __declspec(align(8)) C_CSGO_PreviewModelAlias_csgo_item_previewmodel : public C_CSGO_PreviewModel {
public:
}; // size: 0x1860

class __declspec(align(8)) C_WorldModelGloves : public CBaseAnimGraph {
public:
    char pad_032[8];
}; // size: 0x1170

class __declspec(align(8)) C_BulletHitModel {
public:
    // matrix3x4_t m_matLocal;
    char pad_00[4504];
    int32_t m_iBoneIndex; // 0x1198
    // CHandle< C_BaseEntity > m_hPlayerParent;
    char pad_01[4];
    bool m_bIsHit; // 0x11a0
    float m_flTimeCreated; // 0x11a4
    Vector m_vecStartPos; // 0x11a8
    char pad_02[4];
}; // size: 0x11b8

class __declspec(align(8)) C_HostageCarriableProp : public CBaseAnimGraph {
public:
    char pad_032[8];
}; // size: 0x1170

class __declspec(align(8)) C_PlantedC4 : public CBaseAnimGraph {
public:
    char pad_032[8];
    bool m_bBombTicking; // 0x1170
    int32_t m_nBombSite; // 0x1174
    int32_t m_nSourceSoundscapeHash; // 0x1178
    char pad_033[4];
    EntitySpottedState_t m_entitySpottedState; // 0x1180
    GameTime_t m_flNextGlow; // 0x1198
    GameTime_t m_flNextBeep; // 0x119c
    GameTime_t m_flC4Blow; // 0x11a0
    bool m_bCannotBeDefused; // 0x11a4
    bool m_bHasExploded; // 0x11a5
    float m_flTimerLength; // 0x11a8
    bool m_bBeingDefused; // 0x11ac
    float m_bTriggerWarning; // 0x11b0
    float m_bExplodeWarning; // 0x11b4
    bool m_bC4Activated; // 0x11b8
    bool m_bTenSecWarning; // 0x11b9
    float m_flDefuseLength; // 0x11bc
    GameTime_t m_flDefuseCountDown; // 0x11c0
    bool m_bBombDefused; // 0x11c4
    // CHandle< C_CSPlayerPawn > m_hBombDefuser;
    char pad_034[8];
    C_AttributeContainer m_AttributeManager; // 0x11d0
    // CHandle< C_Multimeter > m_hDefuserMultimeter;
    char pad_035[4];
    GameTime_t m_flNextRadarFlashTime; // 0x16a4
    bool m_bRadarFlash; // 0x16a8
    // CHandle< C_CSPlayerPawn > m_pBombDefuser;
    char pad_036[4];
    GameTime_t m_fLastDefuseTime; // 0x16b0
    CBasePlayerController* m_pPredictionOwner; // 0x16b8
    Vector m_vecC4ExplodeSpectatePos; // 0x16c0
    QAngle m_vecC4ExplodeSpectateAng; // 0x16cc
    float m_flC4ExplodeSpectateDuration; // 0x16d8
    char pad_037[4];
}; // size: 0x16e0

class __declspec(align(8)) C_Multimeter : public CBaseAnimGraph {
public:
    // CHandle< C_PlantedC4 > m_hTargetC4;
    char pad_032[16];
}; // size: 0x1178

class __declspec(align(8)) C_Item : public C_EconEntity {
public:
    char m_pReticleHintTextName[256]; // 0x18c0
}; // size: 0x19c0

class __declspec(align(8)) C_LateUpdatedAnimating : public CBaseAnimGraph {
public:
    char pad_032[152];
}; // size: 0x1200

class __declspec(align(16)) C_CS2HudModelAddon : public C_LateUpdatedAnimating {
public:
    char pad_033[16];
}; // size: 0x1210

class __declspec(align(8)) C_CS2HudModelBase : public C_LateUpdatedAnimating {
public:
    char pad_033[48];
}; // size: 0x1230

class __declspec(align(16)) C_CS2HudModelWeapon : public C_CS2HudModelBase {
public:
    char pad_034[80];
}; // size: 0x1280

class __declspec(align(16)) C_CS2HudModelArms : public C_CS2HudModelBase {
public:
    char pad_034[272];
}; // size: 0x1340

class __declspec(align(8)) C_HEGrenadeProjectile : public C_BaseCSGrenadeProjectile {
public:
}; // size: 0x1438

class __declspec(align(8)) C_FlashbangProjectile : public C_BaseCSGrenadeProjectile {
public:
}; // size: 0x1438

class __declspec(align(16)) C_Chicken : public C_DynamicProp {
public:
    // CHandle< CBaseAnimGraph > m_hHolidayHatAddon;
    char pad_042[12];
    bool m_jumpedThisFrame; // 0x13ac
    // CHandle< C_CSPlayerPawn > m_leader;
    char pad_043[8];
    C_AttributeContainer m_AttributeManager; // 0x13b8
    bool m_bAttributesInitialized; // 0x1888
    ParticleIndex_t m_hWaterWakeParticles; // 0x188c
    bool m_bIsPreviewModel; // 0x1890
    char pad_044[15];
}; // size: 0x18a0

class __declspec(align(8)) C_MapPreviewParticleSystem : public C_ParticleSystem {
public:
}; // size: 0x1438

class __declspec(align(8)) C_EnvParticleGlow : public C_ParticleSystem {
public:
    float m_flAlphaScale; // 0x1438
    float m_flRadiusScale; // 0x143c
    float m_flSelfIllumScale; // 0x1440
    // Color m_ColorTint;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hTextureOverride;
    char pad_032[12];
}; // size: 0x1450

class __declspec(align(8)) C_RagdollPropAttached : public C_RagdollProp {
public:
    uint32_t m_boneIndexAttached; // 0x11f8
    uint32_t m_ragdollAttachedObjectIndex; // 0x11fc
    Vector m_attachmentPointBoneSpace; // 0x1200
    Vector m_attachmentPointRagdollSpace; // 0x120c
    Vector m_vecOffset; // 0x1218
    float m_parentTime; // 0x1224
    bool m_bHasParent; // 0x1228
    char pad_035[7];
}; // size: 0x1230

class __declspec(align(8)) C_CSWeaponBase : public C_BasePlayerWeapon {
public:
    char pad_041[80];
    WeaponGameplayAnimState m_iWeaponGameplayAnimState; // 0x1948
    GameTime_t m_flWeaponGameplayAnimStateTimestamp; // 0x194c
    GameTime_t m_flInspectCancelCompleteTime; // 0x1950
    bool m_bInspectPending; // 0x1954
    bool m_bInspectShouldLoop; // 0x1955
    char pad_042[40];
    float m_flCrosshairDistance; // 0x1980
    int32_t m_iAmmoLastCheck; // 0x1984
    int32_t m_nLastEmptySoundCmdNum; // 0x1988
    bool m_bFireOnEmpty; // 0x198c
    char pad_043[3];
    CEntityIOOutput m_OnPlayerPickup; // 0x1990
    CSWeaponMode m_weaponMode; // 0x19a8
    float m_flTurningInaccuracyDelta; // 0x19ac
    Vector m_vecTurningInaccuracyEyeDirLast; // 0x19b0
    float m_flTurningInaccuracy; // 0x19bc
    float m_fAccuracyPenalty; // 0x19c0
    GameTime_t m_flLastAccuracyUpdateTime; // 0x19c4
    float m_fAccuracySmoothedForZoom; // 0x19c8
    int32_t m_iRecoilIndex; // 0x19cc
    float m_flRecoilIndex; // 0x19d0
    bool m_bBurstMode; // 0x19d4
    GameTime_t m_flLastBurstModeChangeTime; // 0x19d8
    GameTick_t m_nPostponeFireReadyTicks; // 0x19dc
    float m_flPostponeFireReadyFrac; // 0x19e0
    bool m_bInReload; // 0x19e4
    GameTime_t m_flDroppedAtTime; // 0x19e8
    bool m_bIsHauledBack; // 0x19ec
    bool m_bSilencerOn; // 0x19ed
    GameTime_t m_flTimeSilencerSwitchComplete; // 0x19f0
    float m_flWeaponActionPlaybackRate; // 0x19f4
    int32_t m_iOriginalTeamNumber; // 0x19f8
    int32_t m_iMostRecentTeamNumber; // 0x19fc
    bool m_bDroppedNearBuyZone; // 0x1a00
    float m_flNextAttackRenderTimeOffset; // 0x1a04
    char pad_044[152];
    bool m_bClearWeaponIdentifyingUGC; // 0x1aa0
    bool m_bVisualsDataSet; // 0x1aa1
    bool m_bUIWeapon; // 0x1aa2
    int32_t m_nCustomEconReloadEventId; // 0x1aa4
    char pad_045[8];
    GameTime_t m_nextPrevOwnerUseTime; // 0x1ab0
    // CHandle< C_CSPlayerPawn > m_hPrevOwner;
    char pad_046[4];
    GameTick_t m_nDropTick; // 0x1ab8
    bool m_bWasActiveWeaponWhenDropped; // 0x1abc
    char pad_047[31];
    bool m_donated; // 0x1adc
    GameTime_t m_fLastShotTime; // 0x1ae0
    bool m_bWasOwnedByCT; // 0x1ae4
    bool m_bWasOwnedByTerrorist; // 0x1ae5
    float m_flNextClientFireBulletTime; // 0x1ae8
    float m_flNextClientFireBulletTime_Repredict; // 0x1aec
    char pad_048[352];
    C_IronSightController m_IronSightController; // 0x1c50
    int32_t m_iIronSightMode; // 0x1d00
    char pad_049[20];
    GameTime_t m_flLastLOSTraceFailureTime; // 0x1d18
    char pad_050[92];
    float m_flWatTickOffset; // 0x1d78
    char pad_051[16];
    GameTime_t m_flLastShakeTime; // 0x1d8c
    char pad_052[432];
}; // size: 0x1f40

class __declspec(align(16)) C_CSWeaponBaseGun : public C_CSWeaponBase {
public:
    int32_t m_zoomLevel; // 0x1f40
    int32_t m_iBurstShotsRemaining; // 0x1f44
    int32_t m_iSilencerBodygroup; // 0x1f48
    char pad_053[12];
    int32_t m_silencedModelIndex; // 0x1f58
    bool m_inPrecache; // 0x1f5c
    bool m_bNeedsBoltAction; // 0x1f5d
    int32_t m_nRevolverCylinderIdx; // 0x1f60
    char pad_054[12];
}; // size: 0x1f70

class __declspec(align(16)) C_CSWeaponBaseShotgun : public C_CSWeaponBase {
public:
}; // size: 0x1f40

class __declspec(align(16)) C_C4 : public C_CSWeaponBase {
public:
    ParticleIndex_t m_activeLightParticleIndex; // 0x1f40
    C4LightEffect_t m_eActiveLightEffect; // 0x1f44
    bool m_bStartedArming; // 0x1f48
    GameTime_t m_fArmedTime; // 0x1f4c
    bool m_bBombPlacedAnimation; // 0x1f50
    bool m_bIsPlantingViaUse; // 0x1f51
    char pad_053[4];
    EntitySpottedState_t m_entitySpottedState; // 0x1f58
    int32_t m_nSpotRules; // 0x1f70
    bool m_bPlayedArmingBeeps[7]; // 0x1f74
    bool m_bBombPlanted; // 0x1f7b
    char pad_054[4];
}; // size: 0x1f80

class __declspec(align(16)) C_WeaponCZ75a : public C_CSWeaponBaseGun {
public:
    bool m_bMagazineRemoved; // 0x1f70
    char pad_055[15];
}; // size: 0x1f80

class __declspec(align(16)) C_DEagle : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponElite : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponTaser : public C_CSWeaponBaseGun {
public:
    GameTime_t m_fFireTime; // 0x1f70
    int32_t m_nLastAttackTick; // 0x1f74
    char pad_055[8];
}; // size: 0x1f80

class __declspec(align(16)) C_Knife : public C_CSWeaponBase {
public:
    bool m_bFirstAttack; // 0x1f40
    char pad_053[15];
}; // size: 0x1f50

class __declspec(align(8)) C_MolotovProjectile : public C_BaseCSGrenadeProjectile {
public:
    bool m_bIsIncGrenade; // 0x1438
    char pad_041[39];
}; // size: 0x1460

class __declspec(align(8)) C_DecoyProjectile : public C_BaseCSGrenadeProjectile {
public:
    int32_t m_nDecoyShotTick; // 0x1438
    int32_t m_nClientLastKnownDecoyShotTick; // 0x143c
    char pad_041[32];
    GameTime_t m_flTimeParticleEffectSpawn; // 0x1460
    char pad_042[4];
}; // size: 0x1468

class __declspec(align(8)) C_SmokeGrenadeProjectile : public C_BaseCSGrenadeProjectile {
public:
    char pad_041[24];
    int32_t m_nSmokeEffectTickBegin; // 0x1450
    bool m_bDidSmokeEffect; // 0x1454
    int32_t m_nRandomSeed; // 0x1458
    Vector m_vSmokeColor; // 0x145c
    Vector m_vSmokeDetonationPos; // 0x1468
    // C_NetworkUtlVectorBase< uint8 > m_VoxelFrameData;
    char pad_042[28];
    int32_t m_nVoxelFrameDataSize; // 0x1490
    int32_t m_nVoxelUpdate; // 0x1494
    bool m_bSmokeVolumeDataReceived; // 0x1498
    bool m_bSmokeEffectSpawned; // 0x1499
    char pad_043[342];
}; // size: 0x15f0

class __declspec(align(8)) C_BaseCSGrenade : public C_CSWeaponBase {
public:
    bool m_bClientPredictDelete; // 0x1f40
    bool m_bRedraw; // 0x1f41
    bool m_bIsHeldByPlayer; // 0x1f42
    bool m_bPinPulled; // 0x1f43
    bool m_bJumpThrow; // 0x1f44
    bool m_bThrowAnimating; // 0x1f45
    GameTime_t m_fThrowTime; // 0x1f48
    char pad_053[4];
    float m_flThrowStrength; // 0x1f50
    char pad_054[116];
    GameTime_t m_fDropTime; // 0x1fc8
    GameTime_t m_fPinPullTime; // 0x1fcc
    bool m_bJustPulledPin; // 0x1fd0
    GameTick_t m_nNextHoldTick; // 0x1fd4
    float m_flNextHoldFrac; // 0x1fd8
    // CHandle< C_CSWeaponBase > m_hSwitchToWeaponAfterThrow;
    char pad_055[36];
}; // size: 0x2000

class __declspec(align(8)) C_WeaponBaseItem : public C_CSWeaponBase {
public:
    bool m_bSequenceInProgress; // 0x1f40
    bool m_bRedraw; // 0x1f41
    char pad_053[14];
}; // size: 0x1f50

class __declspec(align(8)) C_ItemDogtags : public C_Item {
public:
    // CHandle< C_CSPlayerPawn > m_OwningPlayer;
    // CHandle< C_CSPlayerPawn > m_KillingPlayer;
    char pad_040[8];
}; // size: 0x19c8

class __declspec(align(16)) C_Item_Healthshot : public C_WeaponBaseItem {
public:
}; // size: 0x1f50

class __declspec(align(8)) C_Hostage : public C_BaseCombatCharacter {
public:
    EntitySpottedState_t m_entitySpottedState; // 0x13d8
    // CHandle< C_BaseEntity > m_leader;
    char pad_039[8];
    CountdownTimer m_reuseTimer; // 0x13f8
    Vector m_vel; // 0x1410
    bool m_isRescued; // 0x141c
    bool m_jumpedThisFrame; // 0x141d
    int32_t m_nHostageState; // 0x1420
    bool m_bHandsHaveBeenCut; // 0x1424
    // CHandle< C_CSPlayerPawn > m_hHostageGrabber;
    char pad_040[4];
    GameTime_t m_fLastGrabTime; // 0x142c
    Vector m_vecGrabbedPos; // 0x1430
    GameTime_t m_flRescueStartTime; // 0x143c
    GameTime_t m_flGrabSuccessTime; // 0x1440
    GameTime_t m_flDropStartTime; // 0x1444
    GameTime_t m_flDeadOrRescuedTime; // 0x1448
    char pad_041[4];
    CountdownTimer m_blinkTimer; // 0x1450
    Vector m_lookAt; // 0x1468
    char pad_042[4];
    CountdownTimer m_lookAroundTimer; // 0x1478
    bool m_isInit; // 0x1490
    AttachmentHandle_t m_eyeAttachment; // 0x1491
    AttachmentHandle_t m_chestAttachment; // 0x1492
    CBasePlayerController* m_pPredictionOwner; // 0x1498
    GameTime_t m_fNewestAlphaThinkTime; // 0x14a0
    char pad_043[4];
}; // size: 0x14a8

class __declspec(align(8)) C_NetTestBaseCombatCharacter : public C_BaseCombatCharacter {
public:
}; // size: 0x13d8

class __declspec(align(16)) C_AK47 : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponAug : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponAWP : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponBizon : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponFamas : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponFiveSeven : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponG3SG1 : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponGalilAR : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponGlock : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponHKP2000 : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponUSPSilencer : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponM4A1 : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponM4A1Silencer : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponMAC10 : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponMag7 : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponMP5SD : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponMP7 : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponMP9 : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponNegev : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponP250 : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponP90 : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponSCAR20 : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponSG556 : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponSSG08 : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponTec9 : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponUMP45 : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponM249 : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponRevolver : public C_CSWeaponBaseGun {
public:
}; // size: 0x1f70

class __declspec(align(16)) C_WeaponNOVA : public C_CSWeaponBaseShotgun {
public:
}; // size: 0x1f40

class __declspec(align(16)) C_WeaponSawedoff : public C_CSWeaponBaseShotgun {
public:
}; // size: 0x1f40

class __declspec(align(16)) C_WeaponXM1014 : public C_CSWeaponBaseShotgun {
public:
}; // size: 0x1f40

class __declspec(align(16)) C_MolotovGrenade : public C_BaseCSGrenade {
public:
}; // size: 0x2000

class __declspec(align(16)) C_IncendiaryGrenade : public C_MolotovGrenade {
public:
}; // size: 0x2000

class __declspec(align(16)) C_DecoyGrenade : public C_BaseCSGrenade {
public:
}; // size: 0x2000

class __declspec(align(16)) C_Flashbang : public C_BaseCSGrenade {
public:
}; // size: 0x2000

class __declspec(align(16)) C_HEGrenade : public C_BaseCSGrenade {
public:
}; // size: 0x2000

class __declspec(align(16)) C_SmokeGrenade : public C_BaseCSGrenade {
public:
}; // size: 0x2000

class __declspec(align(16)) C_CSGO_PreviewPlayer : public C_CSPlayerPawn {
public:
    // CGlobalSymbol m_animgraphCharacterModeString;
    char pad_074[8];
    float m_flInitialModelScale; // 0x3ef8
    char pad_075[164];
}; // size: 0x3fa0

class __declspec(align(16)) C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel : public C_CSGO_PreviewPlayer {
public:
}; // size: 0x3fa0

class __declspec(align(16)) C_CSGO_TeamPreviewModel : public C_CSGO_PreviewPlayer {
public:
}; // size: 0x3fa0

#ifdef __cplusplus
#pragma warning(pop)
#endif // __cplusplus