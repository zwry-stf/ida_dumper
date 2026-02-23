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


/// ParticleSetMethod_t
_enum ParticleSetMethod_t0 : uint32_t {
    PARTICLE_SET_REPLACE_VALUE = 0,
    PARTICLE_SET_SCALE_INITIAL_VALUE = 1,
    PARTICLE_SET_ADD_TO_INITIAL_VALUE = 2,
    PARTICLE_SET_RAMP_CURRENT_VALUE = 3,
    PARTICLE_SET_SCALE_CURRENT_VALUE = 4,
    PARTICLE_SET_ADD_TO_CURRENT_VALUE = 5,
};

/// ParticleControlPointAxis_t
_enum ParticleControlPointAxis_t0 : uint32_t {
    PARTICLE_CP_AXIS_X = 0,
    PARTICLE_CP_AXIS_Y = 1,
    PARTICLE_CP_AXIS_Z = 2,
    PARTICLE_CP_AXIS_NEGATIVE_X = 3,
    PARTICLE_CP_AXIS_NEGATIVE_Y = 4,
    PARTICLE_CP_AXIS_NEGATIVE_Z = 5,
};

/// ParticleMassMode_t
_enum ParticleMassMode_t0 : uint32_t {
    PARTICLE_MASSMODE_RADIUS_CUBED = 0,
    PARTICLE_MASSMODE_RADIUS_SQUARED = 2,
};

