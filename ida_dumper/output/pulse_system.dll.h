enum PulseTestEnumColor_t : uint32_t {
    BLACK = 0,
    WHITE = 1,
    RED = 2,
    GREEN = 3,
    BLUE = 4,
};

enum PulseTestEnumShape_t : uint32_t {
    CIRCLE = 100,
    SQUARE = 200,
    TRIANGLE = 300,
};

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

class FakeEntity_tAPI {
public:
    char pad_00[8];
};

class FakeEntityDerivedA_tAPI {
public:
    char pad_00[8];
};

class FakeEntityDerivedB_tAPI {
public:
    char pad_00[8];
};

class CPulseTestFuncs_LibraryA {
public:
    char pad_00[1];
};

class CPulseCell_ExampleCriteria::Criteria_t {
public:
    float m_flFloatValue1;
    float m_flFloatValue2;
    bool m_bMyBool;
    char pad_00[3];
};

class CPulseCell_TestWaitWithCursorState::CursorState_t {
public:
    float flWaitValue;
    bool bFailOnCancel;
    char pad_00[3];
};

class CPulseCell_Test_MultiOutflow_WithParams_Yielding::CursorState_t {
public:
    int32_t nTestStep;
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

class CPulseCell_ExampleCriteria {
public:
    char pad_00[72];
};

class CPulseCell_ExampleSelector {
public:
    char pad_00[72];
    PulseSelectorOutflowList_t m_OutflowList;
};

class CPulseGraphInstance_TestDomain_FakeEntityOwner {
public:
    char pad_00[280];
};

class CPulseGraphInstance_TestDomain {
public:
    char pad_00[304];
    bool m_bIsRunningUnitTests;
    bool m_bExplicitTimeStepping;
    bool m_bExpectingToDestroyWithYieldedCursors;
    bool m_bQuietTracepoints;
    bool m_bExpectingCursorTerminatedDueToMaxInstructions;
    int32_t m_nCursorsTerminatedDueToMaxInstructions;
    int32_t m_nNextValidateIndex;
    // CUtlVector< CUtlString > m_Tracepoints;
    char pad_01[24];
    bool m_bTestYesOrNoPath;
    char pad_02[7];
};

class CPulseCell_Step_TestDomainTracepoint {
public:
    char pad_00[72];
};

class CPulseCell_Step_TestDomainCreateFakeEntity {
public:
    char pad_00[72];
};

class CPulseCell_Step_TestDomainDestroyFakeEntity {
public:
    char pad_00[72];
};

class CPulseCell_Step_TestDomainEntFire {
public:
    // CUtlString m_Input;
    char pad_00[80];
};

class CPulseCell_Val_TestDomainGetEntityName {
public:
    char pad_00[72];
};

class CPulseCell_Val_TestDomainFindEntityByName {
public:
    char pad_00[72];
};

class CPulseCell_TestWaitWithCursorState {
public:
    char pad_00[72];
    CPulse_ResumePoint m_WakeResume;
    CPulse_ResumePoint m_WakeCancel;
    CPulse_ResumePoint m_WakeFail;
};

class CTestDomainDerived_Cursor {
public:
    char pad_00[208];
    int32_t m_nCursorValueA;
    int32_t m_nCursorValueB;
};

class CPulseGraphInstance_TestDomain_Derived {
public:
    char pad_00[352];
    int32_t m_nInstanceValueX;
    char pad_01[4];
};

class CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView {
public:
    char pad_00[352];
};

class CPulseCell_Test_NoInflow {
public:
    char pad_00[72];
};

class CPulseCell_Test_MultiInflow_WithDefault {
public:
    char pad_00[72];
};

class CPulseCell_Test_MultiInflow_NoDefault {
public:
    char pad_00[72];
};

class CPulseCell_Test_MultiOutflow_WithParams {
public:
    char pad_00[72];
    SignatureOutflow_Continue m_Out1;
    SignatureOutflow_Continue m_Out2;
};

class CPulseCell_Test_MultiOutflow_WithParams_Yielding {
public:
    char pad_00[72];
    SignatureOutflow_Continue m_Out1;
    SignatureOutflow_Continue m_AsyncChild1;
    SignatureOutflow_Continue m_AsyncChild2;
    SignatureOutflow_Resume m_YieldResume1;
    SignatureOutflow_Resume m_YieldResume2;
};

class CPulseCell_Value_TestValue50 {
public:
    char pad_00[72];
};

class CPulseCell_Outflow_TestRandomYesNo {
public:
    char pad_00[72];
    CPulse_OutflowConnection m_Yes;
    CPulse_OutflowConnection m_No;
};

class CPulseCell_Outflow_TestExplicitYesNo {
public:
    char pad_00[72];
    CPulse_OutflowConnection m_Yes;
    CPulse_OutflowConnection m_No;
};

class CPulseTurtleGraphicsCursor {
public:
    // Color m_Color;
    // Vector2D m_vPos;
    char pad_00[220];
    float m_flHeadingDeg;
    bool m_bPenUp;
    char pad_01[7];
};

class CPulseGraphInstance_TurtleGraphics {
public:
    char pad_00[320];
};

