#include "client.dll.h"

// PulseMethodCallMode_t
static_assert(sizeof(PulseMethodCallMode_t) == 4);
static_assert(alignof(PulseMethodCallMode_t) == 4);
// PulseCursorCancelPriority_t
static_assert(sizeof(PulseCursorCancelPriority_t) == 4);
static_assert(alignof(PulseCursorCancelPriority_t) == 4);
// PulseBestOutflowRules_t
static_assert(sizeof(PulseBestOutflowRules_t) == 4);
static_assert(alignof(PulseBestOutflowRules_t) == 4);
// CompositeMaterialMatchFilterType_t
static_assert(sizeof(CompositeMaterialMatchFilterType_t0) == 4);
static_assert(alignof(CompositeMaterialMatchFilterType_t0) == 4);
// CompositeMaterialVarSystemVar_t
static_assert(sizeof(CompositeMaterialVarSystemVar_t0) == 4);
static_assert(alignof(CompositeMaterialVarSystemVar_t0) == 4);
// CompositeMaterialInputLooseVariableType_t
static_assert(sizeof(CompositeMaterialInputLooseVariableType_t0) == 4);
static_assert(alignof(CompositeMaterialInputLooseVariableType_t0) == 4);
// CompositeMaterialInputTextureType_t
static_assert(sizeof(CompositeMaterialInputTextureType_t0) == 4);
static_assert(alignof(CompositeMaterialInputTextureType_t0) == 4);
// CompMatPropertyMutatorType_t
static_assert(sizeof(CompMatPropertyMutatorType_t0) == 4);
static_assert(alignof(CompMatPropertyMutatorType_t0) == 4);
// CompMatPropertyMutatorConditionType_t
static_assert(sizeof(CompMatPropertyMutatorConditionType_t0) == 4);
static_assert(alignof(CompMatPropertyMutatorConditionType_t0) == 4);
// CompositeMaterialInputContainerSourceType_t
static_assert(sizeof(CompositeMaterialInputContainerSourceType_t0) == 4);
static_assert(alignof(CompositeMaterialInputContainerSourceType_t0) == 4);
// C_BaseCombatCharacter::WaterWakeMode_t
static_assert(sizeof(C_BaseCombatCharacter__WaterWakeMode_t) == 4);
static_assert(alignof(C_BaseCombatCharacter__WaterWakeMode_t) == 4);
// InventoryNodeType_t
static_assert(sizeof(InventoryNodeType_t0) == 4);
static_assert(alignof(InventoryNodeType_t0) == 4);
// CEntityComponent
static_assert(sizeof(CEntityComponent) == 8);
static_assert(alignof(CEntityComponent) == 1);
// CScriptComponent
static_assert(sizeof(CScriptComponent) == 56);
static_assert(alignof(CScriptComponent) == 1);
// CEntityInstance
static_assert(sizeof(CEntityInstance) == 56);
static_assert(alignof(CEntityInstance) == 8);
// C_BaseEntity
static_assert(sizeof(C_BaseEntity) == 1544);
static_assert(alignof(C_BaseEntity) == 8);
// CountdownTimer
static_assert(sizeof(CountdownTimer) == 24);
static_assert(alignof(CountdownTimer) == 4);
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
// CEntityIdentity
static_assert(sizeof(CEntityIdentity) == 112);
static_assert(alignof(CEntityIdentity) == 8);
// CompositeMaterialMatchFilter_t
static_assert(sizeof(CompositeMaterialMatchFilter_t0) == 32);
static_assert(alignof(CompositeMaterialMatchFilter_t0) == 8);
// CompositeMaterialInputLooseVariable_t
static_assert(sizeof(CompositeMaterialInputLooseVariable_t0) == 648);
static_assert(alignof(CompositeMaterialInputLooseVariable_t0) == 8);
// CompMatMutatorCondition_t
static_assert(sizeof(CompMatMutatorCondition_t0) == 40);
static_assert(alignof(CompMatMutatorCondition_t0) == 8);
// CompMatPropertyMutator_t
static_assert(sizeof(CompMatPropertyMutator_t0) == 912);
static_assert(alignof(CompMatPropertyMutator_t0) == 8);
// CompositeMaterialInputContainer_t
static_assert(sizeof(CompositeMaterialInputContainer_t0) == 312);
static_assert(alignof(CompositeMaterialInputContainer_t0) == 8);
// CompositeMaterialAssemblyProcedure_t
static_assert(sizeof(CompositeMaterialAssemblyProcedure_t0) == 96);
static_assert(alignof(CompositeMaterialAssemblyProcedure_t0) == 8);
// GeneratedTextureHandle_t
static_assert(sizeof(GeneratedTextureHandle_t0) == 96);
static_assert(alignof(GeneratedTextureHandle_t0) == 1);
// CompositeMaterial_t
static_assert(sizeof(CompositeMaterial_t0) == 160);
static_assert(alignof(CompositeMaterial_t0) == 1);
// CompositeMaterialEditorPoint_t
static_assert(sizeof(CompositeMaterialEditorPoint_t0) == 536);
static_assert(alignof(CompositeMaterialEditorPoint_t0) == 8);
// CCompositeMaterialEditorDoc
static_assert(sizeof(CCompositeMaterialEditorDoc0) == 56);
static_assert(alignof(CCompositeMaterialEditorDoc0) == 8);
// CGameSceneNode
static_assert(sizeof(CGameSceneNode) == 336);
static_assert(alignof(CGameSceneNode) == 8);
// CBodyComponent
static_assert(sizeof(CBodyComponent) == 120);
static_assert(alignof(CBodyComponent) == 8);
// CBodyComponentPoint
static_assert(sizeof(CBodyComponentPoint) == 464);
static_assert(alignof(CBodyComponentPoint) == 8);
// CSkeletonInstance
static_assert(sizeof(CSkeletonInstance) == 1232);
static_assert(alignof(CSkeletonInstance) == 8);
// CBodyComponentSkeletonInstance
static_assert(sizeof(CBodyComponentSkeletonInstance) == 1360);
static_assert(alignof(CBodyComponentSkeletonInstance) == 8);
// CHitboxComponent
static_assert(sizeof(CHitboxComponent) == 24);
static_assert(alignof(CHitboxComponent) == 4);
// CLightComponent
static_assert(sizeof(CLightComponent) == 496);
static_assert(alignof(CLightComponent) == 4);
// CRenderComponent
static_assert(sizeof(CRenderComponent) == 208);
static_assert(alignof(CRenderComponent) == 4);
// CPulseCell_LerpCameraSettings
static_assert(sizeof(CPulseCell_LerpCameraSettings) == 184);
static_assert(alignof(CPulseCell_LerpCameraSettings) == 8);
// C_PointCamera
static_assert(sizeof(C_PointCamera) == 1640);
static_assert(alignof(C_PointCamera) == 8);
// CPulseCell_LerpCameraSettings::CursorState_t
static_assert(sizeof(CPulseCell_LerpCameraSettings__CursorState_t) == 44);
static_assert(alignof(CPulseCell_LerpCameraSettings__CursorState_t) == 4);
// CPointTemplateAPI
static_assert(sizeof(CPointTemplateAPI) == 8);
static_assert(alignof(CPointTemplateAPI) == 1);
// CPropDataComponent
static_assert(sizeof(CPropDataComponent) == 64);
static_assert(alignof(CPropDataComponent) == 4);
// CBuoyancyHelper
static_assert(sizeof(CBuoyancyHelper) == 280);
static_assert(alignof(CBuoyancyHelper) == 4);
// CBaseTriggerAPI
static_assert(sizeof(CBaseTriggerAPI) == 8);
static_assert(alignof(CBaseTriggerAPI) == 1);
// CPulseCell_Step_EntFire
static_assert(sizeof(CPulseCell_Step_EntFire) == 80);
static_assert(alignof(CPulseCell_Step_EntFire) == 8);
// CPulseCell_PlaySequence
static_assert(sizeof(CPulseCell_PlaySequence) == 248);
static_assert(alignof(CPulseCell_PlaySequence) == 8);
// C_BaseModelEntity
static_assert(sizeof(C_BaseModelEntity) == 3720);
static_assert(alignof(C_BaseModelEntity) == 8);
// CBaseAnimGraph
static_assert(sizeof(CBaseAnimGraph) == 4456);
static_assert(alignof(CBaseAnimGraph) == 8);
// CPulseCell_PlaySequence::CursorState_t
static_assert(sizeof(CPulseCell_PlaySequence__CursorState_t) == 4);
static_assert(alignof(CPulseCell_PlaySequence__CursorState_t) == 4);
// CPulseAnimFuncs
static_assert(sizeof(CPulseAnimFuncs) == 8);
static_assert(alignof(CPulseAnimFuncs) == 1);
// CBasePlayerControllerAPI
static_assert(sizeof(CBasePlayerControllerAPI) == 8);
static_assert(alignof(CBasePlayerControllerAPI) == 1);
// C_CommandContext
static_assert(sizeof(C_CommandContext0) == 168);
static_assert(alignof(C_CommandContext0) == 4);
// ViewAngleServerChange_t
static_assert(sizeof(ViewAngleServerChange_t) == 72);
static_assert(alignof(ViewAngleServerChange_t) == 4);
// CFilterMultipleAPI
static_assert(sizeof(CFilterMultipleAPI) == 8);
static_assert(alignof(CFilterMultipleAPI) == 1);
// CPlayer_AutoaimServices
static_assert(sizeof(CPlayer_AutoaimServices) == 72);
static_assert(alignof(CPlayer_AutoaimServices) == 4);
// audioparams_t
static_assert(sizeof(audioparams_t) == 120);
static_assert(alignof(audioparams_t) == 4);
// C_fogplayerparams_t
static_assert(sizeof(C_fogplayerparams_t) == 64);
static_assert(alignof(C_fogplayerparams_t) == 4);
// C_ColorCorrection
static_assert(sizeof(C_ColorCorrection) == 2128);
static_assert(alignof(C_ColorCorrection) == 8);
// C_TonemapController2
static_assert(sizeof(C_TonemapController2) == 1568);
static_assert(alignof(C_TonemapController2) == 8);
// C_BaseToggle
static_assert(sizeof(C_BaseToggle) == 3720);
static_assert(alignof(C_BaseToggle) == 8);
// C_BaseTrigger
static_assert(sizeof(C_BaseTrigger) == 3928);
static_assert(alignof(C_BaseTrigger) == 8);
// C_PostProcessingVolume
static_assert(sizeof(C_PostProcessingVolume) == 3992);
static_assert(alignof(C_PostProcessingVolume) == 8);
// fogparams_t
static_assert(sizeof(fogparams_t) == 104);
static_assert(alignof(fogparams_t) == 4);
// C_FogController
static_assert(sizeof(C_FogController) == 1656);
static_assert(alignof(C_FogController) == 8);
// CPlayer_CameraServices
static_assert(sizeof(CPlayer_CameraServices) == 656);
static_assert(alignof(CPlayer_CameraServices) == 4);
// CPlayer_FlashlightServices
static_assert(sizeof(CPlayer_FlashlightServices) == 72);
static_assert(alignof(CPlayer_FlashlightServices) == 4);
// CPlayer_ItemServices
static_assert(sizeof(CPlayer_ItemServices) == 72);
static_assert(alignof(CPlayer_ItemServices) == 4);
// CPlayer_MovementServices
static_assert(sizeof(CPlayer_MovementServices) == 576);
static_assert(alignof(CPlayer_MovementServices) == 8);
// CPlayer_MovementServices_Humanoid
static_assert(sizeof(CPlayer_MovementServices_Humanoid) == 624);
static_assert(alignof(CPlayer_MovementServices_Humanoid) == 8);
// CPlayer_ObserverServices
static_assert(sizeof(CPlayer_ObserverServices) == 96);
static_assert(alignof(CPlayer_ObserverServices) == 4);
// CPlayer_UseServices
static_assert(sizeof(CPlayer_UseServices) == 72);
static_assert(alignof(CPlayer_UseServices) == 4);
// CPlayer_WaterServices
static_assert(sizeof(CPlayer_WaterServices) == 72);
static_assert(alignof(CPlayer_WaterServices) == 4);
// C_BaseFlex
static_assert(sizeof(C_BaseFlex) == 4944);
static_assert(alignof(C_BaseFlex) == 8);
// C_EconEntity
static_assert(sizeof(C_EconEntity) == 6336);
static_assert(alignof(C_EconEntity) == 8);
// C_BasePlayerWeapon
static_assert(sizeof(C_BasePlayerWeapon) == 6392);
static_assert(alignof(C_BasePlayerWeapon) == 8);
// CPlayer_WeaponServices
static_assert(sizeof(CPlayer_WeaponServices) == 168);
static_assert(alignof(CPlayer_WeaponServices) == 4);
// CBaseAnimGraphController
static_assert(sizeof(CBaseAnimGraphController) == 6968);
static_assert(alignof(CBaseAnimGraphController) == 8);
// CBodyComponentBaseAnimGraph
static_assert(sizeof(CBodyComponentBaseAnimGraph) == 8336);
static_assert(alignof(CBodyComponentBaseAnimGraph) == 8);
// EntityRenderAttribute_t
static_assert(sizeof(EntityRenderAttribute_t) == 72);
static_assert(alignof(EntityRenderAttribute_t) == 4);
// ActiveModelConfig_t
static_assert(sizeof(ActiveModelConfig_t) == 112);
static_assert(alignof(ActiveModelConfig_t) == 4);
// CBodyComponentBaseModelEntity
static_assert(sizeof(CBodyComponentBaseModelEntity) == 1360);
static_assert(alignof(CBodyComponentBaseModelEntity) == 8);
// CDestructiblePartsComponent
static_assert(sizeof(CDestructiblePartsComponent) == 112);
static_assert(alignof(CDestructiblePartsComponent) == 8);
// CGameSceneNodeHandle
static_assert(sizeof(CGameSceneNodeHandle) == 16);
static_assert(alignof(CGameSceneNodeHandle) == 1);
// CLogicRelayAPI
static_assert(sizeof(CLogicRelayAPI) == 8);
static_assert(alignof(CLogicRelayAPI) == 1);
// CPathQueryComponent
static_assert(sizeof(CPathQueryComponent) == 160);
static_assert(alignof(CPathQueryComponent) == 1);
// CPathSimpleAPI
static_assert(sizeof(CPathSimpleAPI) == 8);
static_assert(alignof(CPathSimpleAPI) == 1);
// SequenceHistory_t
static_assert(sizeof(SequenceHistory_t) == 24);
static_assert(alignof(SequenceHistory_t) == 4);
// CNetworkedSequenceOperation
static_assert(sizeof(CNetworkedSequenceOperation) == 40);
static_assert(alignof(CNetworkedSequenceOperation) == 4);
// CModelState
static_assert(sizeof(CModelState) == 720);
static_assert(alignof(CModelState) == 8);
// IntervalTimer
static_assert(sizeof(IntervalTimer) == 16);
static_assert(alignof(IntervalTimer) == 4);
// EngineCountdownTimer
static_assert(sizeof(EngineCountdownTimer) == 24);
static_assert(alignof(EngineCountdownTimer) == 4);
// CTimeline
static_assert(sizeof(CTimeline) == 552);
static_assert(alignof(CTimeline) == 4);
// CAnimGraphNetworkedVariables
static_assert(sizeof(CAnimGraphNetworkedVariables) == 5264);
static_assert(alignof(CAnimGraphNetworkedVariables) == 4);
// C_BaseEntityAPI
static_assert(sizeof(C_BaseEntityAPI) == 8);
static_assert(alignof(C_BaseEntityAPI) == 1);
// CTakeDamageInfoAPI
static_assert(sizeof(CTakeDamageInfoAPI) == 8);
static_assert(alignof(CTakeDamageInfoAPI) == 1);
// CCollisionProperty
static_assert(sizeof(CCollisionProperty) == 176);
static_assert(alignof(CCollisionProperty) == 4);
// CLogicalEntity
static_assert(sizeof(CLogicalEntity) == 1544);
static_assert(alignof(CLogicalEntity) == 8);
// C_BaseFlex::Emphasized_Phoneme
static_assert(sizeof(C_BaseFlex__Emphasized_Phoneme) == 32);
static_assert(alignof(C_BaseFlex__Emphasized_Phoneme) == 4);
// C_EntityFlame
static_assert(sizeof(C_EntityFlame) == 1616);
static_assert(alignof(C_EntityFlame) == 8);
// C_RopeKeyframe
static_assert(sizeof(C_RopeKeyframe) == 4600);
static_assert(alignof(C_RopeKeyframe) == 8);
// C_RopeKeyframe::CPhysicsDelegate
static_assert(sizeof(C_RopeKeyframe__CPhysicsDelegate) == 16);
static_assert(alignof(C_RopeKeyframe__CPhysicsDelegate) == 8);
// C_SceneEntity::QueuedEvents_t
static_assert(sizeof(C_SceneEntity__QueuedEvents_t) == 24);
static_assert(alignof(C_SceneEntity__QueuedEvents_t) == 4);
// C_TintController
static_assert(sizeof(C_TintController) == 1568);
static_assert(alignof(C_TintController) == 8);
// CFlashlightEffect
static_assert(sizeof(CFlashlightEffect0) == 736);
static_assert(alignof(CFlashlightEffect0) == 4);
// CInterpolatedValue
static_assert(sizeof(CInterpolatedValue0) == 20);
static_assert(alignof(CInterpolatedValue0) == 4);
// IClientAlphaProperty
static_assert(sizeof(IClientAlphaProperty0) == 8);
static_assert(alignof(IClientAlphaProperty0) == 1);
// C_SkyCamera
static_assert(sizeof(C_SkyCamera) == 1704);
static_assert(alignof(C_SkyCamera) == 8);
// CSkyboxReference
static_assert(sizeof(CSkyboxReference) == 1552);
static_assert(alignof(CSkyboxReference) == 8);
// sky3dparams_t
static_assert(sizeof(sky3dparams_t) == 144);
static_assert(alignof(sky3dparams_t) == 4);
// TimedEvent
static_assert(sizeof(TimedEvent0) == 8);
static_assert(alignof(TimedEvent0) == 4);
// VPhysicsCollisionAttribute_t
static_assert(sizeof(VPhysicsCollisionAttribute_t) == 48);
static_assert(alignof(VPhysicsCollisionAttribute_t) == 8);
// CEffectData
static_assert(sizeof(CEffectData) == 120);
static_assert(alignof(CEffectData) == 4);
// C_EnvDetailController
static_assert(sizeof(C_EnvDetailController) == 1552);
static_assert(alignof(C_EnvDetailController) == 8);
// C_EnvWindShared
static_assert(sizeof(C_EnvWindShared) == 248);
static_assert(alignof(C_EnvWindShared) == 4);
// C_InfoLadderDismount
static_assert(sizeof(C_InfoLadderDismount) == 1544);
static_assert(alignof(C_InfoLadderDismount) == 8);
// shard_model_desc_t
static_assert(sizeof(shard_model_desc_t) == 128);
static_assert(alignof(shard_model_desc_t) == 4);
// C_GameRulesProxy
static_assert(sizeof(C_GameRulesProxy) == 1544);
static_assert(alignof(C_GameRulesProxy) == 8);
// C_GameRules
static_assert(sizeof(C_GameRules) == 64);
static_assert(alignof(C_GameRules) == 4);
// CGlowProperty
static_assert(sizeof(CGlowProperty) == 88);
static_assert(alignof(CGlowProperty) == 4);
// C_MultiplayRules
static_assert(sizeof(C_MultiplayRules) == 64);
static_assert(alignof(C_MultiplayRules) == 1);
// PhysicsRagdollPose_t
static_assert(sizeof(PhysicsRagdollPose_t) == 72);
static_assert(alignof(PhysicsRagdollPose_t) == 8);
// C_SingleplayRules
static_assert(sizeof(C_SingleplayRules) == 64);
static_assert(alignof(C_SingleplayRules) == 1);
// C_SoundOpvarSetPointBase
static_assert(sizeof(C_SoundOpvarSetPointBase) == 1576);
static_assert(alignof(C_SoundOpvarSetPointBase) == 8);
// C_SoundOpvarSetPointEntity
static_assert(sizeof(C_SoundOpvarSetPointEntity) == 1576);
static_assert(alignof(C_SoundOpvarSetPointEntity) == 8);
// C_SoundOpvarSetAABBEntity
static_assert(sizeof(C_SoundOpvarSetAABBEntity) == 1576);
static_assert(alignof(C_SoundOpvarSetAABBEntity) == 8);
// C_SoundOpvarSetOBBEntity
static_assert(sizeof(C_SoundOpvarSetOBBEntity) == 1576);
static_assert(alignof(C_SoundOpvarSetOBBEntity) == 8);
// C_SoundOpvarSetPathCornerEntity
static_assert(sizeof(C_SoundOpvarSetPathCornerEntity) == 1576);
static_assert(alignof(C_SoundOpvarSetPathCornerEntity) == 8);
// C_SoundOpvarSetAutoRoomEntity
static_assert(sizeof(C_SoundOpvarSetAutoRoomEntity) == 1576);
static_assert(alignof(C_SoundOpvarSetAutoRoomEntity) == 8);
// C_SoundOpvarSetOBBWindEntity
static_assert(sizeof(C_SoundOpvarSetOBBWindEntity) == 1576);
static_assert(alignof(C_SoundOpvarSetOBBWindEntity) == 8);
// C_TeamplayRules
static_assert(sizeof(C_TeamplayRules) == 64);
static_assert(alignof(C_TeamplayRules) == 1);
// C_PortraitWorldCallbackHandler
static_assert(sizeof(C_PortraitWorldCallbackHandler) == 1552);
static_assert(alignof(C_PortraitWorldCallbackHandler) == 8);
// CEconItemAttribute
static_assert(sizeof(CEconItemAttribute) == 72);
static_assert(alignof(CEconItemAttribute) == 4);
// CAttributeManager
static_assert(sizeof(CAttributeManager) == 80);
static_assert(alignof(CAttributeManager) == 4);
// CAttributeList
static_assert(sizeof(CAttributeList) == 120);
static_assert(alignof(CAttributeList) == 8);
// CAttributeManager::cached_attribute_float_t
static_assert(sizeof(CAttributeManager__cached_attribute_float_t) == 24);
static_assert(alignof(CAttributeManager__cached_attribute_float_t) == 4);
// C_EconItemView
static_assert(sizeof(C_EconItemView) == 1136);
static_assert(alignof(C_EconItemView) == 8);
// C_AttributeContainer
static_assert(sizeof(C_AttributeContainer) == 1232);
static_assert(alignof(C_AttributeContainer) == 8);
// C_EconEntity::AttachedModelData_t
static_assert(sizeof(C_EconEntity__AttachedModelData_t) == 4);
static_assert(alignof(C_EconEntity__AttachedModelData_t) == 4);
// EntitySpottedState_t
static_assert(sizeof(EntitySpottedState_t) == 24);
static_assert(alignof(EntitySpottedState_t) == 4);
// C_CSGameRules
static_assert(sizeof(C_CSGameRules) == 20320);
static_assert(alignof(C_CSGameRules) == 8);
// C_CSGameRulesProxy
static_assert(sizeof(C_CSGameRulesProxy) == 1552);
static_assert(alignof(C_CSGameRulesProxy) == 8);
// CCSGameModeRules
static_assert(sizeof(CCSGameModeRules) == 48);
static_assert(alignof(CCSGameModeRules) == 8);
// C_RetakeGameRules
static_assert(sizeof(C_RetakeGameRules) == 344);
static_assert(alignof(C_RetakeGameRules) == 4);
// CCSGameModeRules_Noop
static_assert(sizeof(CCSGameModeRules_Noop) == 48);
static_assert(alignof(CCSGameModeRules_Noop) == 8);
// CCSGameModeRules_ArmsRace
static_assert(sizeof(CCSGameModeRules_ArmsRace) == 72);
static_assert(alignof(CCSGameModeRules_ArmsRace) == 8);
// CCSGameModeRules_Deathmatch
static_assert(sizeof(CCSGameModeRules_Deathmatch) == 64);
static_assert(alignof(CCSGameModeRules_Deathmatch) == 8);
// C_BaseCombatCharacter
static_assert(sizeof(C_BaseCombatCharacter) == 5080);
static_assert(alignof(C_BaseCombatCharacter) == 8);
// C_BasePlayerPawn
static_assert(sizeof(C_BasePlayerPawn) == 5552);
static_assert(alignof(C_BasePlayerPawn) == 8);
// C_CSPlayerPawnBase
static_assert(sizeof(C_CSPlayerPawnBase) == 5712);
static_assert(alignof(C_CSPlayerPawnBase) == 8);
// C_CSPlayerPawn
static_assert(sizeof(C_CSPlayerPawn) == 16112);
static_assert(alignof(C_CSPlayerPawn) == 16);
// CSPerRoundStats_t
static_assert(sizeof(CSPerRoundStats_t) == 104);
static_assert(alignof(CSPerRoundStats_t) == 4);
// CSMatchStats_t
static_assert(sizeof(CSMatchStats_t) == 128);
static_assert(alignof(CSMatchStats_t) == 4);
// C_CSGO_TeamPreviewCharacterPosition
static_assert(sizeof(C_CSGO_TeamPreviewCharacterPosition) == 5032);
static_assert(alignof(C_CSGO_TeamPreviewCharacterPosition) == 8);
// C_CSGO_TeamSelectCharacterPosition
static_assert(sizeof(C_CSGO_TeamSelectCharacterPosition) == 5032);
static_assert(alignof(C_CSGO_TeamSelectCharacterPosition) == 8);
// C_CSGO_TeamSelectTerroristPosition
static_assert(sizeof(C_CSGO_TeamSelectTerroristPosition) == 5032);
static_assert(alignof(C_CSGO_TeamSelectTerroristPosition) == 8);
// C_CSGO_TeamSelectCounterTerroristPosition
static_assert(sizeof(C_CSGO_TeamSelectCounterTerroristPosition) == 5032);
static_assert(alignof(C_CSGO_TeamSelectCounterTerroristPosition) == 8);
// C_CSGO_TeamIntroCharacterPosition
static_assert(sizeof(C_CSGO_TeamIntroCharacterPosition) == 5032);
static_assert(alignof(C_CSGO_TeamIntroCharacterPosition) == 8);
// C_CSGO_TeamIntroTerroristPosition
static_assert(sizeof(C_CSGO_TeamIntroTerroristPosition) == 5032);
static_assert(alignof(C_CSGO_TeamIntroTerroristPosition) == 8);
// C_CSGO_TeamIntroCounterTerroristPosition
static_assert(sizeof(C_CSGO_TeamIntroCounterTerroristPosition) == 5032);
static_assert(alignof(C_CSGO_TeamIntroCounterTerroristPosition) == 8);
// CCSGO_WingmanIntroCharacterPosition
static_assert(sizeof(CCSGO_WingmanIntroCharacterPosition) == 5032);
static_assert(alignof(CCSGO_WingmanIntroCharacterPosition) == 8);
// CCSGO_WingmanIntroTerroristPosition
static_assert(sizeof(CCSGO_WingmanIntroTerroristPosition) == 5032);
static_assert(alignof(CCSGO_WingmanIntroTerroristPosition) == 8);
// CCSGO_WingmanIntroCounterTerroristPosition
static_assert(sizeof(CCSGO_WingmanIntroCounterTerroristPosition) == 5032);
static_assert(alignof(CCSGO_WingmanIntroCounterTerroristPosition) == 8);
// C_CSMinimapBoundary
static_assert(sizeof(C_CSMinimapBoundary) == 1544);
static_assert(alignof(C_CSMinimapBoundary) == 8);
// C_CSPetPlacement
static_assert(sizeof(C_CSPetPlacement) == 1544);
static_assert(alignof(C_CSPetPlacement) == 8);
// PredictedDamageTag_t
static_assert(sizeof(PredictedDamageTag_t) == 64);
static_assert(alignof(PredictedDamageTag_t) == 4);
// C_PlayerPing
static_assert(sizeof(C_PlayerPing) == 1624);
static_assert(alignof(C_PlayerPing) == 8);
// CCSPlayer_PingServices
static_assert(sizeof(CCSPlayer_PingServices) == 80);
static_assert(alignof(CCSPlayer_PingServices) == 4);
// C_CSPlayerResource
static_assert(sizeof(C_CSPlayerResource) == 1696);
static_assert(alignof(C_CSPlayerResource) == 8);
// CCSPlayer_DamageReactServices
static_assert(sizeof(CCSPlayer_DamageReactServices) == 80);
static_assert(alignof(CCSPlayer_DamageReactServices) == 4);
// CCSPlayerBase_CameraServices
static_assert(sizeof(CCSPlayerBase_CameraServices) == 680);
static_assert(alignof(CCSPlayerBase_CameraServices) == 4);
// WeaponPurchaseCount_t
static_assert(sizeof(WeaponPurchaseCount_t) == 56);
static_assert(alignof(WeaponPurchaseCount_t) == 2);
// WeaponPurchaseTracker_t
static_assert(sizeof(WeaponPurchaseTracker_t) == 112);
static_assert(alignof(WeaponPurchaseTracker_t) == 1);
// CCSPlayer_ActionTrackingServices
static_assert(sizeof(CCSPlayer_ActionTrackingServices) == 304);
static_assert(alignof(CCSPlayer_ActionTrackingServices) == 4);
// CCSPlayer_BulletServices
static_assert(sizeof(CCSPlayer_BulletServices) == 168);
static_assert(alignof(CCSPlayer_BulletServices) == 4);
// SellbackPurchaseEntry_t
static_assert(sizeof(SellbackPurchaseEntry_t) == 72);
static_assert(alignof(SellbackPurchaseEntry_t) == 4);
// CCSPlayer_BuyServices
static_assert(sizeof(CCSPlayer_BuyServices) == 176);
static_assert(alignof(CCSPlayer_BuyServices) == 4);
// CCSPlayer_CameraServices
static_assert(sizeof(CCSPlayer_CameraServices) == 832);
static_assert(alignof(CCSPlayer_CameraServices) == 4);
// CCSPlayer_HostageServices
static_assert(sizeof(CCSPlayer_HostageServices) == 80);
static_assert(alignof(CCSPlayer_HostageServices) == 4);
// CCSPlayer_ItemServices
static_assert(sizeof(CCSPlayer_ItemServices) == 80);
static_assert(alignof(CCSPlayer_ItemServices) == 4);
// CCSPlayerLegacyJump
static_assert(sizeof(CCSPlayerLegacyJump) == 24);
static_assert(alignof(CCSPlayerLegacyJump) == 4);
// CCSPlayerModernJump
static_assert(sizeof(CCSPlayerModernJump) == 56);
static_assert(alignof(CCSPlayerModernJump) == 4);
// CCSPlayer_MovementServices
static_assert(sizeof(CCSPlayer_MovementServices) == 3672);
static_assert(alignof(CCSPlayer_MovementServices) == 8);
// CCSPlayer_UseServices
static_assert(sizeof(CCSPlayer_UseServices) == 72);
static_assert(alignof(CCSPlayer_UseServices) == 4);
// CCSPlayer_WaterServices
static_assert(sizeof(CCSPlayer_WaterServices) == 112);
static_assert(alignof(CCSPlayer_WaterServices) == 4);
// CCSPlayer_WeaponServices
static_assert(sizeof(CCSPlayer_WeaponServices) == 5584);
static_assert(alignof(CCSPlayer_WeaponServices) == 4);
// CCS2WeaponGraphController
static_assert(sizeof(CCS2WeaponGraphController) == 672);
static_assert(alignof(CCS2WeaponGraphController) == 8);
// CCSObserver_ObserverServices
static_assert(sizeof(CCSObserver_ObserverServices) == 240);
static_assert(alignof(CCSObserver_ObserverServices) == 4);
// CCSObserver_CameraServices
static_assert(sizeof(CCSObserver_CameraServices) == 680);
static_assert(alignof(CCSObserver_CameraServices) == 4);
// CCSObserver_MovementServices
static_assert(sizeof(CCSObserver_MovementServices) == 576);
static_assert(alignof(CCSObserver_MovementServices) == 8);
// CCSObserver_UseServices
static_assert(sizeof(CCSObserver_UseServices) == 72);
static_assert(alignof(CCSObserver_UseServices) == 4);
// CCSPlayerController_ActionTrackingServices
static_assert(sizeof(CCSPlayerController_ActionTrackingServices) == 312);
static_assert(alignof(CCSPlayerController_ActionTrackingServices) == 4);
// CBasePlayerController
static_assert(sizeof(CBasePlayerController) == 2040);
static_assert(alignof(CBasePlayerController) == 8);
// CCSPlayerController
static_assert(sizeof(CCSPlayerController) == 2392);
static_assert(alignof(CCSPlayerController) == 8);
// CDamageRecord
static_assert(sizeof(CDamageRecord) == 120);
static_assert(alignof(CDamageRecord) == 8);
// CCSPlayerController_DamageServices
static_assert(sizeof(CCSPlayerController_DamageServices) == 176);
static_assert(alignof(CCSPlayerController_DamageServices) == 4);
// CCSPlayerController_InGameMoneyServices
static_assert(sizeof(CCSPlayerController_InGameMoneyServices) == 80);
static_assert(alignof(CCSPlayerController_InGameMoneyServices) == 4);
// ServerAuthoritativeWeaponSlot_t
static_assert(sizeof(ServerAuthoritativeWeaponSlot_t) == 56);
static_assert(alignof(ServerAuthoritativeWeaponSlot_t) == 2);
// CCSPlayerController_InventoryServices::NetworkedLoadoutSlot_t
static_assert(sizeof(CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t) == 200);
static_assert(alignof(CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t) == 8);
// CCSPlayerController_InventoryServices
static_assert(sizeof(CCSPlayerController_InventoryServices) == 240);
static_assert(alignof(CCSPlayerController_InventoryServices) == 4);
// C_IronSightController
static_assert(sizeof(C_IronSightController0) == 176);
static_assert(alignof(C_IronSightController0) == 4);
// C_EnvWindClientside
static_assert(sizeof(C_EnvWindClientside) == 1792);
static_assert(alignof(C_EnvWindClientside) == 8);
// CGlobalLightBase
static_assert(sizeof(CGlobalLightBase0) == 1216);
static_assert(alignof(CGlobalLightBase0) == 4);
// C_GlobalLight
static_assert(sizeof(C_GlobalLight) == 2816);
static_assert(alignof(C_GlobalLight) == 16);
// C_CSGO_PreviewPlayer_GraphController
static_assert(sizeof(C_CSGO_PreviewPlayer_GraphController0) == 512);
static_assert(alignof(C_CSGO_PreviewPlayer_GraphController0) == 8);
// C_CSGO_MapPreviewCameraPathNode
static_assert(sizeof(C_CSGO_MapPreviewCameraPathNode) == 1624);
static_assert(alignof(C_CSGO_MapPreviewCameraPathNode) == 8);
// C_CSGO_MapPreviewCameraPath
static_assert(sizeof(C_CSGO_MapPreviewCameraPath) == 1680);
static_assert(alignof(C_CSGO_MapPreviewCameraPath) == 8);
// CCSPlayer_GlowServices
static_assert(sizeof(CCSPlayer_GlowServices) == 80);
static_assert(alignof(CCSPlayer_GlowServices) == 4);
// C_VoteController
static_assert(sizeof(C_VoteController) == 1600);
static_assert(alignof(C_VoteController) == 8);
// C_MapVetoPickController
static_assert(sizeof(C_MapVetoPickController) == 3920);
static_assert(alignof(C_MapVetoPickController) == 8);
// CPlayerSprayDecalRenderHelper
static_assert(sizeof(CPlayerSprayDecalRenderHelper0) == 48);
static_assert(alignof(CPlayerSprayDecalRenderHelper0) == 1);
// C_CSGO_TeamPreviewCamera
static_assert(sizeof(C_CSGO_TeamPreviewCamera) == 1688);
static_assert(alignof(C_CSGO_TeamPreviewCamera) == 8);
// C_CSGO_TeamSelectCamera
static_assert(sizeof(C_CSGO_TeamSelectCamera) == 1688);
static_assert(alignof(C_CSGO_TeamSelectCamera) == 8);
// C_CSGO_TerroristTeamIntroCamera
static_assert(sizeof(C_CSGO_TerroristTeamIntroCamera) == 1688);
static_assert(alignof(C_CSGO_TerroristTeamIntroCamera) == 8);
// C_CSGO_TerroristWingmanIntroCamera
static_assert(sizeof(C_CSGO_TerroristWingmanIntroCamera) == 1688);
static_assert(alignof(C_CSGO_TerroristWingmanIntroCamera) == 8);
// C_CSGO_CounterTerroristTeamIntroCamera
static_assert(sizeof(C_CSGO_CounterTerroristTeamIntroCamera) == 1688);
static_assert(alignof(C_CSGO_CounterTerroristTeamIntroCamera) == 8);
// C_CSGO_CounterTerroristWingmanIntroCamera
static_assert(sizeof(C_CSGO_CounterTerroristWingmanIntroCamera) == 1688);
static_assert(alignof(C_CSGO_CounterTerroristWingmanIntroCamera) == 8);
// C_CSGO_EndOfMatchCamera
static_assert(sizeof(C_CSGO_EndOfMatchCamera) == 1688);
static_assert(alignof(C_CSGO_EndOfMatchCamera) == 8);
// C_CSGO_EndOfMatchCharacterPosition
static_assert(sizeof(C_CSGO_EndOfMatchCharacterPosition) == 5032);
static_assert(alignof(C_CSGO_EndOfMatchCharacterPosition) == 8);
// C_CSGO_EndOfMatchLineupEndpoint
static_assert(sizeof(C_CSGO_EndOfMatchLineupEndpoint) == 1544);
static_assert(alignof(C_CSGO_EndOfMatchLineupEndpoint) == 8);
// C_CSGO_EndOfMatchLineupStart
static_assert(sizeof(C_CSGO_EndOfMatchLineupStart) == 1544);
static_assert(alignof(C_CSGO_EndOfMatchLineupStart) == 8);
// C_CSGO_EndOfMatchLineupEnd
static_assert(sizeof(C_CSGO_EndOfMatchLineupEnd) == 1544);
static_assert(alignof(C_CSGO_EndOfMatchLineupEnd) == 8);
// C_CsmFovOverride
static_assert(sizeof(C_CsmFovOverride) == 1560);
static_assert(alignof(C_CsmFovOverride) == 8);
// CNmEventConsumerHudModelArmsAttributes
static_assert(sizeof(CNmEventConsumerHudModelArmsAttributes0) == 88);
static_assert(alignof(CNmEventConsumerHudModelArmsAttributes0) == 8);
// inv_image_map_t
static_assert(sizeof(inv_image_map_t0) == 16);
static_assert(alignof(inv_image_map_t0) == 8);
// inv_image_item_t
static_assert(sizeof(inv_image_item_t0) == 32);
static_assert(alignof(inv_image_item_t0) == 8);
// inv_image_camera_t
static_assert(sizeof(inv_image_camera_t0) == 52);
static_assert(alignof(inv_image_camera_t0) == 4);
// inv_image_light_sun_t
static_assert(sizeof(inv_image_light_sun_t0) == 28);
static_assert(alignof(inv_image_light_sun_t0) == 4);
// inv_image_clearcolor_t
static_assert(sizeof(inv_image_clearcolor_t0) == 12);
static_assert(alignof(inv_image_clearcolor_t0) == 4);
// inv_image_light_fill_t
static_assert(sizeof(inv_image_light_fill_t0) == 28);
static_assert(alignof(inv_image_light_fill_t0) == 4);
// inv_image_light_barn_t
static_assert(sizeof(inv_image_light_barn_t0) == 32);
static_assert(alignof(inv_image_light_barn_t0) == 4);
// inv_image_data_t
static_assert(sizeof(inv_image_data_t0) == 232);
static_assert(alignof(inv_image_data_t0) == 8);
// CInventoryImageData
static_assert(sizeof(CInventoryImageData0) == 248);
static_assert(alignof(CInventoryImageData0) == 8);
// CCS_PortraitWorldCallbackHandler
static_assert(sizeof(CCS_PortraitWorldCallbackHandler) == 1552);
static_assert(alignof(CCS_PortraitWorldCallbackHandler) == 8);
// C_PointEntity
static_assert(sizeof(C_PointEntity) == 1544);
static_assert(alignof(C_PointEntity) == 8);
// C_EnvCombinedLightProbeVolume
static_assert(sizeof(C_EnvCombinedLightProbeVolume) == 5968);
static_assert(alignof(C_EnvCombinedLightProbeVolume) == 8);
// C_EnvCubemap
static_assert(sizeof(C_EnvCubemap) == 1776);
static_assert(alignof(C_EnvCubemap) == 8);
// C_EnvCubemapBox
static_assert(sizeof(C_EnvCubemapBox) == 1776);
static_assert(alignof(C_EnvCubemapBox) == 8);
// C_EnvCubemapFog
static_assert(sizeof(C_EnvCubemapFog) == 1624);
static_assert(alignof(C_EnvCubemapFog) == 8);
// C_GradientFog
static_assert(sizeof(C_GradientFog) == 1696);
static_assert(alignof(C_GradientFog) == 8);
// C_EnvLightProbeVolume
static_assert(sizeof(C_EnvLightProbeVolume) == 5784);
static_assert(alignof(C_EnvLightProbeVolume) == 8);
// C_PlayerVisibility
static_assert(sizeof(C_PlayerVisibility) == 1592);
static_assert(alignof(C_PlayerVisibility) == 8);
// C_EnvVolumetricFogController
static_assert(sizeof(C_EnvVolumetricFogController) == 1720);
static_assert(alignof(C_EnvVolumetricFogController) == 8);
// C_EnvVolumetricFogVolume
static_assert(sizeof(C_EnvVolumetricFogVolume) == 1616);
static_assert(alignof(C_EnvVolumetricFogVolume) == 8);
// C_EnvWindController
static_assert(sizeof(C_EnvWindController) == 1832);
static_assert(alignof(C_EnvWindController) == 8);
// C_EnvWindVolume
static_assert(sizeof(C_EnvWindVolume) == 1600);
static_assert(alignof(C_EnvWindVolume) == 8);
// CInfoTarget
static_assert(sizeof(CInfoTarget) == 1544);
static_assert(alignof(CInfoTarget) == 8);
// CInfoParticleTarget
static_assert(sizeof(CInfoParticleTarget) == 1544);
static_assert(alignof(CInfoParticleTarget) == 8);
// CChoreoInfoTarget
static_assert(sizeof(CChoreoInfoTarget) == 1544);
static_assert(alignof(CChoreoInfoTarget) == 8);
// C_InfoVisibilityBox
static_assert(sizeof(C_InfoVisibilityBox) == 1568);
static_assert(alignof(C_InfoVisibilityBox) == 8);
// CInfoWorldLayer
static_assert(sizeof(CInfoWorldLayer) == 1600);
static_assert(alignof(CInfoWorldLayer) == 8);
// CPointChildModifier
static_assert(sizeof(CPointChildModifier) == 1552);
static_assert(alignof(CPointChildModifier) == 8);
// C_PointCameraVFOV
static_assert(sizeof(C_PointCameraVFOV) == 1648);
static_assert(alignof(C_PointCameraVFOV) == 8);
// CPointOrient
static_assert(sizeof(CPointOrient) == 1576);
static_assert(alignof(CPointOrient) == 8);
// CPointTemplate
static_assert(sizeof(CPointTemplate) == 1648);
static_assert(alignof(CPointTemplate) == 8);
// CRagdollManager
static_assert(sizeof(CRagdollManager) == 1552);
static_assert(alignof(CRagdollManager) == 8);
// C_SoundAreaEntityBase
static_assert(sizeof(C_SoundAreaEntityBase) == 1584);
static_assert(alignof(C_SoundAreaEntityBase) == 8);
// C_SoundAreaEntitySphere
static_assert(sizeof(C_SoundAreaEntitySphere) == 1592);
static_assert(alignof(C_SoundAreaEntitySphere) == 8);
// C_SoundAreaEntityOrientedBox
static_assert(sizeof(C_SoundAreaEntityOrientedBox) == 1608);
static_assert(alignof(C_SoundAreaEntityOrientedBox) == 8);
// C_SoundEventEntity
static_assert(sizeof(C_SoundEventEntity) == 1720);
static_assert(alignof(C_SoundEventEntity) == 8);
// C_SoundEventEntityAlias_snd_event_point
static_assert(sizeof(C_SoundEventEntityAlias_snd_event_point) == 1720);
static_assert(alignof(C_SoundEventEntityAlias_snd_event_point) == 8);
// C_SoundEventAABBEntity
static_assert(sizeof(C_SoundEventAABBEntity) == 1744);
static_assert(alignof(C_SoundEventAABBEntity) == 8);
// C_SoundEventOBBEntity
static_assert(sizeof(C_SoundEventOBBEntity) == 1760);
static_assert(alignof(C_SoundEventOBBEntity) == 8);
// C_SoundEventSphereEntity
static_assert(sizeof(C_SoundEventSphereEntity) == 1728);
static_assert(alignof(C_SoundEventSphereEntity) == 8);
// C_SoundEventConeEntity
static_assert(sizeof(C_SoundEventConeEntity) == 1744);
static_assert(alignof(C_SoundEventConeEntity) == 8);
// C_SoundEventPathCornerEntity
static_assert(sizeof(C_SoundEventPathCornerEntity) == 1744);
static_assert(alignof(C_SoundEventPathCornerEntity) == 8);
// C_Team
static_assert(sizeof(C_Team) == 1728);
static_assert(alignof(C_Team) == 8);
// CInfoFan
static_assert(sizeof(CInfoFan) == 1632);
static_assert(alignof(CInfoFan) == 8);
// CPulseGameBlackboard
static_assert(sizeof(CPulseGameBlackboard) == 1568);
static_assert(alignof(CPulseGameBlackboard) == 8);
// CBasePlayerVData
static_assert(sizeof(CBasePlayerVData) == 376);
static_assert(alignof(CBasePlayerVData) == 8);
// CBaseFilter
static_assert(sizeof(CBaseFilter) == 1600);
static_assert(alignof(CBaseFilter) == 8);
// CFilterMultiple
static_assert(sizeof(CFilterMultiple) == 1728);
static_assert(alignof(CFilterMultiple) == 8);
// CFilterProximity
static_assert(sizeof(CFilterProximity) == 1608);
static_assert(alignof(CFilterProximity) == 8);
// CFilterLOS
static_assert(sizeof(CFilterLOS) == 1600);
static_assert(alignof(CFilterLOS) == 8);
// CFilterClass
static_assert(sizeof(CFilterClass) == 1608);
static_assert(alignof(CFilterClass) == 8);
// CBasePlayerWeaponVData
static_assert(sizeof(CBasePlayerWeaponVData) == 1088);
static_assert(alignof(CBasePlayerWeaponVData) == 8);
// CClientAlphaProperty
static_assert(sizeof(CClientAlphaProperty0) == 48);
static_assert(alignof(CClientAlphaProperty0) == 4);
// CServerOnlyModelEntity
static_assert(sizeof(CServerOnlyModelEntity) == 3720);
static_assert(alignof(CServerOnlyModelEntity) == 8);
// C_ModelPointEntity
static_assert(sizeof(C_ModelPointEntity) == 3720);
static_assert(alignof(C_ModelPointEntity) == 8);
// CInfoInteraction
static_assert(sizeof(CInfoInteraction) == 1624);
static_assert(alignof(CInfoInteraction) == 8);
// CLogicRelay
static_assert(sizeof(CLogicRelay) == 1552);
static_assert(alignof(CLogicRelay) == 8);
// C_PathParticleRope
static_assert(sizeof(C_PathParticleRope) == 1816);
static_assert(alignof(C_PathParticleRope) == 8);
// C_PathParticleRopeAlias_path_particle_rope_clientside
static_assert(sizeof(C_PathParticleRopeAlias_path_particle_rope_clientside) == 1816);
static_assert(alignof(C_PathParticleRopeAlias_path_particle_rope_clientside) == 8);
// CPathSimple
static_assert(sizeof(CPathSimple) == 1808);
static_assert(alignof(CPathSimple) == 16);
// CPathWithDynamicNodes
static_assert(sizeof(CPathWithDynamicNodes) == 1872);
static_assert(alignof(CPathWithDynamicNodes) == 16);
// CPathNode
static_assert(sizeof(CPathNode) == 1632);
static_assert(alignof(CPathNode) == 16);
// CEnvSoundscape
static_assert(sizeof(CEnvSoundscape) == 1688);
static_assert(alignof(CEnvSoundscape) == 8);
// CEnvSoundscapeProxy
static_assert(sizeof(CEnvSoundscapeProxy) == 1696);
static_assert(alignof(CEnvSoundscapeProxy) == 8);
// CEnvSoundscapeTriggerable
static_assert(sizeof(CEnvSoundscapeTriggerable) == 1688);
static_assert(alignof(CEnvSoundscapeTriggerable) == 8);
// C_DynamicLight
static_assert(sizeof(C_DynamicLight) == 3760);
static_assert(alignof(C_DynamicLight) == 8);
// C_FuncTrackTrain
static_assert(sizeof(C_FuncTrackTrain) == 3736);
static_assert(alignof(C_FuncTrackTrain) == 8);
// C_SpotlightEnd
static_assert(sizeof(C_SpotlightEnd) == 3736);
static_assert(alignof(C_SpotlightEnd) == 8);
// C_PointValueRemapper
static_assert(sizeof(C_PointValueRemapper) == 1664);
static_assert(alignof(C_PointValueRemapper) == 8);
// C_PointWorldText
static_assert(sizeof(C_PointWorldText) == 4448);
static_assert(alignof(C_PointWorldText) == 8);
// CCitadelSoundOpvarSetOBB
static_assert(sizeof(CCitadelSoundOpvarSetOBB) == 1648);
static_assert(alignof(CCitadelSoundOpvarSetOBB) == 8);
// C_HandleTest
static_assert(sizeof(C_HandleTest) == 1552);
static_assert(alignof(C_HandleTest) == 8);
// C_EnvWind
static_assert(sizeof(C_EnvWind) == 1792);
static_assert(alignof(C_EnvWind) == 8);
// C_BaseButton
static_assert(sizeof(C_BaseButton) == 3736);
static_assert(alignof(C_BaseButton) == 8);
// C_PrecipitationBlocker
static_assert(sizeof(C_PrecipitationBlocker) == 3720);
static_assert(alignof(C_PrecipitationBlocker) == 8);
// C_EntityDissolve
static_assert(sizeof(C_EntityDissolve) == 3792);
static_assert(alignof(C_EntityDissolve) == 8);
// C_EnvDecal
static_assert(sizeof(C_EnvDecal) == 3776);
static_assert(alignof(C_EnvDecal) == 8);
// C_FuncBrush
static_assert(sizeof(C_FuncBrush) == 3720);
static_assert(alignof(C_FuncBrush) == 8);
// C_FuncElectrifiedVolume
static_assert(sizeof(C_FuncElectrifiedVolume) == 3744);
static_assert(alignof(C_FuncElectrifiedVolume) == 8);
// C_FuncRotating
static_assert(sizeof(C_FuncRotating) == 3720);
static_assert(alignof(C_FuncRotating) == 8);
// C_Breakable
static_assert(sizeof(C_Breakable) == 3720);
static_assert(alignof(C_Breakable) == 8);
// C_PhysBox
static_assert(sizeof(C_PhysBox) == 3720);
static_assert(alignof(C_PhysBox) == 8);
// C_SceneEntity
static_assert(sizeof(C_SceneEntity) == 1640);
static_assert(alignof(C_SceneEntity) == 8);
// C_TriggerVolume
static_assert(sizeof(C_TriggerVolume) == 3720);
static_assert(alignof(C_TriggerVolume) == 8);
// C_Beam
static_assert(sizeof(C_Beam) == 3912);
static_assert(alignof(C_Beam) == 8);
// C_FuncLadder
static_assert(sizeof(C_FuncLadder) == 3808);
static_assert(alignof(C_FuncLadder) == 8);
// CPrecipitationVData
static_assert(sizeof(CPrecipitationVData) == 296);
static_assert(alignof(CPrecipitationVData) == 8);
// C_Sprite
static_assert(sizeof(C_Sprite) == 3840);
static_assert(alignof(C_Sprite) == 8);
// CSpriteOriented
static_assert(sizeof(CSpriteOriented) == 3840);
static_assert(alignof(CSpriteOriented) == 8);
// C_BaseClientUIEntity
static_assert(sizeof(C_BaseClientUIEntity) == 3768);
static_assert(alignof(C_BaseClientUIEntity) == 8);
// C_PointClientUIDialog
static_assert(sizeof(C_PointClientUIDialog) == 3776);
static_assert(alignof(C_PointClientUIDialog) == 8);
// C_PointClientUIHUD
static_assert(sizeof(C_PointClientUIHUD) == 4224);
static_assert(alignof(C_PointClientUIHUD) == 8);
// C_PointClientUIWorldPanel
static_assert(sizeof(C_PointClientUIWorldPanel) == 4320);
static_assert(alignof(C_PointClientUIWorldPanel) == 16);
// CPointOffScreenIndicatorUi
static_assert(sizeof(CPointOffScreenIndicatorUi) == 4336);
static_assert(alignof(CPointOffScreenIndicatorUi) == 16);
// C_PointClientUIWorldTextPanel
static_assert(sizeof(C_PointClientUIWorldTextPanel) == 4832);
static_assert(alignof(C_PointClientUIWorldTextPanel) == 16);
// CInfoOffscreenPanoramaTexture
static_assert(sizeof(CInfoOffscreenPanoramaTexture) == 2064);
static_assert(alignof(CInfoOffscreenPanoramaTexture) == 8);
// CFuncWater
static_assert(sizeof(CFuncWater) == 4000);
static_assert(alignof(CFuncWater) == 8);
// CWaterSplasher
static_assert(sizeof(CWaterSplasher) == 3720);
static_assert(alignof(CWaterSplasher) == 8);
// C_InfoInstructorHintHostageRescueZone
static_assert(sizeof(C_InfoInstructorHintHostageRescueZone) == 1544);
static_assert(alignof(C_InfoInstructorHintHostageRescueZone) == 8);
// C_CSObserverPawn
static_assert(sizeof(C_CSObserverPawn) == 5720);
static_assert(alignof(C_CSObserverPawn) == 8);
// CCSWeaponBaseVData
static_assert(sizeof(CCSWeaponBaseVData) == 1984);
static_assert(alignof(CCSWeaponBaseVData) == 8);
// C_PlayerSprayDecal
static_assert(sizeof(C_PlayerSprayDecal) == 3992);
static_assert(alignof(C_PlayerSprayDecal) == 8);
// C_FuncConveyor
static_assert(sizeof(C_FuncConveyor) == 3792);
static_assert(alignof(C_FuncConveyor) == 8);
// CGrenadeTracer
static_assert(sizeof(CGrenadeTracer) == 4896);
static_assert(alignof(CGrenadeTracer) == 16);
// C_Inferno
static_assert(sizeof(C_Inferno) == 33936);
static_assert(alignof(C_Inferno) == 16);
// C_FireCrackerBlast
static_assert(sizeof(C_FireCrackerBlast) == 33936);
static_assert(alignof(C_FireCrackerBlast) == 16);
// C_BarnLight
static_assert(sizeof(C_BarnLight) == 4504);
static_assert(alignof(C_BarnLight) == 8);
// C_RectLight
static_assert(sizeof(C_RectLight) == 4512);
static_assert(alignof(C_RectLight) == 8);
// C_OmniLight
static_assert(sizeof(C_OmniLight) == 4520);
static_assert(alignof(C_OmniLight) == 8);
// CMapInfo
static_assert(sizeof(CMapInfo) == 1592);
static_assert(alignof(CMapInfo) == 8);
// C_CSTeam
static_assert(sizeof(C_CSTeam) == 2416);
static_assert(alignof(C_CSTeam) == 8);
// CInfoDynamicShadowHint
static_assert(sizeof(CInfoDynamicShadowHint) == 1568);
static_assert(alignof(CInfoDynamicShadowHint) == 8);
// CInfoDynamicShadowHintBox
static_assert(sizeof(CInfoDynamicShadowHintBox) == 1592);
static_assert(alignof(CInfoDynamicShadowHintBox) == 8);
// C_EnvSky
static_assert(sizeof(C_EnvSky) == 3816);
static_assert(alignof(C_EnvSky) == 8);
// C_TonemapController2Alias_env_tonemap_controller2
static_assert(sizeof(C_TonemapController2Alias_env_tonemap_controller2) == 1568);
static_assert(alignof(C_TonemapController2Alias_env_tonemap_controller2) == 8);
// C_LightEntity
static_assert(sizeof(C_LightEntity) == 3728);
static_assert(alignof(C_LightEntity) == 8);
// C_LightSpotEntity
static_assert(sizeof(C_LightSpotEntity) == 3728);
static_assert(alignof(C_LightSpotEntity) == 8);
// C_LightOrthoEntity
static_assert(sizeof(C_LightOrthoEntity) == 3728);
static_assert(alignof(C_LightOrthoEntity) == 8);
// C_LightDirectionalEntity
static_assert(sizeof(C_LightDirectionalEntity) == 3728);
static_assert(alignof(C_LightDirectionalEntity) == 8);
// C_LightEnvironmentEntity
static_assert(sizeof(C_LightEnvironmentEntity) == 3728);
static_assert(alignof(C_LightEnvironmentEntity) == 8);
// CTriggerFan
static_assert(sizeof(CTriggerFan) == 4032);
static_assert(alignof(CTriggerFan) == 16);
// CEnvSoundscapeProxyAlias_snd_soundscape_proxy
static_assert(sizeof(CEnvSoundscapeProxyAlias_snd_soundscape_proxy) == 1696);
static_assert(alignof(CEnvSoundscapeProxyAlias_snd_soundscape_proxy) == 8);
// CEnvSoundscapeAlias_snd_soundscape
static_assert(sizeof(CEnvSoundscapeAlias_snd_soundscape) == 1688);
static_assert(alignof(CEnvSoundscapeAlias_snd_soundscape) == 8);
// CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable
static_assert(sizeof(CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable) == 1688);
static_assert(alignof(CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable) == 8);
// CFilterName
static_assert(sizeof(CFilterName) == 1608);
static_assert(alignof(CFilterName) == 8);
// CFilterModel
static_assert(sizeof(CFilterModel) == 1608);
static_assert(alignof(CFilterModel) == 8);
// CFilterTeam
static_assert(sizeof(CFilterTeam) == 1608);
static_assert(alignof(CFilterTeam) == 8);
// CFilterMassGreater
static_assert(sizeof(CFilterMassGreater) == 1608);
static_assert(alignof(CFilterMassGreater) == 8);
// FilterDamageType
static_assert(sizeof(FilterDamageType) == 1608);
static_assert(alignof(FilterDamageType) == 8);
// FilterHealth
static_assert(sizeof(FilterHealth) == 1616);
static_assert(alignof(FilterHealth) == 8);
// CFilterAttributeInt
static_assert(sizeof(CFilterAttributeInt) == 1608);
static_assert(alignof(CFilterAttributeInt) == 8);
// C_ParticleSystem
static_assert(sizeof(C_ParticleSystem) == 5176);
static_assert(alignof(C_ParticleSystem) == 8);
// C_TextureBasedAnimatable
static_assert(sizeof(C_TextureBasedAnimatable) == 3776);
static_assert(alignof(C_TextureBasedAnimatable) == 8);
// C_World
static_assert(sizeof(C_World) == 3720);
static_assert(alignof(C_World) == 8);
// CBaseProp
static_assert(sizeof(CBaseProp) == 4512);
static_assert(alignof(CBaseProp) == 16);
// C_BreakableProp
static_assert(sizeof(C_BreakableProp) == 4816);
static_assert(alignof(C_BreakableProp) == 16);
// C_DynamicProp
static_assert(sizeof(C_DynamicProp) == 5024);
static_assert(alignof(C_DynamicProp) == 16);
// C_DynamicPropAlias_dynamic_prop
static_assert(sizeof(C_DynamicPropAlias_dynamic_prop) == 5024);
static_assert(alignof(C_DynamicPropAlias_dynamic_prop) == 16);
// C_DynamicPropAlias_prop_dynamic_override
static_assert(sizeof(C_DynamicPropAlias_prop_dynamic_override) == 5024);
static_assert(alignof(C_DynamicPropAlias_prop_dynamic_override) == 16);
// C_DynamicPropAlias_cable_dynamic
static_assert(sizeof(C_DynamicPropAlias_cable_dynamic) == 5024);
static_assert(alignof(C_DynamicPropAlias_cable_dynamic) == 16);
// C_ColorCorrectionVolume
static_assert(sizeof(C_ColorCorrectionVolume) == 4480);
static_assert(alignof(C_ColorCorrectionVolume) == 8);
// C_FuncMonitor
static_assert(sizeof(C_FuncMonitor) == 4864);
static_assert(alignof(C_FuncMonitor) == 16);
// C_FuncMoveLinear
static_assert(sizeof(C_FuncMoveLinear) == 3720);
static_assert(alignof(C_FuncMoveLinear) == 8);
// C_FuncMover
static_assert(sizeof(C_FuncMover) == 3720);
static_assert(alignof(C_FuncMover) == 8);
// C_PhysMagnet
static_assert(sizeof(C_PhysMagnet) == 4504);
static_assert(alignof(C_PhysMagnet) == 8);
// C_PointCommentaryNode
static_assert(sizeof(C_PointCommentaryNode) == 4552);
static_assert(alignof(C_PointCommentaryNode) == 8);
// C_WaterBullet
static_assert(sizeof(C_WaterBullet) == 4456);
static_assert(alignof(C_WaterBullet) == 8);
// C_BaseDoor
static_assert(sizeof(C_BaseDoor) == 3728);
static_assert(alignof(C_BaseDoor) == 8);
// C_ClientRagdoll
static_assert(sizeof(C_ClientRagdoll) == 4608);
static_assert(alignof(C_ClientRagdoll) == 8);
// C_Precipitation
static_assert(sizeof(C_Precipitation) == 4008);
static_assert(alignof(C_Precipitation) == 8);
// C_Fish
static_assert(sizeof(C_Fish) == 4696);
static_assert(alignof(C_Fish) == 8);
// C_PhysicsProp
static_assert(sizeof(C_PhysicsProp) == 4832);
static_assert(alignof(C_PhysicsProp) == 16);
// C_BasePropDoor
static_assert(sizeof(C_BasePropDoor) == 5088);
static_assert(alignof(C_BasePropDoor) == 16);
// C_PropDoorRotating
static_assert(sizeof(C_PropDoorRotating) == 5088);
static_assert(alignof(C_PropDoorRotating) == 16);
// C_TriggerMultiple
static_assert(sizeof(C_TriggerMultiple) == 3928);
static_assert(alignof(C_TriggerMultiple) == 8);
// C_TriggerLerpObject
static_assert(sizeof(C_TriggerLerpObject) == 3928);
static_assert(alignof(C_TriggerLerpObject) == 8);
// C_TriggerPhysics
static_assert(sizeof(C_TriggerPhysics) == 4008);
static_assert(alignof(C_TriggerPhysics) == 8);
// C_PhysPropClientside
static_assert(sizeof(C_PhysPropClientside) == 4864);
static_assert(alignof(C_PhysPropClientside) == 16);
// C_RagdollProp
static_assert(sizeof(C_RagdollProp) == 4600);
static_assert(alignof(C_RagdollProp) == 8);
// C_LocalTempEntity
static_assert(sizeof(C_LocalTempEntity) == 4624);
static_assert(alignof(C_LocalTempEntity) == 8);
// C_ShatterGlassShardPhysics
static_assert(sizeof(C_ShatterGlassShardPhysics) == 4976);
static_assert(alignof(C_ShatterGlassShardPhysics) == 16);
// C_EconWearable
static_assert(sizeof(C_EconWearable) == 6344);
static_assert(alignof(C_EconWearable) == 8);
// C_BaseGrenade
static_assert(sizeof(C_BaseGrenade) == 5024);
static_assert(alignof(C_BaseGrenade) == 8);
// CFuncRetakeBarrier
static_assert(sizeof(CFuncRetakeBarrier) == 5056);
static_assert(alignof(CFuncRetakeBarrier) == 16);
// CBombTarget
static_assert(sizeof(CBombTarget) == 3936);
static_assert(alignof(CBombTarget) == 8);
// CHostageRescueZoneShim
static_assert(sizeof(CHostageRescueZoneShim) == 3928);
static_assert(alignof(CHostageRescueZoneShim) == 8);
// CHostageRescueZone
static_assert(sizeof(CHostageRescueZone) == 3952);
static_assert(alignof(CHostageRescueZone) == 8);
// C_TriggerBuoyancy
static_assert(sizeof(C_TriggerBuoyancy) == 4216);
static_assert(alignof(C_TriggerBuoyancy) == 8);
// C_PhysicsPropMultiplayer
static_assert(sizeof(C_PhysicsPropMultiplayer) == 4832);
static_assert(alignof(C_PhysicsPropMultiplayer) == 16);
// C_FootstepControl
static_assert(sizeof(C_FootstepControl) == 3944);
static_assert(alignof(C_FootstepControl) == 8);
// C_CS2WeaponModuleBase
static_assert(sizeof(C_CS2WeaponModuleBase) == 4464);
static_assert(alignof(C_CS2WeaponModuleBase) == 8);
// C_StattrakModule
static_assert(sizeof(C_StattrakModule) == 4472);
static_assert(alignof(C_StattrakModule) == 8);
// C_NametagModule
static_assert(sizeof(C_NametagModule) == 4472);
static_assert(alignof(C_NametagModule) == 8);
// C_KeychainModule
static_assert(sizeof(C_KeychainModule) == 4472);
static_assert(alignof(C_KeychainModule) == 8);
// C_BaseCSGrenadeProjectile
static_assert(sizeof(C_BaseCSGrenadeProjectile) == 5176);
static_assert(alignof(C_BaseCSGrenadeProjectile) == 8);
// C_CSGO_PreviewModel
static_assert(sizeof(C_CSGO_PreviewModel) == 6240);
static_assert(alignof(C_CSGO_PreviewModel) == 8);
// C_CSGO_PreviewModelAlias_csgo_item_previewmodel
static_assert(sizeof(C_CSGO_PreviewModelAlias_csgo_item_previewmodel) == 6240);
static_assert(alignof(C_CSGO_PreviewModelAlias_csgo_item_previewmodel) == 8);
// C_WorldModelGloves
static_assert(sizeof(C_WorldModelGloves) == 4464);
static_assert(alignof(C_WorldModelGloves) == 8);
// C_BulletHitModel
static_assert(sizeof(C_BulletHitModel) == 4536);
static_assert(alignof(C_BulletHitModel) == 8);
// C_HostageCarriableProp
static_assert(sizeof(C_HostageCarriableProp) == 4464);
static_assert(alignof(C_HostageCarriableProp) == 8);
// C_PlantedC4
static_assert(sizeof(C_PlantedC4) == 5856);
static_assert(alignof(C_PlantedC4) == 8);
// C_Multimeter
static_assert(sizeof(C_Multimeter) == 4472);
static_assert(alignof(C_Multimeter) == 8);
// C_Item
static_assert(sizeof(C_Item) == 6592);
static_assert(alignof(C_Item) == 8);
// C_LateUpdatedAnimating
static_assert(sizeof(C_LateUpdatedAnimating) == 4608);
static_assert(alignof(C_LateUpdatedAnimating) == 8);
// C_CS2HudModelAddon
static_assert(sizeof(C_CS2HudModelAddon) == 4624);
static_assert(alignof(C_CS2HudModelAddon) == 16);
// C_CS2HudModelBase
static_assert(sizeof(C_CS2HudModelBase) == 4656);
static_assert(alignof(C_CS2HudModelBase) == 8);
// C_CS2HudModelWeapon
static_assert(sizeof(C_CS2HudModelWeapon) == 4736);
static_assert(alignof(C_CS2HudModelWeapon) == 16);
// C_CS2HudModelArms
static_assert(sizeof(C_CS2HudModelArms) == 4928);
static_assert(alignof(C_CS2HudModelArms) == 16);
// C_HEGrenadeProjectile
static_assert(sizeof(C_HEGrenadeProjectile) == 5176);
static_assert(alignof(C_HEGrenadeProjectile) == 8);
// C_FlashbangProjectile
static_assert(sizeof(C_FlashbangProjectile) == 5176);
static_assert(alignof(C_FlashbangProjectile) == 8);
// C_Chicken
static_assert(sizeof(C_Chicken) == 6304);
static_assert(alignof(C_Chicken) == 16);
// C_MapPreviewParticleSystem
static_assert(sizeof(C_MapPreviewParticleSystem) == 5176);
static_assert(alignof(C_MapPreviewParticleSystem) == 8);
// C_EnvParticleGlow
static_assert(sizeof(C_EnvParticleGlow) == 5200);
static_assert(alignof(C_EnvParticleGlow) == 8);
// C_RagdollPropAttached
static_assert(sizeof(C_RagdollPropAttached) == 4656);
static_assert(alignof(C_RagdollPropAttached) == 8);
// C_CSWeaponBase
static_assert(sizeof(C_CSWeaponBase) == 8000);
static_assert(alignof(C_CSWeaponBase) == 8);
// C_CSWeaponBaseGun
static_assert(sizeof(C_CSWeaponBaseGun) == 8048);
static_assert(alignof(C_CSWeaponBaseGun) == 16);
// C_CSWeaponBaseShotgun
static_assert(sizeof(C_CSWeaponBaseShotgun) == 8000);
static_assert(alignof(C_CSWeaponBaseShotgun) == 16);
// C_C4
static_assert(sizeof(C_C4) == 8064);
static_assert(alignof(C_C4) == 16);
// C_WeaponCZ75a
static_assert(sizeof(C_WeaponCZ75a) == 8064);
static_assert(alignof(C_WeaponCZ75a) == 16);
// C_DEagle
static_assert(sizeof(C_DEagle) == 8048);
static_assert(alignof(C_DEagle) == 16);
// C_WeaponElite
static_assert(sizeof(C_WeaponElite) == 8048);
static_assert(alignof(C_WeaponElite) == 16);
// C_WeaponTaser
static_assert(sizeof(C_WeaponTaser) == 8064);
static_assert(alignof(C_WeaponTaser) == 16);
// C_Knife
static_assert(sizeof(C_Knife) == 8016);
static_assert(alignof(C_Knife) == 16);
// C_MolotovProjectile
static_assert(sizeof(C_MolotovProjectile) == 5216);
static_assert(alignof(C_MolotovProjectile) == 8);
// C_DecoyProjectile
static_assert(sizeof(C_DecoyProjectile) == 5224);
static_assert(alignof(C_DecoyProjectile) == 8);
// C_SmokeGrenadeProjectile
static_assert(sizeof(C_SmokeGrenadeProjectile) == 5616);
static_assert(alignof(C_SmokeGrenadeProjectile) == 8);
// C_BaseCSGrenade
static_assert(sizeof(C_BaseCSGrenade) == 8192);
static_assert(alignof(C_BaseCSGrenade) == 8);
// C_WeaponBaseItem
static_assert(sizeof(C_WeaponBaseItem) == 8016);
static_assert(alignof(C_WeaponBaseItem) == 8);
// C_ItemDogtags
static_assert(sizeof(C_ItemDogtags) == 6600);
static_assert(alignof(C_ItemDogtags) == 8);
// C_Item_Healthshot
static_assert(sizeof(C_Item_Healthshot) == 8016);
static_assert(alignof(C_Item_Healthshot) == 16);
// C_Hostage
static_assert(sizeof(C_Hostage) == 5288);
static_assert(alignof(C_Hostage) == 8);
// C_NetTestBaseCombatCharacter
static_assert(sizeof(C_NetTestBaseCombatCharacter) == 5080);
static_assert(alignof(C_NetTestBaseCombatCharacter) == 8);
// C_AK47
static_assert(sizeof(C_AK47) == 8048);
static_assert(alignof(C_AK47) == 16);
// C_WeaponAug
static_assert(sizeof(C_WeaponAug) == 8048);
static_assert(alignof(C_WeaponAug) == 16);
// C_WeaponAWP
static_assert(sizeof(C_WeaponAWP) == 8048);
static_assert(alignof(C_WeaponAWP) == 16);
// C_WeaponBizon
static_assert(sizeof(C_WeaponBizon) == 8048);
static_assert(alignof(C_WeaponBizon) == 16);
// C_WeaponFamas
static_assert(sizeof(C_WeaponFamas) == 8048);
static_assert(alignof(C_WeaponFamas) == 16);
// C_WeaponFiveSeven
static_assert(sizeof(C_WeaponFiveSeven) == 8048);
static_assert(alignof(C_WeaponFiveSeven) == 16);
// C_WeaponG3SG1
static_assert(sizeof(C_WeaponG3SG1) == 8048);
static_assert(alignof(C_WeaponG3SG1) == 16);
// C_WeaponGalilAR
static_assert(sizeof(C_WeaponGalilAR) == 8048);
static_assert(alignof(C_WeaponGalilAR) == 16);
// C_WeaponGlock
static_assert(sizeof(C_WeaponGlock) == 8048);
static_assert(alignof(C_WeaponGlock) == 16);
// C_WeaponHKP2000
static_assert(sizeof(C_WeaponHKP2000) == 8048);
static_assert(alignof(C_WeaponHKP2000) == 16);
// C_WeaponUSPSilencer
static_assert(sizeof(C_WeaponUSPSilencer) == 8048);
static_assert(alignof(C_WeaponUSPSilencer) == 16);
// C_WeaponM4A1
static_assert(sizeof(C_WeaponM4A1) == 8048);
static_assert(alignof(C_WeaponM4A1) == 16);
// C_WeaponM4A1Silencer
static_assert(sizeof(C_WeaponM4A1Silencer) == 8048);
static_assert(alignof(C_WeaponM4A1Silencer) == 16);
// C_WeaponMAC10
static_assert(sizeof(C_WeaponMAC10) == 8048);
static_assert(alignof(C_WeaponMAC10) == 16);
// C_WeaponMag7
static_assert(sizeof(C_WeaponMag7) == 8048);
static_assert(alignof(C_WeaponMag7) == 16);
// C_WeaponMP5SD
static_assert(sizeof(C_WeaponMP5SD) == 8048);
static_assert(alignof(C_WeaponMP5SD) == 16);
// C_WeaponMP7
static_assert(sizeof(C_WeaponMP7) == 8048);
static_assert(alignof(C_WeaponMP7) == 16);
// C_WeaponMP9
static_assert(sizeof(C_WeaponMP9) == 8048);
static_assert(alignof(C_WeaponMP9) == 16);
// C_WeaponNegev
static_assert(sizeof(C_WeaponNegev) == 8048);
static_assert(alignof(C_WeaponNegev) == 16);
// C_WeaponP250
static_assert(sizeof(C_WeaponP250) == 8048);
static_assert(alignof(C_WeaponP250) == 16);
// C_WeaponP90
static_assert(sizeof(C_WeaponP90) == 8048);
static_assert(alignof(C_WeaponP90) == 16);
// C_WeaponSCAR20
static_assert(sizeof(C_WeaponSCAR20) == 8048);
static_assert(alignof(C_WeaponSCAR20) == 16);
// C_WeaponSG556
static_assert(sizeof(C_WeaponSG556) == 8048);
static_assert(alignof(C_WeaponSG556) == 16);
// C_WeaponSSG08
static_assert(sizeof(C_WeaponSSG08) == 8048);
static_assert(alignof(C_WeaponSSG08) == 16);
// C_WeaponTec9
static_assert(sizeof(C_WeaponTec9) == 8048);
static_assert(alignof(C_WeaponTec9) == 16);
// C_WeaponUMP45
static_assert(sizeof(C_WeaponUMP45) == 8048);
static_assert(alignof(C_WeaponUMP45) == 16);
// C_WeaponM249
static_assert(sizeof(C_WeaponM249) == 8048);
static_assert(alignof(C_WeaponM249) == 16);
// C_WeaponRevolver
static_assert(sizeof(C_WeaponRevolver) == 8048);
static_assert(alignof(C_WeaponRevolver) == 16);
// C_WeaponNOVA
static_assert(sizeof(C_WeaponNOVA) == 8000);
static_assert(alignof(C_WeaponNOVA) == 16);
// C_WeaponSawedoff
static_assert(sizeof(C_WeaponSawedoff) == 8000);
static_assert(alignof(C_WeaponSawedoff) == 16);
// C_WeaponXM1014
static_assert(sizeof(C_WeaponXM1014) == 8000);
static_assert(alignof(C_WeaponXM1014) == 16);
// C_MolotovGrenade
static_assert(sizeof(C_MolotovGrenade) == 8192);
static_assert(alignof(C_MolotovGrenade) == 16);
// C_IncendiaryGrenade
static_assert(sizeof(C_IncendiaryGrenade) == 8192);
static_assert(alignof(C_IncendiaryGrenade) == 16);
// C_DecoyGrenade
static_assert(sizeof(C_DecoyGrenade) == 8192);
static_assert(alignof(C_DecoyGrenade) == 16);
// C_Flashbang
static_assert(sizeof(C_Flashbang) == 8192);
static_assert(alignof(C_Flashbang) == 16);
// C_HEGrenade
static_assert(sizeof(C_HEGrenade) == 8192);
static_assert(alignof(C_HEGrenade) == 16);
// C_SmokeGrenade
static_assert(sizeof(C_SmokeGrenade) == 8192);
static_assert(alignof(C_SmokeGrenade) == 16);
// C_CSGO_PreviewPlayer
static_assert(sizeof(C_CSGO_PreviewPlayer) == 16288);
static_assert(alignof(C_CSGO_PreviewPlayer) == 16);
// C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel
static_assert(sizeof(C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel) == 16288);
static_assert(alignof(C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel) == 16);
// C_CSGO_TeamPreviewModel
static_assert(sizeof(C_CSGO_TeamPreviewModel) == 16288);
static_assert(alignof(C_CSGO_TeamPreviewModel) == 16);