/// ParticleColorBlendType_t
_enum ParticleColorBlendType_t0 : uint32_t {
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

/// ParticleImpulseType_t
_enum ParticleImpulseType_t0 : uint32_t {
    IMPULSE_TYPE_NONE = 0,
    IMPULSE_TYPE_GENERIC = 1,
    IMPULSE_TYPE_ROPE = 2,
    IMPULSE_TYPE_EXPLOSION = 4,
    IMPULSE_TYPE_EXPLOSION_UNDERWATER = 8,
    IMPULSE_TYPE_PARTICLE_SYSTEM = 16,
};

/// ParticleFalloffFunction_t
_enum ParticleFalloffFunction_t0 : uint32_t {
    PARTICLE_FALLOFF_CONSTANT = 0,
    PARTICLE_FALLOFF_LINEAR = 1,
    PARTICLE_FALLOFF_EXPONENTIAL = 2,
};

/// ParticleEntityPos_t
_enum ParticleEntityPos_t0 : uint32_t {
    PARTICLE_ABS_ORIGIN = 0,
    PARTICLE_WORLDSPACE_CENTER = 1,
    PARTICLE_EYES = 2,
};

/// AnimationType_t
_enum AnimationType_t0 : uint32_t {
    ANIMATION_TYPE_FIXED_RATE = 0,
    ANIMATION_TYPE_FIT_LIFETIME = 1,
    ANIMATION_TYPE_MANUAL_FRAMES = 2,
};

/// ClosestPointTestType_t
_enum ClosestPointTestType_t0 : uint32_t {
    PARTICLE_CLOSEST_TYPE_BOX = 0,
    PARTICLE_CLOSEST_TYPE_CAPSULE = 1,
    PARTICLE_CLOSEST_TYPE_HYBRID = 2,
};

/// InheritableBoolType_t
_enum InheritableBoolType_t0 : uint32_t {
    INHERITABLE_BOOL_INHERIT = 0,
    INHERITABLE_BOOL_FALSE = 1,
    INHERITABLE_BOOL_TRUE = 2,
};

/// ParticleHitboxBiasType_t
_enum ParticleHitboxBiasType_t0 : uint32_t {
    PARTICLE_HITBOX_BIAS_ENTITY = 0,
    PARTICLE_HITBOX_BIAS_HITBOX = 1,
};

/// ParticleAttrBoxFlags_t
_enum ParticleAttrBoxFlags_t0 : uint32_t {
    PARTICLE_ATTR_BOX_FLAGS_NONE = 0,
    PARTICLE_ATTR_BOX_FLAGS_WATER = 1,
    PARTICLE_ATTR_BOX_FLAGS_ON_FIRE = 2,
    PARTICLE_ATTR_BOX_FLAGS_ELECTRIFIED = 4,
    PARTICLE_ATTR_BOX_FLAGS_ASLEEP = 8,
    PARTICLE_ATTR_BOX_FLAGS_FROZEN = 16,
    PARTICLE_ATTR_BOX_FLAGS_TIMED_DECAY = 32,
};

/// RenderModelSubModelFieldType_t
_enum RenderModelSubModelFieldType_t0 : uint32_t {
    SUBMODEL_AS_BODYGROUP_SUBMODEL = 0,
    SUBMODEL_AS_MESHGROUP_INDEX = 1,
    SUBMODEL_AS_MESHGROUP_MASK = 2,
    SUBMODEL_IGNORED_USE_MODEL_DEFAULT_MESHGROUP_MASK = 3,
};

/// ParticleOrientationType_t
_enum ParticleOrientationType_t0 : uint32_t {
    PARTICLE_ORIENTATION_NONE = 0,
    PARTICLE_ORIENTATION_VELOCITY = 1,
    PARTICLE_ORIENTATION_NORMAL = 2,
    PARTICLE_ORIENTATION_ROTATION = 4,
};

/// ParticleFanType_t
_enum ParticleFanType_t0 : uint32_t {
    PARTICLE_FAN_TYPE_FAN = 0,
    PARTICLE_FAN_TYPE_ROTOR_WASH = 1,
    PARTICLE_FAN_TYPE_RADIAL = 2,
};

/// PFuncVisualizationType_t
_enum PFuncVisualizationType_t0 : uint32_t {
    PFUNC_VISUALIZATION_SPHERE_WIREFRAME = 0,
    PFUNC_VISUALIZATION_SPHERE_SOLID = 1,
    PFUNC_VISUALIZATION_BOX = 2,
    PFUNC_VISUALIZATION_RING = 3,
    PFUNC_VISUALIZATION_PLANE = 4,
    PFUNC_VISUALIZATION_LINE = 5,
    PFUNC_VISUALIZATION_CYLINDER = 6,
};

/// PetGroundType_t
_enum PetGroundType_t0 : uint32_t {
    PET_GROUND_NONE = 0,
    PET_GROUND_GRID = 1,
    PET_GROUND_PLANE = 2,
};

/// ModelHitboxType_t
_enum ModelHitboxType_t0 : uint32_t {
    MODEL_HITBOX_TYPE_STANDARD = 0,
    MODEL_HITBOX_TYPE_RAW_BONES = 1,
    MODEL_HITBOX_TYPE_RENDERBOUNDS = 2,
    MODEL_HITBOX_TYPE_SNAPSHOT = 3,
};

/// SpriteCardShaderType_t
_enum SpriteCardShaderType_t0 : uint32_t {
    SPRITECARD_SHADER_BASE = 0,
    SPRITECARD_SHADER_CUSTOM = 1,
};

/// ParticleTopology_t
_enum ParticleTopology_t0 : uint32_t {
    PARTICLE_TOPOLOGY_POINTS = 0,
    PARTICLE_TOPOLOGY_LINES = 1,
    PARTICLE_TOPOLOGY_TRIS = 2,
    PARTICLE_TOPOLOGY_QUADS = 3,
    PARTICLE_TOPOLOGY_CUBES = 4,
};

/// ParticleDetailLevel_t
_enum ParticleDetailLevel_t0 : uint32_t {
    PARTICLEDETAIL_LOW = 0,
    PARTICLEDETAIL_MEDIUM = 1,
    PARTICLEDETAIL_HIGH = 2,
    PARTICLEDETAIL_ULTRA = 3,
};

/// ParticleTraceSet_t
_enum ParticleTraceSet_t0 : uint32_t {
    PARTICLE_TRACE_SET_ALL = 0,
    PARTICLE_TRACE_SET_STATIC = 1,
    PARTICLE_TRACE_SET_STATIC_AND_KEYFRAMED = 2,
    PARTICLE_TRACE_SET_DYNAMIC = 3,
};

/// ParticleCollisionMode_t
_enum ParticleCollisionMode_t0 : uint32_t {
    COLLISION_MODE_PER_PARTICLE_TRACE = 3,
    COLLISION_MODE_USE_NEAREST_TRACE = 2,
    COLLISION_MODE_PER_FRAME_PLANESET = 1,
    COLLISION_MODE_INITIAL_TRACE_DOWN = 0,
    COLLISION_MODE_DISABLED = 4294967295,
};

/// ParticleColorBlendMode_t
_enum ParticleColorBlendMode_t0 : uint32_t {
    PARTICLEBLEND_DEFAULT = 0,
    PARTICLEBLEND_OVERLAY = 1,
    PARTICLEBLEND_DARKEN = 2,
    PARTICLEBLEND_LIGHTEN = 3,
    PARTICLEBLEND_MULTIPLY = 4,
};

/// Detail2Combo_t
_enum Detail2Combo_t0 : uint32_t {
    DETAIL_2_COMBO_UNINITIALIZED = 4294967295,
    DETAIL_2_COMBO_OFF = 0,
    DETAIL_2_COMBO_ADD = 1,
    DETAIL_2_COMBO_ADD_SELF_ILLUM = 2,
    DETAIL_2_COMBO_MOD2X = 3,
    DETAIL_2_COMBO_MUL = 4,
    DETAIL_2_COMBO_CROSSFADE = 5,
};

/// DetailCombo_t
_enum DetailCombo_t0 : uint32_t {
    DETAIL_COMBO_OFF = 0,
    DETAIL_COMBO_ADD = 1,
    DETAIL_COMBO_ADD_SELF_ILLUM = 2,
    DETAIL_COMBO_MOD2X = 3,
};

/// ScalarExpressionType_t
_enum ScalarExpressionType_t0 : uint32_t {
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

/// VectorExpressionType_t
_enum VectorExpressionType_t0 : uint32_t {
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

/// VectorFloatExpressionType_t
_enum VectorFloatExpressionType_t0 : uint32_t {
    VECTOR_FLOAT_EXPRESSION_UNINITIALIZED = 4294967295,
    VECTOR_FLOAT_EXPRESSION_DOTPRODUCT = 0,
    VECTOR_FLOAT_EXPRESSION_DISTANCE = 1,
    VECTOR_FLOAT_EXPRESSION_DISTANCESQR = 2,
    VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTH = 3,
    VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTHSQR = 4,
    VECTOR_FLOAT_EXPRESSION_INPUT1_NOISE = 5,
};

/// SetStatisticExpressionType_t
_enum SetStatisticExpressionType_t0 : uint32_t {
    SET_EXPRESSION_UNINITIALIZED = 4294967295,
    SET_EXPRESSION_SUM = 0,
    SET_EXPRESSION_MEAN = 1,
    SET_EXPRESSION_MEDIAN = 2,
    SET_EXPRESSION_MODE = 3,
    SET_EXPRESSION_STANDARD_DEVIATION = 4,
    SET_EXPRESSION_MIN = 5,
    SET_EXPRESSION_MAX = 6,
};

/// MissingParentInheritBehavior_t
_enum MissingParentInheritBehavior_t0 : uint32_t {
    MISSING_PARENT_DO_NOTHING = 4294967295,
    MISSING_PARENT_KILL = 0,
    MISSING_PARENT_FIND_NEW = 1,
    MISSING_PARENT_SAME_INDEX = 2,
};

/// HitboxLerpType_t
_enum HitboxLerpType_t0 : uint32_t {
    HITBOX_LERP_LIFETIME = 0,
    HITBOX_LERP_CONSTANT = 1,
};

/// ParticleSelection_t
_enum ParticleSelection_t0 : uint32_t {
    PARTICLE_SELECTION_FIRST = 0,
    PARTICLE_SELECTION_LAST = 1,
    PARTICLE_SELECTION_NUMBER = 2,
};

/// ParticlePinDistance_t
_enum ParticlePinDistance_t0 : uint32_t {
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

/// ParticleDirectionNoiseType_t
_enum ParticleDirectionNoiseType_t0 : uint32_t {
    PARTICLE_DIR_NOISE_PERLIN = 0,
    PARTICLE_DIR_NOISE_CURL = 1,
    PARTICLE_DIR_NOISE_WORLEY_BASIC = 2,
};

/// ParticleRotationLockType_t
_enum ParticleRotationLockType_t0 : uint32_t {
    PARTICLE_ROTATION_LOCK_NONE = 0,
    PARTICLE_ROTATION_LOCK_ROTATIONS = 1,
    PARTICLE_ROTATION_LOCK_NORMAL = 2,
};

/// ParticleEndcapMode_t
_enum ParticleEndcapMode_t0 : uint32_t {
    PARTICLE_ENDCAP_ALWAYS_ON = 4294967295,
    PARTICLE_ENDCAP_ENDCAP_OFF = 0,
    PARTICLE_ENDCAP_ENDCAP_ON = 1,
};

/// ParticleLightingQuality_t
_enum ParticleLightingQuality_t0 : uint32_t {
    PARTICLE_LIGHTING_PER_PARTICLE = 0,
    PARTICLE_LIGHTING_PER_VERTEX = 1,
    PARTICLE_LIGHTING_PER_PIXEL = 4294967295,
    PARTICLE_LIGHTING_OVERRIDE_POSITION = 2,
    PARTICLE_LIGHTING_OVERRIDE_COLOR = 3,
    PARTICLE_LIGHTING_ADD_EXTRA_LIGHT = 4,
};

/// StandardLightingAttenuationStyle_t
_enum StandardLightingAttenuationStyle_t0 : uint32_t {
    LIGHT_STYLE_OLD = 0,
    LIGHT_STYLE_NEW = 1,
};

/// ParticleTraceMissBehavior_t
_enum ParticleTraceMissBehavior_t0 : uint32_t {
    PARTICLE_TRACE_MISS_BEHAVIOR_NONE = 0,
    PARTICLE_TRACE_MISS_BEHAVIOR_KILL = 1,
    PARTICLE_TRACE_MISS_BEHAVIOR_TRACE_END = 2,
};

/// ParticleOrientationSetMode_t
_enum ParticleOrientationSetMode_t0 : uint32_t {
    PARTICLE_ORIENTATION_SET_NONE = 4294967295,
    PARTICLE_ORIENTATION_SET_FROM_VELOCITY = 0,
    PARTICLE_ORIENTATION_SET_FROM_NORMAL = 1,
    PARTICLE_ORIENTATION_SET_FROM_ROTATIONS = 2,
};

/// ParticleLightnintBranchBehavior_t
_enum ParticleLightnintBranchBehavior_t0 : uint32_t {
    PARTICLE_LIGHTNING_BRANCH_CURRENT_DIR = 0,
    PARTICLE_LIGHTNING_BRANCH_ENDPOINT_DIR = 1,
};

/// ParticleLightFogLightingMode_t
_enum ParticleLightFogLightingMode_t0 : uint32_t {
    PARTICLE_LIGHT_FOG_LIGHTING_MODE_NONE = 0,
    PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC = 2,
    PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC_NOSHADOWS = 4,
};

/// ParticleSequenceCropOverride_t
_enum ParticleSequenceCropOverride_t0 : uint32_t {
    PARTICLE_SEQUENCE_CROP_OVERRIDE_DEFAULT = 4294967295,
    PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_OFF = 0,
    PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_ON = 1,
};

/// ParticleParentSetMode_t
_enum ParticleParentSetMode_t0 : uint32_t {
    PARTICLE_SET_PARENT_NO = 0,
    PARTICLE_SET_PARENT_IMMEDIATE = 1,
    PARTICLE_SET_PARENT_ROOT = 2,
};

/// MaterialProxyType_t
_enum MaterialProxyType_t0 : uint32_t {
    MATERIAL_PROXY_STATUS_EFFECT = 0,
    MATERIAL_PROXY_TINT = 1,
};

/// BBoxVolumeType_t
_enum BBoxVolumeType_t0 : uint32_t {
    BBOX_VOLUME = 0,
    BBOX_DIMENSIONS = 1,
    BBOX_MINS_MAXS = 2,
    BBOX_RADIUS = 3,
};

/// ParticleHitboxDataSelection_t
_enum ParticleHitboxDataSelection_t0 : uint32_t {
    PARTICLE_HITBOX_AVERAGE_SPEED = 0,
    PARTICLE_HITBOX_COUNT = 1,
};

/// SnapshotIndexType_t
_enum SnapshotIndexType_t0 : uint32_t {
    SNAPSHOT_INDEX_INCREMENT = 0,
    SNAPSHOT_INDEX_DIRECT = 1,
};

/// EventTypeSelection_t
_enum EventTypeSelection_t0 : uint32_t {
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

/// ParticleCollisionMask_t
_enum ParticleCollisionMask_t0 : uint64_t {
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

/// ParticleCollisionGroup_t
_enum ParticleCollisionGroup_t0 : uint32_t {
    PARTICLE_COLLISION_GROUP_DEFAULT = 4,
    PARTICLE_COLLISION_GROUP_DEBRIS = 5,
    PARTICLE_COLLISION_GROUP_INTERACTIVE = 7,
    PARTICLE_COLLISION_GROUP_PLAYER = 8,
    PARTICLE_COLLISION_GROUP_VEHICLE = 10,
    PARTICLE_COLLISION_GROUP_NPC = 12,
    PARTICLE_COLLISION_GROUP_PROPS = 24,
};

/// ParticleOrientationChoiceList_t
_enum ParticleOrientationChoiceList_t0 : uint32_t {
    PARTICLE_ORIENTATION_SCREEN_ALIGNED = 0,
    PARTICLE_ORIENTATION_SCREEN_Z_ALIGNED = 1,
    PARTICLE_ORIENTATION_WORLD_Z_ALIGNED = 2,
    PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL = 3,
    PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL = 4,
    PARTICLE_ORIENTATION_FULL_3AXIS_ROTATION = 5,
};

/// ParticleOutputBlendMode_t
_enum ParticleOutputBlendMode_t0 : uint32_t {
    PARTICLE_OUTPUT_BLEND_MODE_ALPHA = 0,
    PARTICLE_OUTPUT_BLEND_MODE_ADD = 1,
    PARTICLE_OUTPUT_BLEND_MODE_BLEND_ADD = 2,
    PARTICLE_OUTPUT_BLEND_MODE_HALF_BLEND_ADD = 3,
    PARTICLE_OUTPUT_BLEND_MODE_NEG_HALF_BLEND_ADD = 4,
    PARTICLE_OUTPUT_BLEND_MODE_MOD2X = 5,
    PARTICLE_OUTPUT_BLEND_MODE_LIGHTEN = 6,
};

/// ParticleAlphaReferenceType_t
_enum ParticleAlphaReferenceType_t0 : uint32_t {
    PARTICLE_ALPHA_REFERENCE_ALPHA_ALPHA = 0,
    PARTICLE_ALPHA_REFERENCE_OPAQUE_ALPHA = 1,
    PARTICLE_ALPHA_REFERENCE_ALPHA_OPAQUE = 2,
    PARTICLE_ALPHA_REFERENCE_OPAQUE_OPAQUE = 3,
};

/// BlurFilterType_t
_enum BlurFilterType_t0 : uint32_t {
    BLURFILTER_GAUSSIAN = 0,
    BLURFILTER_BOX = 1,
};

/// ParticleLightTypeChoiceList_t
_enum ParticleLightTypeChoiceList_t0 : uint32_t {
    PARTICLE_LIGHT_TYPE_POINT = 0,
    PARTICLE_LIGHT_TYPE_SPOT = 1,
    PARTICLE_LIGHT_TYPE_FX = 2,
    PARTICLE_LIGHT_TYPE_CAPSULE = 3,
};

/// ParticleLightUnitChoiceList_t
_enum ParticleLightUnitChoiceList_t0 : uint32_t {
    PARTICLE_LIGHT_UNIT_CANDELAS = 0,
    PARTICLE_LIGHT_UNIT_LUMENS = 1,
};

/// ParticleOmni2LightTypeChoiceList_t
_enum ParticleOmni2LightTypeChoiceList_t0 : uint32_t {
    PARTICLE_OMNI2_LIGHT_TYPE_POINT = 0,
    PARTICLE_OMNI2_LIGHT_TYPE_SPHERE = 1,
};

/// ParticleLightBehaviorChoiceList_t
_enum ParticleLightBehaviorChoiceList_t0 : uint32_t {
    PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION = 0,
    PARTICLE_LIGHT_BEHAVIOR_ROPE = 1,
    PARTICLE_LIGHT_BEHAVIOR_TRAILS = 2,
};

/// ParticleDepthFeatheringMode_t
_enum ParticleDepthFeatheringMode_t0 : uint32_t {
    PARTICLE_DEPTH_FEATHERING_OFF = 0,
    PARTICLE_DEPTH_FEATHERING_ON_OPTIONAL = 1,
    PARTICLE_DEPTH_FEATHERING_ON_REQUIRED = 2,
};

/// ParticleVRHandChoiceList_t
_enum ParticleVRHandChoiceList_t0 : uint32_t {
    PARTICLE_VRHAND_LEFT = 0,
    PARTICLE_VRHAND_RIGHT = 1,
    PARTICLE_VRHAND_CP = 2,
    PARTICLE_VRHAND_CP_OBJECT = 3,
};

/// ParticleSortingChoiceList_t
_enum ParticleSortingChoiceList_t0 : uint32_t {
    PARTICLE_SORTING_NEAREST = 0,
    PARTICLE_SORTING_CREATION_TIME = 1,
};

/// SpriteCardTextureType_t
_enum SpriteCardTextureType_t0 : uint32_t {
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

/// SpriteCardTextureChannel_t
_enum SpriteCardTextureChannel_t0 : uint32_t {
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

/// SpriteCardPerParticleScale_t
_enum SpriteCardPerParticleScale_t0 : uint32_t {
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

/// ParticleTextureLayerBlendType_t
_enum ParticleTextureLayerBlendType_t0 : uint32_t {
    SPRITECARD_TEXTURE_BLEND_MULTIPLY = 0,
    SPRITECARD_TEXTURE_BLEND_MOD2X = 1,
    SPRITECARD_TEXTURE_BLEND_REPLACE = 2,
    SPRITECARD_TEXTURE_BLEND_ADD = 3,
    SPRITECARD_TEXTURE_BLEND_SUBTRACT = 4,
    SPRITECARD_TEXTURE_BLEND_AVERAGE = 5,
    SPRITECARD_TEXTURE_BLEND_LUMINANCE = 6,
};

/// ParticlePostProcessPriorityGroup_t
_enum ParticlePostProcessPriorityGroup_t0 : uint32_t {
    PARTICLE_POST_PROCESS_PRIORITY_LEVEL_VOLUME = 0,
    PARTICLE_POST_PROCESS_PRIORITY_LEVEL_OVERRIDE = 1,
    PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_EFFECT = 2,
    PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_LOW = 3,
    PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_HIGH = 4,
    PARTICLE_POST_PROCESS_PRIORITY_GLOBAL_UI = 5,
};

/// ParticleFogType_t
_enum ParticleFogType_t0 : uint32_t {
    PARTICLE_FOG_GAME_DEFAULT = 0,
    PARTICLE_FOG_ENABLED = 1,
    PARTICLE_FOG_DISABLED = 2,
};

/// ParticleLiquidContents_t
_enum ParticleLiquidContents_t0 : uint32_t {
    PARTICLE_LIQUID_NONE = 0,
    PARTICLE_LIQUID_OIL = 1,
    PARTICLE_LIQUID_WATER = 2,
};

/// TextureRepetitionMode_t
_enum TextureRepetitionMode_t0 : uint32_t {
    TEXTURE_REPETITION_PARTICLE = 0,
    TEXTURE_REPETITION_PATH = 1,
};

/// ParticleReplicationMode_t
_enum ParticleReplicationMode_t0 : uint32_t {
    PARTICLE_REPLICATIONMODE_NONE = 0,
    PARTICLE_REPLICATIONMODE_REPLICATE_FOR_EACH_PARENT_PARTICLE = 1,
};

_enum PulseMethodCallMode_t : uint32_t {
    SYNC_WAIT_FOR_COMPLETION = 0,
    ASYNC_FIRE_AND_FORGET = 1,
};

_enum PulseCursorCancelPriority_t : uint32_t {
    None = 0,
    CancelOnSucceeded = 1,
    SoftCancel = 2,
    HardCancel = 3,
};

_enum PulseBestOutflowRules_t : uint32_t {
    SORT_BY_NUMBER_OF_VALID_CRITERIA = 0,
    SORT_BY_OUTFLOW_INDEX = 1,
};

/// CRandomNumberGeneratorParameters
class __declspec(align(4)) CRandomNumberGeneratorParameters0 {
public:
    bool m_bDistributeEvenly; // 0x0
    int32_t m_nSeed; // 0x4
}; // size: 0x8

/// CParticleMassCalculationParameters
class __declspec(align(8)) CParticleMassCalculationParameters0 {
public:
    ParticleMassMode_t m_nMassMode; // 0x0
    CPerParticleFloatInput m_flRadius; // 0x8
    CPerParticleFloatInput m_flNominalRadius; // 0x178
    CPerParticleFloatInput m_flScale; // 0x2e8
}; // size: 0x458

/// MaterialVariable_t
class __declspec(align(8)) MaterialVariable_t0 {
public:
    // CUtlString m_strVariable;
    char pad_00[8];
    ParticleAttributeIndex_t m_nVariableField; // 0x8
    float m_flScale; // 0xc
}; // size: 0x10

/// RenderProjectedMaterial_t
class __declspec(align(8)) RenderProjectedMaterial_t0 {
public:
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial;
    char pad_00[8];
}; // size: 0x8

/// CPAssignment_t
class __declspec(align(8)) CPAssignment_t0 {
public:
    int32_t m_nCPNumber; // 0x0
    CPerParticleVecInput m_Pos; // 0x8
    ParticleOrientationSetMode_t m_nOrientationMode; // 0x6c0
    char pad_00[4];
}; // size: 0x6c8

/// ParticlePreviewBodyGroup_t
class __declspec(align(8)) ParticlePreviewBodyGroup_t0 {
public:
    // CUtlString m_bodyGroupName;
    char pad_00[8];
    int32_t m_nValue; // 0x8
    char pad_01[4];
}; // size: 0x10

/// ParticlePreviewState_t
class __declspec(align(8)) ParticlePreviewState_t0 {
public:
    // CUtlString m_previewModel;
    char pad_00[8];
    uint32_t m_nModSpecificData; // 0x8
    PetGroundType_t m_groundType; // 0xc
    // CUtlString m_sequenceName;
    char pad_01[8];
    int32_t m_nFireParticleOnSequenceFrame; // 0x18
    // CUtlString m_hitboxSetName;
    // CUtlString m_materialGroupName;
    // CUtlVector< ParticlePreviewBodyGroup_t > m_vecBodyGroups;
    char pad_02[44];
    float m_flPlaybackSpeed; // 0x48
    float m_flParticleSimulationRate; // 0x4c
    bool m_bShouldDrawHitboxes; // 0x50
    bool m_bShouldDrawAttachments; // 0x51
    bool m_bShouldDrawAttachmentNames; // 0x52
    bool m_bShouldDrawControlPointAxes; // 0x53
    bool m_bAnimationNonLooping; // 0x54
    bool m_bSequenceNameIsAnimClipPath; // 0x55
    Vector m_vecPreviewGravity; // 0x58
    char pad_03[4];
}; // size: 0x68

/// ParticleControlPointDriver_t
class __declspec(align(8)) ParticleControlPointDriver_t0 {
public:
    // ParticleParamID_t m_iControlPoint;
    char pad_00[16];
    ParticleAttachment_t m_iAttachType; // 0x10
    // CUtlString m_attachmentName;
    char pad_01[12];
    Vector m_vecOffset; // 0x20
    QAngle m_angOffset; // 0x2c
    // CUtlString m_entityName;
    char pad_02[8];
}; // size: 0x40

/// ParticleControlPointConfiguration_t
class __declspec(align(8)) ParticleControlPointConfiguration_t0 {
public:
    // CUtlString m_name;
    // CUtlVector< ParticleControlPointDriver_t > m_drivers;
    char pad_00[32];
    ParticlePreviewState_t m_previewState; // 0x20
}; // size: 0x88

/// IParticleSystemDefinition
class __declspec(align(1)) IParticleSystemDefinition0 {
public:
    char pad_00[8];
}; // size: 0x8

/// CParticleVisibilityInputs
class __declspec(align(4)) CParticleVisibilityInputs0 {
public:
    float m_flCameraBias; // 0x0
    int32_t m_nCPin; // 0x4
    float m_flProxyRadius; // 0x8
    float m_flInputMin; // 0xc
    float m_flInputMax; // 0x10
    float m_flInputPixelVisFade; // 0x14
    float m_flNoPixelVisibilityFallback; // 0x18
    float m_flDistanceInputMin; // 0x1c
    float m_flDistanceInputMax; // 0x20
    float m_flDotInputMin; // 0x24
    float m_flDotInputMax; // 0x28
    bool m_bDotCPAngles; // 0x2c
    bool m_bDotCameraAngles; // 0x2d
    float m_flAlphaScaleMin; // 0x30
    float m_flAlphaScaleMax; // 0x34
    float m_flRadiusScaleMin; // 0x38
    float m_flRadiusScaleMax; // 0x3c
    float m_flRadiusScaleFOVBase; // 0x40
    bool m_bRightEye; // 0x44
    char pad_00[3];
}; // size: 0x48

/// CPathParameters
class __declspec(align(16)) CPathParameters0 {
public:
    int32_t m_nStartControlPointNumber; // 0x0
    int32_t m_nEndControlPointNumber; // 0x4
    int32_t m_nBulgeControl; // 0x8
    float m_flBulge; // 0xc
    float m_flMidPoint; // 0x10
    Vector m_vStartPointOffset; // 0x14
    Vector m_vMidPointOffset; // 0x20
    Vector m_vEndOffset; // 0x2c
    char pad_00[8];
}; // size: 0x40

/// ParticleChildrenInfo_t
class __declspec(align(16)) ParticleChildrenInfo_t0 {
public:
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_ChildRef;
    char pad_00[8];
    float m_flDelay; // 0x8
    bool m_bEndCap; // 0xc
    bool m_bDisableChild; // 0xd
    ParticleDetailLevel_t m_nDetailLevel; // 0x10
    char pad_01[12];
}; // size: 0x20

/// ControlPointReference_t
class __declspec(align(4)) ControlPointReference_t0 {
public:
    int32_t m_controlPointNameString; // 0x0
    Vector m_vOffsetFromControlPoint; // 0x4
    bool m_bOffsetInLocalSpace; // 0x10
    char pad_00[3];
}; // size: 0x14

/// ModelReference_t
class __declspec(align(8)) ModelReference_t0 {
public:
    // CStrongHandle< InfoForResourceTypeCModel > m_model;
    char pad_00[8];
    float m_flRelativeProbabilityOfSpawn; // 0x8
    char pad_01[4];
}; // size: 0x10

/// SequenceWeightedList_t
class __declspec(align(4)) SequenceWeightedList_t0 {
public:
    int32_t m_nSequence; // 0x0
    float m_flRelativeWeight; // 0x4
}; // size: 0x8

/// CollisionGroupContext_t
class __declspec(align(4)) CollisionGroupContext_t0 {
public:
    int32_t m_nCollisionGroupNumber; // 0x0
}; // size: 0x4

/// PointDefinition_t
class __declspec(align(4)) PointDefinition_t0 {
public:
    int32_t m_nControlPoint; // 0x0
    bool m_bLocalCoords; // 0x4
    Vector m_vOffset; // 0x8
}; // size: 0x14

/// PointDefinitionWithTimeValues_t
class __declspec(align(4)) PointDefinitionWithTimeValues_t0 {
public:
    char pad_00[20];
    float m_flTimeDuration; // 0x14
}; // size: 0x18

/// CParticleSystemDefinition
class __declspec(align(16)) CParticleSystemDefinition0 {
public:
    char pad_00[8];
    int32_t m_nBehaviorVersion; // 0x8
    // CUtlVector< CParticleFunctionPreEmission* > m_PreEmissionOperators;
    // CUtlVector< CParticleFunctionEmitter* > m_Emitters;
    // CUtlVector< CParticleFunctionInitializer* > m_Initializers;
    // CUtlVector< CParticleFunctionOperator* > m_Operators;
    // CUtlVector< CParticleFunctionForce* > m_ForceGenerators;
    // CUtlVector< CParticleFunctionConstraint* > m_Constraints;
    // CUtlVector< CParticleFunctionRenderer* > m_Renderers;
    // CUtlVector< ParticleChildrenInfo_t > m_Children;
    char pad_01[364];
    int32_t m_nFirstMultipleOverride_BackwardCompat; // 0x178
    char pad_02[220];
    int32_t m_nInitialParticles; // 0x258
    int32_t m_nMaxParticles; // 0x25c
    int32_t m_nGroupID; // 0x260
    Vector m_BoundingBoxMin; // 0x264
    Vector m_BoundingBoxMax; // 0x270
    float m_flDepthSortBias; // 0x27c
    int32_t m_nSortOverridePositionCP; // 0x280
    bool m_bInfiniteBounds; // 0x284
    bool m_bEnableNamedValues; // 0x285
    // CUtlString m_NamedValueDomain;
    // CUtlVector< ParticleNamedValueSource_t* > m_NamedValueLocals;
    // Color m_ConstantColor;
    char pad_03[36];
    Vector m_ConstantNormal; // 0x2ac
    float m_flConstantRadius; // 0x2b8
    float m_flConstantRotation; // 0x2bc
    float m_flConstantRotationSpeed; // 0x2c0
    float m_flConstantLifespan; // 0x2c4
    int32_t m_nConstantSequenceNumber; // 0x2c8
    int32_t m_nConstantSequenceNumber1; // 0x2cc
    int32_t m_nSnapshotControlPoint; // 0x2d0
    // CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hSnapshot;
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_pszCullReplacementName;
    char pad_04[20];
    float m_flCullRadius; // 0x2e8
    float m_flCullFillCost; // 0x2ec
    int32_t m_nCullControlPoint; // 0x2f0
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hFallback;
    char pad_05[12];
    int32_t m_nFallbackMaxCount; // 0x300
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hLowViolenceDef;
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hReferenceReplacement;
    char pad_06[20];
    float m_flPreSimulationTime; // 0x318
    float m_flStopSimulationAfterTime; // 0x31c
    float m_flMaximumTimeStep; // 0x320
    float m_flMaximumSimTime; // 0x324
    float m_flMinimumSimTime; // 0x328
    float m_flMinimumTimeStep; // 0x32c
    int32_t m_nMinimumFrames; // 0x330
    int32_t m_nMinCPULevel; // 0x334
    int32_t m_nMinGPULevel; // 0x338
    float m_flNoDrawTimeToGoToSleep; // 0x33c
    float m_flMaxDrawDistance; // 0x340
    float m_flStartFadeDistance; // 0x344
    float m_flMaxCreationDistance; // 0x348
    int32_t m_nAggregationMinAvailableParticles; // 0x34c
    float m_flAggregateRadius; // 0x350
    bool m_bShouldBatch; // 0x354
    bool m_bShouldHitboxesFallbackToRenderBounds; // 0x355
    bool m_bShouldHitboxesFallbackToSnapshot; // 0x356
    bool m_bShouldHitboxesFallbackToCollisionHulls; // 0x357
    InheritableBoolType_t m_nViewModelEffect; // 0x358
    bool m_bScreenSpaceEffect; // 0x35c
    // CUtlSymbolLarge m_pszTargetLayerID;
    char pad_07[8];
    int32_t m_nSkipRenderControlPoint; // 0x368
    int32_t m_nAllowRenderControlPoint; // 0x36c
    bool m_bShouldSort; // 0x370
    // CUtlVector< ParticleControlPointConfiguration_t > m_controlPointConfigurations;
    char pad_08[207];
}; // size: 0x440

/// CParticleFunctionPreEmission
class __declspec(align(1)) CParticleFunctionPreEmission0 {
public:
    char pad_00[464];
    bool m_bRunOnce; // 0x1d0
    char pad_01[7];
}; // size: 0x1d8

/// CParticleFunctionEmitter
class __declspec(align(4)) CParticleFunctionEmitter0 {
public:
    char pad_00[464];
    int32_t m_nEmitterIndex; // 0x1d0
    char pad_01[4];
}; // size: 0x1d8

/// CParticleFunctionInitializer
class __declspec(align(4)) CParticleFunctionInitializer0 {
public:
    char pad_00[464];
    int32_t m_nAssociatedEmitterIndex; // 0x1d0
    char pad_01[4];
}; // size: 0x1d8

/// CParticleFunctionOperator
class __declspec(align(1)) CParticleFunctionOperator0 {
public:
    char pad_00[464];
}; // size: 0x1d0

/// CParticleFunctionForce
class __declspec(align(1)) CParticleFunctionForce0 {
public:
    char pad_00[480];
}; // size: 0x1e0

/// CParticleFunctionConstraint
class __declspec(align(1)) CParticleFunctionConstraint0 {
public:
    char pad_00[464];
}; // size: 0x1d0

/// CParticleFunctionRenderer
class __declspec(align(4)) CParticleFunctionRenderer0 {
public:
    char pad_00[464];
    CParticleVisibilityInputs VisibilityInputs; // 0x1d0
    bool m_bCannotBeRefracted; // 0x218
    bool m_bSkipRenderingOnMobile; // 0x219
    char pad_01[6];
}; // size: 0x220

/// CParticleFunction
class __declspec(align(8)) CParticleFunction0 {
public:
    char pad_00[8];
    CParticleCollectionFloatInput m_flOpStrength; // 0x8
    ParticleEndcapMode_t m_nOpEndCapState; // 0x178
    float m_flOpStartFadeInTime; // 0x17c
    float m_flOpEndFadeInTime; // 0x180
    float m_flOpStartFadeOutTime; // 0x184
    float m_flOpEndFadeOutTime; // 0x188
    float m_flOpFadeOscillatePeriod; // 0x18c
    bool m_bNormalizeToStopTime; // 0x190
    float m_flOpTimeOffsetMin; // 0x194
    float m_flOpTimeOffsetMax; // 0x198
    int32_t m_nOpTimeOffsetSeed; // 0x19c
    int32_t m_nOpTimeScaleSeed; // 0x1a0
    float m_flOpTimeScaleMin; // 0x1a4
    float m_flOpTimeScaleMax; // 0x1a8
    char pad_01[2];
    bool m_bDisableOperator; // 0x1ae
    // CUtlString m_Notes;
    char pad_02[33];
}; // size: 0x1d0

/// TextureControls_t
class __declspec(align(8)) TextureControls_t0 {
public:
    CParticleCollectionRendererFloatInput m_flFinalTextureScaleU; // 0x0
    CParticleCollectionRendererFloatInput m_flFinalTextureScaleV; // 0x170
    CParticleCollectionRendererFloatInput m_flFinalTextureOffsetU; // 0x2e0
    CParticleCollectionRendererFloatInput m_flFinalTextureOffsetV; // 0x450
    CParticleCollectionRendererFloatInput m_flFinalTextureUVRotation; // 0x5c0
    CParticleCollectionRendererFloatInput m_flZoomScale; // 0x730
    CParticleCollectionRendererFloatInput m_flDistortion; // 0x8a0
    bool m_bRandomizeOffsets; // 0xa10
    bool m_bClampUVs; // 0xa11
    SpriteCardPerParticleScale_t m_nPerParticleBlend; // 0xa14
    SpriteCardPerParticleScale_t m_nPerParticleScale; // 0xa18
    SpriteCardPerParticleScale_t m_nPerParticleOffsetU; // 0xa1c
    SpriteCardPerParticleScale_t m_nPerParticleOffsetV; // 0xa20
    SpriteCardPerParticleScale_t m_nPerParticleRotation; // 0xa24
    SpriteCardPerParticleScale_t m_nPerParticleZoom; // 0xa28
    SpriteCardPerParticleScale_t m_nPerParticleDistortion; // 0xa2c
}; // size: 0xa30

/// TextureGroup_t
class __declspec(align(8)) TextureGroup_t0 {
public:
    bool m_bEnabled; // 0x0
    bool m_bReplaceTextureWithGradient; // 0x1
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hTexture;
    // CColorGradient m_Gradient;
    char pad_00[36];
    SpriteCardTextureType_t m_nTextureType; // 0x28
    SpriteCardTextureChannel_t m_nTextureChannels; // 0x2c
    ParticleTextureLayerBlendType_t m_nTextureBlendMode; // 0x30
    CParticleCollectionRendererFloatInput m_flTextureBlend; // 0x38
    TextureControls_t m_TextureControls; // 0x1a8
}; // size: 0xbd8

/// CBaseRendererSource2
class __declspec(align(8)) CBaseRendererSource20 {
public:
    char pad_00[544];
    CParticleCollectionRendererFloatInput m_flRadiusScale; // 0x220
    CParticleCollectionRendererFloatInput m_flAlphaScale; // 0x390
    CParticleCollectionRendererFloatInput m_flRollScale; // 0x500
    ParticleAttributeIndex_t m_nAlpha2Field; // 0x670
    CParticleCollectionRendererVecInput m_vecColorScale; // 0x678
    ParticleColorBlendType_t m_nColorBlendType; // 0xd30
    SpriteCardShaderType_t m_nShaderType; // 0xd34
    // CUtlString m_strShaderOverride;
    char pad_01[8];
    CParticleCollectionRendererFloatInput m_flCenterXOffset; // 0xd40
    CParticleCollectionRendererFloatInput m_flCenterYOffset; // 0xeb0
    float m_flBumpStrength; // 0x1020
    ParticleSequenceCropOverride_t m_nCropTextureOverride; // 0x1024
    // CUtlLeanVector< TextureGroup_t > m_vecTexturesInput;
    char pad_02[16];
    float m_flAnimationRate; // 0x1038
    AnimationType_t m_nAnimationType; // 0x103c
    bool m_bAnimateInFPS; // 0x1040
    CParticleCollectionRendererFloatInput m_flMotionVectorScaleU; // 0x1048
    CParticleCollectionRendererFloatInput m_flMotionVectorScaleV; // 0x11b8
    CParticleCollectionRendererFloatInput m_flSelfIllumAmount; // 0x1328
    CParticleCollectionRendererFloatInput m_flDiffuseAmount; // 0x1498
    CParticleCollectionRendererFloatInput m_flDiffuseClamp; // 0x1608
    int32_t m_nLightingControlPoint; // 0x1778
    ParticleOutputBlendMode_t m_nOutputBlendMode; // 0x177c
    bool m_bGammaCorrectVertexColors; // 0x1780
    bool m_bSaturateColorPreAlphaBlend; // 0x1781
    CParticleCollectionRendererFloatInput m_flAddSelfAmount; // 0x1788
    CParticleCollectionRendererFloatInput m_flDesaturation; // 0x18f8
    CParticleCollectionRendererFloatInput m_flOverbrightFactor; // 0x1a68
    int32_t m_nHSVShiftControlPoint; // 0x1bd8
    ParticleFogType_t m_nFogType; // 0x1bdc
    CParticleCollectionRendererFloatInput m_flFogAmount; // 0x1be0
    bool m_bTintByFOW; // 0x1d50
    bool m_bTintByGlobalLight; // 0x1d51
    SpriteCardPerParticleScale_t m_nPerParticleAlphaReference; // 0x1d54
    SpriteCardPerParticleScale_t m_nPerParticleAlphaRefWindow; // 0x1d58
    ParticleAlphaReferenceType_t m_nAlphaReferenceType; // 0x1d5c
    CParticleCollectionRendererFloatInput m_flAlphaReferenceSoftness; // 0x1d60
    CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToZero; // 0x1ed0
    CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToOne; // 0x2040
    bool m_bRefract; // 0x21b0
    bool m_bRefractSolid; // 0x21b1
    CParticleCollectionRendererFloatInput m_flRefractAmount; // 0x21b8
    int32_t m_nRefractBlurRadius; // 0x2328
    BlurFilterType_t m_nRefractBlurType; // 0x232c
    bool m_bOnlyRenderInEffectsBloomPass; // 0x2330
    bool m_bOnlyRenderInEffectsWaterPass; // 0x2331
    bool m_bUseMixedResolutionRendering; // 0x2332
    bool m_bOnlyRenderInEffecsGameOverlay; // 0x2333
    char m_stencilTestID[128]; // 0x2334
    bool m_bStencilTestExclude; // 0x23b4
    char m_stencilWriteID[128]; // 0x23b5
    bool m_bWriteStencilOnDepthPass; // 0x2435
    bool m_bWriteStencilOnDepthFail; // 0x2436
    bool m_bReverseZBuffering; // 0x2437
    bool m_bDisableZBuffering; // 0x2438
    ParticleDepthFeatheringMode_t m_nFeatheringMode; // 0x243c
    CParticleCollectionRendererFloatInput m_flFeatheringMinDist; // 0x2440
    CParticleCollectionRendererFloatInput m_flFeatheringMaxDist; // 0x25b0
    CParticleCollectionRendererFloatInput m_flFeatheringFilter; // 0x2720
    CParticleCollectionRendererFloatInput m_flFeatheringDepthMapFilter; // 0x2890
    CParticleCollectionRendererFloatInput m_flDepthBias; // 0x2a00
    ParticleSortingChoiceList_t m_nSortMethod; // 0x2b70
    bool m_bBlendFramesSeq0; // 0x2b74
    bool m_bMaxLuminanceBlendingSequence0; // 0x2b75
    char pad_03[626];
}; // size: 0x2de8

/// C_OP_RenderSprites
class __declspec(align(8)) C_OP_RenderSprites0 {
public:
    char pad_00[11752];
    CParticleCollectionRendererFloatInput m_nSequenceOverride; // 0x2de8
    bool m_bSequenceNumbersAreRawSequenceIndices; // 0x2f58
    ParticleOrientationChoiceList_t m_nOrientationType; // 0x2f5c
    int32_t m_nOrientationControlPoint; // 0x2f60
    bool m_bUseYawWithNormalAligned; // 0x2f64
    CParticleCollectionRendererFloatInput m_flMinSize; // 0x2f68
    CParticleCollectionRendererFloatInput m_flMaxSize; // 0x30d8
    CParticleCollectionRendererFloatInput m_flAlphaAdjustWithSizeAdjust; // 0x3248
    CParticleCollectionRendererFloatInput m_flStartFadeSize; // 0x33b8
    CParticleCollectionRendererFloatInput m_flEndFadeSize; // 0x3528
    float m_flStartFadeDot; // 0x3698
    float m_flEndFadeDot; // 0x369c
    bool m_bDistanceAlpha; // 0x36a0
    bool m_bSoftEdges; // 0x36a1
    float m_flEdgeSoftnessStart; // 0x36a4
    float m_flEdgeSoftnessEnd; // 0x36a8
    bool m_bOutline; // 0x36ac
    // Color m_OutlineColor;
    char pad_01[4];
    int32_t m_nOutlineAlpha; // 0x36b4
    float m_flOutlineStart0; // 0x36b8
    float m_flOutlineStart1; // 0x36bc
    float m_flOutlineEnd0; // 0x36c0
    float m_flOutlineEnd1; // 0x36c4
    ParticleLightingQuality_t m_nLightingMode; // 0x36c8
    CParticleCollectionRendererVecInput m_vecLightingOverride; // 0x36d0
    CParticleCollectionRendererFloatInput m_flLightingTessellation; // 0x3d88
    CParticleCollectionRendererFloatInput m_flLightingDirectionality; // 0x3ef8
    bool m_bParticleShadows; // 0x4068
    float m_flShadowDensity; // 0x406c
    CReplicationParameters m_replicationParameters; // 0x4070
    char pad_02[8];
}; // size: 0x5240

/// CReplicationParameters
class __declspec(align(8)) CReplicationParameters0 {
public:
    ParticleReplicationMode_t m_nReplicationMode; // 0x0
    bool m_bScaleChildParticleRadii; // 0x4
    CParticleCollectionFloatInput m_flMinRandomRadiusScale; // 0x8
    CParticleCollectionFloatInput m_flMaxRandomRadiusScale; // 0x178
    CParticleCollectionVecInput m_vMinRandomDisplacement; // 0x2e8
    CParticleCollectionVecInput m_vMaxRandomDisplacement; // 0x9a0
    CParticleCollectionFloatInput m_flModellingScale; // 0x1058
}; // size: 0x11c8

/// FloatInputMaterialVariable_t
class __declspec(align(8)) FloatInputMaterialVariable_t0 {
public:
    // CUtlString m_strVariable;
    char pad_00[8];
    CParticleCollectionFloatInput m_flInput; // 0x8
}; // size: 0x178

/// VecInputMaterialVariable_t
class __declspec(align(8)) VecInputMaterialVariable_t0 {
public:
    // CUtlString m_strVariable;
    char pad_00[8];
    CParticleCollectionVecInput m_vecInput; // 0x8
}; // size: 0x6c0

/// C_OP_RenderCables
class __declspec(align(8)) C_OP_RenderCables0 {
public:
    char pad_00[544];
    CParticleCollectionFloatInput m_flRadiusScale; // 0x220
    CParticleCollectionFloatInput m_flAlphaScale; // 0x390
    CParticleCollectionVecInput m_vecColorScale; // 0x500
    ParticleColorBlendType_t m_nColorBlendType; // 0xbb8
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial;
    char pad_01[12];
    TextureRepetitionMode_t m_nTextureRepetitionMode; // 0xbc8
    CParticleCollectionFloatInput m_flTextureRepeatsPerSegment; // 0xbd0
    CParticleCollectionFloatInput m_flTextureRepeatsCircumference; // 0xd40
    CParticleCollectionFloatInput m_flColorMapOffsetV; // 0xeb0
    CParticleCollectionFloatInput m_flColorMapOffsetU; // 0x1020
    CParticleCollectionFloatInput m_flNormalMapOffsetV; // 0x1190
    CParticleCollectionFloatInput m_flNormalMapOffsetU; // 0x1300
    bool m_bDrawCableCaps; // 0x1470
    float m_flCapRoundness; // 0x1474
    float m_flCapOffsetAmount; // 0x1478
    float m_flTessScale; // 0x147c
    int32_t m_nMinTesselation; // 0x1480
    int32_t m_nMaxTesselation; // 0x1484
    int32_t m_nRoundness; // 0x1488
    bool m_nForceRoundnessFixed; // 0x148c
    CParticleTransformInput m_LightingTransform; // 0x1490
    // CUtlLeanVector< FloatInputMaterialVariable_t > m_MaterialFloatVars;
    // CUtlLeanVector< VecInputMaterialVariable_t > m_MaterialVecVars;
    char pad_02[64];
}; // size: 0x1538

class __declspec(align(1)) CPulseExecCursor {
public:
    char pad_00[208];
}; // size: 0xd0

class __declspec(align(8)) CPulse_BlackboardReference {
public:
    // CStrongHandle< InfoForResourceTypeIPulseGraphDef > m_hBlackboardResource;
    // PulseSymbol_t m_BlackboardResource;
    char pad_00[24];
    PulseDocNodeID_t m_nNodeID; // 0x18
    // CGlobalSymbol m_NodeName;
    char pad_01[12];
}; // size: 0x28

class __declspec(align(8)) CPulse_InvokeBinding {
public:
    PulseRegisterMap_t m_RegisterMap; // 0x0
    // PulseSymbol_t m_FuncName;
    char pad_00[16];
    PulseRuntimeCellIndex_t m_nCellIndex; // 0x40
    PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x44
    int32_t m_nSrcInstruction; // 0x48
    char pad_01[100];
}; // size: 0xb0

class __declspec(align(8)) CPulse_CallInfo {
public:
    // PulseSymbol_t m_PortName;
    char pad_00[16];
    PulseDocNodeID_t m_nEditorNodeID; // 0x10
    char pad_01[4];
    PulseRegisterMap_t m_RegisterMap; // 0x18
    PulseDocNodeID_t m_CallMethodID; // 0x48
    PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x4c
    int32_t m_nSrcInstruction; // 0x50
    char pad_02[4];
}; // size: 0x58

class __declspec(align(8)) CPulseCell_Base {
public:
    char pad_00[8];
    PulseDocNodeID_t m_nEditorNodeID; // 0x8
    char pad_01[60];
}; // size: 0x48

class __declspec(align(8)) CPulseGraphDef {
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
}; // size: 0x198

class __declspec(align(1)) CBasePulseGraphInstance {
public:
    char pad_00[280];
}; // size: 0x118

class __declspec(align(1)) CPulseArraylib {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) CPulseMathlib {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) CPulseTestScriptLib {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(4)) CPulse_OutflowConnection {
public:
    // PulseSymbol_t m_SourceOutflowName;
    char pad_00[16];
    PulseRuntimeChunkIndex_t m_nDestChunk; // 0x10
    int32_t m_nInstruction; // 0x14
    PulseRegisterMap_t m_OutflowRegisterMap; // 0x18
}; // size: 0x48

class __declspec(align(1)) CPulse_ResumePoint {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(1)) SignatureOutflow_Continue {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(1)) SignatureOutflow_Resume {
public:
    char pad_00[72];
}; // size: 0x48

/// PulseNodeDynamicOutflows_t::DynamicOutflow_t
class __declspec(align(8)) PulseNodeDynamicOutflows_t__DynamicOutflow_t {
public:
    // CGlobalSymbol m_OutflowID;
    char pad_00[8];
    CPulse_OutflowConnection m_Connection; // 0x8
}; // size: 0x50

class __declspec(align(8)) PulseNodeDynamicOutflows_t {
public:
    // CUtlVector< PulseNodeDynamicOutflows_t::DynamicOutflow_t > m_Outflows;
    char pad_00[24];
}; // size: 0x18

class __declspec(align(8)) CPulseCell_BaseFlow {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CPulseCell_BaseRequirement {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CPulseCell_Inflow_BaseEntrypoint {
public:
    char pad_00[72];
    PulseRuntimeChunkIndex_t m_EntryChunk; // 0x48
    char pad_01[4];
    PulseRegisterMap_t m_RegisterMap; // 0x50
}; // size: 0x80

class __declspec(align(8)) CPulseCell_Inflow_Method {
public:
    // PulseSymbol_t m_MethodName;
    // CUtlString m_Description;
    char pad_00[152];
    bool m_bIsPublic; // 0x98
    // CPulseValueFullType m_ReturnType;
    // CUtlLeanVector< CPulseRuntimeMethodArg > m_Args;
    char pad_01[47];
}; // size: 0xc8

class __declspec(align(8)) CPulseCell_Inflow_EventHandler {
public:
    // PulseSymbol_t m_EventName;
    char pad_00[144];
}; // size: 0x90

class __declspec(align(8)) CPulseCell_Inflow_GraphHook {
public:
    // PulseSymbol_t m_HookName;
    char pad_00[144];
}; // size: 0x90

class __declspec(align(8)) CPulseCell_Inflow_EntOutputHandler {
public:
    // PulseSymbol_t m_SourceEntity;
    // PulseSymbol_t m_SourceOutput;
    // CPulseValueFullType m_ExpectedParamType;
    char pad_00[184];
}; // size: 0xb8

class __declspec(align(8)) CPulseCell_Inflow_ObservableVariableListener {
public:
    char pad_00[128];
    PulseRuntimeBlackboardReferenceIndex_t m_nBlackboardReference; // 0x80
    bool m_bSelfReference; // 0x82
    char pad_01[5];
}; // size: 0x88

class __declspec(align(1)) CPulseCell_BaseYieldingInflow {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(1)) CPulseCell_BaseLerp {
public:
    char pad_00[72];
    CPulse_ResumePoint m_WakeResume; // 0x48
}; // size: 0x90

/// CPulseCell_BaseLerp::CursorState_t
class __declspec(align(4)) CPulseCell_BaseLerp__CursorState_t {
public:
    GameTime_t m_StartTime; // 0x0
    GameTime_t m_EndTime; // 0x4
}; // size: 0x8

class __declspec(align(8)) CPulseCell_BaseValue {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CPulseCell_Step_PublicOutput {
public:
    char pad_00[72];
    PulseRuntimeOutputIndex_t m_OutputIndex; // 0x48
    char pad_01[4];
}; // size: 0x50

class __declspec(align(8)) CPulseCell_Inflow_Yield {
public:
    char pad_00[72];
    CPulse_ResumePoint m_UnyieldResume; // 0x48
}; // size: 0x90

class __declspec(align(8)) CPulseCell_Inflow_Wait {
public:
    char pad_00[72];
    CPulse_ResumePoint m_WakeResume; // 0x48
}; // size: 0x90

class __declspec(align(8)) CPulseCell_Outflow_CycleOrdered {
public:
    // CUtlVector< CPulse_OutflowConnection > m_Outputs;
    char pad_00[96];
}; // size: 0x60

/// CPulseCell_Outflow_CycleOrdered::InstanceState_t
class __declspec(align(4)) CPulseCell_Outflow_CycleOrdered__InstanceState_t {
public:
    int32_t m_nNextIndex; // 0x0
}; // size: 0x4

class __declspec(align(8)) CPulseCell_Outflow_CycleRandom {
public:
    // CUtlVector< CPulse_OutflowConnection > m_Outputs;
    char pad_00[96];
}; // size: 0x60

class __declspec(align(8)) CPulseCell_Outflow_CycleShuffled {
public:
    // CUtlVector< CPulse_OutflowConnection > m_Outputs;
    char pad_00[96];
}; // size: 0x60

/// CPulseCell_Outflow_CycleShuffled::InstanceState_t
class __declspec(align(8)) CPulseCell_Outflow_CycleShuffled__InstanceState_t {
public:
    // CUtlVectorFixedGrowable< uint8, 8 > m_Shuffle;
    char pad_00[32];
    int32_t m_nNextShuffle; // 0x20
    char pad_01[4];
}; // size: 0x28

class __declspec(align(8)) CPulseCell_Value_RandomInt {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CPulseCell_Value_RandomFloat {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CPulseCell_Step_DebugLog {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CPulseCell_Step_CallExternalMethod {
public:
    // PulseSymbol_t m_MethodName;
    // PulseSymbol_t m_GameBlackboard;
    // CUtlLeanVector< CPulseRuntimeMethodArg > m_ExpectedArgs;
    char pad_00[120];
    PulseMethodCallMode_t m_nAsyncCallMode; // 0x78
    char pad_01[4];
    CPulse_ResumePoint m_OnFinished; // 0x80
}; // size: 0xc8

class __declspec(align(8)) CPulseCell_Unknown {
public:
    // KeyValues3 m_UnknownKeys;
    char pad_00[88];
}; // size: 0x58

class __declspec(align(8)) CPulseCell_Value_Curve {
public:
    // CPiecewiseCurve m_Curve;
    char pad_00[136];
}; // size: 0x88

class __declspec(align(8)) CPulseCell_FireCursors {
public:
    // CUtlVector< CPulse_OutflowConnection > m_Outflows;
    char pad_00[96];
    bool m_bWaitForChildOutflows; // 0x60
    char pad_01[7];
    CPulse_ResumePoint m_OnFinished; // 0x68
    CPulse_ResumePoint m_OnCanceled; // 0xb0
}; // size: 0xf8

class __declspec(align(8)) CPulseCell_Value_Gradient {
public:
    // CColorGradient m_Gradient;
    char pad_00[96];
}; // size: 0x60

class __declspec(align(8)) CPulseCell_IntervalTimer {
public:
    char pad_00[72];
    CPulse_ResumePoint m_Completed; // 0x48
    SignatureOutflow_Continue m_OnInterval; // 0x90
}; // size: 0xd8

/// CPulseCell_IntervalTimer::CursorState_t
class __declspec(align(4)) CPulseCell_IntervalTimer__CursorState_t {
public:
    GameTime_t m_StartTime; // 0x0
    GameTime_t m_EndTime; // 0x4
    float m_flWaitInterval; // 0x8
    float m_flWaitIntervalHigh; // 0xc
    bool m_bCompleteOnNextWake; // 0x10
    char pad_00[3];
}; // size: 0x14

class __declspec(align(8)) OutflowWithRequirements_t {
public:
    CPulse_OutflowConnection m_Connection; // 0x0
    PulseDocNodeID_t m_DestinationFlowNodeID; // 0x48
    // CUtlVector< PulseDocNodeID_t > m_RequirementNodeIDs;
    // CUtlVector< int32 > m_nCursorStateBlockIndex;
    char pad_00[52];
}; // size: 0x80

class __declspec(align(8)) PulseSelectorOutflowList_t {
public:
    // CUtlVector< OutflowWithRequirements_t > m_Outflows;
    char pad_00[24];
}; // size: 0x18

class __declspec(align(8)) CPulseCell_LimitCount {
public:
    char pad_00[72];
    int32_t m_nLimitCount; // 0x48
    char pad_01[4];
}; // size: 0x50

/// CPulseCell_LimitCount::Criteria_t
class __declspec(align(1)) CPulseCell_LimitCount__Criteria_t {
public:
    bool m_bLimitCountPasses; // 0x0
}; // size: 0x1

/// CPulseCell_LimitCount::InstanceState_t
class __declspec(align(4)) CPulseCell_LimitCount__InstanceState_t {
public:
    int32_t m_nCurrentCount; // 0x0
}; // size: 0x4

class __declspec(align(8)) CPulseCell_IsRequirementValid {
public:
    char pad_00[72];
}; // size: 0x48

/// CPulseCell_IsRequirementValid::Criteria_t
class __declspec(align(1)) CPulseCell_IsRequirementValid__Criteria_t {
public:
    bool m_bIsValid; // 0x0
}; // size: 0x1

class __declspec(align(8)) CPulseCell_InlineNodeSkipSelector {
public:
    char pad_00[72];
    PulseDocNodeID_t m_nFlowNodeID; // 0x48
    bool m_bAnd; // 0x4c
    PulseSelectorOutflowList_t m_PassOutflow; // 0x50
    CPulse_OutflowConnection m_FailOutflow; // 0x68
}; // size: 0xb0

class __declspec(align(8)) CPulseCell_PickBestOutflowSelector {
public:
    char pad_00[72];
    PulseBestOutflowRules_t m_nCheckType; // 0x48
    PulseSelectorOutflowList_t m_OutflowList; // 0x50
}; // size: 0x68

/// CPulseCell_Timeline::TimelineEvent_t
class __declspec(align(8)) CPulseCell_Timeline__TimelineEvent_t {
public:
    float m_flTimeFromPrevious; // 0x0
    char pad_00[4];
    CPulse_OutflowConnection m_EventOutflow; // 0x8
}; // size: 0x50

class __declspec(align(8)) CPulseCell_Timeline {
public:
    // CUtlVector< CPulseCell_Timeline::TimelineEvent_t > m_TimelineEvents;
    char pad_00[96];
    bool m_bWaitForChildOutflows; // 0x60
    char pad_01[7];
    CPulse_ResumePoint m_OnFinished; // 0x68
    CPulse_ResumePoint m_OnCanceled; // 0xb0
}; // size: 0xf8

class __declspec(align(8)) PulseObservableBoolExpression_t {
public:
    CPulse_OutflowConnection m_EvaluateConnection; // 0x0
    // CUtlVector< PulseRuntimeVarIndex_t > m_DependentObservableVars;
    // CUtlVector< PulseRuntimeBlackboardReferenceIndex_t > m_DependentObservableBlackboardReferences;
    char pad_00[48];
}; // size: 0x78

class __declspec(align(8)) CPulseCell_WaitForObservable {
public:
    char pad_00[72];
    PulseObservableBoolExpression_t m_Condition; // 0x48
    CPulse_ResumePoint m_OnTrue; // 0xc0
}; // size: 0x108

class __declspec(align(1)) CPulseCell_BaseState {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CPulseCell_BooleanSwitchState {
public:
    char pad_00[72];
    PulseObservableBoolExpression_t m_Condition; // 0x48
    CPulse_OutflowConnection m_SubGraph; // 0xc0
    CPulse_OutflowConnection m_WhenTrue; // 0x108
    CPulse_OutflowConnection m_WhenFalse; // 0x150
}; // size: 0x198

class __declspec(align(1)) CPulseCursorFuncs {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(8)) CPulseCell_WaitForCursorsWithTagBase {
public:
    char pad_00[72];
    int32_t m_nCursorsAllowedToWait; // 0x48
    char pad_01[4];
    CPulse_ResumePoint m_WaitComplete; // 0x50
}; // size: 0x98

/// CPulseCell_WaitForCursorsWithTagBase::CursorState_t
class __declspec(align(1)) CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
public:
    // PulseSymbol_t m_TagName;
    char pad_00[48];
}; // size: 0x30

class __declspec(align(8)) CPulseCell_WaitForCursorsWithTag {
public:
    char pad_00[152];
    bool m_bTagSelfWhenComplete; // 0x98
    PulseCursorCancelPriority_t m_nDesiredKillPriority; // 0x9c
}; // size: 0xa0

class __declspec(align(8)) CPulseCell_CursorQueue {
public:
    char pad_00[152];
    int32_t m_nCursorsAllowedToRunParallel; // 0x98
    char pad_01[4];
}; // size: 0xa0

class __declspec(align(1)) CParticleCollectionBindingInstance {
public:
    char pad_00[312];
}; // size: 0x138

class __declspec(align(1)) CParticleBindingRealPulse {
public:
    char pad_00[312];
}; // size: 0x138

/// C_OP_ConstrainDistance
class __declspec(align(8)) C_OP_ConstrainDistance0 {
public:
    char pad_00[464];
    CParticleCollectionFloatInput m_fMinDistance; // 0x1d0
    CParticleCollectionFloatInput m_fMaxDistance; // 0x340
    int32_t m_nControlPointNumber; // 0x4b0
    Vector m_CenterOffset; // 0x4b4
    bool m_bGlobalCenter; // 0x4c0
    char pad_01[7];
}; // size: 0x4c8

/// C_OP_CollideWithSelf
class __declspec(align(8)) C_OP_CollideWithSelf0 {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flRadiusScale; // 0x1d0
    CPerParticleFloatInput m_flMinimumSpeed; // 0x340
}; // size: 0x4b0

/// C_OP_CollideWithParentParticles
class __declspec(align(8)) C_OP_CollideWithParentParticles0 {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flParentRadiusScale; // 0x1d0
    CPerParticleFloatInput m_flRadiusScale; // 0x340
}; // size: 0x4b0

/// C_OP_ConstrainDistanceToPath
class __declspec(align(16)) C_OP_ConstrainDistanceToPath0 {
public:
    char pad_00[464];
    float m_fMinDistance; // 0x1d0
    float m_flMaxDistance0; // 0x1d4
    float m_flMaxDistanceMid; // 0x1d8
    float m_flMaxDistance1; // 0x1dc
    CPathParameters m_PathParameters; // 0x1e0
    float m_flTravelTime; // 0x220
    ParticleAttributeIndex_t m_nFieldScale; // 0x224
    ParticleAttributeIndex_t m_nManualTField; // 0x228
    char pad_01[4];
}; // size: 0x230

/// C_OP_ConstrainDistanceToUserSpecifiedPath
class __declspec(align(8)) C_OP_ConstrainDistanceToUserSpecifiedPath0 {
public:
    char pad_00[464];
    float m_fMinDistance; // 0x1d0
    float m_flMaxDistance; // 0x1d4
    float m_flTimeScale; // 0x1d8
    bool m_bLoopedPath; // 0x1dc
    // CUtlVector< PointDefinitionWithTimeValues_t > m_pointList;
    char pad_01[27];
}; // size: 0x1f8

/// C_OP_PlanarConstraint
class __declspec(align(8)) C_OP_PlanarConstraint0 {
public:
    char pad_00[464];
    Vector m_PointOnPlane; // 0x1d0
    Vector m_PlaneNormal; // 0x1dc
    int32_t m_nControlPointNumber; // 0x1e8
    bool m_bGlobalOrigin; // 0x1ec
    bool m_bGlobalNormal; // 0x1ed
    CPerParticleFloatInput m_flRadiusScale; // 0x1f0
    CParticleCollectionFloatInput m_flMaximumDistanceToCP; // 0x360
    bool m_bUseOldCode; // 0x4d0
    char pad_01[7];
}; // size: 0x4d8

/// C_OP_WorldCollideConstraint
class __declspec(align(8)) C_OP_WorldCollideConstraint0 {
public:
    char pad_00[464];
}; // size: 0x1d0

/// C_OP_WorldTraceConstraint
class __declspec(align(8)) C_OP_WorldTraceConstraint0 {
public:
    char pad_00[464];
    int32_t m_nCP; // 0x1d0
    Vector m_vecCpOffset; // 0x1d4
    ParticleCollisionMode_t m_nCollisionMode; // 0x1e0
    ParticleCollisionMode_t m_nCollisionModeMin; // 0x1e4
    ParticleTraceSet_t m_nTraceSet; // 0x1e8
    char m_CollisionGroupName[128]; // 0x1ec
    bool m_bWorldOnly; // 0x26c
    bool m_bBrushOnly; // 0x26d
    bool m_bIncludeWater; // 0x26e
    int32_t m_nIgnoreCP; // 0x270
    float m_flCpMovementTolerance; // 0x274
    float m_flRetestRate; // 0x278
    float m_flTraceTolerance; // 0x27c
    float m_flCollisionConfirmationSpeed; // 0x280
    float m_nMaxTracesPerFrame; // 0x284
    CPerParticleFloatInput m_flRadiusScale; // 0x288
    CPerParticleFloatInput m_flBounceAmount; // 0x3f8
    CPerParticleFloatInput m_flSlideAmount; // 0x568
    CPerParticleFloatInput m_flRandomDirScale; // 0x6d8
    bool m_bDecayBounce; // 0x848
    bool m_bKillonContact; // 0x849
    float m_flMinSpeed; // 0x84c
    bool m_bSetNormal; // 0x850
    ParticleAttributeIndex_t m_nStickOnCollisionField; // 0x854
    CPerParticleFloatInput m_flStopSpeed; // 0x858
    ParticleAttributeIndex_t m_nEntityStickDataField; // 0x9c8
    ParticleAttributeIndex_t m_nEntityStickNormalField; // 0x9cc
}; // size: 0x9d0

/// C_OP_BoxConstraint
class __declspec(align(8)) C_OP_BoxConstraint0 {
public:
    char pad_00[464];
    CParticleCollectionVecInput m_vecMin; // 0x1d0
    CParticleCollectionVecInput m_vecMax; // 0x888
    int32_t m_nCP; // 0xf40
    bool m_bLocalSpace; // 0xf44
    bool m_bAccountForRadius; // 0xf45
    char pad_01[2];
}; // size: 0xf48

/// C_OP_ShapeMatchingConstraint
class __declspec(align(8)) C_OP_ShapeMatchingConstraint0 {
public:
    char pad_00[464];
    float m_flShapeRestorationTime; // 0x1d0
    char pad_01[4];
}; // size: 0x1d8

/// C_OP_RopeSpringConstraint
class __declspec(align(8)) C_OP_RopeSpringConstraint0 {
public:
    char pad_00[464];
    CParticleCollectionFloatInput m_flRestLength; // 0x1d0
    CParticleCollectionFloatInput m_flMinDistance; // 0x340
    CParticleCollectionFloatInput m_flMaxDistance; // 0x4b0
    float m_flAdjustmentScale; // 0x620
    CParticleCollectionFloatInput m_flInitialRestingLength; // 0x628
}; // size: 0x798

/// C_OP_SpringToVectorConstraint
class __declspec(align(8)) C_OP_SpringToVectorConstraint0 {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flRestLength; // 0x1d0
    CPerParticleFloatInput m_flMinDistance; // 0x340
    CPerParticleFloatInput m_flMaxDistance; // 0x4b0
    CPerParticleFloatInput m_flRestingLength; // 0x620
    CPerParticleVecInput m_vecAnchorVector; // 0x790
}; // size: 0xe48

/// C_OP_ConstrainLineLength
class __declspec(align(8)) C_OP_ConstrainLineLength0 {
public:
    char pad_00[464];
    float m_flMinDistance; // 0x1d0
    float m_flMaxDistance; // 0x1d4
}; // size: 0x1d8

/// C_INIT_RingWave
class __declspec(align(8)) C_INIT_RingWave0 {
public:
    char pad_00[472];
    CParticleTransformInput m_TransformInput; // 0x1d8
    CParticleCollectionFloatInput m_flParticlesPerOrbit; // 0x240
    CPerParticleFloatInput m_flInitialRadius; // 0x3b0
    CPerParticleFloatInput m_flThickness; // 0x520
    CPerParticleFloatInput m_flInitialSpeedMin; // 0x690
    CPerParticleFloatInput m_flInitialSpeedMax; // 0x800
    CPerParticleFloatInput m_flRoll; // 0x970
    CPerParticleFloatInput m_flPitch; // 0xae0
    CPerParticleFloatInput m_flYaw; // 0xc50
    bool m_bEvenDistribution; // 0xdc0
    bool m_bXYVelocityOnly; // 0xdc1
    char pad_01[6];
}; // size: 0xdc8

/// C_INIT_CreateSpiralSphere
class __declspec(align(8)) C_INIT_CreateSpiralSphere0 {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber; // 0x1d8
    int32_t m_nOverrideCP; // 0x1dc
    int32_t m_nDensity; // 0x1e0
    float m_flInitialRadius; // 0x1e4
    float m_flInitialSpeedMin; // 0x1e8
    float m_flInitialSpeedMax; // 0x1ec
    bool m_bUseParticleCount; // 0x1f0
    char pad_01[7];
}; // size: 0x1f8

/// C_INIT_CreateInEpitrochoid
class __declspec(align(8)) C_INIT_CreateInEpitrochoid0 {
public:
    char pad_00[472];
    int32_t m_nComponent1; // 0x1d8
    int32_t m_nComponent2; // 0x1dc
    CParticleTransformInput m_TransformInput; // 0x1e0
    CPerParticleFloatInput m_flParticleDensity; // 0x248
    CPerParticleFloatInput m_flOffset; // 0x3b8
    CPerParticleFloatInput m_flRadius1; // 0x528
    CPerParticleFloatInput m_flRadius2; // 0x698
    bool m_bUseCount; // 0x808
    bool m_bUseLocalCoords; // 0x809
    bool m_bOffsetExistingPos; // 0x80a
    char pad_01[5];
}; // size: 0x810

/// C_INIT_ScreenSpacePositionOfTarget
class __declspec(align(8)) C_INIT_ScreenSpacePositionOfTarget0 {
public:
    char pad_00[472];
    CPerParticleVecInput m_vecTargetPosition; // 0x1d8
    bool m_bOututBehindness; // 0x890
    ParticleAttributeIndex_t m_nBehindFieldOutput; // 0x894
    CParticleRemapFloatInput m_flBehindOutputRemap; // 0x898
}; // size: 0xa08

/// C_INIT_CreatePhyllotaxis
class __declspec(align(8)) C_INIT_CreatePhyllotaxis0 {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber; // 0x1d8
    int32_t m_nScaleCP; // 0x1dc
    int32_t m_nComponent; // 0x1e0
    float m_fRadCentCore; // 0x1e4
    float m_fRadPerPoint; // 0x1e8
    float m_fRadPerPointTo; // 0x1ec
    float m_fpointAngle; // 0x1f0
    float m_fsizeOverall; // 0x1f4
    float m_fRadBias; // 0x1f8
    float m_fMinRad; // 0x1fc
    float m_fDistBias; // 0x200
    bool m_bUseLocalCoords; // 0x204
    bool m_bUseWithContEmit; // 0x205
    bool m_bUseOrigRadius; // 0x206
    char pad_01[1];
}; // size: 0x208

/// C_INIT_CreateOnModel
class __declspec(align(8)) C_INIT_CreateOnModel0 {
public:
    char pad_00[472];
    CParticleModelInput m_modelInput; // 0x1d8
    CParticleTransformInput m_transformInput; // 0x238
    int32_t m_nForceInModel; // 0x2a0
    bool m_bScaleToVolume; // 0x2a4
    bool m_bEvenDistribution; // 0x2a5
    CParticleCollectionFloatInput m_nDesiredHitbox; // 0x2a8
    int32_t m_nHitboxValueFromControlPointIndex; // 0x418
    CParticleCollectionVecInput m_vecHitBoxScale; // 0x420
    float m_flBoneVelocity; // 0xad8
    float m_flMaxBoneVelocity; // 0xadc
    CParticleCollectionVecInput m_vecDirectionBias; // 0xae0
    char m_HitboxSetName[128]; // 0x1198
    bool m_bLocalCoords; // 0x1218
    bool m_bUseBones; // 0x1219
    bool m_bUseMesh; // 0x121a
    CParticleCollectionFloatInput m_flShellSize; // 0x1220
}; // size: 0x1390

/// C_INIT_CreateOnModelAtHeight
class __declspec(align(8)) C_INIT_CreateOnModelAtHeight0 {
public:
    char pad_00[472];
    bool m_bUseBones; // 0x1d8
    bool m_bForceZ; // 0x1d9
    int32_t m_nControlPointNumber; // 0x1dc
    int32_t m_nHeightCP; // 0x1e0
    bool m_bUseWaterHeight; // 0x1e4
    CParticleCollectionFloatInput m_flDesiredHeight; // 0x1e8
    CParticleCollectionVecInput m_vecHitBoxScale; // 0x358
    CParticleCollectionVecInput m_vecDirectionBias; // 0xa10
    ParticleHitboxBiasType_t m_nBiasType; // 0x10c8
    bool m_bLocalCoords; // 0x10cc
    bool m_bPreferMovingBoxes; // 0x10cd
    char m_HitboxSetName[128]; // 0x10ce
    CParticleCollectionFloatInput m_flHitboxVelocityScale; // 0x1150
    CParticleCollectionFloatInput m_flMaxBoneVelocity; // 0x12c0
}; // size: 0x1430

/// C_INIT_SetHitboxToClosest
class __declspec(align(8)) C_INIT_SetHitboxToClosest0 {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber; // 0x1d8
    int32_t m_nDesiredHitbox; // 0x1dc
    CParticleCollectionVecInput m_vecHitBoxScale; // 0x1e0
    char m_HitboxSetName[128]; // 0x898
    bool m_bUseBones; // 0x918
    bool m_bUseClosestPointOnHitbox; // 0x919
    ClosestPointTestType_t m_nTestType; // 0x91c
    CParticleCollectionFloatInput m_flHybridRatio; // 0x920
    bool m_bUpdatePosition; // 0xa90
    char pad_01[7];
}; // size: 0xa98

/// C_INIT_SetHitboxToModel
class __declspec(align(8)) C_INIT_SetHitboxToModel0 {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber; // 0x1d8
    int32_t m_nForceInModel; // 0x1dc
    bool m_bEvenDistribution; // 0x1e0
    int32_t m_nDesiredHitbox; // 0x1e4
    CParticleCollectionVecInput m_vecHitBoxScale; // 0x1e8
    Vector m_vecDirectionBias; // 0x8a0
    bool m_bMaintainHitbox; // 0x8ac
    bool m_bUseBones; // 0x8ad
    char m_HitboxSetName[128]; // 0x8ae
    CParticleCollectionFloatInput m_flShellSize; // 0x930
}; // size: 0xaa0

/// C_INIT_CreateWithinSphereTransform
class __declspec(align(8)) C_INIT_CreateWithinSphereTransform0 {
public:
    char pad_00[472];
    CPerParticleFloatInput m_fRadiusMin; // 0x1d8
    CPerParticleFloatInput m_fRadiusMax; // 0x348
    CPerParticleVecInput m_vecDistanceBias; // 0x4b8
    Vector m_vecDistanceBiasAbs; // 0xb70
    CParticleTransformInput m_TransformInput; // 0xb80
    CPerParticleFloatInput m_fSpeedMin; // 0xbe8
    CPerParticleFloatInput m_fSpeedMax; // 0xd58
    float m_fSpeedRandExp; // 0xec8
    bool m_bLocalCoords; // 0xecc
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0xed0
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0x1588
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1c40
    ParticleAttributeIndex_t m_nFieldVelocity; // 0x1c44
}; // size: 0x1c48

/// C_INIT_CreateWithinCapsuleTransform
class __declspec(align(8)) C_INIT_CreateWithinCapsuleTransform0 {
public:
    char pad_00[472];
    CPerParticleFloatInput m_fRadiusMin; // 0x1d8
    CPerParticleFloatInput m_fRadiusMax; // 0x348
    CPerParticleFloatInput m_fHeight; // 0x4b8
    CParticleTransformInput m_TransformInput; // 0x628
    CPerParticleFloatInput m_fSpeedMin; // 0x690
    CPerParticleFloatInput m_fSpeedMax; // 0x800
    float m_fSpeedRandExp; // 0x970
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0x978
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0x1030
    ParticleAttributeIndex_t m_nFieldOutput; // 0x16e8
    ParticleAttributeIndex_t m_nFieldVelocity; // 0x16ec
}; // size: 0x16f0

/// C_INIT_CreateWithinBox
class __declspec(align(8)) C_INIT_CreateWithinBox0 {
public:
    char pad_00[472];
    CPerParticleVecInput m_vecMin; // 0x1d8
    CPerParticleVecInput m_vecMax; // 0x890
    int32_t m_nControlPointNumber; // 0xf48
    bool m_bLocalSpace; // 0xf4c
    CRandomNumberGeneratorParameters m_randomnessParameters; // 0xf50
    bool m_bUseNewCode; // 0xf58
    char pad_01[7];
}; // size: 0xf60

/// C_INIT_CreateOnGrid
class __declspec(align(8)) C_INIT_CreateOnGrid0 {
public:
    char pad_00[472];
    CParticleCollectionFloatInput m_nXCount; // 0x1d8
    CParticleCollectionFloatInput m_nYCount; // 0x348
    CParticleCollectionFloatInput m_nZCount; // 0x4b8
    CParticleCollectionFloatInput m_nXSpacing; // 0x628
    CParticleCollectionFloatInput m_nYSpacing; // 0x798
    CParticleCollectionFloatInput m_nZSpacing; // 0x908
    int32_t m_nControlPointNumber; // 0xa78
    bool m_bLocalSpace; // 0xa7c
    bool m_bCenter; // 0xa7d
    bool m_bHollow; // 0xa7e
    char pad_01[1];
}; // size: 0xa80

/// C_INIT_PositionOffset
class __declspec(align(8)) C_INIT_PositionOffset0 {
public:
    char pad_00[472];
    CPerParticleVecInput m_OffsetMin; // 0x1d8
    CPerParticleVecInput m_OffsetMax; // 0x890
    CParticleTransformInput m_TransformInput; // 0xf48
    bool m_bLocalCoords; // 0xfb0
    bool m_bProportional; // 0xfb1
    CRandomNumberGeneratorParameters m_randomnessParameters; // 0xfb4
    char pad_01[4];
}; // size: 0xfc0

/// C_INIT_PositionOffsetToCP
class __declspec(align(8)) C_INIT_PositionOffsetToCP0 {
public:
    char pad_00[472];
    int32_t m_nControlPointNumberStart; // 0x1d8
    int32_t m_nControlPointNumberEnd; // 0x1dc
    bool m_bLocalCoords; // 0x1e0
    char pad_01[7];
}; // size: 0x1e8

/// C_INIT_PositionPlaceOnGround
class __declspec(align(8)) C_INIT_PositionPlaceOnGround0 {
public:
    char pad_00[472];
    CPerParticleFloatInput m_flOffset; // 0x1d8
    CPerParticleFloatInput m_flMaxTraceLength; // 0x348
    char m_CollisionGroupName[128]; // 0x4b8
    ParticleTraceSet_t m_nTraceSet; // 0x538
    char pad_01[12];
    ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x548
    bool m_bIncludeWater; // 0x54c
    bool m_bSetNormal; // 0x54d
    ParticleAttributeIndex_t m_nAttribute; // 0x550
    bool m_bSetPXYZOnly; // 0x554
    bool m_bTraceAlongNormal; // 0x555
    ParticleAttributeIndex_t m_nTraceDirectionAttribute; // 0x558
    bool m_bOffsetonColOnly; // 0x55c
    float m_flOffsetByRadiusFactor; // 0x560
    int32_t m_nPreserveOffsetCP; // 0x564
    int32_t m_nIgnoreCP; // 0x568
    char pad_02[4];
}; // size: 0x570

/// C_INIT_VelocityFromNormal
class __declspec(align(8)) C_INIT_VelocityFromNormal0 {
public:
    char pad_00[472];
    float m_fSpeedMin; // 0x1d8
    float m_fSpeedMax; // 0x1dc
    bool m_bIgnoreDt; // 0x1e0
    char pad_01[7];
}; // size: 0x1e8

/// C_INIT_VelocityRandom
class __declspec(align(8)) C_INIT_VelocityRandom0 {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber; // 0x1d8
    CPerParticleFloatInput m_fSpeedMin; // 0x1e0
    CPerParticleFloatInput m_fSpeedMax; // 0x350
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0x4c0
    CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0xb78
    bool m_bIgnoreDT; // 0x1230
    CRandomNumberGeneratorParameters m_randomnessParameters; // 0x1234
    char pad_01[4];
}; // size: 0x1240

/// C_INIT_InitialVelocityNoise
class __declspec(align(8)) C_INIT_InitialVelocityNoise0 {
public:
    char pad_00[472];
    Vector m_vecAbsVal; // 0x1d8
    Vector m_vecAbsValInv; // 0x1e4
    CPerParticleVecInput m_vecOffsetLoc; // 0x1f0
    CPerParticleFloatInput m_flOffset; // 0x8a8
    CPerParticleVecInput m_vecOutputMin; // 0xa18
    CPerParticleVecInput m_vecOutputMax; // 0x10d0
    CPerParticleFloatInput m_flNoiseScale; // 0x1788
    CPerParticleFloatInput m_flNoiseScaleLoc; // 0x18f8
    CParticleTransformInput m_TransformInput; // 0x1a68
    bool m_bIgnoreDt; // 0x1ad0
    char pad_01[7];
}; // size: 0x1ad8

/// C_INIT_InitialVelocityFromHitbox
class __declspec(align(8)) C_INIT_InitialVelocityFromHitbox0 {
public:
    char pad_00[472];
    float m_flVelocityMin; // 0x1d8
    float m_flVelocityMax; // 0x1dc
    int32_t m_nControlPointNumber; // 0x1e0
    char m_HitboxSetName[128]; // 0x1e4
    bool m_bUseBones; // 0x264
    char pad_01[3];
}; // size: 0x268

/// C_INIT_VelocityRadialRandom
class __declspec(align(8)) C_INIT_VelocityRadialRandom0 {
public:
    char pad_00[472];
    bool m_bPerParticleCenter; // 0x1d8
    int32_t m_nControlPointNumber; // 0x1dc
    CPerParticleVecInput m_vecPosition; // 0x1e0
    CPerParticleVecInput m_vecFwd; // 0x898
    CPerParticleFloatInput m_fSpeedMin; // 0xf50
    CPerParticleFloatInput m_fSpeedMax; // 0x10c0
    Vector m_vecLocalCoordinateSystemSpeedScale; // 0x1230
    char pad_01[1];
    bool m_bIgnoreDelta; // 0x123d
    char pad_02[2];
}; // size: 0x1240

/// C_INIT_RandomLifeTime
class __declspec(align(8)) C_INIT_RandomLifeTime0 {
public:
    char pad_00[472];
    float m_fLifetimeMin; // 0x1d8
    float m_fLifetimeMax; // 0x1dc
    float m_fLifetimeRandExponent; // 0x1e0
    char pad_01[4];
}; // size: 0x1e8

/// C_INIT_RandomScalar
class __declspec(align(8)) C_INIT_RandomScalar0 {
public:
    char pad_00[472];
    float m_flMin; // 0x1d8
    float m_flMax; // 0x1dc
    float m_flExponent; // 0x1e0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1e4
}; // size: 0x1e8

/// C_INIT_RandomVector
class __declspec(align(8)) C_INIT_RandomVector0 {
public:
    char pad_00[472];
    Vector m_vecMin; // 0x1d8
    Vector m_vecMax; // 0x1e4
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
    CRandomNumberGeneratorParameters m_randomnessParameters; // 0x1f4
    char pad_01[4];
}; // size: 0x200

/// C_INIT_RandomVectorComponent
class __declspec(align(8)) C_INIT_RandomVectorComponent0 {
public:
    char pad_00[472];
    float m_flMin; // 0x1d8
    float m_flMax; // 0x1dc
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1e0
    int32_t m_nComponent; // 0x1e4
}; // size: 0x1e8

/// C_INIT_AddVectorToVector
class __declspec(align(8)) C_INIT_AddVectorToVector0 {
public:
    char pad_00[472];
    Vector m_vecScale; // 0x1d8
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1e4
    ParticleAttributeIndex_t m_nFieldInput; // 0x1e8
    Vector m_vOffsetMin; // 0x1ec
    Vector m_vOffsetMax; // 0x1f8
    CRandomNumberGeneratorParameters m_randomnessParameters; // 0x204
    char pad_01[4];
}; // size: 0x210

/// C_INIT_RandomAlphaWindowThreshold
class __declspec(align(8)) C_INIT_RandomAlphaWindowThreshold0 {
public:
    char pad_00[472];
    float m_flMin; // 0x1d8
    float m_flMax; // 0x1dc
    float m_flExponent; // 0x1e0
    char pad_01[4];
}; // size: 0x1e8

/// C_INIT_RandomRadius
class __declspec(align(8)) C_INIT_RandomRadius0 {
public:
    char pad_00[472];
    float m_flRadiusMin; // 0x1d8
    float m_flRadiusMax; // 0x1dc
    float m_flRadiusRandExponent; // 0x1e0
    char pad_01[4];
}; // size: 0x1e8

/// C_INIT_RandomAlpha
class __declspec(align(8)) C_INIT_RandomAlpha0 {
public:
    char pad_00[472];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8
    int32_t m_nAlphaMin; // 0x1dc
    int32_t m_nAlphaMax; // 0x1e0
    char pad_01[8];
    float m_flAlphaRandExponent; // 0x1ec
}; // size: 0x1f0

/// CGeneralRandomRotation
class __declspec(align(4)) CGeneralRandomRotation0 {
public:
    char pad_00[472];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8
    float m_flDegrees; // 0x1dc
    float m_flDegreesMin; // 0x1e0
    float m_flDegreesMax; // 0x1e4
    float m_flRotationRandExponent; // 0x1e8
    bool m_bRandomlyFlipDirection; // 0x1ec
    char pad_01[11];
}; // size: 0x1f8

/// C_INIT_RandomRotation
class __declspec(align(8)) C_INIT_RandomRotation0 {
public:
    char pad_00[504];
}; // size: 0x1f8

/// C_INIT_Orient2DRelToCP
class __declspec(align(8)) C_INIT_Orient2DRelToCP0 {
public:
    char pad_00[472];
    int32_t m_nCP; // 0x1d8
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1dc
    float m_flRotOffset; // 0x1e0
    char pad_01[4];
}; // size: 0x1e8

/// C_INIT_RandomRotationSpeed
class __declspec(align(8)) C_INIT_RandomRotationSpeed0 {
public:
    char pad_00[504];
}; // size: 0x1f8

/// C_INIT_RandomYaw
class __declspec(align(8)) C_INIT_RandomYaw0 {
public:
    char pad_00[504];
}; // size: 0x1f8

/// C_INIT_RandomColor
class __declspec(align(8)) C_INIT_RandomColor0 {
public:
    // Color m_ColorMin;
    // Color m_ColorMax;
    // Color m_TintMin;
    // Color m_TintMax;
    char pad_00[516];
    float m_flTintPerc; // 0x204
    float m_flUpdateThreshold; // 0x208
    int32_t m_nTintCP; // 0x20c
    ParticleAttributeIndex_t m_nFieldOutput; // 0x210
    ParticleColorBlendMode_t m_nTintBlendMode; // 0x214
    float m_flLightAmplification; // 0x218
    char pad_01[4];
}; // size: 0x220

/// C_INIT_ColorLitPerParticle
class __declspec(align(8)) C_INIT_ColorLitPerParticle0 {
public:
    // Color m_ColorMin;
    // Color m_ColorMax;
    // Color m_TintMin;
    // Color m_TintMax;
    char pad_00[512];
    float m_flTintPerc; // 0x200
    ParticleColorBlendMode_t m_nTintBlendMode; // 0x204
    float m_flLightAmplification; // 0x208
    char pad_01[4];
}; // size: 0x210

/// C_INIT_RandomTrailLength
class __declspec(align(8)) C_INIT_RandomTrailLength0 {
public:
    char pad_00[472];
    float m_flMinLength; // 0x1d8
    float m_flMaxLength; // 0x1dc
    float m_flLengthRandExponent; // 0x1e0
    char pad_01[4];
}; // size: 0x1e8

/// C_INIT_RandomSequence
class __declspec(align(8)) C_INIT_RandomSequence0 {
public:
    char pad_00[472];
    int32_t m_nSequenceMin; // 0x1d8
    int32_t m_nSequenceMax; // 0x1dc
    bool m_bShuffle; // 0x1e0
    bool m_bLinear; // 0x1e1
    // CUtlVector< SequenceWeightedList_t > m_WeightedList;
    char pad_01[38];
}; // size: 0x208

/// C_INIT_SequenceFromCP
class __declspec(align(8)) C_INIT_SequenceFromCP0 {
public:
    char pad_00[472];
    bool m_bKillUnused; // 0x1d8
    bool m_bRadiusScale; // 0x1d9
    int32_t m_nCP; // 0x1dc
    Vector m_vecOffset; // 0x1e0
    char pad_01[4];
}; // size: 0x1f0

/// C_INIT_RandomModelSequence
class __declspec(align(8)) C_INIT_RandomModelSequence0 {
public:
    char pad_00[472];
    char m_ActivityName[256]; // 0x1d8
    char m_SequenceName[256]; // 0x2d8
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    char pad_01[8];
}; // size: 0x3e0

/// C_INIT_ScaleVelocity
class __declspec(align(8)) C_INIT_ScaleVelocity0 {
public:
    char pad_00[472];
    CParticleCollectionVecInput m_vecScale; // 0x1d8
}; // size: 0x890

/// C_INIT_PositionWarp
class __declspec(align(8)) C_INIT_PositionWarp0 {
public:
    char pad_00[472];
    CParticleCollectionVecInput m_vecWarpMin; // 0x1d8
    CParticleCollectionVecInput m_vecWarpMax; // 0x890
    int32_t m_nScaleControlPointNumber; // 0xf48
    int32_t m_nControlPointNumber; // 0xf4c
    int32_t m_nRadiusComponent; // 0xf50
    float m_flWarpTime; // 0xf54
    float m_flWarpStartTime; // 0xf58
    float m_flPrevPosScale; // 0xf5c
    bool m_bInvertWarp; // 0xf60
    bool m_bUseCount; // 0xf61
    char pad_01[6];
}; // size: 0xf68

/// C_INIT_PositionWarpScalar
class __declspec(align(8)) C_INIT_PositionWarpScalar0 {
public:
    char pad_00[472];
    Vector m_vecWarpMin; // 0x1d8
    Vector m_vecWarpMax; // 0x1e4
    CPerParticleFloatInput m_InputValue; // 0x1f0
    float m_flPrevPosScale; // 0x360
    int32_t m_nScaleControlPointNumber; // 0x364
    int32_t m_nControlPointNumber; // 0x368
    char pad_01[4];
}; // size: 0x370

/// C_INIT_CreationNoise
class __declspec(align(8)) C_INIT_CreationNoise0 {
public:
    char pad_00[472];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8
    bool m_bAbsVal; // 0x1dc
    bool m_bAbsValInv; // 0x1dd
    float m_flOffset; // 0x1e0
    float m_flOutputMin; // 0x1e4
    float m_flOutputMax; // 0x1e8
    float m_flNoiseScale; // 0x1ec
    float m_flNoiseScaleLoc; // 0x1f0
    Vector m_vecOffsetLoc; // 0x1f4
    float m_flWorldTimeScale; // 0x200
    char pad_01[4];
}; // size: 0x208

/// C_INIT_CheckParticleForWater
class __declspec(align(8)) C_INIT_CheckParticleForWater0 {
public:
    char pad_00[472];
    CPerParticleFloatInput m_flRadius; // 0x1d8
    ParticleAttributeIndex_t m_nFieldOutput; // 0x348
    CParticleRemapFloatInput m_flOutputRemap; // 0x350
    ParticleSetMethod_t m_nSetMethod; // 0x4c0
    char pad_01[4];
}; // size: 0x4c8

/// C_INIT_CreateAlongPath
class __declspec(align(16)) C_INIT_CreateAlongPath0 {
public:
    char pad_00[472];
    float m_fMaxDistance; // 0x1d8
    CPathParameters m_PathParams; // 0x1e0
    bool m_bUseRandomCPs; // 0x220
    Vector m_vEndOffset; // 0x224
    bool m_bSaveOffset; // 0x230
    char pad_01[15];
}; // size: 0x240

/// C_INIT_MoveBetweenPoints
class __declspec(align(8)) C_INIT_MoveBetweenPoints0 {
public:
    char pad_00[472];
    CPerParticleFloatInput m_flSpeedMin; // 0x1d8
    CPerParticleFloatInput m_flSpeedMax; // 0x348
    CPerParticleFloatInput m_flEndSpread; // 0x4b8
    CPerParticleFloatInput m_flStartOffset; // 0x628
    CPerParticleFloatInput m_flEndOffset; // 0x798
    int32_t m_nEndControlPointNumber; // 0x908
    bool m_bTrailBias; // 0x90c
    char pad_01[3];
}; // size: 0x910

/// C_INIT_RemapParticleCountToScalar
class __declspec(align(8)) C_INIT_RemapParticleCountToScalar0 {
public:
    char pad_00[472];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8
    int32_t m_nInputMin; // 0x1dc
    int32_t m_nInputMax; // 0x1e0
    int32_t m_nScaleControlPoint; // 0x1e4
    int32_t m_nScaleControlPointField; // 0x1e8
    float m_flOutputMin; // 0x1ec
    float m_flOutputMax; // 0x1f0
    ParticleSetMethod_t m_nSetMethod; // 0x1f4
    bool m_bActiveRange; // 0x1f8
    bool m_bInvert; // 0x1f9
    bool m_bWrap; // 0x1fa
    float m_flRemapBias; // 0x1fc
    char pad_01[8];
}; // size: 0x208

/// C_INIT_RemapParticleCountToNamedModelElementScalar
class __declspec(align(8)) C_INIT_RemapParticleCountToNamedModelElementScalar0 {
public:
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    // CUtlString m_outputMinName;
    // CUtlString m_outputMaxName;
    char pad_00[544];
    bool m_bModelFromRenderer; // 0x220
    char pad_01[7];
}; // size: 0x228

/// C_INIT_RemapParticleCountToNamedModelSequenceScalar
class __declspec(align(8)) C_INIT_RemapParticleCountToNamedModelSequenceScalar0 {
public:
    char pad_00[552];
}; // size: 0x228

/// C_INIT_RemapParticleCountToNamedModelBodyPartScalar
class __declspec(align(8)) C_INIT_RemapParticleCountToNamedModelBodyPartScalar0 {
public:
    char pad_00[552];
}; // size: 0x228

/// C_INIT_RemapParticleCountToNamedModelMeshGroupScalar
class __declspec(align(8)) C_INIT_RemapParticleCountToNamedModelMeshGroupScalar0 {
public:
    char pad_00[552];
}; // size: 0x228

/// C_INIT_InheritVelocity
class __declspec(align(8)) C_INIT_InheritVelocity0 {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber; // 0x1d8
    float m_flVelocityScale; // 0x1dc
}; // size: 0x1e0

/// C_INIT_VelocityFromCP
class __declspec(align(8)) C_INIT_VelocityFromCP0 {
public:
    char pad_00[472];
    CParticleCollectionVecInput m_velocityInput; // 0x1d8
    CParticleTransformInput m_transformInput; // 0x890
    float m_flVelocityScale; // 0x8f8
    bool m_bDirectionOnly; // 0x8fc
    char pad_01[3];
}; // size: 0x900

/// C_INIT_AgeNoise
class __declspec(align(8)) C_INIT_AgeNoise0 {
public:
    char pad_00[472];
    bool m_bAbsVal; // 0x1d8
    bool m_bAbsValInv; // 0x1d9
    float m_flOffset; // 0x1dc
    float m_flAgeMin; // 0x1e0
    float m_flAgeMax; // 0x1e4
    float m_flNoiseScale; // 0x1e8
    float m_flNoiseScaleLoc; // 0x1ec
    Vector m_vecOffsetLoc; // 0x1f0
    char pad_01[4];
}; // size: 0x200

/// C_INIT_SequenceLifeTime
class __declspec(align(8)) C_INIT_SequenceLifeTime0 {
public:
    char pad_00[472];
    float m_flFramerate; // 0x1d8
    char pad_01[4];
}; // size: 0x1e0

/// C_INIT_RemapScalarToVector
class __declspec(align(8)) C_INIT_RemapScalarToVector0 {
public:
    char pad_00[472];
    ParticleAttributeIndex_t m_nFieldInput; // 0x1d8
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1dc
    float m_flInputMin; // 0x1e0
    float m_flInputMax; // 0x1e4
    Vector m_vecOutputMin; // 0x1e8
    Vector m_vecOutputMax; // 0x1f4
    float m_flStartTime; // 0x200
    float m_flEndTime; // 0x204
    ParticleSetMethod_t m_nSetMethod; // 0x208
    int32_t m_nControlPointNumber; // 0x20c
    bool m_bLocalCoords; // 0x210
    float m_flRemapBias; // 0x214
    char pad_01[8];
}; // size: 0x220

/// C_INIT_OffsetVectorToVector
class __declspec(align(8)) C_INIT_OffsetVectorToVector0 {
public:
    char pad_00[472];
    ParticleAttributeIndex_t m_nFieldInput; // 0x1d8
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1dc
    Vector m_vecOutputMin; // 0x1e0
    Vector m_vecOutputMax; // 0x1ec
    CRandomNumberGeneratorParameters m_randomnessParameters; // 0x1f8
}; // size: 0x200

/// C_INIT_CreateSequentialPathV2
class __declspec(align(16)) C_INIT_CreateSequentialPathV20 {
public:
    char pad_00[472];
    CPerParticleFloatInput m_fMaxDistance; // 0x1d8
    CParticleCollectionFloatInput m_flNumToAssign; // 0x348
    bool m_bLoop; // 0x4b8
    bool m_bCPPairs; // 0x4b9
    bool m_bSaveOffset; // 0x4ba
    CPathParameters m_PathParams; // 0x4c0
    char pad_01[16];
}; // size: 0x510

/// C_INIT_CreateSequentialPath
class __declspec(align(16)) C_INIT_CreateSequentialPath0 {
public:
    char pad_00[472];
    float m_fMaxDistance; // 0x1d8
    float m_flNumToAssign; // 0x1dc
    bool m_bLoop; // 0x1e0
    bool m_bCPPairs; // 0x1e1
    bool m_bSaveOffset; // 0x1e2
    CPathParameters m_PathParams; // 0x1f0
}; // size: 0x230

/// C_INIT_InitialRepulsionVelocity
class __declspec(align(8)) C_INIT_InitialRepulsionVelocity0 {
public:
    char pad_00[472];
    char m_CollisionGroupName[128]; // 0x1d8
    ParticleTraceSet_t m_nTraceSet; // 0x258
    Vector m_vecOutputMin; // 0x25c
    Vector m_vecOutputMax; // 0x268
    int32_t m_nControlPointNumber; // 0x274
    bool m_bPerParticle; // 0x278
    bool m_bTranslate; // 0x279
    bool m_bProportional; // 0x27a
    float m_flTraceLength; // 0x27c
    bool m_bPerParticleTR; // 0x280
    bool m_bInherit; // 0x281
    int32_t m_nChildCP; // 0x284
    int32_t m_nChildGroupID; // 0x288
    char pad_01[4];
}; // size: 0x290

/// C_INIT_RandomYawFlip
class __declspec(align(8)) C_INIT_RandomYawFlip0 {
public:
    char pad_00[472];
    float m_flPercent; // 0x1d8
    char pad_01[4];
}; // size: 0x1e0

/// C_INIT_RandomSecondSequence
class __declspec(align(8)) C_INIT_RandomSecondSequence0 {
public:
    char pad_00[472];
    int32_t m_nSequenceMin; // 0x1d8
    int32_t m_nSequenceMax; // 0x1dc
}; // size: 0x1e0

/// C_INIT_RemapTransformToVector
class __declspec(align(8)) C_INIT_RemapTransformToVector0 {
public:
    char pad_00[472];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8
    Vector m_vInputMin; // 0x1dc
    Vector m_vInputMax; // 0x1e8
    Vector m_vOutputMin; // 0x1f4
    Vector m_vOutputMax; // 0x200
    CParticleTransformInput m_TransformInput; // 0x210
    CParticleTransformInput m_LocalSpaceTransform; // 0x278
    float m_flStartTime; // 0x2e0
    float m_flEndTime; // 0x2e4
    ParticleSetMethod_t m_nSetMethod; // 0x2e8
    bool m_bOffset; // 0x2ec
    bool m_bAccelerate; // 0x2ed
    float m_flRemapBias; // 0x2f0
    char pad_01[4];
}; // size: 0x2f8

/// C_INIT_ChaoticAttractor
class __declspec(align(8)) C_INIT_ChaoticAttractor0 {
public:
    char pad_00[472];
    float m_flAParm; // 0x1d8
    float m_flBParm; // 0x1dc
    float m_flCParm; // 0x1e0
    float m_flDParm; // 0x1e4
    float m_flScale; // 0x1e8
    float m_flSpeedMin; // 0x1ec
    float m_flSpeedMax; // 0x1f0
    int32_t m_nBaseCP; // 0x1f4
    bool m_bUniformSpeed; // 0x1f8
    char pad_01[7];
}; // size: 0x200

/// C_INIT_CreateFromParentParticles
class __declspec(align(8)) C_INIT_CreateFromParentParticles0 {
public:
    char pad_00[472];
    float m_flVelocityScale; // 0x1d8
    float m_flIncrement; // 0x1dc
    bool m_bRandomDistribution; // 0x1e0
    int32_t m_nRandomSeed; // 0x1e4
    bool m_bSubFrame; // 0x1e8
    bool m_bSetRopeSegmentID; // 0x1e9
    char pad_01[6];
}; // size: 0x1f0

/// C_INIT_InheritFromParentParticles
class __declspec(align(8)) C_INIT_InheritFromParentParticles0 {
public:
    char pad_00[472];
    float m_flScale; // 0x1d8
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1dc
    int32_t m_nIncrement; // 0x1e0
    bool m_bRandomDistribution; // 0x1e4
    int32_t m_nRandomSeed; // 0x1e8
    char pad_01[4];
}; // size: 0x1f0

/// C_INIT_CreateFromCPs
class __declspec(align(8)) C_INIT_CreateFromCPs0 {
public:
    char pad_00[472];
    int32_t m_nIncrement; // 0x1d8
    int32_t m_nMinCP; // 0x1dc
    int32_t m_nMaxCP; // 0x1e0
    CParticleCollectionFloatInput m_nDynamicCPCount; // 0x1e8
}; // size: 0x358

/// C_INIT_DistanceToCPInit
class __declspec(align(8)) C_INIT_DistanceToCPInit0 {
public:
    char pad_00[472];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8
    CPerParticleFloatInput m_flInputMin; // 0x1e0
    CPerParticleFloatInput m_flInputMax; // 0x350
    CPerParticleFloatInput m_flOutputMin; // 0x4c0
    CPerParticleFloatInput m_flOutputMax; // 0x630
    int32_t m_nStartCP; // 0x7a0
    bool m_bLOS; // 0x7a4
    char m_CollisionGroupName[128]; // 0x7a5
    ParticleTraceSet_t m_nTraceSet; // 0x828
    CPerParticleFloatInput m_flMaxTraceLength; // 0x830
    float m_flLOSScale; // 0x9a0
    ParticleSetMethod_t m_nSetMethod; // 0x9a4
    bool m_bActiveRange; // 0x9a8
    Vector m_vecDistanceScale; // 0x9ac
    float m_flRemapBias; // 0x9b8
    char pad_01[4];
}; // size: 0x9c0

/// C_INIT_LifespanFromVelocity
class __declspec(align(8)) C_INIT_LifespanFromVelocity0 {
public:
    char pad_00[472];
    Vector m_vecComponentScale; // 0x1d8
    float m_flTraceOffset; // 0x1e4
    float m_flMaxTraceLength; // 0x1e8
    float m_flTraceTolerance; // 0x1ec
    int32_t m_nMaxPlanes; // 0x1f0
    char pad_01[4];
    char m_CollisionGroupName[128]; // 0x1f8
    ParticleTraceSet_t m_nTraceSet; // 0x278
    char pad_02[12];
    bool m_bIncludeWater; // 0x288
    char pad_03[7];
}; // size: 0x290

/// C_INIT_CreateFromPlaneCache
class __declspec(align(8)) C_INIT_CreateFromPlaneCache0 {
public:
    char pad_00[472];
    Vector m_vecOffsetMin; // 0x1d8
    Vector m_vecOffsetMax; // 0x1e4
    char pad_01[1];
    bool m_bUseNormal; // 0x1f1
    char pad_02[6];
}; // size: 0x1f8

/// C_INIT_ModelCull
class __declspec(align(8)) C_INIT_ModelCull0 {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber; // 0x1d8
    bool m_bBoundBox; // 0x1dc
    bool m_bCullOutside; // 0x1dd
    bool m_bUseBones; // 0x1de
    char m_HitboxSetName[128]; // 0x1df
    char pad_01[1];
}; // size: 0x260

/// C_INIT_DistanceCull
class __declspec(align(8)) C_INIT_DistanceCull0 {
public:
    char pad_00[472];
    int32_t m_nControlPoint; // 0x1d8
    CParticleCollectionFloatInput m_flDistance; // 0x1e0
    bool m_bCullInside; // 0x350
    char pad_01[7];
}; // size: 0x358

/// C_INIT_PlaneCull
class __declspec(align(8)) C_INIT_PlaneCull0 {
public:
    char pad_00[472];
    int32_t m_nControlPoint; // 0x1d8
    CParticleCollectionFloatInput m_flDistance; // 0x1e0
    bool m_bCullInside; // 0x350
    char pad_01[7];
}; // size: 0x358

/// C_INIT_DistanceToNeighborCull
class __declspec(align(8)) C_INIT_DistanceToNeighborCull0 {
public:
    char pad_00[472];
    CPerParticleFloatInput m_flDistance; // 0x1d8
    bool m_bIncludeRadii; // 0x348
    CPerParticleFloatInput m_flLifespanOverlap; // 0x350
    ParticleAttributeIndex_t m_nFieldModify; // 0x4c0
    CPerParticleFloatInput m_flModify; // 0x4c8
    ParticleSetMethod_t m_nSetMethod; // 0x638
    bool m_bUseNeighbor; // 0x63c
    char pad_01[3];
}; // size: 0x640

/// C_INIT_RtEnvCull
class __declspec(align(8)) C_INIT_RtEnvCull0 {
public:
    char pad_00[472];
    Vector m_vecTestDir; // 0x1d8
    Vector m_vecTestNormal; // 0x1e4
    bool m_bUseVelocity; // 0x1f0
    bool m_bCullOnMiss; // 0x1f1
    bool m_bLifeAdjust; // 0x1f2
    char m_RtEnvName[128]; // 0x1f3
    int32_t m_nRTEnvCP; // 0x274
    int32_t m_nComponent; // 0x278
    char pad_01[4];
}; // size: 0x280

/// C_INIT_NormalAlignToCP
class __declspec(align(8)) C_INIT_NormalAlignToCP0 {
public:
    char pad_00[472];
    CParticleTransformInput m_transformInput; // 0x1d8
    ParticleControlPointAxis_t m_nControlPointAxis; // 0x240
    char pad_01[4];
}; // size: 0x248

/// C_INIT_NormalOffset
class __declspec(align(8)) C_INIT_NormalOffset0 {
public:
    char pad_00[472];
    Vector m_OffsetMin; // 0x1d8
    Vector m_OffsetMax; // 0x1e4
    int32_t m_nControlPointNumber; // 0x1f0
    bool m_bLocalCoords; // 0x1f4
    bool m_bNormalize; // 0x1f5
    char pad_01[2];
}; // size: 0x1f8

/// C_INIT_InitFromCPSnapshot
class __declspec(align(8)) C_INIT_InitFromCPSnapshot0 {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber; // 0x1d8
    // CUtlString m_strSnapshotSubset;
    char pad_01[12];
    ParticleAttributeIndex_t m_nAttributeToRead; // 0x1e8
    ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1ec
    int32_t m_nLocalSpaceCP; // 0x1f0
    bool m_bRandom; // 0x1f4
    bool m_bReverse; // 0x1f5
    CParticleCollectionFloatInput m_nSnapShotIncrement; // 0x1f8
    CPerParticleFloatInput m_nManualSnapshotIndex; // 0x368
    int32_t m_nRandomSeed; // 0x4d8
    bool m_bLocalSpaceAngles; // 0x4dc
    char pad_02[3];
}; // size: 0x4e0

/// C_INIT_InitSkinnedPositionFromCPSnapshot
class __declspec(align(8)) C_INIT_InitSkinnedPositionFromCPSnapshot0 {
public:
    char pad_00[472];
    int32_t m_nSnapshotControlPointNumber; // 0x1d8
    int32_t m_nControlPointNumber; // 0x1dc
    bool m_bRandom; // 0x1e0
    int32_t m_nRandomSeed; // 0x1e4
    bool m_bRigid; // 0x1e8
    bool m_bSetNormal; // 0x1e9
    bool m_bIgnoreDt; // 0x1ea
    float m_flMinNormalVelocity; // 0x1ec
    float m_flMaxNormalVelocity; // 0x1f0
    SnapshotIndexType_t m_nIndexType; // 0x1f4
    CPerParticleFloatInput m_flReadIndex; // 0x1f8
    float m_flIncrement; // 0x368
    int32_t m_nFullLoopIncrement; // 0x36c
    int32_t m_nSnapShotStartPoint; // 0x370
    float m_flBoneVelocity; // 0x374
    float m_flBoneVelocityMax; // 0x378
    bool m_bCopyColor; // 0x37c
    bool m_bCopyAlpha; // 0x37d
    bool m_bSetRadius; // 0x37e
    char pad_01[1];
}; // size: 0x380

/// C_INIT_InitFromParentKilled
class __declspec(align(8)) C_INIT_InitFromParentKilled0 {
public:
    char pad_00[472];
    ParticleAttributeIndex_t m_nAttributeToCopy; // 0x1d8
    EventTypeSelection_t m_nEventType; // 0x1dc
    char pad_01[128];
}; // size: 0x260

/// C_INIT_InitFromVectorFieldSnapshot
class __declspec(align(8)) C_INIT_InitFromVectorFieldSnapshot0 {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber; // 0x1d8
    int32_t m_nLocalSpaceCP; // 0x1dc
    int32_t m_nWeightUpdateCP; // 0x1e0
    bool m_bUseVerticalVelocity; // 0x1e4
    CPerParticleVecInput m_vecScale; // 0x1e8
}; // size: 0x8a0

/// C_INIT_RemapInitialDirectionToTransformToVector
class __declspec(align(8)) C_INIT_RemapInitialDirectionToTransformToVector0 {
public:
    char pad_00[472];
    CParticleTransformInput m_TransformInput; // 0x1d8
    ParticleAttributeIndex_t m_nFieldOutput; // 0x240
    float m_flScale; // 0x244
    float m_flOffsetRot; // 0x248
    Vector m_vecOffsetAxis; // 0x24c
    bool m_bNormalize; // 0x258
    char pad_01[7];
}; // size: 0x260

/// C_INIT_RemapInitialTransformDirectionToRotation
class __declspec(align(8)) C_INIT_RemapInitialTransformDirectionToRotation0 {
public:
    char pad_00[472];
    CParticleTransformInput m_TransformInput; // 0x1d8
    ParticleAttributeIndex_t m_nFieldOutput; // 0x240
    float m_flOffsetRot; // 0x244
    int32_t m_nComponent; // 0x248
    char pad_01[4];
}; // size: 0x250

/// C_INIT_RemapQAnglesToRotation
class __declspec(align(8)) C_INIT_RemapQAnglesToRotation0 {
public:
    char pad_00[472];
    CParticleTransformInput m_TransformInput; // 0x1d8
}; // size: 0x240

/// C_INIT_RemapTransformOrientationToRotations
class __declspec(align(8)) C_INIT_RemapTransformOrientationToRotations0 {
public:
    char pad_00[472];
    CParticleTransformInput m_TransformInput; // 0x1d8
    Vector m_vecRotation; // 0x240
    bool m_bUseQuat; // 0x24c
    bool m_bWriteNormal; // 0x24d
    char pad_01[2];
}; // size: 0x250

/// C_INIT_SetRigidAttachment
class __declspec(align(8)) C_INIT_SetRigidAttachment0 {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber; // 0x1d8
    ParticleAttributeIndex_t m_nFieldInput; // 0x1dc
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1e0
    bool m_bLocalSpace; // 0x1e4
    char pad_01[3];
}; // size: 0x1e8

/// C_INIT_RemapInitialVisibilityScalar
class __declspec(align(8)) C_INIT_RemapInitialVisibilityScalar0 {
public:
    char pad_00[476];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1dc
    float m_flInputMin; // 0x1e0
    float m_flInputMax; // 0x1e4
    float m_flOutputMin; // 0x1e8
    float m_flOutputMax; // 0x1ec
}; // size: 0x1f0

/// C_INIT_RadiusFromCPObject
class __declspec(align(8)) C_INIT_RadiusFromCPObject0 {
public:
    char pad_00[472];
    int32_t m_nControlPoint; // 0x1d8
    char pad_01[4];
}; // size: 0x1e0

/// C_INIT_InitialSequenceFromModel
class __declspec(align(8)) C_INIT_InitialSequenceFromModel0 {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber; // 0x1d8
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1dc
    ParticleAttributeIndex_t m_nFieldOutputAnim; // 0x1e0
    float m_flInputMin; // 0x1e4
    float m_flInputMax; // 0x1e8
    float m_flOutputMin; // 0x1ec
    float m_flOutputMax; // 0x1f0
    ParticleSetMethod_t m_nSetMethod; // 0x1f4
}; // size: 0x1f8

/// C_INIT_GlobalScale
class __declspec(align(8)) C_INIT_GlobalScale0 {
public:
    char pad_00[472];
    float m_flScale; // 0x1d8
    int32_t m_nScaleControlPointNumber; // 0x1dc
    int32_t m_nControlPointNumber; // 0x1e0
    bool m_bScaleRadius; // 0x1e4
    bool m_bScalePosition; // 0x1e5
    bool m_bScaleVelocity; // 0x1e6
    char pad_01[1];
}; // size: 0x1e8

/// C_INIT_PointList
class __declspec(align(8)) C_INIT_PointList0 {
public:
    char pad_00[472];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8
    // CUtlVector< PointDefinition_t > m_pointList;
    char pad_01[28];
    bool m_bPlaceAlongPath; // 0x1f8
    bool m_bClosedLoop; // 0x1f9
    int32_t m_nNumPointsAlongPath; // 0x1fc
}; // size: 0x200

/// C_INIT_RandomNamedModelElement
class __declspec(align(4)) C_INIT_RandomNamedModelElement0 {
public:
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    // CUtlVector< CUtlString > m_names;
    char pad_00[504];
    bool m_bShuffle; // 0x1f8
    bool m_bLinear; // 0x1f9
    bool m_bModelFromRenderer; // 0x1fa
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1fc
}; // size: 0x200

/// C_INIT_RandomNamedModelSequence
class __declspec(align(8)) C_INIT_RandomNamedModelSequence0 {
public:
    char pad_00[512];
}; // size: 0x200

/// C_INIT_RandomNamedModelBodyPart
class __declspec(align(8)) C_INIT_RandomNamedModelBodyPart0 {
public:
    char pad_00[512];
}; // size: 0x200

/// C_INIT_RandomNamedModelMeshGroup
class __declspec(align(8)) C_INIT_RandomNamedModelMeshGroup0 {
public:
    char pad_00[512];
}; // size: 0x200

/// C_INIT_RemapNamedModelElementToScalar
class __declspec(align(4)) C_INIT_RemapNamedModelElementToScalar0 {
public:
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    // CUtlVector< CUtlString > m_names;
    // CUtlVector< float32 > m_values;
    char pad_00[528];
    ParticleAttributeIndex_t m_nFieldInput; // 0x210
    ParticleAttributeIndex_t m_nFieldOutput; // 0x214
    ParticleSetMethod_t m_nSetMethod; // 0x218
    bool m_bModelFromRenderer; // 0x21c
    char pad_01[3];
}; // size: 0x220

/// C_INIT_RemapNamedModelSequenceToScalar
class __declspec(align(8)) C_INIT_RemapNamedModelSequenceToScalar0 {
public:
    char pad_00[544];
}; // size: 0x220

/// C_INIT_RemapNamedModelBodyPartToScalar
class __declspec(align(8)) C_INIT_RemapNamedModelBodyPartToScalar0 {
public:
    char pad_00[544];
}; // size: 0x220

/// C_INIT_RemapNamedModelMeshGroupToScalar
class __declspec(align(8)) C_INIT_RemapNamedModelMeshGroupToScalar0 {
public:
    char pad_00[544];
}; // size: 0x220

/// C_INIT_StatusEffect
class __declspec(align(8)) C_INIT_StatusEffect0 {
public:
    char pad_00[472];
    Detail2Combo_t m_nDetail2Combo; // 0x1d8
    float m_flDetail2Rotation; // 0x1dc
    float m_flDetail2Scale; // 0x1e0
    float m_flDetail2BlendFactor; // 0x1e4
    float m_flColorWarpIntensity; // 0x1e8
    float m_flDiffuseWarpBlendToFull; // 0x1ec
    float m_flEnvMapIntensity; // 0x1f0
    float m_flAmbientScale; // 0x1f4
    // Color m_specularColor;
    char pad_01[4];
    float m_flSpecularScale; // 0x1fc
    float m_flSpecularExponent; // 0x200
    float m_flSpecularExponentBlendToFull; // 0x204
    float m_flSpecularBlendToFull; // 0x208
    // Color m_rimLightColor;
    char pad_02[4];
    float m_flRimLightScale; // 0x210
    float m_flReflectionsTintByBaseBlendToNone; // 0x214
    float m_flMetalnessBlendToFull; // 0x218
    float m_flSelfIllumBlendToFull; // 0x21c
    char pad_03[24];
}; // size: 0x238

/// C_INIT_StatusEffectCitadel
class __declspec(align(8)) C_INIT_StatusEffectCitadel0 {
public:
    char pad_00[472];
    float m_flSFXColorWarpAmount; // 0x1d8
    float m_flSFXNormalAmount; // 0x1dc
    float m_flSFXMetalnessAmount; // 0x1e0
    float m_flSFXRoughnessAmount; // 0x1e4
    float m_flSFXSelfIllumAmount; // 0x1e8
    float m_flSFXSScale; // 0x1ec
    float m_flSFXSScrollX; // 0x1f0
    float m_flSFXSScrollY; // 0x1f4
    float m_flSFXSScrollZ; // 0x1f8
    float m_flSFXSOffsetX; // 0x1fc
    float m_flSFXSOffsetY; // 0x200
    float m_flSFXSOffsetZ; // 0x204
    DetailCombo_t m_nDetailCombo; // 0x208
    float m_flSFXSDetailAmount; // 0x20c
    float m_flSFXSDetailScale; // 0x210
    float m_flSFXSDetailScrollX; // 0x214
    float m_flSFXSDetailScrollY; // 0x218
    float m_flSFXSDetailScrollZ; // 0x21c
    float m_flSFXSUseModelUVs; // 0x220
    char pad_01[4];
}; // size: 0x228

/// C_INIT_CreateParticleImpulse
class __declspec(align(8)) C_INIT_CreateParticleImpulse0 {
public:
    char pad_00[472];
    CPerParticleFloatInput m_InputRadius; // 0x1d8
    CPerParticleFloatInput m_InputMagnitude; // 0x348
    ParticleFalloffFunction_t m_nFalloffFunction; // 0x4b8
    CPerParticleFloatInput m_InputFalloffExp; // 0x4c0
    ParticleImpulseType_t m_nImpulseType; // 0x630
    char pad_01[4];
}; // size: 0x638

/// C_INIT_QuantizeFloat
class __declspec(align(8)) C_INIT_QuantizeFloat0 {
public:
    char pad_00[472];
    CPerParticleFloatInput m_InputValue; // 0x1d8
    ParticleAttributeIndex_t m_nOutputField; // 0x348
    char pad_01[4];
}; // size: 0x350

/// C_INIT_SetAttributeToScalarExpression
class __declspec(align(16)) C_INIT_SetAttributeToScalarExpression0 {
public:
    char pad_00[472];
    ScalarExpressionType_t m_nExpression; // 0x1d8
    CPerParticleFloatInput m_flInput1; // 0x1e0
    CPerParticleFloatInput m_flInput2; // 0x350
    CParticleRemapFloatInput m_flOutputRemap; // 0x4c0
    ParticleAttributeIndex_t m_nOutputField; // 0x630
    ParticleSetMethod_t m_nSetMethod; // 0x634
    char pad_01[40];
}; // size: 0x660

/// C_INIT_SetVectorAttributeToVectorExpression
class __declspec(align(16)) C_INIT_SetVectorAttributeToVectorExpression0 {
public:
    char pad_00[472];
    VectorExpressionType_t m_nExpression; // 0x1d8
    CPerParticleVecInput m_vInput1; // 0x1e0
    CPerParticleVecInput m_vInput2; // 0x898
    CPerParticleFloatInput m_flLerp; // 0xf50
    ParticleAttributeIndex_t m_nOutputField; // 0x10c0
    ParticleSetMethod_t m_nSetMethod; // 0x10c4
    bool m_bNormalizedOutput; // 0x10c8
    char pad_01[103];
}; // size: 0x1130

/// C_INIT_SetFloatAttributeToVectorExpression
class __declspec(align(8)) C_INIT_SetFloatAttributeToVectorExpression0 {
public:
    char pad_00[472];
    VectorFloatExpressionType_t m_nExpression; // 0x1d8
    CPerParticleVecInput m_vInput1; // 0x1e0
    CPerParticleVecInput m_vInput2; // 0x898
    CParticleRemapFloatInput m_flOutputRemap; // 0xf50
    ParticleAttributeIndex_t m_nOutputField; // 0x10c0
    ParticleSetMethod_t m_nSetMethod; // 0x10c4
}; // size: 0x10c8

/// C_INIT_InitFloatCollection
class __declspec(align(8)) C_INIT_InitFloatCollection0 {
public:
    char pad_00[472];
    CParticleCollectionFloatInput m_InputValue; // 0x1d8
    ParticleAttributeIndex_t m_nOutputField; // 0x348
    char pad_01[4];
}; // size: 0x350

/// C_INIT_InitFloat
class __declspec(align(8)) C_INIT_InitFloat0 {
public:
    char pad_00[472];
    CPerParticleFloatInput m_InputValue; // 0x1d8
    ParticleAttributeIndex_t m_nOutputField; // 0x348
    ParticleSetMethod_t m_nSetMethod; // 0x34c
    CPerParticleFloatInput m_InputStrength; // 0x350
}; // size: 0x4c0

/// C_INIT_InitVecCollection
class __declspec(align(8)) C_INIT_InitVecCollection0 {
public:
    char pad_00[472];
    CParticleCollectionVecInput m_InputValue; // 0x1d8
    ParticleAttributeIndex_t m_nOutputField; // 0x890
    char pad_01[4];
}; // size: 0x898

/// C_INIT_InitVec
class __declspec(align(8)) C_INIT_InitVec0 {
public:
    char pad_00[472];
    CPerParticleVecInput m_InputValue; // 0x1d8
    ParticleAttributeIndex_t m_nOutputField; // 0x890
    ParticleSetMethod_t m_nSetMethod; // 0x894
    bool m_bNormalizedOutput; // 0x898
    bool m_bWritePreviousPosition; // 0x899
    char pad_01[6];
}; // size: 0x8a0

/// C_OP_InstantaneousEmitter
class __declspec(align(8)) C_OP_InstantaneousEmitter0 {
public:
    char pad_00[472];
    CParticleCollectionFloatInput m_nParticlesToEmit; // 0x1d8
    CParticleCollectionFloatInput m_flStartTime; // 0x348
    float m_flInitFromKilledParentParticles; // 0x4b8
    EventTypeSelection_t m_nEventType; // 0x4bc
    CParticleCollectionFloatInput m_flParentParticleScale; // 0x4c0
    int32_t m_nMaxEmittedPerFrame; // 0x630
    int32_t m_nSnapshotControlPoint; // 0x634
    // CUtlString m_strSnapshotSubset;
    char pad_01[8];
}; // size: 0x640

/// C_OP_ContinuousEmitter
class __declspec(align(8)) C_OP_ContinuousEmitter0 {
public:
    char pad_00[472];
    CParticleCollectionFloatInput m_flEmissionDuration; // 0x1d8
    CParticleCollectionFloatInput m_flStartTime; // 0x348
    CParticleCollectionFloatInput m_flEmitRate; // 0x4b8
    float m_flEmissionScale; // 0x628
    float m_flScalePerParentParticle; // 0x62c
    bool m_bInitFromKilledParentParticles; // 0x630
    EventTypeSelection_t m_nEventType; // 0x634
    int32_t m_nSnapshotControlPoint; // 0x638
    // CUtlString m_strSnapshotSubset;
    char pad_01[12];
    int32_t m_nLimitPerUpdate; // 0x648
    bool m_bForceEmitOnFirstUpdate; // 0x64c
    bool m_bForceEmitOnLastUpdate; // 0x64d
    char pad_02[10];
}; // size: 0x658

/// C_OP_NoiseEmitter
class __declspec(align(8)) C_OP_NoiseEmitter0 {
public:
    char pad_00[472];
    float m_flEmissionDuration; // 0x1d8
    float m_flStartTime; // 0x1dc
    float m_flEmissionScale; // 0x1e0
    int32_t m_nScaleControlPoint; // 0x1e4
    int32_t m_nScaleControlPointField; // 0x1e8
    int32_t m_nWorldNoisePoint; // 0x1ec
    bool m_bAbsVal; // 0x1f0
    bool m_bAbsValInv; // 0x1f1
    float m_flOffset; // 0x1f4
    float m_flOutputMin; // 0x1f8
    float m_flOutputMax; // 0x1fc
    float m_flNoiseScale; // 0x200
    float m_flWorldNoiseScale; // 0x204
    Vector m_vecOffsetLoc; // 0x208
    float m_flWorldTimeScale; // 0x214
}; // size: 0x218

/// C_OP_MaintainEmitter
class __declspec(align(8)) C_OP_MaintainEmitter0 {
public:
    char pad_00[472];
    CParticleCollectionFloatInput m_nParticlesToMaintain; // 0x1d8
    float m_flStartTime; // 0x348
    CParticleCollectionFloatInput m_flEmissionDuration; // 0x350
    float m_flEmissionRate; // 0x4c0
    int32_t m_nSnapshotControlPoint; // 0x4c4
    // CUtlString m_strSnapshotSubset;
    char pad_01[8];
    bool m_bEmitInstantaneously; // 0x4d0
    bool m_bFinalEmitOnStop; // 0x4d1
    CParticleCollectionFloatInput m_flScale; // 0x4d8
}; // size: 0x648

/// C_OP_RandomForce
class __declspec(align(8)) C_OP_RandomForce0 {
public:
    char pad_00[480];
    Vector m_MinForce; // 0x1e0
    Vector m_MaxForce; // 0x1ec
}; // size: 0x1f8

/// C_OP_CPVelocityForce
class __declspec(align(8)) C_OP_CPVelocityForce0 {
public:
    char pad_00[480];
    int32_t m_nControlPointNumber; // 0x1e0
    CPerParticleFloatInput m_flScale; // 0x1e8
}; // size: 0x358

/// C_OP_ParentVortices
class __declspec(align(8)) C_OP_ParentVortices0 {
public:
    char pad_00[480];
    float m_flForceScale; // 0x1e0
    Vector m_vecTwistAxis; // 0x1e4
    bool m_bFlipBasedOnYaw; // 0x1f0
    char pad_01[7];
}; // size: 0x1f8

/// C_OP_TwistAroundAxis
class __declspec(align(8)) C_OP_TwistAroundAxis0 {
public:
    char pad_00[480];
    float m_fForceAmount; // 0x1e0
    Vector m_TwistAxis; // 0x1e4
    bool m_bLocalSpace; // 0x1f0
    int32_t m_nControlPointNumber; // 0x1f4
}; // size: 0x1f8

/// C_OP_AttractToControlPoint
class __declspec(align(8)) C_OP_AttractToControlPoint0 {
public:
    char pad_00[480];
    Vector m_vecComponentScale; // 0x1e0
    CPerParticleFloatInput m_fForceAmount; // 0x1f0
    float m_fFalloffPower; // 0x360
    CParticleTransformInput m_TransformInput; // 0x368
    CPerParticleFloatInput m_fForceAmountMin; // 0x3d0
    bool m_bApplyMinForce; // 0x540
    char pad_01[7];
}; // size: 0x548

/// C_OP_ForceBasedOnDistanceToPlane
class __declspec(align(8)) C_OP_ForceBasedOnDistanceToPlane0 {
public:
    char pad_00[480];
    float m_flMinDist; // 0x1e0
    Vector m_vecForceAtMinDist; // 0x1e4
    float m_flMaxDist; // 0x1f0
    Vector m_vecForceAtMaxDist; // 0x1f4
    Vector m_vecPlaneNormal; // 0x200
    int32_t m_nControlPointNumber; // 0x20c
    float m_flExponent; // 0x210
    char pad_01[4];
}; // size: 0x218

/// C_OP_TimeVaryingForce
class __declspec(align(8)) C_OP_TimeVaryingForce0 {
public:
    char pad_00[480];
    float m_flStartLerpTime; // 0x1e0
    Vector m_StartingForce; // 0x1e4
    float m_flEndLerpTime; // 0x1f0
    Vector m_EndingForce; // 0x1f4
}; // size: 0x200

/// C_OP_TurbulenceForce
class __declspec(align(8)) C_OP_TurbulenceForce0 {
public:
    char pad_00[480];
    float m_flNoiseCoordScale0; // 0x1e0
    float m_flNoiseCoordScale1; // 0x1e4
    float m_flNoiseCoordScale2; // 0x1e8
    float m_flNoiseCoordScale3; // 0x1ec
    Vector m_vecNoiseAmount0; // 0x1f0
    Vector m_vecNoiseAmount1; // 0x1fc
    Vector m_vecNoiseAmount2; // 0x208
    Vector m_vecNoiseAmount3; // 0x214
}; // size: 0x220

/// C_OP_CurlNoiseForce
class __declspec(align(8)) C_OP_CurlNoiseForce0 {
public:
    char pad_00[480];
    ParticleDirectionNoiseType_t m_nNoiseType; // 0x1e0
    CPerParticleVecInput m_vecNoiseFreq; // 0x1e8
    CPerParticleVecInput m_vecNoiseScale; // 0x8a0
    CPerParticleVecInput m_vecOffset; // 0xf58
    CPerParticleVecInput m_vecOffsetRate; // 0x1610
    CPerParticleFloatInput m_flWorleySeed; // 0x1cc8
    CPerParticleFloatInput m_flWorleyJitter; // 0x1e38
}; // size: 0x1fa8

/// C_OP_PerParticleForce
class __declspec(align(8)) C_OP_PerParticleForce0 {
public:
    char pad_00[480];
    CPerParticleFloatInput m_flForceScale; // 0x1e0
    CPerParticleVecInput m_vForce; // 0x350
    int32_t m_nCP; // 0xa08
    char pad_01[4];
}; // size: 0xa10

/// C_OP_WindForce
class __declspec(align(8)) C_OP_WindForce0 {
public:
    char pad_00[480];
    Vector m_vForce; // 0x1e0
    char pad_01[4];
}; // size: 0x1f0

/// C_OP_ExternalWindForce
class __declspec(align(8)) C_OP_ExternalWindForce0 {
public:
    char pad_00[480];
    CPerParticleVecInput m_vecSamplePosition; // 0x1e0
    CPerParticleVecInput m_vecScale; // 0x898
    bool m_bSampleWind; // 0xf50
    bool m_bSampleWater; // 0xf51
    bool m_bDampenNearWaterPlane; // 0xf52
    bool m_bSampleGravity; // 0xf53
    CPerParticleVecInput m_vecGravityForce; // 0xf58
    bool m_bUseBasicMovementGravity; // 0x1610
    CPerParticleFloatInput m_flLocalGravityScale; // 0x1618
    CPerParticleFloatInput m_flLocalBuoyancyScale; // 0x1788
    CPerParticleVecInput m_vecBuoyancyForce; // 0x18f8
}; // size: 0x1fb0

/// C_OP_ExternalGameImpulseForce
class __declspec(align(8)) C_OP_ExternalGameImpulseForce0 {
public:
    char pad_00[480];
    CPerParticleFloatInput m_flForceScale; // 0x1e0
    bool m_bRopes; // 0x350
    bool m_bRopesZOnly; // 0x351
    bool m_bExplosions; // 0x352
    bool m_bParticles; // 0x353
    char pad_01[4];
}; // size: 0x358

/// C_OP_LocalAccelerationForce
class __declspec(align(8)) C_OP_LocalAccelerationForce0 {
public:
    char pad_00[480];
    int32_t m_nCP; // 0x1e0
    int32_t m_nScaleCP; // 0x1e4
    CParticleCollectionVecInput m_vecAccel; // 0x1e8
}; // size: 0x8a0

/// C_OP_DensityForce
class __declspec(align(8)) C_OP_DensityForce0 {
public:
    char pad_00[480];
    float m_flRadiusScale; // 0x1e0
    float m_flForceScale; // 0x1e4
    float m_flTargetDensity; // 0x1e8
    char pad_01[4];
}; // size: 0x1f0

/// C_OP_IntraParticleForce
class __declspec(align(8)) C_OP_IntraParticleForce0 {
public:
    char pad_00[480];
    float m_flAttractionMinDistance; // 0x1e0
    float m_flAttractionMaxDistance; // 0x1e4
    float m_flAttractionMaxStrength; // 0x1e8
    float m_flRepulsionMinDistance; // 0x1ec
    float m_flRepulsionMaxDistance; // 0x1f0
    float m_flRepulsionMaxStrength; // 0x1f4
    bool m_bUseAABB; // 0x1f8
    char pad_01[7];
}; // size: 0x200

/// C_OP_BasicMovement
class __declspec(align(8)) C_OP_BasicMovement0 {
public:
    char pad_00[464];
    CParticleCollectionVecInput m_Gravity; // 0x1d0
    CParticleCollectionFloatInput m_fDrag; // 0x888
    CParticleMassCalculationParameters m_massControls; // 0x9f8
    int32_t m_nMaxConstraintPasses; // 0xe50
    bool m_bUseNewCode; // 0xe54
    char pad_01[3];
}; // size: 0xe58

/// C_OP_FadeAndKill
class __declspec(align(8)) C_OP_FadeAndKill0 {
public:
    char pad_00[464];
    float m_flStartFadeInTime; // 0x1d0
    float m_flEndFadeInTime; // 0x1d4
    float m_flStartFadeOutTime; // 0x1d8
    float m_flEndFadeOutTime; // 0x1dc
    float m_flStartAlpha; // 0x1e0
    float m_flEndAlpha; // 0x1e4
    bool m_bForcePreserveParticleOrder; // 0x1e8
    char pad_01[7];
}; // size: 0x1f0

/// C_OP_FadeAndKillForTracers
class __declspec(align(8)) C_OP_FadeAndKillForTracers0 {
public:
    char pad_00[464];
    float m_flStartFadeInTime; // 0x1d0
    float m_flEndFadeInTime; // 0x1d4
    float m_flStartFadeOutTime; // 0x1d8
    float m_flEndFadeOutTime; // 0x1dc
    float m_flStartAlpha; // 0x1e0
    float m_flEndAlpha; // 0x1e4
}; // size: 0x1e8

/// C_OP_FadeIn
class __declspec(align(8)) C_OP_FadeIn0 {
public:
    char pad_00[464];
    float m_flFadeInTimeMin; // 0x1d0
    float m_flFadeInTimeMax; // 0x1d4
    float m_flFadeInTimeExp; // 0x1d8
    bool m_bProportional; // 0x1dc
    char pad_01[3];
}; // size: 0x1e0

/// C_OP_FadeOut
class __declspec(align(16)) C_OP_FadeOut0 {
public:
    char pad_00[464];
    float m_flFadeOutTimeMin; // 0x1d0
    float m_flFadeOutTimeMax; // 0x1d4
    float m_flFadeOutTimeExp; // 0x1d8
    float m_flFadeBias; // 0x1dc
    char pad_01[48];
    bool m_bProportional; // 0x210
    bool m_bEaseInAndOut; // 0x211
    char pad_02[14];
}; // size: 0x220

/// C_OP_FadeInSimple
class __declspec(align(8)) C_OP_FadeInSimple0 {
public:
    char pad_00[464];
    float m_flFadeInTime; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
}; // size: 0x1d8

/// C_OP_FadeOutSimple
class __declspec(align(8)) C_OP_FadeOutSimple0 {
public:
    char pad_00[464];
    float m_flFadeOutTime; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
}; // size: 0x1d8

/// C_OP_ClampScalar
class __declspec(align(8)) C_OP_ClampScalar0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    CPerParticleFloatInput m_flOutputMin; // 0x1d8
    CPerParticleFloatInput m_flOutputMax; // 0x348
}; // size: 0x4b8

/// C_OP_ClampVector
class __declspec(align(8)) C_OP_ClampVector0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    CPerParticleVecInput m_vecOutputMin; // 0x1d8
    CPerParticleVecInput m_vecOutputMax; // 0x890
}; // size: 0xf48

/// C_OP_OscillateScalar
class __declspec(align(8)) C_OP_OscillateScalar0 {
public:
    char pad_00[464];
    float m_RateMin; // 0x1d0
    float m_RateMax; // 0x1d4
    float m_FrequencyMin; // 0x1d8
    float m_FrequencyMax; // 0x1dc
    ParticleAttributeIndex_t m_nField; // 0x1e0
    bool m_bProportional; // 0x1e4
    bool m_bProportionalOp; // 0x1e5
    float m_flStartTime_min; // 0x1e8
    float m_flStartTime_max; // 0x1ec
    float m_flEndTime_min; // 0x1f0
    float m_flEndTime_max; // 0x1f4
    float m_flOscMult; // 0x1f8
    float m_flOscAdd; // 0x1fc
}; // size: 0x200

/// C_OP_OscillateScalarSimple
class __declspec(align(16)) C_OP_OscillateScalarSimple0 {
public:
    char pad_00[464];
    float m_Rate; // 0x1d0
    float m_Frequency; // 0x1d4
    ParticleAttributeIndex_t m_nField; // 0x1d8
    float m_flOscMult; // 0x1dc
    float m_flOscAdd; // 0x1e0
    char pad_01[44];
}; // size: 0x210

/// C_OP_OscillateVector
class __declspec(align(8)) C_OP_OscillateVector0 {
public:
    char pad_00[464];
    Vector m_RateMin; // 0x1d0
    Vector m_RateMax; // 0x1dc
    Vector m_FrequencyMin; // 0x1e8
    Vector m_FrequencyMax; // 0x1f4
    ParticleAttributeIndex_t m_nField; // 0x200
    bool m_bProportional; // 0x204
    bool m_bProportionalOp; // 0x205
    bool m_bOffset; // 0x206
    float m_flStartTime_min; // 0x208
    float m_flStartTime_max; // 0x20c
    float m_flEndTime_min; // 0x210
    float m_flEndTime_max; // 0x214
    CPerParticleFloatInput m_flOscMult; // 0x218
    CPerParticleFloatInput m_flOscAdd; // 0x388
    CPerParticleFloatInput m_flRateScale; // 0x4f8
}; // size: 0x668

/// C_OP_OscillateVectorSimple
class __declspec(align(8)) C_OP_OscillateVectorSimple0 {
public:
    char pad_00[464];
    Vector m_Rate; // 0x1d0
    Vector m_Frequency; // 0x1dc
    ParticleAttributeIndex_t m_nField; // 0x1e8
    float m_flOscMult; // 0x1ec
    float m_flOscAdd; // 0x1f0
    bool m_bOffset; // 0x1f4
    char pad_01[3];
}; // size: 0x1f8

/// C_OP_DifferencePreviousParticle
class __declspec(align(8)) C_OP_DifferencePreviousParticle0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldInput; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
    float m_flInputMin; // 0x1d8
    float m_flInputMax; // 0x1dc
    float m_flOutputMin; // 0x1e0
    float m_flOutputMax; // 0x1e4
    ParticleSetMethod_t m_nSetMethod; // 0x1e8
    bool m_bActiveRange; // 0x1ec
    bool m_bSetPreviousParticle; // 0x1ed
    char pad_01[2];
}; // size: 0x1f0

/// C_OP_PointVectorAtNextParticle
class __declspec(align(8)) C_OP_PointVectorAtNextParticle0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    CPerParticleFloatInput m_flInterpolation; // 0x1d8
}; // size: 0x348

/// C_OP_ScreenSpacePositionOfTarget
class __declspec(align(8)) C_OP_ScreenSpacePositionOfTarget0 {
public:
    char pad_00[464];
    CPerParticleVecInput m_vecTargetPosition; // 0x1d0
    bool m_bOututBehindness; // 0x888
    ParticleAttributeIndex_t m_nBehindFieldOutput; // 0x88c
    CParticleRemapFloatInput m_flBehindOutputRemap; // 0x890
    ParticleSetMethod_t m_nBehindSetMethod; // 0xa00
    char pad_01[4];
}; // size: 0xa08

/// C_OP_ScreenSpaceDistanceToEdge
class __declspec(align(16)) C_OP_ScreenSpaceDistanceToEdge0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    CPerParticleFloatInput m_flMaxDistFromEdge; // 0x1d8
    CParticleRemapFloatInput m_flOutputRemap; // 0x348
    ParticleSetMethod_t m_nSetMethod; // 0x4b8
    char pad_01[36];
}; // size: 0x4e0

/// C_OP_ScreenSpaceRotateTowardTarget
class __declspec(align(8)) C_OP_ScreenSpaceRotateTowardTarget0 {
public:
    char pad_00[464];
    CPerParticleVecInput m_vecTargetPosition; // 0x1d0
    CParticleRemapFloatInput m_flOutputRemap; // 0x888
    ParticleSetMethod_t m_nSetMethod; // 0x9f8
    CPerParticleFloatInput m_flScreenEdgeAlignmentDistance; // 0xa00
}; // size: 0xb70

/// C_OP_RemapScalar
class __declspec(align(8)) C_OP_RemapScalar0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldInput; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
    float m_flInputMin; // 0x1d8
    float m_flInputMax; // 0x1dc
    float m_flOutputMin; // 0x1e0
    float m_flOutputMax; // 0x1e4
    bool m_bOldCode; // 0x1e8
    char pad_01[7];
}; // size: 0x1f0

/// C_OP_RemapDensityToVector
class __declspec(align(8)) C_OP_RemapDensityToVector0 {
public:
    char pad_00[464];
    float m_flRadiusScale; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
    float m_flDensityMin; // 0x1d8
    float m_flDensityMax; // 0x1dc
    Vector m_vecOutputMin; // 0x1e0
    Vector m_vecOutputMax; // 0x1ec
    bool m_bUseParentDensity; // 0x1f8
    int32_t m_nVoxelGridResolution; // 0x1fc
}; // size: 0x200

/// C_OP_Diffusion
class __declspec(align(8)) C_OP_Diffusion0 {
public:
    char pad_00[464];
    float m_flRadiusScale; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
    int32_t m_nVoxelGridResolution; // 0x1d8
    char pad_01[4];
}; // size: 0x1e0

/// C_OP_RemapScalarEndCap
class __declspec(align(8)) C_OP_RemapScalarEndCap0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldInput; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
    float m_flInputMin; // 0x1d8
    float m_flInputMax; // 0x1dc
    float m_flOutputMin; // 0x1e0
    float m_flOutputMax; // 0x1e4
}; // size: 0x1e8

/// C_OP_ReinitializeScalarEndCap
class __declspec(align(8)) C_OP_ReinitializeScalarEndCap0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    float m_flOutputMin; // 0x1d4
    float m_flOutputMax; // 0x1d8
    char pad_01[4];
}; // size: 0x1e0

/// C_OP_RemapScalarOnceTimed
class __declspec(align(8)) C_OP_RemapScalarOnceTimed0 {
public:
    char pad_00[464];
    bool m_bProportional; // 0x1d0
    ParticleAttributeIndex_t m_nFieldInput; // 0x1d4
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8
    float m_flInputMin; // 0x1dc
    float m_flInputMax; // 0x1e0
    float m_flOutputMin; // 0x1e4
    float m_flOutputMax; // 0x1e8
    float m_flRemapTime; // 0x1ec
}; // size: 0x1f0

/// C_OP_RemapParticleCountOnScalarEndCap
class __declspec(align(8)) C_OP_RemapParticleCountOnScalarEndCap0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    int32_t m_nInputMin; // 0x1d4
    int32_t m_nInputMax; // 0x1d8
    float m_flOutputMin; // 0x1dc
    float m_flOutputMax; // 0x1e0
    bool m_bBackwards; // 0x1e4
    ParticleSetMethod_t m_nSetMethod; // 0x1e8
    char pad_01[4];
}; // size: 0x1f0

/// C_OP_RemapParticleCountToScalar
class __declspec(align(8)) C_OP_RemapParticleCountToScalar0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    CParticleCollectionFloatInput m_nInputMin; // 0x1d8
    CParticleCollectionFloatInput m_nInputMax; // 0x348
    CParticleCollectionFloatInput m_flOutputMin; // 0x4b8
    CParticleCollectionFloatInput m_flOutputMax; // 0x628
    bool m_bActiveRange; // 0x798
    ParticleSetMethod_t m_nSetMethod; // 0x79c
}; // size: 0x7a0

/// C_OP_RemapVisibilityScalar
class __declspec(align(8)) C_OP_RemapVisibilityScalar0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldInput; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
    float m_flInputMin; // 0x1d8
    float m_flInputMax; // 0x1dc
    float m_flOutputMin; // 0x1e0
    float m_flOutputMax; // 0x1e4
    float m_flRadiusScale; // 0x1e8
    char pad_01[4];
}; // size: 0x1f0

/// C_OP_RemapTransformVisibilityToScalar
class __declspec(align(8)) C_OP_RemapTransformVisibilityToScalar0 {
public:
    char pad_00[464];
    ParticleSetMethod_t m_nSetMethod; // 0x1d0
    CParticleTransformInput m_TransformInput; // 0x1d8
    ParticleAttributeIndex_t m_nFieldOutput; // 0x240
    float m_flInputMin; // 0x244
    float m_flInputMax; // 0x248
    float m_flOutputMin; // 0x24c
    float m_flOutputMax; // 0x250
    float m_flRadius; // 0x254
}; // size: 0x258

/// C_OP_RemapTransformVisibilityToVector
class __declspec(align(8)) C_OP_RemapTransformVisibilityToVector0 {
public:
    char pad_00[464];
    ParticleSetMethod_t m_nSetMethod; // 0x1d0
    CParticleTransformInput m_TransformInput; // 0x1d8
    ParticleAttributeIndex_t m_nFieldOutput; // 0x240
    float m_flInputMin; // 0x244
    float m_flInputMax; // 0x248
    Vector m_vecOutputMin; // 0x24c
    Vector m_vecOutputMax; // 0x258
    float m_flRadius; // 0x264
}; // size: 0x268

/// C_OP_LerpScalar
class __declspec(align(8)) C_OP_LerpScalar0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    CPerParticleFloatInput m_flOutput; // 0x1d8
    float m_flStartTime; // 0x348
    float m_flEndTime; // 0x34c
}; // size: 0x350

/// C_OP_LerpEndCapScalar
class __declspec(align(8)) C_OP_LerpEndCapScalar0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    float m_flOutput; // 0x1d4
    float m_flLerpTime; // 0x1d8
    char pad_01[4];
}; // size: 0x1e0

/// C_OP_LerpEndCapVector
class __declspec(align(8)) C_OP_LerpEndCapVector0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    Vector m_vecOutput; // 0x1d4
    float m_flLerpTime; // 0x1e0
    char pad_01[4];
}; // size: 0x1e8

/// C_OP_LerpVector
class __declspec(align(8)) C_OP_LerpVector0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    Vector m_vecOutput; // 0x1d4
    float m_flStartTime; // 0x1e0
    float m_flEndTime; // 0x1e4
    ParticleSetMethod_t m_nSetMethod; // 0x1e8
    char pad_01[4];
}; // size: 0x1f0

