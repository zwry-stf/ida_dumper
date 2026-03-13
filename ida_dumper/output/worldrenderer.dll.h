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


/// ObjectTypeFlags_t
_enum ObjectTypeFlags_t0 : uint32_t {
    OBJECT_TYPE_NONE = 0,
    OBJECT_TYPE_MODEL = 8,
    OBJECT_TYPE_BLOCK_LIGHT = 16,
    OBJECT_TYPE_NO_SHADOWS = 32,
    OBJECT_TYPE_WORLDSPACE_TEXURE_BLEND = 64,
    OBJECT_TYPE_DISABLED_IN_LOW_QUALITY = 128,
    OBJECT_TYPE_NO_SUN_SHADOWS = 256,
    OBJECT_TYPE_RENDER_WITH_DYNAMIC = 512,
    OBJECT_TYPE_RENDER_TO_CUBEMAPS = 1024,
    OBJECT_TYPE_MODEL_HAS_LODS = 2048,
    OBJECT_TYPE_OVERLAY = 8192,
    OBJECT_TYPE_PRECOMPUTED_VISMEMBERS = 16384,
    OBJECT_TYPE_STATIC_CUBE_MAP = 32768,
    OBJECT_TYPE_DISABLE_VIS_CULLING = 65536,
    OBJECT_TYPE_BAKED_GEOMETRY = 131072,
};

/// AggregateInstanceStream_t
_enum AggregateInstanceStream_t0 : uint8_t {
    AGGREGATE_INSTANCE_STREAM_NONE = 0,
    AGGREGATE_INSTANCE_STREAM_LIGHTMAPUV_UNORM16 = 1,
    AGGREGATE_INSTANCE_STREAM_VERTEXTINT_UNORM8 = 2,
    AGGREGATE_INSTANCE_STREAM_VERTEXBLEND_UNORM8 = 4,
};

/// RTProxyInstanceFlags_t
_enum RTProxyInstanceFlags_t0 : uint8_t {
    RTPROXY_INSTANCE_FLAG_NONE = 0,
    RTPROXY_INSTANCE_UNIQUE_MESH = 1,
};

class CEntityIdentity;


class __declspec(align(1)) CEntityComponent {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(1)) CScriptComponent : public CEntityComponent {
public:
    // CUtlSymbolLarge m_scriptClassName;
    char pad_01[40];
    char m_scriptClassName[1]; // 0x30
    char pad_02[7];
}; // size: 0x38

/// EntityIOConnectionData_t
class __declspec(align(8)) EntityIOConnectionData_t0 {
public:
    // CUtlString m_outputName;
    char m_outputName[1]; // 0x0
    char pad_00[4];
    uint32_t m_targetType; // 0x8
    // CUtlString m_targetName;
    char pad_01[4];
    char m_targetName[1]; // 0x10
    // CUtlString m_inputName;
    char pad_02[7];
    char m_inputName[1]; // 0x18
    // CUtlString m_overrideParam;
    char pad_03[7];
    char m_overrideParam[1]; // 0x20
    char pad_04[4];
    float m_flDelay; // 0x28
    int32_t m_nTimesToFire; // 0x2c
    // KeyValues3 m_paramMap;
    char m_paramMap[1]; // 0x30
    char pad_05[15];
}; // size: 0x40

/// EntityKeyValueData_t
class __declspec(align(8)) EntityKeyValueData_t0 {
public:
    // CUtlVector< EntityIOConnectionData_t > m_connections;
    char pad_00[8];
    char m_connections[1]; // 0x8
    // CUtlBinaryBlock m_keyValuesData;
    char pad_01[23];
    char m_keyValuesData[1]; // 0x20
    char pad_02[23];
}; // size: 0x38

/// PermEntityLumpData_t
class __declspec(align(8)) PermEntityLumpData_t0 {
public:
    // CUtlString m_name;
    char pad_00[8];
    char m_name[1]; // 0x8
    // CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_childLumps;
    char pad_01[7];
    char m_childLumps[1]; // 0x10
    // CUtlLeanVector< EntityKeyValueData_t > m_entityKeyValues;
    char pad_02[23];
    char m_entityKeyValues[1]; // 0x28
    char pad_03[15];
}; // size: 0x38

