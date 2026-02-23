enum ParticleSetMethod_t : uint32_t {
    PARTICLE_SET_REPLACE_VALUE = 0,
    PARTICLE_SET_SCALE_INITIAL_VALUE = 1,
    PARTICLE_SET_ADD_TO_INITIAL_VALUE = 2,
    PARTICLE_SET_RAMP_CURRENT_VALUE = 3,
    PARTICLE_SET_SCALE_CURRENT_VALUE = 4,
    PARTICLE_SET_ADD_TO_CURRENT_VALUE = 5,
};

enum ParticleControlPointAxis_t : uint32_t {
    PARTICLE_CP_AXIS_X = 0,
    PARTICLE_CP_AXIS_Y = 1,
    PARTICLE_CP_AXIS_Z = 2,
    PARTICLE_CP_AXIS_NEGATIVE_X = 3,
    PARTICLE_CP_AXIS_NEGATIVE_Y = 4,
    PARTICLE_CP_AXIS_NEGATIVE_Z = 5,
};

enum ParticleMassMode_t : uint32_t {
    PARTICLE_MASSMODE_RADIUS_CUBED = 0,
    PARTICLE_MASSMODE_RADIUS_SQUARED = 2,
};

enum ParticleColorBlendType_t : uint32_t {
    PARTICLE_COLOR_BLEND_MULTIPLY = 0,
    PARTICLE_COLOR_BLEND_MULTIPLY2X = 1,
    PARTICLE_COLOR_BLEND_DIVIDE = 2,
    PARTICLE_COLOR_BLEND_ADD = 3,
    PARTICLE_COLOR_BLEND_SUBTRACT = 4,
    PARTICLE_COLOR_BLEND_MOD2X = 5,
    PARTICLE_COLOR_BLEND_SCREEN = 6,
    PARTICLE_COLOR_BLEND_MAX = 7,
    PARTICLE_COLOR_BLEND_MIN = 8,
    PARTICLE_COLOR_BLEND_REPLACE = 9,
    PARTICLE_COLOR_BLEND_AVERAGE = 10,
    PARTICLE_COLOR_BLEND_NEGATE = 11,
    PARTICLE_COLOR_BLEND_LUMINANCE = 12,
};

enum ParticleImpulseType_t : uint32_t {
    IMPULSE_TYPE_NONE = 0,
    IMPULSE_TYPE_GENERIC = 1,
    IMPULSE_TYPE_ROPE = 2,
    IMPULSE_TYPE_EXPLOSION = 4,
    IMPULSE_TYPE_EXPLOSION_UNDERWATER = 8,
    IMPULSE_TYPE_PARTICLE_SYSTEM = 16,
};

enum ParticleFalloffFunction_t : uint32_t {
    PARTICLE_FALLOFF_CONSTANT = 0,
    PARTICLE_FALLOFF_LINEAR = 1,
    PARTICLE_FALLOFF_EXPONENTIAL = 2,
};

enum ParticleEntityPos_t : uint32_t {
    PARTICLE_ABS_ORIGIN = 0,
    PARTICLE_WORLDSPACE_CENTER = 1,
    PARTICLE_EYES = 2,
};

enum AnimationType_t : uint32_t {
    ANIMATION_TYPE_FIXED_RATE = 0,
    ANIMATION_TYPE_FIT_LIFETIME = 1,
    ANIMATION_TYPE_MANUAL_FRAMES = 2,
};

enum ClosestPointTestType_t : uint32_t {
    PARTICLE_CLOSEST_TYPE_BOX = 0,
    PARTICLE_CLOSEST_TYPE_CAPSULE = 1,
    PARTICLE_CLOSEST_TYPE_HYBRID = 2,
};

enum InheritableBoolType_t : uint32_t {
    INHERITABLE_BOOL_INHERIT = 0,
    INHERITABLE_BOOL_FALSE = 1,
    INHERITABLE_BOOL_TRUE = 2,
};

enum ParticleHitboxBiasType_t : uint32_t {
    PARTICLE_HITBOX_BIAS_ENTITY = 0,
    PARTICLE_HITBOX_BIAS_HITBOX = 1,
};

enum ParticleAttrBoxFlags_t : uint32_t {
    PARTICLE_ATTR_BOX_FLAGS_NONE = 0,
    PARTICLE_ATTR_BOX_FLAGS_WATER = 1,
    PARTICLE_ATTR_BOX_FLAGS_ON_FIRE = 2,
    PARTICLE_ATTR_BOX_FLAGS_ELECTRIFIED = 4,
    PARTICLE_ATTR_BOX_FLAGS_ASLEEP = 8,
    PARTICLE_ATTR_BOX_FLAGS_FROZEN = 16,
    PARTICLE_ATTR_BOX_FLAGS_TIMED_DECAY = 32,
};

enum RenderModelSubModelFieldType_t : uint32_t {
    SUBMODEL_AS_BODYGROUP_SUBMODEL = 0,
    SUBMODEL_AS_MESHGROUP_INDEX = 1,
    SUBMODEL_AS_MESHGROUP_MASK = 2,
    SUBMODEL_IGNORED_USE_MODEL_DEFAULT_MESHGROUP_MASK = 3,
};

enum ParticleOrientationType_t : uint32_t {
    PARTICLE_ORIENTATION_NONE = 0,
    PARTICLE_ORIENTATION_VELOCITY = 1,
    PARTICLE_ORIENTATION_NORMAL = 2,
    PARTICLE_ORIENTATION_ROTATION = 4,
};

enum ParticleFanType_t : uint32_t {
    PARTICLE_FAN_TYPE_FAN = 0,
    PARTICLE_FAN_TYPE_ROTOR_WASH = 1,
    PARTICLE_FAN_TYPE_RADIAL = 2,
};

enum PFuncVisualizationType_t : uint32_t {
    PFUNC_VISUALIZATION_SPHERE_WIREFRAME = 0,
    PFUNC_VISUALIZATION_SPHERE_SOLID = 1,
    PFUNC_VISUALIZATION_BOX = 2,
    PFUNC_VISUALIZATION_RING = 3,
    PFUNC_VISUALIZATION_PLANE = 4,
    PFUNC_VISUALIZATION_LINE = 5,
    PFUNC_VISUALIZATION_CYLINDER = 6,
};

enum PetGroundType_t : uint32_t {
    PET_GROUND_NONE = 0,
    PET_GROUND_GRID = 1,
    PET_GROUND_PLANE = 2,
};

enum ModelHitboxType_t : uint32_t {
    MODEL_HITBOX_TYPE_STANDARD = 0,
    MODEL_HITBOX_TYPE_RAW_BONES = 1,
    MODEL_HITBOX_TYPE_RENDERBOUNDS = 2,
    MODEL_HITBOX_TYPE_SNAPSHOT = 3,
};

enum SpriteCardShaderType_t : uint32_t {
    SPRITECARD_SHADER_BASE = 0,
    SPRITECARD_SHADER_CUSTOM = 1,
};

enum ParticleTopology_t : uint32_t {
    PARTICLE_TOPOLOGY_POINTS = 0,
    PARTICLE_TOPOLOGY_LINES = 1,
    PARTICLE_TOPOLOGY_TRIS = 2,
    PARTICLE_TOPOLOGY_QUADS = 3,
    PARTICLE_TOPOLOGY_CUBES = 4,
};

enum ParticleDetailLevel_t : uint32_t {
    PARTICLEDETAIL_LOW = 0,
    PARTICLEDETAIL_MEDIUM = 1,
    PARTICLEDETAIL_HIGH = 2,
    PARTICLEDETAIL_ULTRA = 3,
};

enum ParticleTraceSet_t : uint32_t {
    PARTICLE_TRACE_SET_ALL = 0,
    PARTICLE_TRACE_SET_STATIC = 1,
    PARTICLE_TRACE_SET_STATIC_AND_KEYFRAMED = 2,
    PARTICLE_TRACE_SET_DYNAMIC = 3,
};

enum ParticleCollisionMode_t : uint32_t {
    COLLISION_MODE_PER_PARTICLE_TRACE = 3,
    COLLISION_MODE_USE_NEAREST_TRACE = 2,
    COLLISION_MODE_PER_FRAME_PLANESET = 1,
    COLLISION_MODE_INITIAL_TRACE_DOWN = 0,
    COLLISION_MODE_DISABLED = 4294967295,
};

enum ParticleColorBlendMode_t : uint32_t {
    PARTICLEBLEND_DEFAULT = 0,
    PARTICLEBLEND_OVERLAY = 1,
    PARTICLEBLEND_DARKEN = 2,
    PARTICLEBLEND_LIGHTEN = 3,
    PARTICLEBLEND_MULTIPLY = 4,
};

enum Detail2Combo_t : uint32_t {
    DETAIL_2_COMBO_UNINITIALIZED = 4294967295,
    DETAIL_2_COMBO_OFF = 0,
    DETAIL_2_COMBO_ADD = 1,
    DETAIL_2_COMBO_ADD_SELF_ILLUM = 2,
    DETAIL_2_COMBO_MOD2X = 3,
    DETAIL_2_COMBO_MUL = 4,
    DETAIL_2_COMBO_CROSSFADE = 5,
};

enum DetailCombo_t : uint32_t {
    DETAIL_COMBO_OFF = 0,
    DETAIL_COMBO_ADD = 1,
    DETAIL_COMBO_ADD_SELF_ILLUM = 2,
    DETAIL_COMBO_MOD2X = 3,
};

enum ScalarExpressionType_t : uint32_t {
    SCALAR_EXPRESSION_UNINITIALIZED = 4294967295,
    SCALAR_EXPRESSION_ADD = 0,
    SCALAR_EXPRESSION_SUBTRACT = 1,
    SCALAR_EXPRESSION_MUL = 2,
    SCALAR_EXPRESSION_DIVIDE = 3,
    SCALAR_EXPRESSION_INPUT_1 = 4,
    SCALAR_EXPRESSION_MIN = 5,
    SCALAR_EXPRESSION_MAX = 6,
    SCALAR_EXPRESSION_MOD = 7,
    SCALAR_EXPRESSION_EQUAL = 8,
    SCALAR_EXPRESSION_GT = 9,
    SCALAR_EXPRESSION_LT = 10,
};

enum VectorExpressionType_t : uint32_t {
    VECTOR_EXPRESSION_UNINITIALIZED = 4294967295,
    VECTOR_EXPRESSION_ADD = 0,
    VECTOR_EXPRESSION_SUBTRACT = 1,
    VECTOR_EXPRESSION_MUL = 2,
    VECTOR_EXPRESSION_DIVIDE = 3,
    VECTOR_EXPRESSION_INPUT_1 = 4,
    VECTOR_EXPRESSION_MIN = 5,
    VECTOR_EXPRESSION_MAX = 6,
    VECTOR_EXPRESSION_CROSSPRODUCT = 7,
    VECTOR_EXPRESSION_LERP = 8,
};

enum VectorFloatExpressionType_t : uint32_t {
    VECTOR_FLOAT_EXPRESSION_UNINITIALIZED = 4294967295,
    VECTOR_FLOAT_EXPRESSION_DOTPRODUCT = 0,
    VECTOR_FLOAT_EXPRESSION_DISTANCE = 1,
    VECTOR_FLOAT_EXPRESSION_DISTANCESQR = 2,
    VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTH = 3,
    VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTHSQR = 4,
    VECTOR_FLOAT_EXPRESSION_INPUT1_NOISE = 5,
};

enum SetStatisticExpressionType_t : uint32_t {
    SET_EXPRESSION_UNINITIALIZED = 4294967295,
    SET_EXPRESSION_SUM = 0,
    SET_EXPRESSION_MEAN = 1,
    SET_EXPRESSION_MEDIAN = 2,
    SET_EXPRESSION_MODE = 3,
    SET_EXPRESSION_STANDARD_DEVIATION = 4,
    SET_EXPRESSION_MIN = 5,
    SET_EXPRESSION_MAX = 6,
};

enum MissingParentInheritBehavior_t : uint32_t {
    MISSING_PARENT_DO_NOTHING = 4294967295,
    MISSING_PARENT_KILL = 0,
    MISSING_PARENT_FIND_NEW = 1,
    MISSING_PARENT_SAME_INDEX = 2,
};

enum HitboxLerpType_t : uint32_t {
    HITBOX_LERP_LIFETIME = 0,
    HITBOX_LERP_CONSTANT = 1,
};

enum ParticleSelection_t : uint32_t {
    PARTICLE_SELECTION_FIRST = 0,
    PARTICLE_SELECTION_LAST = 1,
    PARTICLE_SELECTION_NUMBER = 2,
};

enum ParticlePinDistance_t : uint32_t {
    PARTICLE_PIN_DISTANCE_NONE = 4294967295,
    PARTICLE_PIN_DISTANCE_NEIGHBOR = 0,
    PARTICLE_PIN_DISTANCE_FARTHEST = 1,
    PARTICLE_PIN_DISTANCE_FIRST = 2,
    PARTICLE_PIN_DISTANCE_LAST = 3,
    PARTICLE_PIN_DISTANCE_CENTER = 5,
    PARTICLE_PIN_DISTANCE_CP = 6,
    PARTICLE_PIN_DISTANCE_CP_PAIR_EITHER = 7,
    PARTICLE_PIN_DISTANCE_CP_PAIR_BOTH = 8,
    PARTICLE_PIN_SPEED = 9,
    PARTICLE_PIN_COLLECTION_AGE = 10,
    PARTICLE_PIN_FLOAT_VALUE = 11,
};

enum ParticleDirectionNoiseType_t : uint32_t {
    PARTICLE_DIR_NOISE_PERLIN = 0,
    PARTICLE_DIR_NOISE_CURL = 1,
    PARTICLE_DIR_NOISE_WORLEY_BASIC = 2,
};

enum ParticleRotationLockType_t : uint32_t {
    PARTICLE_ROTATION_LOCK_NONE = 0,
    PARTICLE_ROTATION_LOCK_ROTATIONS = 1,
    PARTICLE_ROTATION_LOCK_NORMAL = 2,
};

enum ParticleEndcapMode_t : uint32_t {
    PARTICLE_ENDCAP_ALWAYS_ON = 4294967295,
    PARTICLE_ENDCAP_ENDCAP_OFF = 0,
    PARTICLE_ENDCAP_ENDCAP_ON = 1,
};

enum ParticleLightingQuality_t : uint32_t {
    PARTICLE_LIGHTING_PER_PARTICLE = 0,
    PARTICLE_LIGHTING_PER_VERTEX = 1,
    PARTICLE_LIGHTING_PER_PIXEL = 4294967295,
    PARTICLE_LIGHTING_OVERRIDE_POSITION = 2,
    PARTICLE_LIGHTING_OVERRIDE_COLOR = 3,
    PARTICLE_LIGHTING_ADD_EXTRA_LIGHT = 4,
};

enum StandardLightingAttenuationStyle_t : uint32_t {
    LIGHT_STYLE_OLD = 0,
    LIGHT_STYLE_NEW = 1,
};

enum ParticleTraceMissBehavior_t : uint32_t {
    PARTICLE_TRACE_MISS_BEHAVIOR_NONE = 0,
    PARTICLE_TRACE_MISS_BEHAVIOR_KILL = 1,
    PARTICLE_TRACE_MISS_BEHAVIOR_TRACE_END = 2,
};

enum ParticleOrientationSetMode_t : uint32_t {
    PARTICLE_ORIENTATION_SET_NONE = 4294967295,
    PARTICLE_ORIENTATION_SET_FROM_VELOCITY = 0,
    PARTICLE_ORIENTATION_SET_FROM_NORMAL = 1,
    PARTICLE_ORIENTATION_SET_FROM_ROTATIONS = 2,
};

enum ParticleLightnintBranchBehavior_t : uint32_t {
    PARTICLE_LIGHTNING_BRANCH_CURRENT_DIR = 0,
    PARTICLE_LIGHTNING_BRANCH_ENDPOINT_DIR = 1,
};

enum ParticleLightFogLightingMode_t : uint32_t {
    PARTICLE_LIGHT_FOG_LIGHTING_MODE_NONE = 0,
    PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC = 2,
    PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC_NOSHADOWS = 4,
};

enum ParticleSequenceCropOverride_t : uint32_t {
    PARTICLE_SEQUENCE_CROP_OVERRIDE_DEFAULT = 4294967295,
    PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_OFF = 0,
    PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_ON = 1,
};

enum ParticleParentSetMode_t : uint32_t {
    PARTICLE_SET_PARENT_NO = 0,
    PARTICLE_SET_PARENT_IMMEDIATE = 1,
    PARTICLE_SET_PARENT_ROOT = 2,
};

enum MaterialProxyType_t : uint32_t {
    MATERIAL_PROXY_STATUS_EFFECT = 0,
    MATERIAL_PROXY_TINT = 1,
};

enum BBoxVolumeType_t : uint32_t {
    BBOX_VOLUME = 0,
    BBOX_DIMENSIONS = 1,
    BBOX_MINS_MAXS = 2,
    BBOX_RADIUS = 3,
};

enum ParticleHitboxDataSelection_t : uint32_t {
    PARTICLE_HITBOX_AVERAGE_SPEED = 0,
    PARTICLE_HITBOX_COUNT = 1,
};

enum SnapshotIndexType_t : uint32_t {
    SNAPSHOT_INDEX_INCREMENT = 0,
    SNAPSHOT_INDEX_DIRECT = 1,
};

enum EventTypeSelection_t : uint32_t {
    PARTICLE_EVENT_TYPE_MASK_NONE = 0,
    PARTICLE_EVENT_TYPE_MASK_SPAWNED = 1,
    PARTICLE_EVENT_TYPE_MASK_KILLED = 2,
    PARTICLE_EVENT_TYPE_MASK_COLLISION = 4,
    PARTICLE_EVENT_TYPE_MASK_FIRST_COLLISION = 8,
    PARTICLE_EVENT_TYPE_MASK_COLLISION_STOPPED = 16,
    PARTICLE_EVENT_TYPE_MASK_KILLED_ON_COLLISION = 32,
    PARTICLE_EVENT_TYPE_MASK_USER_1 = 64,
    PARTICLE_EVENT_TYPE_MASK_USER_2 = 128,
    PARTICLE_EVENT_TYPE_MASK_USER_3 = 256,
    PARTICLE_EVENT_TYPE_MASK_USER_4 = 512,
};

enum ParticleCollisionMask_t : uint64_t {
    PARTICLE_MASK_ALL = 18446744073709551615,
    PARTICLE_MASK_SOLID = 798721,
    PARTICLE_MASK_WATER = 98304,
    PARTICLE_MASK_SOLID_WATER = 897025,
    PARTICLE_MASK_SHOT = 1839107,
    PARTICLE_MASK_SHOT_BRUSHONLY = 1052673,
    PARTICLE_MASK_SHOT_HULL = 1847297,
    PARTICLE_MASK_OPAQUE = 128,
    PARTICLE_MASK_DEFAULTPLAYERSOLID = 798737,
    PARTICLE_MASK_NPCSOLID = 798753,
};

enum ParticleCollisionGroup_t : uint32_t {
    PARTICLE_COLLISION_GROUP_DEFAULT = 4,
    PARTICLE_COLLISION_GROUP_DEBRIS = 5,
    PARTICLE_COLLISION_GROUP_INTERACTIVE = 7,
    PARTICLE_COLLISION_GROUP_PLAYER = 8,
    PARTICLE_COLLISION_GROUP_VEHICLE = 10,
    PARTICLE_COLLISION_GROUP_NPC = 12,
    PARTICLE_COLLISION_GROUP_PROPS = 24,
};

enum ParticleOrientationChoiceList_t : uint32_t {
    PARTICLE_ORIENTATION_SCREEN_ALIGNED = 0,
    PARTICLE_ORIENTATION_SCREEN_Z_ALIGNED = 1,
    PARTICLE_ORIENTATION_WORLD_Z_ALIGNED = 2,
    PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL = 3,
    PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL = 4,
    PARTICLE_ORIENTATION_FULL_3AXIS_ROTATION = 5,
};

enum ParticleOutputBlendMode_t : uint32_t {
    PARTICLE_OUTPUT_BLEND_MODE_ALPHA = 0,
    PARTICLE_OUTPUT_BLEND_MODE_ADD = 1,
    PARTICLE_OUTPUT_BLEND_MODE_BLEND_ADD = 2,
    PARTICLE_OUTPUT_BLEND_MODE_HALF_BLEND_ADD = 3,
    PARTICLE_OUTPUT_BLEND_MODE_NEG_HALF_BLEND_ADD = 4,
    PARTICLE_OUTPUT_BLEND_MODE_MOD2X = 5,
    PARTICLE_OUTPUT_BLEND_MODE_LIGHTEN = 6,
};

enum ParticleAlphaReferenceType_t : uint32_t {
    PARTICLE_ALPHA_REFERENCE_ALPHA_ALPHA = 0,
    PARTICLE_ALPHA_REFERENCE_OPAQUE_ALPHA = 1,
    PARTICLE_ALPHA_REFERENCE_ALPHA_OPAQUE = 2,
    PARTICLE_ALPHA_REFERENCE_OPAQUE_OPAQUE = 3,
};

enum BlurFilterType_t : uint32_t {
    BLURFILTER_GAUSSIAN = 0,
    BLURFILTER_BOX = 1,
};

enum ParticleLightTypeChoiceList_t : uint32_t {
    PARTICLE_LIGHT_TYPE_POINT = 0,
    PARTICLE_LIGHT_TYPE_SPOT = 1,
    PARTICLE_LIGHT_TYPE_FX = 2,
    PARTICLE_LIGHT_TYPE_CAPSULE = 3,
};

enum ParticleLightUnitChoiceList_t : uint32_t {
    PARTICLE_LIGHT_UNIT_CANDELAS = 0,
    PARTICLE_LIGHT_UNIT_LUMENS = 1,
};

enum ParticleOmni2LightTypeChoiceList_t : uint32_t {
    PARTICLE_OMNI2_LIGHT_TYPE_POINT = 0,
    PARTICLE_OMNI2_LIGHT_TYPE_SPHERE = 1,
};

enum ParticleLightBehaviorChoiceList_t : uint32_t {
    PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION = 0,
    PARTICLE_LIGHT_BEHAVIOR_ROPE = 1,
    PARTICLE_LIGHT_BEHAVIOR_TRAILS = 2,
};

enum ParticleDepthFeatheringMode_t : uint32_t {
    PARTICLE_DEPTH_FEATHERING_OFF = 0,
    PARTICLE_DEPTH_FEATHERING_ON_OPTIONAL = 1,
    PARTICLE_DEPTH_FEATHERING_ON_REQUIRED = 2,
};

enum ParticleVRHandChoiceList_t : uint32_t {
    PARTICLE_VRHAND_LEFT = 0,
    PARTICLE_VRHAND_RIGHT = 1,
    PARTICLE_VRHAND_CP = 2,
    PARTICLE_VRHAND_CP_OBJECT = 3,
};

enum ParticleSortingChoiceList_t : uint32_t {
    PARTICLE_SORTING_NEAREST = 0,
    PARTICLE_SORTING_CREATION_TIME = 1,
};

