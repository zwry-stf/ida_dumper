enum EntityDormancyType_t : uint32_t {
    ENTITY_NOT_DORMANT = 0,
    ENTITY_DORMANT = 1,
    ENTITY_SUSPENDED = 2,
};

enum EntityIOTargetType_t : uint32_t {
    ENTITY_IO_TARGET_INVALID = 4294967295,
    ENTITY_IO_TARGET_ENTITYNAME = 2,
    ENTITY_IO_TARGET_EHANDLE = 6,
    ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME = 7,
};

class CEntityIdentity;


class EngineLoopState_t {
public:
    char pad_00[24];
    int32_t m_nPlatWindowWidth;
    int32_t m_nPlatWindowHeight;
    int32_t m_nRenderWidth;
    int32_t m_nRenderHeight;
};

class CEntityComponent {
public:
    char pad_00[8];
};

class CScriptComponent : public CEntityComponent {
public:
    // CUtlSymbolLarge m_scriptClassName;
    char pad_01[56];
};

class ChangeAccessorFieldPathIndex_t {
public:
    int32_t m_Value;
};

class EventModInitialized_t {
public:
    char pad_00[1];
};

class EventFrameBoundary_t {
public:
    float m_flFrameTime;
};

class EventProfileStorageAvailable_t {
public:
    // CSplitScreenSlot m_nSplitScreenSlot;
    char pad_00[4];
};

class EventSplitScreenStateChanged_t {
public:
    char pad_00[1];
};

class EventSetTime_t {
public:
    EngineLoopState_t m_LoopState;
    int32_t m_nClientOutputFrames;
    // float64 m_flRealTime;
    // float64 m_flRenderTime;
    // float64 m_flRenderFrameTime;
    // float64 m_flRenderFrameTimeUnbounded;
    // float64 m_flRenderFrameTimeUnscaled;
    // float64 m_flTickRemainder;
    char pad_00[52];
};

class EventClientPollInput_t {
public:
    EngineLoopState_t m_LoopState;
    float m_flRealTime;
    char pad_00[4];
};

class EventClientProcessInput_t {
public:
    EngineLoopState_t m_LoopState;
    float m_flRealTime;
    float m_flTickInterval;
    // float64 m_flTickStartTime;
    char pad_00[8];
};

class EventClientProcessGameInput_t {
public:
    EngineLoopState_t m_LoopState;
    float m_flRealTime;
    float m_flFrameTime;
};

class EventClientPreOutput_t {
public:
    EngineLoopState_t m_LoopState;
    // float64 m_flRenderTime;
    // float64 m_flRenderFrameTime;
    // float64 m_flRenderFrameTimeUnbounded;
    char pad_00[24];
    float m_flRealTime;
    bool m_bRenderOnly;
    char pad_01[3];
};

class EventClientPreOutputParallelWithServer_t {
public:
    char pad_00[72];
};

class EventClientSceneSystemThreadStateChange_t {
public:
    bool m_bThreadsActive;
};

class EventClientOutput_t {
public:
    EngineLoopState_t m_LoopState;
    float m_flRenderTime;
    float m_flRealTime;
    float m_flRenderFrameTimeUnbounded;
    bool m_bRenderOnly;
    char pad_00[3];
};

class EventClientPostOutput_t {
public:
    EngineLoopState_t m_LoopState;
    // float64 m_flRenderTime;
    char pad_00[8];
    float m_flRenderFrameTime;
    float m_flRenderFrameTimeUnbounded;
    bool m_bRenderOnly;
    char pad_01[7];
};

class EventClientAdvanceNonRenderedFrame_t {
public:
    char pad_00[1];
};

class EventClientFrameSimulate_t {
public:
    EngineLoopState_t m_LoopState;
    float m_flRealTime;
    float m_flFrameTime;
    bool m_bScheduleSendTickPacket;
    char pad_00[7];
};

class EventSimpleLoopFrameUpdate_t {
public:
    EngineLoopState_t m_LoopState;
    float m_flRealTime;
    float m_flFrameTime;
};

class EventSimulate_t {
public:
    EngineLoopState_t m_LoopState;
    bool m_bFirstTick;
    bool m_bLastTick;
    char pad_00[6];
};