/// SceneObject_t
class __declspec(align(8)) SceneObject_t0 {
public:
    uint32_t m_nObjectID; // 0x0
    Vector4D m_vTransform; // 0x4
    char pad_00[32];
    float m_flFadeStartDistance; // 0x34
    float m_flFadeEndDistance; // 0x38
    Vector4D m_vTintColor; // 0x3c
    // CUtlString m_skin;
    char pad_01[4];
    char m_skin[1]; // 0x50
    char pad_02[4];
    ObjectTypeFlags_t m_nObjectTypeFlags; // 0x58
    Vector m_vLightingOrigin; // 0x5c
    int16_t m_nOverlayRenderOrder; // 0x68
    int16_t m_nLODOverride; // 0x6a
    int32_t m_nCubeMapPrecomputedHandshake; // 0x6c
    int32_t m_nLightProbeVolumePrecomputedHandshake; // 0x70
    // CStrongHandle< InfoForResourceTypeCModel > m_renderableModel;
    char pad_03[4];
    char m_renderableModel[1]; // 0x78
    // CStrongHandle< InfoForResourceTypeCRenderMesh > m_renderable;
    char pad_04[7];
    char m_renderable[1]; // 0x80
    char pad_05[7];
}; // size: 0x88

/// BaseSceneObjectOverride_t
class __declspec(align(4)) BaseSceneObjectOverride_t0 {
public:
    uint32_t m_nSceneObjectIndex; // 0x0
}; // size: 0x4

/// ExtraVertexStreamOverride_t
class __declspec(align(8)) ExtraVertexStreamOverride_t0 {
public:
    char pad_00[4];
    uint32_t m_nSubSceneObject; // 0x4
    uint32_t m_nDrawCallIndex; // 0x8
    MeshDrawPrimitiveFlags_t m_nAdditionalMeshDrawPrimitiveFlags; // 0xc
    CRenderBufferBinding m_extraBufferBinding; // 0x10
}; // size: 0x30

/// MaterialOverride_t
class __declspec(align(8)) MaterialOverride_t0 {
public:
    char pad_00[4];
    uint32_t m_nSubSceneObject; // 0x4
    uint32_t m_nDrawCallIndex; // 0x8
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_pMaterial;
    char pad_01[4];
    char m_pMaterial[1]; // 0x10
    char pad_02[4];
    Vector m_vLinearTintColor; // 0x18
    char pad_03[4];
}; // size: 0x28

/// BakedLightingInfo_t
class __declspec(align(8)) BakedLightingInfo_t0 {
public:
    uint32_t m_nLightmapVersionNumber; // 0x0
    uint32_t m_nLightmapGameVersionNumber; // 0x4
    Vector2D m_vLightmapUvScale; // 0x8
    bool m_bHasLightmaps; // 0x10
    bool m_bBakedShadowsGamma20; // 0x11
    bool m_bCompressionEnabled; // 0x12
    bool m_bSHLightmaps; // 0x13
    uint8_t m_nChartPackIterations; // 0x14
    uint8_t m_nVradQuality; // 0x15
    // CUtlVector< CStrongHandle< InfoForResourceTypeCTextureBase > > m_lightMaps;
    char pad_00[2];
    char m_lightMaps[1]; // 0x18
    // CUtlVector< BakedLightingInfo_t::BakedShadowAssignment_t > m_bakedShadows;
    char pad_01[23];
    char m_bakedShadows[1]; // 0x30
    char pad_02[23];
}; // size: 0x48

/// BakedLightingInfo_t::BakedShadowAssignment_t
class __declspec(align(4)) BakedLightingInfo_t__BakedShadowAssignment_t0 {
public:
    uint32_t m_nLightHash; // 0x0
    uint32_t m_nMapHash; // 0x4
    int8_t m_nShadowChannel; // 0x8
    char pad_00[3];
}; // size: 0xc

/// WorldNodeOnDiskBufferData_t
class __declspec(align(8)) WorldNodeOnDiskBufferData_t0 {
public:
    int32_t m_nElementCount; // 0x0
    int32_t m_nElementSizeInBytes; // 0x4
    // CUtlVector< RenderInputLayoutField_t > m_inputLayoutFields;
    char m_inputLayoutFields[1]; // 0x8
    // CUtlVector< uint8 > m_pData;
    char pad_00[23];
    char m_pData[1]; // 0x20
    char pad_01[23];
}; // size: 0x38

/// AggregateInstanceStreamOnDiskData_t
class __declspec(align(8)) AggregateInstanceStreamOnDiskData_t0 {
public:
    uint32_t m_DecodedSize; // 0x0
    // CUtlBinaryBlock m_BufferData;
    char pad_00[4];
    char m_BufferData[1]; // 0x8
    char pad_01[15];
}; // size: 0x18