enum SpriteCardTextureType_t : uint32_t {
    SPRITECARD_TEXTURE_DIFFUSE = 0,
    SPRITECARD_TEXTURE_ZOOM = 1,
    SPRITECARD_TEXTURE_1D_COLOR_LOOKUP = 2,
    SPRITECARD_TEXTURE_UVDISTORTION = 3,
    SPRITECARD_TEXTURE_UVDISTORTION_ZOOM = 4,
    SPRITECARD_TEXTURE_NORMALMAP = 5,
    SPRITECARD_TEXTURE_ANIMMOTIONVEC = 6,
    SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_A = 7,
    SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_B = 8,
    SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_C = 9,
    SPRITECARD_TEXTURE_DEPTH = 10,
    SPRITECARD_TEXTURE_ILLUMINATION_GRADIENT = 11,
};

enum SpriteCardTextureChannel_t : uint32_t {
    SPRITECARD_TEXTURE_CHANNEL_MIX_RGB = 0,
    SPRITECARD_TEXTURE_CHANNEL_MIX_RGBA = 1,
    SPRITECARD_TEXTURE_CHANNEL_MIX_A = 2,
    SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_A = 3,
    SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_ALPHAMASK = 4,
    SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_RGBMASK = 5,
    SPRITECARD_TEXTURE_CHANNEL_MIX_RGBA_RGBALPHA = 6,
    SPRITECARD_TEXTURE_CHANNEL_MIX_A_RGBALPHA = 7,
    SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_A_RGBALPHA = 8,
    SPRITECARD_TEXTURE_CHANNEL_MIX_R = 9,
    SPRITECARD_TEXTURE_CHANNEL_MIX_G = 10,
    SPRITECARD_TEXTURE_CHANNEL_MIX_B = 11,
    SPRITECARD_TEXTURE_CHANNEL_MIX_RALPHA = 12,
    SPRITECARD_TEXTURE_CHANNEL_MIX_GALPHA = 13,
    SPRITECARD_TEXTURE_CHANNEL_MIX_BALPHA = 14,
};

enum SpriteCardPerParticleScale_t : uint32_t {
    SPRITECARD_TEXTURE_PP_SCALE_NONE = 0,
    SPRITECARD_TEXTURE_PP_SCALE_PARTICLE_AGE = 1,
    SPRITECARD_TEXTURE_PP_SCALE_ANIMATION_FRAME = 2,
    SPRITECARD_TEXTURE_PP_SCALE_SHADER_EXTRA_DATA1 = 3,
    SPRITECARD_TEXTURE_PP_SCALE_SHADER_EXTRA_DATA2 = 4,
    SPRITECARD_TEXTURE_PP_SCALE_PARTICLE_ALPHA = 5,
    SPRITECARD_TEXTURE_PP_SCALE_SHADER_RADIUS = 6,
    SPRITECARD_TEXTURE_PP_SCALE_ROLL = 7,
    SPRITECARD_TEXTURE_PP_SCALE_YAW = 8,
    SPRITECARD_TEXTURE_PP_SCALE_PITCH = 9,
    SPRITECARD_TEXTURE_PP_SCALE_RANDOM = 10,
    SPRITECARD_TEXTURE_PP_SCALE_NEG_RANDOM = 11,
    SPRITECARD_TEXTURE_PP_SCALE_RANDOM_TIME = 12,
    SPRITECARD_TEXTURE_PP_SCALE_NEG_RANDOM_TIME = 13,
};

enum ParticleTextureLayerBlendType_t : uint32_t {
    SPRITECARD_TEXTURE_BLEND_MULTIPLY = 0,
    SPRITECARD_TEXTURE_BLEND_MOD2X = 1,
    SPRITECARD_TEXTURE_BLEND_REPLACE = 2,
    SPRITECARD_TEXTURE_BLEND_ADD = 3,
    SPRITECARD_TEXTURE_BLEND_SUBTRACT = 4,
    SPRITECARD_TEXTURE_BLEND_AVERAGE = 5,
    SPRITECARD_TEXTURE_BLEND_LUMINANCE = 6,
};

enum ParticlePostProcessPriorityGroup_t : uint32_t {
    PARTICLE_POST_PROCESS_PRIORITY_LEVEL_VOLUME = 0,
    PARTICLE_POST_PROCESS_PRIORITY_LEVEL_OVERRIDE = 1,
    PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_EFFECT = 2,
    PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_LOW = 3,
    PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_HIGH = 4,
    PARTICLE_POST_PROCESS_PRIORITY_GLOBAL_UI = 5,
};

enum ParticleFogType_t : uint32_t {
    PARTICLE_FOG_GAME_DEFAULT = 0,
    PARTICLE_FOG_ENABLED = 1,
    PARTICLE_FOG_DISABLED = 2,
};

enum ParticleLiquidContents_t : uint32_t {
    PARTICLE_LIQUID_NONE = 0,
    PARTICLE_LIQUID_OIL = 1,
    PARTICLE_LIQUID_WATER = 2,
};

enum TextureRepetitionMode_t : uint32_t {
    TEXTURE_REPETITION_PARTICLE = 0,
    TEXTURE_REPETITION_PATH = 1,
};