/// C_OP_LerpToOtherAttribute
class __declspec(align(16)) C_OP_LerpToOtherAttribute0 {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flInterpolation; // 0x1d0
    ParticleAttributeIndex_t m_nFieldInputFrom; // 0x340
    ParticleAttributeIndex_t m_nFieldInput; // 0x344
    ParticleAttributeIndex_t m_nFieldOutput; // 0x348
    char pad_01[36];
}; // size: 0x370

/// C_OP_RemapSpeed
class __declspec(align(8)) C_OP_RemapSpeed0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    float m_flInputMin; // 0x1d4
    float m_flInputMax; // 0x1d8
    float m_flOutputMin; // 0x1dc
    float m_flOutputMax; // 0x1e0
    ParticleSetMethod_t m_nSetMethod; // 0x1e4
    bool m_bIgnoreDelta; // 0x1e8
    char pad_01[7];
}; // size: 0x1f0

/// C_OP_RemapVectortoCP
class __declspec(align(8)) C_OP_RemapVectortoCP0 {
public:
    char pad_00[464];
    int32_t m_nOutControlPointNumber; // 0x1d0
    ParticleAttributeIndex_t m_nFieldInput; // 0x1d4
    int32_t m_nParticleNumber; // 0x1d8
    char pad_01[4];
}; // size: 0x1e0

