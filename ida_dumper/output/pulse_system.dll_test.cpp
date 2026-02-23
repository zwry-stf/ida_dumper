#include "pulse_system.dll.h"

// PulseTestEnumColor_t
static_assert(sizeof(PulseTestEnumColor_t) == 4);
static_assert(alignof(PulseTestEnumColor_t) == 4);
// PulseTestEnumShape_t
static_assert(sizeof(PulseTestEnumShape_t) == 4);
static_assert(alignof(PulseTestEnumShape_t) == 4);
// PulseMethodCallMode_t
static_assert(sizeof(PulseMethodCallMode_t) == 4);
static_assert(alignof(PulseMethodCallMode_t) == 4);
// PulseCursorCancelPriority_t
static_assert(sizeof(PulseCursorCancelPriority_t) == 4);
static_assert(alignof(PulseCursorCancelPriority_t) == 4);
// PulseBestOutflowRules_t
static_assert(sizeof(PulseBestOutflowRules_t) == 4);
static_assert(alignof(PulseBestOutflowRules_t) == 4);
// FakeEntity_tAPI
static_assert(sizeof(FakeEntity_tAPI) == 8);
static_assert(alignof(FakeEntity_tAPI) == 1);
// FakeEntityDerivedA_tAPI
static_assert(sizeof(FakeEntityDerivedA_tAPI) == 8);
static_assert(alignof(FakeEntityDerivedA_tAPI) == 1);
// FakeEntityDerivedB_tAPI
static_assert(sizeof(FakeEntityDerivedB_tAPI) == 8);
static_assert(alignof(FakeEntityDerivedB_tAPI) == 1);
// CPulseTestFuncs_LibraryA
static_assert(sizeof(CPulseTestFuncs_LibraryA) == 1);
static_assert(alignof(CPulseTestFuncs_LibraryA) == 1);
// CPulseCell_ExampleCriteria::Criteria_t
static_assert(sizeof(CPulseCell_ExampleCriteria__Criteria_t) == 12);
static_assert(alignof(CPulseCell_ExampleCriteria__Criteria_t) == 4);
// CPulseCell_TestWaitWithCursorState::CursorState_t
static_assert(sizeof(CPulseCell_TestWaitWithCursorState__CursorState_t) == 8);
static_assert(alignof(CPulseCell_TestWaitWithCursorState__CursorState_t) == 4);
// CPulseCell_Test_MultiOutflow_WithParams_Yielding::CursorState_t
static_assert(sizeof(CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t) == 4);
static_assert(alignof(CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t) == 4);
// CPulseExecCursor
static_assert(sizeof(CPulseExecCursor) == 208);
static_assert(alignof(CPulseExecCursor) == 1);
// CPulse_BlackboardReference
static_assert(sizeof(CPulse_BlackboardReference) == 40);
static_assert(alignof(CPulse_BlackboardReference) == 8);
// CPulse_InvokeBinding
static_assert(sizeof(CPulse_InvokeBinding) == 176);
static_assert(alignof(CPulse_InvokeBinding) == 8);
// CPulse_CallInfo
static_assert(sizeof(CPulse_CallInfo) == 88);
static_assert(alignof(CPulse_CallInfo) == 8);
// CPulseCell_Base
static_assert(sizeof(CPulseCell_Base) == 72);
static_assert(alignof(CPulseCell_Base) == 8);
// CPulseGraphDef
static_assert(sizeof(CPulseGraphDef) == 408);
static_assert(alignof(CPulseGraphDef) == 8);
// CBasePulseGraphInstance
static_assert(sizeof(CBasePulseGraphInstance) == 280);
static_assert(alignof(CBasePulseGraphInstance) == 1);
// CPulseArraylib
static_assert(sizeof(CPulseArraylib) == 1);
static_assert(alignof(CPulseArraylib) == 1);
// CPulseMathlib
static_assert(sizeof(CPulseMathlib) == 1);
static_assert(alignof(CPulseMathlib) == 1);
// CPulseTestScriptLib
static_assert(sizeof(CPulseTestScriptLib) == 1);
static_assert(alignof(CPulseTestScriptLib) == 1);
// CPulse_OutflowConnection
static_assert(sizeof(CPulse_OutflowConnection) == 72);
static_assert(alignof(CPulse_OutflowConnection) == 4);
// CPulse_ResumePoint
static_assert(sizeof(CPulse_ResumePoint) == 72);
static_assert(alignof(CPulse_ResumePoint) == 1);
// SignatureOutflow_Continue
static_assert(sizeof(SignatureOutflow_Continue) == 72);
static_assert(alignof(SignatureOutflow_Continue) == 1);
// SignatureOutflow_Resume
static_assert(sizeof(SignatureOutflow_Resume) == 72);
static_assert(alignof(SignatureOutflow_Resume) == 1);
// PulseNodeDynamicOutflows_t::DynamicOutflow_t
static_assert(sizeof(PulseNodeDynamicOutflows_t__DynamicOutflow_t) == 80);
static_assert(alignof(PulseNodeDynamicOutflows_t__DynamicOutflow_t) == 8);
// PulseNodeDynamicOutflows_t
static_assert(sizeof(PulseNodeDynamicOutflows_t) == 24);
static_assert(alignof(PulseNodeDynamicOutflows_t) == 8);
// CPulseCell_BaseFlow
static_assert(sizeof(CPulseCell_BaseFlow) == 72);
static_assert(alignof(CPulseCell_BaseFlow) == 8);
// CPulseCell_BaseRequirement
static_assert(sizeof(CPulseCell_BaseRequirement) == 72);
static_assert(alignof(CPulseCell_BaseRequirement) == 8);
// CPulseCell_Inflow_BaseEntrypoint
static_assert(sizeof(CPulseCell_Inflow_BaseEntrypoint) == 128);
static_assert(alignof(CPulseCell_Inflow_BaseEntrypoint) == 8);
// CPulseCell_Inflow_Method
static_assert(sizeof(CPulseCell_Inflow_Method) == 200);
static_assert(alignof(CPulseCell_Inflow_Method) == 8);
// CPulseCell_Inflow_EventHandler
static_assert(sizeof(CPulseCell_Inflow_EventHandler) == 144);
static_assert(alignof(CPulseCell_Inflow_EventHandler) == 8);
// CPulseCell_Inflow_GraphHook
static_assert(sizeof(CPulseCell_Inflow_GraphHook) == 144);
static_assert(alignof(CPulseCell_Inflow_GraphHook) == 8);
// CPulseCell_Inflow_EntOutputHandler
static_assert(sizeof(CPulseCell_Inflow_EntOutputHandler) == 184);
static_assert(alignof(CPulseCell_Inflow_EntOutputHandler) == 8);
// CPulseCell_Inflow_ObservableVariableListener
static_assert(sizeof(CPulseCell_Inflow_ObservableVariableListener) == 136);
static_assert(alignof(CPulseCell_Inflow_ObservableVariableListener) == 8);
// CPulseCell_BaseYieldingInflow
static_assert(sizeof(CPulseCell_BaseYieldingInflow) == 72);
static_assert(alignof(CPulseCell_BaseYieldingInflow) == 1);
// CPulseCell_BaseLerp
static_assert(sizeof(CPulseCell_BaseLerp) == 144);
static_assert(alignof(CPulseCell_BaseLerp) == 1);
// CPulseCell_BaseLerp::CursorState_t
static_assert(sizeof(CPulseCell_BaseLerp__CursorState_t) == 8);
static_assert(alignof(CPulseCell_BaseLerp__CursorState_t) == 4);
// CPulseCell_BaseValue
static_assert(sizeof(CPulseCell_BaseValue) == 72);
static_assert(alignof(CPulseCell_BaseValue) == 8);
// CPulseCell_Step_PublicOutput
static_assert(sizeof(CPulseCell_Step_PublicOutput) == 80);
static_assert(alignof(CPulseCell_Step_PublicOutput) == 8);
// CPulseCell_Inflow_Yield
static_assert(sizeof(CPulseCell_Inflow_Yield) == 144);
static_assert(alignof(CPulseCell_Inflow_Yield) == 8);
// CPulseCell_Inflow_Wait
static_assert(sizeof(CPulseCell_Inflow_Wait) == 144);
static_assert(alignof(CPulseCell_Inflow_Wait) == 8);
// CPulseCell_Outflow_CycleOrdered
static_assert(sizeof(CPulseCell_Outflow_CycleOrdered) == 96);
static_assert(alignof(CPulseCell_Outflow_CycleOrdered) == 8);
// CPulseCell_Outflow_CycleOrdered::InstanceState_t
static_assert(sizeof(CPulseCell_Outflow_CycleOrdered__InstanceState_t) == 4);
static_assert(alignof(CPulseCell_Outflow_CycleOrdered__InstanceState_t) == 4);
// CPulseCell_Outflow_CycleRandom
static_assert(sizeof(CPulseCell_Outflow_CycleRandom) == 96);
static_assert(alignof(CPulseCell_Outflow_CycleRandom) == 8);
// CPulseCell_Outflow_CycleShuffled
static_assert(sizeof(CPulseCell_Outflow_CycleShuffled) == 96);
static_assert(alignof(CPulseCell_Outflow_CycleShuffled) == 8);
// CPulseCell_Outflow_CycleShuffled::InstanceState_t
static_assert(sizeof(CPulseCell_Outflow_CycleShuffled__InstanceState_t) == 40);
static_assert(alignof(CPulseCell_Outflow_CycleShuffled__InstanceState_t) == 8);
// CPulseCell_Value_RandomInt
static_assert(sizeof(CPulseCell_Value_RandomInt) == 72);
static_assert(alignof(CPulseCell_Value_RandomInt) == 8);
// CPulseCell_Value_RandomFloat
static_assert(sizeof(CPulseCell_Value_RandomFloat) == 72);
static_assert(alignof(CPulseCell_Value_RandomFloat) == 8);
// CPulseCell_Step_DebugLog
static_assert(sizeof(CPulseCell_Step_DebugLog) == 72);
static_assert(alignof(CPulseCell_Step_DebugLog) == 8);
// CPulseCell_Step_CallExternalMethod
static_assert(sizeof(CPulseCell_Step_CallExternalMethod) == 200);
static_assert(alignof(CPulseCell_Step_CallExternalMethod) == 8);
// CPulseCell_Unknown
static_assert(sizeof(CPulseCell_Unknown) == 88);
static_assert(alignof(CPulseCell_Unknown) == 8);
// CPulseCell_Value_Curve
static_assert(sizeof(CPulseCell_Value_Curve) == 136);
static_assert(alignof(CPulseCell_Value_Curve) == 8);
// CPulseCell_FireCursors
static_assert(sizeof(CPulseCell_FireCursors) == 248);
static_assert(alignof(CPulseCell_FireCursors) == 8);
// CPulseCell_Value_Gradient
static_assert(sizeof(CPulseCell_Value_Gradient) == 96);
static_assert(alignof(CPulseCell_Value_Gradient) == 8);
// CPulseCell_IntervalTimer
static_assert(sizeof(CPulseCell_IntervalTimer) == 216);
static_assert(alignof(CPulseCell_IntervalTimer) == 8);
// CPulseCell_IntervalTimer::CursorState_t
static_assert(sizeof(CPulseCell_IntervalTimer__CursorState_t) == 20);
static_assert(alignof(CPulseCell_IntervalTimer__CursorState_t) == 4);
// OutflowWithRequirements_t
static_assert(sizeof(OutflowWithRequirements_t) == 128);
static_assert(alignof(OutflowWithRequirements_t) == 8);
// PulseSelectorOutflowList_t
static_assert(sizeof(PulseSelectorOutflowList_t) == 24);
static_assert(alignof(PulseSelectorOutflowList_t) == 8);
// CPulseCell_LimitCount
static_assert(sizeof(CPulseCell_LimitCount) == 80);
static_assert(alignof(CPulseCell_LimitCount) == 8);
// CPulseCell_LimitCount::Criteria_t
static_assert(sizeof(CPulseCell_LimitCount__Criteria_t) == 1);
static_assert(alignof(CPulseCell_LimitCount__Criteria_t) == 1);
// CPulseCell_LimitCount::InstanceState_t
static_assert(sizeof(CPulseCell_LimitCount__InstanceState_t) == 4);
static_assert(alignof(CPulseCell_LimitCount__InstanceState_t) == 4);
// CPulseCell_IsRequirementValid
static_assert(sizeof(CPulseCell_IsRequirementValid) == 72);
static_assert(alignof(CPulseCell_IsRequirementValid) == 8);
// CPulseCell_IsRequirementValid::Criteria_t
static_assert(sizeof(CPulseCell_IsRequirementValid__Criteria_t) == 1);
static_assert(alignof(CPulseCell_IsRequirementValid__Criteria_t) == 1);
// CPulseCell_InlineNodeSkipSelector
static_assert(sizeof(CPulseCell_InlineNodeSkipSelector) == 176);
static_assert(alignof(CPulseCell_InlineNodeSkipSelector) == 8);
// CPulseCell_PickBestOutflowSelector
static_assert(sizeof(CPulseCell_PickBestOutflowSelector) == 104);
static_assert(alignof(CPulseCell_PickBestOutflowSelector) == 8);
// CPulseCell_Timeline::TimelineEvent_t
static_assert(sizeof(CPulseCell_Timeline__TimelineEvent_t) == 80);
static_assert(alignof(CPulseCell_Timeline__TimelineEvent_t) == 8);
// CPulseCell_Timeline
static_assert(sizeof(CPulseCell_Timeline) == 248);
static_assert(alignof(CPulseCell_Timeline) == 8);
// PulseObservableBoolExpression_t
static_assert(sizeof(PulseObservableBoolExpression_t) == 120);
static_assert(alignof(PulseObservableBoolExpression_t) == 8);
// CPulseCell_WaitForObservable
static_assert(sizeof(CPulseCell_WaitForObservable) == 264);
static_assert(alignof(CPulseCell_WaitForObservable) == 8);
// CPulseCell_BaseState
static_assert(sizeof(CPulseCell_BaseState) == 72);
static_assert(alignof(CPulseCell_BaseState) == 1);
// CPulseCell_BooleanSwitchState
static_assert(sizeof(CPulseCell_BooleanSwitchState) == 408);
static_assert(alignof(CPulseCell_BooleanSwitchState) == 8);
// CPulseCursorFuncs
static_assert(sizeof(CPulseCursorFuncs) == 1);
static_assert(alignof(CPulseCursorFuncs) == 1);
// CPulseCell_WaitForCursorsWithTagBase
static_assert(sizeof(CPulseCell_WaitForCursorsWithTagBase) == 152);
static_assert(alignof(CPulseCell_WaitForCursorsWithTagBase) == 8);
// CPulseCell_WaitForCursorsWithTagBase::CursorState_t
static_assert(sizeof(CPulseCell_WaitForCursorsWithTagBase__CursorState_t) == 48);
static_assert(alignof(CPulseCell_WaitForCursorsWithTagBase__CursorState_t) == 1);
// CPulseCell_WaitForCursorsWithTag
static_assert(sizeof(CPulseCell_WaitForCursorsWithTag) == 160);
static_assert(alignof(CPulseCell_WaitForCursorsWithTag) == 8);
// CPulseCell_CursorQueue
static_assert(sizeof(CPulseCell_CursorQueue) == 160);
static_assert(alignof(CPulseCell_CursorQueue) == 8);
// CPulseCell_ExampleCriteria
static_assert(sizeof(CPulseCell_ExampleCriteria) == 72);
static_assert(alignof(CPulseCell_ExampleCriteria) == 8);
// CPulseCell_ExampleSelector
static_assert(sizeof(CPulseCell_ExampleSelector) == 96);
static_assert(alignof(CPulseCell_ExampleSelector) == 8);
// CPulseGraphInstance_TestDomain_FakeEntityOwner
static_assert(sizeof(CPulseGraphInstance_TestDomain_FakeEntityOwner) == 280);
static_assert(alignof(CPulseGraphInstance_TestDomain_FakeEntityOwner) == 1);
// CPulseGraphInstance_TestDomain
static_assert(sizeof(CPulseGraphInstance_TestDomain) == 352);
static_assert(alignof(CPulseGraphInstance_TestDomain) == 4);
// CPulseCell_Step_TestDomainTracepoint
static_assert(sizeof(CPulseCell_Step_TestDomainTracepoint) == 72);
static_assert(alignof(CPulseCell_Step_TestDomainTracepoint) == 8);
// CPulseCell_Step_TestDomainCreateFakeEntity
static_assert(sizeof(CPulseCell_Step_TestDomainCreateFakeEntity) == 72);
static_assert(alignof(CPulseCell_Step_TestDomainCreateFakeEntity) == 8);
// CPulseCell_Step_TestDomainDestroyFakeEntity
static_assert(sizeof(CPulseCell_Step_TestDomainDestroyFakeEntity) == 72);
static_assert(alignof(CPulseCell_Step_TestDomainDestroyFakeEntity) == 8);
// CPulseCell_Step_TestDomainEntFire
static_assert(sizeof(CPulseCell_Step_TestDomainEntFire) == 80);
static_assert(alignof(CPulseCell_Step_TestDomainEntFire) == 8);
// CPulseCell_Val_TestDomainGetEntityName
static_assert(sizeof(CPulseCell_Val_TestDomainGetEntityName) == 72);
static_assert(alignof(CPulseCell_Val_TestDomainGetEntityName) == 8);
// CPulseCell_Val_TestDomainFindEntityByName
static_assert(sizeof(CPulseCell_Val_TestDomainFindEntityByName) == 72);
static_assert(alignof(CPulseCell_Val_TestDomainFindEntityByName) == 8);
// CPulseCell_TestWaitWithCursorState
static_assert(sizeof(CPulseCell_TestWaitWithCursorState) == 288);
static_assert(alignof(CPulseCell_TestWaitWithCursorState) == 8);
// CTestDomainDerived_Cursor
static_assert(sizeof(CTestDomainDerived_Cursor) == 216);
static_assert(alignof(CTestDomainDerived_Cursor) == 4);
// CPulseGraphInstance_TestDomain_Derived
static_assert(sizeof(CPulseGraphInstance_TestDomain_Derived) == 360);
static_assert(alignof(CPulseGraphInstance_TestDomain_Derived) == 4);
// CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView
static_assert(sizeof(CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView) == 352);
static_assert(alignof(CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView) == 1);
// CPulseCell_Test_NoInflow
static_assert(sizeof(CPulseCell_Test_NoInflow) == 72);
static_assert(alignof(CPulseCell_Test_NoInflow) == 8);
// CPulseCell_Test_MultiInflow_WithDefault
static_assert(sizeof(CPulseCell_Test_MultiInflow_WithDefault) == 72);
static_assert(alignof(CPulseCell_Test_MultiInflow_WithDefault) == 8);
// CPulseCell_Test_MultiInflow_NoDefault
static_assert(sizeof(CPulseCell_Test_MultiInflow_NoDefault) == 72);
static_assert(alignof(CPulseCell_Test_MultiInflow_NoDefault) == 8);
// CPulseCell_Test_MultiOutflow_WithParams
static_assert(sizeof(CPulseCell_Test_MultiOutflow_WithParams) == 216);
static_assert(alignof(CPulseCell_Test_MultiOutflow_WithParams) == 8);
// CPulseCell_Test_MultiOutflow_WithParams_Yielding
static_assert(sizeof(CPulseCell_Test_MultiOutflow_WithParams_Yielding) == 432);
static_assert(alignof(CPulseCell_Test_MultiOutflow_WithParams_Yielding) == 8);
// CPulseCell_Value_TestValue50
static_assert(sizeof(CPulseCell_Value_TestValue50) == 72);
static_assert(alignof(CPulseCell_Value_TestValue50) == 8);
// CPulseCell_Outflow_TestRandomYesNo
static_assert(sizeof(CPulseCell_Outflow_TestRandomYesNo) == 216);
static_assert(alignof(CPulseCell_Outflow_TestRandomYesNo) == 8);
// CPulseCell_Outflow_TestExplicitYesNo
static_assert(sizeof(CPulseCell_Outflow_TestExplicitYesNo) == 216);
static_assert(alignof(CPulseCell_Outflow_TestExplicitYesNo) == 8);
// CPulseTurtleGraphicsCursor
static_assert(sizeof(CPulseTurtleGraphicsCursor) == 232);
static_assert(alignof(CPulseTurtleGraphicsCursor) == 4);
// CPulseGraphInstance_TurtleGraphics
static_assert(sizeof(CPulseGraphInstance_TurtleGraphics) == 320);
static_assert(alignof(CPulseGraphInstance_TurtleGraphics) == 1);
