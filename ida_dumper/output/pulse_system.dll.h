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


_enum PulseTestEnumColor_t : uint32_t {
    BLACK = 0,
    WHITE = 1,
    RED = 2,
    GREEN = 3,
    BLUE = 4,
};

_enum PulseTestEnumShape_t : uint32_t {
    CIRCLE = 100,
    SQUARE = 200,
    TRIANGLE = 300,
};

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

class __declspec(align(1)) FakeEntity_tAPI {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(1)) FakeEntityDerivedA_tAPI {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(1)) FakeEntityDerivedB_tAPI {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(1)) CPulseTestFuncs_LibraryA {
public:
    char pad_00[1];
}; // size: 0x1

/// CPulseCell_ExampleCriteria::Criteria_t
class __declspec(align(4)) CPulseCell_ExampleCriteria__Criteria_t {
public:
    float m_flFloatValue1; // 0x0
    float m_flFloatValue2; // 0x4
    bool m_bMyBool; // 0x8
    char pad_00[3];
}; // size: 0xc

/// CPulseCell_TestWaitWithCursorState::CursorState_t
class __declspec(align(4)) CPulseCell_TestWaitWithCursorState__CursorState_t {
public:
    float flWaitValue; // 0x0
    bool bFailOnCancel; // 0x4
    char pad_00[3];
}; // size: 0x8

/// CPulseCell_Test_MultiOutflow_WithParams_Yielding::CursorState_t
class __declspec(align(4)) CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t {
public:
    int32_t nTestStep; // 0x0
}; // size: 0x4

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

class __declspec(align(8)) CPulseCell_ExampleCriteria {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CPulseCell_ExampleSelector {
public:
    char pad_00[72];
    PulseSelectorOutflowList_t m_OutflowList; // 0x48
}; // size: 0x60

class __declspec(align(1)) CPulseGraphInstance_TestDomain_FakeEntityOwner {
public:
    char pad_00[280];
}; // size: 0x118

class __declspec(align(4)) CPulseGraphInstance_TestDomain {
public:
    char pad_00[304];
    bool m_bIsRunningUnitTests; // 0x130
    bool m_bExplicitTimeStepping; // 0x131
    bool m_bExpectingToDestroyWithYieldedCursors; // 0x132
    bool m_bQuietTracepoints; // 0x133
    bool m_bExpectingCursorTerminatedDueToMaxInstructions; // 0x134
    int32_t m_nCursorsTerminatedDueToMaxInstructions; // 0x138
    int32_t m_nNextValidateIndex; // 0x13c
    // CUtlVector< CUtlString > m_Tracepoints;
    char pad_01[24];
    bool m_bTestYesOrNoPath; // 0x158
    char pad_02[7];
}; // size: 0x160

class __declspec(align(8)) CPulseCell_Step_TestDomainTracepoint {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CPulseCell_Step_TestDomainCreateFakeEntity {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CPulseCell_Step_TestDomainDestroyFakeEntity {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CPulseCell_Step_TestDomainEntFire {
public:
    // CUtlString m_Input;
    char pad_00[80];
}; // size: 0x50

class __declspec(align(8)) CPulseCell_Val_TestDomainGetEntityName {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CPulseCell_Val_TestDomainFindEntityByName {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CPulseCell_TestWaitWithCursorState {
public:
    char pad_00[72];
    CPulse_ResumePoint m_WakeResume; // 0x48
    CPulse_ResumePoint m_WakeCancel; // 0x90
    CPulse_ResumePoint m_WakeFail; // 0xd8
}; // size: 0x120

class __declspec(align(4)) CTestDomainDerived_Cursor {
public:
    char pad_00[208];
    int32_t m_nCursorValueA; // 0xd0
    int32_t m_nCursorValueB; // 0xd4
}; // size: 0xd8

class __declspec(align(4)) CPulseGraphInstance_TestDomain_Derived {
public:
    char pad_00[352];
    int32_t m_nInstanceValueX; // 0x160
    char pad_01[4];
}; // size: 0x168

class __declspec(align(1)) CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView {
public:
    char pad_00[352];
}; // size: 0x160

class __declspec(align(8)) CPulseCell_Test_NoInflow {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CPulseCell_Test_MultiInflow_WithDefault {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CPulseCell_Test_MultiInflow_NoDefault {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CPulseCell_Test_MultiOutflow_WithParams {
public:
    char pad_00[72];
    SignatureOutflow_Continue m_Out1; // 0x48
    SignatureOutflow_Continue m_Out2; // 0x90
}; // size: 0xd8

class __declspec(align(8)) CPulseCell_Test_MultiOutflow_WithParams_Yielding {
public:
    char pad_00[72];
    SignatureOutflow_Continue m_Out1; // 0x48
    SignatureOutflow_Continue m_AsyncChild1; // 0x90
    SignatureOutflow_Continue m_AsyncChild2; // 0xd8
    SignatureOutflow_Resume m_YieldResume1; // 0x120
    SignatureOutflow_Resume m_YieldResume2; // 0x168
}; // size: 0x1b0

class __declspec(align(8)) CPulseCell_Value_TestValue50 {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CPulseCell_Outflow_TestRandomYesNo {
public:
    char pad_00[72];
    CPulse_OutflowConnection m_Yes; // 0x48
    CPulse_OutflowConnection m_No; // 0x90
}; // size: 0xd8

class __declspec(align(8)) CPulseCell_Outflow_TestExplicitYesNo {
public:
    char pad_00[72];
    CPulse_OutflowConnection m_Yes; // 0x48
    CPulse_OutflowConnection m_No; // 0x90
}; // size: 0xd8

class __declspec(align(4)) CPulseTurtleGraphicsCursor {
public:
    // Color m_Color;
    char pad_00[212];
    Vector2D m_vPos; // 0xd4
    float m_flHeadingDeg; // 0xdc
    bool m_bPenUp; // 0xe0
    char pad_01[7];
}; // size: 0xe8

class __declspec(align(1)) CPulseGraphInstance_TurtleGraphics {
public:
    char pad_00[320];
}; // size: 0x140

#ifdef __cplusplus
#pragma warning(pop)
#endif // __cplusplus