/// C_OP_RampScalarLinear
class __declspec(align(16)) C_OP_RampScalarLinear0 {
public:
    char pad_00[464];
    float m_RateMin; // 0x1d0
    float m_RateMax; // 0x1d4
    float m_flStartTime_min; // 0x1d8
    float m_flStartTime_max; // 0x1dc
    float m_flEndTime_min; // 0x1e0
    float m_flEndTime_max; // 0x1e4
    char pad_01[40];
    ParticleAttributeIndex_t m_nField; // 0x210
    bool m_bProportionalOp; // 0x214
    char pad_02[11];
}; // size: 0x220

/// C_OP_RampScalarSpline
class __declspec(align(16)) C_OP_RampScalarSpline0 {
public:
    char pad_00[464];
    float m_RateMin; // 0x1d0
    float m_RateMax; // 0x1d4
    float m_flStartTime_min; // 0x1d8
    float m_flStartTime_max; // 0x1dc
    float m_flEndTime_min; // 0x1e0
    float m_flEndTime_max; // 0x1e4
    float m_flBias; // 0x1e8
    char pad_01[36];
    ParticleAttributeIndex_t m_nField; // 0x210
    bool m_bProportionalOp; // 0x214
    bool m_bEaseOut; // 0x215
    char pad_02[10];
}; // size: 0x220