/// AggregateVertexAlbedoStreamOnDiskData_t
class __declspec(align(8)) AggregateVertexAlbedoStreamOnDiskData_t0 {
public:
    // CUtlBinaryBlock m_BufferData;
    char m_BufferData[1]; // 0x0
    char pad_00[15];
}; // size: 0x10

/// AggregateMeshInfo_t
class __declspec(align(4)) AggregateMeshInfo_t0 {
public:
    uint32_t m_nVisClusterMemberOffset; // 0x0
    uint8_t m_nVisClusterMemberCount; // 0x4
    bool m_bHasTransform; // 0x5
    uint8_t m_nLODGroupMask; // 0x6
    int16_t m_nDrawCallIndex; // 0x8
    int16_t m_nLODSetupIndex; // 0xa
    // Color m_vTintColor;
    char m_vTintColor[1]; // 0xc
    ObjectTypeFlags_t m_objectFlags; // 0x10
    int32_t m_nLightProbeVolumePrecomputedHandshake; // 0x14
    uint32_t m_nInstanceStreamOffset; // 0x18
    uint32_t m_nVertexAlbedoStreamOffset; // 0x1c
    AggregateInstanceStream_t m_instanceStreams; // 0x20
    char pad_00[3];
}; // size: 0x24

/// AggregateLODSetup_t
class __declspec(align(8)) AggregateLODSetup_t0 {
public:
    Vector m_vLODOrigin; // 0x0
    float m_fMaxObjectScale; // 0xc
    // CUtlVector< float32 > m_fSwitchDistances;
    char m_fSwitchDistances[1]; // 0x10
    char pad_00[23];
}; // size: 0x28

/// AggregateSceneObject_t
class __declspec(align(8)) AggregateSceneObject_t0 {
public:
    ObjectTypeFlags_t m_allFlags; // 0x0
    ObjectTypeFlags_t m_anyFlags; // 0x4
    int16_t m_nLayer; // 0x8
    int16_t m_instanceStream; // 0xa
    int16_t m_vertexAlbedoStream; // 0xc
    // CUtlVector< AggregateMeshInfo_t > m_aggregateMeshes;
    char pad_00[2];
    char m_aggregateMeshes[1]; // 0x10
    // CUtlVector< AggregateLODSetup_t > m_lodSetups;
    char pad_01[23];
    char m_lodSetups[1]; // 0x28
    // CUtlVector< uint16 > m_visClusterMembership;
    char pad_02[23];
    char m_visClusterMembership[1]; // 0x40
    // CUtlVector< matrix3x4_t > m_fragmentTransforms;
    char pad_03[23];
    char m_fragmentTransforms[1]; // 0x58
    // CStrongHandle< InfoForResourceTypeCModel > m_renderableModel;
    char pad_04[23];
    char m_renderableModel[1]; // 0x70
    char pad_05[7];
}; // size: 0x78

/// RTProxyBLAS_t
class __declspec(align(4)) RTProxyBLAS_t0 {
public:
    uint32_t m_nFirstIndex; // 0x0
    uint32_t m_nIndexCount; // 0x4
    uint32_t m_nVBByteOffset; // 0x8
    uint32_t m_nBaseVertex; // 0xc
    uint16_t m_nVertexCount; // 0x10
    VertexAlbedoFormat_t m_albedoFormat; // 0x12
    char pad_00[1];
    AABB_t m_boundLs; // 0x14
    Vector m_vVertexOriginLs; // 0x2c
    Vector m_vVertexExtentLs; // 0x38
}; // size: 0x44

/// RTProxyInstanceInfo_t
class __declspec(align(4)) RTProxyInstanceInfo_t0 {
public:
    RTProxyInstanceFlags_t m_nFlags; // 0x0
    VertexAlbedoFormat_t m_albedoFormat; // 0x1
    uint16_t m_nBLASCount; // 0x2
    uint32_t m_nBLASIndex; // 0x4
    uint32_t m_nVertexAlbedoByteOffset; // 0x8
    // matrix3x4_t m_mWorldFromLocal;
    char m_mWorldFromLocal[1]; // 0xc
    char pad_00[47];
}; // size: 0x3c