class EventAdvanceTick_t {
public:
    char pad_00[48];
    int32_t m_nCurrentTick;
    int32_t m_nCurrentTickThisFrame;
    int32_t m_nTotalTicksThisFrame;
    int32_t m_nTotalTicks;
};

class EventPostAdvanceTick_t {
public:
    char pad_00[48];
    int32_t m_nCurrentTick;
    int32_t m_nCurrentTickThisFrame;
    int32_t m_nTotalTicksThisFrame;
    int32_t m_nTotalTicks;
};

class EventServerAdvanceTick_t {
public:
    char pad_00[64];
};

class EventServerPostAdvanceTick_t {
public:
    char pad_00[64];
    bool m_bLastTickBeforeClientUpdate;
    char pad_01[7];
};

class EventServerBeginAsyncPostTickWork_t {
public:
    bool m_bIsOncePerFrameAsyncWorkPhase;
};

class EventServerEndAsyncPostTickWork_t {
public:
    char pad_00[1];
};

class EventClientAdvanceTick_t {
public:
    char pad_00[64];
};

class EventClientPostAdvanceTick_t {
public:
    char pad_00[64];
};

class EventClientPollNetworking_t {
public:
    int32_t m_nTickCount;
};

class EventClientProcessNetworking_t {
public:
    int32_t m_nTickCount;
};

class EventClientPreSimulate_t {
public:
    char pad_00[48];
};

class EventClientSimulate_t {
public:
    char pad_00[48];
};

class EventServerPollNetworking_t {
public:
    char pad_00[48];
};

class EventServerProcessNetworking_t {
public:
    char pad_00[48];
};

class EventServerBeginSimulate_t {
public:
    char pad_00[48];
};

class EventServerEndSimulate_t {
public:
    bool m_bLastTick;
};

class EventServerPostSimulate_t {
public:
    char pad_00[48];
    bool m_bLastTickBeforeClientUpdate;
    char pad_01[7];
};

class EventClientPostSimulate_t {
public:
    char pad_00[48];
};

class EventClientPauseSimulate_t {
public:
    char pad_00[48];
};

class EventPostDataUpdate_t {
public:
    int32_t m_nCount;
    char pad_00[12];
};

class EventPreDataUpdate_t {
public:
    int32_t m_nCount;
    char pad_00[12];
};

class EventAppShutdown_t {
public:
    int32_t m_nDummy0;
};

class CNetworkVarChainer {
public:
    char pad_00[32];
    ChangeAccessorFieldPathIndex_t m_PathIndex;
    char pad_01[4];
};

class CEntityAttributeTable {
public:
    // CUtlOrderedMap< CUtlStringToken, Attribute_t > m_Attributes;
    // CUtlOrderedMap< CUtlStringToken, CUtlString > m_Names;
    char pad_00[80];
};

class CVariantDefaultAllocator {
public:
    char pad_00[1];
};

class EntOutput_t {
public:
    char pad_00[16];
};

class EntComponentInfo_t {
public:
    char* m_pName;
    char* m_pCPPClassname;
    char* m_pNetworkDataReferencedDescription;
    char* m_pNetworkDataReferencedPtrPropDescription;
    int32_t m_nRuntimeIndex;
    uint32_t m_nFlags;
    char pad_00[56];
    CEntityComponentHelper* m_pBaseClassComponentHelper;
};

class CEntityComponentHelper {
public:
    char pad_00[8];
    uint32_t m_flags;
    EntComponentInfo_t* m_pInfo;
    int32_t m_nPriority;
    CEntityComponentHelper* m_pNext;
};

class EntInput_t {
public:
    char pad_00[48];
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

class CEmptyEntityInstance {
public:
    char pad_00[1];
};

class CEntityInstance {
public:
    // CUtlSymbolLarge m_iszPrivateVScripts;
    char pad_00[16];
    CEntityIdentity* m_pEntity;
    char pad_01[24];
    CScriptComponent* m_CScriptComponent;
};

class CEntityIOOutput {
public:
    char pad_00[24];
};

class GameTime_t {
public:
    float m_Value;
};

class GameTick_t {
public:
    int32_t m_Value;
};