/// C_OP_RampScalarLinearSimple
class __declspec(align(16)) C_OP_RampScalarLinearSimple0 {
public:
    char pad_00[464];
    float m_Rate; // 0x1d0
    float m_flStartTime; // 0x1d4
    float m_flEndTime; // 0x1d8
    char pad_01[36];
    ParticleAttributeIndex_t m_nField; // 0x200
    char pad_02[12];
}; // size: 0x210

/// C_OP_RampScalarSplineSimple
class __declspec(align(16)) C_OP_RampScalarSplineSimple0 {
public:
    char pad_00[464];
    float m_Rate; // 0x1d0
    float m_flStartTime; // 0x1d4
    float m_flEndTime; // 0x1d8
    char pad_01[36];
    ParticleAttributeIndex_t m_nField; // 0x200
    bool m_bEaseOut; // 0x204
    char pad_02[11];
}; // size: 0x210

/// C_OP_ChladniWave
class __declspec(align(8)) C_OP_ChladniWave0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    CPerParticleFloatInput m_flInputMin; // 0x1d8
    CPerParticleFloatInput m_flInputMax; // 0x348
    CPerParticleFloatInput m_flOutputMin; // 0x4b8
    CPerParticleFloatInput m_flOutputMax; // 0x628
    CPerParticleVecInput m_vecWaveLength; // 0x798
    CPerParticleVecInput m_vecHarmonics; // 0xe50
    ParticleSetMethod_t m_nSetMethod; // 0x1508
    int32_t m_nLocalSpaceControlPoint; // 0x150c
    bool m_b3D; // 0x1510
    char pad_01[7];
}; // size: 0x1518

/// C_OP_Noise
class __declspec(align(8)) C_OP_Noise0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    float m_flOutputMin; // 0x1d4
    float m_flOutputMax; // 0x1d8
    float m_fl4NoiseScale; // 0x1dc
    bool m_bAdditive; // 0x1e0
    float m_flNoiseAnimationTimeScale; // 0x1e4
}; // size: 0x1e8

/// C_OP_VectorNoise
class __declspec(align(8)) C_OP_VectorNoise0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    Vector m_vecOutputMin; // 0x1d4
    Vector m_vecOutputMax; // 0x1e0
    float m_fl4NoiseScale; // 0x1ec
    bool m_bAdditive; // 0x1f0
    bool m_bOffset; // 0x1f1
    float m_flNoiseAnimationTimeScale; // 0x1f4
}; // size: 0x1f8

/// C_OP_Decay
class __declspec(align(8)) C_OP_Decay0 {
public:
    char pad_00[464];
    bool m_bRopeDecay; // 0x1d0
    bool m_bForcePreserveParticleOrder; // 0x1d1
    char pad_01[6];
}; // size: 0x1d8

/// C_OP_DecayOffscreen
class __declspec(align(8)) C_OP_DecayOffscreen0 {
public:
    char pad_00[464];
    CParticleCollectionFloatInput m_flOffscreenTime; // 0x1d0
}; // size: 0x340

/// C_OP_EndCapTimedFreeze
class __declspec(align(8)) C_OP_EndCapTimedFreeze0 {
public:
    char pad_00[464];
    CParticleCollectionFloatInput m_flFreezeTime; // 0x1d0
}; // size: 0x340

/// C_OP_EndCapTimedDecay
class __declspec(align(8)) C_OP_EndCapTimedDecay0 {
public:
    char pad_00[464];
    float m_flDecayTime; // 0x1d0
    char pad_01[4];
}; // size: 0x1d8

/// C_OP_EndCapDecay
class __declspec(align(8)) C_OP_EndCapDecay0 {
public:
    char pad_00[464];
}; // size: 0x1d0

/// C_OP_VelocityDecay
class __declspec(align(8)) C_OP_VelocityDecay0 {
public:
    char pad_00[464];
    float m_flMinVelocity; // 0x1d0
    char pad_01[4];
}; // size: 0x1d8

/// C_OP_AlphaDecay
class __declspec(align(8)) C_OP_AlphaDecay0 {
public:
    char pad_00[464];
    float m_flMinAlpha; // 0x1d0
    char pad_01[4];
}; // size: 0x1d8

/// C_OP_RadiusDecay
class __declspec(align(8)) C_OP_RadiusDecay0 {
public:
    char pad_00[464];
    float m_flMinRadius; // 0x1d0
    char pad_01[4];
}; // size: 0x1d8

/// C_OP_DecayMaintainCount
class __declspec(align(8)) C_OP_DecayMaintainCount0 {
public:
    char pad_00[464];
    int32_t m_nParticlesToMaintain; // 0x1d0
    float m_flDecayDelay; // 0x1d4
    int32_t m_nSnapshotControlPoint; // 0x1d8
    // CUtlString m_strSnapshotSubset;
    char pad_01[12];
    bool m_bLifespanDecay; // 0x1e8
    CParticleCollectionFloatInput m_flScale; // 0x1f0
    bool m_bKillNewest; // 0x360
    char pad_02[7];
}; // size: 0x368

/// C_OP_DecayClampCount
class __declspec(align(8)) C_OP_DecayClampCount0 {
public:
    char pad_00[464];
    CParticleCollectionFloatInput m_nCount; // 0x1d0
}; // size: 0x340

/// C_OP_Cull
class __declspec(align(8)) C_OP_Cull0 {
public:
    char pad_00[464];
    float m_flCullPerc; // 0x1d0
    float m_flCullStart; // 0x1d4
    float m_flCullEnd; // 0x1d8
    float m_flCullExp; // 0x1dc
}; // size: 0x1e0

/// C_OP_LazyCullCompareFloat
class __declspec(align(8)) C_OP_LazyCullCompareFloat0 {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flComparsion1; // 0x1d0
    CPerParticleFloatInput m_flComparsion2; // 0x340
    CPerParticleFloatInput m_flCullTime; // 0x4b0
}; // size: 0x620

/// CGeneralSpin
class __declspec(align(4)) CGeneralSpin0 {
public:
    char pad_00[464];
    int32_t m_nSpinRateDegrees; // 0x1d0
    int32_t m_nSpinRateMinDegrees; // 0x1d4
    char pad_01[4];
    float m_fSpinRateStopTime; // 0x1dc
    char pad_02[8];
}; // size: 0x1e8

/// CSpinUpdateBase
class __declspec(align(1)) CSpinUpdateBase0 {
public:
    char pad_00[464];
}; // size: 0x1d0

/// C_OP_Spin
class __declspec(align(8)) C_OP_Spin0 {
public:
    char pad_00[488];
}; // size: 0x1e8

/// C_OP_SpinUpdate
class __declspec(align(8)) C_OP_SpinUpdate0 {
public:
    char pad_00[464];
}; // size: 0x1d0

/// C_OP_SpinYaw
class __declspec(align(8)) C_OP_SpinYaw0 {
public:
    char pad_00[488];
}; // size: 0x1e8

/// C_OP_InterpolateRadius
class __declspec(align(16)) C_OP_InterpolateRadius0 {
public:
    char pad_00[464];
    float m_flStartTime; // 0x1d0
    float m_flEndTime; // 0x1d4
    float m_flStartScale; // 0x1d8
    float m_flEndScale; // 0x1dc
    bool m_bEaseInAndOut; // 0x1e0
    float m_flBias; // 0x1e4
    char pad_01[56];
}; // size: 0x220

/// C_OP_ColorInterpolate
class __declspec(align(8)) C_OP_ColorInterpolate0 {
public:
    // Color m_ColorFade;
    char pad_00[480];
    float m_flFadeStartTime; // 0x1e0
    float m_flFadeEndTime; // 0x1e4
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1e8
    bool m_bEaseInOut; // 0x1ec
    char pad_01[3];
}; // size: 0x1f0

/// C_OP_ColorInterpolateRandom
class __declspec(align(8)) C_OP_ColorInterpolateRandom0 {
public:
    // Color m_ColorFadeMin;
    // Color m_ColorFadeMax;
    char pad_00[508];
    float m_flFadeStartTime; // 0x1fc
    float m_flFadeEndTime; // 0x200
    ParticleAttributeIndex_t m_nFieldOutput; // 0x204
    bool m_bEaseInOut; // 0x208
    char pad_01[7];
}; // size: 0x210

/// C_OP_PositionLock
class __declspec(align(8)) C_OP_PositionLock0 {
public:
    char pad_00[464];
    CParticleTransformInput m_TransformInput; // 0x1d0
    float m_flStartTime_min; // 0x238
    float m_flStartTime_max; // 0x23c
    float m_flStartTime_exp; // 0x240
    float m_flEndTime_min; // 0x244
    float m_flEndTime_max; // 0x248
    float m_flEndTime_exp; // 0x24c
    float m_flRange; // 0x250
    CParticleCollectionFloatInput m_flRangeBias; // 0x258
    float m_flJumpThreshold; // 0x3c8
    float m_flPrevPosScale; // 0x3cc
    bool m_bLockRot; // 0x3d0
    CParticleCollectionVecInput m_vecScale; // 0x3d8
    ParticleAttributeIndex_t m_nFieldOutput; // 0xa90
    ParticleAttributeIndex_t m_nFieldOutputPrev; // 0xa94
}; // size: 0xa98

/// C_OP_ControlpointLight
class __declspec(align(16)) C_OP_ControlpointLight0 {
public:
    char pad_00[464];
    float m_flScale; // 0x1d0
    char pad_01[1164];
    int32_t m_nControlPoint1; // 0x660
    int32_t m_nControlPoint2; // 0x664
    int32_t m_nControlPoint3; // 0x668
    int32_t m_nControlPoint4; // 0x66c
    Vector m_vecCPOffset1; // 0x670
    Vector m_vecCPOffset2; // 0x67c
    Vector m_vecCPOffset3; // 0x688
    Vector m_vecCPOffset4; // 0x694
    float m_LightFiftyDist1; // 0x6a0
    float m_LightZeroDist1; // 0x6a4
    float m_LightFiftyDist2; // 0x6a8
    float m_LightZeroDist2; // 0x6ac
    float m_LightFiftyDist3; // 0x6b0
    float m_LightZeroDist3; // 0x6b4
    float m_LightFiftyDist4; // 0x6b8
    float m_LightZeroDist4; // 0x6bc
    // Color m_LightColor1;
    // Color m_LightColor2;
    // Color m_LightColor3;
    // Color m_LightColor4;
    char pad_02[16];
    bool m_bLightType1; // 0x6d0
    bool m_bLightType2; // 0x6d1
    bool m_bLightType3; // 0x6d2
    bool m_bLightType4; // 0x6d3
    bool m_bLightDynamic1; // 0x6d4
    bool m_bLightDynamic2; // 0x6d5
    bool m_bLightDynamic3; // 0x6d6
    bool m_bLightDynamic4; // 0x6d7
    bool m_bUseNormal; // 0x6d8
    bool m_bUseHLambert; // 0x6d9
    char pad_03[4];
    bool m_bClampLowerRange; // 0x6de
    bool m_bClampUpperRange; // 0x6df
}; // size: 0x6e0

/// C_OP_GlobalLight
class __declspec(align(8)) C_OP_GlobalLight0 {
public:
    char pad_00[464];
    float m_flScale; // 0x1d0
    bool m_bClampLowerRange; // 0x1d4
    bool m_bClampUpperRange; // 0x1d5
    char pad_01[2];
}; // size: 0x1d8

/// C_OP_SetChildControlPoints
class __declspec(align(8)) C_OP_SetChildControlPoints0 {
public:
    char pad_00[464];
    int32_t m_nChildGroupID; // 0x1d0
    int32_t m_nFirstControlPoint; // 0x1d4
    int32_t m_nNumControlPoints; // 0x1d8
    CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x1e0
    bool m_bReverse; // 0x350
    bool m_bSetOrientation; // 0x351
    ParticleOrientationType_t m_nOrientation; // 0x354
}; // size: 0x358

/// C_OP_SetControlPointsToParticle
class __declspec(align(8)) C_OP_SetControlPointsToParticle0 {
public:
    char pad_00[464];
    int32_t m_nChildGroupID; // 0x1d0
    int32_t m_nFirstControlPoint; // 0x1d4
    int32_t m_nNumControlPoints; // 0x1d8
    int32_t m_nFirstSourcePoint; // 0x1dc
    bool m_bReverse; // 0x1e0
    bool m_bSetOrientation; // 0x1e1
    ParticleOrientationSetMode_t m_nOrientationMode; // 0x1e4
    ParticleParentSetMode_t m_nSetParent; // 0x1e8
    char pad_01[4];
}; // size: 0x1f0

/// C_OP_SetControlPointsToModelParticles
class __declspec(align(8)) C_OP_SetControlPointsToModelParticles0 {
public:
    char pad_00[464];
    char m_HitboxSetName[128]; // 0x1d0
    char m_AttachmentName[128]; // 0x250
    int32_t m_nFirstControlPoint; // 0x2d0
    int32_t m_nNumControlPoints; // 0x2d4
    int32_t m_nFirstSourcePoint; // 0x2d8
    bool m_bSkin; // 0x2dc
    bool m_bAttachment; // 0x2dd
    char pad_01[2];
}; // size: 0x2e0

