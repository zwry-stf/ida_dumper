enum DecalRtEncoding_t : uint8_t {
    kDecalInvalid = 255,
    kDecalMin = 0,
    kDecalBlood = 0,
    kDecalCloak = 1,
    kDecalMax = 2,
    kDecalDefault = 0,
};

enum DisableShadows_t : uint8_t {
    kDisableShadows_None = 0,
    kDisableShadows_All = 1,
    kDisableShadows_Baked = 2,
    kDisableShadows_Realtime = 3,
};

enum ESilhouetteType_t : uint32_t {
    SILHOUETTE_NONE = 0,
    SILHOUETTE_LIGHT = 1,
    SILHOUETTE_ENVMAP = 2,
    SILHOUETTE_LPV = 4,
};

enum ESceneObjectVisualization : uint32_t {
    SCENEOBJECT_VIS_NONE = 0,
    SCENEOBJECT_VIS_OBJECT = 1,
    SCENEOBJECT_VIS_MATERIAL = 2,
    SCENEOBJECT_VIS_TEXTURE_SIZE = 3,
    SCENEOBJECT_VIS_LOD = 4,
    SCENEOBJECT_VIS_INSTANCING = 5,
};

class CSSDSEndFrameViewInfo {
public:
    uint64_t m_nViewId;
    // CUtlString m_ViewName;
    char pad_00[8];
};

class CSSDSMsg_EndFrame {
public:
    // CUtlVector< CSSDSEndFrameViewInfo > m_Views;
    char pad_00[24];
};

class SceneViewId_t {
public:
    uint64_t m_nViewId;
    uint64_t m_nFrameCount;
};

class CSSDSMsg_ViewRender {
public:
    SceneViewId_t m_viewId;
    // CUtlString m_ViewName;
    char pad_00[8];
};

class CSSDSMsg_LayerBase {
public:
    SceneViewId_t m_viewId;
    // CUtlString m_ViewName;
    char pad_00[8];
    uint64_t m_nLayerId;
    // CUtlString m_LayerName;
    // CUtlString m_displayText;
    char pad_01[16];
};

class CSSDSMsg_ViewTarget {
public:
    // CUtlString m_Name;
    char pad_00[8];
    uint64_t m_TextureId;
    int32_t m_nWidth;
    int32_t m_nHeight;
    int32_t m_nRequestedWidth;
    int32_t m_nRequestedHeight;
    int32_t m_nNumMipLevels;
    int32_t m_nDepth;
    int32_t m_nMultisampleNumSamples;
    int32_t m_nFormat;
};

class CSSDSMsg_ViewTargetList {
public:
    SceneViewId_t m_viewId;
    // CUtlString m_ViewName;
    // CUtlVector< CSSDSMsg_ViewTarget > m_Targets;
    char pad_00[32];
};

class CSSDSMsg_PreLayer {
public:
    char pad_00[48];
};

class CSSDSMsg_PostLayer {
public:
    char pad_00[48];
};