/// AggregateRTProxySceneObject_t
class __declspec(align(8)) AggregateRTProxySceneObject_t0 {
public:
    int16_t m_nLayer; // 0x0
    // CUtlVector< RTProxyBLAS_t > m_BLASes;
    char pad_00[6];
    char m_BLASes[1]; // 0x8
    // CUtlVector< RTProxyInstanceInfo_t > m_Instances;
    char pad_01[23];
    char m_Instances[1]; // 0x20
    // CUtlBinaryBlock m_VBData;
    char pad_02[23];
    char m_VBData[1]; // 0x38
    // CUtlBinaryBlock m_IBData;
    char pad_03[15];
    char m_IBData[1]; // 0x48
    // CUtlBinaryBlock m_InstanceAlbedoData;
    char pad_04[15];
    char m_InstanceAlbedoData[1]; // 0x58
    char pad_05[15];
}; // size: 0x68

/// ClutterTile_t
class __declspec(align(4)) ClutterTile_t0 {
public:
    uint32_t m_nFirstInstance; // 0x0
    uint32_t m_nLastInstance; // 0x4
    AABB_t m_BoundsWs; // 0x8
}; // size: 0x20

/// ClutterSceneObject_t
class __declspec(align(8)) ClutterSceneObject_t0 {
public:
    AABB_t m_Bounds; // 0x0
    ObjectTypeFlags_t m_flags; // 0x18
    int16_t m_nLayer; // 0x1c
    // CUtlVector< Vector > m_instancePositions;
    char pad_00[2];
    char m_instancePositions[1]; // 0x20
    // CUtlVector< float32 > m_instanceScales;
    char pad_01[47];
    char m_instanceScales[1]; // 0x50
    // CUtlVector< Color > m_instanceTintSrgb;
    char pad_02[23];
    char m_instanceTintSrgb[1]; // 0x68
    // CUtlVector< ClutterTile_t > m_tiles;
    char pad_03[23];
    char m_tiles[1]; // 0x80
    // CStrongHandle< InfoForResourceTypeCModel > m_renderableModel;
    char pad_04[23];
    char m_renderableModel[1]; // 0x98
    // CUtlStringToken m_materialGroup;
    char pad_05[7];
    char m_materialGroup[1]; // 0xa0
    float m_flBeginCullSize; // 0xa4
    float m_flEndCullSize; // 0xa8
    char pad_06[4];
}; // size: 0xb0

/// WorldNode_t
class __declspec(align(8)) WorldNode_t0 {
public:
    // CUtlVector< SceneObject_t > m_sceneObjects;
    char m_sceneObjects[1]; // 0x0
    // CUtlVector< uint16 > m_visClusterMembership;
    char pad_00[23];
    char m_visClusterMembership[1]; // 0x18
    // CUtlVector< AggregateSceneObject_t > m_aggregateSceneObjects;
    char pad_01[23];
    char m_aggregateSceneObjects[1]; // 0x30
    // CUtlVector< ClutterSceneObject_t > m_clutterSceneObjects;
    char pad_02[23];
    char m_clutterSceneObjects[1]; // 0x48
    // CUtlVector< AggregateRTProxySceneObject_t > m_rtProxies;
    char pad_03[23];
    char m_rtProxies[1]; // 0x60
    // CUtlVector< ExtraVertexStreamOverride_t > m_extraVertexStreamOverrides;
    char pad_04[23];
    char m_extraVertexStreamOverrides[1]; // 0x78
    // CUtlVector< MaterialOverride_t > m_materialOverrides;
    char pad_05[23];
    char m_materialOverrides[1]; // 0x90
    // CUtlVector< WorldNodeOnDiskBufferData_t > m_extraVertexStreams;
    char pad_06[23];
    char m_extraVertexStreams[1]; // 0xa8
    // CUtlVector< AggregateInstanceStreamOnDiskData_t > m_aggregateInstanceStreams;
    char pad_07[23];
    char m_aggregateInstanceStreams[1]; // 0xc0
    // CUtlVector< AggregateVertexAlbedoStreamOnDiskData_t > m_vertexAlbedoStreams;
    char pad_08[23];
    char m_vertexAlbedoStreams[1]; // 0xd8
    // CUtlVector< CUtlString > m_layerNames;
    char pad_09[23];
    char m_layerNames[1]; // 0xf0
    // CUtlVector< uint8 > m_sceneObjectLayerIndices;
    char pad_10[23];
    char m_sceneObjectLayerIndices[1]; // 0x108
    // CUtlString m_grassFileName;
    char pad_11[23];
    char m_grassFileName[1]; // 0x120
    BakedLightingInfo_t m_nodeLightingInfo; // 0x128
    bool m_bHasBakedGeometryFlag; // 0x170
    char pad_012[7];
}; // size: 0x178