/// C_OP_SetPerChildControlPoint
class __declspec(align(8)) C_OP_SetPerChildControlPoint0 {
public:
    char pad_00[464];
    int32_t m_nChildGroupID; // 0x1d0
    int32_t m_nFirstControlPoint; // 0x1d4
    int32_t m_nNumControlPoints; // 0x1d8
    CParticleCollectionFloatInput m_nParticleIncrement; // 0x1e0
    CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x350
    bool m_bSetOrientation; // 0x4c0
    ParticleAttributeIndex_t m_nOrientationField; // 0x4c4
    bool m_bNumBasedOnParticleCount; // 0x4c8
    char pad_01[7];
}; // size: 0x4d0

/// C_OP_SetPerChildControlPointFromAttribute
class __declspec(align(8)) C_OP_SetPerChildControlPointFromAttribute0 {
public:
    char pad_00[464];
    int32_t m_nChildGroupID; // 0x1d0
    int32_t m_nFirstControlPoint; // 0x1d4
    int32_t m_nNumControlPoints; // 0x1d8
    int32_t m_nParticleIncrement; // 0x1dc
    int32_t m_nFirstSourcePoint; // 0x1e0
    bool m_bNumBasedOnParticleCount; // 0x1e4
    ParticleAttributeIndex_t m_nAttributeToRead; // 0x1e8
    int32_t m_nCPField; // 0x1ec
}; // size: 0x1f0

/// C_OP_RemapTransformOrientationToYaw
class __declspec(align(8)) C_OP_RemapTransformOrientationToYaw0 {
public:
    char pad_00[464];
    CParticleTransformInput m_TransformInput; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x238
    float m_flRotOffset; // 0x23c
    float m_flSpinStrength; // 0x240
    char pad_01[4];
}; // size: 0x248

/// C_OP_DampenToCP
class __declspec(align(8)) C_OP_DampenToCP0 {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber; // 0x1d0
    float m_flRange; // 0x1d4
    float m_flScale; // 0x1d8
    char pad_01[4];
}; // size: 0x1e0

/// C_OP_SetToCP
class __declspec(align(8)) C_OP_SetToCP0 {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber; // 0x1d0
    Vector m_vecOffset; // 0x1d4
    bool m_bOffsetLocal; // 0x1e0
    char pad_01[7];
}; // size: 0x1e8

/// C_OP_PinParticleToCP
class __declspec(align(8)) C_OP_PinParticleToCP0 {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber; // 0x1d0
    CParticleCollectionVecInput m_vecOffset; // 0x1d8
    bool m_bOffsetLocal; // 0x890
    ParticleSelection_t m_nParticleSelection; // 0x894
    CParticleCollectionFloatInput m_nParticleNumber; // 0x898
    ParticlePinDistance_t m_nPinBreakType; // 0xa08
    CParticleCollectionFloatInput m_flBreakDistance; // 0xa10
    CParticleCollectionFloatInput m_flBreakSpeed; // 0xb80
    CParticleCollectionFloatInput m_flAge; // 0xcf0
    int32_t m_nBreakControlPointNumber; // 0xe60
    int32_t m_nBreakControlPointNumber2; // 0xe64
    CParticleCollectionFloatInput m_flBreakValue; // 0xe68
    CPerParticleFloatInput m_flInterpolation; // 0xfd8
    bool m_bRetainInitialVelocity; // 0x1148
    char pad_01[7];
}; // size: 0x1150

/// C_OP_PinRopeSegmentParticleToParent
class __declspec(align(8)) C_OP_PinRopeSegmentParticleToParent0 {
public:
    char pad_00[464];
    ParticleSelection_t m_nParticleSelection; // 0x1d0
    CParticleCollectionFloatInput m_nParticleNumber; // 0x1d8
    CPerParticleFloatInput m_flInterpolation; // 0x348
}; // size: 0x4b8

/// C_OP_MovementRigidAttachToCP
class __declspec(align(8)) C_OP_MovementRigidAttachToCP0 {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber; // 0x1d0
    int32_t m_nScaleControlPoint; // 0x1d4
    int32_t m_nScaleCPField; // 0x1d8
    ParticleAttributeIndex_t m_nFieldInput; // 0x1dc
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1e0
    bool m_bOffsetLocal; // 0x1e4
    char pad_01[3];
}; // size: 0x1e8

/// C_OP_LerpToInitialPosition
class __declspec(align(8)) C_OP_LerpToInitialPosition0 {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber; // 0x1d0
    CPerParticleFloatInput m_flInterpolation; // 0x1d8
    ParticleAttributeIndex_t m_nCacheField; // 0x348
    CParticleCollectionFloatInput m_flScale; // 0x350
    CParticleCollectionVecInput m_vecScale; // 0x4c0
}; // size: 0xb78

/// C_OP_DistanceBetweenTransforms
class __declspec(align(8)) C_OP_DistanceBetweenTransforms0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    CParticleTransformInput m_TransformStart; // 0x1d8
    CParticleTransformInput m_TransformEnd; // 0x240
    CPerParticleFloatInput m_flInputMin; // 0x2a8
    CPerParticleFloatInput m_flInputMax; // 0x418
    CPerParticleFloatInput m_flOutputMin; // 0x588
    CPerParticleFloatInput m_flOutputMax; // 0x6f8
    float m_flMaxTraceLength; // 0x868
    float m_flLOSScale; // 0x86c
    char m_CollisionGroupName[128]; // 0x870
    ParticleTraceSet_t m_nTraceSet; // 0x8f0
    bool m_bLOS; // 0x8f4
    ParticleSetMethod_t m_nSetMethod; // 0x8f8
    char pad_01[4];
}; // size: 0x900

/// C_OP_PercentageBetweenTransforms
class __declspec(align(8)) C_OP_PercentageBetweenTransforms0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    float m_flInputMin; // 0x1d4
    float m_flInputMax; // 0x1d8
    float m_flOutputMin; // 0x1dc
    float m_flOutputMax; // 0x1e0
    CParticleTransformInput m_TransformStart; // 0x1e8
    CParticleTransformInput m_TransformEnd; // 0x250
    ParticleSetMethod_t m_nSetMethod; // 0x2b8
    bool m_bActiveRange; // 0x2bc
    bool m_bRadialCheck; // 0x2bd
    char pad_01[2];
}; // size: 0x2c0

/// C_OP_PercentageBetweenTransformsVector
class __declspec(align(8)) C_OP_PercentageBetweenTransformsVector0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    float m_flInputMin; // 0x1d4
    float m_flInputMax; // 0x1d8
    Vector m_vecOutputMin; // 0x1dc
    Vector m_vecOutputMax; // 0x1e8
    CParticleTransformInput m_TransformStart; // 0x1f8
    CParticleTransformInput m_TransformEnd; // 0x260
    ParticleSetMethod_t m_nSetMethod; // 0x2c8
    bool m_bActiveRange; // 0x2cc
    bool m_bRadialCheck; // 0x2cd
    char pad_01[2];
}; // size: 0x2d0

/// C_OP_PercentageBetweenTransformLerpCPs
class __declspec(align(8)) C_OP_PercentageBetweenTransformLerpCPs0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    float m_flInputMin; // 0x1d4
    float m_flInputMax; // 0x1d8
    CParticleTransformInput m_TransformStart; // 0x1e0
    CParticleTransformInput m_TransformEnd; // 0x248
    int32_t m_nOutputStartCP; // 0x2b0
    int32_t m_nOutputStartField; // 0x2b4
    int32_t m_nOutputEndCP; // 0x2b8
    int32_t m_nOutputEndField; // 0x2bc
    ParticleSetMethod_t m_nSetMethod; // 0x2c0
    bool m_bActiveRange; // 0x2c4
    bool m_bRadialCheck; // 0x2c5
    char pad_01[2];
}; // size: 0x2c8

/// C_OP_DistanceBetweenVecs
class __declspec(align(8)) C_OP_DistanceBetweenVecs0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    CPerParticleVecInput m_vecPoint1; // 0x1d8
    CPerParticleVecInput m_vecPoint2; // 0x890
    CPerParticleFloatInput m_flInputMin; // 0xf48
    CPerParticleFloatInput m_flInputMax; // 0x10b8
    CPerParticleFloatInput m_flOutputMin; // 0x1228
    CPerParticleFloatInput m_flOutputMax; // 0x1398
    ParticleSetMethod_t m_nSetMethod; // 0x1508
    bool m_bDeltaTime; // 0x150c
    char pad_01[3];
}; // size: 0x1510

/// C_OP_DirectionBetweenVecsToVec
class __declspec(align(8)) C_OP_DirectionBetweenVecsToVec0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    CPerParticleVecInput m_vecPoint1; // 0x1d8
    CPerParticleVecInput m_vecPoint2; // 0x890
}; // size: 0xf48

/// C_OP_DistanceToTransform
class __declspec(align(8)) C_OP_DistanceToTransform0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    CPerParticleFloatInput m_flInputMin; // 0x1d8
    CPerParticleFloatInput m_flInputMax; // 0x348
    CPerParticleFloatInput m_flOutputMin; // 0x4b8
    CPerParticleFloatInput m_flOutputMax; // 0x628
    CParticleTransformInput m_TransformStart; // 0x798
    bool m_bLOS; // 0x800
    char m_CollisionGroupName[128]; // 0x801
    ParticleTraceSet_t m_nTraceSet; // 0x884
    float m_flMaxTraceLength; // 0x888
    float m_flLOSScale; // 0x88c
    ParticleSetMethod_t m_nSetMethod; // 0x890
    bool m_bActiveRange; // 0x894
    bool m_bAdditive; // 0x895
    CPerParticleVecInput m_vecComponentScale; // 0x898
}; // size: 0xf50

/// C_OP_CylindricalDistanceToTransform
class __declspec(align(8)) C_OP_CylindricalDistanceToTransform0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    CPerParticleFloatInput m_flInputMin; // 0x1d8
    CPerParticleFloatInput m_flInputMax; // 0x348
    CPerParticleFloatInput m_flOutputMin; // 0x4b8
    CPerParticleFloatInput m_flOutputMax; // 0x628
    CParticleTransformInput m_TransformStart; // 0x798
    CParticleTransformInput m_TransformEnd; // 0x800
    ParticleSetMethod_t m_nSetMethod; // 0x868
    bool m_bActiveRange; // 0x86c
    bool m_bAdditive; // 0x86d
    bool m_bCapsule; // 0x86e
    char pad_01[1];
}; // size: 0x870

/// C_OP_RtEnvCull
class __declspec(align(8)) C_OP_RtEnvCull0 {
public:
    char pad_00[464];
    Vector m_vecTestDir; // 0x1d0
    Vector m_vecTestNormal; // 0x1dc
    bool m_bCullOnMiss; // 0x1e8
    bool m_bStickInsteadOfCull; // 0x1e9
    char m_RtEnvName[128]; // 0x1ea
    int32_t m_nRTEnvCP; // 0x26c
    int32_t m_nComponent; // 0x270
    char pad_01[4];
}; // size: 0x278

/// C_OP_MovementLoopInsideSphere
class __declspec(align(8)) C_OP_MovementLoopInsideSphere0 {
public:
    char pad_00[464];
    int32_t m_nCP; // 0x1d0
    CParticleCollectionFloatInput m_flDistance; // 0x1d8
    CParticleCollectionVecInput m_vecScale; // 0x348
    ParticleAttributeIndex_t m_nDistSqrAttr; // 0xa00
    char pad_01[4];
}; // size: 0xa08

/// C_OP_MoveToHitbox
class __declspec(align(8)) C_OP_MoveToHitbox0 {
public:
    char pad_00[464];
    CParticleModelInput m_modelInput; // 0x1d0
    CParticleTransformInput m_transformInput; // 0x230
    char pad_01[4];
    float m_flLifeTimeLerpStart; // 0x29c
    float m_flLifeTimeLerpEnd; // 0x2a0
    float m_flPrevPosScale; // 0x2a4
    char m_HitboxSetName[128]; // 0x2a8
    bool m_bUseBones; // 0x328
    HitboxLerpType_t m_nLerpType; // 0x32c
    CPerParticleFloatInput m_flInterpolation; // 0x330
}; // size: 0x4a0

/// C_OP_LockToBone
class __declspec(align(8)) C_OP_LockToBone0 {
public:
    char pad_00[464];
    CParticleModelInput m_modelInput; // 0x1d0
    CParticleTransformInput m_transformInput; // 0x230
    float m_flLifeTimeFadeStart; // 0x298
    float m_flLifeTimeFadeEnd; // 0x29c
    float m_flJumpThreshold; // 0x2a0
    float m_flPrevPosScale; // 0x2a4
    char m_HitboxSetName[128]; // 0x2a8
    bool m_bRigid; // 0x328
    bool m_bUseBones; // 0x329
    ParticleAttributeIndex_t m_nFieldOutput; // 0x32c
    ParticleAttributeIndex_t m_nFieldOutputPrev; // 0x330
    ParticleRotationLockType_t m_nRotationSetType; // 0x334
    bool m_bRigidRotationLock; // 0x338
    CPerParticleVecInput m_vecRotation; // 0x340
    CPerParticleFloatInput m_flRotLerp; // 0x9f8
}; // size: 0xb68

/// C_OP_SnapshotRigidSkinToBones
class __declspec(align(8)) C_OP_SnapshotRigidSkinToBones0 {
public:
    char pad_00[464];
    bool m_bTransformNormals; // 0x1d0
    bool m_bTransformRadii; // 0x1d1
    int32_t m_nControlPointNumber; // 0x1d4
}; // size: 0x1d8

/// C_OP_SnapshotSkinToBones
class __declspec(align(8)) C_OP_SnapshotSkinToBones0 {
public:
    char pad_00[464];
    bool m_bTransformNormals; // 0x1d0
    bool m_bTransformRadii; // 0x1d1
    int32_t m_nControlPointNumber; // 0x1d4
    float m_flLifeTimeFadeStart; // 0x1d8
    float m_flLifeTimeFadeEnd; // 0x1dc
    float m_flJumpThreshold; // 0x1e0
    float m_flPrevPosScale; // 0x1e4
}; // size: 0x1e8

/// C_OP_CPOffsetToPercentageBetweenCPs
class __declspec(align(8)) C_OP_CPOffsetToPercentageBetweenCPs0 {
public:
    char pad_00[464];
    float m_flInputMin; // 0x1d0
    float m_flInputMax; // 0x1d4
    float m_flInputBias; // 0x1d8
    int32_t m_nStartCP; // 0x1dc
    int32_t m_nEndCP; // 0x1e0
    int32_t m_nOffsetCP; // 0x1e4
    int32_t m_nOuputCP; // 0x1e8
    int32_t m_nInputCP; // 0x1ec
    bool m_bRadialCheck; // 0x1f0
    bool m_bScaleOffset; // 0x1f1
    Vector m_vecOffset; // 0x1f4
}; // size: 0x200

/// C_OP_PlaneCull
class __declspec(align(8)) C_OP_PlaneCull0 {
public:
    char pad_00[464];
    int32_t m_nPlaneControlPoint; // 0x1d0
    CParticleCollectionVecInput m_vecPlaneDirection; // 0x1d8
    bool m_bLocalSpace; // 0x890
    float m_flPlaneOffset; // 0x894
}; // size: 0x898

/// C_OP_DistanceCull
class __declspec(align(8)) C_OP_DistanceCull0 {
public:
    char pad_00[464];
    int32_t m_nControlPoint; // 0x1d0
    Vector m_vecPointOffset; // 0x1d4
    CParticleCollectionFloatInput m_flDistance; // 0x1e0
    bool m_bCullInside; // 0x350
    ParticleAttributeIndex_t m_nAttribute; // 0x354
}; // size: 0x358

/// C_OP_ModelCull
class __declspec(align(8)) C_OP_ModelCull0 {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber; // 0x1d0
    bool m_bBoundBox; // 0x1d4
    bool m_bCullOutside; // 0x1d5
    bool m_bUseBones; // 0x1d6
    char m_HitboxSetName[128]; // 0x1d7
    char pad_01[1];
}; // size: 0x258

/// C_OP_ModelDampenMovement
class __declspec(align(8)) C_OP_ModelDampenMovement0 {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber; // 0x1d0
    bool m_bBoundBox; // 0x1d4
    bool m_bOutside; // 0x1d5
    bool m_bUseBones; // 0x1d6
    char m_HitboxSetName[128]; // 0x1d7
    CPerParticleVecInput m_vecPosOffset; // 0x258
    float m_fDrag; // 0x910
    char pad_01[4];
}; // size: 0x918

/// C_OP_SequenceFromModel
class __declspec(align(8)) C_OP_SequenceFromModel0 {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
    ParticleAttributeIndex_t m_nFieldOutputAnim; // 0x1d8
    float m_flInputMin; // 0x1dc
    float m_flInputMax; // 0x1e0
    float m_flOutputMin; // 0x1e4
    float m_flOutputMax; // 0x1e8
    ParticleSetMethod_t m_nSetMethod; // 0x1ec
}; // size: 0x1f0

/// C_OP_VelocityMatchingForce
class __declspec(align(8)) C_OP_VelocityMatchingForce0 {
public:
    char pad_00[464];
    float m_flDirScale; // 0x1d0
    float m_flSpdScale; // 0x1d4
    float m_flNeighborDistance; // 0x1d8
    float m_flFacingStrength; // 0x1dc
    bool m_bUseAABB; // 0x1e0
    int32_t m_nCPBroadcast; // 0x1e4
}; // size: 0x1e8

/// C_OP_MovementMaintainOffset
class __declspec(align(8)) C_OP_MovementMaintainOffset0 {
public:
    char pad_00[464];
    Vector m_vecOffset; // 0x1d0
    int32_t m_nCP; // 0x1dc
    bool m_bRadiusScale; // 0x1e0
    char pad_01[7];
}; // size: 0x1e8

/// C_OP_MovementPlaceOnGround
class __declspec(align(8)) C_OP_MovementPlaceOnGround0 {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flOffset; // 0x1d0
    float m_flMaxTraceLength; // 0x340
    float m_flTolerance; // 0x344
    float m_flTraceOffset; // 0x348
    float m_flLerpRate; // 0x34c
    char m_CollisionGroupName[128]; // 0x350
    ParticleTraceSet_t m_nTraceSet; // 0x3d0
    int32_t m_nRefCP1; // 0x3d4
    int32_t m_nRefCP2; // 0x3d8
    int32_t m_nLerpCP; // 0x3dc
    char pad_01[8];
    ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x3e8
    bool m_bIncludeShotHull; // 0x3ec
    bool m_bIncludeWater; // 0x3ed
    char pad_02[2];
    bool m_bSetNormal; // 0x3f0
    bool m_bScaleOffset; // 0x3f1
    int32_t m_nPreserveOffsetCP; // 0x3f4
    int32_t m_nIgnoreCP; // 0x3f8
    char pad_03[4];
}; // size: 0x400

/// C_OP_InheritFromParentParticles
class __declspec(align(8)) C_OP_InheritFromParentParticles0 {
public:
    char pad_00[464];
    float m_flScale; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
    int32_t m_nIncrement; // 0x1d8
    bool m_bRandomDistribution; // 0x1dc
    char pad_01[3];
}; // size: 0x1e0

/// C_OP_InheritFromParentParticlesV2
class __declspec(align(8)) C_OP_InheritFromParentParticlesV20 {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flScale; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x340
    CPerParticleFloatInput m_nIncrement; // 0x348
    bool m_bRandomDistribution; // 0x4b8
    bool m_bReverse; // 0x4b9
    MissingParentInheritBehavior_t m_nMissingParentBehavior; // 0x4bc
    CPerParticleFloatInput m_flInterpolation; // 0x4c0
}; // size: 0x630

/// C_OP_ReadFromNeighboringParticle
class __declspec(align(8)) C_OP_ReadFromNeighboringParticle0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldInput; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
    int32_t m_nIncrement; // 0x1d8
    CPerParticleFloatInput m_DistanceCheck; // 0x1e0
    CPerParticleFloatInput m_flInterpolation; // 0x350
}; // size: 0x4c0

/// C_OP_InheritFromPeerSystem
class __declspec(align(8)) C_OP_InheritFromPeerSystem0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    ParticleAttributeIndex_t m_nFieldInput; // 0x1d4
    int32_t m_nIncrement; // 0x1d8
    int32_t m_nGroupID; // 0x1dc
}; // size: 0x1e0

/// C_OP_RemapVectorComponentToScalar
class __declspec(align(8)) C_OP_RemapVectorComponentToScalar0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldInput; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
    int32_t m_nComponent; // 0x1d8
    char pad_01[4];
}; // size: 0x1e0

/// C_OP_OrientTo2dDirection
class __declspec(align(8)) C_OP_OrientTo2dDirection0 {
public:
    char pad_00[464];
    float m_flRotOffset; // 0x1d0
    float m_flSpinStrength; // 0x1d4
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8
    char pad_01[4];
}; // size: 0x1e0

/// C_OP_RestartAfterDuration
class __declspec(align(8)) C_OP_RestartAfterDuration0 {
public:
    char pad_00[464];
    float m_flDurationMin; // 0x1d0
    float m_flDurationMax; // 0x1d4
    int32_t m_nCP; // 0x1d8
    int32_t m_nCPField; // 0x1dc
    int32_t m_nChildGroupID; // 0x1e0
    bool m_bOnlyChildren; // 0x1e4
    char pad_01[3];
}; // size: 0x1e8

/// C_OP_Orient2DRelToCP
class __declspec(align(8)) C_OP_Orient2DRelToCP0 {
public:
    char pad_00[464];
    float m_flRotOffset; // 0x1d0
    float m_flSpinStrength; // 0x1d4
    int32_t m_nCP; // 0x1d8
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1dc
}; // size: 0x1e0

/// C_OP_MovementRotateParticleAroundAxis
class __declspec(align(8)) C_OP_MovementRotateParticleAroundAxis0 {
public:
    char pad_00[464];
    CParticleCollectionVecInput m_vecRotAxis; // 0x1d0
    CParticleCollectionFloatInput m_flRotRate; // 0x888
    CParticleTransformInput m_TransformInput; // 0x9f8
    bool m_bLocalSpace; // 0xa60
    char pad_01[7];
}; // size: 0xa68

/// C_OP_RotateVector
class __declspec(align(8)) C_OP_RotateVector0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    Vector m_vecRotAxisMin; // 0x1d4
    Vector m_vecRotAxisMax; // 0x1e0
    float m_flRotRateMin; // 0x1ec
    float m_flRotRateMax; // 0x1f0
    bool m_bNormalize; // 0x1f4
    CPerParticleFloatInput m_flScale; // 0x1f8
}; // size: 0x368

/// C_OP_MaxVelocity
class __declspec(align(8)) C_OP_MaxVelocity0 {
public:
    char pad_00[464];
    float m_flMaxVelocity; // 0x1d0
    float m_flMinVelocity; // 0x1d4
    int32_t m_nOverrideCP; // 0x1d8
    int32_t m_nOverrideCPField; // 0x1dc
}; // size: 0x1e0

/// C_OP_LagCompensation
class __declspec(align(8)) C_OP_LagCompensation0 {
public:
    char pad_00[464];
    int32_t m_nDesiredVelocityCP; // 0x1d0
    int32_t m_nLatencyCP; // 0x1d4
    int32_t m_nLatencyCPField; // 0x1d8
    int32_t m_nDesiredVelocityCPField; // 0x1dc
}; // size: 0x1e0

/// C_OP_MaintainSequentialPath
class __declspec(align(16)) C_OP_MaintainSequentialPath0 {
public:
    char pad_00[464];
    float m_fMaxDistance; // 0x1d0
    float m_flNumToAssign; // 0x1d4
    float m_flCohesionStrength; // 0x1d8
    float m_flTolerance; // 0x1dc
    bool m_bLoop; // 0x1e0
    bool m_bUseParticleCount; // 0x1e1
    CPathParameters m_PathParams; // 0x1f0
}; // size: 0x230

/// C_OP_LockToSavedSequentialPathV2
class __declspec(align(16)) C_OP_LockToSavedSequentialPathV20 {
public:
    char pad_00[464];
    float m_flFadeStart; // 0x1d0
    float m_flFadeEnd; // 0x1d4
    bool m_bCPPairs; // 0x1d8
    CPathParameters m_PathParams; // 0x1e0
}; // size: 0x220

/// C_OP_LockToSavedSequentialPath
class __declspec(align(16)) C_OP_LockToSavedSequentialPath0 {
public:
    char pad_00[468];
    float m_flFadeStart; // 0x1d4
    float m_flFadeEnd; // 0x1d8
    bool m_bCPPairs; // 0x1dc
    CPathParameters m_PathParams; // 0x1e0
}; // size: 0x220

/// C_OP_RemapDotProductToScalar
class __declspec(align(8)) C_OP_RemapDotProductToScalar0 {
public:
    char pad_00[464];
    int32_t m_nInputCP1; // 0x1d0
    int32_t m_nInputCP2; // 0x1d4
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8
    float m_flInputMin; // 0x1dc
    float m_flInputMax; // 0x1e0
    float m_flOutputMin; // 0x1e4
    float m_flOutputMax; // 0x1e8
    bool m_bUseParticleVelocity; // 0x1ec
    ParticleSetMethod_t m_nSetMethod; // 0x1f0
    bool m_bActiveRange; // 0x1f4
    bool m_bUseParticleNormal; // 0x1f5
    char pad_01[2];
}; // size: 0x1f8

/// C_OP_RemapCPtoScalar
class __declspec(align(8)) C_OP_RemapCPtoScalar0 {
public:
    char pad_00[464];
    int32_t m_nCPInput; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
    int32_t m_nField; // 0x1d8
    float m_flInputMin; // 0x1dc
    float m_flInputMax; // 0x1e0
    float m_flOutputMin; // 0x1e4
    float m_flOutputMax; // 0x1e8
    float m_flStartTime; // 0x1ec
    float m_flEndTime; // 0x1f0
    float m_flInterpRate; // 0x1f4
    ParticleSetMethod_t m_nSetMethod; // 0x1f8
    char pad_01[4];
}; // size: 0x200

/// C_OP_NormalLock
class __declspec(align(8)) C_OP_NormalLock0 {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber; // 0x1d0
    char pad_01[4];
}; // size: 0x1d8

/// C_OP_RemapCPtoVector
class __declspec(align(8)) C_OP_RemapCPtoVector0 {
public:
    char pad_00[464];
    int32_t m_nCPInput; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
    int32_t m_nLocalSpaceCP; // 0x1d8
    Vector m_vInputMin; // 0x1dc
    Vector m_vInputMax; // 0x1e8
    Vector m_vOutputMin; // 0x1f4
    Vector m_vOutputMax; // 0x200
    float m_flStartTime; // 0x20c
    float m_flEndTime; // 0x210
    float m_flInterpRate; // 0x214
    ParticleSetMethod_t m_nSetMethod; // 0x218
    bool m_bOffset; // 0x21c
    bool m_bAccelerate; // 0x21d
    char pad_01[2];
}; // size: 0x220

/// C_OP_SetCPtoVector
class __declspec(align(8)) C_OP_SetCPtoVector0 {
public:
    char pad_00[464];
    int32_t m_nCPInput; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
}; // size: 0x1d8

/// C_OP_RemapTransformToVelocity
class __declspec(align(8)) C_OP_RemapTransformToVelocity0 {
public:
    char pad_00[464];
    CParticleTransformInput m_TransformInput; // 0x1d0
}; // size: 0x238

/// C_OP_RemapVelocityToVector
class __declspec(align(8)) C_OP_RemapVelocityToVector0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    float m_flScale; // 0x1d4
    bool m_bNormalize; // 0x1d8
    char pad_01[7];
}; // size: 0x1e0

/// C_OP_RemapCPVelocityToVector
class __declspec(align(8)) C_OP_RemapCPVelocityToVector0 {
public:
    char pad_00[464];
    int32_t m_nControlPoint; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
    float m_flScale; // 0x1d8
    bool m_bNormalize; // 0x1dc
    char pad_01[3];
}; // size: 0x1e0

/// C_OP_SetCPOrientationToDirection
class __declspec(align(8)) C_OP_SetCPOrientationToDirection0 {
public:
    char pad_00[464];
    int32_t m_nInputControlPoint; // 0x1d0
    int32_t m_nOutputControlPoint; // 0x1d4
}; // size: 0x1d8

/// C_OP_RemapDirectionToCPToVector
class __declspec(align(8)) C_OP_RemapDirectionToCPToVector0 {
public:
    char pad_00[464];
    int32_t m_nCP; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
    float m_flScale; // 0x1d8
    float m_flOffsetRot; // 0x1dc
    Vector m_vecOffsetAxis; // 0x1e0
    bool m_bNormalize; // 0x1ec
    ParticleAttributeIndex_t m_nFieldStrength; // 0x1f0
    char pad_01[4];
}; // size: 0x1f8

/// C_OP_RemapCrossProductOfTwoVectorsToVector
class __declspec(align(8)) C_OP_RemapCrossProductOfTwoVectorsToVector0 {
public:
    char pad_00[464];
    CPerParticleVecInput m_InputVec1; // 0x1d0
    CPerParticleVecInput m_InputVec2; // 0x888
    ParticleAttributeIndex_t m_nFieldOutput; // 0xf40
    bool m_bNormalize; // 0xf44
    char pad_01[3];
}; // size: 0xf48

/// C_OP_NormalizeVector
class __declspec(align(8)) C_OP_NormalizeVector0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    float m_flScale; // 0x1d4
}; // size: 0x1d8

/// C_OP_RemapControlPointDirectionToVector
class __declspec(align(8)) C_OP_RemapControlPointDirectionToVector0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    float m_flScale; // 0x1d4
    int32_t m_nControlPointNumber; // 0x1d8
    char pad_01[4];
}; // size: 0x1e0

/// C_OP_SetCPOrientationToGroundNormal
class __declspec(align(8)) C_OP_SetCPOrientationToGroundNormal0 {
public:
    char pad_00[464];
    float m_flInterpRate; // 0x1d0
    float m_flMaxTraceLength; // 0x1d4
    float m_flTolerance; // 0x1d8
    float m_flTraceOffset; // 0x1dc
    char m_CollisionGroupName[128]; // 0x1e0
    ParticleTraceSet_t m_nTraceSet; // 0x260
    int32_t m_nInputCP; // 0x264
    int32_t m_nOutputCP; // 0x268
    char pad_01[12];
    bool m_bIncludeWater; // 0x278
    char pad_02[7];
}; // size: 0x280

/// C_OP_RemapTransformOrientationToRotations
class __declspec(align(8)) C_OP_RemapTransformOrientationToRotations0 {
public:
    char pad_00[464];
    CParticleTransformInput m_TransformInput; // 0x1d0
    Vector m_vecRotation; // 0x238
    bool m_bUseQuat; // 0x244
    bool m_bWriteNormal; // 0x245
    char pad_01[2];
}; // size: 0x248

/// C_OP_RemapControlPointOrientationToRotation
class __declspec(align(8)) C_OP_RemapControlPointOrientationToRotation0 {
public:
    char pad_00[464];
    int32_t m_nCP; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
    float m_flOffsetRot; // 0x1d8
    int32_t m_nComponent; // 0x1dc
}; // size: 0x1e0

/// C_OP_LockToPointList
class __declspec(align(8)) C_OP_LockToPointList0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    // CUtlVector< PointDefinition_t > m_pointList;
    char pad_01[28];
    bool m_bPlaceAlongPath; // 0x1f0
    bool m_bClosedLoop; // 0x1f1
    int32_t m_nNumPointsAlongPath; // 0x1f4
}; // size: 0x1f8

/// C_OP_RemapNamedModelElementOnceTimed
class __declspec(align(4)) C_OP_RemapNamedModelElementOnceTimed0 {
public:
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    // CUtlVector< CUtlString > m_inNames;
    // CUtlVector< CUtlString > m_outNames;
    // CUtlVector< CUtlString > m_fallbackNames;
    char pad_00[544];
    bool m_bModelFromRenderer; // 0x220
    bool m_bProportional; // 0x221
    ParticleAttributeIndex_t m_nFieldInput; // 0x224
    ParticleAttributeIndex_t m_nFieldOutput; // 0x228
    float m_flRemapTime; // 0x22c
}; // size: 0x230

/// C_OP_RemapNamedModelSequenceOnceTimed
class __declspec(align(8)) C_OP_RemapNamedModelSequenceOnceTimed0 {
public:
    char pad_00[560];
}; // size: 0x230

/// C_OP_RemapNamedModelBodyPartOnceTimed
class __declspec(align(8)) C_OP_RemapNamedModelBodyPartOnceTimed0 {
public:
    char pad_00[560];
}; // size: 0x230

/// C_OP_RemapNamedModelMeshGroupOnceTimed
class __declspec(align(8)) C_OP_RemapNamedModelMeshGroupOnceTimed0 {
public:
    char pad_00[560];
}; // size: 0x230

/// C_OP_RemapNamedModelElementEndCap
class __declspec(align(4)) C_OP_RemapNamedModelElementEndCap0 {
public:
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    // CUtlVector< CUtlString > m_inNames;
    // CUtlVector< CUtlString > m_outNames;
    // CUtlVector< CUtlString > m_fallbackNames;
    char pad_00[544];
    bool m_bModelFromRenderer; // 0x220
    ParticleAttributeIndex_t m_nFieldInput; // 0x224
    ParticleAttributeIndex_t m_nFieldOutput; // 0x228
    char pad_01[4];
}; // size: 0x230

