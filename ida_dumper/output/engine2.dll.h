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


/// EntityDormancyType_t
_enum EntityDormancyType_t0 : uint32_t {
    ENTITY_NOT_DORMANT = 0,
    ENTITY_DORMANT = 1,
    ENTITY_SUSPENDED = 2,
};

/// EntityIOTargetType_t
_enum EntityIOTargetType_t0 : uint32_t {
    ENTITY_IO_TARGET_INVALID = 4294967295,
    ENTITY_IO_TARGET_ENTITYNAME = 2,
    ENTITY_IO_TARGET_EHANDLE = 6,
    ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME = 7,
};

class CEntityIdentity;


/// EngineLoopState_t
class __declspec(align(4)) EngineLoopState_t0 {
public:
    char pad_00[24];
    int32_t m_nPlatWindowWidth; // 0x18
    int32_t m_nPlatWindowHeight; // 0x1c
    int32_t m_nRenderWidth; // 0x20
    int32_t m_nRenderHeight; // 0x24
}; // size: 0x28

class __declspec(align(1)) CEntityComponent {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(1)) CScriptComponent : public CEntityComponent {
public:
    // CUtlSymbolLarge m_scriptClassName;
    char pad_01[48];
}; // size: 0x38

/// ChangeAccessorFieldPathIndex_t
class __declspec(align(4)) ChangeAccessorFieldPathIndex_t0 {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

/// EventModInitialized_t
class __declspec(align(1)) EventModInitialized_t0 {
public:
    char pad_00[1];
}; // size: 0x1

/// EventFrameBoundary_t
class __declspec(align(4)) EventFrameBoundary_t0 {
public:
    float m_flFrameTime; // 0x0
}; // size: 0x4

/// EventProfileStorageAvailable_t
class __declspec(align(1)) EventProfileStorageAvailable_t0 {
public:
    // CSplitScreenSlot m_nSplitScreenSlot;
    char pad_00[4];
}; // size: 0x4

/// EventSplitScreenStateChanged_t
class __declspec(align(1)) EventSplitScreenStateChanged_t0 {
public:
    char pad_00[1];
}; // size: 0x1

/// EventSetTime_t
class __declspec(align(4)) EventSetTime_t0 {
public:
    EngineLoopState_t m_LoopState; // 0x0
    int32_t m_nClientOutputFrames; // 0x28
    // float64 m_flRealTime;
    // float64 m_flRenderTime;
    // float64 m_flRenderFrameTime;
    // float64 m_flRenderFrameTimeUnbounded;
    // float64 m_flRenderFrameTimeUnscaled;
    // float64 m_flTickRemainder;
    char pad_00[52];
}; // size: 0x60

/// EventClientPollInput_t
class __declspec(align(4)) EventClientPollInput_t0 {
public:
    EngineLoopState_t m_LoopState; // 0x0
    float m_flRealTime; // 0x28
    char pad_00[4];
}; // size: 0x30

/// EventClientProcessInput_t
class __declspec(align(4)) EventClientProcessInput_t0 {
public:
    EngineLoopState_t m_LoopState; // 0x0
    float m_flRealTime; // 0x28
    float m_flTickInterval; // 0x2c
    // float64 m_flTickStartTime;
    char pad_00[8];
}; // size: 0x38

/// EventClientProcessGameInput_t
class __declspec(align(4)) EventClientProcessGameInput_t0 {
public:
    EngineLoopState_t m_LoopState; // 0x0
    float m_flRealTime; // 0x28
    float m_flFrameTime; // 0x2c
}; // size: 0x30

/// EventClientPreOutput_t
class __declspec(align(4)) EventClientPreOutput_t0 {
public:
    EngineLoopState_t m_LoopState; // 0x0
    // float64 m_flRenderTime;
    // float64 m_flRenderFrameTime;
    // float64 m_flRenderFrameTimeUnbounded;
    char pad_00[24];
    float m_flRealTime; // 0x40
    bool m_bRenderOnly; // 0x44
    char pad_01[3];
}; // size: 0x48

/// EventClientPreOutputParallelWithServer_t
class __declspec(align(1)) EventClientPreOutputParallelWithServer_t0 {
public:
    char pad_00[72];
}; // size: 0x48

/// EventClientSceneSystemThreadStateChange_t
class __declspec(align(1)) EventClientSceneSystemThreadStateChange_t0 {
public:
    bool m_bThreadsActive; // 0x0
}; // size: 0x1

/// EventClientOutput_t
class __declspec(align(4)) EventClientOutput_t0 {
public:
    EngineLoopState_t m_LoopState; // 0x0
    float m_flRenderTime; // 0x28
    float m_flRealTime; // 0x2c
    float m_flRenderFrameTimeUnbounded; // 0x30
    bool m_bRenderOnly; // 0x34
    char pad_00[3];
}; // size: 0x38

/// EventClientPostOutput_t
class __declspec(align(4)) EventClientPostOutput_t0 {
public:
    EngineLoopState_t m_LoopState; // 0x0
    // float64 m_flRenderTime;
    char pad_00[8];
    float m_flRenderFrameTime; // 0x30
    float m_flRenderFrameTimeUnbounded; // 0x34
    bool m_bRenderOnly; // 0x38
    char pad_01[7];
}; // size: 0x40

/// EventClientAdvanceNonRenderedFrame_t
class __declspec(align(1)) EventClientAdvanceNonRenderedFrame_t0 {
public:
    char pad_00[1];
}; // size: 0x1

/// EventClientFrameSimulate_t
class __declspec(align(4)) EventClientFrameSimulate_t0 {
public:
    EngineLoopState_t m_LoopState; // 0x0
    float m_flRealTime; // 0x28
    float m_flFrameTime; // 0x2c
    bool m_bScheduleSendTickPacket; // 0x30
    char pad_00[7];
}; // size: 0x38

/// EventSimpleLoopFrameUpdate_t
class __declspec(align(4)) EventSimpleLoopFrameUpdate_t0 {
public:
    EngineLoopState_t m_LoopState; // 0x0
    float m_flRealTime; // 0x28
    float m_flFrameTime; // 0x2c
}; // size: 0x30

/// EventSimulate_t
class __declspec(align(4)) EventSimulate_t0 {
public:
    EngineLoopState_t m_LoopState; // 0x0
    bool m_bFirstTick; // 0x28
    bool m_bLastTick; // 0x29
    char pad_00[6];
}; // size: 0x30

/// EventAdvanceTick_t
class __declspec(align(4)) EventAdvanceTick_t0 {
public:
    char pad_00[48];
    int32_t m_nCurrentTick; // 0x30
    int32_t m_nCurrentTickThisFrame; // 0x34
    int32_t m_nTotalTicksThisFrame; // 0x38
    int32_t m_nTotalTicks; // 0x3c
}; // size: 0x40

/// EventPostAdvanceTick_t
class __declspec(align(4)) EventPostAdvanceTick_t0 {
public:
    char pad_00[48];
    int32_t m_nCurrentTick; // 0x30
    int32_t m_nCurrentTickThisFrame; // 0x34
    int32_t m_nTotalTicksThisFrame; // 0x38
    int32_t m_nTotalTicks; // 0x3c
}; // size: 0x40

/// EventServerAdvanceTick_t
class __declspec(align(1)) EventServerAdvanceTick_t0 {
public:
    char pad_00[64];
}; // size: 0x40

/// EventServerPostAdvanceTick_t
class __declspec(align(1)) EventServerPostAdvanceTick_t0 {
public:
    char pad_00[64];
    bool m_bLastTickBeforeClientUpdate; // 0x40
    char pad_01[7];
}; // size: 0x48

/// EventServerBeginAsyncPostTickWork_t
class __declspec(align(1)) EventServerBeginAsyncPostTickWork_t0 {
public:
    bool m_bIsOncePerFrameAsyncWorkPhase; // 0x0
}; // size: 0x1

/// EventServerEndAsyncPostTickWork_t
class __declspec(align(1)) EventServerEndAsyncPostTickWork_t0 {
public:
    char pad_00[1];
}; // size: 0x1

/// EventClientAdvanceTick_t
class __declspec(align(1)) EventClientAdvanceTick_t0 {
public:
    char pad_00[64];
}; // size: 0x40

/// EventClientPostAdvanceTick_t
class __declspec(align(1)) EventClientPostAdvanceTick_t0 {
public:
    char pad_00[64];
}; // size: 0x40

/// EventClientPollNetworking_t
class __declspec(align(4)) EventClientPollNetworking_t0 {
public:
    int32_t m_nTickCount; // 0x0
}; // size: 0x4

/// EventClientProcessNetworking_t
class __declspec(align(4)) EventClientProcessNetworking_t0 {
public:
    int32_t m_nTickCount; // 0x0
}; // size: 0x4

/// EventClientPreSimulate_t
class __declspec(align(1)) EventClientPreSimulate_t0 {
public:
    char pad_00[48];
}; // size: 0x30

/// EventClientSimulate_t
class __declspec(align(1)) EventClientSimulate_t0 {
public:
    char pad_00[48];
}; // size: 0x30

/// EventServerPollNetworking_t
class __declspec(align(1)) EventServerPollNetworking_t0 {
public:
    char pad_00[48];
}; // size: 0x30

/// EventServerProcessNetworking_t
class __declspec(align(1)) EventServerProcessNetworking_t0 {
public:
    char pad_00[48];
}; // size: 0x30

/// EventServerBeginSimulate_t
class __declspec(align(1)) EventServerBeginSimulate_t0 {
public:
    char pad_00[48];
}; // size: 0x30

/// EventServerEndSimulate_t
class __declspec(align(1)) EventServerEndSimulate_t0 {
public:
    bool m_bLastTick; // 0x0
}; // size: 0x1

/// EventServerPostSimulate_t
class __declspec(align(1)) EventServerPostSimulate_t0 {
public:
    char pad_00[48];
    bool m_bLastTickBeforeClientUpdate; // 0x30
    char pad_01[7];
}; // size: 0x38

/// EventClientPostSimulate_t
class __declspec(align(1)) EventClientPostSimulate_t0 {
public:
    char pad_00[48];
}; // size: 0x30

/// EventClientPauseSimulate_t
class __declspec(align(1)) EventClientPauseSimulate_t0 {
public:
    char pad_00[48];
}; // size: 0x30

/// EventPostDataUpdate_t
class __declspec(align(4)) EventPostDataUpdate_t0 {
public:
    int32_t m_nCount; // 0x0
    char pad_00[12];
}; // size: 0x10

/// EventPreDataUpdate_t
class __declspec(align(4)) EventPreDataUpdate_t0 {
public:
    int32_t m_nCount; // 0x0
    char pad_00[12];
}; // size: 0x10

/// EventAppShutdown_t
class __declspec(align(4)) EventAppShutdown_t0 {
public:
    int32_t m_nDummy0; // 0x0
}; // size: 0x4

/// CNetworkVarChainer
class __declspec(align(4)) CNetworkVarChainer0 {
public:
    char pad_00[32];
    ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x20
    char pad_01[4];
}; // size: 0x28

/// CEntityAttributeTable
class __declspec(align(1)) CEntityAttributeTable0 {
public:
    // CUtlOrderedMap< CUtlStringToken, Attribute_t > m_Attributes;
    // CUtlOrderedMap< CUtlStringToken, CUtlString > m_Names;
    char pad_00[80];
}; // size: 0x50

/// CVariantDefaultAllocator
class __declspec(align(1)) CVariantDefaultAllocator0 {
public:
    char pad_00[1];
}; // size: 0x1

/// EntOutput_t
class __declspec(align(1)) EntOutput_t0 {
public:
    char pad_00[16];
}; // size: 0x10

/// EntComponentInfo_t
class __declspec(align(8)) EntComponentInfo_t0 {
public:
    char* m_pName; // 0x0
    char* m_pCPPClassname; // 0x8
    char* m_pNetworkDataReferencedDescription; // 0x10
    char* m_pNetworkDataReferencedPtrPropDescription; // 0x18
    int32_t m_nRuntimeIndex; // 0x20
    uint32_t m_nFlags; // 0x24
    char pad_00[56];
    CEntityComponentHelper* m_pBaseClassComponentHelper; // 0x60
}; // size: 0x68

/// CEntityComponentHelper
class __declspec(align(8)) CEntityComponentHelper0 {
public:
    char pad_00[8];
    uint32_t m_flags; // 0x8
    EntComponentInfo_t* m_pInfo; // 0x10
    int32_t m_nPriority; // 0x18
    CEntityComponentHelper* m_pNext; // 0x20
}; // size: 0x28

/// EntInput_t
class __declspec(align(1)) EntInput_t0 {
public:
    char pad_00[48];
}; // size: 0x30

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

/// CEmptyEntityInstance
class __declspec(align(1)) CEmptyEntityInstance0 {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(8)) CEntityInstance {
public:
    // CUtlSymbolLarge m_iszPrivateVScripts;
    char pad_00[16];
    CEntityIdentity* m_pEntity; // 0x10
    char pad_01[24];
    CScriptComponent* m_CScriptComponent; // 0x30
}; // size: 0x38

/// CEntityIOOutput
class __declspec(align(1)) CEntityIOOutput0 {
public:
    char pad_00[24];
}; // size: 0x18

/// GameTime_t
class __declspec(align(4)) GameTime_t0 {
public:
    float m_Value; // 0x0
}; // size: 0x4

/// GameTick_t
class __declspec(align(4)) GameTick_t0 {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

#ifdef __cplusplus
#pragma warning(pop)
#endif // __cplusplus