/// WorldBuilderParams_t
class __declspec(align(8)) WorldBuilderParams_t0 {
public:
    float m_flMinDrawVolumeSize; // 0x0
    bool m_bBuildBakedLighting; // 0x4
    bool m_bAggregateInstanceStreams; // 0x5
    BakedLightingInfo_t m_bakedLightingInfo; // 0x8
    uint64_t m_nCompileTimestamp; // 0x50
    uint64_t m_nCompileFingerprint; // 0x58
}; // size: 0x60

/// NodeData_t
class __declspec(align(8)) NodeData_t0 {
public:
    int32_t m_nParent; // 0x0
    Vector m_vOrigin; // 0x4
    Vector m_vMinBounds; // 0x10
    Vector m_vMaxBounds; // 0x1c
    float m_flMinimumDistance; // 0x28
    // CUtlVector< int32 > m_ChildNodeIndices;
    char pad_00[4];
    char m_ChildNodeIndices[1]; // 0x30
    // CUtlString m_worldNodePrefix;
    char pad_01[23];
    char m_worldNodePrefix[1]; // 0x48
    char pad_02[7];
}; // size: 0x50

/// World_t
class __declspec(align(8)) World_t0 {
public:
    WorldBuilderParams_t m_builderParams; // 0x0
    // CUtlVector< NodeData_t > m_worldNodes;
    char m_worldNodes[1]; // 0x60
    char pad_00[16];
    BakedLightingInfo_t m_worldLightingInfo; // 0x78
    // CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_entityLumps;
    char m_entityLumps[1]; // 0xc0
    char pad_01[23];
}; // size: 0xd8

/// VoxelVisBlockOffset_t
class __declspec(align(4)) VoxelVisBlockOffset_t0 {
public:
    uint32_t m_nOffset; // 0x0
    uint32_t m_nElementCount; // 0x4
}; // size: 0x8

/// CVoxelVisibility
class __declspec(align(8)) CVoxelVisibility0 {
public:
    char pad_00[64];
    uint32_t m_nBaseClusterCount; // 0x40
    uint32_t m_nPVSBytesPerCluster; // 0x44
    Vector m_vMinBounds; // 0x48
    Vector m_vMaxBounds; // 0x54
    float m_flGridSize; // 0x60
    uint32_t m_nSkyVisibilityCluster; // 0x64
    uint32_t m_nSunVisibilityCluster; // 0x68
    VoxelVisBlockOffset_t m_NodeBlock; // 0x6c
    VoxelVisBlockOffset_t m_RegionBlock; // 0x74
    VoxelVisBlockOffset_t m_EnclosedClusterListBlock; // 0x7c
    VoxelVisBlockOffset_t m_EnclosedClustersBlock; // 0x84
    VoxelVisBlockOffset_t m_MasksBlock; // 0x8c
    VoxelVisBlockOffset_t m_nVisBlocks; // 0x94
    char pad_01[4];
}; // size: 0xa0

/// VMapResourceData_t
class __declspec(align(1)) VMapResourceData_t0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeVMapResourceData_t
class __declspec(align(1)) InfoForResourceTypeVMapResourceData_t0 {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(8)) CEntityIdentity {
public:
    char pad_00[20];
    int32_t m_nameStringableIndex; // 0x14
    // CUtlSymbolLarge m_name;
    char m_name[1]; // 0x18
    // CUtlSymbolLarge m_designerName;
    char pad_01[7];
    char m_designerName[1]; // 0x20
    char pad_02[12];
    uint32_t m_flags; // 0x30
    // WorldGroupId_t m_worldGroupId;
    char pad_03[4];
    char m_worldGroupId[1]; // 0x38
    uint32_t m_fDataObjectTypes; // 0x3c
    ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x40
    CEntityAttributeTable* m_pAttributes; // 0x48
    CEntityIdentity* m_pPrev; // 0x50
    CEntityIdentity* m_pNext; // 0x58
    CEntityIdentity* m_pPrevByClass; // 0x60
    CEntityIdentity* m_pNextByClass; // 0x68
}; // size: 0x70

class __declspec(align(8)) CEntityInstance {
public:
    // CUtlSymbolLarge m_iszPrivateVScripts;
    char pad_00[8];
    char m_iszPrivateVScripts[1]; // 0x8
    CEntityIdentity* m_pEntity; // 0x10
    char pad_01[24];
    CScriptComponent* m_CScriptComponent; // 0x30
}; // size: 0x38

#ifdef __cplusplus
#pragma warning(pop)
#endif // __cplusplus