/// C_OP_RemapNamedModelSequenceEndCap
class __declspec(align(8)) C_OP_RemapNamedModelSequenceEndCap0 {
public:
    char pad_00[560];
}; // size: 0x230

/// C_OP_RemapNamedModelBodyPartEndCap
class __declspec(align(8)) C_OP_RemapNamedModelBodyPartEndCap0 {
public:
    char pad_00[560];
}; // size: 0x230

/// C_OP_RemapNamedModelMeshGroupEndCap
class __declspec(align(8)) C_OP_RemapNamedModelMeshGroupEndCap0 {
public:
    char pad_00[560];
}; // size: 0x230

/// C_OP_SetFromCPSnapshot
class __declspec(align(8)) C_OP_SetFromCPSnapshot0 {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber; // 0x1d0
    // CUtlString m_strSnapshotSubset;
    char pad_01[12];
    ParticleAttributeIndex_t m_nAttributeToRead; // 0x1e0
    ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1e4
    int32_t m_nLocalSpaceCP; // 0x1e8
    bool m_bRandom; // 0x1ec
    bool m_bReverse; // 0x1ed
    int32_t m_nRandomSeed; // 0x1f0
    CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x1f8
    CParticleCollectionFloatInput m_nSnapShotIncrement; // 0x368
    CPerParticleFloatInput m_flInterpolation; // 0x4d8
    bool m_bSubSample; // 0x648
    bool m_bPrev; // 0x649
    char pad_02[6];
}; // size: 0x650

/// C_OP_VectorFieldSnapshot
class __declspec(align(8)) C_OP_VectorFieldSnapshot0 {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber; // 0x1d0
    ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1d4
    int32_t m_nLocalSpaceCP; // 0x1d8
    CPerParticleFloatInput m_flInterpolation; // 0x1e0
    CPerParticleVecInput m_vecScale; // 0x350
    float m_flBoundaryDampening; // 0xa08
    bool m_bSetVelocity; // 0xa0c
    bool m_bLockToSurface; // 0xa0d
    float m_flGridSpacing; // 0xa10
    char pad_01[4];
}; // size: 0xa18

/// C_OP_SetAttributeToScalarExpression
class __declspec(align(16)) C_OP_SetAttributeToScalarExpression0 {
public:
    char pad_00[464];
    ScalarExpressionType_t m_nExpression; // 0x1d0
    CPerParticleFloatInput m_flInput1; // 0x1d8
    CPerParticleFloatInput m_flInput2; // 0x348
    CParticleRemapFloatInput m_flOutputRemap; // 0x4b8
    ParticleAttributeIndex_t m_nOutputField; // 0x628
    ParticleSetMethod_t m_nSetMethod; // 0x62c
    char pad_01[32];
}; // size: 0x650

/// C_OP_SetVectorAttributeToVectorExpression
class __declspec(align(16)) C_OP_SetVectorAttributeToVectorExpression0 {
public:
    char pad_00[464];
    VectorExpressionType_t m_nExpression; // 0x1d0
    CPerParticleVecInput m_vInput1; // 0x1d8
    CPerParticleVecInput m_vInput2; // 0x890
    CPerParticleFloatInput m_flLerp; // 0xf48
    ParticleAttributeIndex_t m_nOutputField; // 0x10b8
    ParticleSetMethod_t m_nSetMethod; // 0x10bc
    bool m_bNormalizedOutput; // 0x10c0
    char pad_01[111];
}; // size: 0x1130

/// C_OP_SetFloatAttributeToVectorExpression
class __declspec(align(8)) C_OP_SetFloatAttributeToVectorExpression0 {
public:
    char pad_00[464];
    VectorFloatExpressionType_t m_nExpression; // 0x1d0
    CPerParticleVecInput m_vInput1; // 0x1d8
    CPerParticleVecInput m_vInput2; // 0x890
    CParticleRemapFloatInput m_flOutputRemap; // 0xf48
    ParticleAttributeIndex_t m_nOutputField; // 0x10b8
    ParticleSetMethod_t m_nSetMethod; // 0x10bc
}; // size: 0x10c0

/// C_OP_RemapGravityToVector
class __declspec(align(16)) C_OP_RemapGravityToVector0 {
public:
    char pad_00[464];
    CPerParticleVecInput m_vInput1; // 0x1d0
    ParticleAttributeIndex_t m_nOutputField; // 0x888
    ParticleSetMethod_t m_nSetMethod; // 0x88c
    bool m_bNormalizedOutput; // 0x890
    char pad_01[111];
}; // size: 0x900

/// C_OP_MovementSkinnedPositionFromCPSnapshot
class __declspec(align(8)) C_OP_MovementSkinnedPositionFromCPSnapshot0 {
public:
    char pad_00[464];
    int32_t m_nSnapshotControlPointNumber; // 0x1d0
    int32_t m_nControlPointNumber; // 0x1d4
    bool m_bRandom; // 0x1d8
    int32_t m_nRandomSeed; // 0x1dc
    bool m_bSetNormal; // 0x1e0
    bool m_bSetRadius; // 0x1e1
    SnapshotIndexType_t m_nIndexType; // 0x1e4
    CPerParticleFloatInput m_flReadIndex; // 0x1e8
    CParticleCollectionFloatInput m_flIncrement; // 0x358
    CParticleCollectionFloatInput m_nFullLoopIncrement; // 0x4c8
    CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x638
    CPerParticleFloatInput m_flInterpolation; // 0x7a8
}; // size: 0x918

/// C_OP_MovementMoveAlongSkinnedCPSnapshot
class __declspec(align(8)) C_OP_MovementMoveAlongSkinnedCPSnapshot0 {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber; // 0x1d0
    int32_t m_nSnapshotControlPointNumber; // 0x1d4
    bool m_bSetNormal; // 0x1d8
    bool m_bSetRadius; // 0x1d9
    CPerParticleFloatInput m_flInterpolation; // 0x1e0
    CPerParticleFloatInput m_flTValue; // 0x350
}; // size: 0x4c0

/// C_OP_QuantizeFloat
class __declspec(align(16)) C_OP_QuantizeFloat0 {
public:
    char pad_00[464];
    CPerParticleFloatInput m_InputValue; // 0x1d0
    ParticleAttributeIndex_t m_nOutputField; // 0x340
    char pad_01[44];
}; // size: 0x370

/// C_OP_SetUserEvent
class __declspec(align(8)) C_OP_SetUserEvent0 {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flInput; // 0x1d0
    CPerParticleFloatInput m_flRisingEdge; // 0x340
    EventTypeSelection_t m_nRisingEventType; // 0x4b0
    CPerParticleFloatInput m_flFallingEdge; // 0x4b8
    EventTypeSelection_t m_nFallingEventType; // 0x628
    char pad_01[4];
}; // size: 0x630

/// C_OP_SetFloatCollection
class __declspec(align(16)) C_OP_SetFloatCollection0 {
public:
    char pad_00[464];
    CParticleCollectionFloatInput m_InputValue; // 0x1d0
    ParticleAttributeIndex_t m_nOutputField; // 0x340
    ParticleSetMethod_t m_nSetMethod; // 0x344
    CParticleCollectionFloatInput m_Lerp; // 0x348
    char pad_01[40];
}; // size: 0x4e0

/// C_OP_SetFloat
class __declspec(align(16)) C_OP_SetFloat0 {
public:
    char pad_00[464];
    CPerParticleFloatInput m_InputValue; // 0x1d0
    ParticleAttributeIndex_t m_nOutputField; // 0x340
    ParticleSetMethod_t m_nSetMethod; // 0x344
    CPerParticleFloatInput m_Lerp; // 0x348
    char pad_01[40];
}; // size: 0x4e0

/// C_OP_SetVec
class __declspec(align(8)) C_OP_SetVec0 {
public:
    char pad_00[464];
    CPerParticleVecInput m_InputValue; // 0x1d0
    ParticleAttributeIndex_t m_nOutputField; // 0x888
    ParticleSetMethod_t m_nSetMethod; // 0x88c
    CPerParticleFloatInput m_Lerp; // 0x890
    bool m_bNormalizedOutput; // 0xa00
    char pad_01[7];
}; // size: 0xa08

/// C_OP_DragRelativeToPlane
class __declspec(align(8)) C_OP_DragRelativeToPlane0 {
public:
    char pad_00[464];
    CParticleCollectionFloatInput m_flDragAtPlane; // 0x1d0
    CParticleCollectionFloatInput m_flFalloff; // 0x340
    bool m_bDirectional; // 0x4b0
    CParticleCollectionVecInput m_vecPlaneNormal; // 0x4b8
    int32_t m_nControlPointNumber; // 0xb70
    char pad_01[4];
}; // size: 0xb78

/// C_OP_RemapDensityGradientToVectorAttribute
class __declspec(align(8)) C_OP_RemapDensityGradientToVectorAttribute0 {
public:
    char pad_00[464];
    float m_flRadiusScale; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
}; // size: 0x1d8

/// C_OP_LockPoints
class __declspec(align(8)) C_OP_LockPoints0 {
public:
    char pad_00[464];
    int32_t m_nMinCol; // 0x1d0
    int32_t m_nMaxCol; // 0x1d4
    int32_t m_nMinRow; // 0x1d8
    int32_t m_nMaxRow; // 0x1dc
    int32_t m_nControlPoint; // 0x1e0
    float m_flBlendValue; // 0x1e4
}; // size: 0x1e8

/// C_OP_RemapDistanceToLineSegmentBase
class __declspec(align(4)) C_OP_RemapDistanceToLineSegmentBase0 {
public:
    char pad_00[464];
    int32_t m_nCP0; // 0x1d0
    int32_t m_nCP1; // 0x1d4
    float m_flMinInputValue; // 0x1d8
    float m_flMaxInputValue; // 0x1dc
    bool m_bInfiniteLine; // 0x1e0
    char pad_01[7];
}; // size: 0x1e8

/// C_OP_RemapDistanceToLineSegmentToScalar
class __declspec(align(8)) C_OP_RemapDistanceToLineSegmentToScalar0 {
public:
    char pad_00[488];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1e8
    float m_flMinOutputValue; // 0x1ec
    float m_flMaxOutputValue; // 0x1f0
    char pad_01[4];
}; // size: 0x1f8

/// C_OP_RemapDistanceToLineSegmentToVector
class __declspec(align(8)) C_OP_RemapDistanceToLineSegmentToVector0 {
public:
    char pad_00[488];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1e8
    Vector m_vMinOutputValue; // 0x1ec
    Vector m_vMaxOutputValue; // 0x1f8
    char pad_01[4];
}; // size: 0x208

/// C_OP_TeleportBeam
class __declspec(align(8)) C_OP_TeleportBeam0 {
public:
    char pad_00[464];
    int32_t m_nCPPosition; // 0x1d0
    int32_t m_nCPVelocity; // 0x1d4
    int32_t m_nCPMisc; // 0x1d8
    int32_t m_nCPColor; // 0x1dc
    int32_t m_nCPInvalidColor; // 0x1e0
    int32_t m_nCPExtraArcData; // 0x1e4
    Vector m_vGravity; // 0x1e8
    float m_flArcMaxDuration; // 0x1f4
    float m_flSegmentBreak; // 0x1f8
    float m_flArcSpeed; // 0x1fc
    float m_flAlpha; // 0x200
    char pad_01[4];
}; // size: 0x208

/// C_OP_CycleScalar
class __declspec(align(8)) C_OP_CycleScalar0 {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nDestField; // 0x1d0
    float m_flStartValue; // 0x1d4
    float m_flEndValue; // 0x1d8
    float m_flCycleTime; // 0x1dc
    bool m_bDoNotRepeatCycle; // 0x1e0
    bool m_bSynchronizeParticles; // 0x1e1
    int32_t m_nCPScale; // 0x1e4
    int32_t m_nCPFieldMin; // 0x1e8
    int32_t m_nCPFieldMax; // 0x1ec
    ParticleSetMethod_t m_nSetMethod; // 0x1f0
    char pad_01[4];
}; // size: 0x1f8

/// C_OP_CalculateVectorAttribute
class __declspec(align(8)) C_OP_CalculateVectorAttribute0 {
public:
    char pad_00[464];
    Vector m_vStartValue; // 0x1d0
    ParticleAttributeIndex_t m_nFieldInput1; // 0x1dc
    float m_flInputScale1; // 0x1e0
    ParticleAttributeIndex_t m_nFieldInput2; // 0x1e4
    float m_flInputScale2; // 0x1e8
    ControlPointReference_t m_nControlPointInput1; // 0x1ec
    float m_flControlPointScale1; // 0x200
    ControlPointReference_t m_nControlPointInput2; // 0x204
    float m_flControlPointScale2; // 0x218
    ParticleAttributeIndex_t m_nFieldOutput; // 0x21c
    Vector m_vFinalOutputScale; // 0x220
    char pad_01[4];
}; // size: 0x230

/// C_OP_ColorAdjustHSL
class __declspec(align(8)) C_OP_ColorAdjustHSL0 {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flHueAdjust; // 0x1d0
    CPerParticleFloatInput m_flSaturationAdjust; // 0x340
    CPerParticleFloatInput m_flLightnessAdjust; // 0x4b0
}; // size: 0x620

/// C_OP_ConnectParentParticleToNearest
class __declspec(align(8)) C_OP_ConnectParentParticleToNearest0 {
public:
    char pad_00[464];
    int32_t m_nFirstControlPoint; // 0x1d0
    int32_t m_nSecondControlPoint; // 0x1d4
    bool m_bUseRadius; // 0x1d8
    CParticleCollectionFloatInput m_flRadiusScale; // 0x1e0
    CParticleCollectionFloatInput m_flParentRadiusScale; // 0x350
}; // size: 0x4c0

/// C_OP_UpdateLightSource
class __declspec(align(8)) C_OP_UpdateLightSource0 {
public:
    // Color m_vColorTint;
    char pad_00[468];
    float m_flBrightnessScale; // 0x1d4
    float m_flRadiusScale; // 0x1d8
    float m_flMinimumLightingRadius; // 0x1dc
    float m_flMaximumLightingRadius; // 0x1e0
    float m_flPositionDampingConstant; // 0x1e4
}; // size: 0x1e8

/// C_OP_RemapSpeedtoCP
class __declspec(align(8)) C_OP_RemapSpeedtoCP0 {
public:
    char pad_00[472];
    int32_t m_nInControlPointNumber; // 0x1d8
    int32_t m_nOutControlPointNumber; // 0x1dc
    int32_t m_nField; // 0x1e0
    float m_flInputMin; // 0x1e4
    float m_flInputMax; // 0x1e8
    float m_flOutputMin; // 0x1ec
    float m_flOutputMax; // 0x1f0
    bool m_bUseDeltaV; // 0x1f4
    char pad_01[3];
}; // size: 0x1f8

/// C_OP_RemapAverageHitboxSpeedtoCP
class __declspec(align(8)) C_OP_RemapAverageHitboxSpeedtoCP0 {
public:
    char pad_00[472];
    int32_t m_nInControlPointNumber; // 0x1d8
    int32_t m_nOutControlPointNumber; // 0x1dc
    int32_t m_nField; // 0x1e0
    ParticleHitboxDataSelection_t m_nHitboxDataType; // 0x1e4
    CParticleCollectionFloatInput m_flInputMin; // 0x1e8
    CParticleCollectionFloatInput m_flInputMax; // 0x358
    CParticleCollectionFloatInput m_flOutputMin; // 0x4c8
    CParticleCollectionFloatInput m_flOutputMax; // 0x638
    int32_t m_nHeightControlPointNumber; // 0x7a8
    CParticleCollectionVecInput m_vecComparisonVelocity; // 0x7b0
    char m_HitboxSetName[128]; // 0xe68
}; // size: 0xee8

/// C_OP_RemapDotProductToCP
class __declspec(align(8)) C_OP_RemapDotProductToCP0 {
public:
    char pad_00[472];
    int32_t m_nInputCP1; // 0x1d8
    int32_t m_nInputCP2; // 0x1dc
    int32_t m_nOutputCP; // 0x1e0
    int32_t m_nOutVectorField; // 0x1e4
    CParticleCollectionFloatInput m_flInputMin; // 0x1e8
    CParticleCollectionFloatInput m_flInputMax; // 0x358
    CParticleCollectionFloatInput m_flOutputMin; // 0x4c8
    CParticleCollectionFloatInput m_flOutputMax; // 0x638
}; // size: 0x7a8

/// C_OP_SetControlPointFieldToScalarExpression
class __declspec(align(8)) C_OP_SetControlPointFieldToScalarExpression0 {
public:
    char pad_00[472];
    ScalarExpressionType_t m_nExpression; // 0x1d8
    CParticleCollectionFloatInput m_flInput1; // 0x1e0
    CParticleCollectionFloatInput m_flInput2; // 0x350
    CParticleRemapFloatInput m_flOutputRemap; // 0x4c0
    int32_t m_nOutputCP; // 0x630
    int32_t m_nOutVectorField; // 0x634
    CParticleCollectionFloatInput m_flInterpolation; // 0x638
}; // size: 0x7a8

/// C_OP_SetControlPointFieldFromVectorExpression
class __declspec(align(8)) C_OP_SetControlPointFieldFromVectorExpression0 {
public:
    char pad_00[472];
    VectorFloatExpressionType_t m_nExpression; // 0x1d8
    CParticleCollectionVecInput m_vecInput1; // 0x1e0
    CParticleCollectionVecInput m_vecInput2; // 0x898
    CPerParticleFloatInput m_flLerp; // 0xf50
    CParticleRemapFloatInput m_flOutputRemap; // 0x10c0
    int32_t m_nOutputCP; // 0x1230
    int32_t m_nOutVectorField; // 0x1234
}; // size: 0x1238

/// C_OP_SetControlPointToVectorExpression
class __declspec(align(8)) C_OP_SetControlPointToVectorExpression0 {
public:
    char pad_00[472];
    VectorExpressionType_t m_nExpression; // 0x1d8
    int32_t m_nOutputCP; // 0x1dc
    CParticleCollectionVecInput m_vInput1; // 0x1e0
    CParticleCollectionVecInput m_vInput2; // 0x898
    CPerParticleFloatInput m_flLerp; // 0xf50
    bool m_bNormalizedOutput; // 0x10c0
    char pad_01[7];
}; // size: 0x10c8

/// C_OP_RemapModelVolumetoCP
class __declspec(align(8)) C_OP_RemapModelVolumetoCP0 {
public:
    char pad_00[472];
    BBoxVolumeType_t m_nBBoxType; // 0x1d8
    int32_t m_nInControlPointNumber; // 0x1dc
    int32_t m_nOutControlPointNumber; // 0x1e0
    int32_t m_nOutControlPointMaxNumber; // 0x1e4
    int32_t m_nField; // 0x1e8
    float m_flInputMin; // 0x1ec
    float m_flInputMax; // 0x1f0
    float m_flOutputMin; // 0x1f4
    float m_flOutputMax; // 0x1f8
    bool m_bBBoxOnly; // 0x1fc
    bool m_bCubeRoot; // 0x1fd
    char pad_01[2];
}; // size: 0x200

/// C_OP_RemapBoundingVolumetoCP
class __declspec(align(8)) C_OP_RemapBoundingVolumetoCP0 {
public:
    char pad_00[472];
    int32_t m_nOutControlPointNumber; // 0x1d8
    float m_flInputMin; // 0x1dc
    float m_flInputMax; // 0x1e0
    float m_flOutputMin; // 0x1e4
    float m_flOutputMax; // 0x1e8
    char pad_01[4];
}; // size: 0x1f0

/// C_OP_RemapAverageScalarValuetoCP
class __declspec(align(8)) C_OP_RemapAverageScalarValuetoCP0 {
public:
    char pad_00[472];
    SetStatisticExpressionType_t m_nExpression; // 0x1d8
    CParticleCollectionFloatInput m_flDecimalPlaces; // 0x1e0
    int32_t m_nOutControlPointNumber; // 0x350
    int32_t m_nOutVectorField; // 0x354
    ParticleAttributeIndex_t m_nField; // 0x358
    CParticleRemapFloatInput m_flOutputRemap; // 0x360
}; // size: 0x4d0

/// C_OP_RampCPLinearRandom
class __declspec(align(8)) C_OP_RampCPLinearRandom0 {
public:
    char pad_00[472];
    int32_t m_nOutControlPointNumber; // 0x1d8
    Vector m_vecRateMin; // 0x1dc
    Vector m_vecRateMax; // 0x1e8
    char pad_01[4];
}; // size: 0x1f8

/// C_OP_SetParentControlPointsToChildCP
class __declspec(align(8)) C_OP_SetParentControlPointsToChildCP0 {
public:
    char pad_00[472];
    int32_t m_nChildGroupID; // 0x1d8
    int32_t m_nChildControlPoint; // 0x1dc
    int32_t m_nNumControlPoints; // 0x1e0
    int32_t m_nFirstSourcePoint; // 0x1e4
    bool m_bSetOrientation; // 0x1e8
    char pad_01[7];
}; // size: 0x1f0

/// C_OP_SetVariable
class __declspec(align(8)) C_OP_SetVariable0 {
public:
    char pad_00[472];
    CParticleVariableRef m_variableReference; // 0x1d8
    CParticleTransformInput m_transformInput; // 0x228
    Vector m_positionOffset; // 0x290
    QAngle m_rotationOffset; // 0x29c
    CParticleCollectionVecInput m_vecInput; // 0x2a8
    CParticleCollectionFloatInput m_floatInput; // 0x960
}; // size: 0xad0

/// C_OP_SetControlPointPositions
class __declspec(align(8)) C_OP_SetControlPointPositions0 {
public:
    char pad_00[472];
    bool m_bUseWorldLocation; // 0x1d8
    bool m_bOrient; // 0x1d9
    bool m_bSetOnce; // 0x1da
    int32_t m_nCP1; // 0x1dc
    int32_t m_nCP2; // 0x1e0
    int32_t m_nCP3; // 0x1e4
    int32_t m_nCP4; // 0x1e8
    Vector m_vecCP1Pos; // 0x1ec
    Vector m_vecCP2Pos; // 0x1f8
    Vector m_vecCP3Pos; // 0x204
    Vector m_vecCP4Pos; // 0x210
    int32_t m_nHeadLocation; // 0x21c
}; // size: 0x220

/// C_OP_SetSingleControlPointPosition
class __declspec(align(8)) C_OP_SetSingleControlPointPosition0 {
public:
    char pad_00[472];
    bool m_bSetOnce; // 0x1d8
    int32_t m_nCP1; // 0x1dc
    CParticleCollectionVecInput m_vecCP1Pos; // 0x1e0
    CParticleTransformInput m_transformInput; // 0x898
}; // size: 0x900

/// C_OP_SetControlPointPositionToRandomActiveCP
class __declspec(align(8)) C_OP_SetControlPointPositionToRandomActiveCP0 {
public:
    char pad_00[472];
    int32_t m_nCP1; // 0x1d8
    int32_t m_nHeadLocationMin; // 0x1dc
    int32_t m_nHeadLocationMax; // 0x1e0
    CParticleCollectionFloatInput m_flResetRate; // 0x1e8
}; // size: 0x358

/// C_OP_SetRandomControlPointPosition
class __declspec(align(8)) C_OP_SetRandomControlPointPosition0 {
public:
    char pad_00[472];
    bool m_bUseWorldLocation; // 0x1d8
    bool m_bOrient; // 0x1d9
    int32_t m_nCP1; // 0x1dc
    int32_t m_nHeadLocation; // 0x1e0
    CParticleCollectionFloatInput m_flReRandomRate; // 0x1e8
    Vector m_vecCPMinPos; // 0x358
    Vector m_vecCPMaxPos; // 0x364
    CParticleCollectionFloatInput m_flInterpolation; // 0x370
}; // size: 0x4e0

/// C_OP_SetControlPointOrientation
class __declspec(align(8)) C_OP_SetControlPointOrientation0 {
public:
    char pad_00[472];
    bool m_bUseWorldLocation; // 0x1d8
    char pad_01[1];
    bool m_bRandomize; // 0x1da
    bool m_bSetOnce; // 0x1db
    int32_t m_nCP; // 0x1dc
    int32_t m_nHeadLocation; // 0x1e0
    QAngle m_vecRotation; // 0x1e4
    QAngle m_vecRotationB; // 0x1f0
    CParticleCollectionFloatInput m_flInterpolation; // 0x200
}; // size: 0x370

/// C_OP_SetControlPointFromObjectScale
class __declspec(align(8)) C_OP_SetControlPointFromObjectScale0 {
public:
    char pad_00[472];
    int32_t m_nCPInput; // 0x1d8
    int32_t m_nCPOutput; // 0x1dc
}; // size: 0x1e0

/// C_OP_DistanceBetweenCPsToCP
class __declspec(align(8)) C_OP_DistanceBetweenCPsToCP0 {
public:
    char pad_00[472];
    int32_t m_nStartCP; // 0x1d8
    int32_t m_nEndCP; // 0x1dc
    int32_t m_nOutputCP; // 0x1e0
    int32_t m_nOutputCPField; // 0x1e4
    bool m_bSetOnce; // 0x1e8
    float m_flInputMin; // 0x1ec
    float m_flInputMax; // 0x1f0
    float m_flOutputMin; // 0x1f4
    float m_flOutputMax; // 0x1f8
    float m_flMaxTraceLength; // 0x1fc
    float m_flLOSScale; // 0x200
    bool m_bLOS; // 0x204
    char m_CollisionGroupName[128]; // 0x205
    ParticleTraceSet_t m_nTraceSet; // 0x288
    ParticleParentSetMode_t m_nSetParent; // 0x28c
}; // size: 0x290

/// C_OP_SetControlPointToPlayer
class __declspec(align(8)) C_OP_SetControlPointToPlayer0 {
public:
    char pad_00[472];
    int32_t m_nCP1; // 0x1d8
    Vector m_vecCP1Pos; // 0x1dc
    bool m_bOrientToEyes; // 0x1e8
    ParticleEntityPos_t m_nPosition; // 0x1ec
}; // size: 0x1f0

/// C_OP_SetControlPointToHand
class __declspec(align(8)) C_OP_SetControlPointToHand0 {
public:
    char pad_00[472];
    int32_t m_nCP1; // 0x1d8
    int32_t m_nHand; // 0x1dc
    Vector m_vecCP1Pos; // 0x1e0
    bool m_bOrientToHand; // 0x1ec
    char pad_01[3];
}; // size: 0x1f0

/// C_OP_SetControlPointToHMD
class __declspec(align(8)) C_OP_SetControlPointToHMD0 {
public:
    char pad_00[472];
    int32_t m_nCP1; // 0x1d8
    Vector m_vecCP1Pos; // 0x1dc
    bool m_bOrientToHMD; // 0x1e8
    char pad_01[7];
}; // size: 0x1f0

/// C_OP_SetControlPointPositionToTimeOfDayValue
class __declspec(align(8)) C_OP_SetControlPointPositionToTimeOfDayValue0 {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber; // 0x1d8
    char m_pszTimeOfDayParameter[128]; // 0x1dc
    Vector m_vecDefaultValue; // 0x25c
    char pad_01[8];
}; // size: 0x270

/// C_OP_SetControlPointToCenter
class __declspec(align(8)) C_OP_SetControlPointToCenter0 {
public:
    char pad_00[472];
    int32_t m_nCP1; // 0x1d8
    Vector m_vecCP1Pos; // 0x1dc
    bool m_bUseAvgParticlePos; // 0x1e8
    ParticleParentSetMode_t m_nSetParent; // 0x1ec
}; // size: 0x1f0

/// C_OP_SetControlPointToCPVelocity
class __declspec(align(8)) C_OP_SetControlPointToCPVelocity0 {
public:
    char pad_00[472];
    int32_t m_nCPInput; // 0x1d8
    int32_t m_nCPOutputVel; // 0x1dc
    bool m_bNormalize; // 0x1e0
    int32_t m_nCPOutputMag; // 0x1e4
    int32_t m_nCPField; // 0x1e8
    CParticleCollectionVecInput m_vecComparisonVelocity; // 0x1f0
}; // size: 0x8a8

/// C_OP_SetControlPointOrientationToCPVelocity
class __declspec(align(8)) C_OP_SetControlPointOrientationToCPVelocity0 {
public:
    char pad_00[472];
    int32_t m_nCPInput; // 0x1d8
    int32_t m_nCPOutput; // 0x1dc
}; // size: 0x1e0

/// C_OP_StopAfterCPDuration
class __declspec(align(8)) C_OP_StopAfterCPDuration0 {
public:
    char pad_00[472];
    CParticleCollectionFloatInput m_flDuration; // 0x1d8
    bool m_bDestroyImmediately; // 0x348
    bool m_bPlayEndCap; // 0x349
    char pad_01[6];
}; // size: 0x350

/// C_OP_SetControlPointRotation
class __declspec(align(8)) C_OP_SetControlPointRotation0 {
public:
    char pad_00[472];
    CParticleCollectionVecInput m_vecRotAxis; // 0x1d8
    CParticleCollectionFloatInput m_flRotRate; // 0x890
    int32_t m_nCP; // 0xa00
    int32_t m_nLocalCP; // 0xa04
}; // size: 0xa08

/// C_OP_RemapCPtoCP
class __declspec(align(8)) C_OP_RemapCPtoCP0 {
public:
    char pad_00[472];
    int32_t m_nInputControlPoint; // 0x1d8
    int32_t m_nOutputControlPoint; // 0x1dc
    int32_t m_nInputField; // 0x1e0
    int32_t m_nOutputField; // 0x1e4
    float m_flInputMin; // 0x1e8
    float m_flInputMax; // 0x1ec
    float m_flOutputMin; // 0x1f0
    float m_flOutputMax; // 0x1f4
    bool m_bDerivative; // 0x1f8
    float m_flInterpRate; // 0x1fc
}; // size: 0x200

/// C_OP_HSVShiftToCP
class __declspec(align(8)) C_OP_HSVShiftToCP0 {
public:
    char pad_00[472];
    int32_t m_nColorCP; // 0x1d8
    int32_t m_nColorGemEnableCP; // 0x1dc
    int32_t m_nOutputCP; // 0x1e0
    // Color m_DefaultHSVColor;
    char pad_01[20];
}; // size: 0x1f8

/// C_OP_SetControlPointToImpactPoint
class __declspec(align(8)) C_OP_SetControlPointToImpactPoint0 {
public:
    char pad_00[472];
    int32_t m_nCPOut; // 0x1d8
    int32_t m_nCPIn; // 0x1dc
    float m_flUpdateRate; // 0x1e0
    CParticleCollectionFloatInput m_flTraceLength; // 0x1e8
    float m_flStartOffset; // 0x358
    float m_flOffset; // 0x35c
    Vector m_vecTraceDir; // 0x360
    char m_CollisionGroupName[128]; // 0x36c
    ParticleTraceSet_t m_nTraceSet; // 0x3ec
    bool m_bSetToEndpoint; // 0x3f0
    bool m_bTraceToClosestSurface; // 0x3f1
    bool m_bIncludeWater; // 0x3f2
    char pad_01[5];
}; // size: 0x3f8

/// C_OP_SetCPOrientationToPointAtCP
class __declspec(align(8)) C_OP_SetCPOrientationToPointAtCP0 {
public:
    char pad_00[472];
    int32_t m_nInputCP; // 0x1d8
    int32_t m_nOutputCP; // 0x1dc
    CParticleCollectionFloatInput m_flInterpolation; // 0x1e0
    bool m_b2DOrientation; // 0x350
    bool m_bAvoidSingularity; // 0x351
    bool m_bPointAway; // 0x352
    char pad_01[5];
}; // size: 0x358

/// C_OP_EnableChildrenFromParentParticleCount
class __declspec(align(8)) C_OP_EnableChildrenFromParentParticleCount0 {
public:
    char pad_00[472];
    int32_t m_nChildGroupID; // 0x1d8
    int32_t m_nFirstChild; // 0x1dc
    CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x1e0
    bool m_bDisableChildren; // 0x350
    bool m_bPlayEndcapOnStop; // 0x351
    bool m_bDestroyImmediately; // 0x352
    char pad_01[5];
}; // size: 0x358

/// C_OP_SelectivelyEnableChildren
class __declspec(align(8)) C_OP_SelectivelyEnableChildren0 {
public:
    char pad_00[472];
    CParticleCollectionFloatInput m_nChildGroupID; // 0x1d8
    CParticleCollectionFloatInput m_nFirstChild; // 0x348
    CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x4b8
    bool m_bPlayEndcapOnStop; // 0x628
    bool m_bDestroyImmediately; // 0x629
    char pad_01[6];
}; // size: 0x630

/// C_OP_PlayEndCapWhenFinished
class __declspec(align(8)) C_OP_PlayEndCapWhenFinished0 {
public:
    char pad_00[472];
    bool m_bFireOnEmissionEnd; // 0x1d8
    bool m_bIncludeChildren; // 0x1d9
    char pad_01[6];
}; // size: 0x1e0

/// C_OP_ForceControlPointStub
class __declspec(align(8)) C_OP_ForceControlPointStub0 {
public:
    char pad_00[472];
    int32_t m_ControlPoint; // 0x1d8
    char pad_01[4];
}; // size: 0x1e0

/// C_OP_DriveCPFromGlobalSoundFloat
class __declspec(align(8)) C_OP_DriveCPFromGlobalSoundFloat0 {
public:
    char pad_00[472];
    int32_t m_nOutputControlPoint; // 0x1d8
    int32_t m_nOutputField; // 0x1dc
    float m_flInputMin; // 0x1e0
    float m_flInputMax; // 0x1e4
    float m_flOutputMin; // 0x1e8
    float m_flOutputMax; // 0x1ec
    // CUtlString m_StackName;
    // CUtlString m_OperatorName;
    // CUtlString m_FieldName;
    char pad_01[32];
}; // size: 0x210