enum ParticleReplicationMode_t : uint32_t {
    PARTICLE_REPLICATIONMODE_NONE = 0,
    PARTICLE_REPLICATIONMODE_REPLICATE_FOR_EACH_PARENT_PARTICLE = 1,
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

class CRandomNumberGeneratorParameters {
public:
    bool m_bDistributeEvenly;
    int32_t m_nSeed;
};

class CParticleMassCalculationParameters {
public:
    ParticleMassMode_t m_nMassMode;
    CPerParticleFloatInput m_flRadius;
    CPerParticleFloatInput m_flNominalRadius;
    CPerParticleFloatInput m_flScale;
};

class MaterialVariable_t {
public:
    // CUtlString m_strVariable;
    char pad_00[8];
    ParticleAttributeIndex_t m_nVariableField;
    float m_flScale;
};

class RenderProjectedMaterial_t {
public:
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial;
    char pad_00[8];
};

class CPAssignment_t {
public:
    int32_t m_nCPNumber;
    CPerParticleVecInput m_Pos;
    ParticleOrientationSetMode_t m_nOrientationMode;
    char pad_00[4];
};

class ParticlePreviewBodyGroup_t {
public:
    // CUtlString m_bodyGroupName;
    char pad_00[8];
    int32_t m_nValue;
    char pad_01[4];
};

class ParticlePreviewState_t {
public:
    // CUtlString m_previewModel;
    char pad_00[8];
    uint32_t m_nModSpecificData;
    PetGroundType_t m_groundType;
    // CUtlString m_sequenceName;
    char pad_01[8];
    int32_t m_nFireParticleOnSequenceFrame;
    // CUtlString m_hitboxSetName;
    // CUtlString m_materialGroupName;
    // CUtlVector< ParticlePreviewBodyGroup_t > m_vecBodyGroups;
    char pad_02[44];
    float m_flPlaybackSpeed;
    float m_flParticleSimulationRate;
    bool m_bShouldDrawHitboxes;
    bool m_bShouldDrawAttachments;
    bool m_bShouldDrawAttachmentNames;
    bool m_bShouldDrawControlPointAxes;
    bool m_bAnimationNonLooping;
    bool m_bSequenceNameIsAnimClipPath;
    // Vector m_vecPreviewGravity;
    char pad_03[18];
};

class ParticleControlPointDriver_t {
public:
    // ParticleParamID_t m_iControlPoint;
    char pad_00[16];
    ParticleAttachment_t m_iAttachType;
    // CUtlString m_attachmentName;
    // Vector m_vecOffset;
    // QAngle m_angOffset;
    // CUtlString m_entityName;
    char pad_01[44];
};

class ParticleControlPointConfiguration_t {
public:
    // CUtlString m_name;
    // CUtlVector< ParticleControlPointDriver_t > m_drivers;
    char pad_00[32];
    ParticlePreviewState_t m_previewState;
};

class IParticleSystemDefinition {
public:
    char pad_00[8];
};

class CParticleVisibilityInputs {
public:
    float m_flCameraBias;
    int32_t m_nCPin;
    float m_flProxyRadius;
    float m_flInputMin;
    float m_flInputMax;
    float m_flInputPixelVisFade;
    float m_flNoPixelVisibilityFallback;
    float m_flDistanceInputMin;
    float m_flDistanceInputMax;
    float m_flDotInputMin;
    float m_flDotInputMax;
    bool m_bDotCPAngles;
    bool m_bDotCameraAngles;
    float m_flAlphaScaleMin;
    float m_flAlphaScaleMax;
    float m_flRadiusScaleMin;
    float m_flRadiusScaleMax;
    float m_flRadiusScaleFOVBase;
    bool m_bRightEye;
    char pad_00[3];
};

class CPathParameters {
public:
    int32_t m_nStartControlPointNumber;
    int32_t m_nEndControlPointNumber;
    int32_t m_nBulgeControl;
    float m_flBulge;
    float m_flMidPoint;
    // Vector m_vStartPointOffset;
    // Vector m_vMidPointOffset;
    // Vector m_vEndOffset;
    char pad_00[44];
};

class ParticleChildrenInfo_t {
public:
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_ChildRef;
    char pad_00[8];
    float m_flDelay;
    bool m_bEndCap;
    bool m_bDisableChild;
    ParticleDetailLevel_t m_nDetailLevel;
    char pad_01[12];
};

class ControlPointReference_t {
public:
    int32_t m_controlPointNameString;
    // Vector m_vOffsetFromControlPoint;
    char pad_00[12];
    bool m_bOffsetInLocalSpace;
    char pad_01[3];
};

class ModelReference_t {
public:
    // CStrongHandle< InfoForResourceTypeCModel > m_model;
    char pad_00[8];
    float m_flRelativeProbabilityOfSpawn;
    char pad_01[4];
};

class SequenceWeightedList_t {
public:
    int32_t m_nSequence;
    float m_flRelativeWeight;
};

class CollisionGroupContext_t {
public:
    int32_t m_nCollisionGroupNumber;
};

class PointDefinition_t {
public:
    int32_t m_nControlPoint;
    bool m_bLocalCoords;
    // Vector m_vOffset;
    char pad_00[15];
};

class PointDefinitionWithTimeValues_t {
public:
    char pad_00[20];
    float m_flTimeDuration;
};

class CParticleSystemDefinition {
public:
    char pad_00[8];
    int32_t m_nBehaviorVersion;
    // CUtlVector< CParticleFunctionPreEmission* > m_PreEmissionOperators;
    // CUtlVector< CParticleFunctionEmitter* > m_Emitters;
    // CUtlVector< CParticleFunctionInitializer* > m_Initializers;
    // CUtlVector< CParticleFunctionOperator* > m_Operators;
    // CUtlVector< CParticleFunctionForce* > m_ForceGenerators;
    // CUtlVector< CParticleFunctionConstraint* > m_Constraints;
    // CUtlVector< CParticleFunctionRenderer* > m_Renderers;
    // CUtlVector< ParticleChildrenInfo_t > m_Children;
    char pad_01[364];
    int32_t m_nFirstMultipleOverride_BackwardCompat;
    char pad_02[220];
    int32_t m_nInitialParticles;
    int32_t m_nMaxParticles;
    int32_t m_nGroupID;
    // Vector m_BoundingBoxMin;
    // Vector m_BoundingBoxMax;
    char pad_03[24];
    float m_flDepthSortBias;
    int32_t m_nSortOverridePositionCP;
    bool m_bInfiniteBounds;
    bool m_bEnableNamedValues;
    // CUtlString m_NamedValueDomain;
    // CUtlVector< ParticleNamedValueSource_t* > m_NamedValueLocals;
    // Color m_ConstantColor;
    // Vector m_ConstantNormal;
    char pad_04[48];
    float m_flConstantRadius;
    float m_flConstantRotation;
    float m_flConstantRotationSpeed;
    float m_flConstantLifespan;
    int32_t m_nConstantSequenceNumber;
    int32_t m_nConstantSequenceNumber1;
    int32_t m_nSnapshotControlPoint;
    // CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hSnapshot;
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_pszCullReplacementName;
    char pad_05[20];
    float m_flCullRadius;
    float m_flCullFillCost;
    int32_t m_nCullControlPoint;
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hFallback;
    char pad_06[12];
    int32_t m_nFallbackMaxCount;
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hLowViolenceDef;
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hReferenceReplacement;
    char pad_07[20];
    float m_flPreSimulationTime;
    float m_flStopSimulationAfterTime;
    float m_flMaximumTimeStep;
    float m_flMaximumSimTime;
    float m_flMinimumSimTime;
    float m_flMinimumTimeStep;
    int32_t m_nMinimumFrames;
    int32_t m_nMinCPULevel;
    int32_t m_nMinGPULevel;
    float m_flNoDrawTimeToGoToSleep;
    float m_flMaxDrawDistance;
    float m_flStartFadeDistance;
    float m_flMaxCreationDistance;
    int32_t m_nAggregationMinAvailableParticles;
    float m_flAggregateRadius;
    bool m_bShouldBatch;
    bool m_bShouldHitboxesFallbackToRenderBounds;
    bool m_bShouldHitboxesFallbackToSnapshot;
    bool m_bShouldHitboxesFallbackToCollisionHulls;
    InheritableBoolType_t m_nViewModelEffect;
    bool m_bScreenSpaceEffect;
    // CUtlSymbolLarge m_pszTargetLayerID;
    char pad_08[8];
    int32_t m_nSkipRenderControlPoint;
    int32_t m_nAllowRenderControlPoint;
    bool m_bShouldSort;
    // CUtlVector< ParticleControlPointConfiguration_t > m_controlPointConfigurations;
    char pad_09[207];
};

class CParticleFunctionPreEmission {
public:
    char pad_00[464];
    bool m_bRunOnce;
    char pad_01[7];
};

class CParticleFunctionEmitter {
public:
    char pad_00[464];
    int32_t m_nEmitterIndex;
    char pad_01[4];
};

class CParticleFunctionInitializer {
public:
    char pad_00[464];
    int32_t m_nAssociatedEmitterIndex;
    char pad_01[4];
};

class CParticleFunctionOperator {
public:
    char pad_00[464];
};

class CParticleFunctionForce {
public:
    char pad_00[480];
};

class CParticleFunctionConstraint {
public:
    char pad_00[464];
};

class CParticleFunctionRenderer {
public:
    char pad_00[464];
    CParticleVisibilityInputs VisibilityInputs;
    bool m_bCannotBeRefracted;
    bool m_bSkipRenderingOnMobile;
    char pad_01[6];
};

class CParticleFunction {
public:
    char pad_00[8];
    CParticleCollectionFloatInput m_flOpStrength;
    ParticleEndcapMode_t m_nOpEndCapState;
    float m_flOpStartFadeInTime;
    float m_flOpEndFadeInTime;
    float m_flOpStartFadeOutTime;
    float m_flOpEndFadeOutTime;
    float m_flOpFadeOscillatePeriod;
    bool m_bNormalizeToStopTime;
    float m_flOpTimeOffsetMin;
    float m_flOpTimeOffsetMax;
    int32_t m_nOpTimeOffsetSeed;
    int32_t m_nOpTimeScaleSeed;
    float m_flOpTimeScaleMin;
    float m_flOpTimeScaleMax;
    char pad_01[2];
    bool m_bDisableOperator;
    // CUtlString m_Notes;
    char pad_02[33];
};

class TextureControls_t {
public:
    CParticleCollectionRendererFloatInput m_flFinalTextureScaleU;
    CParticleCollectionRendererFloatInput m_flFinalTextureScaleV;
    CParticleCollectionRendererFloatInput m_flFinalTextureOffsetU;
    CParticleCollectionRendererFloatInput m_flFinalTextureOffsetV;
    CParticleCollectionRendererFloatInput m_flFinalTextureUVRotation;
    CParticleCollectionRendererFloatInput m_flZoomScale;
    CParticleCollectionRendererFloatInput m_flDistortion;
    bool m_bRandomizeOffsets;
    bool m_bClampUVs;
    SpriteCardPerParticleScale_t m_nPerParticleBlend;
    SpriteCardPerParticleScale_t m_nPerParticleScale;
    SpriteCardPerParticleScale_t m_nPerParticleOffsetU;
    SpriteCardPerParticleScale_t m_nPerParticleOffsetV;
    SpriteCardPerParticleScale_t m_nPerParticleRotation;
    SpriteCardPerParticleScale_t m_nPerParticleZoom;
    SpriteCardPerParticleScale_t m_nPerParticleDistortion;
};

class TextureGroup_t {
public:
    bool m_bEnabled;
    bool m_bReplaceTextureWithGradient;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hTexture;
    // CColorGradient m_Gradient;
    char pad_00[36];
    SpriteCardTextureType_t m_nTextureType;
    SpriteCardTextureChannel_t m_nTextureChannels;
    ParticleTextureLayerBlendType_t m_nTextureBlendMode;
    CParticleCollectionRendererFloatInput m_flTextureBlend;
    TextureControls_t m_TextureControls;
};

class CBaseRendererSource2 {
public:
    char pad_00[544];
    CParticleCollectionRendererFloatInput m_flRadiusScale;
    CParticleCollectionRendererFloatInput m_flAlphaScale;
    CParticleCollectionRendererFloatInput m_flRollScale;
    ParticleAttributeIndex_t m_nAlpha2Field;
    CParticleCollectionRendererVecInput m_vecColorScale;
    ParticleColorBlendType_t m_nColorBlendType;
    SpriteCardShaderType_t m_nShaderType;
    // CUtlString m_strShaderOverride;
    char pad_01[8];
    CParticleCollectionRendererFloatInput m_flCenterXOffset;
    CParticleCollectionRendererFloatInput m_flCenterYOffset;
    float m_flBumpStrength;
    ParticleSequenceCropOverride_t m_nCropTextureOverride;
    // CUtlLeanVector< TextureGroup_t > m_vecTexturesInput;
    char pad_02[16];
    float m_flAnimationRate;
    AnimationType_t m_nAnimationType;
    bool m_bAnimateInFPS;
    CParticleCollectionRendererFloatInput m_flMotionVectorScaleU;
    CParticleCollectionRendererFloatInput m_flMotionVectorScaleV;
    CParticleCollectionRendererFloatInput m_flSelfIllumAmount;
    CParticleCollectionRendererFloatInput m_flDiffuseAmount;
    CParticleCollectionRendererFloatInput m_flDiffuseClamp;
    int32_t m_nLightingControlPoint;
    ParticleOutputBlendMode_t m_nOutputBlendMode;
    bool m_bGammaCorrectVertexColors;
    bool m_bSaturateColorPreAlphaBlend;
    CParticleCollectionRendererFloatInput m_flAddSelfAmount;
    CParticleCollectionRendererFloatInput m_flDesaturation;
    CParticleCollectionRendererFloatInput m_flOverbrightFactor;
    int32_t m_nHSVShiftControlPoint;
    ParticleFogType_t m_nFogType;
    CParticleCollectionRendererFloatInput m_flFogAmount;
    bool m_bTintByFOW;
    bool m_bTintByGlobalLight;
    SpriteCardPerParticleScale_t m_nPerParticleAlphaReference;
    SpriteCardPerParticleScale_t m_nPerParticleAlphaRefWindow;
    ParticleAlphaReferenceType_t m_nAlphaReferenceType;
    CParticleCollectionRendererFloatInput m_flAlphaReferenceSoftness;
    CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToZero;
    CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToOne;
    bool m_bRefract;
    bool m_bRefractSolid;
    CParticleCollectionRendererFloatInput m_flRefractAmount;
    int32_t m_nRefractBlurRadius;
    BlurFilterType_t m_nRefractBlurType;
    bool m_bOnlyRenderInEffectsBloomPass;
    bool m_bOnlyRenderInEffectsWaterPass;
    bool m_bUseMixedResolutionRendering;
    bool m_bOnlyRenderInEffecsGameOverlay;
    char m_stencilTestID[128];
    bool m_bStencilTestExclude;
    char m_stencilWriteID[128];
    bool m_bWriteStencilOnDepthPass;
    bool m_bWriteStencilOnDepthFail;
    bool m_bReverseZBuffering;
    bool m_bDisableZBuffering;
    ParticleDepthFeatheringMode_t m_nFeatheringMode;
    CParticleCollectionRendererFloatInput m_flFeatheringMinDist;
    CParticleCollectionRendererFloatInput m_flFeatheringMaxDist;
    CParticleCollectionRendererFloatInput m_flFeatheringFilter;
    CParticleCollectionRendererFloatInput m_flFeatheringDepthMapFilter;
    CParticleCollectionRendererFloatInput m_flDepthBias;
    ParticleSortingChoiceList_t m_nSortMethod;
    bool m_bBlendFramesSeq0;
    bool m_bMaxLuminanceBlendingSequence0;
    char pad_03[626];
};

class C_OP_RenderSprites {
public:
    char pad_00[11752];
    CParticleCollectionRendererFloatInput m_nSequenceOverride;
    bool m_bSequenceNumbersAreRawSequenceIndices;
    ParticleOrientationChoiceList_t m_nOrientationType;
    int32_t m_nOrientationControlPoint;
    bool m_bUseYawWithNormalAligned;
    CParticleCollectionRendererFloatInput m_flMinSize;
    CParticleCollectionRendererFloatInput m_flMaxSize;
    CParticleCollectionRendererFloatInput m_flAlphaAdjustWithSizeAdjust;
    CParticleCollectionRendererFloatInput m_flStartFadeSize;
    CParticleCollectionRendererFloatInput m_flEndFadeSize;
    float m_flStartFadeDot;
    float m_flEndFadeDot;
    bool m_bDistanceAlpha;
    bool m_bSoftEdges;
    float m_flEdgeSoftnessStart;
    float m_flEdgeSoftnessEnd;
    bool m_bOutline;
    // Color m_OutlineColor;
    char pad_01[4];
    int32_t m_nOutlineAlpha;
    float m_flOutlineStart0;
    float m_flOutlineStart1;
    float m_flOutlineEnd0;
    float m_flOutlineEnd1;
    ParticleLightingQuality_t m_nLightingMode;
    CParticleCollectionRendererVecInput m_vecLightingOverride;
    CParticleCollectionRendererFloatInput m_flLightingTessellation;
    CParticleCollectionRendererFloatInput m_flLightingDirectionality;
    bool m_bParticleShadows;
    float m_flShadowDensity;
    CReplicationParameters m_replicationParameters;
    char pad_02[8];
};

class CReplicationParameters {
public:
    ParticleReplicationMode_t m_nReplicationMode;
    bool m_bScaleChildParticleRadii;
    CParticleCollectionFloatInput m_flMinRandomRadiusScale;
    CParticleCollectionFloatInput m_flMaxRandomRadiusScale;
    CParticleCollectionVecInput m_vMinRandomDisplacement;
    CParticleCollectionVecInput m_vMaxRandomDisplacement;
    CParticleCollectionFloatInput m_flModellingScale;
};

class FloatInputMaterialVariable_t {
public:
    // CUtlString m_strVariable;
    char pad_00[8];
    CParticleCollectionFloatInput m_flInput;
};

class VecInputMaterialVariable_t {
public:
    // CUtlString m_strVariable;
    char pad_00[8];
    CParticleCollectionVecInput m_vecInput;
};

class C_OP_RenderCables {
public:
    char pad_00[544];
    CParticleCollectionFloatInput m_flRadiusScale;
    CParticleCollectionFloatInput m_flAlphaScale;
    CParticleCollectionVecInput m_vecColorScale;
    ParticleColorBlendType_t m_nColorBlendType;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial;
    char pad_01[12];
    TextureRepetitionMode_t m_nTextureRepetitionMode;
    CParticleCollectionFloatInput m_flTextureRepeatsPerSegment;
    CParticleCollectionFloatInput m_flTextureRepeatsCircumference;
    CParticleCollectionFloatInput m_flColorMapOffsetV;
    CParticleCollectionFloatInput m_flColorMapOffsetU;
    CParticleCollectionFloatInput m_flNormalMapOffsetV;
    CParticleCollectionFloatInput m_flNormalMapOffsetU;
    bool m_bDrawCableCaps;
    float m_flCapRoundness;
    float m_flCapOffsetAmount;
    float m_flTessScale;
    int32_t m_nMinTesselation;
    int32_t m_nMaxTesselation;
    int32_t m_nRoundness;
    bool m_nForceRoundnessFixed;
    CParticleTransformInput m_LightingTransform;
    // CUtlLeanVector< FloatInputMaterialVariable_t > m_MaterialFloatVars;
    // CUtlLeanVector< VecInputMaterialVariable_t > m_MaterialVecVars;
    char pad_02[64];
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

class CParticleCollectionBindingInstance {
public:
    char pad_00[312];
};

class CParticleBindingRealPulse {
public:
    char pad_00[312];
};

class C_OP_ConstrainDistance {
public:
    char pad_00[464];
    CParticleCollectionFloatInput m_fMinDistance;
    CParticleCollectionFloatInput m_fMaxDistance;
    int32_t m_nControlPointNumber;
    // Vector m_CenterOffset;
    char pad_01[12];
    bool m_bGlobalCenter;
    char pad_02[7];
};

class C_OP_CollideWithSelf {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flRadiusScale;
    CPerParticleFloatInput m_flMinimumSpeed;
};

class C_OP_CollideWithParentParticles {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flParentRadiusScale;
    CPerParticleFloatInput m_flRadiusScale;
};

class C_OP_ConstrainDistanceToPath {
public:
    char pad_00[464];
    float m_fMinDistance;
    float m_flMaxDistance0;
    float m_flMaxDistanceMid;
    float m_flMaxDistance1;
    CPathParameters m_PathParameters;
    float m_flTravelTime;
    ParticleAttributeIndex_t m_nFieldScale;
    ParticleAttributeIndex_t m_nManualTField;
    char pad_01[4];
};

class C_OP_ConstrainDistanceToUserSpecifiedPath {
public:
    char pad_00[464];
    float m_fMinDistance;
    float m_flMaxDistance;
    float m_flTimeScale;
    bool m_bLoopedPath;
    // CUtlVector< PointDefinitionWithTimeValues_t > m_pointList;
    char pad_01[27];
};

class C_OP_PlanarConstraint {
public:
    // Vector m_PointOnPlane;
    // Vector m_PlaneNormal;
    char pad_00[488];
    int32_t m_nControlPointNumber;
    bool m_bGlobalOrigin;
    bool m_bGlobalNormal;
    CPerParticleFloatInput m_flRadiusScale;
    CParticleCollectionFloatInput m_flMaximumDistanceToCP;
    bool m_bUseOldCode;
    char pad_01[7];
};

class C_OP_WorldCollideConstraint {
public:
    char pad_00[464];
};

class C_OP_WorldTraceConstraint {
public:
    char pad_00[464];
    int32_t m_nCP;
    // Vector m_vecCpOffset;
    char pad_01[12];
    ParticleCollisionMode_t m_nCollisionMode;
    ParticleCollisionMode_t m_nCollisionModeMin;
    ParticleTraceSet_t m_nTraceSet;
    char m_CollisionGroupName[128];
    bool m_bWorldOnly;
    bool m_bBrushOnly;
    bool m_bIncludeWater;
    int32_t m_nIgnoreCP;
    float m_flCpMovementTolerance;
    float m_flRetestRate;
    float m_flTraceTolerance;
    float m_flCollisionConfirmationSpeed;
    float m_nMaxTracesPerFrame;
    CPerParticleFloatInput m_flRadiusScale;
    CPerParticleFloatInput m_flBounceAmount;
    CPerParticleFloatInput m_flSlideAmount;
    CPerParticleFloatInput m_flRandomDirScale;
    bool m_bDecayBounce;
    bool m_bKillonContact;
    float m_flMinSpeed;
    bool m_bSetNormal;
    ParticleAttributeIndex_t m_nStickOnCollisionField;
    CPerParticleFloatInput m_flStopSpeed;
    ParticleAttributeIndex_t m_nEntityStickDataField;
    ParticleAttributeIndex_t m_nEntityStickNormalField;
};

class C_OP_BoxConstraint {
public:
    char pad_00[464];
    CParticleCollectionVecInput m_vecMin;
    CParticleCollectionVecInput m_vecMax;
    int32_t m_nCP;
    bool m_bLocalSpace;
    bool m_bAccountForRadius;
    char pad_01[2];
};

class C_OP_ShapeMatchingConstraint {
public:
    char pad_00[464];
    float m_flShapeRestorationTime;
    char pad_01[4];
};

class C_OP_RopeSpringConstraint {
public:
    char pad_00[464];
    CParticleCollectionFloatInput m_flRestLength;
    CParticleCollectionFloatInput m_flMinDistance;
    CParticleCollectionFloatInput m_flMaxDistance;
    float m_flAdjustmentScale;
    CParticleCollectionFloatInput m_flInitialRestingLength;
};

class C_OP_SpringToVectorConstraint {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flRestLength;
    CPerParticleFloatInput m_flMinDistance;
    CPerParticleFloatInput m_flMaxDistance;
    CPerParticleFloatInput m_flRestingLength;
    CPerParticleVecInput m_vecAnchorVector;
};

class C_OP_ConstrainLineLength {
public:
    char pad_00[464];
    float m_flMinDistance;
    float m_flMaxDistance;
};

class C_INIT_RingWave {
public:
    char pad_00[472];
    CParticleTransformInput m_TransformInput;
    CParticleCollectionFloatInput m_flParticlesPerOrbit;
    CPerParticleFloatInput m_flInitialRadius;
    CPerParticleFloatInput m_flThickness;
    CPerParticleFloatInput m_flInitialSpeedMin;
    CPerParticleFloatInput m_flInitialSpeedMax;
    CPerParticleFloatInput m_flRoll;
    CPerParticleFloatInput m_flPitch;
    CPerParticleFloatInput m_flYaw;
    bool m_bEvenDistribution;
    bool m_bXYVelocityOnly;
    char pad_01[6];
};

class C_INIT_CreateSpiralSphere {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber;
    int32_t m_nOverrideCP;
    int32_t m_nDensity;
    float m_flInitialRadius;
    float m_flInitialSpeedMin;
    float m_flInitialSpeedMax;
    bool m_bUseParticleCount;
    char pad_01[7];
};

class C_INIT_CreateInEpitrochoid {
public:
    char pad_00[472];
    int32_t m_nComponent1;
    int32_t m_nComponent2;
    CParticleTransformInput m_TransformInput;
    CPerParticleFloatInput m_flParticleDensity;
    CPerParticleFloatInput m_flOffset;
    CPerParticleFloatInput m_flRadius1;
    CPerParticleFloatInput m_flRadius2;
    bool m_bUseCount;
    bool m_bUseLocalCoords;
    bool m_bOffsetExistingPos;
    char pad_01[5];
};

class C_INIT_ScreenSpacePositionOfTarget {
public:
    char pad_00[472];
    CPerParticleVecInput m_vecTargetPosition;
    bool m_bOututBehindness;
    ParticleAttributeIndex_t m_nBehindFieldOutput;
    CParticleRemapFloatInput m_flBehindOutputRemap;
};

class C_INIT_CreatePhyllotaxis {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber;
    int32_t m_nScaleCP;
    int32_t m_nComponent;
    float m_fRadCentCore;
    float m_fRadPerPoint;
    float m_fRadPerPointTo;
    float m_fpointAngle;
    float m_fsizeOverall;
    float m_fRadBias;
    float m_fMinRad;
    float m_fDistBias;
    bool m_bUseLocalCoords;
    bool m_bUseWithContEmit;
    bool m_bUseOrigRadius;
    char pad_01[1];
};

class C_INIT_CreateOnModel {
public:
    char pad_00[472];
    CParticleModelInput m_modelInput;
    CParticleTransformInput m_transformInput;
    int32_t m_nForceInModel;
    bool m_bScaleToVolume;
    bool m_bEvenDistribution;
    CParticleCollectionFloatInput m_nDesiredHitbox;
    int32_t m_nHitboxValueFromControlPointIndex;
    CParticleCollectionVecInput m_vecHitBoxScale;
    float m_flBoneVelocity;
    float m_flMaxBoneVelocity;
    CParticleCollectionVecInput m_vecDirectionBias;
    char m_HitboxSetName[128];
    bool m_bLocalCoords;
    bool m_bUseBones;
    bool m_bUseMesh;
    CParticleCollectionFloatInput m_flShellSize;
};

class C_INIT_CreateOnModelAtHeight {
public:
    char pad_00[472];
    bool m_bUseBones;
    bool m_bForceZ;
    int32_t m_nControlPointNumber;
    int32_t m_nHeightCP;
    bool m_bUseWaterHeight;
    CParticleCollectionFloatInput m_flDesiredHeight;
    CParticleCollectionVecInput m_vecHitBoxScale;
    CParticleCollectionVecInput m_vecDirectionBias;
    ParticleHitboxBiasType_t m_nBiasType;
    bool m_bLocalCoords;
    bool m_bPreferMovingBoxes;
    char m_HitboxSetName[128];
    CParticleCollectionFloatInput m_flHitboxVelocityScale;
    CParticleCollectionFloatInput m_flMaxBoneVelocity;
};

class C_INIT_SetHitboxToClosest {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber;
    int32_t m_nDesiredHitbox;
    CParticleCollectionVecInput m_vecHitBoxScale;
    char m_HitboxSetName[128];
    bool m_bUseBones;
    bool m_bUseClosestPointOnHitbox;
    ClosestPointTestType_t m_nTestType;
    CParticleCollectionFloatInput m_flHybridRatio;
    bool m_bUpdatePosition;
    char pad_01[7];
};

class C_INIT_SetHitboxToModel {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber;
    int32_t m_nForceInModel;
    bool m_bEvenDistribution;
    int32_t m_nDesiredHitbox;
    CParticleCollectionVecInput m_vecHitBoxScale;
    // Vector m_vecDirectionBias;
    char pad_01[12];
    bool m_bMaintainHitbox;
    bool m_bUseBones;
    char m_HitboxSetName[128];
    CParticleCollectionFloatInput m_flShellSize;
};

class C_INIT_CreateWithinSphereTransform {
public:
    char pad_00[472];
    CPerParticleFloatInput m_fRadiusMin;
    CPerParticleFloatInput m_fRadiusMax;
    CPerParticleVecInput m_vecDistanceBias;
    // Vector m_vecDistanceBiasAbs;
    char pad_01[16];
    CParticleTransformInput m_TransformInput;
    CPerParticleFloatInput m_fSpeedMin;
    CPerParticleFloatInput m_fSpeedMax;
    float m_fSpeedRandExp;
    bool m_bLocalCoords;
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMin;
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMax;
    ParticleAttributeIndex_t m_nFieldOutput;
    ParticleAttributeIndex_t m_nFieldVelocity;
};

class C_INIT_CreateWithinCapsuleTransform {
public:
    char pad_00[472];
    CPerParticleFloatInput m_fRadiusMin;
    CPerParticleFloatInput m_fRadiusMax;
    CPerParticleFloatInput m_fHeight;
    CParticleTransformInput m_TransformInput;
    CPerParticleFloatInput m_fSpeedMin;
    CPerParticleFloatInput m_fSpeedMax;
    float m_fSpeedRandExp;
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMin;
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMax;
    ParticleAttributeIndex_t m_nFieldOutput;
    ParticleAttributeIndex_t m_nFieldVelocity;
};

class C_INIT_CreateWithinBox {
public:
    char pad_00[472];
    CPerParticleVecInput m_vecMin;
    CPerParticleVecInput m_vecMax;
    int32_t m_nControlPointNumber;
    bool m_bLocalSpace;
    CRandomNumberGeneratorParameters m_randomnessParameters;
    bool m_bUseNewCode;
    char pad_01[7];
};

class C_INIT_CreateOnGrid {
public:
    char pad_00[472];
    CParticleCollectionFloatInput m_nXCount;
    CParticleCollectionFloatInput m_nYCount;
    CParticleCollectionFloatInput m_nZCount;
    CParticleCollectionFloatInput m_nXSpacing;
    CParticleCollectionFloatInput m_nYSpacing;
    CParticleCollectionFloatInput m_nZSpacing;
    int32_t m_nControlPointNumber;
    bool m_bLocalSpace;
    bool m_bCenter;
    bool m_bHollow;
    char pad_01[1];
};

class C_INIT_PositionOffset {
public:
    char pad_00[472];
    CPerParticleVecInput m_OffsetMin;
    CPerParticleVecInput m_OffsetMax;
    CParticleTransformInput m_TransformInput;
    bool m_bLocalCoords;
    bool m_bProportional;
    CRandomNumberGeneratorParameters m_randomnessParameters;
    char pad_01[4];
};

class C_INIT_PositionOffsetToCP {
public:
    char pad_00[472];
    int32_t m_nControlPointNumberStart;
    int32_t m_nControlPointNumberEnd;
    bool m_bLocalCoords;
    char pad_01[7];
};

class C_INIT_PositionPlaceOnGround {
public:
    char pad_00[472];
    CPerParticleFloatInput m_flOffset;
    CPerParticleFloatInput m_flMaxTraceLength;
    char m_CollisionGroupName[128];
    ParticleTraceSet_t m_nTraceSet;
    char pad_01[12];
    ParticleTraceMissBehavior_t m_nTraceMissBehavior;
    bool m_bIncludeWater;
    bool m_bSetNormal;
    ParticleAttributeIndex_t m_nAttribute;
    bool m_bSetPXYZOnly;
    bool m_bTraceAlongNormal;
    ParticleAttributeIndex_t m_nTraceDirectionAttribute;
    bool m_bOffsetonColOnly;
    float m_flOffsetByRadiusFactor;
    int32_t m_nPreserveOffsetCP;
    int32_t m_nIgnoreCP;
    char pad_02[4];
};

class C_INIT_VelocityFromNormal {
public:
    char pad_00[472];
    float m_fSpeedMin;
    float m_fSpeedMax;
    bool m_bIgnoreDt;
    char pad_01[7];
};

class C_INIT_VelocityRandom {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber;
    CPerParticleFloatInput m_fSpeedMin;
    CPerParticleFloatInput m_fSpeedMax;
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMin;
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMax;
    bool m_bIgnoreDT;
    CRandomNumberGeneratorParameters m_randomnessParameters;
    char pad_01[4];
};

class C_INIT_InitialVelocityNoise {
public:
    // Vector m_vecAbsVal;
    // Vector m_vecAbsValInv;
    char pad_00[496];
    CPerParticleVecInput m_vecOffsetLoc;
    CPerParticleFloatInput m_flOffset;
    CPerParticleVecInput m_vecOutputMin;
    CPerParticleVecInput m_vecOutputMax;
    CPerParticleFloatInput m_flNoiseScale;
    CPerParticleFloatInput m_flNoiseScaleLoc;
    CParticleTransformInput m_TransformInput;
    bool m_bIgnoreDt;
    char pad_01[7];
};

class C_INIT_InitialVelocityFromHitbox {
public:
    char pad_00[472];
    float m_flVelocityMin;
    float m_flVelocityMax;
    int32_t m_nControlPointNumber;
    char m_HitboxSetName[128];
    bool m_bUseBones;
    char pad_01[3];
};

class C_INIT_VelocityRadialRandom {
public:
    char pad_00[472];
    bool m_bPerParticleCenter;
    int32_t m_nControlPointNumber;
    CPerParticleVecInput m_vecPosition;
    CPerParticleVecInput m_vecFwd;
    CPerParticleFloatInput m_fSpeedMin;
    CPerParticleFloatInput m_fSpeedMax;
    // Vector m_vecLocalCoordinateSystemSpeedScale;
    char pad_01[13];
    bool m_bIgnoreDelta;
    char pad_02[2];
};

class C_INIT_RandomLifeTime {
public:
    char pad_00[472];
    float m_fLifetimeMin;
    float m_fLifetimeMax;
    float m_fLifetimeRandExponent;
    char pad_01[4];
};

class C_INIT_RandomScalar {
public:
    char pad_00[472];
    float m_flMin;
    float m_flMax;
    float m_flExponent;
    ParticleAttributeIndex_t m_nFieldOutput;
};

class C_INIT_RandomVector {
public:
    // Vector m_vecMin;
    // Vector m_vecMax;
    char pad_00[496];
    ParticleAttributeIndex_t m_nFieldOutput;
    CRandomNumberGeneratorParameters m_randomnessParameters;
    char pad_01[4];
};

class C_INIT_RandomVectorComponent {
public:
    char pad_00[472];
    float m_flMin;
    float m_flMax;
    ParticleAttributeIndex_t m_nFieldOutput;
    int32_t m_nComponent;
};

class C_INIT_AddVectorToVector {
public:
    // Vector m_vecScale;
    char pad_00[484];
    ParticleAttributeIndex_t m_nFieldOutput;
    ParticleAttributeIndex_t m_nFieldInput;
    // Vector m_vOffsetMin;
    // Vector m_vOffsetMax;
    char pad_01[24];
    CRandomNumberGeneratorParameters m_randomnessParameters;
    char pad_02[4];
};

class C_INIT_RandomAlphaWindowThreshold {
public:
    char pad_00[472];
    float m_flMin;
    float m_flMax;
    float m_flExponent;
    char pad_01[4];
};

class C_INIT_RandomRadius {
public:
    char pad_00[472];
    float m_flRadiusMin;
    float m_flRadiusMax;
    float m_flRadiusRandExponent;
    char pad_01[4];
};

class C_INIT_RandomAlpha {
public:
    char pad_00[472];
    ParticleAttributeIndex_t m_nFieldOutput;
    int32_t m_nAlphaMin;
    int32_t m_nAlphaMax;
    char pad_01[8];
    float m_flAlphaRandExponent;
};

class CGeneralRandomRotation {
public:
    char pad_00[472];
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flDegrees;
    float m_flDegreesMin;
    float m_flDegreesMax;
    float m_flRotationRandExponent;
    bool m_bRandomlyFlipDirection;
    char pad_01[11];
};

class C_INIT_RandomRotation {
public:
    char pad_00[504];
};

class C_INIT_Orient2DRelToCP {
public:
    char pad_00[472];
    int32_t m_nCP;
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flRotOffset;
    char pad_01[4];
};

class C_INIT_RandomRotationSpeed {
public:
    char pad_00[504];
};

class C_INIT_RandomYaw {
public:
    char pad_00[504];
};

class C_INIT_RandomColor {
public:
    // Color m_ColorMin;
    // Color m_ColorMax;
    // Color m_TintMin;
    // Color m_TintMax;
    char pad_00[516];
    float m_flTintPerc;
    float m_flUpdateThreshold;
    int32_t m_nTintCP;
    ParticleAttributeIndex_t m_nFieldOutput;
    ParticleColorBlendMode_t m_nTintBlendMode;
    float m_flLightAmplification;
    char pad_01[4];
};

class C_INIT_ColorLitPerParticle {
public:
    // Color m_ColorMin;
    // Color m_ColorMax;
    // Color m_TintMin;
    // Color m_TintMax;
    char pad_00[512];
    float m_flTintPerc;
    ParticleColorBlendMode_t m_nTintBlendMode;
    float m_flLightAmplification;
    char pad_01[4];
};

class C_INIT_RandomTrailLength {
public:
    char pad_00[472];
    float m_flMinLength;
    float m_flMaxLength;
    float m_flLengthRandExponent;
    char pad_01[4];
};

class C_INIT_RandomSequence {
public:
    char pad_00[472];
    int32_t m_nSequenceMin;
    int32_t m_nSequenceMax;
    bool m_bShuffle;
    bool m_bLinear;
    // CUtlVector< SequenceWeightedList_t > m_WeightedList;
    char pad_01[38];
};

class C_INIT_SequenceFromCP {
public:
    char pad_00[472];
    bool m_bKillUnused;
    bool m_bRadiusScale;
    int32_t m_nCP;
    // Vector m_vecOffset;
    char pad_01[16];
};

class C_INIT_RandomModelSequence {
public:
    char pad_00[472];
    char m_ActivityName[256];
    char m_SequenceName[256];
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    char pad_01[8];
};

class C_INIT_ScaleVelocity {
public:
    char pad_00[472];
    CParticleCollectionVecInput m_vecScale;
};

class C_INIT_PositionWarp {
public:
    char pad_00[472];
    CParticleCollectionVecInput m_vecWarpMin;
    CParticleCollectionVecInput m_vecWarpMax;
    int32_t m_nScaleControlPointNumber;
    int32_t m_nControlPointNumber;
    int32_t m_nRadiusComponent;
    float m_flWarpTime;
    float m_flWarpStartTime;
    float m_flPrevPosScale;
    bool m_bInvertWarp;
    bool m_bUseCount;
    char pad_01[6];
};

class C_INIT_PositionWarpScalar {
public:
    // Vector m_vecWarpMin;
    // Vector m_vecWarpMax;
    char pad_00[496];
    CPerParticleFloatInput m_InputValue;
    float m_flPrevPosScale;
    int32_t m_nScaleControlPointNumber;
    int32_t m_nControlPointNumber;
    char pad_01[4];
};

class C_INIT_CreationNoise {
public:
    char pad_00[472];
    ParticleAttributeIndex_t m_nFieldOutput;
    bool m_bAbsVal;
    bool m_bAbsValInv;
    float m_flOffset;
    float m_flOutputMin;
    float m_flOutputMax;
    float m_flNoiseScale;
    float m_flNoiseScaleLoc;
    // Vector m_vecOffsetLoc;
    char pad_01[12];
    float m_flWorldTimeScale;
    char pad_02[4];
};

class C_INIT_CheckParticleForWater {
public:
    char pad_00[472];
    CPerParticleFloatInput m_flRadius;
    ParticleAttributeIndex_t m_nFieldOutput;
    CParticleRemapFloatInput m_flOutputRemap;
    ParticleSetMethod_t m_nSetMethod;
    char pad_01[4];
};

class C_INIT_CreateAlongPath {
public:
    char pad_00[472];
    float m_fMaxDistance;
    CPathParameters m_PathParams;
    bool m_bUseRandomCPs;
    // Vector m_vEndOffset;
    char pad_01[15];
    bool m_bSaveOffset;
    char pad_02[15];
};

class C_INIT_MoveBetweenPoints {
public:
    char pad_00[472];
    CPerParticleFloatInput m_flSpeedMin;
    CPerParticleFloatInput m_flSpeedMax;
    CPerParticleFloatInput m_flEndSpread;
    CPerParticleFloatInput m_flStartOffset;
    CPerParticleFloatInput m_flEndOffset;
    int32_t m_nEndControlPointNumber;
    bool m_bTrailBias;
    char pad_01[3];
};

class C_INIT_RemapParticleCountToScalar {
public:
    char pad_00[472];
    ParticleAttributeIndex_t m_nFieldOutput;
    int32_t m_nInputMin;
    int32_t m_nInputMax;
    int32_t m_nScaleControlPoint;
    int32_t m_nScaleControlPointField;
    float m_flOutputMin;
    float m_flOutputMax;
    ParticleSetMethod_t m_nSetMethod;
    bool m_bActiveRange;
    bool m_bInvert;
    bool m_bWrap;
    float m_flRemapBias;
    char pad_01[8];
};

class C_INIT_RemapParticleCountToNamedModelElementScalar {
public:
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    // CUtlString m_outputMinName;
    // CUtlString m_outputMaxName;
    char pad_00[544];
    bool m_bModelFromRenderer;
    char pad_01[7];
};

class C_INIT_RemapParticleCountToNamedModelSequenceScalar {
public:
    char pad_00[552];
};

class C_INIT_RemapParticleCountToNamedModelBodyPartScalar {
public:
    char pad_00[552];
};

class C_INIT_RemapParticleCountToNamedModelMeshGroupScalar {
public:
    char pad_00[552];
};

class C_INIT_InheritVelocity {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber;
    float m_flVelocityScale;
};

class C_INIT_VelocityFromCP {
public:
    char pad_00[472];
    CParticleCollectionVecInput m_velocityInput;
    CParticleTransformInput m_transformInput;
    float m_flVelocityScale;
    bool m_bDirectionOnly;
    char pad_01[3];
};

class C_INIT_AgeNoise {
public:
    char pad_00[472];
    bool m_bAbsVal;
    bool m_bAbsValInv;
    float m_flOffset;
    float m_flAgeMin;
    float m_flAgeMax;
    float m_flNoiseScale;
    float m_flNoiseScaleLoc;
    // Vector m_vecOffsetLoc;
    char pad_01[16];
};

class C_INIT_SequenceLifeTime {
public:
    char pad_00[472];
    float m_flFramerate;
    char pad_01[4];
};

class C_INIT_RemapScalarToVector {
public:
    char pad_00[472];
    ParticleAttributeIndex_t m_nFieldInput;
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flInputMin;
    float m_flInputMax;
    // Vector m_vecOutputMin;
    // Vector m_vecOutputMax;
    char pad_01[24];
    float m_flStartTime;
    float m_flEndTime;
    ParticleSetMethod_t m_nSetMethod;
    int32_t m_nControlPointNumber;
    bool m_bLocalCoords;
    float m_flRemapBias;
    char pad_02[8];
};

class C_INIT_OffsetVectorToVector {
public:
    char pad_00[472];
    ParticleAttributeIndex_t m_nFieldInput;
    ParticleAttributeIndex_t m_nFieldOutput;
    // Vector m_vecOutputMin;
    // Vector m_vecOutputMax;
    char pad_01[24];
    CRandomNumberGeneratorParameters m_randomnessParameters;
};

class C_INIT_CreateSequentialPathV2 {
public:
    char pad_00[472];
    CPerParticleFloatInput m_fMaxDistance;
    CParticleCollectionFloatInput m_flNumToAssign;
    bool m_bLoop;
    bool m_bCPPairs;
    bool m_bSaveOffset;
    CPathParameters m_PathParams;
    char pad_01[16];
};

class C_INIT_CreateSequentialPath {
public:
    char pad_00[472];
    float m_fMaxDistance;
    float m_flNumToAssign;
    bool m_bLoop;
    bool m_bCPPairs;
    bool m_bSaveOffset;
    CPathParameters m_PathParams;
};

class C_INIT_InitialRepulsionVelocity {
public:
    char pad_00[472];
    char m_CollisionGroupName[128];
    ParticleTraceSet_t m_nTraceSet;
    // Vector m_vecOutputMin;
    // Vector m_vecOutputMax;
    char pad_01[24];
    int32_t m_nControlPointNumber;
    bool m_bPerParticle;
    bool m_bTranslate;
    bool m_bProportional;
    float m_flTraceLength;
    bool m_bPerParticleTR;
    bool m_bInherit;
    int32_t m_nChildCP;
    int32_t m_nChildGroupID;
    char pad_02[4];
};

class C_INIT_RandomYawFlip {
public:
    char pad_00[472];
    float m_flPercent;
    char pad_01[4];
};

class C_INIT_RandomSecondSequence {
public:
    char pad_00[472];
    int32_t m_nSequenceMin;
    int32_t m_nSequenceMax;
};

class C_INIT_RemapTransformToVector {
public:
    char pad_00[472];
    ParticleAttributeIndex_t m_nFieldOutput;
    // Vector m_vInputMin;
    // Vector m_vInputMax;
    // Vector m_vOutputMin;
    // Vector m_vOutputMax;
    char pad_01[48];
    CParticleTransformInput m_TransformInput;
    CParticleTransformInput m_LocalSpaceTransform;
    float m_flStartTime;
    float m_flEndTime;
    ParticleSetMethod_t m_nSetMethod;
    bool m_bOffset;
    bool m_bAccelerate;
    float m_flRemapBias;
    char pad_02[4];
};

class C_INIT_ChaoticAttractor {
public:
    char pad_00[472];
    float m_flAParm;
    float m_flBParm;
    float m_flCParm;
    float m_flDParm;
    float m_flScale;
    float m_flSpeedMin;
    float m_flSpeedMax;
    int32_t m_nBaseCP;
    bool m_bUniformSpeed;
    char pad_01[7];
};

class C_INIT_CreateFromParentParticles {
public:
    char pad_00[472];
    float m_flVelocityScale;
    float m_flIncrement;
    bool m_bRandomDistribution;
    int32_t m_nRandomSeed;
    bool m_bSubFrame;
    bool m_bSetRopeSegmentID;
    char pad_01[6];
};

class C_INIT_InheritFromParentParticles {
public:
    char pad_00[472];
    float m_flScale;
    ParticleAttributeIndex_t m_nFieldOutput;
    int32_t m_nIncrement;
    bool m_bRandomDistribution;
    int32_t m_nRandomSeed;
    char pad_01[4];
};

class C_INIT_CreateFromCPs {
public:
    char pad_00[472];
    int32_t m_nIncrement;
    int32_t m_nMinCP;
    int32_t m_nMaxCP;
    CParticleCollectionFloatInput m_nDynamicCPCount;
};

class C_INIT_DistanceToCPInit {
public:
    char pad_00[472];
    ParticleAttributeIndex_t m_nFieldOutput;
    CPerParticleFloatInput m_flInputMin;
    CPerParticleFloatInput m_flInputMax;
    CPerParticleFloatInput m_flOutputMin;
    CPerParticleFloatInput m_flOutputMax;
    int32_t m_nStartCP;
    bool m_bLOS;
    char m_CollisionGroupName[128];
    ParticleTraceSet_t m_nTraceSet;
    CPerParticleFloatInput m_flMaxTraceLength;
    float m_flLOSScale;
    ParticleSetMethod_t m_nSetMethod;
    bool m_bActiveRange;
    // Vector m_vecDistanceScale;
    char pad_01[12];
    float m_flRemapBias;
    char pad_02[4];
};

class C_INIT_LifespanFromVelocity {
public:
    // Vector m_vecComponentScale;
    char pad_00[484];
    float m_flTraceOffset;
    float m_flMaxTraceLength;
    float m_flTraceTolerance;
    int32_t m_nMaxPlanes;
    char pad_01[4];
    char m_CollisionGroupName[128];
    ParticleTraceSet_t m_nTraceSet;
    char pad_02[12];
    bool m_bIncludeWater;
    char pad_03[7];
};

class C_INIT_CreateFromPlaneCache {
public:
    // Vector m_vecOffsetMin;
    // Vector m_vecOffsetMax;
    char pad_00[497];
    bool m_bUseNormal;
    char pad_01[6];
};

class C_INIT_ModelCull {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber;
    bool m_bBoundBox;
    bool m_bCullOutside;
    bool m_bUseBones;
    char m_HitboxSetName[128];
    char pad_01[1];
};

class C_INIT_DistanceCull {
public:
    char pad_00[472];
    int32_t m_nControlPoint;
    CParticleCollectionFloatInput m_flDistance;
    bool m_bCullInside;
    char pad_01[7];
};

class C_INIT_PlaneCull {
public:
    char pad_00[472];
    int32_t m_nControlPoint;
    CParticleCollectionFloatInput m_flDistance;
    bool m_bCullInside;
    char pad_01[7];
};

class C_INIT_DistanceToNeighborCull {
public:
    char pad_00[472];
    CPerParticleFloatInput m_flDistance;
    bool m_bIncludeRadii;
    CPerParticleFloatInput m_flLifespanOverlap;
    ParticleAttributeIndex_t m_nFieldModify;
    CPerParticleFloatInput m_flModify;
    ParticleSetMethod_t m_nSetMethod;
    bool m_bUseNeighbor;
    char pad_01[3];
};

class C_INIT_RtEnvCull {
public:
    // Vector m_vecTestDir;
    // Vector m_vecTestNormal;
    char pad_00[496];
    bool m_bUseVelocity;
    bool m_bCullOnMiss;
    bool m_bLifeAdjust;
    char m_RtEnvName[128];
    int32_t m_nRTEnvCP;
    int32_t m_nComponent;
    char pad_01[4];
};

class C_INIT_NormalAlignToCP {
public:
    char pad_00[472];
    CParticleTransformInput m_transformInput;
    ParticleControlPointAxis_t m_nControlPointAxis;
    char pad_01[4];
};

class C_INIT_NormalOffset {
public:
    // Vector m_OffsetMin;
    // Vector m_OffsetMax;
    char pad_00[496];
    int32_t m_nControlPointNumber;
    bool m_bLocalCoords;
    bool m_bNormalize;
    char pad_01[2];
};

class C_INIT_InitFromCPSnapshot {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber;
    // CUtlString m_strSnapshotSubset;
    ParticleAttributeIndex_t m_nAttributeToRead;
    ParticleAttributeIndex_t m_nAttributeToWrite;
    int32_t m_nLocalSpaceCP;
    bool m_bRandom;
    bool m_bReverse;
    CParticleCollectionFloatInput m_nSnapShotIncrement;
    CPerParticleFloatInput m_nManualSnapshotIndex;
    int32_t m_nRandomSeed;
    bool m_bLocalSpaceAngles;
    char pad_01[3];
};

class C_INIT_InitSkinnedPositionFromCPSnapshot {
public:
    char pad_00[472];
    int32_t m_nSnapshotControlPointNumber;
    int32_t m_nControlPointNumber;
    bool m_bRandom;
    int32_t m_nRandomSeed;
    bool m_bRigid;
    bool m_bSetNormal;
    bool m_bIgnoreDt;
    float m_flMinNormalVelocity;
    float m_flMaxNormalVelocity;
    SnapshotIndexType_t m_nIndexType;
    CPerParticleFloatInput m_flReadIndex;
    float m_flIncrement;
    int32_t m_nFullLoopIncrement;
    int32_t m_nSnapShotStartPoint;
    float m_flBoneVelocity;
    float m_flBoneVelocityMax;
    bool m_bCopyColor;
    bool m_bCopyAlpha;
    bool m_bSetRadius;
    char pad_01[1];
};

class C_INIT_InitFromParentKilled {
public:
    char pad_00[472];
    ParticleAttributeIndex_t m_nAttributeToCopy;
    EventTypeSelection_t m_nEventType;
    char pad_01[128];
};

class C_INIT_InitFromVectorFieldSnapshot {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber;
    int32_t m_nLocalSpaceCP;
    int32_t m_nWeightUpdateCP;
    bool m_bUseVerticalVelocity;
    CPerParticleVecInput m_vecScale;
};

class C_INIT_RemapInitialDirectionToTransformToVector {
public:
    char pad_00[472];
    CParticleTransformInput m_TransformInput;
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flScale;
    float m_flOffsetRot;
    // Vector m_vecOffsetAxis;
    char pad_01[12];
    bool m_bNormalize;
    char pad_02[7];
};

class C_INIT_RemapInitialTransformDirectionToRotation {
public:
    char pad_00[472];
    CParticleTransformInput m_TransformInput;
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flOffsetRot;
    int32_t m_nComponent;
    char pad_01[4];
};

class C_INIT_RemapQAnglesToRotation {
public:
    char pad_00[472];
    CParticleTransformInput m_TransformInput;
};

class C_INIT_RemapTransformOrientationToRotations {
public:
    char pad_00[472];
    CParticleTransformInput m_TransformInput;
    // Vector m_vecRotation;
    char pad_01[12];
    bool m_bUseQuat;
    bool m_bWriteNormal;
    char pad_02[2];
};

class C_INIT_SetRigidAttachment {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber;
    ParticleAttributeIndex_t m_nFieldInput;
    ParticleAttributeIndex_t m_nFieldOutput;
    bool m_bLocalSpace;
    char pad_01[3];
};

class C_INIT_RemapInitialVisibilityScalar {
public:
    char pad_00[476];
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flInputMin;
    float m_flInputMax;
    float m_flOutputMin;
    float m_flOutputMax;
};

class C_INIT_RadiusFromCPObject {
public:
    char pad_00[472];
    int32_t m_nControlPoint;
    char pad_01[4];
};

class C_INIT_InitialSequenceFromModel {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber;
    ParticleAttributeIndex_t m_nFieldOutput;
    ParticleAttributeIndex_t m_nFieldOutputAnim;
    float m_flInputMin;
    float m_flInputMax;
    float m_flOutputMin;
    float m_flOutputMax;
    ParticleSetMethod_t m_nSetMethod;
};

class C_INIT_GlobalScale {
public:
    char pad_00[472];
    float m_flScale;
    int32_t m_nScaleControlPointNumber;
    int32_t m_nControlPointNumber;
    bool m_bScaleRadius;
    bool m_bScalePosition;
    bool m_bScaleVelocity;
    char pad_01[1];
};

class C_INIT_PointList {
public:
    char pad_00[472];
    ParticleAttributeIndex_t m_nFieldOutput;
    // CUtlVector< PointDefinition_t > m_pointList;
    char pad_01[28];
    bool m_bPlaceAlongPath;
    bool m_bClosedLoop;
    int32_t m_nNumPointsAlongPath;
};

class C_INIT_RandomNamedModelElement {
public:
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    // CUtlVector< CUtlString > m_names;
    char pad_00[504];
    bool m_bShuffle;
    bool m_bLinear;
    bool m_bModelFromRenderer;
    ParticleAttributeIndex_t m_nFieldOutput;
};

class C_INIT_RandomNamedModelSequence {
public:
    char pad_00[512];
};

class C_INIT_RandomNamedModelBodyPart {
public:
    char pad_00[512];
};

class C_INIT_RandomNamedModelMeshGroup {
public:
    char pad_00[512];
};

class C_INIT_RemapNamedModelElementToScalar {
public:
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    // CUtlVector< CUtlString > m_names;
    // CUtlVector< float32 > m_values;
    char pad_00[528];
    ParticleAttributeIndex_t m_nFieldInput;
    ParticleAttributeIndex_t m_nFieldOutput;
    ParticleSetMethod_t m_nSetMethod;
    bool m_bModelFromRenderer;
    char pad_01[3];
};

class C_INIT_RemapNamedModelSequenceToScalar {
public:
    char pad_00[544];
};

class C_INIT_RemapNamedModelBodyPartToScalar {
public:
    char pad_00[544];
};

class C_INIT_RemapNamedModelMeshGroupToScalar {
public:
    char pad_00[544];
};

class C_INIT_StatusEffect {
public:
    char pad_00[472];
    Detail2Combo_t m_nDetail2Combo;
    float m_flDetail2Rotation;
    float m_flDetail2Scale;
    float m_flDetail2BlendFactor;
    float m_flColorWarpIntensity;
    float m_flDiffuseWarpBlendToFull;
    float m_flEnvMapIntensity;
    float m_flAmbientScale;
    // Color m_specularColor;
    char pad_01[4];
    float m_flSpecularScale;
    float m_flSpecularExponent;
    float m_flSpecularExponentBlendToFull;
    float m_flSpecularBlendToFull;
    // Color m_rimLightColor;
    char pad_02[4];
    float m_flRimLightScale;
    float m_flReflectionsTintByBaseBlendToNone;
    float m_flMetalnessBlendToFull;
    float m_flSelfIllumBlendToFull;
    char pad_03[24];
};

class C_INIT_StatusEffectCitadel {
public:
    char pad_00[472];
    float m_flSFXColorWarpAmount;
    float m_flSFXNormalAmount;
    float m_flSFXMetalnessAmount;
    float m_flSFXRoughnessAmount;
    float m_flSFXSelfIllumAmount;
    float m_flSFXSScale;
    float m_flSFXSScrollX;
    float m_flSFXSScrollY;
    float m_flSFXSScrollZ;
    float m_flSFXSOffsetX;
    float m_flSFXSOffsetY;
    float m_flSFXSOffsetZ;
    DetailCombo_t m_nDetailCombo;
    float m_flSFXSDetailAmount;
    float m_flSFXSDetailScale;
    float m_flSFXSDetailScrollX;
    float m_flSFXSDetailScrollY;
    float m_flSFXSDetailScrollZ;
    float m_flSFXSUseModelUVs;
    char pad_01[4];
};

class C_INIT_CreateParticleImpulse {
public:
    char pad_00[472];
    CPerParticleFloatInput m_InputRadius;
    CPerParticleFloatInput m_InputMagnitude;
    ParticleFalloffFunction_t m_nFalloffFunction;
    CPerParticleFloatInput m_InputFalloffExp;
    ParticleImpulseType_t m_nImpulseType;
    char pad_01[4];
};

class C_INIT_QuantizeFloat {
public:
    char pad_00[472];
    CPerParticleFloatInput m_InputValue;
    ParticleAttributeIndex_t m_nOutputField;
    char pad_01[4];
};

class C_INIT_SetAttributeToScalarExpression {
public:
    char pad_00[472];
    ScalarExpressionType_t m_nExpression;
    CPerParticleFloatInput m_flInput1;
    CPerParticleFloatInput m_flInput2;
    CParticleRemapFloatInput m_flOutputRemap;
    ParticleAttributeIndex_t m_nOutputField;
    ParticleSetMethod_t m_nSetMethod;
    char pad_01[40];
};

class C_INIT_SetVectorAttributeToVectorExpression {
public:
    char pad_00[472];
    VectorExpressionType_t m_nExpression;
    CPerParticleVecInput m_vInput1;
    CPerParticleVecInput m_vInput2;
    CPerParticleFloatInput m_flLerp;
    ParticleAttributeIndex_t m_nOutputField;
    ParticleSetMethod_t m_nSetMethod;
    bool m_bNormalizedOutput;
    char pad_01[103];
};

class C_INIT_SetFloatAttributeToVectorExpression {
public:
    char pad_00[472];
    VectorFloatExpressionType_t m_nExpression;
    CPerParticleVecInput m_vInput1;
    CPerParticleVecInput m_vInput2;
    CParticleRemapFloatInput m_flOutputRemap;
    ParticleAttributeIndex_t m_nOutputField;
    ParticleSetMethod_t m_nSetMethod;
};

class C_INIT_InitFloatCollection {
public:
    char pad_00[472];
    CParticleCollectionFloatInput m_InputValue;
    ParticleAttributeIndex_t m_nOutputField;
    char pad_01[4];
};

class C_INIT_InitFloat {
public:
    char pad_00[472];
    CPerParticleFloatInput m_InputValue;
    ParticleAttributeIndex_t m_nOutputField;
    ParticleSetMethod_t m_nSetMethod;
    CPerParticleFloatInput m_InputStrength;
};

class C_INIT_InitVecCollection {
public:
    char pad_00[472];
    CParticleCollectionVecInput m_InputValue;
    ParticleAttributeIndex_t m_nOutputField;
    char pad_01[4];
};

class C_INIT_InitVec {
public:
    char pad_00[472];
    CPerParticleVecInput m_InputValue;
    ParticleAttributeIndex_t m_nOutputField;
    ParticleSetMethod_t m_nSetMethod;
    bool m_bNormalizedOutput;
    bool m_bWritePreviousPosition;
    char pad_01[6];
};

class C_OP_InstantaneousEmitter {
public:
    char pad_00[472];
    CParticleCollectionFloatInput m_nParticlesToEmit;
    CParticleCollectionFloatInput m_flStartTime;
    float m_flInitFromKilledParentParticles;
    EventTypeSelection_t m_nEventType;
    CParticleCollectionFloatInput m_flParentParticleScale;
    int32_t m_nMaxEmittedPerFrame;
    int32_t m_nSnapshotControlPoint;
    // CUtlString m_strSnapshotSubset;
    char pad_01[8];
};

class C_OP_ContinuousEmitter {
public:
    char pad_00[472];
    CParticleCollectionFloatInput m_flEmissionDuration;
    CParticleCollectionFloatInput m_flStartTime;
    CParticleCollectionFloatInput m_flEmitRate;
    float m_flEmissionScale;
    float m_flScalePerParentParticle;
    bool m_bInitFromKilledParentParticles;
    EventTypeSelection_t m_nEventType;
    int32_t m_nSnapshotControlPoint;
    // CUtlString m_strSnapshotSubset;
    char pad_01[12];
    int32_t m_nLimitPerUpdate;
    bool m_bForceEmitOnFirstUpdate;
    bool m_bForceEmitOnLastUpdate;
    char pad_02[10];
};

class C_OP_NoiseEmitter {
public:
    char pad_00[472];
    float m_flEmissionDuration;
    float m_flStartTime;
    float m_flEmissionScale;
    int32_t m_nScaleControlPoint;
    int32_t m_nScaleControlPointField;
    int32_t m_nWorldNoisePoint;
    bool m_bAbsVal;
    bool m_bAbsValInv;
    float m_flOffset;
    float m_flOutputMin;
    float m_flOutputMax;
    float m_flNoiseScale;
    float m_flWorldNoiseScale;
    // Vector m_vecOffsetLoc;
    char pad_01[12];
    float m_flWorldTimeScale;
};

class C_OP_MaintainEmitter {
public:
    char pad_00[472];
    CParticleCollectionFloatInput m_nParticlesToMaintain;
    float m_flStartTime;
    CParticleCollectionFloatInput m_flEmissionDuration;
    float m_flEmissionRate;
    int32_t m_nSnapshotControlPoint;
    // CUtlString m_strSnapshotSubset;
    char pad_01[8];
    bool m_bEmitInstantaneously;
    bool m_bFinalEmitOnStop;
    CParticleCollectionFloatInput m_flScale;
};

class C_OP_RandomForce {
public:
    // Vector m_MinForce;
    // Vector m_MaxForce;
    char pad_00[504];
};

class C_OP_CPVelocityForce {
public:
    char pad_00[480];
    int32_t m_nControlPointNumber;
    CPerParticleFloatInput m_flScale;
};

class C_OP_ParentVortices {
public:
    char pad_00[480];
    float m_flForceScale;
    // Vector m_vecTwistAxis;
    char pad_01[12];
    bool m_bFlipBasedOnYaw;
    char pad_02[7];
};

class C_OP_TwistAroundAxis {
public:
    char pad_00[480];
    float m_fForceAmount;
    // Vector m_TwistAxis;
    char pad_01[12];
    bool m_bLocalSpace;
    int32_t m_nControlPointNumber;
};

class C_OP_AttractToControlPoint {
public:
    // Vector m_vecComponentScale;
    char pad_00[496];
    CPerParticleFloatInput m_fForceAmount;
    float m_fFalloffPower;
    CParticleTransformInput m_TransformInput;
    CPerParticleFloatInput m_fForceAmountMin;
    bool m_bApplyMinForce;
    char pad_01[7];
};

class C_OP_ForceBasedOnDistanceToPlane {
public:
    char pad_00[480];
    float m_flMinDist;
    // Vector m_vecForceAtMinDist;
    char pad_01[12];
    float m_flMaxDist;
    // Vector m_vecForceAtMaxDist;
    // Vector m_vecPlaneNormal;
    char pad_02[24];
    int32_t m_nControlPointNumber;
    float m_flExponent;
    char pad_03[4];
};

class C_OP_TimeVaryingForce {
public:
    char pad_00[480];
    float m_flStartLerpTime;
    // Vector m_StartingForce;
    char pad_01[12];
    float m_flEndLerpTime;
    // Vector m_EndingForce;
    char pad_02[12];
};

class C_OP_TurbulenceForce {
public:
    char pad_00[480];
    float m_flNoiseCoordScale0;
    float m_flNoiseCoordScale1;
    float m_flNoiseCoordScale2;
    float m_flNoiseCoordScale3;
    // Vector m_vecNoiseAmount0;
    // Vector m_vecNoiseAmount1;
    // Vector m_vecNoiseAmount2;
    // Vector m_vecNoiseAmount3;
    char pad_01[48];
};

class C_OP_CurlNoiseForce {
public:
    char pad_00[480];
    ParticleDirectionNoiseType_t m_nNoiseType;
    CPerParticleVecInput m_vecNoiseFreq;
    CPerParticleVecInput m_vecNoiseScale;
    CPerParticleVecInput m_vecOffset;
    CPerParticleVecInput m_vecOffsetRate;
    CPerParticleFloatInput m_flWorleySeed;
    CPerParticleFloatInput m_flWorleyJitter;
};

class C_OP_PerParticleForce {
public:
    char pad_00[480];
    CPerParticleFloatInput m_flForceScale;
    CPerParticleVecInput m_vForce;
    int32_t m_nCP;
    char pad_01[4];
};

class C_OP_WindForce {
public:
    // Vector m_vForce;
    char pad_00[496];
};

class C_OP_ExternalWindForce {
public:
    char pad_00[480];
    CPerParticleVecInput m_vecSamplePosition;
    CPerParticleVecInput m_vecScale;
    bool m_bSampleWind;
    bool m_bSampleWater;
    bool m_bDampenNearWaterPlane;
    bool m_bSampleGravity;
    CPerParticleVecInput m_vecGravityForce;
    bool m_bUseBasicMovementGravity;
    CPerParticleFloatInput m_flLocalGravityScale;
    CPerParticleFloatInput m_flLocalBuoyancyScale;
    CPerParticleVecInput m_vecBuoyancyForce;
};

class C_OP_ExternalGameImpulseForce {
public:
    char pad_00[480];
    CPerParticleFloatInput m_flForceScale;
    bool m_bRopes;
    bool m_bRopesZOnly;
    bool m_bExplosions;
    bool m_bParticles;
    char pad_01[4];
};

class C_OP_LocalAccelerationForce {
public:
    char pad_00[480];
    int32_t m_nCP;
    int32_t m_nScaleCP;
    CParticleCollectionVecInput m_vecAccel;
};

class C_OP_DensityForce {
public:
    char pad_00[480];
    float m_flRadiusScale;
    float m_flForceScale;
    float m_flTargetDensity;
    char pad_01[4];
};

class C_OP_IntraParticleForce {
public:
    char pad_00[480];
    float m_flAttractionMinDistance;
    float m_flAttractionMaxDistance;
    float m_flAttractionMaxStrength;
    float m_flRepulsionMinDistance;
    float m_flRepulsionMaxDistance;
    float m_flRepulsionMaxStrength;
    bool m_bUseAABB;
    char pad_01[7];
};

class C_OP_BasicMovement {
public:
    char pad_00[464];
    CParticleCollectionVecInput m_Gravity;
    CParticleCollectionFloatInput m_fDrag;
    CParticleMassCalculationParameters m_massControls;
    int32_t m_nMaxConstraintPasses;
    bool m_bUseNewCode;
    char pad_01[3];
};

class C_OP_FadeAndKill {
public:
    char pad_00[464];
    float m_flStartFadeInTime;
    float m_flEndFadeInTime;
    float m_flStartFadeOutTime;
    float m_flEndFadeOutTime;
    float m_flStartAlpha;
    float m_flEndAlpha;
    bool m_bForcePreserveParticleOrder;
    char pad_01[7];
};

class C_OP_FadeAndKillForTracers {
public:
    char pad_00[464];
    float m_flStartFadeInTime;
    float m_flEndFadeInTime;
    float m_flStartFadeOutTime;
    float m_flEndFadeOutTime;
    float m_flStartAlpha;
    float m_flEndAlpha;
};

class C_OP_FadeIn {
public:
    char pad_00[464];
    float m_flFadeInTimeMin;
    float m_flFadeInTimeMax;
    float m_flFadeInTimeExp;
    bool m_bProportional;
    char pad_01[3];
};

class C_OP_FadeOut {
public:
    char pad_00[464];
    float m_flFadeOutTimeMin;
    float m_flFadeOutTimeMax;
    float m_flFadeOutTimeExp;
    float m_flFadeBias;
    char pad_01[48];
    bool m_bProportional;
    bool m_bEaseInAndOut;
    char pad_02[14];
};

class C_OP_FadeInSimple {
public:
    char pad_00[464];
    float m_flFadeInTime;
    ParticleAttributeIndex_t m_nFieldOutput;
};

class C_OP_FadeOutSimple {
public:
    char pad_00[464];
    float m_flFadeOutTime;
    ParticleAttributeIndex_t m_nFieldOutput;
};

class C_OP_ClampScalar {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    CPerParticleFloatInput m_flOutputMin;
    CPerParticleFloatInput m_flOutputMax;
};

class C_OP_ClampVector {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    CPerParticleVecInput m_vecOutputMin;
    CPerParticleVecInput m_vecOutputMax;
};

class C_OP_OscillateScalar {
public:
    char pad_00[464];
    float m_RateMin;
    float m_RateMax;
    float m_FrequencyMin;
    float m_FrequencyMax;
    ParticleAttributeIndex_t m_nField;
    bool m_bProportional;
    bool m_bProportionalOp;
    float m_flStartTime_min;
    float m_flStartTime_max;
    float m_flEndTime_min;
    float m_flEndTime_max;
    float m_flOscMult;
    float m_flOscAdd;
};

class C_OP_OscillateScalarSimple {
public:
    char pad_00[464];
    float m_Rate;
    float m_Frequency;
    ParticleAttributeIndex_t m_nField;
    float m_flOscMult;
    float m_flOscAdd;
    char pad_01[44];
};

class C_OP_OscillateVector {
public:
    // Vector m_RateMin;
    // Vector m_RateMax;
    // Vector m_FrequencyMin;
    // Vector m_FrequencyMax;
    char pad_00[512];
    ParticleAttributeIndex_t m_nField;
    bool m_bProportional;
    bool m_bProportionalOp;
    bool m_bOffset;
    float m_flStartTime_min;
    float m_flStartTime_max;
    float m_flEndTime_min;
    float m_flEndTime_max;
    CPerParticleFloatInput m_flOscMult;
    CPerParticleFloatInput m_flOscAdd;
    CPerParticleFloatInput m_flRateScale;
};

class C_OP_OscillateVectorSimple {
public:
    // Vector m_Rate;
    // Vector m_Frequency;
    char pad_00[488];
    ParticleAttributeIndex_t m_nField;
    float m_flOscMult;
    float m_flOscAdd;
    bool m_bOffset;
    char pad_01[3];
};

class C_OP_DifferencePreviousParticle {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldInput;
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flInputMin;
    float m_flInputMax;
    float m_flOutputMin;
    float m_flOutputMax;
    ParticleSetMethod_t m_nSetMethod;
    bool m_bActiveRange;
    bool m_bSetPreviousParticle;
    char pad_01[2];
};

class C_OP_PointVectorAtNextParticle {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    CPerParticleFloatInput m_flInterpolation;
};

class C_OP_ScreenSpacePositionOfTarget {
public:
    char pad_00[464];
    CPerParticleVecInput m_vecTargetPosition;
    bool m_bOututBehindness;
    ParticleAttributeIndex_t m_nBehindFieldOutput;
    CParticleRemapFloatInput m_flBehindOutputRemap;
    ParticleSetMethod_t m_nBehindSetMethod;
    char pad_01[4];
};

class C_OP_ScreenSpaceDistanceToEdge {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    CPerParticleFloatInput m_flMaxDistFromEdge;
    CParticleRemapFloatInput m_flOutputRemap;
    ParticleSetMethod_t m_nSetMethod;
    char pad_01[36];
};

class C_OP_ScreenSpaceRotateTowardTarget {
public:
    char pad_00[464];
    CPerParticleVecInput m_vecTargetPosition;
    CParticleRemapFloatInput m_flOutputRemap;
    ParticleSetMethod_t m_nSetMethod;
    CPerParticleFloatInput m_flScreenEdgeAlignmentDistance;
};

class C_OP_RemapScalar {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldInput;
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flInputMin;
    float m_flInputMax;
    float m_flOutputMin;
    float m_flOutputMax;
    bool m_bOldCode;
    char pad_01[7];
};

class C_OP_RemapDensityToVector {
public:
    char pad_00[464];
    float m_flRadiusScale;
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flDensityMin;
    float m_flDensityMax;
    // Vector m_vecOutputMin;
    // Vector m_vecOutputMax;
    char pad_01[24];
    bool m_bUseParentDensity;
    int32_t m_nVoxelGridResolution;
};

class C_OP_Diffusion {
public:
    char pad_00[464];
    float m_flRadiusScale;
    ParticleAttributeIndex_t m_nFieldOutput;
    int32_t m_nVoxelGridResolution;
    char pad_01[4];
};

class C_OP_RemapScalarEndCap {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldInput;
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flInputMin;
    float m_flInputMax;
    float m_flOutputMin;
    float m_flOutputMax;
};

class C_OP_ReinitializeScalarEndCap {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flOutputMin;
    float m_flOutputMax;
    char pad_01[4];
};

class C_OP_RemapScalarOnceTimed {
public:
    char pad_00[464];
    bool m_bProportional;
    ParticleAttributeIndex_t m_nFieldInput;
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flInputMin;
    float m_flInputMax;
    float m_flOutputMin;
    float m_flOutputMax;
    float m_flRemapTime;
};

class C_OP_RemapParticleCountOnScalarEndCap {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    int32_t m_nInputMin;
    int32_t m_nInputMax;
    float m_flOutputMin;
    float m_flOutputMax;
    bool m_bBackwards;
    ParticleSetMethod_t m_nSetMethod;
    char pad_01[4];
};

class C_OP_RemapParticleCountToScalar {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    CParticleCollectionFloatInput m_nInputMin;
    CParticleCollectionFloatInput m_nInputMax;
    CParticleCollectionFloatInput m_flOutputMin;
    CParticleCollectionFloatInput m_flOutputMax;
    bool m_bActiveRange;
    ParticleSetMethod_t m_nSetMethod;
};

class C_OP_RemapVisibilityScalar {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldInput;
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flInputMin;
    float m_flInputMax;
    float m_flOutputMin;
    float m_flOutputMax;
    float m_flRadiusScale;
    char pad_01[4];
};

class C_OP_RemapTransformVisibilityToScalar {
public:
    char pad_00[464];
    ParticleSetMethod_t m_nSetMethod;
    CParticleTransformInput m_TransformInput;
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flInputMin;
    float m_flInputMax;
    float m_flOutputMin;
    float m_flOutputMax;
    float m_flRadius;
};

class C_OP_RemapTransformVisibilityToVector {
public:
    char pad_00[464];
    ParticleSetMethod_t m_nSetMethod;
    CParticleTransformInput m_TransformInput;
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flInputMin;
    float m_flInputMax;
    // Vector m_vecOutputMin;
    // Vector m_vecOutputMax;
    char pad_01[24];
    float m_flRadius;
};

class C_OP_LerpScalar {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    CPerParticleFloatInput m_flOutput;
    float m_flStartTime;
    float m_flEndTime;
};

class C_OP_LerpEndCapScalar {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flOutput;
    float m_flLerpTime;
    char pad_01[4];
};

class C_OP_LerpEndCapVector {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    // Vector m_vecOutput;
    char pad_01[12];
    float m_flLerpTime;
    char pad_02[4];
};

class C_OP_LerpVector {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    // Vector m_vecOutput;
    char pad_01[12];
    float m_flStartTime;
    float m_flEndTime;
    ParticleSetMethod_t m_nSetMethod;
    char pad_02[4];
};

class C_OP_LerpToOtherAttribute {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flInterpolation;
    ParticleAttributeIndex_t m_nFieldInputFrom;
    ParticleAttributeIndex_t m_nFieldInput;
    ParticleAttributeIndex_t m_nFieldOutput;
    char pad_01[36];
};

class C_OP_RemapSpeed {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flInputMin;
    float m_flInputMax;
    float m_flOutputMin;
    float m_flOutputMax;
    ParticleSetMethod_t m_nSetMethod;
    bool m_bIgnoreDelta;
    char pad_01[7];
};

class C_OP_RemapVectortoCP {
public:
    char pad_00[464];
    int32_t m_nOutControlPointNumber;
    ParticleAttributeIndex_t m_nFieldInput;
    int32_t m_nParticleNumber;
    char pad_01[4];
};

class C_OP_RampScalarLinear {
public:
    char pad_00[464];
    float m_RateMin;
    float m_RateMax;
    float m_flStartTime_min;
    float m_flStartTime_max;
    float m_flEndTime_min;
    float m_flEndTime_max;
    char pad_01[18];
    ParticleAttributeIndex_t m_nField;
    bool m_bProportionalOp;
    char pad_02[11];
};

class C_OP_RampScalarSpline {
public:
    char pad_00[464];
    float m_RateMin;
    float m_RateMax;
    float m_flStartTime_min;
    float m_flStartTime_max;
    float m_flEndTime_min;
    float m_flEndTime_max;
    float m_flBias;
    char pad_01[18];
    ParticleAttributeIndex_t m_nField;
    bool m_bProportionalOp;
    bool m_bEaseOut;
    char pad_02[10];
};

class C_OP_RampScalarLinearSimple {
public:
    char pad_00[464];
    float m_Rate;
    float m_flStartTime;
    float m_flEndTime;
    char pad_01[2];
    ParticleAttributeIndex_t m_nField;
    char pad_02[12];
};

class C_OP_RampScalarSplineSimple {
public:
    char pad_00[464];
    float m_Rate;
    float m_flStartTime;
    float m_flEndTime;
    char pad_01[2];
    ParticleAttributeIndex_t m_nField;
    bool m_bEaseOut;
    char pad_02[11];
};

class C_OP_ChladniWave {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    CPerParticleFloatInput m_flInputMin;
    CPerParticleFloatInput m_flInputMax;
    CPerParticleFloatInput m_flOutputMin;
    CPerParticleFloatInput m_flOutputMax;
    CPerParticleVecInput m_vecWaveLength;
    CPerParticleVecInput m_vecHarmonics;
    ParticleSetMethod_t m_nSetMethod;
    int32_t m_nLocalSpaceControlPoint;
    bool m_b3D;
    char pad_01[7];
};

class C_OP_Noise {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flOutputMin;
    float m_flOutputMax;
    float m_fl4NoiseScale;
    bool m_bAdditive;
    float m_flNoiseAnimationTimeScale;
};

class C_OP_VectorNoise {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    // Vector m_vecOutputMin;
    // Vector m_vecOutputMax;
    char pad_01[24];
    float m_fl4NoiseScale;
    bool m_bAdditive;
    bool m_bOffset;
    float m_flNoiseAnimationTimeScale;
};

class C_OP_Decay {
public:
    char pad_00[464];
    bool m_bRopeDecay;
    bool m_bForcePreserveParticleOrder;
    char pad_01[6];
};

class C_OP_DecayOffscreen {
public:
    char pad_00[464];
    CParticleCollectionFloatInput m_flOffscreenTime;
};

class C_OP_EndCapTimedFreeze {
public:
    char pad_00[464];
    CParticleCollectionFloatInput m_flFreezeTime;
};

class C_OP_EndCapTimedDecay {
public:
    char pad_00[464];
    float m_flDecayTime;
    char pad_01[4];
};

class C_OP_EndCapDecay {
public:
    char pad_00[464];
};

class C_OP_VelocityDecay {
public:
    char pad_00[464];
    float m_flMinVelocity;
    char pad_01[4];
};

class C_OP_AlphaDecay {
public:
    char pad_00[464];
    float m_flMinAlpha;
    char pad_01[4];
};

class C_OP_RadiusDecay {
public:
    char pad_00[464];
    float m_flMinRadius;
    char pad_01[4];
};

class C_OP_DecayMaintainCount {
public:
    char pad_00[464];
    int32_t m_nParticlesToMaintain;
    float m_flDecayDelay;
    int32_t m_nSnapshotControlPoint;
    // CUtlString m_strSnapshotSubset;
    char pad_01[12];
    bool m_bLifespanDecay;
    CParticleCollectionFloatInput m_flScale;
    bool m_bKillNewest;
    char pad_02[7];
};

class C_OP_DecayClampCount {
public:
    char pad_00[464];
    CParticleCollectionFloatInput m_nCount;
};

class C_OP_Cull {
public:
    char pad_00[464];
    float m_flCullPerc;
    float m_flCullStart;
    float m_flCullEnd;
    float m_flCullExp;
};

class C_OP_LazyCullCompareFloat {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flComparsion1;
    CPerParticleFloatInput m_flComparsion2;
    CPerParticleFloatInput m_flCullTime;
};

class CGeneralSpin {
public:
    char pad_00[464];
    int32_t m_nSpinRateDegrees;
    int32_t m_nSpinRateMinDegrees;
    char pad_01[4];
    float m_fSpinRateStopTime;
    char pad_02[8];
};

class CSpinUpdateBase {
public:
    char pad_00[464];
};

class C_OP_Spin {
public:
    char pad_00[488];
};

class C_OP_SpinUpdate {
public:
    char pad_00[464];
};

class C_OP_SpinYaw {
public:
    char pad_00[488];
};

class C_OP_InterpolateRadius {
public:
    char pad_00[464];
    float m_flStartTime;
    float m_flEndTime;
    float m_flStartScale;
    float m_flEndScale;
    bool m_bEaseInAndOut;
    float m_flBias;
    char pad_01[56];
};

class C_OP_ColorInterpolate {
public:
    // Color m_ColorFade;
    char pad_00[480];
    float m_flFadeStartTime;
    float m_flFadeEndTime;
    ParticleAttributeIndex_t m_nFieldOutput;
    bool m_bEaseInOut;
    char pad_01[3];
};

class C_OP_ColorInterpolateRandom {
public:
    // Color m_ColorFadeMin;
    // Color m_ColorFadeMax;
    char pad_00[508];
    float m_flFadeStartTime;
    float m_flFadeEndTime;
    ParticleAttributeIndex_t m_nFieldOutput;
    bool m_bEaseInOut;
    char pad_01[7];
};

class C_OP_PositionLock {
public:
    char pad_00[464];
    CParticleTransformInput m_TransformInput;
    float m_flStartTime_min;
    float m_flStartTime_max;
    float m_flStartTime_exp;
    float m_flEndTime_min;
    float m_flEndTime_max;
    float m_flEndTime_exp;
    float m_flRange;
    CParticleCollectionFloatInput m_flRangeBias;
    float m_flJumpThreshold;
    float m_flPrevPosScale;
    bool m_bLockRot;
    CParticleCollectionVecInput m_vecScale;
    ParticleAttributeIndex_t m_nFieldOutput;
    ParticleAttributeIndex_t m_nFieldOutputPrev;
};

class C_OP_ControlpointLight {
public:
    char pad_00[464];
    float m_flScale;
    char pad_01[1164];
    int32_t m_nControlPoint1;
    int32_t m_nControlPoint2;
    int32_t m_nControlPoint3;
    int32_t m_nControlPoint4;
    // Vector m_vecCPOffset1;
    // Vector m_vecCPOffset2;
    // Vector m_vecCPOffset3;
    // Vector m_vecCPOffset4;
    char pad_02[48];
    float m_LightFiftyDist1;
    float m_LightZeroDist1;
    float m_LightFiftyDist2;
    float m_LightZeroDist2;
    float m_LightFiftyDist3;
    float m_LightZeroDist3;
    float m_LightFiftyDist4;
    float m_LightZeroDist4;
    // Color m_LightColor1;
    // Color m_LightColor2;
    // Color m_LightColor3;
    // Color m_LightColor4;
    char pad_03[16];
    bool m_bLightType1;
    bool m_bLightType2;
    bool m_bLightType3;
    bool m_bLightType4;
    bool m_bLightDynamic1;
    bool m_bLightDynamic2;
    bool m_bLightDynamic3;
    bool m_bLightDynamic4;
    bool m_bUseNormal;
    bool m_bUseHLambert;
    char pad_04[4];
    bool m_bClampLowerRange;
    bool m_bClampUpperRange;
};

class C_OP_GlobalLight {
public:
    char pad_00[464];
    float m_flScale;
    bool m_bClampLowerRange;
    bool m_bClampUpperRange;
    char pad_01[2];
};

class C_OP_SetChildControlPoints {
public:
    char pad_00[464];
    int32_t m_nChildGroupID;
    int32_t m_nFirstControlPoint;
    int32_t m_nNumControlPoints;
    CParticleCollectionFloatInput m_nFirstSourcePoint;
    bool m_bReverse;
    bool m_bSetOrientation;
    ParticleOrientationType_t m_nOrientation;
};

class C_OP_SetControlPointsToParticle {
public:
    char pad_00[464];
    int32_t m_nChildGroupID;
    int32_t m_nFirstControlPoint;
    int32_t m_nNumControlPoints;
    int32_t m_nFirstSourcePoint;
    bool m_bReverse;
    bool m_bSetOrientation;
    ParticleOrientationSetMode_t m_nOrientationMode;
    ParticleParentSetMode_t m_nSetParent;
    char pad_01[4];
};

class C_OP_SetControlPointsToModelParticles {
public:
    char pad_00[464];
    char m_HitboxSetName[128];
    char m_AttachmentName[128];
    int32_t m_nFirstControlPoint;
    int32_t m_nNumControlPoints;
    int32_t m_nFirstSourcePoint;
    bool m_bSkin;
    bool m_bAttachment;
    char pad_01[2];
};

class C_OP_SetPerChildControlPoint {
public:
    char pad_00[464];
    int32_t m_nChildGroupID;
    int32_t m_nFirstControlPoint;
    int32_t m_nNumControlPoints;
    CParticleCollectionFloatInput m_nParticleIncrement;
    CParticleCollectionFloatInput m_nFirstSourcePoint;
    bool m_bSetOrientation;
    ParticleAttributeIndex_t m_nOrientationField;
    bool m_bNumBasedOnParticleCount;
    char pad_01[7];
};

class C_OP_SetPerChildControlPointFromAttribute {
public:
    char pad_00[464];
    int32_t m_nChildGroupID;
    int32_t m_nFirstControlPoint;
    int32_t m_nNumControlPoints;
    int32_t m_nParticleIncrement;
    int32_t m_nFirstSourcePoint;
    bool m_bNumBasedOnParticleCount;
    ParticleAttributeIndex_t m_nAttributeToRead;
    int32_t m_nCPField;
};

class C_OP_RemapTransformOrientationToYaw {
public:
    char pad_00[464];
    CParticleTransformInput m_TransformInput;
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flRotOffset;
    float m_flSpinStrength;
    char pad_01[4];
};

class C_OP_DampenToCP {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber;
    float m_flRange;
    float m_flScale;
    char pad_01[4];
};

class C_OP_SetToCP {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber;
    // Vector m_vecOffset;
    char pad_01[12];
    bool m_bOffsetLocal;
    char pad_02[7];
};

class C_OP_PinParticleToCP {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber;
    CParticleCollectionVecInput m_vecOffset;
    bool m_bOffsetLocal;
    ParticleSelection_t m_nParticleSelection;
    CParticleCollectionFloatInput m_nParticleNumber;
    ParticlePinDistance_t m_nPinBreakType;
    CParticleCollectionFloatInput m_flBreakDistance;
    CParticleCollectionFloatInput m_flBreakSpeed;
    CParticleCollectionFloatInput m_flAge;
    int32_t m_nBreakControlPointNumber;
    int32_t m_nBreakControlPointNumber2;
    CParticleCollectionFloatInput m_flBreakValue;
    CPerParticleFloatInput m_flInterpolation;
    bool m_bRetainInitialVelocity;
    char pad_01[7];
};

class C_OP_PinRopeSegmentParticleToParent {
public:
    char pad_00[464];
    ParticleSelection_t m_nParticleSelection;
    CParticleCollectionFloatInput m_nParticleNumber;
    CPerParticleFloatInput m_flInterpolation;
};

class C_OP_MovementRigidAttachToCP {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber;
    int32_t m_nScaleControlPoint;
    int32_t m_nScaleCPField;
    ParticleAttributeIndex_t m_nFieldInput;
    ParticleAttributeIndex_t m_nFieldOutput;
    bool m_bOffsetLocal;
    char pad_01[3];
};

class C_OP_LerpToInitialPosition {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber;
    CPerParticleFloatInput m_flInterpolation;
    ParticleAttributeIndex_t m_nCacheField;
    CParticleCollectionFloatInput m_flScale;
    CParticleCollectionVecInput m_vecScale;
};

class C_OP_DistanceBetweenTransforms {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    CParticleTransformInput m_TransformStart;
    CParticleTransformInput m_TransformEnd;
    CPerParticleFloatInput m_flInputMin;
    CPerParticleFloatInput m_flInputMax;
    CPerParticleFloatInput m_flOutputMin;
    CPerParticleFloatInput m_flOutputMax;
    float m_flMaxTraceLength;
    float m_flLOSScale;
    char m_CollisionGroupName[128];
    ParticleTraceSet_t m_nTraceSet;
    bool m_bLOS;
    ParticleSetMethod_t m_nSetMethod;
    char pad_01[4];
};

class C_OP_PercentageBetweenTransforms {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flInputMin;
    float m_flInputMax;
    float m_flOutputMin;
    float m_flOutputMax;
    CParticleTransformInput m_TransformStart;
    CParticleTransformInput m_TransformEnd;
    ParticleSetMethod_t m_nSetMethod;
    bool m_bActiveRange;
    bool m_bRadialCheck;
    char pad_01[2];
};

class C_OP_PercentageBetweenTransformsVector {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flInputMin;
    float m_flInputMax;
    // Vector m_vecOutputMin;
    // Vector m_vecOutputMax;
    char pad_01[24];
    CParticleTransformInput m_TransformStart;
    CParticleTransformInput m_TransformEnd;
    ParticleSetMethod_t m_nSetMethod;
    bool m_bActiveRange;
    bool m_bRadialCheck;
    char pad_02[2];
};

class C_OP_PercentageBetweenTransformLerpCPs {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flInputMin;
    float m_flInputMax;
    CParticleTransformInput m_TransformStart;
    CParticleTransformInput m_TransformEnd;
    int32_t m_nOutputStartCP;
    int32_t m_nOutputStartField;
    int32_t m_nOutputEndCP;
    int32_t m_nOutputEndField;
    ParticleSetMethod_t m_nSetMethod;
    bool m_bActiveRange;
    bool m_bRadialCheck;
    char pad_01[2];
};

class C_OP_DistanceBetweenVecs {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    CPerParticleVecInput m_vecPoint1;
    CPerParticleVecInput m_vecPoint2;
    CPerParticleFloatInput m_flInputMin;
    CPerParticleFloatInput m_flInputMax;
    CPerParticleFloatInput m_flOutputMin;
    CPerParticleFloatInput m_flOutputMax;
    ParticleSetMethod_t m_nSetMethod;
    bool m_bDeltaTime;
    char pad_01[3];
};

class C_OP_DirectionBetweenVecsToVec {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    CPerParticleVecInput m_vecPoint1;
    CPerParticleVecInput m_vecPoint2;
};

class C_OP_DistanceToTransform {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    CPerParticleFloatInput m_flInputMin;
    CPerParticleFloatInput m_flInputMax;
    CPerParticleFloatInput m_flOutputMin;
    CPerParticleFloatInput m_flOutputMax;
    CParticleTransformInput m_TransformStart;
    bool m_bLOS;
    char m_CollisionGroupName[128];
    ParticleTraceSet_t m_nTraceSet;
    float m_flMaxTraceLength;
    float m_flLOSScale;
    ParticleSetMethod_t m_nSetMethod;
    bool m_bActiveRange;
    bool m_bAdditive;
    CPerParticleVecInput m_vecComponentScale;
};

class C_OP_CylindricalDistanceToTransform {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    CPerParticleFloatInput m_flInputMin;
    CPerParticleFloatInput m_flInputMax;
    CPerParticleFloatInput m_flOutputMin;
    CPerParticleFloatInput m_flOutputMax;
    CParticleTransformInput m_TransformStart;
    CParticleTransformInput m_TransformEnd;
    ParticleSetMethod_t m_nSetMethod;
    bool m_bActiveRange;
    bool m_bAdditive;
    bool m_bCapsule;
    char pad_01[1];
};

class C_OP_RtEnvCull {
public:
    // Vector m_vecTestDir;
    // Vector m_vecTestNormal;
    char pad_00[488];
    bool m_bCullOnMiss;
    bool m_bStickInsteadOfCull;
    char m_RtEnvName[128];
    int32_t m_nRTEnvCP;
    int32_t m_nComponent;
    char pad_01[4];
};

class C_OP_MovementLoopInsideSphere {
public:
    char pad_00[464];
    int32_t m_nCP;
    CParticleCollectionFloatInput m_flDistance;
    CParticleCollectionVecInput m_vecScale;
    ParticleAttributeIndex_t m_nDistSqrAttr;
    char pad_01[4];
};

class C_OP_MoveToHitbox {
public:
    char pad_00[464];
    CParticleModelInput m_modelInput;
    CParticleTransformInput m_transformInput;
    char pad_01[4];
    float m_flLifeTimeLerpStart;
    float m_flLifeTimeLerpEnd;
    float m_flPrevPosScale;
    char m_HitboxSetName[128];
    bool m_bUseBones;
    HitboxLerpType_t m_nLerpType;
    CPerParticleFloatInput m_flInterpolation;
};

class C_OP_LockToBone {
public:
    char pad_00[464];
    CParticleModelInput m_modelInput;
    CParticleTransformInput m_transformInput;
    float m_flLifeTimeFadeStart;
    float m_flLifeTimeFadeEnd;
    float m_flJumpThreshold;
    float m_flPrevPosScale;
    char m_HitboxSetName[128];
    bool m_bRigid;
    bool m_bUseBones;
    ParticleAttributeIndex_t m_nFieldOutput;
    ParticleAttributeIndex_t m_nFieldOutputPrev;
    ParticleRotationLockType_t m_nRotationSetType;
    bool m_bRigidRotationLock;
    CPerParticleVecInput m_vecRotation;
    CPerParticleFloatInput m_flRotLerp;
};

class C_OP_SnapshotRigidSkinToBones {
public:
    char pad_00[464];
    bool m_bTransformNormals;
    bool m_bTransformRadii;
    int32_t m_nControlPointNumber;
};

class C_OP_SnapshotSkinToBones {
public:
    char pad_00[464];
    bool m_bTransformNormals;
    bool m_bTransformRadii;
    int32_t m_nControlPointNumber;
    float m_flLifeTimeFadeStart;
    float m_flLifeTimeFadeEnd;
    float m_flJumpThreshold;
    float m_flPrevPosScale;
};

class C_OP_CPOffsetToPercentageBetweenCPs {
public:
    char pad_00[464];
    float m_flInputMin;
    float m_flInputMax;
    float m_flInputBias;
    int32_t m_nStartCP;
    int32_t m_nEndCP;
    int32_t m_nOffsetCP;
    int32_t m_nOuputCP;
    int32_t m_nInputCP;
    bool m_bRadialCheck;
    bool m_bScaleOffset;
    // Vector m_vecOffset;
    char pad_01[14];
};

class C_OP_PlaneCull {
public:
    char pad_00[464];
    int32_t m_nPlaneControlPoint;
    CParticleCollectionVecInput m_vecPlaneDirection;
    bool m_bLocalSpace;
    float m_flPlaneOffset;
};

class C_OP_DistanceCull {
public:
    char pad_00[464];
    int32_t m_nControlPoint;
    // Vector m_vecPointOffset;
    char pad_01[8];
    CParticleCollectionFloatInput m_flDistance;
    bool m_bCullInside;
    ParticleAttributeIndex_t m_nAttribute;
};

class C_OP_ModelCull {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber;
    bool m_bBoundBox;
    bool m_bCullOutside;
    bool m_bUseBones;
    char m_HitboxSetName[128];
    char pad_01[1];
};

class C_OP_ModelDampenMovement {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber;
    bool m_bBoundBox;
    bool m_bOutside;
    bool m_bUseBones;
    char m_HitboxSetName[128];
    CPerParticleVecInput m_vecPosOffset;
    float m_fDrag;
    char pad_01[4];
};

class C_OP_SequenceFromModel {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber;
    ParticleAttributeIndex_t m_nFieldOutput;
    ParticleAttributeIndex_t m_nFieldOutputAnim;
    float m_flInputMin;
    float m_flInputMax;
    float m_flOutputMin;
    float m_flOutputMax;
    ParticleSetMethod_t m_nSetMethod;
};

class C_OP_VelocityMatchingForce {
public:
    char pad_00[464];
    float m_flDirScale;
    float m_flSpdScale;
    float m_flNeighborDistance;
    float m_flFacingStrength;
    bool m_bUseAABB;
    int32_t m_nCPBroadcast;
};

class C_OP_MovementMaintainOffset {
public:
    // Vector m_vecOffset;
    char pad_00[476];
    int32_t m_nCP;
    bool m_bRadiusScale;
    char pad_01[7];
};

class C_OP_MovementPlaceOnGround {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flOffset;
    float m_flMaxTraceLength;
    float m_flTolerance;
    float m_flTraceOffset;
    float m_flLerpRate;
    char m_CollisionGroupName[128];
    ParticleTraceSet_t m_nTraceSet;
    int32_t m_nRefCP1;
    int32_t m_nRefCP2;
    int32_t m_nLerpCP;
    char pad_01[8];
    ParticleTraceMissBehavior_t m_nTraceMissBehavior;
    bool m_bIncludeShotHull;
    bool m_bIncludeWater;
    char pad_02[2];
    bool m_bSetNormal;
    bool m_bScaleOffset;
    int32_t m_nPreserveOffsetCP;
    int32_t m_nIgnoreCP;
    char pad_03[4];
};

class C_OP_InheritFromParentParticles {
public:
    char pad_00[464];
    float m_flScale;
    ParticleAttributeIndex_t m_nFieldOutput;
    int32_t m_nIncrement;
    bool m_bRandomDistribution;
    char pad_01[3];
};

class C_OP_InheritFromParentParticlesV2 {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flScale;
    ParticleAttributeIndex_t m_nFieldOutput;
    CPerParticleFloatInput m_nIncrement;
    bool m_bRandomDistribution;
    bool m_bReverse;
    MissingParentInheritBehavior_t m_nMissingParentBehavior;
    CPerParticleFloatInput m_flInterpolation;
};

class C_OP_ReadFromNeighboringParticle {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldInput;
    ParticleAttributeIndex_t m_nFieldOutput;
    int32_t m_nIncrement;
    CPerParticleFloatInput m_DistanceCheck;
    CPerParticleFloatInput m_flInterpolation;
};

class C_OP_InheritFromPeerSystem {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    ParticleAttributeIndex_t m_nFieldInput;
    int32_t m_nIncrement;
    int32_t m_nGroupID;
};

class C_OP_RemapVectorComponentToScalar {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldInput;
    ParticleAttributeIndex_t m_nFieldOutput;
    int32_t m_nComponent;
    char pad_01[4];
};

class C_OP_OrientTo2dDirection {
public:
    char pad_00[464];
    float m_flRotOffset;
    float m_flSpinStrength;
    ParticleAttributeIndex_t m_nFieldOutput;
    char pad_01[4];
};

class C_OP_RestartAfterDuration {
public:
    char pad_00[464];
    float m_flDurationMin;
    float m_flDurationMax;
    int32_t m_nCP;
    int32_t m_nCPField;
    int32_t m_nChildGroupID;
    bool m_bOnlyChildren;
    char pad_01[3];
};

class C_OP_Orient2DRelToCP {
public:
    char pad_00[464];
    float m_flRotOffset;
    float m_flSpinStrength;
    int32_t m_nCP;
    ParticleAttributeIndex_t m_nFieldOutput;
};

class C_OP_MovementRotateParticleAroundAxis {
public:
    char pad_00[464];
    CParticleCollectionVecInput m_vecRotAxis;
    CParticleCollectionFloatInput m_flRotRate;
    CParticleTransformInput m_TransformInput;
    bool m_bLocalSpace;
    char pad_01[7];
};

class C_OP_RotateVector {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    // Vector m_vecRotAxisMin;
    // Vector m_vecRotAxisMax;
    char pad_01[24];
    float m_flRotRateMin;
    float m_flRotRateMax;
    bool m_bNormalize;
    CPerParticleFloatInput m_flScale;
};

class C_OP_MaxVelocity {
public:
    char pad_00[464];
    float m_flMaxVelocity;
    float m_flMinVelocity;
    int32_t m_nOverrideCP;
    int32_t m_nOverrideCPField;
};

class C_OP_LagCompensation {
public:
    char pad_00[464];
    int32_t m_nDesiredVelocityCP;
    int32_t m_nLatencyCP;
    int32_t m_nLatencyCPField;
    int32_t m_nDesiredVelocityCPField;
};

class C_OP_MaintainSequentialPath {
public:
    char pad_00[464];
    float m_fMaxDistance;
    float m_flNumToAssign;
    float m_flCohesionStrength;
    float m_flTolerance;
    bool m_bLoop;
    bool m_bUseParticleCount;
    CPathParameters m_PathParams;
};

class C_OP_LockToSavedSequentialPathV2 {
public:
    char pad_00[464];
    float m_flFadeStart;
    float m_flFadeEnd;
    bool m_bCPPairs;
    CPathParameters m_PathParams;
};

class C_OP_LockToSavedSequentialPath {
public:
    char pad_00[468];
    float m_flFadeStart;
    float m_flFadeEnd;
    bool m_bCPPairs;
    CPathParameters m_PathParams;
};

class C_OP_RemapDotProductToScalar {
public:
    char pad_00[464];
    int32_t m_nInputCP1;
    int32_t m_nInputCP2;
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flInputMin;
    float m_flInputMax;
    float m_flOutputMin;
    float m_flOutputMax;
    bool m_bUseParticleVelocity;
    ParticleSetMethod_t m_nSetMethod;
    bool m_bActiveRange;
    bool m_bUseParticleNormal;
    char pad_01[2];
};

class C_OP_RemapCPtoScalar {
public:
    char pad_00[464];
    int32_t m_nCPInput;
    ParticleAttributeIndex_t m_nFieldOutput;
    int32_t m_nField;
    float m_flInputMin;
    float m_flInputMax;
    float m_flOutputMin;
    float m_flOutputMax;
    float m_flStartTime;
    float m_flEndTime;
    float m_flInterpRate;
    ParticleSetMethod_t m_nSetMethod;
    char pad_01[4];
};

class C_OP_NormalLock {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber;
    char pad_01[4];
};

class C_OP_RemapCPtoVector {
public:
    char pad_00[464];
    int32_t m_nCPInput;
    ParticleAttributeIndex_t m_nFieldOutput;
    int32_t m_nLocalSpaceCP;
    // Vector m_vInputMin;
    // Vector m_vInputMax;
    // Vector m_vOutputMin;
    // Vector m_vOutputMax;
    char pad_01[48];
    float m_flStartTime;
    float m_flEndTime;
    float m_flInterpRate;
    ParticleSetMethod_t m_nSetMethod;
    bool m_bOffset;
    bool m_bAccelerate;
    char pad_02[2];
};

class C_OP_SetCPtoVector {
public:
    char pad_00[464];
    int32_t m_nCPInput;
    ParticleAttributeIndex_t m_nFieldOutput;
};

class C_OP_RemapTransformToVelocity {
public:
    char pad_00[464];
    CParticleTransformInput m_TransformInput;
};

class C_OP_RemapVelocityToVector {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flScale;
    bool m_bNormalize;
    char pad_01[7];
};

class C_OP_RemapCPVelocityToVector {
public:
    char pad_00[464];
    int32_t m_nControlPoint;
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flScale;
    bool m_bNormalize;
    char pad_01[3];
};

class C_OP_SetCPOrientationToDirection {
public:
    char pad_00[464];
    int32_t m_nInputControlPoint;
    int32_t m_nOutputControlPoint;
};

class C_OP_RemapDirectionToCPToVector {
public:
    char pad_00[464];
    int32_t m_nCP;
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flScale;
    float m_flOffsetRot;
    // Vector m_vecOffsetAxis;
    char pad_01[12];
    bool m_bNormalize;
    ParticleAttributeIndex_t m_nFieldStrength;
    char pad_02[4];
};

class C_OP_RemapCrossProductOfTwoVectorsToVector {
public:
    char pad_00[464];
    CPerParticleVecInput m_InputVec1;
    CPerParticleVecInput m_InputVec2;
    ParticleAttributeIndex_t m_nFieldOutput;
    bool m_bNormalize;
    char pad_01[3];
};

class C_OP_NormalizeVector {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flScale;
};

class C_OP_RemapControlPointDirectionToVector {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flScale;
    int32_t m_nControlPointNumber;
    char pad_01[4];
};

class C_OP_SetCPOrientationToGroundNormal {
public:
    char pad_00[464];
    float m_flInterpRate;
    float m_flMaxTraceLength;
    float m_flTolerance;
    float m_flTraceOffset;
    char m_CollisionGroupName[128];
    ParticleTraceSet_t m_nTraceSet;
    int32_t m_nInputCP;
    int32_t m_nOutputCP;
    char pad_01[12];
    bool m_bIncludeWater;
    char pad_02[7];
};

class C_OP_RemapTransformOrientationToRotations {
public:
    char pad_00[464];
    CParticleTransformInput m_TransformInput;
    // Vector m_vecRotation;
    char pad_01[12];
    bool m_bUseQuat;
    bool m_bWriteNormal;
    char pad_02[2];
};

class C_OP_RemapControlPointOrientationToRotation {
public:
    char pad_00[464];
    int32_t m_nCP;
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flOffsetRot;
    int32_t m_nComponent;
};

class C_OP_LockToPointList {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    // CUtlVector< PointDefinition_t > m_pointList;
    char pad_01[28];
    bool m_bPlaceAlongPath;
    bool m_bClosedLoop;
    int32_t m_nNumPointsAlongPath;
};

class C_OP_RemapNamedModelElementOnceTimed {
public:
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    // CUtlVector< CUtlString > m_inNames;
    // CUtlVector< CUtlString > m_outNames;
    // CUtlVector< CUtlString > m_fallbackNames;
    char pad_00[544];
    bool m_bModelFromRenderer;
    bool m_bProportional;
    ParticleAttributeIndex_t m_nFieldInput;
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flRemapTime;
};

class C_OP_RemapNamedModelSequenceOnceTimed {
public:
    char pad_00[560];
};

class C_OP_RemapNamedModelBodyPartOnceTimed {
public:
    char pad_00[560];
};

class C_OP_RemapNamedModelMeshGroupOnceTimed {
public:
    char pad_00[560];
};

class C_OP_RemapNamedModelElementEndCap {
public:
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    // CUtlVector< CUtlString > m_inNames;
    // CUtlVector< CUtlString > m_outNames;
    // CUtlVector< CUtlString > m_fallbackNames;
    char pad_00[544];
    bool m_bModelFromRenderer;
    ParticleAttributeIndex_t m_nFieldInput;
    ParticleAttributeIndex_t m_nFieldOutput;
    char pad_01[4];
};

class C_OP_RemapNamedModelSequenceEndCap {
public:
    char pad_00[560];
};

class C_OP_RemapNamedModelBodyPartEndCap {
public:
    char pad_00[560];
};

class C_OP_RemapNamedModelMeshGroupEndCap {
public:
    char pad_00[560];
};

class C_OP_SetFromCPSnapshot {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber;
    // CUtlString m_strSnapshotSubset;
    ParticleAttributeIndex_t m_nAttributeToRead;
    ParticleAttributeIndex_t m_nAttributeToWrite;
    int32_t m_nLocalSpaceCP;
    bool m_bRandom;
    bool m_bReverse;
    int32_t m_nRandomSeed;
    CParticleCollectionFloatInput m_nSnapShotStartPoint;
    CParticleCollectionFloatInput m_nSnapShotIncrement;
    CPerParticleFloatInput m_flInterpolation;
    bool m_bSubSample;
    bool m_bPrev;
    char pad_01[6];
};

class C_OP_VectorFieldSnapshot {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber;
    ParticleAttributeIndex_t m_nAttributeToWrite;
    int32_t m_nLocalSpaceCP;
    CPerParticleFloatInput m_flInterpolation;
    CPerParticleVecInput m_vecScale;
    float m_flBoundaryDampening;
    bool m_bSetVelocity;
    bool m_bLockToSurface;
    float m_flGridSpacing;
    char pad_01[4];
};

class C_OP_SetAttributeToScalarExpression {
public:
    char pad_00[464];
    ScalarExpressionType_t m_nExpression;
    CPerParticleFloatInput m_flInput1;
    CPerParticleFloatInput m_flInput2;
    CParticleRemapFloatInput m_flOutputRemap;
    ParticleAttributeIndex_t m_nOutputField;
    ParticleSetMethod_t m_nSetMethod;
    char pad_01[32];
};

class C_OP_SetVectorAttributeToVectorExpression {
public:
    char pad_00[464];
    VectorExpressionType_t m_nExpression;
    CPerParticleVecInput m_vInput1;
    CPerParticleVecInput m_vInput2;
    CPerParticleFloatInput m_flLerp;
    ParticleAttributeIndex_t m_nOutputField;
    ParticleSetMethod_t m_nSetMethod;
    bool m_bNormalizedOutput;
    char pad_01[111];
};

class C_OP_SetFloatAttributeToVectorExpression {
public:
    char pad_00[464];
    VectorFloatExpressionType_t m_nExpression;
    CPerParticleVecInput m_vInput1;
    CPerParticleVecInput m_vInput2;
    CParticleRemapFloatInput m_flOutputRemap;
    ParticleAttributeIndex_t m_nOutputField;
    ParticleSetMethod_t m_nSetMethod;
};

class C_OP_RemapGravityToVector {
public:
    char pad_00[464];
    CPerParticleVecInput m_vInput1;
    ParticleAttributeIndex_t m_nOutputField;
    ParticleSetMethod_t m_nSetMethod;
    bool m_bNormalizedOutput;
    char pad_01[111];
};

class C_OP_MovementSkinnedPositionFromCPSnapshot {
public:
    char pad_00[464];
    int32_t m_nSnapshotControlPointNumber;
    int32_t m_nControlPointNumber;
    bool m_bRandom;
    int32_t m_nRandomSeed;
    bool m_bSetNormal;
    bool m_bSetRadius;
    SnapshotIndexType_t m_nIndexType;
    CPerParticleFloatInput m_flReadIndex;
    CParticleCollectionFloatInput m_flIncrement;
    CParticleCollectionFloatInput m_nFullLoopIncrement;
    CParticleCollectionFloatInput m_nSnapShotStartPoint;
    CPerParticleFloatInput m_flInterpolation;
};

class C_OP_MovementMoveAlongSkinnedCPSnapshot {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber;
    int32_t m_nSnapshotControlPointNumber;
    bool m_bSetNormal;
    bool m_bSetRadius;
    CPerParticleFloatInput m_flInterpolation;
    CPerParticleFloatInput m_flTValue;
};

class C_OP_QuantizeFloat {
public:
    char pad_00[464];
    CPerParticleFloatInput m_InputValue;
    ParticleAttributeIndex_t m_nOutputField;
    char pad_01[44];
};

class C_OP_SetUserEvent {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flInput;
    CPerParticleFloatInput m_flRisingEdge;
    EventTypeSelection_t m_nRisingEventType;
    CPerParticleFloatInput m_flFallingEdge;
    EventTypeSelection_t m_nFallingEventType;
    char pad_01[4];
};

class C_OP_SetFloatCollection {
public:
    char pad_00[464];
    CParticleCollectionFloatInput m_InputValue;
    ParticleAttributeIndex_t m_nOutputField;
    ParticleSetMethod_t m_nSetMethod;
    CParticleCollectionFloatInput m_Lerp;
    char pad_01[40];
};

class C_OP_SetFloat {
public:
    char pad_00[464];
    CPerParticleFloatInput m_InputValue;
    ParticleAttributeIndex_t m_nOutputField;
    ParticleSetMethod_t m_nSetMethod;
    CPerParticleFloatInput m_Lerp;
    char pad_01[40];
};

class C_OP_SetVec {
public:
    char pad_00[464];
    CPerParticleVecInput m_InputValue;
    ParticleAttributeIndex_t m_nOutputField;
    ParticleSetMethod_t m_nSetMethod;
    CPerParticleFloatInput m_Lerp;
    bool m_bNormalizedOutput;
    char pad_01[7];
};

class C_OP_DragRelativeToPlane {
public:
    char pad_00[464];
    CParticleCollectionFloatInput m_flDragAtPlane;
    CParticleCollectionFloatInput m_flFalloff;
    bool m_bDirectional;
    CParticleCollectionVecInput m_vecPlaneNormal;
    int32_t m_nControlPointNumber;
    char pad_01[4];
};

class C_OP_RemapDensityGradientToVectorAttribute {
public:
    char pad_00[464];
    float m_flRadiusScale;
    ParticleAttributeIndex_t m_nFieldOutput;
};

class C_OP_LockPoints {
public:
    char pad_00[464];
    int32_t m_nMinCol;
    int32_t m_nMaxCol;
    int32_t m_nMinRow;
    int32_t m_nMaxRow;
    int32_t m_nControlPoint;
    float m_flBlendValue;
};

class C_OP_RemapDistanceToLineSegmentBase {
public:
    char pad_00[464];
    int32_t m_nCP0;
    int32_t m_nCP1;
    float m_flMinInputValue;
    float m_flMaxInputValue;
    bool m_bInfiniteLine;
    char pad_01[7];
};

class C_OP_RemapDistanceToLineSegmentToScalar {
public:
    char pad_00[488];
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flMinOutputValue;
    float m_flMaxOutputValue;
    char pad_01[4];
};

class C_OP_RemapDistanceToLineSegmentToVector {
public:
    char pad_00[488];
    ParticleAttributeIndex_t m_nFieldOutput;
    // Vector m_vMinOutputValue;
    // Vector m_vMaxOutputValue;
    char pad_01[28];
};

class C_OP_TeleportBeam {
public:
    char pad_00[464];
    int32_t m_nCPPosition;
    int32_t m_nCPVelocity;
    int32_t m_nCPMisc;
    int32_t m_nCPColor;
    int32_t m_nCPInvalidColor;
    int32_t m_nCPExtraArcData;
    // Vector m_vGravity;
    char pad_01[12];
    float m_flArcMaxDuration;
    float m_flSegmentBreak;
    float m_flArcSpeed;
    float m_flAlpha;
    char pad_02[4];
};

class C_OP_CycleScalar {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nDestField;
    float m_flStartValue;
    float m_flEndValue;
    float m_flCycleTime;
    bool m_bDoNotRepeatCycle;
    bool m_bSynchronizeParticles;
    int32_t m_nCPScale;
    int32_t m_nCPFieldMin;
    int32_t m_nCPFieldMax;
    ParticleSetMethod_t m_nSetMethod;
    char pad_01[4];
};

class C_OP_CalculateVectorAttribute {
public:
    // Vector m_vStartValue;
    char pad_00[476];
    ParticleAttributeIndex_t m_nFieldInput1;
    float m_flInputScale1;
    ParticleAttributeIndex_t m_nFieldInput2;
    float m_flInputScale2;
    ControlPointReference_t m_nControlPointInput1;
    float m_flControlPointScale1;
    ControlPointReference_t m_nControlPointInput2;
    float m_flControlPointScale2;
    ParticleAttributeIndex_t m_nFieldOutput;
    // Vector m_vFinalOutputScale;
    char pad_01[16];
};

class C_OP_ColorAdjustHSL {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flHueAdjust;
    CPerParticleFloatInput m_flSaturationAdjust;
    CPerParticleFloatInput m_flLightnessAdjust;
};

class C_OP_ConnectParentParticleToNearest {
public:
    char pad_00[464];
    int32_t m_nFirstControlPoint;
    int32_t m_nSecondControlPoint;
    bool m_bUseRadius;
    CParticleCollectionFloatInput m_flRadiusScale;
    CParticleCollectionFloatInput m_flParentRadiusScale;
};

class C_OP_UpdateLightSource {
public:
    // Color m_vColorTint;
    char pad_00[468];
    float m_flBrightnessScale;
    float m_flRadiusScale;
    float m_flMinimumLightingRadius;
    float m_flMaximumLightingRadius;
    float m_flPositionDampingConstant;
};

class C_OP_RemapSpeedtoCP {
public:
    char pad_00[472];
    int32_t m_nInControlPointNumber;
    int32_t m_nOutControlPointNumber;
    int32_t m_nField;
    float m_flInputMin;
    float m_flInputMax;
    float m_flOutputMin;
    float m_flOutputMax;
    bool m_bUseDeltaV;
    char pad_01[3];
};

class C_OP_RemapAverageHitboxSpeedtoCP {
public:
    char pad_00[472];
    int32_t m_nInControlPointNumber;
    int32_t m_nOutControlPointNumber;
    int32_t m_nField;
    ParticleHitboxDataSelection_t m_nHitboxDataType;
    CParticleCollectionFloatInput m_flInputMin;
    CParticleCollectionFloatInput m_flInputMax;
    CParticleCollectionFloatInput m_flOutputMin;
    CParticleCollectionFloatInput m_flOutputMax;
    int32_t m_nHeightControlPointNumber;
    CParticleCollectionVecInput m_vecComparisonVelocity;
    char m_HitboxSetName[128];
};

class C_OP_RemapDotProductToCP {
public:
    char pad_00[472];
    int32_t m_nInputCP1;
    int32_t m_nInputCP2;
    int32_t m_nOutputCP;
    int32_t m_nOutVectorField;
    CParticleCollectionFloatInput m_flInputMin;
    CParticleCollectionFloatInput m_flInputMax;
    CParticleCollectionFloatInput m_flOutputMin;
    CParticleCollectionFloatInput m_flOutputMax;
};

class C_OP_SetControlPointFieldToScalarExpression {
public:
    char pad_00[472];
    ScalarExpressionType_t m_nExpression;
    CParticleCollectionFloatInput m_flInput1;
    CParticleCollectionFloatInput m_flInput2;
    CParticleRemapFloatInput m_flOutputRemap;
    int32_t m_nOutputCP;
    int32_t m_nOutVectorField;
    CParticleCollectionFloatInput m_flInterpolation;
};

class C_OP_SetControlPointFieldFromVectorExpression {
public:
    char pad_00[472];
    VectorFloatExpressionType_t m_nExpression;
    CParticleCollectionVecInput m_vecInput1;
    CParticleCollectionVecInput m_vecInput2;
    CPerParticleFloatInput m_flLerp;
    CParticleRemapFloatInput m_flOutputRemap;
    int32_t m_nOutputCP;
    int32_t m_nOutVectorField;
};

class C_OP_SetControlPointToVectorExpression {
public:
    char pad_00[472];
    VectorExpressionType_t m_nExpression;
    int32_t m_nOutputCP;
    CParticleCollectionVecInput m_vInput1;
    CParticleCollectionVecInput m_vInput2;
    CPerParticleFloatInput m_flLerp;
    bool m_bNormalizedOutput;
    char pad_01[7];
};

class C_OP_RemapModelVolumetoCP {
public:
    char pad_00[472];
    BBoxVolumeType_t m_nBBoxType;
    int32_t m_nInControlPointNumber;
    int32_t m_nOutControlPointNumber;
    int32_t m_nOutControlPointMaxNumber;
    int32_t m_nField;
    float m_flInputMin;
    float m_flInputMax;
    float m_flOutputMin;
    float m_flOutputMax;
    bool m_bBBoxOnly;
    bool m_bCubeRoot;
    char pad_01[2];
};

class C_OP_RemapBoundingVolumetoCP {
public:
    char pad_00[472];
    int32_t m_nOutControlPointNumber;
    float m_flInputMin;
    float m_flInputMax;
    float m_flOutputMin;
    float m_flOutputMax;
    char pad_01[4];
};

class C_OP_RemapAverageScalarValuetoCP {
public:
    char pad_00[472];
    SetStatisticExpressionType_t m_nExpression;
    CParticleCollectionFloatInput m_flDecimalPlaces;
    int32_t m_nOutControlPointNumber;
    int32_t m_nOutVectorField;
    ParticleAttributeIndex_t m_nField;
    CParticleRemapFloatInput m_flOutputRemap;
};

class C_OP_RampCPLinearRandom {
public:
    char pad_00[472];
    int32_t m_nOutControlPointNumber;
    // Vector m_vecRateMin;
    // Vector m_vecRateMax;
    char pad_01[28];
};

class C_OP_SetParentControlPointsToChildCP {
public:
    char pad_00[472];
    int32_t m_nChildGroupID;
    int32_t m_nChildControlPoint;
    int32_t m_nNumControlPoints;
    int32_t m_nFirstSourcePoint;
    bool m_bSetOrientation;
    char pad_01[7];
};

class C_OP_SetVariable {
public:
    char pad_00[472];
    CParticleVariableRef m_variableReference;
    CParticleTransformInput m_transformInput;
    // Vector m_positionOffset;
    // QAngle m_rotationOffset;
    char pad_01[24];
    CParticleCollectionVecInput m_vecInput;
    CParticleCollectionFloatInput m_floatInput;
};

class C_OP_SetControlPointPositions {
public:
    char pad_00[472];
    bool m_bUseWorldLocation;
    bool m_bOrient;
    bool m_bSetOnce;
    int32_t m_nCP1;
    int32_t m_nCP2;
    int32_t m_nCP3;
    int32_t m_nCP4;
    // Vector m_vecCP1Pos;
    // Vector m_vecCP2Pos;
    // Vector m_vecCP3Pos;
    // Vector m_vecCP4Pos;
    char pad_01[48];
    int32_t m_nHeadLocation;
};

class C_OP_SetSingleControlPointPosition {
public:
    char pad_00[472];
    bool m_bSetOnce;
    int32_t m_nCP1;
    CParticleCollectionVecInput m_vecCP1Pos;
    CParticleTransformInput m_transformInput;
};

class C_OP_SetControlPointPositionToRandomActiveCP {
public:
    char pad_00[472];
    int32_t m_nCP1;
    int32_t m_nHeadLocationMin;
    int32_t m_nHeadLocationMax;
    CParticleCollectionFloatInput m_flResetRate;
};

class C_OP_SetRandomControlPointPosition {
public:
    char pad_00[472];
    bool m_bUseWorldLocation;
    bool m_bOrient;
    int32_t m_nCP1;
    int32_t m_nHeadLocation;
    CParticleCollectionFloatInput m_flReRandomRate;
    // Vector m_vecCPMinPos;
    // Vector m_vecCPMaxPos;
    char pad_01[24];
    CParticleCollectionFloatInput m_flInterpolation;
};

class C_OP_SetControlPointOrientation {
public:
    char pad_00[472];
    bool m_bUseWorldLocation;
    char pad_01[1];
    bool m_bRandomize;
    bool m_bSetOnce;
    int32_t m_nCP;
    int32_t m_nHeadLocation;
    // QAngle m_vecRotation;
    // QAngle m_vecRotationB;
    char pad_02[24];
    CParticleCollectionFloatInput m_flInterpolation;
};

class C_OP_SetControlPointFromObjectScale {
public:
    char pad_00[472];
    int32_t m_nCPInput;
    int32_t m_nCPOutput;
};

class C_OP_DistanceBetweenCPsToCP {
public:
    char pad_00[472];
    int32_t m_nStartCP;
    int32_t m_nEndCP;
    int32_t m_nOutputCP;
    int32_t m_nOutputCPField;
    bool m_bSetOnce;
    float m_flInputMin;
    float m_flInputMax;
    float m_flOutputMin;
    float m_flOutputMax;
    float m_flMaxTraceLength;
    float m_flLOSScale;
    bool m_bLOS;
    char m_CollisionGroupName[128];
    ParticleTraceSet_t m_nTraceSet;
    ParticleParentSetMode_t m_nSetParent;
};

class C_OP_SetControlPointToPlayer {
public:
    char pad_00[472];
    int32_t m_nCP1;
    // Vector m_vecCP1Pos;
    char pad_01[12];
    bool m_bOrientToEyes;
    ParticleEntityPos_t m_nPosition;
};

class C_OP_SetControlPointToHand {
public:
    char pad_00[472];
    int32_t m_nCP1;
    int32_t m_nHand;
    // Vector m_vecCP1Pos;
    char pad_01[12];
    bool m_bOrientToHand;
    char pad_02[3];
};

class C_OP_SetControlPointToHMD {
public:
    char pad_00[472];
    int32_t m_nCP1;
    // Vector m_vecCP1Pos;
    char pad_01[12];
    bool m_bOrientToHMD;
    char pad_02[7];
};

class C_OP_SetControlPointPositionToTimeOfDayValue {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber;
    char m_pszTimeOfDayParameter[128];
    // Vector m_vecDefaultValue;
    char pad_01[20];
};

class C_OP_SetControlPointToCenter {
public:
    char pad_00[472];
    int32_t m_nCP1;
    // Vector m_vecCP1Pos;
    char pad_01[12];
    bool m_bUseAvgParticlePos;
    ParticleParentSetMode_t m_nSetParent;
};

class C_OP_SetControlPointToCPVelocity {
public:
    char pad_00[472];
    int32_t m_nCPInput;
    int32_t m_nCPOutputVel;
    bool m_bNormalize;
    int32_t m_nCPOutputMag;
    int32_t m_nCPField;
    CParticleCollectionVecInput m_vecComparisonVelocity;
};

class C_OP_SetControlPointOrientationToCPVelocity {
public:
    char pad_00[472];
    int32_t m_nCPInput;
    int32_t m_nCPOutput;
};

class C_OP_StopAfterCPDuration {
public:
    char pad_00[472];
    CParticleCollectionFloatInput m_flDuration;
    bool m_bDestroyImmediately;
    bool m_bPlayEndCap;
    char pad_01[6];
};

class C_OP_SetControlPointRotation {
public:
    char pad_00[472];
    CParticleCollectionVecInput m_vecRotAxis;
    CParticleCollectionFloatInput m_flRotRate;
    int32_t m_nCP;
    int32_t m_nLocalCP;
};

class C_OP_RemapCPtoCP {
public:
    char pad_00[472];
    int32_t m_nInputControlPoint;
    int32_t m_nOutputControlPoint;
    int32_t m_nInputField;
    int32_t m_nOutputField;
    float m_flInputMin;
    float m_flInputMax;
    float m_flOutputMin;
    float m_flOutputMax;
    bool m_bDerivative;
    float m_flInterpRate;
};

class C_OP_HSVShiftToCP {
public:
    char pad_00[472];
    int32_t m_nColorCP;
    int32_t m_nColorGemEnableCP;
    int32_t m_nOutputCP;
    // Color m_DefaultHSVColor;
    char pad_01[20];
};

class C_OP_SetControlPointToImpactPoint {
public:
    char pad_00[472];
    int32_t m_nCPOut;
    int32_t m_nCPIn;
    float m_flUpdateRate;
    CParticleCollectionFloatInput m_flTraceLength;
    float m_flStartOffset;
    float m_flOffset;
    // Vector m_vecTraceDir;
    char pad_01[12];
    char m_CollisionGroupName[128];
    ParticleTraceSet_t m_nTraceSet;
    bool m_bSetToEndpoint;
    bool m_bTraceToClosestSurface;
    bool m_bIncludeWater;
    char pad_02[5];
};

class C_OP_SetCPOrientationToPointAtCP {
public:
    char pad_00[472];
    int32_t m_nInputCP;
    int32_t m_nOutputCP;
    CParticleCollectionFloatInput m_flInterpolation;
    bool m_b2DOrientation;
    bool m_bAvoidSingularity;
    bool m_bPointAway;
    char pad_01[5];
};

class C_OP_EnableChildrenFromParentParticleCount {
public:
    char pad_00[472];
    int32_t m_nChildGroupID;
    int32_t m_nFirstChild;
    CParticleCollectionFloatInput m_nNumChildrenToEnable;
    bool m_bDisableChildren;
    bool m_bPlayEndcapOnStop;
    bool m_bDestroyImmediately;
    char pad_01[5];
};

class C_OP_SelectivelyEnableChildren {
public:
    char pad_00[472];
    CParticleCollectionFloatInput m_nChildGroupID;
    CParticleCollectionFloatInput m_nFirstChild;
    CParticleCollectionFloatInput m_nNumChildrenToEnable;
    bool m_bPlayEndcapOnStop;
    bool m_bDestroyImmediately;
    char pad_01[6];
};

class C_OP_PlayEndCapWhenFinished {
public:
    char pad_00[472];
    bool m_bFireOnEmissionEnd;
    bool m_bIncludeChildren;
    char pad_01[6];
};

class C_OP_ForceControlPointStub {
public:
    char pad_00[472];
    int32_t m_ControlPoint;
    char pad_01[4];
};

class C_OP_DriveCPFromGlobalSoundFloat {
public:
    char pad_00[472];
    int32_t m_nOutputControlPoint;
    int32_t m_nOutputField;
    float m_flInputMin;
    float m_flInputMax;
    float m_flOutputMin;
    float m_flOutputMax;
    // CUtlString m_StackName;
    // CUtlString m_OperatorName;
    // CUtlString m_FieldName;
    char pad_01[32];
};

class C_OP_SetControlPointFieldToWater {
public:
    char pad_00[472];
    int32_t m_nSourceCP;
    int32_t m_nDestCP;
    int32_t m_nCPField;
    char pad_01[4];
};

class C_OP_SetControlPointToWaterSurface {
public:
    char pad_00[472];
    int32_t m_nSourceCP;
    int32_t m_nDestCP;
    int32_t m_nFlowCP;
    int32_t m_nActiveCP;
    int32_t m_nActiveCPField;
    CParticleCollectionFloatInput m_flRetestRate;
    bool m_bAdaptiveThreshold;
    char pad_01[7];
};

class C_OP_RepeatedTriggerChildGroup {
public:
    char pad_00[472];
    int32_t m_nChildGroupID;
    CParticleCollectionFloatInput m_flClusterRefireTime;
    CParticleCollectionFloatInput m_flClusterSize;
    CParticleCollectionFloatInput m_flClusterCooldown;
    bool m_bLimitChildCount;
    char pad_01[7];
};

class C_OP_ChooseRandomChildrenInGroup {
public:
    char pad_00[472];
    int32_t m_nChildGroupID;
    CParticleCollectionFloatInput m_flNumberOfChildren;
};

class C_OP_SetSimulationRate {
public:
    char pad_00[472];
    CParticleCollectionFloatInput m_flSimulationScale;
};

class C_OP_ControlPointToRadialScreenSpace {
public:
    char pad_00[472];
    int32_t m_nCPIn;
    // Vector m_vecCP1Pos;
    char pad_01[12];
    int32_t m_nCPOut;
    int32_t m_nCPOutField;
    int32_t m_nCPSSPosOut;
    char pad_02[4];
};

class C_OP_LightningSnapshotGenerator {
public:
    char pad_00[472];
    int32_t m_nCPSnapshot;
    int32_t m_nCPStartPnt;
    int32_t m_nCPEndPnt;
    CParticleCollectionFloatInput m_flSegments;
    CParticleCollectionFloatInput m_flOffset;
    CParticleCollectionFloatInput m_flOffsetDecay;
    CParticleCollectionFloatInput m_flRecalcRate;
    CParticleCollectionFloatInput m_flUVScale;
    CParticleCollectionFloatInput m_flUVOffset;
    CParticleCollectionFloatInput m_flSplitRate;
    CParticleCollectionFloatInput m_flBranchTwist;
    ParticleLightnintBranchBehavior_t m_nBranchBehavior;
    CParticleCollectionFloatInput m_flRadiusStart;
    CParticleCollectionFloatInput m_flRadiusEnd;
    CParticleCollectionFloatInput m_flDedicatedPool;
};

class C_OP_ModelSurfaceSnapshotGenerator {
public:
    char pad_00[472];
    int32_t m_nCPSnapshot;
    CParticleModelInput m_modelInput;
    CParticleCollectionFloatInput m_flRecalcRate;
    CParticleCollectionFloatInput m_flUSpacing;
    CParticleCollectionFloatInput m_flVSpacing;
    CParticleCollectionFloatInput m_flSurfaceOffset;
    bool m_bSetNormal;
    bool m_bSetUp;
    bool m_bSetGravity;
    bool m_bSetUV;
    char pad_01[4];
};

class C_OP_RemapExternalWindToCP {
public:
    char pad_00[472];
    int32_t m_nCP;
    int32_t m_nCPOutput;
    CParticleCollectionVecInput m_vecScale;
    bool m_bSetMagnitude;
    int32_t m_nOutVectorField;
};

class C_OP_SetGravityToCP {
public:
    char pad_00[472];
    int32_t m_nCPInput;
    int32_t m_nCPOutput;
    CParticleCollectionFloatInput m_flScale;
    bool m_bSetOrientation;
    bool m_bSetZDown;
    char pad_01[6];
};

class C_OP_QuantizeCPComponent {
public:
    char pad_00[472];
    CParticleCollectionFloatInput m_flInputValue;
    int32_t m_nCPOutput;
    int32_t m_nOutVectorField;
    CParticleCollectionFloatInput m_flQuantizeValue;
};

class C_OP_RenderPoints {
public:
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial;
    char pad_00[552];
};

class CBaseTrailRenderer {
public:
    char pad_00[11752];
    ParticleOrientationChoiceList_t m_nOrientationType;
    int32_t m_nOrientationControlPoint;
    float m_flMinSize;
    float m_flMaxSize;
    CParticleCollectionRendererFloatInput m_flStartFadeSize;
    CParticleCollectionRendererFloatInput m_flEndFadeSize;
    bool m_bClampV;
    char pad_01[7];
};

class C_OP_RenderTrails {
public:
    char pad_00[12512];
    bool m_bEnableFadingAndClamping;
    float m_flStartFadeDot;
    float m_flEndFadeDot;
    ParticleAttributeIndex_t m_nPrevPntSource;
    float m_flMaxLength;
    float m_flMinLength;
    bool m_bIgnoreDT;
    float m_flConstrainRadiusToLengthRatio;
    float m_flLengthScale;
    float m_flLengthFadeInTime;
    CPerParticleFloatInput m_flRadiusHeadTaper;
    CParticleCollectionVecInput m_vecHeadColorScale;
    CPerParticleFloatInput m_flHeadAlphaScale;
    CPerParticleFloatInput m_flRadiusTaper;
    CParticleCollectionVecInput m_vecTailColorScale;
    CPerParticleFloatInput m_flTailAlphaScale;
    ParticleAttributeIndex_t m_nHorizCropField;
    ParticleAttributeIndex_t m_nVertCropField;
    float m_flForwardShift;
    bool m_bFlipUVBasedOnPitchYaw;
    char pad_01[3];
};

class C_OP_RenderRopes {
public:
    char pad_00[11752];
    bool m_bEnableFadingAndClamping;
    float m_flMinSize;
    float m_flMaxSize;
    float m_flStartFadeSize;
    float m_flEndFadeSize;
    float m_flStartFadeDot;
    float m_flEndFadeDot;
    float m_flRadiusTaper;
    int32_t m_nMinTesselation;
    int32_t m_nMaxTesselation;
    float m_flTessScale;
    CParticleCollectionRendererFloatInput m_flTextureVWorldSize;
    CParticleCollectionRendererFloatInput m_flTextureVScrollRate;
    CParticleCollectionRendererFloatInput m_flTextureVOffset;
    int32_t m_nTextureVParamsCP;
    bool m_bClampV;
    int32_t m_nScaleCP1;
    int32_t m_nScaleCP2;
    float m_flScaleVSizeByControlPointDistance;
    float m_flScaleVScrollByControlPointDistance;
    float m_flScaleVOffsetByControlPointDistance;
    char pad_01[1];
    bool m_bUseScalarForTextureCoordinate;
    ParticleAttributeIndex_t m_nScalarFieldForTextureCoordinate;
    float m_flScalarAttributeTextureCoordScale;
    bool m_bReverseOrder;
    bool m_bClosedLoop;
    ParticleAttributeIndex_t m_nSplitField;
    bool m_bSortBySegmentID;
    ParticleOrientationChoiceList_t m_nOrientationType;
    ParticleAttributeIndex_t m_nVectorFieldForOrientation;
    bool m_bDrawAsOpaque;
    bool m_bGenerateNormals;
    char pad_02[2];
};

class C_OP_RenderAsModels {
public:
    // CUtlVector< ModelReference_t > m_ModelList;
    char pad_00[572];
    float m_flModelScale;
    bool m_bFitToModelSize;
    bool m_bNonUniformScaling;
    ParticleAttributeIndex_t m_nXAxisScalingAttribute;
    ParticleAttributeIndex_t m_nYAxisScalingAttribute;
    ParticleAttributeIndex_t m_nZAxisScalingAttribute;
    int32_t m_nSizeCullBloat;
    char pad_01[4];
};

class C_OP_RenderLights {
public:
    char pad_00[552];
    float m_flAnimationRate;
    AnimationType_t m_nAnimationType;
    bool m_bAnimateInFPS;
    float m_flMinSize;
    float m_flMaxSize;
    float m_flStartFadeSize;
    float m_flEndFadeSize;
    char pad_01[4];
};

class C_OP_RenderBlobs {
public:
    char pad_00[544];
    CParticleCollectionRendererFloatInput m_cubeWidth;
    CParticleCollectionRendererFloatInput m_cutoffRadius;
    CParticleCollectionRendererFloatInput m_renderRadius;
    uint32_t m_nVertexCountKb;
    uint32_t m_nIndexCountKb;
    int32_t m_nScaleCP;
    // CUtlVector< MaterialVariable_t > m_MaterialVars;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial;
    char pad_01[60];
};

class C_OP_RenderGpuImplicit {
public:
    char pad_00[544];
    bool m_bUsePerParticleRadius;
    uint32_t m_nVertexCountKb;
    uint32_t m_nIndexCountKb;
    CParticleCollectionRendererFloatInput m_fGridSize;
    CParticleCollectionRendererFloatInput m_fRadiusScale;
    CParticleCollectionRendererFloatInput m_fIsosurfaceThreshold;
    int32_t m_nScaleCP;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial;
    char pad_01[12];
};

class C_OP_RenderScreenVelocityRotate {
public:
    char pad_00[544];
    float m_flRotateRateDegrees;
    float m_flForwardDegrees;
};

class C_OP_RenderModels {
public:
    char pad_00[544];
    bool m_bOnlyRenderInEffectsBloomPass;
    bool m_bOnlyRenderInEffectsWaterPass;
    bool m_bUseMixedResolutionRendering;
    bool m_bOnlyRenderInEffecsGameOverlay;
    // CUtlVector< ModelReference_t > m_ModelList;
    ParticleAttributeIndex_t m_nBodyGroupField;
    ParticleAttributeIndex_t m_nSubModelField;
    bool m_bIgnoreNormal;
    bool m_bOrientZ;
    bool m_bCenterOffset;
    CPerParticleVecInput m_vecLocalOffset;
    CPerParticleVecInput m_vecLocalRotation;
    bool m_bIgnoreRadius;
    int32_t m_nModelScaleCP;
    CPerParticleVecInput m_vecComponentScale;
    bool m_bLocalScale;
    int32_t m_nSizeCullBloat;
    bool m_bAnimated;
    CPerParticleFloatInput m_flAnimationRate;
    bool m_bScaleAnimationRate;
    bool m_bForceLoopingAnimation;
    bool m_bResetAnimOnStop;
    bool m_bManualAnimFrame;
    ParticleAttributeIndex_t m_nAnimationScaleField;
    ParticleAttributeIndex_t m_nAnimationField;
    ParticleAttributeIndex_t m_nManualFrameField;
    char m_ActivityName[256];
    char m_SequenceName[256];
    bool m_bEnableClothSimulation;
    char m_ClothEffectName[64];
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial;
    char pad_01[15];
    bool m_bOverrideTranslucentMaterials;
    CPerParticleFloatInput m_nSkin;
    // CUtlVector< MaterialVariable_t > m_MaterialVars;
    char pad_02[24];
    CPerParticleFloatInput m_flRenderFilter;
    CPerParticleFloatInput m_flManualModelSelection;
    CParticleModelInput m_modelInput;
    int32_t m_nLOD;
    char m_EconSlotName[256];
    bool m_bOriginalModel;
    bool m_bSuppressTint;
    RenderModelSubModelFieldType_t m_nSubModelFieldType;
    bool m_bDisableShadows;
    bool m_bDisableDepthPrepass;
    bool m_bAcceptsDecals;
    bool m_bForceDrawInterlevedWithSiblings;
    bool m_bDoNotDrawInParticlePass;
    bool m_bAllowApproximateTransforms;
    char m_szRenderAttribute[260];
    CParticleCollectionFloatInput m_flRadiusScale;
    CParticleCollectionFloatInput m_flAlphaScale;
    CParticleCollectionFloatInput m_flRollScale;
    ParticleAttributeIndex_t m_nAlpha2Field;
    CParticleCollectionVecInput m_vecColorScale;
    ParticleColorBlendType_t m_nColorBlendType;
    char pad_03[68];
};

class C_OP_RenderSimpleModelCollection {
public:
    char pad_00[544];
    bool m_bCenterOffset;
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    char pad_01[8];
    CParticleModelInput m_modelInput;
    CParticleCollectionFloatInput m_fSizeCullScale;
    bool m_bDisableShadows;
    bool m_bDisableMotionBlur;
    bool m_bAcceptsDecals;
    CPerParticleFloatInput m_fDrawFilter;
    ParticleAttributeIndex_t m_nAngularVelocityField;
    char pad_02[20];
};

class C_OP_RenderMaterialProxy {
public:
    char pad_00[544];
    int32_t m_nMaterialControlPoint;
    MaterialProxyType_t m_nProxyType;
    // CUtlVector< MaterialVariable_t > m_MaterialVars;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial;
    char pad_01[32];
    CParticleCollectionFloatInput m_flMaterialOverrideEnabled;
    CParticleCollectionVecInput m_vecColorScale;
    CPerParticleFloatInput m_flAlpha;
    ParticleColorBlendType_t m_nColorBlendType;
    char pad_02[28];
};

class C_OP_RenderProjected {
public:
    char pad_00[544];
    bool m_bProjectCharacter;
    bool m_bProjectWorld;
    bool m_bProjectWater;
    bool m_bFlipHorizontal;
    bool m_bEnableProjectedDepthControls;
    float m_flMinProjectionDepth;
    float m_flMaxProjectionDepth;
    // CUtlVector< RenderProjectedMaterial_t > m_vecProjectedMaterials;
    char pad_01[24];
    CPerParticleFloatInput m_flMaterialSelection;
    float m_flAnimationTimeScale;
    bool m_bOrientToNormal;
    // CUtlVector< MaterialVariable_t > m_MaterialVars;
    char pad_02[24];
    CParticleCollectionFloatInput m_flRadiusScale;
    CParticleCollectionFloatInput m_flAlphaScale;
    CParticleCollectionFloatInput m_flRollScale;
    ParticleAttributeIndex_t m_nAlpha2Field;
    CParticleCollectionVecInput m_vecColorScale;
    ParticleColorBlendType_t m_nColorBlendType;
    char pad_03[28];
};

class C_OP_RenderDeferredLight {
public:
    char pad_00[544];
    bool m_bUseAlphaTestWindow;
    bool m_bUseTexture;
    float m_flRadiusScale;
    float m_flAlphaScale;
    ParticleAttributeIndex_t m_nAlpha2Field;
    CParticleCollectionVecInput m_vecColorScale;
    ParticleColorBlendType_t m_nColorBlendType;
    float m_flLightDistance;
    float m_flStartFalloff;
    float m_flDistanceFalloff;
    float m_flSpotFoV;
    ParticleAttributeIndex_t m_nAlphaTestPointField;
    ParticleAttributeIndex_t m_nAlphaTestRangeField;
    ParticleAttributeIndex_t m_nAlphaTestSharpnessField;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hTexture;
    char pad_01[8];
    int32_t m_nHSVShiftControlPoint;
    char pad_02[4];
};

class C_OP_RenderStandardLight {
public:
    char pad_00[544];
    ParticleLightTypeChoiceList_t m_nLightType;
    CParticleCollectionVecInput m_vecColorScale;
    ParticleColorBlendType_t m_nColorBlendType;
    CPerParticleFloatInput m_flIntensity;
    bool m_bCastShadows;
    CParticleCollectionFloatInput m_flTheta;
    CParticleCollectionFloatInput m_flPhi;
    CParticleCollectionFloatInput m_flRadiusMultiplier;
    StandardLightingAttenuationStyle_t m_nAttenuationStyle;
    CParticleCollectionFloatInput m_flFalloffLinearity;
    CParticleCollectionFloatInput m_flFiftyPercentFalloff;
    CParticleCollectionFloatInput m_flZeroPercentFalloff;
    bool m_bRenderDiffuse;
    bool m_bRenderSpecular;
    // CUtlString m_lightCookie;
    char pad_01[12];
    int32_t m_nPriority;
    ParticleLightFogLightingMode_t m_nFogLightingMode;
    CParticleCollectionRendererFloatInput m_flFogContribution;
    ParticleLightBehaviorChoiceList_t m_nCapsuleLightBehavior;
    float m_flCapsuleLength;
    bool m_bReverseOrder;
    bool m_bClosedLoop;
    ParticleAttributeIndex_t m_nPrevPntSource;
    float m_flMaxLength;
    float m_flMinLength;
    bool m_bIgnoreDT;
    float m_flConstrainRadiusToLengthRatio;
    float m_flLengthScale;
    float m_flLengthFadeInTime;
    char pad_02[8];
};

class C_OP_RenderOmni2Light {
public:
    char pad_00[544];
    ParticleOmni2LightTypeChoiceList_t m_nLightType;
    CParticleCollectionVecInput m_vColorBlend;
    ParticleColorBlendType_t m_nColorBlendType;
    ParticleLightUnitChoiceList_t m_nBrightnessUnit;
    CPerParticleFloatInput m_flBrightnessLumens;
    CPerParticleFloatInput m_flBrightnessCandelas;
    bool m_bCastShadows;
    bool m_bFog;
    CPerParticleFloatInput m_flFogScale;
    CPerParticleFloatInput m_flLuminaireRadius;
    CPerParticleFloatInput m_flSkirt;
    CPerParticleFloatInput m_flRange;
    CPerParticleFloatInput m_flInnerConeAngle;
    CPerParticleFloatInput m_flOuterConeAngle;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie;
    char pad_01[8];
    bool m_bSphericalCookie;
    char pad_02[15];
};

class C_OP_RenderLightBeam {
public:
    char pad_00[544];
    CParticleCollectionVecInput m_vColorBlend;
    ParticleColorBlendType_t m_nColorBlendType;
    CParticleCollectionFloatInput m_flBrightnessLumensPerMeter;
    bool m_bCastShadows;
    CParticleCollectionFloatInput m_flSkirt;
    CParticleCollectionFloatInput m_flRange;
    CParticleCollectionFloatInput m_flThickness;
};

class C_OP_RenderClothForce {
public:
    char pad_00[544];
};

class C_OP_Callback {
public:
    char pad_00[544];
};

class C_OP_GameLiquidSpill {
public:
    char pad_00[544];
    CParticleCollectionFloatInput m_flLiquidContentsField;
    CParticleCollectionFloatInput m_flExpirationTime;
    ParticleAttributeIndex_t m_nAmountAttribute;
    char pad_01[4];
};

class C_OP_RenderScreenShake {
public:
    char pad_00[544];
    float m_flDurationScale;
    float m_flRadiusScale;
    float m_flFrequencyScale;
    float m_flAmplitudeScale;
    ParticleAttributeIndex_t m_nRadiusField;
    ParticleAttributeIndex_t m_nDurationField;
    ParticleAttributeIndex_t m_nFrequencyField;
    ParticleAttributeIndex_t m_nAmplitudeField;
    int32_t m_nFilterCP;
    char pad_01[4];
};

class C_OP_RenderPostProcessing {
public:
    char pad_00[544];
    CPerParticleFloatInput m_flPostProcessStrength;
    // CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostTexture;
    char pad_01[8];
    ParticlePostProcessPriorityGroup_t m_nPriority;
    char pad_02[4];
};

class C_OP_RenderSound {
public:
    char pad_00[544];
    float m_flDurationScale;
    float m_flSndLvlScale;
    float m_flPitchScale;
    float m_flVolumeScale;
    ParticleAttributeIndex_t m_nSndLvlField;
    ParticleAttributeIndex_t m_nDurationField;
    ParticleAttributeIndex_t m_nPitchField;
    ParticleAttributeIndex_t m_nVolumeField;
    int32_t m_nChannel;
    int32_t m_nCPReference;
    char m_pszSoundName[256];
    bool m_bSuppressStopSoundEvent;
    char pad_01[7];
};

class C_OP_RenderStatusEffect {
public:
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureColorWarp;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDetail2;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDiffuseWarp;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureFresnelColorWarp;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureFresnelWarp;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureSpecularWarp;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureEnvMap;
    char pad_00[600];
};

class C_OP_RenderStatusEffectCitadel {
public:
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureColorWarp;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureNormal;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureMetalness;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureRoughness;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureSelfIllum;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDetail;
    char pad_00[592];
};

class C_OP_RenderFlattenGrass {
public:
    char pad_00[544];
    float m_flFlattenStrength;
    ParticleAttributeIndex_t m_nStrengthFieldOverride;
    float m_flRadiusScale;
    char pad_01[4];
};

class C_OP_RenderTreeShake {
public:
    char pad_00[544];
    float m_flPeakStrength;
    ParticleAttributeIndex_t m_nPeakStrengthFieldOverride;
    float m_flRadius;
    ParticleAttributeIndex_t m_nRadiusFieldOverride;
    float m_flShakeDuration;
    float m_flTransitionTime;
    float m_flTwistAmount;
    float m_flRadialAmount;
    float m_flControlPointOrientationAmount;
    int32_t m_nControlPointForLinearDirection;
};

class C_OP_RenderText {
public:
    // Color m_OutlineColor;
    // CUtlString m_DefaultText;
    char pad_00[560];
};

class C_OP_RenderVRHapticEvent {
public:
    char pad_00[544];
    ParticleVRHandChoiceList_t m_nHand;
    int32_t m_nOutputHandCP;
    int32_t m_nOutputField;
    CPerParticleFloatInput m_flAmplitude;
};

class C_OP_ClientPhysics {
public:
    // CUtlString m_strPhysicsType;
    char pad_00[552];
    bool m_bStartAsleep;
    CParticleCollectionFloatInput m_flPlayerWakeRadius;
    CParticleCollectionFloatInput m_flVehicleWakeRadius;
    bool m_bUseHighQualitySimulation;
    int32_t m_nMaxParticleCount;
    bool m_bRespectExclusionVolumes;
    bool m_bKillParticles;
    bool m_bDeleteSim;
    int32_t m_nControlPoint;
    int32_t m_nForcedSimId;
    ParticleColorBlendType_t m_nColorBlendType;
    ParticleAttrBoxFlags_t m_nForcedStatusEffects;
    char pad_01[4];
};

class C_OP_RenderClientPhysicsImpulse {
public:
    char pad_00[544];
    CPerParticleFloatInput m_flRadius;
    CPerParticleFloatInput m_flMagnitude;
    int32_t m_nSimIdFilter;
    char pad_01[4];
};

class C_OP_GameDecalRenderer {
public:
    // CGlobalSymbol m_sDecalGroupName;
    char pad_00[552];
    EventTypeSelection_t m_nEventType;
    ParticleCollisionMask_t m_nInteractionMask;
    ParticleCollisionGroup_t m_nCollisionGroup;
    CPerParticleVecInput m_vecStartPos;
    CPerParticleVecInput m_vecEndPos;
    CPerParticleFloatInput m_flTraceBloat;
    CPerParticleFloatInput m_flDecalSize;
    CPerParticleFloatInput m_nDecalGroupIndex;
    CPerParticleFloatInput m_flDecalRotation;
    CPerParticleVecInput m_vModulationColor;
    bool m_bUseGameDefaultDecalSize;
    bool m_bRandomDecalRotation;
    bool m_bRandomlySelectDecalInGroup;
    bool m_bNoDecalsOnOwner;
    bool m_bVisualizeTraces;
    char pad_01[3];
};

class C_OP_WaterImpulseRenderer {
public:
    char pad_00[544];
    CPerParticleVecInput m_vecPos;
    CPerParticleFloatInput m_flRadius;
    CPerParticleFloatInput m_flMagnitude;
    CPerParticleFloatInput m_flShape;
    CPerParticleFloatInput m_flWindSpeed;
    CPerParticleFloatInput m_flWobble;
    bool m_bIsRadialWind;
    EventTypeSelection_t m_nEventType;
};

class C_OP_CreateParticleSystemRenderer {
public:
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hEffect;
    char pad_00[552];
    EventTypeSelection_t m_nEventType;
    // CUtlLeanVector< CPAssignment_t > m_vecCPs;
    // CUtlString m_szParticleConfig;
    char pad_01[24];
    CPerParticleVecInput m_AggregationPos;
};

