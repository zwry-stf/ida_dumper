enum ObjectTypeFlags_t : uint32_t {
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

enum AggregateInstanceStream_t : uint8_t {
    AGGREGATE_INSTANCE_STREAM_NONE = 0,
    AGGREGATE_INSTANCE_STREAM_LIGHTMAPUV_UNORM16 = 1,
    AGGREGATE_INSTANCE_STREAM_VERTEXTINT_UNORM8 = 2,
    AGGREGATE_INSTANCE_STREAM_VERTEXBLEND_UNORM8 = 4,
};

enum RTProxyInstanceFlags_t : uint8_t {
    RTPROXY_INSTANCE_FLAG_NONE = 0,
    RTPROXY_INSTANCE_UNIQUE_MESH = 1,
};

class CEntityIdentity;


class CEntityComponent {
public:
    char pad_00[8];
};

class CScriptComponent : public CEntityComponent {
public:
    // CUtlSymbolLarge m_scriptClassName;
    char pad_01[56];
};

class EntityIOConnectionData_t {
public:
    // CUtlString m_outputName;
    char pad_00[8];
    uint32_t m_targetType;
    // CUtlString m_targetName;
    // CUtlString m_inputName;
    // CUtlString m_overrideParam;
    char pad_01[28];
    float m_flDelay;
    int32_t m_nTimesToFire;
    // KeyValues3 m_paramMap;
    char pad_02[16];
};

class EntityKeyValueData_t {
public:
    // CUtlVector< EntityIOConnectionData_t > m_connections;
    // CUtlBinaryBlock m_keyValuesData;
    char pad_00[56];
};

class PermEntityLumpData_t {
public:
    // CUtlString m_name;
    // CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_childLumps;
    // CUtlLeanVector< EntityKeyValueData_t > m_entityKeyValues;
    char pad_00[56];
};

class SceneObject_t {
public:
    uint32_t m_nObjectID;
    // Vector4D[3] m_vTransform;
    char pad_00[48];
    float m_flFadeStartDistance;
    float m_flFadeEndDistance;
    // Vector4D m_vTintColor;
    // CUtlString m_skin;
    char pad_01[28];
    ObjectTypeFlags_t m_nObjectTypeFlags;
    // Vector m_vLightingOrigin;
    char pad_02[12];
    int16_t m_nOverlayRenderOrder;
    int16_t m_nLODOverride;
    int32_t m_nCubeMapPrecomputedHandshake;
    int32_t m_nLightProbeVolumePrecomputedHandshake;
    // CStrongHandle< InfoForResourceTypeCModel > m_renderableModel;
    // CStrongHandle< InfoForResourceTypeCRenderMesh > m_renderable;
    char pad_03[20];
};

class BaseSceneObjectOverride_t {
public:
    uint32_t m_nSceneObjectIndex;
};

class ExtraVertexStreamOverride_t {
public:
    char pad_00[4];
    uint32_t m_nSubSceneObject;
    uint32_t m_nDrawCallIndex;
    MeshDrawPrimitiveFlags_t m_nAdditionalMeshDrawPrimitiveFlags;
    CRenderBufferBinding m_extraBufferBinding;
};

class MaterialOverride_t {
public:
    char pad_00[4];
    uint32_t m_nSubSceneObject;
    uint32_t m_nDrawCallIndex;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_pMaterial;
    // Vector m_vLinearTintColor;
    char pad_01[28];
};

class BakedLightingInfo_t {
public:
    uint32_t m_nLightmapVersionNumber;
    uint32_t m_nLightmapGameVersionNumber;
    // Vector2D m_vLightmapUvScale;
    char pad_00[8];
    bool m_bHasLightmaps;
    bool m_bBakedShadowsGamma20;
    bool m_bCompressionEnabled;
    bool m_bSHLightmaps;
    uint8_t m_nChartPackIterations;
    uint8_t m_nVradQuality;
    // CUtlVector< CStrongHandle< InfoForResourceTypeCTextureBase > > m_lightMaps;
    // CUtlVector< BakedLightingInfo_t::BakedShadowAssignment_t > m_bakedShadows;
    char pad_01[50];
};

class BakedLightingInfo_t::BakedShadowAssignment_t {
public:
    uint32_t m_nLightHash;
    uint32_t m_nMapHash;
    int8_t m_nShadowChannel;
    char pad_00[3];
};

class WorldNodeOnDiskBufferData_t {
public:
    int32_t m_nElementCount;
    int32_t m_nElementSizeInBytes;
    // CUtlVector< RenderInputLayoutField_t > m_inputLayoutFields;
    // CUtlVector< uint8 > m_pData;
    char pad_00[48];
};

class AggregateInstanceStreamOnDiskData_t {
public:
    uint32_t m_DecodedSize;
    // CUtlBinaryBlock m_BufferData;
    char pad_00[20];
};

class AggregateVertexAlbedoStreamOnDiskData_t {
public:
    // CUtlBinaryBlock m_BufferData;
    char pad_00[16];
};

class AggregateMeshInfo_t {
public:
    uint32_t m_nVisClusterMemberOffset;
    uint8_t m_nVisClusterMemberCount;
    bool m_bHasTransform;
    uint8_t m_nLODGroupMask;
    int16_t m_nDrawCallIndex;
    int16_t m_nLODSetupIndex;
    // Color m_vTintColor;
    char pad_00[4];
    ObjectTypeFlags_t m_objectFlags;
    int32_t m_nLightProbeVolumePrecomputedHandshake;
    uint32_t m_nInstanceStreamOffset;
    uint32_t m_nVertexAlbedoStreamOffset;
    AggregateInstanceStream_t m_instanceStreams;
    char pad_01[3];
};

class AggregateLODSetup_t {
public:
    // Vector m_vLODOrigin;
    char pad_00[12];
    float m_fMaxObjectScale;
    // CUtlVector< float32 > m_fSwitchDistances;
    char pad_01[24];
};

class AggregateSceneObject_t {
public:
    ObjectTypeFlags_t m_allFlags;
    ObjectTypeFlags_t m_anyFlags;
    int16_t m_nLayer;
    int16_t m_instanceStream;
    int16_t m_vertexAlbedoStream;
    // CUtlVector< AggregateMeshInfo_t > m_aggregateMeshes;
    // CUtlVector< AggregateLODSetup_t > m_lodSetups;
    // CUtlVector< uint16 > m_visClusterMembership;
    // CUtlVector< matrix3x4_t > m_fragmentTransforms;
    // CStrongHandle< InfoForResourceTypeCModel > m_renderableModel;
    char pad_00[106];
};

class RTProxyBLAS_t {
public:
    uint32_t m_nFirstIndex;
    uint32_t m_nIndexCount;
    uint32_t m_nVBByteOffset;
    uint32_t m_nBaseVertex;
    uint16_t m_nVertexCount;
    VertexAlbedoFormat_t m_albedoFormat;
    AABB_t m_boundLs;
    // Vector m_vVertexOriginLs;
    // Vector m_vVertexExtentLs;
    char pad_00[24];
};

class RTProxyInstanceInfo_t {
public:
    RTProxyInstanceFlags_t m_nFlags;
    VertexAlbedoFormat_t m_albedoFormat;
    uint16_t m_nBLASCount;
    uint32_t m_nBLASIndex;
    uint32_t m_nVertexAlbedoByteOffset;
    // matrix3x4_t m_mWorldFromLocal;
    char pad_00[48];
};

class AggregateRTProxySceneObject_t {
public:
    int16_t m_nLayer;
    // CUtlVector< RTProxyBLAS_t > m_BLASes;
    // CUtlVector< RTProxyInstanceInfo_t > m_Instances;
    // CUtlBinaryBlock m_VBData;
    // CUtlBinaryBlock m_IBData;
    // CUtlBinaryBlock m_InstanceAlbedoData;
    char pad_00[102];
};

class ClutterTile_t {
public:
    uint32_t m_nFirstInstance;
    uint32_t m_nLastInstance;
    AABB_t m_BoundsWs;
};

class ClutterSceneObject_t {
public:
    AABB_t m_Bounds;
    ObjectTypeFlags_t m_flags;
    int16_t m_nLayer;
    // CUtlVector< Vector > m_instancePositions;
    // CUtlVector< float32 > m_instanceScales;
    // CUtlVector< Color > m_instanceTintSrgb;
    // CUtlVector< ClutterTile_t > m_tiles;
    // CStrongHandle< InfoForResourceTypeCModel > m_renderableModel;
    // CUtlStringToken m_materialGroup;
    char pad_00[132];
    float m_flBeginCullSize;
    float m_flEndCullSize;
    char pad_01[4];
};

class WorldNode_t {
public:
    // CUtlVector< SceneObject_t > m_sceneObjects;
    // CUtlVector< uint16 > m_visClusterMembership;
    // CUtlVector< AggregateSceneObject_t > m_aggregateSceneObjects;
    // CUtlVector< ClutterSceneObject_t > m_clutterSceneObjects;
    // CUtlVector< AggregateRTProxySceneObject_t > m_rtProxies;
    // CUtlVector< ExtraVertexStreamOverride_t > m_extraVertexStreamOverrides;
    // CUtlVector< MaterialOverride_t > m_materialOverrides;
    // CUtlVector< WorldNodeOnDiskBufferData_t > m_extraVertexStreams;
    // CUtlVector< AggregateInstanceStreamOnDiskData_t > m_aggregateInstanceStreams;
    // CUtlVector< AggregateVertexAlbedoStreamOnDiskData_t > m_vertexAlbedoStreams;
    // CUtlVector< CUtlString > m_layerNames;
    // CUtlVector< uint8 > m_sceneObjectLayerIndices;
    // CUtlString m_grassFileName;
    char pad_00[296];
    BakedLightingInfo_t m_nodeLightingInfo;
    bool m_bHasBakedGeometryFlag;
    char pad_01[7];
};

class WorldBuilderParams_t {
public:
    float m_flMinDrawVolumeSize;
    bool m_bBuildBakedLighting;
    bool m_bAggregateInstanceStreams;
    BakedLightingInfo_t m_bakedLightingInfo;
    uint64_t m_nCompileTimestamp;
    uint64_t m_nCompileFingerprint;
};

class NodeData_t {
public:
    int32_t m_nParent;
    // Vector m_vOrigin;
    // Vector m_vMinBounds;
    // Vector m_vMaxBounds;
    char pad_00[36];
    float m_flMinimumDistance;
    // CUtlVector< int32 > m_ChildNodeIndices;
    // CUtlString m_worldNodePrefix;
    char pad_01[36];
};

class World_t {
public:
    WorldBuilderParams_t m_builderParams;
    // CUtlVector< NodeData_t > m_worldNodes;
    char pad_00[24];
    BakedLightingInfo_t m_worldLightingInfo;
    // CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_entityLumps;
    char pad_01[24];
};

class VoxelVisBlockOffset_t {
public:
    uint32_t m_nOffset;
    uint32_t m_nElementCount;
};

class CVoxelVisibility {
public:
    char pad_00[64];
    uint32_t m_nBaseClusterCount;
    uint32_t m_nPVSBytesPerCluster;
    // Vector m_vMinBounds;
    // Vector m_vMaxBounds;
    char pad_01[24];
    float m_flGridSize;
    uint32_t m_nSkyVisibilityCluster;
    uint32_t m_nSunVisibilityCluster;
    VoxelVisBlockOffset_t m_NodeBlock;
    VoxelVisBlockOffset_t m_RegionBlock;
    VoxelVisBlockOffset_t m_EnclosedClusterListBlock;
    VoxelVisBlockOffset_t m_EnclosedClustersBlock;
    VoxelVisBlockOffset_t m_MasksBlock;
    VoxelVisBlockOffset_t m_nVisBlocks;
    char pad_02[4];
};

class VMapResourceData_t {
public:
    char pad_00[1];
};

class InfoForResourceTypeVMapResourceData_t {
public:
    char pad_00[1];
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

class CEntityInstance {
public:
    // CUtlSymbolLarge m_iszPrivateVScripts;
    char pad_00[16];
    CEntityIdentity* m_pEntity;
    char pad_01[24];
    CScriptComponent* m_CScriptComponent;
};