/// C_OP_SetControlPointFieldToWater
class __declspec(align(8)) C_OP_SetControlPointFieldToWater0 {
public:
    char pad_00[472];
    int32_t m_nSourceCP; // 0x1d8
    int32_t m_nDestCP; // 0x1dc
    int32_t m_nCPField; // 0x1e0
    char pad_01[4];
}; // size: 0x1e8

/// C_OP_SetControlPointToWaterSurface
class __declspec(align(8)) C_OP_SetControlPointToWaterSurface0 {
public:
    char pad_00[472];
    int32_t m_nSourceCP; // 0x1d8
    int32_t m_nDestCP; // 0x1dc
    int32_t m_nFlowCP; // 0x1e0
    int32_t m_nActiveCP; // 0x1e4
    int32_t m_nActiveCPField; // 0x1e8
    CParticleCollectionFloatInput m_flRetestRate; // 0x1f0
    bool m_bAdaptiveThreshold; // 0x360
    char pad_01[7];
}; // size: 0x368

/// C_OP_RepeatedTriggerChildGroup
class __declspec(align(8)) C_OP_RepeatedTriggerChildGroup0 {
public:
    char pad_00[472];
    int32_t m_nChildGroupID; // 0x1d8
    CParticleCollectionFloatInput m_flClusterRefireTime; // 0x1e0
    CParticleCollectionFloatInput m_flClusterSize; // 0x350
    CParticleCollectionFloatInput m_flClusterCooldown; // 0x4c0
    bool m_bLimitChildCount; // 0x630
    char pad_01[7];
}; // size: 0x638

/// C_OP_ChooseRandomChildrenInGroup
class __declspec(align(8)) C_OP_ChooseRandomChildrenInGroup0 {
public:
    char pad_00[472];
    int32_t m_nChildGroupID; // 0x1d8
    CParticleCollectionFloatInput m_flNumberOfChildren; // 0x1e0
}; // size: 0x350

/// C_OP_SetSimulationRate
class __declspec(align(8)) C_OP_SetSimulationRate0 {
public:
    char pad_00[472];
    CParticleCollectionFloatInput m_flSimulationScale; // 0x1d8
}; // size: 0x348

/// C_OP_ControlPointToRadialScreenSpace
class __declspec(align(8)) C_OP_ControlPointToRadialScreenSpace0 {
public:
    char pad_00[472];
    int32_t m_nCPIn; // 0x1d8
    Vector m_vecCP1Pos; // 0x1dc
    int32_t m_nCPOut; // 0x1e8
    int32_t m_nCPOutField; // 0x1ec
    int32_t m_nCPSSPosOut; // 0x1f0
    char pad_01[4];
}; // size: 0x1f8

/// C_OP_LightningSnapshotGenerator
class __declspec(align(8)) C_OP_LightningSnapshotGenerator0 {
public:
    char pad_00[472];
    int32_t m_nCPSnapshot; // 0x1d8
    int32_t m_nCPStartPnt; // 0x1dc
    int32_t m_nCPEndPnt; // 0x1e0
    CParticleCollectionFloatInput m_flSegments; // 0x1e8
    CParticleCollectionFloatInput m_flOffset; // 0x358
    CParticleCollectionFloatInput m_flOffsetDecay; // 0x4c8
    CParticleCollectionFloatInput m_flRecalcRate; // 0x638
    CParticleCollectionFloatInput m_flUVScale; // 0x7a8
    CParticleCollectionFloatInput m_flUVOffset; // 0x918
    CParticleCollectionFloatInput m_flSplitRate; // 0xa88
    CParticleCollectionFloatInput m_flBranchTwist; // 0xbf8
    ParticleLightnintBranchBehavior_t m_nBranchBehavior; // 0xd68
    CParticleCollectionFloatInput m_flRadiusStart; // 0xd70
    CParticleCollectionFloatInput m_flRadiusEnd; // 0xee0
    CParticleCollectionFloatInput m_flDedicatedPool; // 0x1050
}; // size: 0x11c0

/// C_OP_ModelSurfaceSnapshotGenerator
class __declspec(align(8)) C_OP_ModelSurfaceSnapshotGenerator0 {
public:
    char pad_00[472];
    int32_t m_nCPSnapshot; // 0x1d8
    CParticleModelInput m_modelInput; // 0x1e0
    CParticleCollectionFloatInput m_flRecalcRate; // 0x240
    CParticleCollectionFloatInput m_flUSpacing; // 0x3b0
    CParticleCollectionFloatInput m_flVSpacing; // 0x520
    CParticleCollectionFloatInput m_flSurfaceOffset; // 0x690
    bool m_bSetNormal; // 0x800
    bool m_bSetUp; // 0x801
    bool m_bSetGravity; // 0x802
    bool m_bSetUV; // 0x803
    char pad_01[4];
}; // size: 0x808

/// C_OP_RemapExternalWindToCP
class __declspec(align(8)) C_OP_RemapExternalWindToCP0 {
public:
    char pad_00[472];
    int32_t m_nCP; // 0x1d8
    int32_t m_nCPOutput; // 0x1dc
    CParticleCollectionVecInput m_vecScale; // 0x1e0
    bool m_bSetMagnitude; // 0x898
    int32_t m_nOutVectorField; // 0x89c
}; // size: 0x8a0

/// C_OP_SetGravityToCP
class __declspec(align(8)) C_OP_SetGravityToCP0 {
public:
    char pad_00[472];
    int32_t m_nCPInput; // 0x1d8
    int32_t m_nCPOutput; // 0x1dc
    CParticleCollectionFloatInput m_flScale; // 0x1e0
    bool m_bSetOrientation; // 0x350
    bool m_bSetZDown; // 0x351
    char pad_01[6];
}; // size: 0x358

/// C_OP_QuantizeCPComponent
class __declspec(align(8)) C_OP_QuantizeCPComponent0 {
public:
    char pad_00[472];
    CParticleCollectionFloatInput m_flInputValue; // 0x1d8
    int32_t m_nCPOutput; // 0x348
    int32_t m_nOutVectorField; // 0x34c
    CParticleCollectionFloatInput m_flQuantizeValue; // 0x350
}; // size: 0x4c0

/// C_OP_RenderPoints
class __declspec(align(8)) C_OP_RenderPoints0 {
public:
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial;
    char pad_00[552];
}; // size: 0x228

/// CBaseTrailRenderer
class __declspec(align(8)) CBaseTrailRenderer0 {
public:
    char pad_00[11752];
    ParticleOrientationChoiceList_t m_nOrientationType; // 0x2de8
    int32_t m_nOrientationControlPoint; // 0x2dec
    float m_flMinSize; // 0x2df0
    float m_flMaxSize; // 0x2df4
    CParticleCollectionRendererFloatInput m_flStartFadeSize; // 0x2df8
    CParticleCollectionRendererFloatInput m_flEndFadeSize; // 0x2f68
    bool m_bClampV; // 0x30d8
    char pad_01[7];
}; // size: 0x30e0

/// C_OP_RenderTrails
class __declspec(align(8)) C_OP_RenderTrails0 {
public:
    char pad_00[12512];
    bool m_bEnableFadingAndClamping; // 0x30e0
    float m_flStartFadeDot; // 0x30e4
    float m_flEndFadeDot; // 0x30e8
    ParticleAttributeIndex_t m_nPrevPntSource; // 0x30ec
    float m_flMaxLength; // 0x30f0
    float m_flMinLength; // 0x30f4
    bool m_bIgnoreDT; // 0x30f8
    float m_flConstrainRadiusToLengthRatio; // 0x30fc
    float m_flLengthScale; // 0x3100
    float m_flLengthFadeInTime; // 0x3104
    CPerParticleFloatInput m_flRadiusHeadTaper; // 0x3108
    CParticleCollectionVecInput m_vecHeadColorScale; // 0x3278
    CPerParticleFloatInput m_flHeadAlphaScale; // 0x3930
    CPerParticleFloatInput m_flRadiusTaper; // 0x3aa0
    CParticleCollectionVecInput m_vecTailColorScale; // 0x3c10
    CPerParticleFloatInput m_flTailAlphaScale; // 0x42c8
    ParticleAttributeIndex_t m_nHorizCropField; // 0x4438
    ParticleAttributeIndex_t m_nVertCropField; // 0x443c
    float m_flForwardShift; // 0x4440
    bool m_bFlipUVBasedOnPitchYaw; // 0x4444
    char pad_01[3];
}; // size: 0x4448

/// C_OP_RenderRopes
class __declspec(align(8)) C_OP_RenderRopes0 {
public:
    char pad_00[11752];
    bool m_bEnableFadingAndClamping; // 0x2de8
    float m_flMinSize; // 0x2dec
    float m_flMaxSize; // 0x2df0
    float m_flStartFadeSize; // 0x2df4
    float m_flEndFadeSize; // 0x2df8
    float m_flStartFadeDot; // 0x2dfc
    float m_flEndFadeDot; // 0x2e00
    float m_flRadiusTaper; // 0x2e04
    int32_t m_nMinTesselation; // 0x2e08
    int32_t m_nMaxTesselation; // 0x2e0c
    float m_flTessScale; // 0x2e10
    CParticleCollectionRendererFloatInput m_flTextureVWorldSize; // 0x2e18
    CParticleCollectionRendererFloatInput m_flTextureVScrollRate; // 0x2f88
    CParticleCollectionRendererFloatInput m_flTextureVOffset; // 0x30f8
    int32_t m_nTextureVParamsCP; // 0x3268
    bool m_bClampV; // 0x326c
    int32_t m_nScaleCP1; // 0x3270
    int32_t m_nScaleCP2; // 0x3274
    float m_flScaleVSizeByControlPointDistance; // 0x3278
    float m_flScaleVScrollByControlPointDistance; // 0x327c
    float m_flScaleVOffsetByControlPointDistance; // 0x3280
    char pad_01[1];
    bool m_bUseScalarForTextureCoordinate; // 0x3285
    ParticleAttributeIndex_t m_nScalarFieldForTextureCoordinate; // 0x3288
    float m_flScalarAttributeTextureCoordScale; // 0x328c
    bool m_bReverseOrder; // 0x3290
    bool m_bClosedLoop; // 0x3291
    ParticleAttributeIndex_t m_nSplitField; // 0x3294
    bool m_bSortBySegmentID; // 0x3298
    ParticleOrientationChoiceList_t m_nOrientationType; // 0x329c
    ParticleAttributeIndex_t m_nVectorFieldForOrientation; // 0x32a0
    bool m_bDrawAsOpaque; // 0x32a4
    bool m_bGenerateNormals; // 0x32a5
    char pad_02[2];
}; // size: 0x32a8

/// C_OP_RenderAsModels
class __declspec(align(8)) C_OP_RenderAsModels0 {
public:
    // CUtlVector< ModelReference_t > m_ModelList;
    char pad_00[572];
    float m_flModelScale; // 0x23c
    bool m_bFitToModelSize; // 0x240
    bool m_bNonUniformScaling; // 0x241
    ParticleAttributeIndex_t m_nXAxisScalingAttribute; // 0x244
    ParticleAttributeIndex_t m_nYAxisScalingAttribute; // 0x248
    ParticleAttributeIndex_t m_nZAxisScalingAttribute; // 0x24c
    int32_t m_nSizeCullBloat; // 0x250
    char pad_01[4];
}; // size: 0x258

/// C_OP_RenderLights
class __declspec(align(8)) C_OP_RenderLights0 {
public:
    char pad_00[552];
    float m_flAnimationRate; // 0x228
    AnimationType_t m_nAnimationType; // 0x22c
    bool m_bAnimateInFPS; // 0x230
    float m_flMinSize; // 0x234
    float m_flMaxSize; // 0x238
    float m_flStartFadeSize; // 0x23c
    float m_flEndFadeSize; // 0x240
    char pad_01[4];
}; // size: 0x248

/// C_OP_RenderBlobs
class __declspec(align(8)) C_OP_RenderBlobs0 {
public:
    char pad_00[544];
    CParticleCollectionRendererFloatInput m_cubeWidth; // 0x220
    CParticleCollectionRendererFloatInput m_cutoffRadius; // 0x390
    CParticleCollectionRendererFloatInput m_renderRadius; // 0x500
    uint32_t m_nVertexCountKb; // 0x670
    uint32_t m_nIndexCountKb; // 0x674
    int32_t m_nScaleCP; // 0x678
    // CUtlVector< MaterialVariable_t > m_MaterialVars;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial;
    char pad_01[60];
}; // size: 0x6b8

/// C_OP_RenderGpuImplicit
class __declspec(align(8)) C_OP_RenderGpuImplicit0 {
public:
    char pad_00[544];
    bool m_bUsePerParticleRadius; // 0x220
    uint32_t m_nVertexCountKb; // 0x224
    uint32_t m_nIndexCountKb; // 0x228
    CParticleCollectionRendererFloatInput m_fGridSize; // 0x230
    CParticleCollectionRendererFloatInput m_fRadiusScale; // 0x3a0
    CParticleCollectionRendererFloatInput m_fIsosurfaceThreshold; // 0x510
    int32_t m_nScaleCP; // 0x680
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial;
    char pad_01[12];
}; // size: 0x690

/// C_OP_RenderScreenVelocityRotate
class __declspec(align(8)) C_OP_RenderScreenVelocityRotate0 {
public:
    char pad_00[544];
    float m_flRotateRateDegrees; // 0x220
    float m_flForwardDegrees; // 0x224
}; // size: 0x228

/// C_OP_RenderModels
class __declspec(align(8)) C_OP_RenderModels0 {
public:
    char pad_00[544];
    bool m_bOnlyRenderInEffectsBloomPass; // 0x220
    bool m_bOnlyRenderInEffectsWaterPass; // 0x221
    bool m_bUseMixedResolutionRendering; // 0x222
    bool m_bOnlyRenderInEffecsGameOverlay; // 0x223
    // CUtlVector< ModelReference_t > m_ModelList;
    char pad_01[28];
    ParticleAttributeIndex_t m_nBodyGroupField; // 0x240
    ParticleAttributeIndex_t m_nSubModelField; // 0x244
    bool m_bIgnoreNormal; // 0x248
    bool m_bOrientZ; // 0x249
    bool m_bCenterOffset; // 0x24a
    CPerParticleVecInput m_vecLocalOffset; // 0x250
    CPerParticleVecInput m_vecLocalRotation; // 0x908
    bool m_bIgnoreRadius; // 0xfc0
    int32_t m_nModelScaleCP; // 0xfc4
    CPerParticleVecInput m_vecComponentScale; // 0xfc8
    bool m_bLocalScale; // 0x1680
    int32_t m_nSizeCullBloat; // 0x1684
    bool m_bAnimated; // 0x1688
    CPerParticleFloatInput m_flAnimationRate; // 0x1690
    bool m_bScaleAnimationRate; // 0x1800
    bool m_bForceLoopingAnimation; // 0x1801
    bool m_bResetAnimOnStop; // 0x1802
    bool m_bManualAnimFrame; // 0x1803
    ParticleAttributeIndex_t m_nAnimationScaleField; // 0x1804
    ParticleAttributeIndex_t m_nAnimationField; // 0x1808
    ParticleAttributeIndex_t m_nManualFrameField; // 0x180c
    char m_ActivityName[256]; // 0x1810
    char m_SequenceName[256]; // 0x1910
    bool m_bEnableClothSimulation; // 0x1a10
    char m_ClothEffectName[64]; // 0x1a11
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial;
    char pad_02[15];
    bool m_bOverrideTranslucentMaterials; // 0x1a60
    CPerParticleFloatInput m_nSkin; // 0x1a68
    // CUtlVector< MaterialVariable_t > m_MaterialVars;
    char pad_03[24];
    CPerParticleFloatInput m_flRenderFilter; // 0x1bf0
    CPerParticleFloatInput m_flManualModelSelection; // 0x1d60
    CParticleModelInput m_modelInput; // 0x1ed0
    int32_t m_nLOD; // 0x1f30
    char m_EconSlotName[256]; // 0x1f34
    bool m_bOriginalModel; // 0x2034
    bool m_bSuppressTint; // 0x2035
    RenderModelSubModelFieldType_t m_nSubModelFieldType; // 0x2038
    bool m_bDisableShadows; // 0x203c
    bool m_bDisableDepthPrepass; // 0x203d
    bool m_bAcceptsDecals; // 0x203e
    bool m_bForceDrawInterlevedWithSiblings; // 0x203f
    bool m_bDoNotDrawInParticlePass; // 0x2040
    bool m_bAllowApproximateTransforms; // 0x2041
    char m_szRenderAttribute[260]; // 0x2042
    CParticleCollectionFloatInput m_flRadiusScale; // 0x2148
    CParticleCollectionFloatInput m_flAlphaScale; // 0x22b8
    CParticleCollectionFloatInput m_flRollScale; // 0x2428
    ParticleAttributeIndex_t m_nAlpha2Field; // 0x2598
    CParticleCollectionVecInput m_vecColorScale; // 0x25a0
    ParticleColorBlendType_t m_nColorBlendType; // 0x2c58
    char pad_04[68];
}; // size: 0x2ca0

/// C_OP_RenderSimpleModelCollection
class __declspec(align(8)) C_OP_RenderSimpleModelCollection0 {
public:
    char pad_00[544];
    bool m_bCenterOffset; // 0x220
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    char pad_01[8];
    CParticleModelInput m_modelInput; // 0x230
    CParticleCollectionFloatInput m_fSizeCullScale; // 0x290
    bool m_bDisableShadows; // 0x400
    bool m_bDisableMotionBlur; // 0x401
    bool m_bAcceptsDecals; // 0x402
    CPerParticleFloatInput m_fDrawFilter; // 0x408
    ParticleAttributeIndex_t m_nAngularVelocityField; // 0x578
    char pad_02[20];
}; // size: 0x590

/// C_OP_RenderMaterialProxy
class __declspec(align(8)) C_OP_RenderMaterialProxy0 {
public:
    char pad_00[544];
    int32_t m_nMaterialControlPoint; // 0x220
    MaterialProxyType_t m_nProxyType; // 0x224
    // CUtlVector< MaterialVariable_t > m_MaterialVars;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial;
    char pad_01[32];
    CParticleCollectionFloatInput m_flMaterialOverrideEnabled; // 0x248
    CParticleCollectionVecInput m_vecColorScale; // 0x3b8
    CPerParticleFloatInput m_flAlpha; // 0xa70
    ParticleColorBlendType_t m_nColorBlendType; // 0xbe0
    char pad_02[28];
}; // size: 0xc00

/// C_OP_RenderProjected
class __declspec(align(8)) C_OP_RenderProjected0 {
public:
    char pad_00[544];
    bool m_bProjectCharacter; // 0x220
    bool m_bProjectWorld; // 0x221
    bool m_bProjectWater; // 0x222
    bool m_bFlipHorizontal; // 0x223
    bool m_bEnableProjectedDepthControls; // 0x224
    float m_flMinProjectionDepth; // 0x228
    float m_flMaxProjectionDepth; // 0x22c
    // CUtlVector< RenderProjectedMaterial_t > m_vecProjectedMaterials;
    char pad_01[24];
    CPerParticleFloatInput m_flMaterialSelection; // 0x248
    float m_flAnimationTimeScale; // 0x3b8
    bool m_bOrientToNormal; // 0x3bc
    // CUtlVector< MaterialVariable_t > m_MaterialVars;
    char pad_02[24];
    CParticleCollectionFloatInput m_flRadiusScale; // 0x3d8
    CParticleCollectionFloatInput m_flAlphaScale; // 0x548
    CParticleCollectionFloatInput m_flRollScale; // 0x6b8
    ParticleAttributeIndex_t m_nAlpha2Field; // 0x828
    CParticleCollectionVecInput m_vecColorScale; // 0x830
    ParticleColorBlendType_t m_nColorBlendType; // 0xee8
    char pad_03[28];
}; // size: 0xf08

/// C_OP_RenderDeferredLight
class __declspec(align(8)) C_OP_RenderDeferredLight0 {
public:
    char pad_00[544];
    bool m_bUseAlphaTestWindow; // 0x220
    bool m_bUseTexture; // 0x221
    float m_flRadiusScale; // 0x224
    float m_flAlphaScale; // 0x228
    ParticleAttributeIndex_t m_nAlpha2Field; // 0x22c
    CParticleCollectionVecInput m_vecColorScale; // 0x230
    ParticleColorBlendType_t m_nColorBlendType; // 0x8e8
    float m_flLightDistance; // 0x8ec
    float m_flStartFalloff; // 0x8f0
    float m_flDistanceFalloff; // 0x8f4
    float m_flSpotFoV; // 0x8f8
    ParticleAttributeIndex_t m_nAlphaTestPointField; // 0x8fc
    ParticleAttributeIndex_t m_nAlphaTestRangeField; // 0x900
    ParticleAttributeIndex_t m_nAlphaTestSharpnessField; // 0x904
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hTexture;
    char pad_01[8];
    int32_t m_nHSVShiftControlPoint; // 0x910
    char pad_02[4];
}; // size: 0x918

/// C_OP_RenderStandardLight
class __declspec(align(8)) C_OP_RenderStandardLight0 {
public:
    char pad_00[544];
    ParticleLightTypeChoiceList_t m_nLightType; // 0x220
    CParticleCollectionVecInput m_vecColorScale; // 0x228
    ParticleColorBlendType_t m_nColorBlendType; // 0x8e0
    CPerParticleFloatInput m_flIntensity; // 0x8e8
    bool m_bCastShadows; // 0xa58
    CParticleCollectionFloatInput m_flTheta; // 0xa60
    CParticleCollectionFloatInput m_flPhi; // 0xbd0
    CParticleCollectionFloatInput m_flRadiusMultiplier; // 0xd40
    StandardLightingAttenuationStyle_t m_nAttenuationStyle; // 0xeb0
    CParticleCollectionFloatInput m_flFalloffLinearity; // 0xeb8
    CParticleCollectionFloatInput m_flFiftyPercentFalloff; // 0x1028
    CParticleCollectionFloatInput m_flZeroPercentFalloff; // 0x1198
    bool m_bRenderDiffuse; // 0x1308
    bool m_bRenderSpecular; // 0x1309
    // CUtlString m_lightCookie;
    char pad_01[12];
    int32_t m_nPriority; // 0x1318
    ParticleLightFogLightingMode_t m_nFogLightingMode; // 0x131c
    CParticleCollectionRendererFloatInput m_flFogContribution; // 0x1320
    ParticleLightBehaviorChoiceList_t m_nCapsuleLightBehavior; // 0x1490
    float m_flCapsuleLength; // 0x1494
    bool m_bReverseOrder; // 0x1498
    bool m_bClosedLoop; // 0x1499
    ParticleAttributeIndex_t m_nPrevPntSource; // 0x149c
    float m_flMaxLength; // 0x14a0
    float m_flMinLength; // 0x14a4
    bool m_bIgnoreDT; // 0x14a8
    float m_flConstrainRadiusToLengthRatio; // 0x14ac
    float m_flLengthScale; // 0x14b0
    float m_flLengthFadeInTime; // 0x14b4
    char pad_02[8];
}; // size: 0x14c0

/// C_OP_RenderOmni2Light
class __declspec(align(8)) C_OP_RenderOmni2Light0 {
public:
    char pad_00[544];
    ParticleOmni2LightTypeChoiceList_t m_nLightType; // 0x220
    CParticleCollectionVecInput m_vColorBlend; // 0x228
    ParticleColorBlendType_t m_nColorBlendType; // 0x8e0
    ParticleLightUnitChoiceList_t m_nBrightnessUnit; // 0x8e4
    CPerParticleFloatInput m_flBrightnessLumens; // 0x8e8
    CPerParticleFloatInput m_flBrightnessCandelas; // 0xa58
    bool m_bCastShadows; // 0xbc8
    bool m_bFog; // 0xbc9
    CPerParticleFloatInput m_flFogScale; // 0xbd0
    CPerParticleFloatInput m_flLuminaireRadius; // 0xd40
    CPerParticleFloatInput m_flSkirt; // 0xeb0
    CPerParticleFloatInput m_flRange; // 0x1020
    CPerParticleFloatInput m_flInnerConeAngle; // 0x1190
    CPerParticleFloatInput m_flOuterConeAngle; // 0x1300
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie;
    char pad_01[8];
    bool m_bSphericalCookie; // 0x1478
    char pad_02[15];
}; // size: 0x1488

/// C_OP_RenderLightBeam
class __declspec(align(8)) C_OP_RenderLightBeam0 {
public:
    char pad_00[544];
    CParticleCollectionVecInput m_vColorBlend; // 0x220
    ParticleColorBlendType_t m_nColorBlendType; // 0x8d8
    CParticleCollectionFloatInput m_flBrightnessLumensPerMeter; // 0x8e0
    bool m_bCastShadows; // 0xa50
    CParticleCollectionFloatInput m_flSkirt; // 0xa58
    CParticleCollectionFloatInput m_flRange; // 0xbc8
    CParticleCollectionFloatInput m_flThickness; // 0xd38
}; // size: 0xea8

/// C_OP_RenderClothForce
class __declspec(align(8)) C_OP_RenderClothForce0 {
public:
    char pad_00[544];
}; // size: 0x220

/// C_OP_Callback
class __declspec(align(8)) C_OP_Callback0 {
public:
    char pad_00[544];
}; // size: 0x220

/// C_OP_GameLiquidSpill
class __declspec(align(8)) C_OP_GameLiquidSpill0 {
public:
    char pad_00[544];
    CParticleCollectionFloatInput m_flLiquidContentsField; // 0x220
    CParticleCollectionFloatInput m_flExpirationTime; // 0x390
    ParticleAttributeIndex_t m_nAmountAttribute; // 0x500
    char pad_01[4];
}; // size: 0x508

/// C_OP_RenderScreenShake
class __declspec(align(8)) C_OP_RenderScreenShake0 {
public:
    char pad_00[544];
    float m_flDurationScale; // 0x220
    float m_flRadiusScale; // 0x224
    float m_flFrequencyScale; // 0x228
    float m_flAmplitudeScale; // 0x22c
    ParticleAttributeIndex_t m_nRadiusField; // 0x230
    ParticleAttributeIndex_t m_nDurationField; // 0x234
    ParticleAttributeIndex_t m_nFrequencyField; // 0x238
    ParticleAttributeIndex_t m_nAmplitudeField; // 0x23c
    int32_t m_nFilterCP; // 0x240
    char pad_01[4];
}; // size: 0x248

/// C_OP_RenderPostProcessing
class __declspec(align(8)) C_OP_RenderPostProcessing0 {
public:
    char pad_00[544];
    CPerParticleFloatInput m_flPostProcessStrength; // 0x220
    // CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostTexture;
    char pad_01[8];
    ParticlePostProcessPriorityGroup_t m_nPriority; // 0x398
    char pad_02[4];
}; // size: 0x3a0

/// C_OP_RenderSound
class __declspec(align(8)) C_OP_RenderSound0 {
public:
    char pad_00[544];
    float m_flDurationScale; // 0x220
    float m_flSndLvlScale; // 0x224
    float m_flPitchScale; // 0x228
    float m_flVolumeScale; // 0x22c
    ParticleAttributeIndex_t m_nSndLvlField; // 0x230
    ParticleAttributeIndex_t m_nDurationField; // 0x234
    ParticleAttributeIndex_t m_nPitchField; // 0x238
    ParticleAttributeIndex_t m_nVolumeField; // 0x23c
    int32_t m_nChannel; // 0x240
    int32_t m_nCPReference; // 0x244
    char m_pszSoundName[256]; // 0x248
    bool m_bSuppressStopSoundEvent; // 0x348
    char pad_01[7];
}; // size: 0x350

/// C_OP_RenderStatusEffect
class __declspec(align(8)) C_OP_RenderStatusEffect0 {
public:
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureColorWarp;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDetail2;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDiffuseWarp;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureFresnelColorWarp;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureFresnelWarp;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureSpecularWarp;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureEnvMap;
    char pad_00[600];
}; // size: 0x258

/// C_OP_RenderStatusEffectCitadel
class __declspec(align(8)) C_OP_RenderStatusEffectCitadel0 {
public:
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureColorWarp;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureNormal;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureMetalness;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureRoughness;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureSelfIllum;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDetail;
    char pad_00[592];
}; // size: 0x250

/// C_OP_RenderFlattenGrass
class __declspec(align(8)) C_OP_RenderFlattenGrass0 {
public:
    char pad_00[544];
    float m_flFlattenStrength; // 0x220
    ParticleAttributeIndex_t m_nStrengthFieldOverride; // 0x224
    float m_flRadiusScale; // 0x228
    char pad_01[4];
}; // size: 0x230

/// C_OP_RenderTreeShake
class __declspec(align(8)) C_OP_RenderTreeShake0 {
public:
    char pad_00[544];
    float m_flPeakStrength; // 0x220
    ParticleAttributeIndex_t m_nPeakStrengthFieldOverride; // 0x224
    float m_flRadius; // 0x228
    ParticleAttributeIndex_t m_nRadiusFieldOverride; // 0x22c
    float m_flShakeDuration; // 0x230
    float m_flTransitionTime; // 0x234
    float m_flTwistAmount; // 0x238
    float m_flRadialAmount; // 0x23c
    float m_flControlPointOrientationAmount; // 0x240
    int32_t m_nControlPointForLinearDirection; // 0x244
}; // size: 0x248

/// C_OP_RenderText
class __declspec(align(8)) C_OP_RenderText0 {
public:
    // Color m_OutlineColor;
    // CUtlString m_DefaultText;
    char pad_00[560];
}; // size: 0x230

/// C_OP_RenderVRHapticEvent
class __declspec(align(8)) C_OP_RenderVRHapticEvent0 {
public:
    char pad_00[544];
    ParticleVRHandChoiceList_t m_nHand; // 0x220
    int32_t m_nOutputHandCP; // 0x224
    int32_t m_nOutputField; // 0x228
    CPerParticleFloatInput m_flAmplitude; // 0x230
}; // size: 0x3a0

/// C_OP_ClientPhysics
class __declspec(align(8)) C_OP_ClientPhysics0 {
public:
    // CUtlString m_strPhysicsType;
    char pad_00[552];
    bool m_bStartAsleep; // 0x228
    CParticleCollectionFloatInput m_flPlayerWakeRadius; // 0x230
    CParticleCollectionFloatInput m_flVehicleWakeRadius; // 0x3a0
    bool m_bUseHighQualitySimulation; // 0x510
    int32_t m_nMaxParticleCount; // 0x514
    bool m_bRespectExclusionVolumes; // 0x518
    bool m_bKillParticles; // 0x519
    bool m_bDeleteSim; // 0x51a
    int32_t m_nControlPoint; // 0x51c
    int32_t m_nForcedSimId; // 0x520
    ParticleColorBlendType_t m_nColorBlendType; // 0x524
    ParticleAttrBoxFlags_t m_nForcedStatusEffects; // 0x528
    char pad_01[4];
}; // size: 0x530

/// C_OP_RenderClientPhysicsImpulse
class __declspec(align(8)) C_OP_RenderClientPhysicsImpulse0 {
public:
    char pad_00[544];
    CPerParticleFloatInput m_flRadius; // 0x220
    CPerParticleFloatInput m_flMagnitude; // 0x390
    int32_t m_nSimIdFilter; // 0x500
    char pad_01[4];
}; // size: 0x508

/// C_OP_GameDecalRenderer
class __declspec(align(8)) C_OP_GameDecalRenderer0 {
public:
    // CGlobalSymbol m_sDecalGroupName;
    char pad_00[552];
    EventTypeSelection_t m_nEventType; // 0x228
    ParticleCollisionMask_t m_nInteractionMask; // 0x230
    ParticleCollisionGroup_t m_nCollisionGroup; // 0x238
    CPerParticleVecInput m_vecStartPos; // 0x240
    CPerParticleVecInput m_vecEndPos; // 0x8f8
    CPerParticleFloatInput m_flTraceBloat; // 0xfb0
    CPerParticleFloatInput m_flDecalSize; // 0x1120
    CPerParticleFloatInput m_nDecalGroupIndex; // 0x1290
    CPerParticleFloatInput m_flDecalRotation; // 0x1400
    CPerParticleVecInput m_vModulationColor; // 0x1570
    bool m_bUseGameDefaultDecalSize; // 0x1c28
    bool m_bRandomDecalRotation; // 0x1c29
    bool m_bRandomlySelectDecalInGroup; // 0x1c2a
    bool m_bNoDecalsOnOwner; // 0x1c2b
    bool m_bVisualizeTraces; // 0x1c2c
    char pad_01[3];
}; // size: 0x1c30

/// C_OP_WaterImpulseRenderer
class __declspec(align(8)) C_OP_WaterImpulseRenderer0 {
public:
    char pad_00[544];
    CPerParticleVecInput m_vecPos; // 0x220
    CPerParticleFloatInput m_flRadius; // 0x8d8
    CPerParticleFloatInput m_flMagnitude; // 0xa48
    CPerParticleFloatInput m_flShape; // 0xbb8
    CPerParticleFloatInput m_flWindSpeed; // 0xd28
    CPerParticleFloatInput m_flWobble; // 0xe98
    bool m_bIsRadialWind; // 0x1008
    EventTypeSelection_t m_nEventType; // 0x100c
}; // size: 0x1010

/// C_OP_CreateParticleSystemRenderer
class __declspec(align(8)) C_OP_CreateParticleSystemRenderer0 {
public:
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hEffect;
    char pad_00[552];
    EventTypeSelection_t m_nEventType; // 0x228
    // CUtlLeanVector< CPAssignment_t > m_vecCPs;
    // CUtlString m_szParticleConfig;
    char pad_01[24];
    CPerParticleVecInput m_AggregationPos; // 0x248
}; // size: 0x900

#ifdef __cplusplus
#pragma warning(pop)
#endif // __cplusplus