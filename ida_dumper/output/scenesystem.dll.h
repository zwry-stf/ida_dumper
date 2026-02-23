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


/// DecalRtEncoding_t
_enum DecalRtEncoding_t0 : uint8_t {
    kDecalInvalid = 255,
    kDecalMin = 0,
    kDecalBlood = 0,
    kDecalCloak = 1,
    kDecalMax = 2,
    kDecalDefault = 0,
};

/// DisableShadows_t
_enum DisableShadows_t0 : uint8_t {
    kDisableShadows_None = 0,
    kDisableShadows_All = 1,
    kDisableShadows_Baked = 2,
    kDisableShadows_Realtime = 3,
};

/// ESilhouetteType_t
_enum ESilhouetteType_t0 : uint32_t {
    SILHOUETTE_NONE = 0,
    SILHOUETTE_LIGHT = 1,
    SILHOUETTE_ENVMAP = 2,
    SILHOUETTE_LPV = 4,
};

/// ESceneObjectVisualization
_enum ESceneObjectVisualization0 : uint32_t {
    SCENEOBJECT_VIS_NONE = 0,
    SCENEOBJECT_VIS_OBJECT = 1,
    SCENEOBJECT_VIS_MATERIAL = 2,
    SCENEOBJECT_VIS_TEXTURE_SIZE = 3,
    SCENEOBJECT_VIS_LOD = 4,
    SCENEOBJECT_VIS_INSTANCING = 5,
};

/// CSSDSEndFrameViewInfo
class __declspec(align(8)) CSSDSEndFrameViewInfo0 {
public:
    uint64_t m_nViewId; // 0x0
    // CUtlString m_ViewName;
    char pad_00[8];
}; // size: 0x10

/// CSSDSMsg_EndFrame
class __declspec(align(8)) CSSDSMsg_EndFrame0 {
public:
    // CUtlVector< CSSDSEndFrameViewInfo > m_Views;
    char pad_00[24];
}; // size: 0x18

/// SceneViewId_t
class __declspec(align(8)) SceneViewId_t0 {
public:
    uint64_t m_nViewId; // 0x0
    uint64_t m_nFrameCount; // 0x8
}; // size: 0x10

/// CSSDSMsg_ViewRender
class __declspec(align(8)) CSSDSMsg_ViewRender0 {
public:
    SceneViewId_t m_viewId; // 0x0
    // CUtlString m_ViewName;
    char pad_00[8];
}; // size: 0x18

/// CSSDSMsg_LayerBase
class __declspec(align(8)) CSSDSMsg_LayerBase0 {
public:
    SceneViewId_t m_viewId; // 0x0
    // CUtlString m_ViewName;
    char pad_00[8];
    uint64_t m_nLayerId; // 0x18
    // CUtlString m_LayerName;
    // CUtlString m_displayText;
    char pad_01[16];
}; // size: 0x30

/// CSSDSMsg_ViewTarget
class __declspec(align(8)) CSSDSMsg_ViewTarget0 {
public:
    // CUtlString m_Name;
    char pad_00[8];
    uint64_t m_TextureId; // 0x8
    int32_t m_nWidth; // 0x10
    int32_t m_nHeight; // 0x14
    int32_t m_nRequestedWidth; // 0x18
    int32_t m_nRequestedHeight; // 0x1c
    int32_t m_nNumMipLevels; // 0x20
    int32_t m_nDepth; // 0x24
    int32_t m_nMultisampleNumSamples; // 0x28
    int32_t m_nFormat; // 0x2c
}; // size: 0x30

/// CSSDSMsg_ViewTargetList
class __declspec(align(8)) CSSDSMsg_ViewTargetList0 {
public:
    SceneViewId_t m_viewId; // 0x0
    // CUtlString m_ViewName;
    // CUtlVector< CSSDSMsg_ViewTarget > m_Targets;
    char pad_00[32];
}; // size: 0x30

/// CSSDSMsg_PreLayer
class __declspec(align(8)) CSSDSMsg_PreLayer0 {
public:
    char pad_00[48];
}; // size: 0x30

/// CSSDSMsg_PostLayer
class __declspec(align(8)) CSSDSMsg_PostLayer0 {
public:
    char pad_00[48];
}; // size: 0x30

#ifdef __cplusplus
#pragma warning(pop)
#endif // __cplusplus