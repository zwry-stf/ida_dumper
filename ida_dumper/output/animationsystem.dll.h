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


/// AnimValueSource
_enum AnimValueSource0 : uint32_t {
    MoveHeading = 0,
    MoveSpeed = 1,
    ForwardSpeed = 2,
    StrafeSpeed = 3,
    FacingHeading = 4,
    LookHeading = 5,
    LookHeadingNormalized = 6,
    LookPitch = 7,
    LookDistance = 8,
    Parameter = 9,
    WayPointHeading = 10,
    WayPointDistance = 11,
    BoundaryRadius = 12,
    TargetMoveHeading = 13,
    TargetMoveSpeed = 14,
    AccelerationHeading = 15,
    AccelerationSpeed = 16,
    SlopeHeading = 17,
    SlopeAngle = 18,
    SlopePitch = 19,
    SlopeYaw = 20,
    GoalDistance = 21,
    AccelerationLeftRight = 22,
    AccelerationFrontBack = 23,
    RootMotionSpeed = 24,
    RootMotionTurnSpeed = 25,
    MoveHeadingRelativeToLookHeading = 26,
    MaxMoveSpeed = 27,
    FingerCurl_Thumb = 28,
    FingerCurl_Index = 29,
    FingerCurl_Middle = 30,
    FingerCurl_Ring = 31,
    FingerCurl_Pinky = 32,
    FingerSplay_Thumb_Index = 33,
    FingerSplay_Index_Middle = 34,
    FingerSplay_Middle_Ring = 35,
    FingerSplay_Ring_Pinky = 36,
};

/// MoodType_t
_enum MoodType_t0 : uint32_t {
    eMoodType_Head = 0,
    eMoodType_Body = 1,
};

/// AnimationProcessingType_t
_enum AnimationProcessingType_t0 : uint32_t {
    ANIMATION_PROCESSING_SERVER_SIMULATION = 0,
    ANIMATION_PROCESSING_CLIENT_SIMULATION = 1,
    ANIMATION_PROCESSING_CLIENT_PREDICTION = 2,
    ANIMATION_PROCESSING_CLIENT_INTERPOLATION = 3,
    ANIMATION_PROCESSING_CLIENT_RENDER = 4,
    ANIMATION_PROCESSING_MAX = 5,
};

/// AnimationSnapshotType_t
_enum AnimationSnapshotType_t0 : uint32_t {
    ANIMATION_SNAPSHOT_SERVER_SIMULATION = 0,
    ANIMATION_SNAPSHOT_CLIENT_SIMULATION = 1,
    ANIMATION_SNAPSHOT_CLIENT_PREDICTION = 2,
    ANIMATION_SNAPSHOT_CLIENT_INTERPOLATION = 3,
    ANIMATION_SNAPSHOT_CLIENT_RENDER = 4,
    ANIMATION_SNAPSHOT_FINAL_COMPOSITE = 5,
    ANIMATION_SNAPSHOT_MAX = 6,
};

/// SeqCmd_t
_enum SeqCmd_t0 : uint32_t {
    SeqCmd_Nop = 0,
    SeqCmd_LinearDelta = 1,
    SeqCmd_FetchFrameRange = 2,
    SeqCmd_Slerp = 3,
    SeqCmd_Add = 4,
    SeqCmd_Subtract = 5,
    SeqCmd_Scale = 6,
    SeqCmd_Copy = 7,
    SeqCmd_Blend = 8,
    SeqCmd_Worldspace = 9,
    SeqCmd_Sequence = 10,
    SeqCmd_FetchCycle = 11,
    SeqCmd_FetchFrame = 12,
    SeqCmd_IKLockInPlace = 13,
    SeqCmd_IKRestoreAll = 14,
    SeqCmd_ReverseSequence = 15,
    SeqCmd_Transform = 16,
};

/// SeqPoseSetting_t
_enum SeqPoseSetting_t0 : uint32_t {
    SEQ_POSE_SETTING_CONSTANT = 0,
    SEQ_POSE_SETTING_ROTATION = 1,
    SEQ_POSE_SETTING_POSITION = 2,
    SEQ_POSE_SETTING_VELOCITY = 3,
};

/// ParticleAttachment_t
_enum ParticleAttachment_t0 : uint32_t {
    PATTACH_INVALID = 4294967295,
    PATTACH_ABSORIGIN = 0,
    PATTACH_ABSORIGIN_FOLLOW = 1,
    PATTACH_CUSTOMORIGIN = 2,
    PATTACH_CUSTOMORIGIN_FOLLOW = 3,
    PATTACH_POINT = 4,
    PATTACH_POINT_FOLLOW = 5,
    PATTACH_EYES_FOLLOW = 6,
    PATTACH_OVERHEAD_FOLLOW = 7,
    PATTACH_WORLDORIGIN = 8,
    PATTACH_ROOTBONE_FOLLOW = 9,
    PATTACH_RENDERORIGIN_FOLLOW = 10,
    PATTACH_MAIN_VIEW = 11,
    PATTACH_WATERWAKE = 12,
    PATTACH_CENTER_FOLLOW = 13,
    PATTACH_CUSTOM_GAME_STATE_1 = 14,
    PATTACH_HEALTHBAR = 15,
    MAX_PATTACH_TYPES = 16,
};

/// BoneTransformSpace_t
_enum BoneTransformSpace_t0 : uint32_t {
    BoneTransformSpace_Invalid = 4294967295,
    BoneTransformSpace_Parent = 0,
    BoneTransformSpace_Model = 1,
    BoneTransformSpace_World = 2,
};

/// EPulseGraphExecutionHistoryFlag
_enum EPulseGraphExecutionHistoryFlag0 : uint32_t {
    NO_FLAGS = 0,
    CURSOR_ADD_TAG = 1,
    CURSOR_REMOVE_TAG = 2,
    CURSOR_RETIRED = 4,
    REQUIREMENT_PASS = 8,
    REQUIREMENT_FAIL = 16,
};

/// PulseInstructionCode_t
_enum PulseInstructionCode_t0 : uint16_t {
    INVALID = 0,
    IMMEDIATE_HALT = 1,
    RETURN_VOID = 2,
    RETURN_VALUE = 3,
    NOP = 4,
    JUMP = 5,
    JUMP_COND = 6,
    CHUNK_LEAP = 7,
    CHUNK_LEAP_COND = 8,
    PULSE_CALL_SYNC = 9,
    PULSE_CALL_ASYNC_FIRE = 10,
    CELL_INVOKE = 11,
    LIBRARY_INVOKE = 12,
    SET_VAR = 13,
    GET_VAR = 14,
    GET_VAR_DETACH = 15,
    DETACH_REGISTER = 16,
    SET_VAR_ARRAY_ELEMENT_1D = 17,
    SET_VAR_OBSERVABLE = 18,
    GET_CONST = 19,
    GET_ARRAY_ELEMENT = 20,
    GET_DOMAIN_VALUE = 21,
    COPY = 22,
    NOT = 23,
    NEGATE = 24,
    ADD = 25,
    SUB = 26,
    MUL = 27,
    DIV = 28,
    MOD = 29,
    LT = 30,
    LTE = 31,
    EQ = 32,
    NE = 33,
    AND = 34,
    OR = 35,
    SCALE = 36,
    SCALE_INV = 37,
    ELEMENT_ACCESS = 38,
    CONVERT_VALUE = 39,
    REINTERPRET_INSTANCE = 40,
    GET_BLACKBOARD_REFERENCE = 41,
    SET_BLACKBOARD_REFERENCE = 42,
    LAST_SERIALIZED_CODE = 43,
    NEGATE_INT = 44,
    NEGATE_FLOAT = 45,
    NEGATE_VEC2 = 46,
    NEGATE_VEC3 = 47,
    NEGATE_VEC4 = 48,
    ADD_INT = 49,
    ADD_FLOAT = 50,
    ADD_STRING = 51,
    ADD_VEC2 = 52,
    ADD_VEC3 = 53,
    ADD_VEC3WS_VEC3 = 54,
    ADD_VEC3_VEC3WS = 55,
    ADD_VEC4 = 56,
    ADD_GAMETIME_FLOAT = 57,
    ADD_FLOAT_GAMETIME = 58,
    SUB_INT = 59,
    SUB_FLOAT = 60,
    SUB_VEC2 = 61,
    SUB_VEC3 = 62,
    SUB_VEC3WS_VEC3 = 63,
    SUB_VEC3WS_VEC3WS = 64,
    SUB_VEC4 = 65,
    SUB_GAMETIME_FLOAT = 66,
    SUB_GAMETIME = 67,
    MUL_INT = 68,
    MUL_FLOAT = 69,
    DIV_FLOAT = 70,
    MOD_INT = 71,
    MOD_FLOAT = 72,
    LT_INT = 73,
    LT_FLOAT = 74,
    LT_GAMETIME = 75,
    LTE_INT = 76,
    LTE_FLOAT = 77,
    LTE_GAMETIME = 78,
    EQ_BOOL = 79,
    EQ_INT = 80,
    EQ_FLOAT = 81,
    EQ_VEC2 = 82,
    EQ_VEC3 = 83,
    EQ_VEC3WS = 84,
    EQ_VEC4 = 85,
    EQ_STRING = 86,
    EQ_ENTITY_NAME = 87,
    EQ_SCHEMA_ENUM = 88,
    EQ_EHANDLE = 89,
    EQ_PANEL_HANDLE = 90,
    EQ_OPAQUE_HANDLE = 91,
    EQ_TEST_HANDLE = 92,
    EQ_COLOR_RGB = 93,
    EQ_ARRAY = 94,
    EQ_GAMETIME = 95,
    NE_BOOL = 96,
    NE_INT = 97,
    NE_FLOAT = 98,
    NE_VEC2 = 99,
    NE_VEC3 = 100,
    NE_VEC3WS = 101,
    NE_VEC4 = 102,
    NE_STRING = 103,
    NE_ENTITY_NAME = 104,
    NE_SCHEMA_ENUM = 105,
    NE_EHANDLE = 106,
    NE_PANEL_HANDLE = 107,
    NE_OPAQUE_HANDLE = 108,
    NE_TEST_HANDLE = 109,
    NE_COLOR_RGB = 110,
    NE_ARRAY = 111,
    NE_GAMETIME = 112,
    SCALE_VEC3 = 113,
    SCALE_VEC2 = 114,
    SCALE_VEC4 = 115,
    SCALE_INV_VEC3 = 116,
    SCALE_INV_VEC2 = 117,
    SCALE_INV_VEC4 = 118,
    ELEMENT_ACCESS_VEC2 = 119,
    ELEMENT_ACCESS_VEC3 = 120,
    ELEMENT_ACCESS_VEC3WS = 121,
    ELEMENT_ACCESS_VEC4 = 122,
    ELEMENT_ACCESS_COLOR_RGB = 123,
    GET_CONST_INLINE_STORAGE = 124,
};

_enum PulseMethodCallMode_t : uint32_t {
    SYNC_WAIT_FOR_COMPLETION = 0,
    ASYNC_FIRE_AND_FORGET = 1,
};

/// PulseCursorExecResult_t
_enum PulseCursorExecResult_t0 : uint32_t {
    Succeeded = 0,
    Canceled = 1,
    Failed = 2,
    OngoingNotify = 3,
};

_enum PulseCursorCancelPriority_t : uint32_t {
    None = 0,
    CancelOnSucceeded = 1,
    SoftCancel = 2,
    HardCancel = 3,
};

/// PulseValueType_t
_enum PulseValueType_t0 : uint32_t {
    PVAL_VOID = 4294967295,
    PVAL_BOOL = 0,
    PVAL_INT = 1,
    PVAL_FLOAT = 2,
    PVAL_STRING = 3,
    PVAL_VEC2 = 4,
    PVAL_VEC3 = 5,
    PVAL_QANGLE = 6,
    PVAL_VEC3_WORLDSPACE = 7,
    PVAL_VEC4 = 8,
    PVAL_TRANSFORM = 9,
    PVAL_TRANSFORM_WORLDSPACE = 10,
    PVAL_COLOR_RGB = 11,
    PVAL_GAMETIME = 12,
    PVAL_EHANDLE = 13,
    PVAL_RESOURCE = 14,
    PVAL_RESOURCE_NAME = 15,
    PVAL_SNDEVT_GUID = 16,
    PVAL_SNDEVT_NAME = 17,
    PVAL_ENTITY_NAME = 18,
    PVAL_OPAQUE_HANDLE = 19,
    PVAL_TYPESAFE_INT = 20,
    PVAL_MODEL_MATERIAL_GROUP = 21,
    PVAL_CURSOR_FLOW = 22,
    PVAL_VARIANT = 23,
    PVAL_UNKNOWN = 24,
    PVAL_SCHEMA_ENUM = 25,
    PVAL_PANORAMA_PANEL_HANDLE = 26,
    PVAL_TEST_HANDLE = 27,
    PVAL_ARRAY = 28,
    PVAL_TYPESAFE_INT64 = 29,
    PVAL_PARTICLE_EHANDLE = 30,
    PVAL_COUNT = 31,
};

/// PulseDomainValueType_t
_enum PulseDomainValueType_t0 : uint32_t {
    INVALID = 4294967295,
    ENTITY_NAME = 0,
    PANEL_ID = 1,
    COUNT = 2,
};

/// PulseVariableKeysSource_t
_enum PulseVariableKeysSource_t0 : uint32_t {
    PRIVATE = 0,
    CPP = 1,
    VMAP = 2,
    VMDL = 3,
    XML = 4,
    COUNT = 5,
};

/// PulseApiFeature_t
_enum PulseApiFeature_t0 : uint32_t {
    AF_NONE = 0,
    AF_ENTITIES = 1,
    AF_PANORAMA = 2,
    AF_PARTICLES = 8,
    AF_FAKE_ENTITIES = 16,
    AF_SELECTORS_WITHOUT_REQUIREMENTS = 32,
};

_enum PulseBestOutflowRules_t : uint32_t {
    SORT_BY_NUMBER_OF_VALID_CRITERIA = 0,
    SORT_BY_OUTFLOW_INDEX = 1,
};

/// ParticleFloatType_t
_enum ParticleFloatType_t0 : uint32_t {
    PF_TYPE_INVALID = 4294967295,
    PF_TYPE_LITERAL = 0,
    PF_TYPE_NAMED_VALUE = 1,
    PF_TYPE_RANDOM_UNIFORM = 2,
    PF_TYPE_RANDOM_BIASED = 3,
    PF_TYPE_COLLECTION_AGE = 4,
    PF_TYPE_ENDCAP_AGE = 5,
    PF_TYPE_CONTROL_POINT_COMPONENT = 6,
    PF_TYPE_CONTROL_POINT_CHANGE_AGE = 7,
    PF_TYPE_CONTROL_POINT_SPEED = 8,
    PF_TYPE_PARTICLE_DETAIL_LEVEL = 9,
    PF_TYPE_CONCURRENT_DEF_COUNT = 10,
    PF_TYPE_CLOSEST_CAMERA_DISTANCE = 11,
    PF_TYPE_SNAPSHOT_COUNT = 12,
    PF_TYPE_RENDERER_CAMERA_DISTANCE = 13,
    PF_TYPE_RENDERER_CAMERA_DOT_PRODUCT = 14,
    PF_TYPE_PARTICLE_NOISE = 15,
    PF_TYPE_PARTICLE_AGE = 16,
    PF_TYPE_PARTICLE_AGE_NORMALIZED = 17,
    PF_TYPE_PARTICLE_FLOAT = 18,
    PF_TYPE_PARTICLE_INITIAL_FLOAT = 19,
    PF_TYPE_PARTICLE_VECTOR_COMPONENT = 20,
    PF_TYPE_PARTICLE_INITIAL_VECTOR_COMPONENT = 21,
    PF_TYPE_PARTICLE_SPEED = 22,
    PF_TYPE_PARTICLE_NUMBER = 23,
    PF_TYPE_PARTICLE_NUMBER_NORMALIZED = 24,
    PF_TYPE_PARTICLE_ROPE_SEGMENT = 25,
    PF_TYPE_PARTICLE_ROPE_SEGMENT_NORMALIZED = 26,
    PF_TYPE_PARTICLE_SCREENSPACE_CAMERA_DISTANCE = 27,
    PF_TYPE_PARTICLE_SCREENSPACE_CAMERA_DOT_PRODUCT = 28,
    PF_TYPE_COUNT = 29,
};

/// ParticleFloatBiasType_t
_enum ParticleFloatBiasType_t0 : uint32_t {
    PF_BIAS_TYPE_INVALID = 4294967295,
    PF_BIAS_TYPE_STANDARD = 0,
    PF_BIAS_TYPE_GAIN = 1,
    PF_BIAS_TYPE_EXPONENTIAL = 2,
    PF_BIAS_TYPE_COUNT = 3,
};

/// PFNoiseType_t
_enum PFNoiseType_t0 : uint32_t {
    PF_NOISE_TYPE_PERLIN = 0,
    PF_NOISE_TYPE_SIMPLEX = 1,
    PF_NOISE_TYPE_WORLEY = 2,
    PF_NOISE_TYPE_CURL = 3,
};

/// PFNoiseModifier_t
_enum PFNoiseModifier_t0 : uint32_t {
    PF_NOISE_MODIFIER_NONE = 0,
    PF_NOISE_MODIFIER_LINES = 1,
    PF_NOISE_MODIFIER_CLUMPS = 2,
    PF_NOISE_MODIFIER_RINGS = 3,
};

/// PFNoiseTurbulence_t
_enum PFNoiseTurbulence_t0 : uint32_t {
    PF_NOISE_TURB_NONE = 0,
    PF_NOISE_TURB_HIGHLIGHT = 1,
    PF_NOISE_TURB_FEEDBACK = 2,
    PF_NOISE_TURB_LOOPY = 3,
    PF_NOISE_TURB_CONTRAST = 4,
    PF_NOISE_TURB_ALTERNATE = 5,
};

/// ParticleFloatRandomMode_t
_enum ParticleFloatRandomMode_t0 : uint32_t {
    PF_RANDOM_MODE_INVALID = 4294967295,
    PF_RANDOM_MODE_CONSTANT = 0,
    PF_RANDOM_MODE_VARYING = 1,
    PF_RANDOM_MODE_COUNT = 2,
};

/// ParticleFloatInputMode_t
_enum ParticleFloatInputMode_t0 : uint32_t {
    PF_INPUT_MODE_INVALID = 4294967295,
    PF_INPUT_MODE_CLAMPED = 0,
    PF_INPUT_MODE_LOOPED = 1,
    PF_INPUT_MODE_COUNT = 2,
};

/// ParticleFloatMapType_t
_enum ParticleFloatMapType_t0 : uint32_t {
    PF_MAP_TYPE_INVALID = 4294967295,
    PF_MAP_TYPE_DIRECT = 0,
    PF_MAP_TYPE_MULT = 1,
    PF_MAP_TYPE_REMAP = 2,
    PF_MAP_TYPE_REMAP_BIASED = 3,
    PF_MAP_TYPE_CURVE = 4,
    PF_MAP_TYPE_NOTCHED = 5,
    PF_MAP_TYPE_ROUND = 6,
    PF_MAP_TYPE_COUNT = 7,
};

/// ParticleFloatRoundType_t
_enum ParticleFloatRoundType_t0 : uint32_t {
    PF_ROUND_TYPE_INVALID = 4294967295,
    PF_ROUND_TYPE_NEAREST = 0,
    PF_ROUND_TYPE_FLOOR = 1,
    PF_ROUND_TYPE_CEIL = 2,
    PF_ROUND_TYPE_COUNT = 3,
};

/// ParticleTransformType_t
_enum ParticleTransformType_t0 : uint32_t {
    PT_TYPE_INVALID = 0,
    PT_TYPE_NAMED_VALUE = 1,
    PT_TYPE_CONTROL_POINT = 2,
    PT_TYPE_CONTROL_POINT_RANGE = 3,
    PT_TYPE_COUNT = 4,
};

/// ParticleModelType_t
_enum ParticleModelType_t0 : uint32_t {
    PM_TYPE_INVALID = 0,
    PM_TYPE_NAMED_VALUE_MODEL = 1,
    PM_TYPE_NAMED_VALUE_EHANDLE = 2,
    PM_TYPE_CONTROL_POINT = 3,
    PM_TYPE_COUNT = 4,
};

/// ParticleVecType_t
_enum ParticleVecType_t0 : uint32_t {
    PVEC_TYPE_INVALID = 4294967295,
    PVEC_TYPE_LITERAL = 0,
    PVEC_TYPE_LITERAL_COLOR = 1,
    PVEC_TYPE_NAMED_VALUE = 2,
    PVEC_TYPE_PARTICLE_VECTOR = 3,
    PVEC_TYPE_PARTICLE_INITIAL_VECTOR = 4,
    PVEC_TYPE_PARTICLE_VELOCITY = 5,
    PVEC_TYPE_CP_VALUE = 6,
    PVEC_TYPE_CP_RELATIVE_POSITION = 7,
    PVEC_TYPE_CP_RELATIVE_DIR = 8,
    PVEC_TYPE_CP_RELATIVE_RANDOM_DIR = 9,
    PVEC_TYPE_FLOAT_COMPONENTS = 10,
    PVEC_TYPE_FLOAT_INTERP_CLAMPED = 11,
    PVEC_TYPE_FLOAT_INTERP_OPEN = 12,
    PVEC_TYPE_FLOAT_INTERP_GRADIENT = 13,
    PVEC_TYPE_RANDOM_UNIFORM = 14,
    PVEC_TYPE_RANDOM_UNIFORM_OFFSET = 15,
    PVEC_TYPE_CP_DELTA = 16,
    PVEC_TYPE_CLOSEST_CAMERA_POSITION = 17,
    PVEC_TYPE_COUNT = 18,
};

/// VPhysXBodyPart_t::VPhysXFlagEnum_t
_enum VPhysXBodyPart_t__VPhysXFlagEnum_t0 : uint32_t {
    FLAG_STATIC = 1,
    FLAG_KINEMATIC = 2,
    FLAG_JOINT = 4,
    FLAG_MASS = 8,
    FLAG_ALWAYS_DYNAMIC_ON_CLIENT = 16,
    FLAG_DISABLE_CCD = 32,
};

/// VPhysXConstraintParams_t::EnumFlags0_t
_enum VPhysXConstraintParams_t__EnumFlags0_t0 : uint32_t {
    FLAG0_SHIFT_INTERPENETRATE = 0,
    FLAG0_SHIFT_CONSTRAIN = 1,
    FLAG0_SHIFT_BREAKABLE_FORCE = 2,
    FLAG0_SHIFT_BREAKABLE_TORQUE = 3,
};

/// VPhysXJoint_t::Flags_t
_enum VPhysXJoint_t__Flags_t0 : uint32_t {
    JOINT_FLAGS_NONE = 0,
    JOINT_FLAGS_BODY1_FIXED = 1,
    JOINT_FLAGS_USE_BLOCK_SOLVER = 2,
};

/// VPhysXAggregateData_t::VPhysXFlagEnum_t
_enum VPhysXAggregateData_t__VPhysXFlagEnum_t0 : uint32_t {
    FLAG_IS_POLYSOUP_GEOMETRY = 1,
    FLAG_LEVEL_COLLISION = 16,
    FLAG_IGNORE_SCALE_OBSOLETE_DO_NOT_USE = 32,
};

/// MeshDrawPrimitiveFlags_t
_enum MeshDrawPrimitiveFlags_t0 : uint32_t {
    MESH_DRAW_FLAGS_NONE = 0,
    MESH_DRAW_FLAGS_USE_SHADOW_FAST_PATH = 1,
    MESH_DRAW_FLAGS_USE_COMPRESSED_NORMAL_TANGENT = 2,
    MESH_DRAW_INPUT_LAYOUT_IS_NOT_MATCHED_TO_MATERIAL = 8,
    MESH_DRAW_FLAGS_USE_COMPRESSED_PER_VERTEX_LIGHTING = 16,
    MESH_DRAW_FLAGS_USE_UNCOMPRESSED_PER_VERTEX_LIGHTING = 32,
    MESH_DRAW_FLAGS_CAN_BATCH_WITH_DYNAMIC_SHADER_CONSTANTS = 64,
    MESH_DRAW_FLAGS_DRAW_LAST = 128,
};

/// ModelSkeletonData_t::BoneFlags_t
_enum ModelSkeletonData_t__BoneFlags_t0 : uint32_t {
    FLAG_NO_BONE_FLAGS = 0,
    FLAG_BONEFLEXDRIVER = 4,
    FLAG_CLOTH = 8,
    FLAG_PHYSICS = 16,
    FLAG_ATTACHMENT = 32,
    FLAG_ANIMATION = 64,
    FLAG_MESH = 128,
    FLAG_HITBOX = 256,
    FLAG_BONE_USED_BY_VERTEX_LOD0 = 1024,
    FLAG_BONE_USED_BY_VERTEX_LOD1 = 2048,
    FLAG_BONE_USED_BY_VERTEX_LOD2 = 4096,
    FLAG_BONE_USED_BY_VERTEX_LOD3 = 8192,
    FLAG_BONE_USED_BY_VERTEX_LOD4 = 16384,
    FLAG_BONE_USED_BY_VERTEX_LOD5 = 32768,
    FLAG_BONE_USED_BY_VERTEX_LOD6 = 65536,
    FLAG_BONE_USED_BY_VERTEX_LOD7 = 131072,
    FLAG_BONE_MERGE_READ = 262144,
    FLAG_BONE_MERGE_WRITE = 524288,
    FLAG_ALL_BONE_FLAGS = 1048575,
    BLEND_PREALIGNED = 1048576,
    FLAG_RIGIDLENGTH = 2097152,
    FLAG_PROCEDURAL = 4194304,
};

/// PermModelInfo_t::FlagEnum
_enum PermModelInfo_t__FlagEnum0 : uint32_t {
    FLAG_TRANSLUCENT = 1,
    FLAG_TRANSLUCENT_TWO_PASS = 2,
    FLAG_MODEL_IS_RUNTIME_COMBINED = 4,
    FLAG_SOURCE1_IMPORT = 8,
    FLAG_MODEL_PART_CHILD = 16,
    FLAG_NAV_GEN_NONE = 32,
    FLAG_NAV_GEN_HULL = 64,
    FLAG_NO_FORCED_FADE = 2048,
    FLAG_HAS_SKINNED_MESHES = 1024,
    FLAG_DO_NOT_CAST_SHADOWS = 131072,
    FLAG_FORCE_PHONEME_CROSSFADE = 4096,
    FLAG_NO_ANIM_EVENTS = 1048576,
    FLAG_ANIMATION_DRIVEN_FLEXES = 2097152,
    FLAG_IMPLICIT_BIND_POSE_SEQUENCE = 4194304,
    FLAG_MODEL_DOC = 8388608,
};

/// ModelBoneFlexComponent_t
_enum ModelBoneFlexComponent_t0 : uint32_t {
    MODEL_BONE_FLEX_INVALID = 4294967295,
    MODEL_BONE_FLEX_TX = 0,
    MODEL_BONE_FLEX_TY = 1,
    MODEL_BONE_FLEX_TZ = 2,
};

/// RenderMeshSlotType_t
_enum RenderMeshSlotType_t0 : uint8_t {
    RENDERMESH_SLOT_INVALID = 255,
    RENDERMESH_SLOT_PER_VERTEX = 0,
    RENDERMESH_SLOT_PER_INSTANCE = 1,
};

/// ModelMeshBufferUsage_t
_enum ModelMeshBufferUsage_t0 : uint8_t {
    MESH_BUFFER_USAGE_NONE = 0,
    MESH_BUFFER_USAGE_VB = 1,
    MESH_BUFFER_USAGE_IB = 2,
    MESH_BUFFER_USAGE_ADJACENCY = 4,
    MESH_BUFFER_USAGE_MESHLET_TRIS = 8,
    MESH_BUFFER_USAGE_RT_PROXY = 16,
    MESH_BUFFER_USAGE_VERTEX_ALBEDO = 32,
};

/// ScriptedMoveTo_t
_enum ScriptedMoveTo_t0 : uint32_t {
    eWait = 0,
    eMoveWithGait = 3,
    eTeleport = 4,
    eWaitFacing = 5,
    eObsoleteBackCompat1 = 1,
    eObsoleteBackCompat2 = 2,
};

/// ScriptedHeldWeaponBehavior_t
_enum ScriptedHeldWeaponBehavior_t0 : uint32_t {
    eInvalid = 4294967295,
    eHolster = 0,
    eDeploy = 1,
    eDrop = 2,
};

/// ModelConfigAttachmentType_t
_enum ModelConfigAttachmentType_t0 : uint32_t {
    MODEL_CONFIG_ATTACHMENT_INVALID = 4294967295,
    MODEL_CONFIG_ATTACHMENT_BONE_OR_ATTACHMENT = 0,
    MODEL_CONFIG_ATTACHMENT_ROOT_RELATIVE = 1,
    MODEL_CONFIG_ATTACHMENT_BONEMERGE = 2,
    MODEL_CONFIG_ATTACHMENT_COUNT = 3,
};

/// VertexAlbedoFormat_t
_enum VertexAlbedoFormat_t0 : uint8_t {
    VERTEX_ALBEDO_NONE = 0,
    VERTEX_ALBEDO_8888 = 1,
    VERTEX_ALBEDO_565 = 2,
};

/// FlexOpCode_t
_enum FlexOpCode_t0 : uint32_t {
    FLEX_OP_CONST = 1,
    FLEX_OP_FETCH1 = 2,
    FLEX_OP_FETCH2 = 3,
    FLEX_OP_ADD = 4,
    FLEX_OP_SUB = 5,
    FLEX_OP_MUL = 6,
    FLEX_OP_DIV = 7,
    FLEX_OP_NEG = 8,
    FLEX_OP_EXP = 9,
    FLEX_OP_OPEN = 10,
    FLEX_OP_CLOSE = 11,
    FLEX_OP_COMMA = 12,
    FLEX_OP_MAX = 13,
    FLEX_OP_MIN = 14,
    FLEX_OP_2WAY_0 = 15,
    FLEX_OP_2WAY_1 = 16,
    FLEX_OP_NWAY = 17,
    FLEX_OP_COMBO = 18,
    FLEX_OP_DOMINATE = 19,
    FLEX_OP_DME_LOWER_EYELID = 20,
    FLEX_OP_DME_UPPER_EYELID = 21,
    FLEX_OP_SQRT = 22,
    FLEX_OP_REMAPVALCLAMPED = 23,
    FLEX_OP_SIN = 24,
    FLEX_OP_COS = 25,
    FLEX_OP_ABS = 26,
};

/// MorphFlexControllerRemapType_t
_enum MorphFlexControllerRemapType_t0 : uint32_t {
    MORPH_FLEXCONTROLLER_REMAP_PASSTHRU = 0,
    MORPH_FLEXCONTROLLER_REMAP_2WAY = 1,
    MORPH_FLEXCONTROLLER_REMAP_NWAY = 2,
    MORPH_FLEXCONTROLLER_REMAP_EYELID = 3,
};

/// MorphBundleType_t
_enum MorphBundleType_t0 : uint32_t {
    MORPH_BUNDLE_TYPE_NONE = 0,
    MORPH_BUNDLE_TYPE_POSITION_SPEED = 1,
    MORPH_BUNDLE_TYPE_NORMAL_WRINKLE = 2,
    MORPH_BUNDLE_TYPE_COUNT = 3,
};

/// MovementCapability_t
_enum MovementCapability_t0 : uint32_t {
    eStrafe = 0,
    eIdleTurn = 1,
    eStart = 2,
    eStop = 3,
    eInstantStop = 4,
    eShuffle = 5,
    ePlantedTurn = 6,
    eCount = 7,
};

/// SharedMovementGait_t
_enum SharedMovementGait_t0 : uint8_t {
    eInvalid = 255,
    eSlow = 0,
    eMedium = 1,
    eFast = 2,
    eVeryFast = 3,
    eCount = 4,
};

/// NPCPhysicsHullType_t
_enum NPCPhysicsHullType_t0 : uint32_t {
    eInvalid = 0,
    eGroundCapsule = 1,
    eCenteredCapsule = 2,
    eGenericCapsule = 3,
    eGroundBox = 4,
};

/// NmRootMotionBlendMode_t
_enum NmRootMotionBlendMode_t0 : uint8_t {
    Blend = 0,
    Additive = 1,
    IgnoreSource = 2,
    IgnoreTarget = 3,
};

/// CNmEventRelevance_t
_enum CNmEventRelevance_t0 : uint32_t {
    ClientOnly = 0,
    ServerOnly = 1,
    ClientAndServer = 2,
};

/// NmEasingFunction_t
_enum NmEasingFunction_t0 : uint8_t {
    Linear = 0,
    Quad = 1,
    Cubic = 2,
    Quart = 3,
    Quint = 4,
    Sine = 5,
    Expo = 6,
    Circ = 7,
    Back = 8,
};

/// NmEasingOperation_t
_enum NmEasingOperation_t0 : uint8_t {
    Linear = 0,
    InQuad = 1,
    OutQuad = 2,
    InOutQuad = 3,
    InCubic = 4,
    OutCubic = 5,
    InOutCubic = 6,
    InQuart = 7,
    OutQuart = 8,
    InOutQuart = 9,
    InQuint = 10,
    OutQuint = 11,
    InOutQuint = 12,
    InSine = 13,
    OutSine = 14,
    InOutSine = 15,
    InExpo = 16,
    OutExpo = 17,
    InOutExpo = 18,
    InCirc = 19,
    OutCirc = 20,
    InOutCirc = 21,
    None = 22,
};

/// CNmRootMotionData::SamplingMode_t
_enum CNmRootMotionData__SamplingMode_t0 : uint8_t {
    Delta = 0,
    WorldSpace = 1,
};

/// NmFollowBoneMode_t
_enum NmFollowBoneMode_t0 : uint8_t {
    RotationAndTranslation = 0,
    RotationOnly = 1,
    TranslationOnly = 2,
};

/// NmFootPhase_t
_enum NmFootPhase_t0 : uint8_t {
    LeftFootDown = 0,
    RightFootPassing = 1,
    RightFootDown = 2,
    LeftFootPassing = 3,
    None = 4,
};

/// NmFootPhaseCondition_t
_enum NmFootPhaseCondition_t0 : uint8_t {
    LeftFootDown = 0,
    LeftFootPassing = 1,
    LeftPhase = 4,
    RightFootDown = 2,
    RightFootPassing = 3,
    RightPhase = 5,
    None = 6,
};

/// NmFrameSnapEventMode_t
_enum NmFrameSnapEventMode_t0 : uint32_t {
    Floor = 0,
    Round = 1,
};

/// CNmParticleEvent::Type_t
_enum CNmParticleEvent__Type_t0 : uint32_t {
    Create = 0,
    Create_CFG = 1,
};

/// CNmSoundEvent::Position_t
_enum CNmSoundEvent__Position_t0 : uint32_t {
    None = 0,
    World = 1,
    EntityPos = 2,
    EntityEyePos = 3,
    EntityAttachment = 4,
};

/// NmTransitionRule_t
_enum NmTransitionRule_t0 : uint8_t {
    AllowTransition = 0,
    ConditionallyAllowTransition = 1,
    BlockTransition = 2,
};

/// NmTransitionRuleCondition_t
_enum NmTransitionRuleCondition_t0 : uint8_t {
    AnyAllowed = 0,
    FullyAllowed = 1,
    ConditionallyAllowed = 2,
    Blocked = 3,
};

/// NmTargetWarpRule_t
_enum NmTargetWarpRule_t0 : uint8_t {
    WarpXY = 0,
    WarpZ = 1,
    WarpXYZ = 2,
    RotationOnly = 3,
    FixedSection = 4,
};

/// NmTargetWarpAlgorithm_t
_enum NmTargetWarpAlgorithm_t0 : uint8_t {
    Lerp = 0,
    Hermite = 1,
    HermiteFeaturePreserving = 2,
    Bezier = 3,
};

/// NmCachedValueMode_t
_enum NmCachedValueMode_t0 : uint32_t {
    OnEntry = 0,
    OnExit = 1,
};

/// NmEventConditionRules_t
_enum NmEventConditionRules_t0 : uint8_t {
    LimitSearchToSourceState = 0,
    IgnoreInactiveEvents = 1,
    PreferHighestWeight = 2,
    PreferHighestProgress = 3,
    OperatorOr = 4,
    OperatorAnd = 5,
    SearchOnlyGraphEvents = 6,
    SearchOnlyAnimEvents = 7,
    SearchBothGraphAndAnimEvents = 8,
};

/// CNmSyncEventIndexConditionNode::TriggerMode_t
_enum CNmSyncEventIndexConditionNode__TriggerMode_t0 : uint8_t {
    ExactlyAtEventIndex = 0,
    GreaterThanEqualToEventIndex = 1,
};

/// CNmCurrentSyncEventNode::InfoType_t
_enum CNmCurrentSyncEventNode__InfoType_t0 : uint8_t {
    IndexAndPercentage = 0,
    IndexOnly = 1,
    PercentageOnly = 2,
};

/// CNmFloatMathNode::Operator_t
_enum CNmFloatMathNode__Operator_t0 : uint8_t {
    Add = 0,
    Sub = 1,
    Mul = 2,
    Div = 3,
    Mod = 4,
    Abs = 5,
    Negate = 6,
    Floor = 7,
    Ceiling = 8,
    IntegerPart = 9,
    FractionalPart = 10,
    InverseFractionalPart = 11,
};

/// CNmFloatComparisonNode::Comparison_t
_enum CNmFloatComparisonNode__Comparison_t0 : uint8_t {
    GreaterThanEqual = 0,
    LessThanEqual = 1,
    NearEqual = 2,
    GreaterThan = 3,
    LessThan = 4,
};

/// CNmFloatAngleMathNode::Operation_t
_enum CNmFloatAngleMathNode__Operation_t0 : uint8_t {
    ClampTo180 = 0,
    ClampTo360 = 1,
    FlipHemisphere = 2,
    FlipHemisphereNegate = 3,
};

/// CNmIDComparisonNode::Comparison_t
_enum CNmIDComparisonNode__Comparison_t0 : uint8_t {
    Matches = 0,
    DoesntMatch = 1,
};

/// NmPoseBlendMode_t
_enum NmPoseBlendMode_t0 : uint8_t {
    Overlay = 0,
    Additive = 1,
    ModelSpace = 2,
};

/// CNmRootMotionOverrideNode::OverrideFlags_t
_enum CNmRootMotionOverrideNode__OverrideFlags_t0 : uint8_t {
    AllowMoveX = 0,
    AllowMoveY = 1,
    AllowMoveZ = 2,
    AllowFacingPitch = 3,
    ListenForEvents = 4,
};

/// CNmStateNode::TimedEvent_t::Comparison_t
_enum CNmStateNode__TimedEvent_t__Comparison_t0 : uint8_t {
    LessThanEqual = 0,
    GreaterThanEqual = 1,
};

/// CNmTimeConditionNode::ComparisonType_t
_enum CNmTimeConditionNode__ComparisonType_t0 : uint8_t {
    PercentageThroughState = 0,
    PercentageThroughSyncEvent = 1,
    ElapsedTime = 2,
};

/// CNmTimeConditionNode::Operator_t
_enum CNmTimeConditionNode__Operator_t0 : uint8_t {
    LessThan = 0,
    LessThanEqual = 1,
    GreaterThan = 2,
    GreaterThanEqual = 3,
};

/// CNmTargetInfoNode::Info_t
_enum CNmTargetInfoNode__Info_t0 : uint32_t {
    AngleHorizontal = 0,
    AngleVertical = 1,
    Distance = 2,
    DistanceHorizontalOnly = 3,
    DistanceVerticalOnly = 4,
    DeltaOrientationX = 5,
    DeltaOrientationY = 6,
    DeltaOrientationZ = 7,
};

/// CNmTransitionNode::TransitionOptions_t
_enum CNmTransitionNode__TransitionOptions_t0 : uint8_t {
    None = 0,
    ClampDuration = 1,
    Synchronized = 2,
    MatchSourceTime = 3,
    MatchSyncEventIndex = 4,
    MatchSyncEventID = 5,
    MatchSyncEventPercentage = 6,
    PreferClosestSyncEventID = 7,
    MatchTimeInSeconds = 8,
    OffsetTimeInSeconds = 9,
};

/// CNmVectorInfoNode::Info_t
_enum CNmVectorInfoNode__Info_t0 : uint8_t {
    X = 0,
    Y = 1,
    Z = 2,
    Length = 3,
    AngleHorizontal = 4,
    AngleVertical = 5,
};

/// NmGraphEventTypeCondition_t
_enum NmGraphEventTypeCondition_t0 : uint8_t {
    Entry = 0,
    FullyInState = 1,
    Exit = 2,
    Timed = 3,
    Generic = 4,
    Any = 5,
};

/// NmGraphValueType_t
_enum NmGraphValueType_t0 : uint8_t {
    Unknown = 0,
    Bool = 1,
    ID = 2,
    Float = 3,
    Vector = 4,
    Target = 5,
    BoneMask = 6,
    Pose = 7,
    Special = 8,
};

/// NmIKBlendMode_t
_enum NmIKBlendMode_t0 : uint8_t {
    Effector = 0,
    Pose = 1,
};

/// IKChannelMode
_enum IKChannelMode0 : uint32_t {
    TwoBone = 0,
    TwoBone_Translate = 1,
    OneBone = 2,
    OneBone_Translate = 3,
};

/// EDemoBoneSelectionMode
_enum EDemoBoneSelectionMode0 : uint32_t {
    CaptureAllBones = 0,
    CaptureSelectedBones = 1,
};

/// AnimVectorSource
_enum AnimVectorSource0 : uint32_t {
    MoveDirection = 0,
    FacingPosition = 1,
    LookDirection = 2,
    VectorParameter = 3,
    WayPointDirection = 4,
    Acceleration = 5,
    SlopeNormal = 6,
    SlopeNormal_WorldSpace = 7,
    LookTarget = 8,
    LookTarget_WorldSpace = 9,
    WayPointPosition = 10,
    GoalPosition = 11,
    RootMotionVelocity = 12,
    ManualTarget_WorldSpace = 13,
};

/// DampingSpeedFunction
_enum DampingSpeedFunction0 : uint32_t {
    NoDamping = 0,
    Constant = 1,
    Spring = 2,
    AsymmetricSpring = 3,
};

/// AnimNodeNetworkMode
_enum AnimNodeNetworkMode0 : uint32_t {
    ServerAuthoritative = 0,
    ClientSimulate = 1,
};

/// StateActionBehavior
_enum StateActionBehavior0 : uint32_t {
    STATETAGBEHAVIOR_ACTIVE_WHILE_CURRENT = 0,
    STATETAGBEHAVIOR_FIRE_ON_ENTER = 1,
    STATETAGBEHAVIOR_FIRE_ON_EXIT = 2,
    STATETAGBEHAVIOR_FIRE_ON_ENTER_AND_EXIT = 3,
    STATETAGBEHAVIOR_ACTIVE_WHILE_FULLY_BLENDED = 4,
};

/// LinearRootMotionBlendMode_t
_enum LinearRootMotionBlendMode_t0 : uint32_t {
    LERP = 0,
    NLERP = 1,
    SLERP = 2,
};

/// AnimParamNetworkSetting
_enum AnimParamNetworkSetting0 : uint32_t {
    Auto = 0,
    AlwaysNetwork = 1,
    NeverNetwork = 2,
};

/// FootstepLandedFootSoundType_t
_enum FootstepLandedFootSoundType_t0 : uint32_t {
    FOOTSOUND_Left = 0,
    FOOTSOUND_Right = 1,
    FOOTSOUND_UseOverrideSound = 2,
};

/// FootstepJumpPhase_t
_enum FootstepJumpPhase_t0 : uint8_t {
    Unknown = 0,
    NotJumping = 1,
    Jumping = 2,
    Landing = 4,
};

/// AnimParamButton_t
_enum AnimParamButton_t0 : uint32_t {
    ANIMPARAM_BUTTON_NONE = 0,
    ANIMPARAM_BUTTON_DPAD_UP = 1,
    ANIMPARAM_BUTTON_DPAD_RIGHT = 2,
    ANIMPARAM_BUTTON_DPAD_DOWN = 3,
    ANIMPARAM_BUTTON_DPAD_LEFT = 4,
    ANIMPARAM_BUTTON_A = 5,
    ANIMPARAM_BUTTON_B = 6,
    ANIMPARAM_BUTTON_X = 7,
    ANIMPARAM_BUTTON_Y = 8,
    ANIMPARAM_BUTTON_LEFT_SHOULDER = 9,
    ANIMPARAM_BUTTON_RIGHT_SHOULDER = 10,
    ANIMPARAM_BUTTON_LTRIGGER = 11,
    ANIMPARAM_BUTTON_RTRIGGER = 12,
};

/// AnimParamVectorType_t
_enum AnimParamVectorType_t0 : uint32_t {
    ANIMPARAM_VECTOR_TYPE_NONE = 0,
    ANIMPARAM_VECTOR_TYPE_POSITION_WS = 1,
    ANIMPARAM_VECTOR_TYPE_POSITION_LS = 2,
    ANIMPARAM_VECTOR_TYPE_DIRECTION_WS = 3,
    ANIMPARAM_VECTOR_TYPE_DIRECTION_LS = 4,
};

/// AnimParamType_t
_enum AnimParamType_t0 : uint8_t {
    ANIMPARAM_UNKNOWN = 0,
    ANIMPARAM_BOOL = 1,
    ANIMPARAM_ENUM = 2,
    ANIMPARAM_INT = 3,
    ANIMPARAM_FLOAT = 4,
    ANIMPARAM_VECTOR = 5,
    ANIMPARAM_QUATERNION = 6,
    ANIMPARAM_GLOBALSYMBOL = 7,
    ANIMPARAM_COUNT = 8,
};

/// RagdollPoseControl
_enum RagdollPoseControl0 : uint32_t {
    Absolute = 0,
};

/// FieldNetworkOption
_enum FieldNetworkOption0 : uint32_t {
    Auto = 0,
    ForceEnable = 1,
    ForceDisable = 2,
};

/// FootFallTagFoot_t
_enum FootFallTagFoot_t0 : uint32_t {
    FOOT1 = 0,
    FOOT2 = 1,
    FOOT3 = 2,
    FOOT4 = 3,
    FOOT5 = 4,
    FOOT6 = 5,
    FOOT7 = 6,
    FOOT8 = 7,
};

/// MatterialAttributeTagType_t
_enum MatterialAttributeTagType_t0 : uint32_t {
    MATERIAL_ATTRIBUTE_TAG_VALUE = 0,
    MATERIAL_ATTRIBUTE_TAG_COLOR = 1,
};

/// VelocityMetricMode
_enum VelocityMetricMode0 : uint8_t {
    DirectionOnly = 0,
    MagnitudeOnly = 1,
    DirectionAndMagnitude = 2,
};

/// AimMatrixBlendMode
_enum AimMatrixBlendMode0 : uint32_t {
    AimMatrixBlendMode_None = 0,
    AimMatrixBlendMode_Additive = 1,
    AimMatrixBlendMode_ModelSpaceAdditive = 2,
    AimMatrixBlendMode_BoneMask = 3,
};

/// BoneMaskBlendSpace
_enum BoneMaskBlendSpace0 : uint32_t {
    BlendSpace_Parent = 0,
    BlendSpace_Model = 1,
    BlendSpace_Model_RotationOnly = 2,
    BlendSpace_Model_TranslationOnly = 3,
};

/// JiggleBoneSimSpace
_enum JiggleBoneSimSpace0 : uint32_t {
    SimSpace_Local = 0,
    SimSpace_Model = 1,
    SimSpace_World = 2,
};

/// SolveIKChainAnimNodeDebugSetting
_enum SolveIKChainAnimNodeDebugSetting0 : uint32_t {
    SOLVEIKCHAINANIMNODEDEBUGSETTING_None = 0,
    SOLVEIKCHAINANIMNODEDEBUGSETTING_X_Axis_Circle = 1,
    SOLVEIKCHAINANIMNODEDEBUGSETTING_Y_Axis_Circle = 2,
    SOLVEIKCHAINANIMNODEDEBUGSETTING_Z_Axis_Circle = 3,
    SOLVEIKCHAINANIMNODEDEBUGSETTING_Forward = 4,
    SOLVEIKCHAINANIMNODEDEBUGSETTING_Up = 5,
    SOLVEIKCHAINANIMNODEDEBUGSETTING_Left = 6,
};

/// AnimScriptType
_enum AnimScriptType0 : uint16_t {
    ANIMSCRIPT_TYPE_INVALID = 65535,
    ANIMSCRIPT_FUSE_GENERAL = 0,
    ANIMSCRIPT_FUSE_STATEMACHINE = 1,
};

/// BinaryNodeTiming
_enum BinaryNodeTiming0 : uint32_t {
    UseChild1 = 0,
    UseChild2 = 1,
    SyncChildren = 2,
};

/// BinaryNodeChildOption
_enum BinaryNodeChildOption0 : uint32_t {
    Child1 = 0,
    Child2 = 1,
};

/// BlendKeyType
_enum BlendKeyType0 : uint32_t {
    BlendKey_UserValue = 0,
    BlendKey_Velocity = 1,
    BlendKey_Distance = 2,
    BlendKey_RemainingDistance = 3,
};

/// Blend2DMode
_enum Blend2DMode0 : uint32_t {
    Blend2DMode_General = 0,
    Blend2DMode_Directional = 1,
};

/// ChoiceMethod
_enum ChoiceMethod0 : uint32_t {
    WeightedRandom = 0,
    WeightedRandomNoRepeat = 1,
    Iterate = 2,
    IterateRandom = 3,
};

/// ChoiceChangeMethod
_enum ChoiceChangeMethod0 : uint32_t {
    OnReset = 0,
    OnCycleEnd = 1,
    OnResetOrCycleEnd = 2,
};

/// ChoiceBlendMethod
_enum ChoiceBlendMethod0 : uint32_t {
    SingleBlendTime = 0,
    PerChoiceBlendTimes = 1,
};

/// FootLockSubVisualization
_enum FootLockSubVisualization0 : uint32_t {
    FOOTLOCKSUBVISUALIZATION_ReachabilityAnalysis = 0,
    FOOTLOCKSUBVISUALIZATION_IKSolve = 1,
};

/// FootPinningTimingSource
_enum FootPinningTimingSource0 : uint32_t {
    FootMotion = 0,
    Tag = 1,
    Parameter = 2,
};

/// StepPhase
_enum StepPhase0 : uint32_t {
    StepPhase_OnGround = 0,
    StepPhase_InAir = 1,
};

/// JumpCorrectionMethod
_enum JumpCorrectionMethod0 : uint32_t {
    ScaleMotion = 0,
    AddCorrectionDelta = 1,
};

/// OrientationWarpTargetOffsetMode_t
_enum OrientationWarpTargetOffsetMode_t0 : uint32_t {
    eLiteralValue = 0,
    eParameter = 1,
    eAnimationMovementHeading = 2,
    eAnimationMovementHeadingAtEnd = 3,
};

/// OrientationWarpRootMotionSource_t
_enum OrientationWarpRootMotionSource_t0 : uint32_t {
    eAnimationOrProcedural = 0,
    eAnimationOnly = 1,
    eProceduralOnly = 2,
};

/// OrientationWarpMode_t
_enum OrientationWarpMode_t0 : uint32_t {
    eInvalid = 0,
    eAngle = 1,
    eWorldPosition = 2,
};

/// SelectorTagBehavior_t
_enum SelectorTagBehavior_t0 : uint32_t {
    SelectorTagBehavior_OnWhileCurrent = 0,
    SelectorTagBehavior_OffWhenFinished = 1,
    SelectorTagBehavior_OffBeforeFinished = 2,
};

/// StanceOverrideMode
_enum StanceOverrideMode0 : uint32_t {
    Sequence = 0,
    Node = 1,
};

/// ResetCycleOption
_enum ResetCycleOption0 : uint32_t {
    Beginning = 0,
    SameCycleAsSource = 1,
    InverseSourceCycle = 2,
    FixedValue = 3,
    SameTimeAsSource = 4,
};

/// TargetSelectorAngleMode_t
_enum TargetSelectorAngleMode_t0 : uint32_t {
    eFacingHeading = 0,
    eMoveHeading = 1,
};

/// TargetWarpAngleMode_t
_enum TargetWarpAngleMode_t0 : uint32_t {
    eFacingHeading = 0,
    eMoveHeading = 1,
};

/// TargetWarpCorrectionMethod
_enum TargetWarpCorrectionMethod0 : uint32_t {
    ScaleMotion = 0,
    AddCorrectionDelta = 1,
};

/// TargetWarpTimingMethod
_enum TargetWarpTimingMethod0 : uint32_t {
    ReachDestinationOnRootMotionEnd = 0,
    ReachDestinationOnWarpTagEnd = 1,
};

/// IkEndEffectorType
_enum IkEndEffectorType0 : uint32_t {
    IkEndEffector_Attachment = 0,
    IkEndEffector_Bone = 1,
};

/// IkTargetType
_enum IkTargetType0 : uint32_t {
    IkTarget_Attachment = 0,
    IkTarget_Bone = 1,
    IkTarget_Parameter_ModelSpace = 2,
    IkTarget_Parameter_WorldSpace = 3,
};

/// HandshakeTagType_t
_enum HandshakeTagType_t0 : uint32_t {
    eInvalid = 4294967295,
    eTask = 0,
    eMovement = 1,
    eCount = 2,
};

/// HandshakeTagState_t
_enum HandshakeTagState_t0 : uint8_t {
    eInactive = 0,
    eActive = 1,
    eMomentarilyInactive = 2,
};

/// PoseType_t
_enum PoseType_t0 : uint8_t {
    POSETYPE_STATIC = 0,
    POSETYPE_DYNAMIC = 1,
    POSETYPE_INVALID = 255,
};

/// CAnimationGraphVisualizerPrimitiveType
_enum CAnimationGraphVisualizerPrimitiveType0 : uint32_t {
    ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Text = 0,
    ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Sphere = 1,
    ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Line = 2,
    ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Pie = 3,
    ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Axis = 4,
};

/// FacingMode
_enum FacingMode0 : uint8_t {
    FacingMode_Invalid = 0,
    FacingMode_Manual = 1,
    FacingMode_Path = 2,
    FacingMode_LookTarget = 3,
    FacingMode_ManualPosition = 4,
};

/// IKSolverType
_enum IKSolverType0 : uint32_t {
    IKSOLVER_Perlin = 0,
    IKSOLVER_TwoBone = 1,
    IKSOLVER_Fabrik = 2,
    IKSOLVER_DogLeg3Bone = 3,
    IKSOLVER_CCD = 4,
    IKSOLVER_COUNT = 5,
};

/// EIKEndEffectorRotationFixUpMode
_enum EIKEndEffectorRotationFixUpMode0 : uint32_t {
    None = 0,
    MatchTargetOrientation = 1,
    LookAtTargetForward = 2,
    MaintainParentOrientation = 3,
    Count = 4,
};

/// IKTargetSource
_enum IKTargetSource0 : uint32_t {
    IKTARGETSOURCE_Bone = 0,
    IKTARGETSOURCE_AnimgraphParameter = 1,
    IKTARGETSOURCE_COUNT = 2,
};

/// IKTargetCoordinateSystem
_enum IKTargetCoordinateSystem0 : uint32_t {
    IKTARGETCOORDINATESYSTEM_WorldSpace = 0,
    IKTARGETCOORDINATESYSTEM_ModelSpace = 1,
    IKTARGETCOORDINATESYSTEM_COUNT = 2,
};

/// AttachmentHandle_t
class __declspec(align(1)) AttachmentHandle_t0 {
public:
    uint8_t m_Value; // 0x0
}; // size: 0x1

/// ParticleAttributeIndex_t
class __declspec(align(4)) ParticleAttributeIndex_t0 {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

/// HSequence
class __declspec(align(4)) HSequence0 {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

/// AnimParamID
class __declspec(align(4)) AnimParamID0 {
public:
    uint32_t m_id; // 0x0
}; // size: 0x4

/// CAnimInputDamping
class __declspec(align(8)) CAnimInputDamping0 {
public:
    char pad_00[8];
    DampingSpeedFunction m_speedFunction; // 0x8
    float m_fSpeedScale; // 0xc
    float m_fFallingSpeedScale; // 0x10
    char pad_01[4];
}; // size: 0x18

/// CAnimParamHandle
class __declspec(align(1)) CAnimParamHandle0 {
public:
    AnimParamType_t m_type; // 0x0
    uint8_t m_index; // 0x1
}; // size: 0x2

/// MoodAnimation_t
class __declspec(align(8)) MoodAnimation_t0 {
public:
    // CModelAnimNameWithDeltas m_sName;
    char m_sName[1]; // 0x0
    char pad_00[4];
    float m_flWeight; // 0x8
    char pad_01[4];
}; // size: 0x10

/// MoodAnimationLayer_t
class __declspec(align(8)) MoodAnimationLayer_t0 {
public:
    // CUtlString m_sName;
    char m_sName[1]; // 0x0
    char pad_00[7];
    bool m_bActiveListening; // 0x8
    bool m_bActiveTalking; // 0x9
    // CUtlVector< MoodAnimation_t > m_layerAnimations;
    char pad_01[6];
    char m_layerAnimations[1]; // 0x10
    char pad_02[20];
    CRangeFloat m_flIntensity; // 0x28
    CRangeFloat m_flDurationScale; // 0x30
    bool m_bScaleWithInts; // 0x38
    CRangeFloat m_flNextStart; // 0x3c
    CRangeFloat m_flStartOffset; // 0x44
    CRangeFloat m_flEndOffset; // 0x4c
    float m_flFadeIn; // 0x54
    float m_flFadeOut; // 0x58
    char pad_03[4];
}; // size: 0x60

/// CRangeFloat
class __declspec(align(4)) CRangeFloat0 {
public:
    float m_pValue[2]; // 0x0
}; // size: 0x8

/// CMoodVData
class __declspec(align(8)) CMoodVData0 {
public:
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName;
    char m_sModelName[1]; // 0x0
    char pad_00[220];
    MoodType_t m_nMoodType; // 0xe0
    // CUtlVector< MoodAnimationLayer_t > m_animationLayers;
    char pad_01[4];
    char m_animationLayers[1]; // 0xe8
    char pad_02[23];
}; // size: 0x100

/// AnimationDecodeDebugDumpElement_t
class __declspec(align(8)) AnimationDecodeDebugDumpElement_t0 {
public:
    int32_t m_nEntityIndex; // 0x0
    // CUtlString m_modelName;
    char pad_00[4];
    char m_modelName[1]; // 0x8
    // CUtlVector< CUtlString > m_poseParams;
    char pad_01[7];
    char m_poseParams[1]; // 0x10
    // CUtlVector< CUtlString > m_decodeOps;
    char pad_02[23];
    char m_decodeOps[1]; // 0x28
    // CUtlVector< CUtlString > m_internalOps;
    char pad_03[23];
    char m_internalOps[1]; // 0x40
    // CUtlVector< CUtlString > m_decodedAnims;
    char pad_04[23];
    char m_decodedAnims[1]; // 0x58
    char pad_05[23];
}; // size: 0x70

/// AnimationDecodeDebugDump_t
class __declspec(align(8)) AnimationDecodeDebugDump_t0 {
public:
    AnimationProcessingType_t m_processingType; // 0x0
    // CUtlVector< AnimationDecodeDebugDumpElement_t > m_elems;
    char pad_00[4];
    char m_elems[1]; // 0x8
    char pad_01[23];
}; // size: 0x20

/// AnimationSnapshotBase_t
class __declspec(align(16)) AnimationSnapshotBase_t0 {
public:
    float m_flRealTime; // 0x0
    // matrix3x4a_t m_rootToWorld;
    char pad_00[12];
    char m_rootToWorld[1]; // 0x10
    char pad_01[47];
    bool m_bBonesInWorldSpace; // 0x40
    // CUtlVector< uint32 > m_boneSetupMask;
    char pad_02[7];
    char m_boneSetupMask[1]; // 0x48
    // CUtlVector< matrix3x4a_t > m_boneTransforms;
    char pad_03[23];
    char m_boneTransforms[1]; // 0x60
    // CUtlVector< float32 > m_flexControllers;
    char pad_04[23];
    char m_flexControllers[1]; // 0x78
    char pad_05[20];
    AnimationSnapshotType_t m_SnapshotType; // 0x90
    bool m_bHasDecodeDump; // 0x94
    AnimationDecodeDebugDumpElement_t m_DecodeDump; // 0x98
    char pad_06[8];
}; // size: 0x110

/// AnimationSnapshot_t
class __declspec(align(16)) AnimationSnapshot_t0 {
public:
    char pad_00[272];
    int32_t m_nEntIndex; // 0x110
    // CUtlString m_modelName;
    char pad_01[4];
    char m_modelName[1]; // 0x118
    char pad_02[7];
}; // size: 0x120

/// CAnimBoneDifference
class __declspec(align(8)) CAnimBoneDifference0 {
public:
    // CBufferString m_name;
    char m_name[1]; // 0x0
    // CBufferString m_parent;
    char pad_00[15];
    char m_parent[1]; // 0x10
    char pad_01[12];
    Vector m_posError; // 0x20
    bool m_bHasRotation; // 0x2c
    bool m_bHasMovement; // 0x2d
    char pad_02[2];
}; // size: 0x30

/// CAnimMorphDifference
class __declspec(align(8)) CAnimMorphDifference0 {
public:
    // CBufferString m_name;
    char m_name[1]; // 0x0
    char pad_00[15];
}; // size: 0x10

/// CAnimUserDifference
class __declspec(align(8)) CAnimUserDifference0 {
public:
    // CBufferString m_name;
    char m_name[1]; // 0x0
    char pad_00[12];
    int32_t m_nType; // 0x10
    char pad_01[4];
}; // size: 0x18

/// CAnimEncodeDifference
class __declspec(align(8)) CAnimEncodeDifference0 {
public:
    // CUtlVector< CAnimBoneDifference > m_boneArray;
    char m_boneArray[1]; // 0x0
    // CUtlVector< CAnimMorphDifference > m_morphArray;
    char pad_00[23];
    char m_morphArray[1]; // 0x18
    // CUtlVector< CAnimUserDifference > m_userArray;
    char pad_01[23];
    char m_userArray[1]; // 0x30
    // CUtlVector< uint8 > m_bHasRotationBitArray;
    char pad_02[23];
    char m_bHasRotationBitArray[1]; // 0x48
    // CUtlVector< uint8 > m_bHasMovementBitArray;
    char pad_03[23];
    char m_bHasMovementBitArray[1]; // 0x60
    // CUtlVector< uint8 > m_bHasMorphBitArray;
    char pad_04[23];
    char m_bHasMorphBitArray[1]; // 0x78
    // CUtlVector< uint8 > m_bHasUserBitArray;
    char pad_05[23];
    char m_bHasUserBitArray[1]; // 0x90
    char pad_06[23];
}; // size: 0xa8

/// CAnimEventDefinition
class __declspec(align(8)) CAnimEventDefinition0 {
public:
    char pad_00[8];
    int32_t m_nFrame; // 0x8
    int32_t m_nEndFrame; // 0xc
    float m_flCycle; // 0x10
    float m_flDuration; // 0x14
    // KeyValues3 m_EventData;
    char m_EventData[1]; // 0x18
    // CBufferString m_sLegacyOptions;
    char pad_01[15];
    char m_sLegacyOptions[1]; // 0x28
    // CGlobalSymbol m_sEventName;
    char pad_02[15];
    char m_sEventName[1]; // 0x38
    char pad_03[7];
}; // size: 0x40

/// CAnimMovement
class __declspec(align(4)) CAnimMovement0 {
public:
    int32_t endframe; // 0x0
    int32_t motionflags; // 0x4
    float v0; // 0x8
    float v1; // 0xc
    float angle; // 0x10
    Vector vector; // 0x14
    Vector position; // 0x20
}; // size: 0x2c

/// CAnimLocalHierarchy
class __declspec(align(8)) CAnimLocalHierarchy0 {
public:
    // CBufferString m_sBone;
    char m_sBone[1]; // 0x0
    // CBufferString m_sNewParent;
    char pad_00[15];
    char m_sNewParent[1]; // 0x10
    char pad_01[12];
    int32_t m_nStartFrame; // 0x20
    int32_t m_nPeakFrame; // 0x24
    int32_t m_nTailFrame; // 0x28
    int32_t m_nEndFrame; // 0x2c
}; // size: 0x30

/// CAnimDecoder
class __declspec(align(8)) CAnimDecoder0 {
public:
    // CBufferString m_szName;
    char m_szName[1]; // 0x0
    char pad_00[12];
    int32_t m_nVersion; // 0x10
    int32_t m_nType; // 0x14
}; // size: 0x18

/// CAnimFrameSegment
class __declspec(align(8)) CAnimFrameSegment0 {
public:
    int32_t m_nUniqueFrameIndex; // 0x0
    uint32_t m_nLocalElementMasks; // 0x4
    int32_t m_nLocalChannel; // 0x8
    // CUtlBinaryBlock m_container;
    char pad_00[4];
    char m_container[1]; // 0x10
    char pad_01[15];
}; // size: 0x20

/// CAnimFrameBlockAnim
class __declspec(align(8)) CAnimFrameBlockAnim0 {
public:
    int32_t m_nStartFrame; // 0x0
    int32_t m_nEndFrame; // 0x4
    // CUtlVector< int32 > m_segmentIndexArray;
    char m_segmentIndexArray[1]; // 0x8
    char pad_00[23];
}; // size: 0x20

/// CAnimEncodedFrames
class __declspec(align(8)) CAnimEncodedFrames0 {
public:
    // CBufferString m_fileName;
    char m_fileName[1]; // 0x0
    char pad_00[12];
    int32_t m_nFrames; // 0x10
    int32_t m_nFramesPerBlock; // 0x14
    // CUtlVector< CAnimFrameBlockAnim > m_frameblockArray;
    char m_frameblockArray[1]; // 0x18
    char pad_01[16];
    CAnimEncodeDifference m_usageDifferences; // 0x30
}; // size: 0xd8

/// CAnimDesc_Flag
class __declspec(align(1)) CAnimDesc_Flag0 {
public:
    bool m_bLooping; // 0x0
    bool m_bAllZeros; // 0x1
    bool m_bHidden; // 0x2
    bool m_bDelta; // 0x3
    bool m_bLegacyWorldspace; // 0x4
    bool m_bModelDoc; // 0x5
    bool m_bImplicitSeqIgnoreDelta; // 0x6
    bool m_bAnimGraphAdditive; // 0x7
}; // size: 0x8

/// CAnimSequenceParams
class __declspec(align(4)) CAnimSequenceParams0 {
public:
    float m_flFadeInTime; // 0x0
    float m_flFadeOutTime; // 0x4
}; // size: 0x8

/// CAnimDesc
class __declspec(align(16)) CAnimDesc0 {
public:
    // CBufferString m_name;
    char m_name[1]; // 0x0
    char pad_00[15];
    CAnimDesc_Flag m_flags; // 0x10
    float fps; // 0x18
    CAnimEncodedFrames m_Data; // 0x20
    // CUtlVector< CAnimMovement > m_movementArray;
    char m_movementArray[1]; // 0xf8
    // CTransform m_xInitialOffset;
    char pad_01[23];
    char m_xInitialOffset[1]; // 0x110
    // CUtlVector< CAnimEventDefinition > m_eventArray;
    char pad_02[31];
    char m_eventArray[1]; // 0x130
    // CUtlVector< CAnimActivity > m_activityArray;
    char pad_03[23];
    char m_activityArray[1]; // 0x148
    // CUtlVector< CAnimLocalHierarchy > m_hierarchyArray;
    char pad_04[23];
    char m_hierarchyArray[1]; // 0x160
    char pad_05[20];
    float framestalltime; // 0x178
    Vector m_vecRootMin; // 0x17c
    Vector m_vecRootMax; // 0x188
    // CUtlVector< Vector > m_vecBoneWorldMin;
    char pad_06[4];
    char m_vecBoneWorldMin[1]; // 0x198
    // CUtlVector< Vector > m_vecBoneWorldMax;
    char pad_07[23];
    char m_vecBoneWorldMax[1]; // 0x1b0
    char pad_08[20];
    CAnimSequenceParams m_sequenceParams; // 0x1c8
}; // size: 0x1d0

/// CAnimActivity
class __declspec(align(8)) CAnimActivity0 {
public:
    // CBufferString m_name;
    char m_name[1]; // 0x0
    char pad_00[12];
    int32_t m_nActivity; // 0x10
    int32_t m_nFlags; // 0x14
    int32_t m_nWeight; // 0x18
    char pad_01[4];
}; // size: 0x20

/// CAnimData
class __declspec(align(8)) CAnimData0 {
public:
    // CBufferString m_name;
    char pad_00[16];
    char m_name[1]; // 0x10
    // CUtlVector< CAnimDesc > m_animArray;
    char pad_01[15];
    char m_animArray[1]; // 0x20
    // CUtlVector< CAnimDecoder > m_decoderArray;
    char pad_02[23];
    char m_decoderArray[1]; // 0x38
    char pad_03[20];
    int32_t m_nMaxUniqueFrameIndex; // 0x50
    // CUtlVector< CAnimFrameSegment > m_segmentArray;
    char pad_04[4];
    char m_segmentArray[1]; // 0x58
    char pad_05[23];
}; // size: 0x70

/// CAnimBone
class __declspec(align(8)) CAnimBone0 {
public:
    // CBufferString m_name;
    char m_name[1]; // 0x0
    char pad_00[12];
    int32_t m_parent; // 0x10
    Vector m_pos; // 0x14
    // QuaternionStorage m_quat;
    char m_quat[1]; // 0x20
    char pad_01[12];
    float m_scale; // 0x30
    // QuaternionStorage m_qAlignment;
    char m_qAlignment[1]; // 0x34
    char pad_02[12];
    int32_t m_flags; // 0x44
}; // size: 0x48

/// CAnimUser
class __declspec(align(8)) CAnimUser0 {
public:
    // CBufferString m_name;
    char m_name[1]; // 0x0
    char pad_00[12];
    int32_t m_nType; // 0x10
    char pad_01[4];
}; // size: 0x18

/// CAnimDataChannelDesc
class __declspec(align(8)) CAnimDataChannelDesc0 {
public:
    // CBufferString m_szChannelClass;
    char m_szChannelClass[1]; // 0x0
    // CBufferString m_szVariableName;
    char pad_00[15];
    char m_szVariableName[1]; // 0x10
    char pad_01[12];
    int32_t m_nFlags; // 0x20
    int32_t m_nType; // 0x24
    // CBufferString m_szGrouping;
    char m_szGrouping[1]; // 0x28
    // CBufferString m_szDescription;
    char pad_02[15];
    char m_szDescription[1]; // 0x38
    // CUtlVector< CBufferString > m_szElementNameArray;
    char pad_03[15];
    char m_szElementNameArray[1]; // 0x48
    // CUtlVector< int32 > m_nElementIndexArray;
    char pad_04[23];
    char m_nElementIndexArray[1]; // 0x60
    // CUtlVector< uint32 > m_nElementMaskArray;
    char pad_05[23];
    char m_nElementMaskArray[1]; // 0x78
    char pad_06[23];
}; // size: 0x90

/// CAnimKeyData
class __declspec(align(8)) CAnimKeyData0 {
public:
    // CBufferString m_name;
    char m_name[1]; // 0x0
    // CUtlVector< CAnimBone > m_boneArray;
    char pad_00[15];
    char m_boneArray[1]; // 0x10
    // CUtlVector< CAnimUser > m_userArray;
    char pad_01[23];
    char m_userArray[1]; // 0x28
    // CUtlVector< CBufferString > m_morphArray;
    char pad_02[23];
    char m_morphArray[1]; // 0x40
    char pad_03[20];
    int32_t m_nChannelElements; // 0x58
    // CUtlVector< CAnimDataChannelDesc > m_dataChannelArray;
    char pad_04[4];
    char m_dataChannelArray[1]; // 0x60
    char pad_05[23];
}; // size: 0x78

/// CAnimationGroup
class __declspec(align(8)) CAnimationGroup0 {
public:
    char pad_00[16];
    uint32_t m_nFlags; // 0x10
    // CBufferString m_name;
    char pad_01[4];
    char m_name[1]; // 0x18
    // CUtlVector< CStrongHandle< InfoForResourceTypeCAnimData > > m_localHAnimArray_Handle;
    char pad_02[71];
    char m_localHAnimArray_Handle[1]; // 0x60
    // CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > > m_includedGroupArray_Handle;
    char pad_03[23];
    char m_includedGroupArray_Handle[1]; // 0x78
    // CStrongHandle< InfoForResourceTypeCSequenceGroupData > m_directHSeqGroup_Handle;
    char pad_04[23];
    char m_directHSeqGroup_Handle[1]; // 0x90
    CAnimKeyData m_decodeKey; // 0x98
    // CUtlVector< CBufferString > m_szScripts;
    char m_szScripts[1]; // 0x110
    // CUtlVector< CStrongHandleVoid > m_AdditionalExtRefs;
    char pad_05[23];
    char m_AdditionalExtRefs[1]; // 0x128
    char pad_06[31];
}; // size: 0x148

/// CSeqAutoLayerFlag
class __declspec(align(1)) CSeqAutoLayerFlag0 {
public:
    bool m_bPost; // 0x0
    bool m_bSpline; // 0x1
    bool m_bXFade; // 0x2
    bool m_bNoBlend; // 0x3
    bool m_bLocal; // 0x4
    bool m_bPose; // 0x5
    bool m_bFetchFrame; // 0x6
    bool m_bSubtract; // 0x7
}; // size: 0x8

/// CSeqAutoLayer
class __declspec(align(4)) CSeqAutoLayer0 {
public:
    int16_t m_nLocalReference; // 0x0
    int16_t m_nLocalPose; // 0x2
    CSeqAutoLayerFlag m_flags; // 0x4
    float m_start; // 0xc
    float m_peak; // 0x10
    float m_tail; // 0x14
    float m_end; // 0x18
}; // size: 0x1c

/// CSeqIKLock
class __declspec(align(4)) CSeqIKLock0 {
public:
    float m_flPosWeight; // 0x0
    float m_flAngleWeight; // 0x4
    int16_t m_nLocalBone; // 0x8
    bool m_bBonesOrientedAlongPositiveX; // 0xa
    char pad_00[1];
}; // size: 0xc

/// CSeqBoneMaskList
class __declspec(align(8)) CSeqBoneMaskList0 {
public:
    // CBufferString m_sName;
    char m_sName[1]; // 0x0
    // CUtlVector< int16 > m_nLocalBoneArray;
    char pad_00[15];
    char m_nLocalBoneArray[1]; // 0x10
    // CUtlVector< float32 > m_flBoneWeightArray;
    char pad_01[23];
    char m_flBoneWeightArray[1]; // 0x28
    char pad_02[20];
    float m_flDefaultMorphCtrlWeight; // 0x40
    // CUtlVector< std::pair< CBufferString, float32 > > m_morphCtrlWeightArray;
    char pad_03[4];
    char m_morphCtrlWeightArray[1]; // 0x48
    char pad_04[23];
}; // size: 0x60

/// CSeqScaleSet
class __declspec(align(8)) CSeqScaleSet0 {
public:
    // CBufferString m_sName;
    char m_sName[1]; // 0x0
    char pad_00[15];
    bool m_bRootOffset; // 0x10
    Vector m_vRootOffset; // 0x14
    // CUtlVector< int16 > m_nLocalBoneArray;
    char m_nLocalBoneArray[1]; // 0x20
    // CUtlVector< float32 > m_flBoneScaleArray;
    char pad_01[23];
    char m_flBoneScaleArray[1]; // 0x38
    char pad_02[23];
}; // size: 0x50

/// CSeqMultiFetchFlag
class __declspec(align(1)) CSeqMultiFetchFlag0 {
public:
    bool m_bRealtime; // 0x0
    bool m_bCylepose; // 0x1
    bool m_b0D; // 0x2
    bool m_b1D; // 0x3
    bool m_b2D; // 0x4
    bool m_b2D_TRI; // 0x5
}; // size: 0x6

/// CSeqMultiFetch
class __declspec(align(8)) CSeqMultiFetch0 {
public:
    CSeqMultiFetchFlag m_flags; // 0x0
    // CUtlVector< int16 > m_localReferenceArray;
    char pad_00[2];
    char m_localReferenceArray[1]; // 0x8
    char pad_01[20];
    int32_t m_nGroupSize[2]; // 0x20
    int32_t m_nLocalPose[2]; // 0x28
    // CUtlVector< float32 > m_poseKeyArray0;
    char m_poseKeyArray0[1]; // 0x30
    // CUtlVector< float32 > m_poseKeyArray1;
    char pad_02[23];
    char m_poseKeyArray1[1]; // 0x48
    char pad_03[20];
    int32_t m_nLocalCyclePoseParameter; // 0x60
    bool m_bCalculatePoseParameters; // 0x64
    bool m_bFixedBlendWeight; // 0x65
    float m_flFixedBlendWeightVals[2]; // 0x68
}; // size: 0x70

/// CSeqSeqDescFlag
class __declspec(align(1)) CSeqSeqDescFlag0 {
public:
    bool m_bLooping; // 0x0
    bool m_bSnap; // 0x1
    bool m_bAutoplay; // 0x2
    bool m_bPost; // 0x3
    bool m_bHidden; // 0x4
    bool m_bMulti; // 0x5
    bool m_bLegacyDelta; // 0x6
    bool m_bLegacyWorldspace; // 0x7
    bool m_bLegacyCyclepose; // 0x8
    bool m_bLegacyRealtime; // 0x9
    bool m_bModelDoc; // 0xa
}; // size: 0xb

/// CSeqTransition
class __declspec(align(4)) CSeqTransition0 {
public:
    float m_flFadeInTime; // 0x0
    float m_flFadeOutTime; // 0x4
}; // size: 0x8

/// CSeqS1SeqDesc
class __declspec(align(8)) CSeqS1SeqDesc0 {
public:
    // CBufferString m_sName;
    char m_sName[1]; // 0x0
    char pad_00[15];
    CSeqSeqDescFlag m_flags; // 0x10
    CSeqMultiFetch m_fetch; // 0x20
    int32_t m_nLocalWeightlist; // 0x90
    // CUtlVector< CSeqAutoLayer > m_autoLayerArray;
    char pad_01[4];
    char m_autoLayerArray[1]; // 0x98
    // CUtlVector< CSeqIKLock > m_IKLockArray;
    char pad_02[23];
    char m_IKLockArray[1]; // 0xb0
    char pad_03[20];
    CSeqTransition m_transition; // 0xc8
    // KeyValues3 m_SequenceKeys;
    char m_SequenceKeys[1]; // 0xd0
    // CBufferString m_LegacyKeyValueText;
    char pad_04[15];
    char m_LegacyKeyValueText[1]; // 0xe0
    // CUtlVector< CAnimActivity > m_activityArray;
    char pad_05[15];
    char m_activityArray[1]; // 0xf0
    // CUtlVector< CFootMotion > m_footMotion;
    char pad_06[23];
    char m_footMotion[1]; // 0x108
    char pad_07[23];
}; // size: 0x120

/// CFootMotion
class __declspec(align(8)) CFootMotion0 {
public:
    // CUtlVector< CFootStride > m_strides;
    char m_strides[1]; // 0x0
    // CUtlString m_name;
    char pad_00[23];
    char m_name[1]; // 0x18
    char pad_01[7];
    bool m_bAdditive; // 0x20
    char pad_02[7];
}; // size: 0x28

/// CSeqSynthAnimDesc
class __declspec(align(8)) CSeqSynthAnimDesc0 {
public:
    // CBufferString m_sName;
    char m_sName[1]; // 0x0
    char pad_00[15];
    CSeqSeqDescFlag m_flags; // 0x10
    CSeqTransition m_transition; // 0x1c
    int16_t m_nLocalBaseReference; // 0x24
    int16_t m_nLocalBoneMask; // 0x26
    // CUtlVector< CAnimActivity > m_activityArray;
    char m_activityArray[1]; // 0x28
    char pad_01[23];
}; // size: 0x40

/// CSeqCmdLayer
class __declspec(align(4)) CSeqCmdLayer0 {
public:
    int16_t m_cmd; // 0x0
    int16_t m_nLocalReference; // 0x2
    int16_t m_nLocalBonemask; // 0x4
    int16_t m_nDstResult; // 0x6
    int16_t m_nSrcResult; // 0x8
    bool m_bSpline; // 0xa
    float m_flVar1; // 0xc
    float m_flVar2; // 0x10
    int16_t m_nLineNumber; // 0x14
    char pad_00[2];
}; // size: 0x18

/// CSeqPoseSetting
class __declspec(align(8)) CSeqPoseSetting0 {
public:
    // CBufferString m_sPoseParameter;
    char m_sPoseParameter[1]; // 0x0
    // CBufferString m_sAttachment;
    char pad_00[15];
    char m_sAttachment[1]; // 0x10
    // CBufferString m_sReferenceSequence;
    char pad_01[15];
    char m_sReferenceSequence[1]; // 0x20
    char pad_02[12];
    float m_flValue; // 0x30
    bool m_bX; // 0x34
    bool m_bY; // 0x35
    bool m_bZ; // 0x36
    int32_t m_eType; // 0x38
    char pad_03[4];
}; // size: 0x40

/// CSeqCmdSeqDesc
class __declspec(align(8)) CSeqCmdSeqDesc0 {
public:
    // CBufferString m_sName;
    char m_sName[1]; // 0x0
    char pad_00[15];
    CSeqSeqDescFlag m_flags; // 0x10
    CSeqTransition m_transition; // 0x1c
    int16_t m_nFrameRangeSequence; // 0x24
    int16_t m_nFrameCount; // 0x26
    float m_flFPS; // 0x28
    int16_t m_nSubCycles; // 0x2c
    int16_t m_numLocalResults; // 0x2e
    // CUtlVector< CSeqCmdLayer > m_cmdLayerArray;
    char m_cmdLayerArray[1]; // 0x30
    // CUtlVector< CAnimEventDefinition > m_eventArray;
    char pad_01[23];
    char m_eventArray[1]; // 0x48
    // CUtlVector< CAnimActivity > m_activityArray;
    char pad_02[23];
    char m_activityArray[1]; // 0x60
    // CUtlVector< CSeqPoseSetting > m_poseSettingArray;
    char pad_03[23];
    char m_poseSettingArray[1]; // 0x78
    char pad_04[23];
}; // size: 0x90

/// CSeqPoseParamDesc
class __declspec(align(8)) CSeqPoseParamDesc0 {
public:
    // CBufferString m_sName;
    char m_sName[1]; // 0x0
    char pad_00[12];
    float m_flStart; // 0x10
    float m_flEnd; // 0x14
    float m_flLoop; // 0x18
    bool m_bLooping; // 0x1c
    char pad_01[3];
}; // size: 0x20

/// CSequenceGroupData
class __declspec(align(8)) CSequenceGroupData0 {
public:
    // CBufferString m_sName;
    char pad_00[16];
    char m_sName[1]; // 0x10
    char pad_01[12];
    uint32_t m_nFlags; // 0x20
    // CUtlVector< CBufferString > m_localSequenceNameArray;
    char pad_02[4];
    char m_localSequenceNameArray[1]; // 0x28
    // CUtlVector< CSeqS1SeqDesc > m_localS1SeqDescArray;
    char pad_03[23];
    char m_localS1SeqDescArray[1]; // 0x40
    // CUtlVector< CSeqS1SeqDesc > m_localMultiSeqDescArray;
    char pad_04[23];
    char m_localMultiSeqDescArray[1]; // 0x58
    // CUtlVector< CSeqSynthAnimDesc > m_localSynthAnimDescArray;
    char pad_05[23];
    char m_localSynthAnimDescArray[1]; // 0x70
    // CUtlVector< CSeqCmdSeqDesc > m_localCmdSeqDescArray;
    char pad_06[23];
    char m_localCmdSeqDescArray[1]; // 0x88
    // CUtlVector< CSeqBoneMaskList > m_localBoneMaskArray;
    char pad_07[23];
    char m_localBoneMaskArray[1]; // 0xa0
    // CUtlVector< CSeqScaleSet > m_localScaleSetArray;
    char pad_08[23];
    char m_localScaleSetArray[1]; // 0xb8
    // CUtlVector< CBufferString > m_localBoneNameArray;
    char pad_09[23];
    char m_localBoneNameArray[1]; // 0xd0
    // CBufferString m_localNodeName;
    char pad_10[23];
    char m_localNodeName[1]; // 0xe8
    // CUtlVector< CSeqPoseParamDesc > m_localPoseParamArray;
    char pad_11[15];
    char m_localPoseParamArray[1]; // 0xf8
    // KeyValues3 m_keyValues;
    char pad_12[23];
    char m_keyValues[1]; // 0x110
    // CUtlVector< CSeqIKLock > m_localIKAutoplayLockArray;
    char pad_13[15];
    char m_localIKAutoplayLockArray[1]; // 0x120
    char pad_014[23];
}; // size: 0x138

/// CCompressorGroup
class __declspec(align(4)) CCompressorGroup0 {
public:
    int32_t m_nTotalElementCount; // 0x0
    // CUtlVector< char* > m_szChannelClass;
    char pad_00[4];
    char m_szChannelClass[1]; // 0x8
    // CUtlVector< char* > m_szVariableName;
    char pad_01[23];
    char m_szVariableName[1]; // 0x20
    // CUtlVector< fieldtype_t > m_nType;
    char pad_02[23];
    char m_nType[1]; // 0x38
    // CUtlVector< int32 > m_nFlags;
    char pad_03[23];
    char m_nFlags[1]; // 0x50
    // CUtlVector< CUtlString > m_szGrouping;
    char pad_04[23];
    char m_szGrouping[1]; // 0x68
    // CUtlVector< int32 > m_nCompressorIndex;
    char pad_05[23];
    char m_nCompressorIndex[1]; // 0x80
    // CUtlVector< CUtlVector< char* > > m_szElementNames;
    char pad_06[23];
    char m_szElementNames[1]; // 0x98
    // CUtlVector< CUtlVector< int32 > > m_nElementUniqueID;
    char pad_07[23];
    char m_nElementUniqueID[1]; // 0xb0
    // CUtlVector< uint32 > m_nElementMask;
    char pad_08[23];
    char m_nElementMask[1]; // 0xc8
    // CUtlVector< CCompressor< Vector >* > m_vectorCompressor;
    char pad_09[47];
    char m_vectorCompressor[1]; // 0xf8
    // CUtlVector< CCompressor< QuaternionStorage >* > m_quaternionCompressor;
    char pad_10[23];
    char m_quaternionCompressor[1]; // 0x110
    // CUtlVector< CCompressor< int32 >* > m_intCompressor;
    char pad_11[23];
    char m_intCompressor[1]; // 0x128
    // CUtlVector< CCompressor< bool >* > m_boolCompressor;
    char pad_12[23];
    char m_boolCompressor[1]; // 0x140
    // CUtlVector< CCompressor< Color >* > m_colorCompressor;
    char pad_13[23];
    char m_colorCompressor[1]; // 0x158
    // CUtlVector< CCompressor< Vector2D >* > m_vector2DCompressor;
    char pad_14[23];
    char m_vector2DCompressor[1]; // 0x170
    // CUtlVector< CCompressor< Vector4D >* > m_vector4DCompressor;
    char pad_15[23];
    char m_vector4DCompressor[1]; // 0x188
    char pad_016[23];
}; // size: 0x1a0

/// CAnimEnum
class __declspec(align(1)) CAnimEnum0 {
public:
    uint8_t m_value; // 0x0
}; // size: 0x1

/// FollowAttachmentData
class __declspec(align(4)) FollowAttachmentData0 {
public:
    int32_t m_boneIndex; // 0x0
    AttachmentHandle_t m_attachmentHandle; // 0x4
    char pad_00[3];
}; // size: 0x8

class __declspec(align(1)) CPulseExecCursor {
public:
    char pad_00[208];
}; // size: 0xd0

/// CPulse_RegisterInfo
class __declspec(align(8)) CPulse_RegisterInfo0 {
public:
    PulseRuntimeRegisterIndex_t m_nReg; // 0x0
    // CPulseValueFullType m_Type;
    char pad_00[6];
    char m_Type[1]; // 0x8
    // CKV3MemberNameWithStorage m_OriginName;
    char pad_01[23];
    char m_OriginName[1]; // 0x20
    char pad_02[52];
    int32_t m_nWrittenByInstruction; // 0x58
    int32_t m_nLastReadByInstruction; // 0x5c
}; // size: 0x60

/// PulseRuntimeRegisterIndex_t
class __declspec(align(2)) PulseRuntimeRegisterIndex_t0 {
public:
    int16_t m_Value; // 0x0
}; // size: 0x2

/// CPulse_InstructionDebug
class __declspec(align(8)) CPulse_InstructionDebug0 {
public:
    PulseDocNodeID_t m_nFlowNodeID; // 0x0
    PulseDocNodeID_t m_nValueNodeID; // 0x4
    // CGlobalSymbol m_SequencePointName;
    char m_SequencePointName[1]; // 0x8
    char pad_00[7];
}; // size: 0x10

/// PulseDocNodeID_t
class __declspec(align(4)) PulseDocNodeID_t0 {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

/// CPulse_Chunk
class __declspec(align(8)) CPulse_Chunk0 {
public:
    // CUtlLeanVector< PGDInstruction_t > m_Instructions;
    char m_Instructions[1]; // 0x0
    // CUtlLeanVector< CPulse_RegisterInfo > m_Registers;
    char pad_00[15];
    char m_Registers[1]; // 0x10
    // CUtlLeanVector< CPulse_InstructionDebug > m_InstructionDebugInfos;
    char pad_01[15];
    char m_InstructionDebugInfos[1]; // 0x20
    char pad_02[55];
}; // size: 0x58

/// PGDInstruction_t
class __declspec(align(8)) PGDInstruction_t0 {
public:
    PulseInstructionCode_t m_nCode; // 0x0
    PulseRuntimeVarIndex_t m_nVar; // 0x4
    PulseRuntimeRegisterIndex_t m_nReg0; // 0x8
    PulseRuntimeRegisterIndex_t m_nReg1; // 0xa
    PulseRuntimeRegisterIndex_t m_nReg2; // 0xc
    PulseRuntimeInvokeIndex_t m_nInvokeBindingIndex; // 0x10
    PulseRuntimeChunkIndex_t m_nChunk; // 0x14
    int32_t m_nDestInstruction; // 0x18
    PulseRuntimeCallInfoIndex_t m_nCallInfoIndex; // 0x1c
    PulseRuntimeConstantIndex_t m_nConstIdx; // 0x20
    PulseRuntimeDomainValueIndex_t m_nDomainValueIdx; // 0x22
    PulseRuntimeBlackboardReferenceIndex_t m_nBlackboardReferenceIdx; // 0x24
    char pad_00[18];
}; // size: 0x38

/// CPulse_Variable
class __declspec(align(8)) CPulse_Variable0 {
public:
    // PulseSymbol_t m_Name;
    char m_Name[1]; // 0x0
    // CUtlString m_Description;
    char pad_00[15];
    char m_Description[1]; // 0x10
    // CPulseValueFullType m_Type;
    char pad_01[7];
    char m_Type[1]; // 0x18
    // KeyValues3 m_DefaultValue;
    char pad_02[23];
    char m_DefaultValue[1]; // 0x30
    char pad_03[16];
    PulseVariableKeysSource_t m_nKeysSource; // 0x44
    bool m_bIsPublicBlackboardVariable; // 0x48
    bool m_bIsObservable; // 0x49
    PulseDocNodeID_t m_nEditorNodeID; // 0x4c
}; // size: 0x50

/// CPulse_Constant
class __declspec(align(8)) CPulse_Constant0 {
public:
    // CPulseValueFullType m_Type;
    char m_Type[1]; // 0x0
    // KeyValues3 m_Value;
    char pad_00[23];
    char m_Value[1]; // 0x18
    char pad_01[23];
}; // size: 0x30

/// CPulse_DomainValue
class __declspec(align(8)) CPulse_DomainValue0 {
public:
    PulseDomainValueType_t m_nType; // 0x0
    // CGlobalSymbolCaseSensitive m_Value;
    char pad_00[4];
    char m_Value[1]; // 0x8
    // CPulseValueFullType m_RequiredRuntimeType;
    char pad_01[7];
    char m_RequiredRuntimeType[1]; // 0x10
    char pad_02[31];
}; // size: 0x30

class __declspec(align(8)) CPulse_BlackboardReference {
public:
    // CStrongHandle< InfoForResourceTypeIPulseGraphDef > m_hBlackboardResource;
    char m_hBlackboardResource[1]; // 0x0
    // PulseSymbol_t m_BlackboardResource;
    char pad_00[7];
    char m_BlackboardResource[1]; // 0x8
    char pad_01[12];
    PulseDocNodeID_t m_nNodeID; // 0x18
    // CGlobalSymbol m_NodeName;
    char pad_02[4];
    char m_NodeName[1]; // 0x20
    char pad_03[7];
}; // size: 0x28

/// CPulseRuntimeMethodArg
class __declspec(align(16)) CPulseRuntimeMethodArg0 {
public:
    // CKV3MemberNameWithStorage m_Name;
    char m_Name[1]; // 0x0
    // CUtlString m_Description;
    char pad_00[55];
    char m_Description[1]; // 0x38
    // CPulseValueFullType m_Type;
    char pad_01[7];
    char m_Type[1]; // 0x40
    char pad_02[63];
}; // size: 0x80

/// CPulse_PublicOutput
class __declspec(align(8)) CPulse_PublicOutput0 {
public:
    // PulseSymbol_t m_Name;
    char m_Name[1]; // 0x0
    // CUtlString m_Description;
    char pad_00[15];
    char m_Description[1]; // 0x10
    // CUtlLeanVector< CPulseRuntimeMethodArg > m_Args;
    char pad_01[7];
    char m_Args[1]; // 0x18
    char pad_02[15];
}; // size: 0x28

/// CPulse_OutputConnection
class __declspec(align(8)) CPulse_OutputConnection0 {
public:
    // PulseSymbol_t m_SourceOutput;
    char m_SourceOutput[1]; // 0x0
    // PulseSymbol_t m_TargetEntity;
    char pad_00[15];
    char m_TargetEntity[1]; // 0x10
    // PulseSymbol_t m_TargetInput;
    char pad_01[15];
    char m_TargetInput[1]; // 0x20
    // PulseSymbol_t m_Param;
    char pad_02[15];
    char m_Param[1]; // 0x30
    char pad_03[15];
}; // size: 0x40

/// PulseRegisterMap_t
class __declspec(align(1)) PulseRegisterMap_t0 {
public:
    // KeyValues3 m_Inparams;
    char m_Inparams[1]; // 0x0
    // CKV3MemberNameSet m_InparamsWhichCanBeMoved;
    char pad_00[15];
    char m_InparamsWhichCanBeMoved[1]; // 0x10
    // KeyValues3 m_Outparams;
    char pad_01[15];
    char m_Outparams[1]; // 0x20
    char pad_02[15];
}; // size: 0x30

/// PulseRuntimeCellIndex_t
class __declspec(align(4)) PulseRuntimeCellIndex_t0 {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

/// PulseRuntimeChunkIndex_t
class __declspec(align(4)) PulseRuntimeChunkIndex_t0 {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

class __declspec(align(8)) CPulse_InvokeBinding {
public:
    PulseRegisterMap_t m_RegisterMap; // 0x0
    // PulseSymbol_t m_FuncName;
    char m_FuncName[1]; // 0x30
    char pad_00[12];
    PulseRuntimeCellIndex_t m_nCellIndex; // 0x40
    PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x44
    int32_t m_nSrcInstruction; // 0x48
    char pad_01[100];
}; // size: 0xb0

class __declspec(align(8)) CPulse_CallInfo {
public:
    // PulseSymbol_t m_PortName;
    char m_PortName[1]; // 0x0
    char pad_00[12];
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
    char pad_00[8];
    char m_DomainIdentifier[1]; // 0x8
    // CPulseValueFullType m_DomainSubType;
    char pad_01[15];
    char m_DomainSubType[1]; // 0x18
    // PulseSymbol_t m_ParentMapName;
    char pad_02[23];
    char m_ParentMapName[1]; // 0x30
    // PulseSymbol_t m_ParentXmlName;
    char pad_03[15];
    char m_ParentXmlName[1]; // 0x40
    // CUtlVector< CPulse_Chunk* > m_Chunks;
    char pad_04[15];
    char m_Chunks[1]; // 0x50
    // CUtlVector< CPulseCell_Base* > m_Cells;
    char pad_05[23];
    char m_Cells[1]; // 0x68
    // CUtlVector< CPulse_Variable > m_Vars;
    char pad_06[23];
    char m_Vars[1]; // 0x80
    // CUtlVector< CPulse_PublicOutput > m_PublicOutputs;
    char pad_07[23];
    char m_PublicOutputs[1]; // 0x98
    // CUtlVector< CPulse_InvokeBinding* > m_InvokeBindings;
    char pad_08[23];
    char m_InvokeBindings[1]; // 0xb0
    // CUtlVector< CPulse_CallInfo* > m_CallInfos;
    char pad_09[23];
    char m_CallInfos[1]; // 0xc8
    // CUtlVector< CPulse_Constant > m_Constants;
    char pad_10[23];
    char m_Constants[1]; // 0xe0
    // CUtlVector< CPulse_DomainValue > m_DomainValues;
    char pad_11[23];
    char m_DomainValues[1]; // 0xf8
    // CUtlVector< CPulse_BlackboardReference > m_BlackboardReferences;
    char pad_12[23];
    char m_BlackboardReferences[1]; // 0x110
    // CUtlVector< CPulse_OutputConnection* > m_OutputConnections;
    char pad_13[23];
    char m_OutputConnections[1]; // 0x128
    char pad_014[111];
}; // size: 0x198

class __declspec(align(1)) CBasePulseGraphInstance {
public:
    char pad_00[280];
}; // size: 0x118

/// PulseGraphExecutionHistoryEntry_t
class __declspec(align(8)) PulseGraphExecutionHistoryEntry_t0 {
public:
    PulseCursorID_t nCursorID; // 0x0
    PulseDocNodeID_t nEditorID; // 0x4
    float flExecTime; // 0x8
    uint32_t unFlags; // 0xc
    // PulseSymbol_t tagName;
    char tagName[1]; // 0x10
    char pad_00[15];
}; // size: 0x20

/// PulseCursorID_t
class __declspec(align(4)) PulseCursorID_t0 {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

/// PulseGraphExecutionHistoryNodeDesc_t
class __declspec(align(8)) PulseGraphExecutionHistoryNodeDesc_t0 {
public:
    // CBufferString strCellDesc;
    char strCellDesc[1]; // 0x0
    // PulseSymbol_t strBindingName;
    char pad_00[15];
    char strBindingName[1]; // 0x10
    char pad_01[15];
}; // size: 0x20

/// PulseGraphExecutionHistoryCursorDesc_t
class __declspec(align(8)) PulseGraphExecutionHistoryCursorDesc_t0 {
public:
    // CUtlVector< PulseCursorID_t > vecAncestorCursorIDs;
    char vecAncestorCursorIDs[1]; // 0x0
    char pad_00[20];
    PulseDocNodeID_t nSpawnNodeID; // 0x18
    PulseDocNodeID_t nRetiredAtNodeID; // 0x1c
    float flLastReferenced; // 0x20
    int32_t nLastValidEntryIdx; // 0x24
}; // size: 0x28

/// CPulseGraphExecutionHistory
class __declspec(align(8)) CPulseGraphExecutionHistory0 {
public:
    PulseGraphInstanceID_t m_nInstanceID; // 0x0
    // CUtlString m_strFileName;
    char pad_00[4];
    char m_strFileName[1]; // 0x8
    // CUtlVector< PulseGraphExecutionHistoryEntry_t* > m_vecHistory;
    char pad_01[7];
    char m_vecHistory[1]; // 0x10
    // CUtlOrderedMap< PulseDocNodeID_t, PulseGraphExecutionHistoryNodeDesc_t* > m_mapCellDesc;
    char pad_02[23];
    char m_mapCellDesc[1]; // 0x28
    // CUtlOrderedMap< PulseCursorID_t, PulseGraphExecutionHistoryCursorDesc_t* > m_mapCursorDesc;
    char pad_03[39];
    char m_mapCursorDesc[1]; // 0x50
    char pad_04[39];
}; // size: 0x78

/// PulseGraphInstanceID_t
class __declspec(align(4)) PulseGraphInstanceID_t0 {
public:
    uint32_t m_Value; // 0x0
}; // size: 0x4

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

/// PulseRuntimeCallInfoIndex_t
class __declspec(align(4)) PulseRuntimeCallInfoIndex_t0 {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

/// PulseRuntimeVarIndex_t
class __declspec(align(4)) PulseRuntimeVarIndex_t0 {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

/// PulseRuntimeOutputIndex_t
class __declspec(align(4)) PulseRuntimeOutputIndex_t0 {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

/// PulseRuntimeStateOffset_t
class __declspec(align(2)) PulseRuntimeStateOffset_t0 {
public:
    uint16_t m_Value; // 0x0
}; // size: 0x2

/// PulseRuntimeConstantIndex_t
class __declspec(align(2)) PulseRuntimeConstantIndex_t0 {
public:
    int16_t m_Value; // 0x0
}; // size: 0x2

/// PulseRuntimeDomainValueIndex_t
class __declspec(align(2)) PulseRuntimeDomainValueIndex_t0 {
public:
    int16_t m_Value; // 0x0
}; // size: 0x2

/// PulseRuntimeBlackboardReferenceIndex_t
class __declspec(align(2)) PulseRuntimeBlackboardReferenceIndex_t0 {
public:
    int16_t m_Value; // 0x0
}; // size: 0x2

/// PulseRuntimeInvokeIndex_t
class __declspec(align(4)) PulseRuntimeInvokeIndex_t0 {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

/// PulseRuntimeEntrypointIndex_t
class __declspec(align(4)) PulseRuntimeEntrypointIndex_t0 {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

/// PulseCursorYieldToken_t
class __declspec(align(4)) PulseCursorYieldToken_t0 {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

class __declspec(align(4)) CPulse_OutflowConnection {
public:
    // PulseSymbol_t m_SourceOutflowName;
    char m_SourceOutflowName[1]; // 0x0
    char pad_00[12];
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
    char m_OutflowID[1]; // 0x0
    char pad_00[4];
    CPulse_OutflowConnection m_Connection; // 0x8
}; // size: 0x50

class __declspec(align(8)) PulseNodeDynamicOutflows_t {
public:
    // CUtlVector< PulseNodeDynamicOutflows_t::DynamicOutflow_t > m_Outflows;
    char m_Outflows[1]; // 0x0
    char pad_00[23];
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
    char pad_00[128];
    char m_MethodName[1]; // 0x80
    // CUtlString m_Description;
    char pad_01[15];
    char m_Description[1]; // 0x90
    char pad_02[7];
    bool m_bIsPublic; // 0x98
    // CPulseValueFullType m_ReturnType;
    char pad_03[7];
    char m_ReturnType[1]; // 0xa0
    // CUtlLeanVector< CPulseRuntimeMethodArg > m_Args;
    char pad_04[23];
    char m_Args[1]; // 0xb8
    char pad_05[15];
}; // size: 0xc8

class __declspec(align(8)) CPulseCell_Inflow_EventHandler {
public:
    // PulseSymbol_t m_EventName;
    char pad_00[128];
    char m_EventName[1]; // 0x80
    char pad_01[15];
}; // size: 0x90

class __declspec(align(8)) CPulseCell_Inflow_GraphHook {
public:
    // PulseSymbol_t m_HookName;
    char pad_00[128];
    char m_HookName[1]; // 0x80
    char pad_01[15];
}; // size: 0x90

class __declspec(align(8)) CPulseCell_Inflow_EntOutputHandler {
public:
    // PulseSymbol_t m_SourceEntity;
    char pad_00[128];
    char m_SourceEntity[1]; // 0x80
    // PulseSymbol_t m_SourceOutput;
    char pad_01[15];
    char m_SourceOutput[1]; // 0x90
    // CPulseValueFullType m_ExpectedParamType;
    char pad_02[15];
    char m_ExpectedParamType[1]; // 0xa0
    char pad_03[23];
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
    char pad_00[72];
    char m_Outputs[1]; // 0x48
    char pad_01[23];
}; // size: 0x60

/// CPulseCell_Outflow_CycleOrdered::InstanceState_t
class __declspec(align(4)) CPulseCell_Outflow_CycleOrdered__InstanceState_t {
public:
    int32_t m_nNextIndex; // 0x0
}; // size: 0x4

class __declspec(align(8)) CPulseCell_Outflow_CycleRandom {
public:
    // CUtlVector< CPulse_OutflowConnection > m_Outputs;
    char pad_00[72];
    char m_Outputs[1]; // 0x48
    char pad_01[23];
}; // size: 0x60

class __declspec(align(8)) CPulseCell_Outflow_CycleShuffled {
public:
    // CUtlVector< CPulse_OutflowConnection > m_Outputs;
    char pad_00[72];
    char m_Outputs[1]; // 0x48
    char pad_01[23];
}; // size: 0x60

/// CPulseCell_Outflow_CycleShuffled::InstanceState_t
class __declspec(align(8)) CPulseCell_Outflow_CycleShuffled__InstanceState_t {
public:
    // CUtlVectorFixedGrowable< uint8, 8 > m_Shuffle;
    char m_Shuffle[1]; // 0x0
    char pad_00[28];
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
    char pad_00[72];
    char m_MethodName[1]; // 0x48
    // PulseSymbol_t m_GameBlackboard;
    char pad_01[15];
    char m_GameBlackboard[1]; // 0x58
    // CUtlLeanVector< CPulseRuntimeMethodArg > m_ExpectedArgs;
    char pad_02[15];
    char m_ExpectedArgs[1]; // 0x68
    char pad_03[12];
    PulseMethodCallMode_t m_nAsyncCallMode; // 0x78
    char pad_04[4];
    CPulse_ResumePoint m_OnFinished; // 0x80
}; // size: 0xc8

class __declspec(align(8)) CPulseCell_Unknown {
public:
    // KeyValues3 m_UnknownKeys;
    char pad_00[72];
    char m_UnknownKeys[1]; // 0x48
    char pad_01[15];
}; // size: 0x58

class __declspec(align(8)) CPulseCell_Value_Curve {
public:
    // CPiecewiseCurve m_Curve;
    char pad_00[72];
    char m_Curve[1]; // 0x48
    char pad_01[63];
}; // size: 0x88

class __declspec(align(8)) CPulseCell_FireCursors {
public:
    // CUtlVector< CPulse_OutflowConnection > m_Outflows;
    char pad_00[72];
    char m_Outflows[1]; // 0x48
    char pad_01[23];
    bool m_bWaitForChildOutflows; // 0x60
    char pad_02[7];
    CPulse_ResumePoint m_OnFinished; // 0x68
    CPulse_ResumePoint m_OnCanceled; // 0xb0
}; // size: 0xf8

class __declspec(align(8)) CPulseCell_Value_Gradient {
public:
    // CColorGradient m_Gradient;
    char pad_00[72];
    char m_Gradient[1]; // 0x48
    char pad_01[23];
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
    char pad_00[4];
    char m_RequirementNodeIDs[1]; // 0x50
    // CUtlVector< int32 > m_nCursorStateBlockIndex;
    char pad_01[23];
    char m_nCursorStateBlockIndex[1]; // 0x68
    char pad_02[23];
}; // size: 0x80

class __declspec(align(8)) PulseSelectorOutflowList_t {
public:
    // CUtlVector< OutflowWithRequirements_t > m_Outflows;
    char m_Outflows[1]; // 0x0
    char pad_00[23];
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
    char pad_00[72];
    char m_TimelineEvents[1]; // 0x48
    char pad_01[23];
    bool m_bWaitForChildOutflows; // 0x60
    char pad_02[7];
    CPulse_ResumePoint m_OnFinished; // 0x68
    CPulse_ResumePoint m_OnCanceled; // 0xb0
}; // size: 0xf8

class __declspec(align(8)) PulseObservableBoolExpression_t {
public:
    CPulse_OutflowConnection m_EvaluateConnection; // 0x0
    // CUtlVector< PulseRuntimeVarIndex_t > m_DependentObservableVars;
    char m_DependentObservableVars[1]; // 0x48
    // CUtlVector< PulseRuntimeBlackboardReferenceIndex_t > m_DependentObservableBlackboardReferences;
    char pad_00[23];
    char m_DependentObservableBlackboardReferences[1]; // 0x60
    char pad_01[23];
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
    char m_TagName[1]; // 0x0
    char pad_00[47];
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

/// CParticleInput
class __declspec(align(8)) CParticleInput0 {
public:
    char pad_00[16];
}; // size: 0x10

/// CParticleFloatInput
class __declspec(align(8)) CParticleFloatInput0 {
public:
    char pad_00[16];
    ParticleFloatType_t m_nType; // 0x10
    ParticleFloatMapType_t m_nMapType; // 0x14
    float m_flLiteralValue; // 0x18
    // CParticleNamedValueRef m_NamedValue;
    char pad_01[4];
    char m_NamedValue[1]; // 0x20
    char pad_02[60];
    int32_t m_nControlPoint; // 0x60
    ParticleAttributeIndex_t m_nScalarAttribute; // 0x64
    ParticleAttributeIndex_t m_nVectorAttribute; // 0x68
    int32_t m_nVectorComponent; // 0x6c
    bool m_bReverseOrder; // 0x70
    float m_flRandomMin; // 0x74
    float m_flRandomMax; // 0x78
    bool m_bHasRandomSignFlip; // 0x7c
    int32_t m_nRandomSeed; // 0x80
    ParticleFloatRandomMode_t m_nRandomMode; // 0x84
    // CUtlString m_strSnapshotSubset;
    char pad_03[8];
    char m_strSnapshotSubset[1]; // 0x90
    char pad_04[4];
    float m_flLOD0; // 0x98
    float m_flLOD1; // 0x9c
    float m_flLOD2; // 0xa0
    float m_flLOD3; // 0xa4
    ParticleAttributeIndex_t m_nNoiseInputVectorAttribute; // 0xa8
    float m_flNoiseOutputMin; // 0xac
    float m_flNoiseOutputMax; // 0xb0
    float m_flNoiseScale; // 0xb4
    Vector m_vecNoiseOffsetRate; // 0xb8
    float m_flNoiseOffset; // 0xc4
    int32_t m_nNoiseOctaves; // 0xc8
    PFNoiseTurbulence_t m_nNoiseTurbulence; // 0xcc
    PFNoiseType_t m_nNoiseType; // 0xd0
    PFNoiseModifier_t m_nNoiseModifier; // 0xd4
    float m_flNoiseTurbulenceScale; // 0xd8
    float m_flNoiseTurbulenceMix; // 0xdc
    float m_flNoiseImgPreviewScale; // 0xe0
    bool m_bNoiseImgPreviewLive; // 0xe4
    char pad_05[8];
    float m_flNoCameraFallback; // 0xf0
    bool m_bUseBoundsCenter; // 0xf4
    ParticleFloatInputMode_t m_nInputMode; // 0xf8
    float m_flMultFactor; // 0xfc
    float m_flInput0; // 0x100
    float m_flInput1; // 0x104
    float m_flOutput0; // 0x108
    float m_flOutput1; // 0x10c
    float m_flNotchedRangeMin; // 0x110
    float m_flNotchedRangeMax; // 0x114
    float m_flNotchedOutputOutside; // 0x118
    float m_flNotchedOutputInside; // 0x11c
    ParticleFloatRoundType_t m_nRoundType; // 0x120
    ParticleFloatBiasType_t m_nBiasType; // 0x124
    float m_flBiasParameter; // 0x128
    // CPiecewiseCurve m_Curve;
    char pad_06[4];
    char m_Curve[1]; // 0x130
    char pad_07[63];
}; // size: 0x170

/// CPerParticleFloatInput
class __declspec(align(8)) CPerParticleFloatInput0 {
public:
    char pad_00[368];
}; // size: 0x170

/// CParticleCollectionFloatInput
class __declspec(align(8)) CParticleCollectionFloatInput0 {
public:
    char pad_00[368];
}; // size: 0x170

/// CParticleCollectionRendererFloatInput
class __declspec(align(8)) CParticleCollectionRendererFloatInput0 {
public:
    char pad_00[368];
}; // size: 0x170

/// CParticleRemapFloatInput
class __declspec(align(8)) CParticleRemapFloatInput0 {
public:
    char pad_00[368];
}; // size: 0x170

/// CParticleTransformInput
class __declspec(align(8)) CParticleTransformInput0 {
public:
    char pad_00[16];
    ParticleTransformType_t m_nType; // 0x10
    // CParticleNamedValueRef m_NamedValue;
    char pad_01[4];
    char m_NamedValue[1]; // 0x18
    char pad_02[63];
    bool m_bFollowNamedValue; // 0x58
    bool m_bSupportsDisabled; // 0x59
    bool m_bUseOrientation; // 0x5a
    int32_t m_nControlPoint; // 0x5c
    int32_t m_nControlPointRangeMax; // 0x60
    float m_flEndCPGrowthTime; // 0x64
}; // size: 0x68

/// CParticleModelInput
class __declspec(align(8)) CParticleModelInput0 {
public:
    char pad_00[16];
    ParticleModelType_t m_nType; // 0x10
    // CParticleNamedValueRef m_NamedValue;
    char pad_01[4];
    char m_NamedValue[1]; // 0x18
    char pad_02[60];
    int32_t m_nControlPoint; // 0x58
    char pad_03[4];
}; // size: 0x60

/// CParticleVecInput
class __declspec(align(8)) CParticleVecInput0 {
public:
    char pad_00[16];
    ParticleVecType_t m_nType; // 0x10
    Vector m_vLiteralValue; // 0x14
    // Color m_LiteralColor;
    char m_LiteralColor[1]; // 0x20
    // CParticleNamedValueRef m_NamedValue;
    char pad_01[7];
    char m_NamedValue[1]; // 0x28
    char pad_02[63];
    bool m_bFollowNamedValue; // 0x68
    ParticleAttributeIndex_t m_nVectorAttribute; // 0x6c
    Vector m_vVectorAttributeScale; // 0x70
    int32_t m_nControlPoint; // 0x7c
    int32_t m_nDeltaControlPoint; // 0x80
    Vector m_vCPValueScale; // 0x84
    Vector m_vCPRelativePosition; // 0x90
    Vector m_vCPRelativeDir; // 0x9c
    CParticleFloatInput m_FloatComponentX; // 0xa8
    CParticleFloatInput m_FloatComponentY; // 0x218
    CParticleFloatInput m_FloatComponentZ; // 0x388
    CParticleFloatInput m_FloatInterp; // 0x4f8
    float m_flInterpInput0; // 0x668
    float m_flInterpInput1; // 0x66c
    Vector m_vInterpOutput0; // 0x670
    Vector m_vInterpOutput1; // 0x67c
    // CColorGradient m_Gradient;
    char m_Gradient[1]; // 0x688
    char pad_03[20];
    Vector m_vRandomMin; // 0x6a0
    Vector m_vRandomMax; // 0x6ac
}; // size: 0x6b8

/// CPerParticleVecInput
class __declspec(align(8)) CPerParticleVecInput0 {
public:
    char pad_00[1720];
}; // size: 0x6b8

/// CParticleCollectionVecInput
class __declspec(align(8)) CParticleCollectionVecInput0 {
public:
    char pad_00[1720];
}; // size: 0x6b8

/// CParticleCollectionRendererVecInput
class __declspec(align(8)) CParticleCollectionRendererVecInput0 {
public:
    char pad_00[1720];
}; // size: 0x6b8

/// PARTICLE_EHANDLE__
class __declspec(align(4)) PARTICLE_EHANDLE__0 {
public:
    int32_t unused; // 0x0
}; // size: 0x4

/// IParticleEffect
class __declspec(align(1)) IParticleEffect0 {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(1)) CParticleCollectionBindingInstance {
public:
    char pad_00[312];
}; // size: 0x138

class __declspec(align(1)) CParticleBindingRealPulse {
public:
    char pad_00[312];
}; // size: 0x138

/// ParticleNamedValueConfiguration_t
class __declspec(align(8)) ParticleNamedValueConfiguration_t0 {
public:
    // CUtlString m_ConfigName;
    char m_ConfigName[1]; // 0x0
    // KeyValues3 m_ConfigValue;
    char pad_00[7];
    char m_ConfigValue[1]; // 0x8
    // CUtlString m_BoundValuePath;
    char pad_01[15];
    char m_BoundValuePath[1]; // 0x18
    char pad_02[4];
    ParticleAttachment_t m_iAttachType; // 0x20
    // CUtlString m_strEntityScope;
    char pad_03[4];
    char m_strEntityScope[1]; // 0x28
    // CUtlString m_strAttachmentName;
    char pad_04[7];
    char m_strAttachmentName[1]; // 0x30
    char pad_05[7];
}; // size: 0x38

/// ParticleNamedValueSource_t
class __declspec(align(8)) ParticleNamedValueSource_t0 {
public:
    // CUtlString m_Name;
    char m_Name[1]; // 0x0
    char pad_00[7];
    bool m_IsPublic; // 0x8
    // CPulseValueFullType m_ValueType;
    char pad_01[7];
    char m_ValueType[1]; // 0x10
    char pad_02[16];
    ParticleNamedValueConfiguration_t m_DefaultConfig; // 0x28
}; // size: 0x60

/// CParticleVariableRef
class __declspec(align(8)) CParticleVariableRef0 {
public:
    // CKV3MemberNameWithStorage m_variableName;
    char m_variableName[1]; // 0x0
    // CPulseValueFullType m_variableType;
    char pad_00[55];
    char m_variableType[1]; // 0x38
    char pad_01[23];
}; // size: 0x50

/// CParticleProperty
class __declspec(align(1)) CParticleProperty0 {
public:
    char pad_00[40];
}; // size: 0x28

/// CNewParticleEffect
class __declspec(align(8)) CNewParticleEffect0 {
public:
    char pad_00[16];
    CNewParticleEffect* m_pNext; // 0x10
    CNewParticleEffect* m_pPrev; // 0x18
    IParticleCollection* m_pParticles; // 0x20
    char* m_pDebugName; // 0x28
    // bitfield:1 m_bDontRemove;
    // bitfield:1 m_bRemove;
    // bitfield:1 m_bNeedsBBoxUpdate;
    // bitfield:1 m_bIsFirstFrame;
    // bitfield:1 m_bAutoUpdateBBox;
    // bitfield:1 m_bAllocated;
    // bitfield:1 m_bSimulate;
    // bitfield:1 m_bShouldPerformCullCheck;
    // bitfield:1 m_bForceNoDraw;
    // bitfield:1 m_bSuppressScreenSpaceEffect;
    // bitfield:1 m_bShouldSave;
    // bitfield:1 m_bShouldSimulateDuringGamePaused;
    // bitfield:1 m_bShouldCheckFoW;
    // bitfield:1 m_bIsAsyncCreate;
    // bitfield:1 m_bFreezeTransitionActive;
    // bitfield:1 m_bFreezeTargetState;
    // bitfield:1 m_bCanFreeze;
    char pad_01[16];
    Vector m_vSortOrigin; // 0x40
    float m_flScale; // 0x4c
    PARTICLE_EHANDLE__* m_hOwner; // 0x50
    CParticleProperty* m_pOwningParticleProperty; // 0x58
    char pad_02[16];
    float m_flFreezeTransitionStart; // 0x70
    float m_flFreezeTransitionDuration; // 0x74
    float m_flFreezeTransitionOverride; // 0x78
    Vector m_LastMin; // 0x7c
    Vector m_LastMax; // 0x88
    // CSplitScreenSlot m_nSplitScreenUser;
    char m_nSplitScreenUser[1]; // 0x94
    Vector m_vecAggregationCenter; // 0x98
    char pad_03[44];
    int32_t m_RefCount; // 0xd0
    char pad_04[4];
}; // size: 0xd8

/// IParticleCollection
class __declspec(align(1)) IParticleCollection0 {
public:
    char pad_00[16];
}; // size: 0x10

/// AnimNodeID
class __declspec(align(4)) AnimNodeID0 {
public:
    uint32_t m_id; // 0x0
}; // size: 0x4

/// AnimNodeOutputID
class __declspec(align(4)) AnimNodeOutputID0 {
public:
    uint32_t m_id; // 0x0
}; // size: 0x4

/// AnimStateID
class __declspec(align(4)) AnimStateID0 {
public:
    uint32_t m_id; // 0x0
}; // size: 0x4

/// AnimTagID
class __declspec(align(4)) AnimTagID0 {
public:
    uint32_t m_id; // 0x0
}; // size: 0x4

/// AnimComponentID
class __declspec(align(4)) AnimComponentID0 {
public:
    uint32_t m_id; // 0x0
}; // size: 0x4

/// AnimScriptHandle
class __declspec(align(4)) AnimScriptHandle0 {
public:
    uint32_t m_id; // 0x0
}; // size: 0x4

/// CAnimAttachment
class __declspec(align(16)) CAnimAttachment0 {
public:
    // Quaternion[3] m_influenceRotations;
    char m_influenceRotations[1]; // 0x0
    // VectorAligned[3] m_influenceOffsets;
    char pad_00[47];
    char m_influenceOffsets[1]; // 0x30
    char pad_01[44];
    int32_t m_influenceIndices[3]; // 0x60
    float m_influenceWeights[3]; // 0x6c
    uint8_t m_numInfluences; // 0x78
    char pad_02[7];
}; // size: 0x80

/// VPhysics2ShapeDef_t
class __declspec(align(8)) VPhysics2ShapeDef_t0 {
public:
    // CUtlVector< RnSphereDesc_t > m_spheres;
    char m_spheres[1]; // 0x0
    // CUtlVector< RnCapsuleDesc_t > m_capsules;
    char pad_00[23];
    char m_capsules[1]; // 0x18
    // CUtlVector< RnHullDesc_t > m_hulls;
    char pad_01[23];
    char m_hulls[1]; // 0x30
    // CUtlVector< RnMeshDesc_t > m_meshes;
    char pad_02[23];
    char m_meshes[1]; // 0x48
    // CUtlVector< uint16 > m_CollisionAttributeIndices;
    char pad_03[23];
    char m_CollisionAttributeIndices[1]; // 0x60
    char pad_04[23];
}; // size: 0x78

/// RnSphereDesc_t
class __declspec(align(8)) RnSphereDesc_t0 {
public:
    // SphereBase_t< float32 > m_Sphere;
    char pad_00[24];
    char m_Sphere[1]; // 0x18
    char pad_01[15];
}; // size: 0x28

/// RnCapsuleDesc_t
class __declspec(align(8)) RnCapsuleDesc_t0 {
public:
    char pad_00[24];
    RnCapsule_t m_Capsule; // 0x18
    char pad_01[4];
}; // size: 0x38

/// RnHullDesc_t
class __declspec(align(8)) RnHullDesc_t0 {
public:
    char pad_00[24];
    RnHull_t m_Hull; // 0x18
}; // size: 0x110

/// RnMeshDesc_t
class __declspec(align(8)) RnMeshDesc_t0 {
public:
    char pad_00[24];
    RnMesh_t m_Mesh; // 0x18
}; // size: 0xd8

/// VPhysXBodyPart_t
class __declspec(align(8)) VPhysXBodyPart_t0 {
public:
    uint32_t m_nFlags; // 0x0
    float m_flMass; // 0x4
    VPhysics2ShapeDef_t m_rnShape; // 0x8
    uint16_t m_nCollisionAttributeIndex; // 0x80
    uint16_t m_nReserved; // 0x82
    float m_flInertiaScale; // 0x84
    float m_flLinearDamping; // 0x88
    float m_flAngularDamping; // 0x8c
    float m_flLinearDrag; // 0x90
    float m_flAngularDrag; // 0x94
    bool m_bOverrideMassCenter; // 0x98
    Vector m_vMassCenterOverride; // 0x9c
}; // size: 0xa8

/// VPhysXCollisionAttributes_t
class __declspec(align(8)) VPhysXCollisionAttributes_t0 {
public:
    int32_t m_nIncludeDetailLayerCount; // 0x0
    uint32_t m_CollisionGroup; // 0x4
    // CUtlVector< uint32 > m_InteractAs;
    char m_InteractAs[1]; // 0x8
    // CUtlVector< uint32 > m_InteractWith;
    char pad_00[23];
    char m_InteractWith[1]; // 0x20
    // CUtlVector< uint32 > m_InteractExclude;
    char pad_01[23];
    char m_InteractExclude[1]; // 0x38
    // CUtlVector< uint32 > m_DetailLayers;
    char pad_02[23];
    char m_DetailLayers[1]; // 0x50
    // CUtlString m_CollisionGroupString;
    char pad_03[23];
    char m_CollisionGroupString[1]; // 0x68
    // CUtlVector< CUtlString > m_InteractAsStrings;
    char pad_04[7];
    char m_InteractAsStrings[1]; // 0x70
    // CUtlVector< CUtlString > m_InteractWithStrings;
    char pad_05[23];
    char m_InteractWithStrings[1]; // 0x88
    // CUtlVector< CUtlString > m_InteractExcludeStrings;
    char pad_06[23];
    char m_InteractExcludeStrings[1]; // 0xa0
    // CUtlVector< CUtlString > m_DetailLayerStrings;
    char pad_07[23];
    char m_DetailLayerStrings[1]; // 0xb8
    char pad_08[23];
}; // size: 0xd0

/// VPhysXRange_t
class __declspec(align(4)) VPhysXRange_t0 {
public:
    float m_flMin; // 0x0
    float m_flMax; // 0x4
}; // size: 0x8

/// VPhysXConstraintParams_t
class __declspec(align(4)) VPhysXConstraintParams_t0 {
public:
    int8_t m_nType; // 0x0
    int8_t m_nTranslateMotion; // 0x1
    int8_t m_nRotateMotion; // 0x2
    int8_t m_nFlags; // 0x3
    Vector m_anchor; // 0x4
    // QuaternionStorage[2] m_axes;
    char pad_00[12];
    char m_axes[1]; // 0x1c
    char pad_01[28];
    float m_maxForce; // 0x3c
    float m_maxTorque; // 0x40
    float m_linearLimitValue; // 0x44
    float m_linearLimitRestitution; // 0x48
    float m_linearLimitSpring; // 0x4c
    float m_linearLimitDamping; // 0x50
    float m_twistLowLimitValue; // 0x54
    float m_twistLowLimitRestitution; // 0x58
    float m_twistLowLimitSpring; // 0x5c
    float m_twistLowLimitDamping; // 0x60
    float m_twistHighLimitValue; // 0x64
    float m_twistHighLimitRestitution; // 0x68
    float m_twistHighLimitSpring; // 0x6c
    float m_twistHighLimitDamping; // 0x70
    float m_swing1LimitValue; // 0x74
    float m_swing1LimitRestitution; // 0x78
    float m_swing1LimitSpring; // 0x7c
    float m_swing1LimitDamping; // 0x80
    float m_swing2LimitValue; // 0x84
    float m_swing2LimitRestitution; // 0x88
    float m_swing2LimitSpring; // 0x8c
    float m_swing2LimitDamping; // 0x90
    Vector m_goalPosition; // 0x94
    // QuaternionStorage m_goalOrientation;
    char m_goalOrientation[1]; // 0xa0
    char pad_02[12];
    Vector m_goalAngularVelocity; // 0xb0
    float m_driveSpringX; // 0xbc
    float m_driveSpringY; // 0xc0
    float m_driveSpringZ; // 0xc4
    float m_driveDampingX; // 0xc8
    float m_driveDampingY; // 0xcc
    float m_driveDampingZ; // 0xd0
    float m_driveSpringTwist; // 0xd4
    float m_driveSpringSwing; // 0xd8
    float m_driveSpringSlerp; // 0xdc
    float m_driveDampingTwist; // 0xe0
    float m_driveDampingSwing; // 0xe4
    float m_driveDampingSlerp; // 0xe8
    int32_t m_solverIterationCount; // 0xec
    float m_projectionLinearTolerance; // 0xf0
    float m_projectionAngularTolerance; // 0xf4
}; // size: 0xf8

/// VPhysXConstraint2_t
class __declspec(align(4)) VPhysXConstraint2_t0 {
public:
    uint32_t m_nFlags; // 0x0
    uint16_t m_nParent; // 0x4
    uint16_t m_nChild; // 0x6
    VPhysXConstraintParams_t m_params; // 0x8
}; // size: 0x100

/// VPhysXJoint_t
class __declspec(align(16)) VPhysXJoint_t0 {
public:
    uint16_t m_nType; // 0x0
    uint16_t m_nBody1; // 0x2
    uint16_t m_nBody2; // 0x4
    uint16_t m_nFlags; // 0x6
    // CTransform m_Frame1;
    char pad_00[8];
    char m_Frame1[1]; // 0x10
    // CTransform m_Frame2;
    char pad_01[31];
    char m_Frame2[1]; // 0x30
    char pad_02[31];
    bool m_bEnableCollision; // 0x50
    bool m_bIsLinearConstraintDisabled; // 0x51
    bool m_bIsAngularConstraintDisabled; // 0x52
    bool m_bEnableLinearLimit; // 0x53
    VPhysXRange_t m_LinearLimit; // 0x54
    bool m_bEnableLinearMotor; // 0x5c
    Vector m_vLinearTargetVelocity; // 0x60
    float m_flMaxForce; // 0x6c
    bool m_bEnableSwingLimit; // 0x70
    VPhysXRange_t m_SwingLimit; // 0x74
    bool m_bEnableTwistLimit; // 0x7c
    VPhysXRange_t m_TwistLimit; // 0x80
    bool m_bEnableAngularMotor; // 0x88
    Vector m_vAngularTargetVelocity; // 0x8c
    float m_flMaxTorque; // 0x98
    float m_flLinearFrequency; // 0x9c
    float m_flLinearDampingRatio; // 0xa0
    float m_flAngularFrequency; // 0xa4
    float m_flAngularDampingRatio; // 0xa8
    float m_flFriction; // 0xac
    float m_flElasticity; // 0xb0
    float m_flElasticDamping; // 0xb4
    float m_flPlasticity; // 0xb8
    // CUtlString m_Tag;
    char pad_03[4];
    char m_Tag[1]; // 0xc0
    char pad_04[15];
}; // size: 0xd0

/// PhysSoftbodyDesc_t
class __declspec(align(8)) PhysSoftbodyDesc_t0 {
public:
    // CUtlVector< uint32 > m_ParticleBoneHash;
    char m_ParticleBoneHash[1]; // 0x0
    // CUtlVector< RnSoftbodyParticle_t > m_Particles;
    char pad_00[23];
    char m_Particles[1]; // 0x18
    // CUtlVector< RnSoftbodySpring_t > m_Springs;
    char pad_01[23];
    char m_Springs[1]; // 0x30
    // CUtlVector< RnSoftbodyCapsule_t > m_Capsules;
    char pad_02[23];
    char m_Capsules[1]; // 0x48
    // CUtlVector< CTransform > m_InitPose;
    char pad_03[23];
    char m_InitPose[1]; // 0x60
    // CUtlVector< CUtlString > m_ParticleBoneName;
    char pad_04[23];
    char m_ParticleBoneName[1]; // 0x78
    char pad_05[23];
}; // size: 0x90

/// RnSoftbodyParticle_t
class __declspec(align(4)) RnSoftbodyParticle_t0 {
public:
    float m_flMassInv; // 0x0
}; // size: 0x4

/// RnSoftbodySpring_t
class __declspec(align(4)) RnSoftbodySpring_t0 {
public:
    uint16_t m_nParticle[2]; // 0x0
    float m_flLength; // 0x4
}; // size: 0x8

/// RnSoftbodyCapsule_t
class __declspec(align(4)) RnSoftbodyCapsule_t0 {
public:
    Vector m_vCenter; // 0x0
    char pad_00[12];
    float m_flRadius; // 0x18
    uint16_t m_nParticle[2]; // 0x1c
}; // size: 0x20

/// PhysShapeMarkup_t
class __declspec(align(8)) PhysShapeMarkup_t0 {
public:
    int32_t m_nBodyInAggregate; // 0x0
    int32_t m_nShapeInBody; // 0x4
    // CGlobalSymbol m_sHitGroup;
    char m_sHitGroup[1]; // 0x8
    char pad_00[7];
}; // size: 0x10

/// VPhysXAggregateData_t
class __declspec(align(8)) VPhysXAggregateData_t0 {
public:
    uint16_t m_nFlags; // 0x0
    uint16_t m_nRefCounter; // 0x2
    // CUtlVector< uint32 > m_bonesHash;
    char pad_00[4];
    char m_bonesHash[1]; // 0x8
    // CUtlVector< CUtlString > m_boneNames;
    char pad_01[23];
    char m_boneNames[1]; // 0x20
    // CUtlVector< uint16 > m_indexNames;
    char pad_02[23];
    char m_indexNames[1]; // 0x38
    // CUtlVector< uint16 > m_indexHash;
    char pad_03[23];
    char m_indexHash[1]; // 0x50
    // CUtlVector< matrix3x4a_t > m_bindPose;
    char pad_04[23];
    char m_bindPose[1]; // 0x68
    // CUtlVector< VPhysXBodyPart_t > m_parts;
    char pad_05[23];
    char m_parts[1]; // 0x80
    // CUtlVector< PhysShapeMarkup_t > m_shapeMarkups;
    char pad_06[23];
    char m_shapeMarkups[1]; // 0x98
    // CUtlVector< VPhysXConstraint2_t > m_constraints2;
    char pad_07[23];
    char m_constraints2[1]; // 0xb0
    // CUtlVector< VPhysXJoint_t > m_joints;
    char pad_08[23];
    char m_joints[1]; // 0xc8
    char pad_09[16];
    PhysFeModelDesc_t* m_pFeModel; // 0xe0
    // CUtlVector< uint16 > m_boneParents;
    char m_boneParents[1]; // 0xe8
    // CUtlVector< uint32 > m_surfacePropertyHashes;
    char pad_10[23];
    char m_surfacePropertyHashes[1]; // 0x100
    // CUtlVector< VPhysXCollisionAttributes_t > m_collisionAttributes;
    char pad_11[23];
    char m_collisionAttributes[1]; // 0x118
    // CUtlVector< CUtlString > m_debugPartNames;
    char pad_12[23];
    char m_debugPartNames[1]; // 0x130
    // CUtlString m_embeddedKeyvalues;
    char pad_13[23];
    char m_embeddedKeyvalues[1]; // 0x148
    char pad_014[7];
}; // size: 0x150

/// PhysFeModelDesc_t
class __declspec(align(8)) PhysFeModelDesc_t0 {
public:
    // CUtlVector< uint32 > m_CtrlHash;
    char m_CtrlHash[1]; // 0x0
    // CUtlVector< CUtlString > m_CtrlName;
    char pad_00[23];
    char m_CtrlName[1]; // 0x18
    char pad_01[20];
    uint32_t m_nStaticNodeFlags; // 0x30
    uint32_t m_nDynamicNodeFlags; // 0x34
    float m_flLocalForce; // 0x38
    float m_flLocalRotation; // 0x3c
    uint16_t m_nNodeCount; // 0x40
    uint16_t m_nStaticNodes; // 0x42
    uint16_t m_nRotLockStaticNodes; // 0x44
    uint16_t m_nFirstPositionDrivenNode; // 0x46
    uint16_t m_nSimdTriCount1; // 0x48
    uint16_t m_nSimdTriCount2; // 0x4a
    uint16_t m_nSimdQuadCount1; // 0x4c
    uint16_t m_nSimdQuadCount2; // 0x4e
    uint16_t m_nQuadCount1; // 0x50
    uint16_t m_nQuadCount2; // 0x52
    uint16_t m_nTreeDepth; // 0x54
    uint16_t m_nNodeBaseJiggleboneDependsCount; // 0x56
    uint16_t m_nRopeCount; // 0x58
    // CUtlVector< uint16 > m_Ropes;
    char pad_02[6];
    char m_Ropes[1]; // 0x60
    // CUtlVector< FeNodeBase_t > m_NodeBases;
    char pad_03[23];
    char m_NodeBases[1]; // 0x78
    // CUtlVector< FeSimdNodeBase_t > m_SimdNodeBases;
    char pad_04[23];
    char m_SimdNodeBases[1]; // 0x90
    // CUtlVector< FeQuad_t > m_Quads;
    char pad_05[23];
    char m_Quads[1]; // 0xa8
    // CUtlVector< FeSimdQuad_t > m_SimdQuads;
    char pad_06[23];
    char m_SimdQuads[1]; // 0xc0
    // CUtlVector< FeSimdTri_t > m_SimdTris;
    char pad_07[23];
    char m_SimdTris[1]; // 0xd8
    // CUtlVector< FeSimdRodConstraint_t > m_SimdRods;
    char pad_08[23];
    char m_SimdRods[1]; // 0xf0
    // CUtlVector< FeSimdRodConstraintAnim_t > m_SimdRodsAnim;
    char pad_09[23];
    char m_SimdRodsAnim[1]; // 0x108
    // CUtlVector< CTransform > m_InitPose;
    char pad_10[23];
    char m_InitPose[1]; // 0x120
    // CUtlVector< FeRodConstraint_t > m_Rods;
    char pad_11[23];
    char m_Rods[1]; // 0x138
    // CUtlVector< FeTwistConstraint_t > m_Twists;
    char pad_12[23];
    char m_Twists[1]; // 0x150
    // CUtlVector< FeHingeLimit_t > m_HingeLimits;
    char pad_13[23];
    char m_HingeLimits[1]; // 0x168
    // CUtlVector< uint32 > m_AntiTunnelBytecode;
    char pad_14[23];
    char m_AntiTunnelBytecode[1]; // 0x180
    // CUtlVector< FeDynKinLink_t > m_DynKinLinks;
    char pad_15[23];
    char m_DynKinLinks[1]; // 0x198
    // CUtlVector< FeAntiTunnelProbe_t > m_AntiTunnelProbes;
    char pad_16[23];
    char m_AntiTunnelProbes[1]; // 0x1b0
    // CUtlVector< uint16 > m_AntiTunnelTargetNodes;
    char pad_17[23];
    char m_AntiTunnelTargetNodes[1]; // 0x1c8
    // CUtlVector< FeNodeStrayBox_t > m_NodeStrayBoxes;
    char pad_18[23];
    char m_NodeStrayBoxes[1]; // 0x1e0
    // CUtlVector< FeAxialEdgeBend_t > m_AxialEdges;
    char pad_19[23];
    char m_AxialEdges[1]; // 0x1f8
    // CUtlVector< float32 > m_NodeInvMasses;
    char pad_20[23];
    char m_NodeInvMasses[1]; // 0x210
    // CUtlVector< FeCtrlOffset_t > m_CtrlOffsets;
    char pad_21[23];
    char m_CtrlOffsets[1]; // 0x228
    // CUtlVector< FeCtrlOsOffset_t > m_CtrlOsOffsets;
    char pad_22[23];
    char m_CtrlOsOffsets[1]; // 0x240
    // CUtlVector< FeFollowNode_t > m_FollowNodes;
    char pad_23[23];
    char m_FollowNodes[1]; // 0x258
    // CUtlVector< FeCollisionPlane_t > m_CollisionPlanes;
    char pad_24[23];
    char m_CollisionPlanes[1]; // 0x270
    // CUtlVector< FeNodeIntegrator_t > m_NodeIntegrator;
    char pad_25[23];
    char m_NodeIntegrator[1]; // 0x288
    // CUtlVector< FeSpringIntegrator_t > m_SpringIntegrator;
    char pad_26[23];
    char m_SpringIntegrator[1]; // 0x2a0
    // CUtlVector< FeSimdSpringIntegrator_t > m_SimdSpringIntegrator;
    char pad_27[23];
    char m_SimdSpringIntegrator[1]; // 0x2b8
    // CUtlVector< FeWorldCollisionParams_t > m_WorldCollisionParams;
    char pad_28[23];
    char m_WorldCollisionParams[1]; // 0x2d0
    // CUtlVector< float32 > m_LegacyStretchForce;
    char pad_29[23];
    char m_LegacyStretchForce[1]; // 0x2e8
    // CUtlVector< float32 > m_NodeCollisionRadii;
    char pad_30[23];
    char m_NodeCollisionRadii[1]; // 0x300
    // CUtlVector< float32 > m_DynNodeFriction;
    char pad_31[23];
    char m_DynNodeFriction[1]; // 0x318
    // CUtlVector< float32 > m_LocalRotation;
    char pad_32[23];
    char m_LocalRotation[1]; // 0x330
    // CUtlVector< float32 > m_LocalForce;
    char pad_33[23];
    char m_LocalForce[1]; // 0x348
    // CUtlVector< FeTaperedCapsuleStretch_t > m_TaperedCapsuleStretches;
    char pad_34[23];
    char m_TaperedCapsuleStretches[1]; // 0x360
    // CUtlVector< FeTaperedCapsuleRigid_t > m_TaperedCapsuleRigids;
    char pad_35[23];
    char m_TaperedCapsuleRigids[1]; // 0x378
    // CUtlVector< FeSphereRigid_t > m_SphereRigids;
    char pad_36[23];
    char m_SphereRigids[1]; // 0x390
    // CUtlVector< uint16 > m_WorldCollisionNodes;
    char pad_37[23];
    char m_WorldCollisionNodes[1]; // 0x3a8
    // CUtlVector< uint16 > m_TreeParents;
    char pad_38[23];
    char m_TreeParents[1]; // 0x3c0
    // CUtlVector< uint16 > m_TreeCollisionMasks;
    char pad_39[23];
    char m_TreeCollisionMasks[1]; // 0x3d8
    // CUtlVector< FeTreeChildren_t > m_TreeChildren;
    char pad_40[23];
    char m_TreeChildren[1]; // 0x3f0
    // CUtlVector< uint16 > m_FreeNodes;
    char pad_41[23];
    char m_FreeNodes[1]; // 0x408
    // CUtlVector< FeFitMatrix_t > m_FitMatrices;
    char pad_42[23];
    char m_FitMatrices[1]; // 0x420
    // CUtlVector< FeFitWeight_t > m_FitWeights;
    char pad_43[23];
    char m_FitWeights[1]; // 0x438
    // CUtlVector< FeNodeReverseOffset_t > m_ReverseOffsets;
    char pad_44[23];
    char m_ReverseOffsets[1]; // 0x450
    // CUtlVector< FeAnimStrayRadius_t > m_AnimStrayRadii;
    char pad_45[23];
    char m_AnimStrayRadii[1]; // 0x468
    // CUtlVector< FeSimdAnimStrayRadius_t > m_SimdAnimStrayRadii;
    char pad_46[23];
    char m_SimdAnimStrayRadii[1]; // 0x480
    // CUtlVector< FeKelagerBend2_t > m_KelagerBends;
    char pad_47[23];
    char m_KelagerBends[1]; // 0x498
    // CUtlVector< FeCtrlSoftOffset_t > m_CtrlSoftOffsets;
    char pad_48[23];
    char m_CtrlSoftOffsets[1]; // 0x4b0
    // CUtlVector< CFeIndexedJiggleBone > m_JiggleBones;
    char pad_49[23];
    char m_JiggleBones[1]; // 0x4c8
    // CUtlVector< uint16 > m_SourceElems;
    char pad_50[23];
    char m_SourceElems[1]; // 0x4e0
    // CUtlVector< uint32 > m_GoalDampedSpringIntegrators;
    char pad_51[23];
    char m_GoalDampedSpringIntegrators[1]; // 0x4f8
    // CUtlVector< FeTri_t > m_Tris;
    char pad_52[23];
    char m_Tris[1]; // 0x510
    char pad_53[22];
    uint16_t m_nTriCount1; // 0x528
    uint16_t m_nTriCount2; // 0x52a
    uint8_t m_nReservedUint8; // 0x52c
    uint8_t m_nExtraPressureIterations; // 0x52d
    uint8_t m_nExtraGoalIterations; // 0x52e
    uint8_t m_nExtraIterations; // 0x52f
    // CUtlVector< FeSDFRigid_t > m_SDFRigids;
    char m_SDFRigids[1]; // 0x530
    // CUtlVector< FeBoxRigid_t > m_BoxRigids;
    char pad_54[23];
    char m_BoxRigids[1]; // 0x548
    // CUtlVector< uint8 > m_DynNodeVertexSet;
    char pad_55[23];
    char m_DynNodeVertexSet[1]; // 0x560
    // CUtlVector< uint32 > m_VertexSetNames;
    char pad_56[23];
    char m_VertexSetNames[1]; // 0x578
    // CUtlVector< FeRigidColliderIndices_t > m_RigidColliderPriorities;
    char pad_57[23];
    char m_RigidColliderPriorities[1]; // 0x590
    // CUtlVector< FeMorphLayerDepr_t > m_MorphLayers;
    char pad_58[23];
    char m_MorphLayers[1]; // 0x5a8
    // CUtlVector< uint8 > m_MorphSetData;
    char pad_59[23];
    char m_MorphSetData[1]; // 0x5c0
    // CUtlVector< FeVertexMapDesc_t > m_VertexMaps;
    char pad_60[23];
    char m_VertexMaps[1]; // 0x5d8
    // CUtlVector< uint8 > m_VertexMapValues;
    char pad_61[23];
    char m_VertexMapValues[1]; // 0x5f0
    // CUtlVector< FeEffectDesc_t > m_Effects;
    char pad_62[23];
    char m_Effects[1]; // 0x608
    // CUtlVector< FeCtrlOffset_t > m_LockToParent;
    char pad_63[23];
    char m_LockToParent[1]; // 0x620
    // CUtlVector< uint16 > m_LockToGoal;
    char pad_64[23];
    char m_LockToGoal[1]; // 0x638
    // CUtlVector< int16 > m_SkelParents;
    char pad_65[23];
    char m_SkelParents[1]; // 0x650
    // CUtlVector< FeNodeWindBase_t > m_DynNodeWindBases;
    char pad_66[23];
    char m_DynNodeWindBases[1]; // 0x668
    // CUtlVector< FeModelSelfCollisionLayer_t > m_SelfCollisionLayers;
    char pad_67[23];
    char m_SelfCollisionLayers[1]; // 0x680
    char pad_68[20];
    float m_flInternalPressure; // 0x698
    float m_flDefaultTimeDilation; // 0x69c
    float m_flWindage; // 0x6a0
    float m_flWindDrag; // 0x6a4
    float m_flDefaultSurfaceStretch; // 0x6a8
    float m_flDefaultThreadStretch; // 0x6ac
    float m_flDefaultGravityScale; // 0x6b0
    float m_flDefaultVelAirDrag; // 0x6b4
    float m_flDefaultExpAirDrag; // 0x6b8
    float m_flDefaultVelQuadAirDrag; // 0x6bc
    float m_flDefaultExpQuadAirDrag; // 0x6c0
    float m_flRodVelocitySmoothRate; // 0x6c4
    float m_flQuadVelocitySmoothRate; // 0x6c8
    float m_flAddWorldCollisionRadius; // 0x6cc
    float m_flDefaultVolumetricSolveAmount; // 0x6d0
    float m_flMotionSmoothCDT; // 0x6d4
    float m_flLocalDrag1; // 0x6d8
    uint16_t m_nRodVelocitySmoothIterations; // 0x6dc
    uint16_t m_nQuadVelocitySmoothIterations; // 0x6de
}; // size: 0x6e0

/// CPhysSurfacePropertiesPhysics
class __declspec(align(4)) CPhysSurfacePropertiesPhysics0 {
public:
    float m_friction; // 0x0
    float m_elasticity; // 0x4
    float m_density; // 0x8
    float m_thickness; // 0xc
    float m_softContactFrequency; // 0x10
    float m_softContactDampingRatio; // 0x14
}; // size: 0x18

/// CPhysSurfacePropertiesVehicle
class __declspec(align(4)) CPhysSurfacePropertiesVehicle0 {
public:
    float m_wheelDrag; // 0x0
    float m_wheelFrictionScale; // 0x4
}; // size: 0x8

/// CPhysSurfacePropertiesAudio
class __declspec(align(4)) CPhysSurfacePropertiesAudio0 {
public:
    float m_reflectivity; // 0x0
    float m_hardnessFactor; // 0x4
    float m_roughnessFactor; // 0x8
    float m_roughThreshold; // 0xc
    float m_hardThreshold; // 0x10
    float m_hardVelocityThreshold; // 0x14
    float m_flStaticImpactVolume; // 0x18
    float m_flOcclusionFactor; // 0x1c
}; // size: 0x20

/// CPhysSurfacePropertiesSoundNames
class __declspec(align(8)) CPhysSurfacePropertiesSoundNames0 {
public:
    // CUtlString m_impactSoft;
    char m_impactSoft[1]; // 0x0
    // CUtlString m_impactHard;
    char pad_00[7];
    char m_impactHard[1]; // 0x8
    // CUtlString m_scrapeSmooth;
    char pad_01[7];
    char m_scrapeSmooth[1]; // 0x10
    // CUtlString m_scrapeRough;
    char pad_02[7];
    char m_scrapeRough[1]; // 0x18
    // CUtlString m_bulletImpact;
    char pad_03[7];
    char m_bulletImpact[1]; // 0x20
    // CUtlString m_rolling;
    char pad_04[7];
    char m_rolling[1]; // 0x28
    // CUtlString m_break;
    char pad_05[7];
    char m_break[1]; // 0x30
    // CUtlString m_strain;
    char pad_06[7];
    char m_strain[1]; // 0x38
    // CUtlString m_meleeImpact;
    char pad_07[7];
    char m_meleeImpact[1]; // 0x40
    // CUtlString m_pushOff;
    char pad_08[7];
    char m_pushOff[1]; // 0x48
    // CUtlString m_skidStop;
    char pad_09[7];
    char m_skidStop[1]; // 0x50
    // CUtlString m_resonant;
    char pad_10[7];
    char m_resonant[1]; // 0x58
    char pad_011[7];
}; // size: 0x60

/// CPhysSurfaceProperties
class __declspec(align(8)) CPhysSurfaceProperties0 {
public:
    // CUtlString m_name;
    char m_name[1]; // 0x0
    char pad_00[4];
    uint32_t m_nameHash; // 0x8
    uint32_t m_baseNameHash; // 0xc
    char pad_01[8];
    bool m_bHidden; // 0x18
    // CUtlString m_description;
    char pad_02[7];
    char m_description[1]; // 0x20
    char pad_03[4];
    CPhysSurfacePropertiesPhysics m_physics; // 0x28
    CPhysSurfacePropertiesVehicle m_vehicleParams; // 0x40
    CPhysSurfacePropertiesSoundNames m_audioSounds; // 0x48
    CPhysSurfacePropertiesAudio m_audioParams; // 0xa8
}; // size: 0xc8

/// CVPhysXSurfacePropertiesList
class __declspec(align(8)) CVPhysXSurfacePropertiesList0 {
public:
    // CUtlVector< CPhysSurfaceProperties* > m_surfacePropertiesList;
    char m_surfacePropertiesList[1]; // 0x0
    char pad_00[23];
}; // size: 0x18

/// ModelAnimGraph2Ref_t
class __declspec(align(8)) ModelAnimGraph2Ref_t0 {
public:
    // CUtlString m_sIdentifier;
    char m_sIdentifier[1]; // 0x0
    // CStrongHandle< InfoForResourceTypeCNmGraphDefinition > m_hGraph;
    char pad_00[7];
    char m_hGraph[1]; // 0x8
    char pad_01[7];
}; // size: 0x10

/// MaterialGroup_t
class __declspec(align(8)) MaterialGroup_t0 {
public:
    // CUtlString m_name;
    char m_name[1]; // 0x0
    // CUtlVector< CStrongHandle< InfoForResourceTypeIMaterial2 > > m_materials;
    char pad_00[7];
    char m_materials[1]; // 0x8
    char pad_01[23];
}; // size: 0x20

/// ModelSkeletonData_t
class __declspec(align(8)) ModelSkeletonData_t0 {
public:
    // CUtlVector< CUtlString > m_boneName;
    char m_boneName[1]; // 0x0
    // CUtlVector< int16 > m_nParent;
    char pad_00[23];
    char m_nParent[1]; // 0x18
    // CUtlVector< float32 > m_boneSphere;
    char pad_01[23];
    char m_boneSphere[1]; // 0x30
    // CUtlVector< uint32 > m_nFlag;
    char pad_02[23];
    char m_nFlag[1]; // 0x48
    // CUtlVector< Vector > m_bonePosParent;
    char pad_03[23];
    char m_bonePosParent[1]; // 0x60
    // CUtlVector< QuaternionStorage > m_boneRotParent;
    char pad_04[23];
    char m_boneRotParent[1]; // 0x78
    // CUtlVector< float32 > m_boneScaleParent;
    char pad_05[23];
    char m_boneScaleParent[1]; // 0x90
    char pad_06[23];
}; // size: 0xa8

/// PermModelInfo_t
class __declspec(align(8)) PermModelInfo_t0 {
public:
    uint32_t m_nFlags; // 0x0
    Vector m_vHullMin; // 0x4
    Vector m_vHullMax; // 0x10
    Vector m_vViewMin; // 0x1c
    Vector m_vViewMax; // 0x28
    float m_flMass; // 0x34
    Vector m_vEyePosition; // 0x38
    float m_flMaxEyeDeflection; // 0x44
    // CUtlString m_sSurfaceProperty;
    char m_sSurfaceProperty[1]; // 0x48
    // CUtlString m_keyValueText;
    char pad_00[7];
    char m_keyValueText[1]; // 0x50
    char pad_01[7];
}; // size: 0x58

/// PermModelExtPart_t
class __declspec(align(16)) PermModelExtPart_t0 {
public:
    // CTransform m_Transform;
    char m_Transform[1]; // 0x0
    // CUtlString m_Name;
    char pad_00[31];
    char m_Name[1]; // 0x20
    char pad_01[4];
    int32_t m_nParent; // 0x28
    // CStrongHandle< InfoForResourceTypeCModel > m_refModel;
    char pad_02[4];
    char m_refModel[1]; // 0x30
    char pad_03[15];
}; // size: 0x40

/// ModelBoneFlexDriverControl_t
class __declspec(align(8)) ModelBoneFlexDriverControl_t0 {
public:
    ModelBoneFlexComponent_t m_nBoneComponent; // 0x0
    // CUtlString m_flexController;
    char pad_00[4];
    char m_flexController[1]; // 0x8
    char pad_01[4];
    uint32_t m_flexControllerToken; // 0x10
    float m_flMin; // 0x14
    float m_flMax; // 0x18
    char pad_02[4];
}; // size: 0x20

/// ModelBoneFlexDriver_t
class __declspec(align(8)) ModelBoneFlexDriver_t0 {
public:
    // CUtlString m_boneName;
    char m_boneName[1]; // 0x0
    char pad_00[4];
    uint32_t m_boneNameToken; // 0x8
    // CUtlVector< ModelBoneFlexDriverControl_t > m_controls;
    char pad_01[4];
    char m_controls[1]; // 0x10
    char pad_02[23];
}; // size: 0x28

/// PermModelDataAnimatedMaterialAttribute_t
class __declspec(align(8)) PermModelDataAnimatedMaterialAttribute_t0 {
public:
    // CUtlString m_AttributeName;
    char m_AttributeName[1]; // 0x0
    char pad_00[4];
    int32_t m_nNumChannels; // 0x8
    char pad_01[4];
}; // size: 0x10

/// PermModelData_t
class __declspec(align(8)) PermModelData_t0 {
public:
    // CUtlString m_name;
    char m_name[1]; // 0x0
    PermModelInfo_t m_modelInfo; // 0x8
    // CUtlVector< PermModelExtPart_t > m_ExtParts;
    char m_ExtParts[1]; // 0x60
    // CUtlVector< CStrongHandle< InfoForResourceTypeCRenderMesh > > m_refMeshes;
    char pad_00[23];
    char m_refMeshes[1]; // 0x78
    // CUtlVector< uint64 > m_refMeshGroupMasks;
    char pad_01[23];
    char m_refMeshGroupMasks[1]; // 0x90
    // CUtlVector< uint64 > m_refPhysGroupMasks;
    char pad_02[23];
    char m_refPhysGroupMasks[1]; // 0xa8
    // CUtlVector< uint8 > m_refLODGroupMasks;
    char pad_03[23];
    char m_refLODGroupMasks[1]; // 0xc0
    // CUtlVector< float32 > m_lodGroupSwitchDistances;
    char pad_04[23];
    char m_lodGroupSwitchDistances[1]; // 0xd8
    // CUtlVector< CStrongHandle< InfoForResourceTypeCPhysAggregateData > > m_refPhysicsData;
    char pad_05[23];
    char m_refPhysicsData[1]; // 0xf0
    // CUtlVector< CStrongHandle< InfoForResourceTypeCPhysAggregateData > > m_refPhysicsHitboxData;
    char pad_06[23];
    char m_refPhysicsHitboxData[1]; // 0x108
    // CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > > m_refAnimGroups;
    char pad_07[23];
    char m_refAnimGroups[1]; // 0x120
    // CUtlVector< CStrongHandle< InfoForResourceTypeCSequenceGroupData > > m_refSequenceGroups;
    char pad_08[23];
    char m_refSequenceGroups[1]; // 0x138
    // CUtlVector< CUtlString > m_meshGroups;
    char pad_09[23];
    char m_meshGroups[1]; // 0x150
    // CUtlVector< MaterialGroup_t > m_materialGroups;
    char pad_10[23];
    char m_materialGroups[1]; // 0x168
    char pad_11[16];
    uint64_t m_nDefaultMeshGroupMask; // 0x180
    ModelSkeletonData_t m_modelSkeleton; // 0x188
    // CUtlVector< int16 > m_remappingTable;
    char m_remappingTable[1]; // 0x230
    // CUtlVector< uint16 > m_remappingTableStarts;
    char pad_12[23];
    char m_remappingTableStarts[1]; // 0x248
    // CUtlVector< ModelBoneFlexDriver_t > m_boneFlexDrivers;
    char pad_13[23];
    char m_boneFlexDrivers[1]; // 0x260
    char pad_14[16];
    CModelConfigList* m_pModelConfigList; // 0x278
    // CUtlVector< CUtlString > m_BodyGroupsHiddenInTools;
    char m_BodyGroupsHiddenInTools[1]; // 0x280
    // CUtlVector< CStrongHandle< InfoForResourceTypeCModel > > m_refAnimIncludeModels;
    char pad_15[23];
    char m_refAnimIncludeModels[1]; // 0x298
    // CUtlVector< PermModelDataAnimatedMaterialAttribute_t > m_AnimatedMaterialAttributes;
    char pad_16[23];
    char m_AnimatedMaterialAttributes[1]; // 0x2b0
    // CUtlVector< ModelAnimGraph2Ref_t > m_animGraph2Refs;
    char pad_17[23];
    char m_animGraph2Refs[1]; // 0x2c8
    // CUtlVector< CStrongHandle< InfoForResourceTypeCNmSkeleton > > m_vecNmSkeletonRefs;
    char pad_18[23];
    char m_vecNmSkeletonRefs[1]; // 0x2e0
    char pad_019[23];
}; // size: 0x2f8

/// CModelConfigList
class __declspec(align(8)) CModelConfigList0 {
public:
    bool m_bHideMaterialGroupInTools; // 0x0
    bool m_bHideRenderColorInTools; // 0x1
    // CUtlVector< CModelConfig* > m_Configs;
    char pad_00[6];
    char m_Configs[1]; // 0x8
    char pad_01[23];
}; // size: 0x20

/// ModelMeshBufferData_t
class __declspec(align(8)) ModelMeshBufferData_t0 {
public:
    int32_t m_nBlockIndex; // 0x0
    uint32_t m_nElementCount; // 0x4
    uint32_t m_nElementSizeInBytes; // 0x8
    bool m_bMeshoptCompressed; // 0xc
    bool m_bMeshoptIndexSequence; // 0xd
    bool m_bCompressedZSTD; // 0xe
    bool m_bCreateBufferSRV; // 0xf
    bool m_bCreateBufferUAV; // 0x10
    bool m_bCreateRawBuffer; // 0x11
    bool m_bCreatePooledBuffer; // 0x12
    uint8_t m_nBufferUsage; // 0x13
    // CUtlVector< RenderInputLayoutField_t > m_inputLayoutFields;
    char pad_00[4];
    char m_inputLayoutFields[1]; // 0x18
    char pad_01[23];
}; // size: 0x30

/// ModelEmbeddedMesh_t
class __declspec(align(8)) ModelEmbeddedMesh_t0 {
public:
    // CUtlString m_Name;
    char m_Name[1]; // 0x0
    char pad_00[12];
    int32_t m_nMeshIndex; // 0x10
    int32_t m_nDataBlock; // 0x14
    int32_t m_nMorphBlock; // 0x18
    // CUtlVector< ModelMeshBufferData_t > m_vertexBuffers;
    char pad_01[4];
    char m_vertexBuffers[1]; // 0x20
    // CUtlVector< ModelMeshBufferData_t > m_indexBuffers;
    char pad_02[23];
    char m_indexBuffers[1]; // 0x38
    // CUtlVector< ModelMeshBufferData_t > m_toolsBuffers;
    char pad_03[23];
    char m_toolsBuffers[1]; // 0x50
    char pad_04[20];
    int32_t m_nVBIBBlock; // 0x68
    int32_t m_nToolsVBBlock; // 0x6c
}; // size: 0x70

/// CModelConfigElement
class __declspec(align(1)) CModelConfigElement0 {
public:
    // CUtlString m_ElementName;
    char pad_00[8];
    char m_ElementName[1]; // 0x8
    // CUtlVector< CModelConfigElement* > m_NestedElements;
    char pad_01[7];
    char m_NestedElements[1]; // 0x10
    char pad_02[55];
}; // size: 0x48

/// CModelConfigElement_AttachedModel
class __declspec(align(8)) CModelConfigElement_AttachedModel0 {
public:
    // CUtlString m_InstanceName;
    char pad_00[72];
    char m_InstanceName[1]; // 0x48
    // CUtlString m_EntityClass;
    char pad_01[7];
    char m_EntityClass[1]; // 0x50
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    char pad_02[7];
    char m_hModel[1]; // 0x58
    char pad_03[4];
    Vector m_vOffset; // 0x60
    QAngle m_aAngOffset; // 0x6c
    // CUtlString m_AttachmentName;
    char m_AttachmentName[1]; // 0x78
    // CUtlString m_LocalAttachmentOffsetName;
    char pad_04[7];
    char m_LocalAttachmentOffsetName[1]; // 0x80
    char pad_05[4];
    ModelConfigAttachmentType_t m_AttachmentType; // 0x88
    bool m_bBoneMergeFlex; // 0x8c
    bool m_bUserSpecifiedColor; // 0x8d
    bool m_bUserSpecifiedMaterialGroup; // 0x8e
    // CUtlString m_BodygroupOnOtherModels;
    char pad_06[1];
    char m_BodygroupOnOtherModels[1]; // 0x90
    // CUtlString m_MaterialGroupOnOtherModels;
    char pad_07[7];
    char m_MaterialGroupOnOtherModels[1]; // 0x98
    char pad_08[79];
}; // size: 0xe8

/// CModelConfigElement_UserPick
class __declspec(align(8)) CModelConfigElement_UserPick0 {
public:
    // CUtlVector< CUtlString > m_Choices;
    char pad_00[72];
    char m_Choices[1]; // 0x48
    char pad_01[23];
}; // size: 0x60

/// CModelConfigElement_RandomPick
class __declspec(align(8)) CModelConfigElement_RandomPick0 {
public:
    // CUtlVector< CUtlString > m_Choices;
    char pad_00[72];
    char m_Choices[1]; // 0x48
    // CUtlVector< float32 > m_ChoiceWeights;
    char pad_01[23];
    char m_ChoiceWeights[1]; // 0x60
    char pad_02[31];
}; // size: 0x80

/// CModelConfigElement_SetMaterialGroup
class __declspec(align(8)) CModelConfigElement_SetMaterialGroup0 {
public:
    // CUtlString m_MaterialGroupName;
    char pad_00[72];
    char m_MaterialGroupName[1]; // 0x48
    char pad_01[7];
}; // size: 0x50

/// CModelConfigElement_SetMaterialGroupOnAttachedModels
class __declspec(align(8)) CModelConfigElement_SetMaterialGroupOnAttachedModels0 {
public:
    // CUtlString m_MaterialGroupName;
    char pad_00[72];
    char m_MaterialGroupName[1]; // 0x48
    char pad_01[7];
}; // size: 0x50

/// CModelConfigElement_SetRenderColor
class __declspec(align(8)) CModelConfigElement_SetRenderColor0 {
public:
    // Color m_Color;
    char pad_00[72];
    char m_Color[1]; // 0x48
    char pad_01[7];
}; // size: 0x50

/// CModelConfigElement_RandomColor
class __declspec(align(8)) CModelConfigElement_RandomColor0 {
public:
    // CColorGradient m_Gradient;
    char pad_00[72];
    char m_Gradient[1]; // 0x48
    char pad_01[23];
}; // size: 0x60

/// CModelConfigElement_SetBodygroup
class __declspec(align(8)) CModelConfigElement_SetBodygroup0 {
public:
    // CGlobalSymbol m_GroupName;
    char pad_00[72];
    char m_GroupName[1]; // 0x48
    char pad_01[4];
    int32_t m_nChoice; // 0x50
    char pad_02[4];
}; // size: 0x58

/// CModelConfigElement_SetBodygroupOnAttachedModels
class __declspec(align(8)) CModelConfigElement_SetBodygroupOnAttachedModels0 {
public:
    // CUtlString m_GroupName;
    char pad_00[72];
    char m_GroupName[1]; // 0x48
    char pad_01[4];
    int32_t m_nChoice; // 0x50
    char pad_02[4];
}; // size: 0x58

/// CModelConfigElement_Command
class __declspec(align(8)) CModelConfigElement_Command0 {
public:
    // CUtlString m_Command;
    char pad_00[72];
    char m_Command[1]; // 0x48
    // KeyValues3 m_Args;
    char pad_01[7];
    char m_Args[1]; // 0x50
    char pad_02[15];
}; // size: 0x60

/// CModelConfig
class __declspec(align(8)) CModelConfig0 {
public:
    // CUtlString m_ConfigName;
    char m_ConfigName[1]; // 0x0
    // CUtlVector< CModelConfigElement* > m_Elements;
    char pad_00[7];
    char m_Elements[1]; // 0x8
    char pad_01[23];
    bool m_bTopLevel; // 0x20
    bool m_bActiveInEditorByDefault; // 0x21
    char pad_02[6];
}; // size: 0x28

/// CRenderBufferBinding
class __declspec(align(8)) CRenderBufferBinding0 {
public:
    uint64_t m_hBuffer; // 0x0
    char pad_00[8];
    uint32_t m_nBindOffsetBytes; // 0x10
    char pad_01[12];
}; // size: 0x20

/// SkeletonBoneBounds_t
class __declspec(align(4)) SkeletonBoneBounds_t0 {
public:
    Vector m_vecCenter; // 0x0
    Vector m_vecSize; // 0xc
}; // size: 0x18

/// RenderSkeletonBone_t
class __declspec(align(8)) RenderSkeletonBone_t0 {
public:
    // CUtlString m_boneName;
    char m_boneName[1]; // 0x0
    // CUtlString m_parentName;
    char pad_00[7];
    char m_parentName[1]; // 0x8
    // matrix3x4_t m_invBindPose;
    char pad_01[7];
    char m_invBindPose[1]; // 0x10
    char pad_02[44];
    SkeletonBoneBounds_t m_bbox; // 0x40
    float m_flSphereRadius; // 0x58
    char pad_03[4];
}; // size: 0x60

/// CRenderSkeleton
class __declspec(align(8)) CRenderSkeleton0 {
public:
    // CUtlVector< RenderSkeletonBone_t > m_bones;
    char m_bones[1]; // 0x0
    // CUtlVector< int32 > m_boneParents;
    char pad_00[47];
    char m_boneParents[1]; // 0x30
    char pad_01[20];
    int32_t m_nBoneWeightCount; // 0x48
    char pad_02[4];
}; // size: 0x50

/// CDrawCullingData
class __declspec(align(1)) CDrawCullingData0 {
public:
    int8_t m_ConeAxis[3]; // 0x0
    int8_t m_ConeCutoff; // 0x3
}; // size: 0x4

/// CMaterialDrawDescriptor
class __declspec(align(8)) CMaterialDrawDescriptor0 {
public:
    float m_flUvDensity; // 0x0
    Vector m_vTintColor; // 0x4
    float m_flAlpha; // 0x10
    char pad_00[2];
    uint16_t m_nNumMeshlets; // 0x16
    char pad_01[4];
    uint32_t m_nFirstMeshlet; // 0x1c
    uint32_t m_nAppliedIndexOffset; // 0x20
    uint8_t m_nDepthVertexBufferIndex; // 0x24
    uint8_t m_nMeshletPackedIVBIndex; // 0x25
    // CUtlLeanVector< CMaterialDrawDescriptor::RigidMeshPart_t > m_rigidMeshParts;
    char pad_02[2];
    char m_rigidMeshParts[1]; // 0x28
    char pad_03[12];
    RenderPrimitiveType_t m_nPrimitiveType; // 0x38
    int32_t m_nBaseVertex; // 0x3c
    int32_t m_nVertexCount; // 0x40
    int32_t m_nStartIndex; // 0x44
    int32_t m_nIndexCount; // 0x48
    char pad_04[96];
    CRenderBufferBinding m_indexBuffer; // 0xb0
    CRenderBufferBinding m_meshletPackedIVB; // 0xd0
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_material;
    char pad_05[16];
    char m_material[1]; // 0x100
    char pad_06[7];
}; // size: 0x108

/// CMaterialDrawDescriptor::RigidMeshPart_t
class __declspec(align(4)) CMaterialDrawDescriptor__RigidMeshPart_t0 {
public:
    uint16_t m_nRigidBLASIndex; // 0x0
    int16_t m_nBoneIndex; // 0x2
    uint32_t m_nStartIndexOffset; // 0x4
    uint32_t m_nPrimitiveCount; // 0x8
}; // size: 0xc

/// CMeshletDescriptor
class __declspec(align(4)) CMeshletDescriptor0 {
public:
    PackedAABB_t m_PackedAABB; // 0x0
    CDrawCullingData m_CullingData; // 0x8
    uint32_t m_nVertexOffset; // 0xc
    uint32_t m_nTriangleOffset; // 0x10
    uint8_t m_nVertexCount; // 0x14
    uint8_t m_nTriangleCount; // 0x15
    char pad_00[2];
}; // size: 0x18

/// CSceneObjectData
class __declspec(align(8)) CSceneObjectData0 {
public:
    Vector m_vMinBounds; // 0x0
    Vector m_vMaxBounds; // 0xc
    // CUtlLeanVector< CMaterialDrawDescriptor > m_drawCalls;
    char m_drawCalls[1]; // 0x18
    // CUtlLeanVector< AABB_t > m_drawBounds;
    char pad_00[15];
    char m_drawBounds[1]; // 0x28
    // CUtlLeanVector< CMeshletDescriptor > m_meshlets;
    char pad_01[15];
    char m_meshlets[1]; // 0x38
    // CUtlLeanVector< CSceneObjectData::RTProxyDrawDescriptor_t > m_rtProxyDrawCalls;
    char pad_02[15];
    char m_rtProxyDrawCalls[1]; // 0x48
    char pad_03[12];
    Vector4D m_vTintColor; // 0x58
    char pad_04[56];
}; // size: 0xa0

/// CSceneObjectData::RTProxyDrawDescriptor_t
class __declspec(align(8)) CSceneObjectData__RTProxyDrawDescriptor_t0 {
public:
    CMaterialDrawDescriptor m_drawDesc; // 0x0
    // matrix3x4_t m_mWorldFromLocal;
    char m_mWorldFromLocal[1]; // 0x108
    char pad_00[47];
    VertexAlbedoFormat_t m_nVertexAlbedoFormat; // 0x138
    int8_t m_nVertexAlbedoVB; // 0x139
    uint16_t m_nVertexAlbedoOffset; // 0x13a
    uint16_t m_nVertexAlbedoStride; // 0x13c
    char pad_01[2];
}; // size: 0x140

/// CAttachment
class __declspec(align(16)) CAttachment0 {
public:
    // CUtlString m_name;
    char m_name[1]; // 0x0
    // CUtlString[3] m_influenceNames;
    char pad_00[7];
    char m_influenceNames[1]; // 0x8
    // Quaternion[3] m_vInfluenceRotations;
    char pad_01[23];
    char m_vInfluenceRotations[1]; // 0x20
    char pad_02[44];
    Vector m_vInfluenceOffsets; // 0x50
    char pad_03[24];
    float m_influenceWeights[3]; // 0x74
    bool m_bInfluenceRootTransform[3]; // 0x80
    uint8_t m_nInfluences; // 0x83
    bool m_bIgnoreRotation; // 0x84
    char pad_04[11];
}; // size: 0x90

/// CHitBox
class __declspec(align(16)) CHitBox0 {
public:
    // CUtlString m_name;
    char m_name[1]; // 0x0
    // CUtlString m_sSurfaceProperty;
    char pad_00[7];
    char m_sSurfaceProperty[1]; // 0x8
    // CUtlString m_sBoneName;
    char pad_01[7];
    char m_sBoneName[1]; // 0x10
    char pad_02[4];
    Vector m_vMinBounds; // 0x18
    Vector m_vMaxBounds; // 0x24
    float m_flShapeRadius; // 0x30
    uint32_t m_nBoneNameHash; // 0x34
    int32_t m_nGroupId; // 0x38
    uint8_t m_nShapeType; // 0x3c
    bool m_bTranslationOnly; // 0x3d
    uint32_t m_CRC; // 0x40
    // Color m_cRenderColor;
    char m_cRenderColor[1]; // 0x44
    char pad_03[2];
    uint16_t m_nHitBoxIndex; // 0x48
    char pad_04[38];
}; // size: 0x70

/// CHitBoxSet
class __declspec(align(8)) CHitBoxSet0 {
public:
    // CUtlString m_name;
    char m_name[1]; // 0x0
    char pad_00[4];
    uint32_t m_nNameHash; // 0x8
    // CUtlVector< CHitBox > m_HitBoxes;
    char pad_01[4];
    char m_HitBoxes[1]; // 0x10
    // CUtlString m_SourceFilename;
    char pad_02[23];
    char m_SourceFilename[1]; // 0x28
    char pad_03[7];
}; // size: 0x30

/// CHitBoxSetList
class __declspec(align(8)) CHitBoxSetList0 {
public:
    // CUtlVector< CHitBoxSet > m_HitBoxSets;
    char m_HitBoxSets[1]; // 0x0
    char pad_00[23];
}; // size: 0x18

/// DynamicMeshDeformParams_t
class __declspec(align(4)) DynamicMeshDeformParams_t0 {
public:
    float m_flTensionCompressScale; // 0x0
    float m_flTensionStretchScale; // 0x4
    bool m_bRecomputeSmoothNormalsAfterAnimation; // 0x8
    bool m_bComputeDynamicMeshTensionAfterAnimation; // 0x9
    bool m_bSmoothNormalsAcrossUvSeams; // 0xa
    bool m_bEnableEyeBulgeDeformation; // 0xb
}; // size: 0xc

/// RenderHairStrandInfo_t
class __declspec(align(4)) RenderHairStrandInfo_t0 {
public:
    uint32_t m_nGuideHairIndices_nSurfaceTriIndex[2]; // 0x0
    uint16_t m_vGuideBary_vBaseBary[4]; // 0x8
    uint16_t m_vRootOffset_flLengthScale[4]; // 0x10
    uint16_t m_nPackedBaseUv[2]; // 0x18
    uint32_t m_nPackedSurfaceNormalOs; // 0x1c
    uint32_t m_nPackedSurfaceTangentOs; // 0x20
    uint32_t m_nDataOffset_Segments; // 0x24
}; // size: 0x28

/// CRenderGroom
class __declspec(align(8)) CRenderGroom0 {
public:
    // CUtlVector< RenderHairStrandInfo_t > m_hairs;
    char m_hairs[1]; // 0x0
    // CUtlVector< uint32 > m_hairPositionOffsets;
    char pad_00[23];
    char m_hairPositionOffsets[1]; // 0x18
    // CStrongHandleCopyable< InfoForResourceTypeIMaterial2 > m_hSimParamsMat;
    char pad_01[39];
    char m_hSimParamsMat[1]; // 0x40
    // CUtlVector< int32 > m_strandSegmentCountHist;
    char pad_02[7];
    char m_strandSegmentCountHist[1]; // 0x48
    char pad_03[44];
    int32_t m_nMaxSegmentsPerHairStrand; // 0x78
    int32_t m_nGuideHairCount; // 0x7c
    int32_t m_nHairCount; // 0x80
    int32_t m_nTotalVertexCount; // 0x84
    int32_t m_nTotalSegmentCount; // 0x88
    int32_t m_nGroomGroupID; // 0x8c
    int32_t m_nAttachBoneIdx; // 0x90
    int32_t m_nAttachMeshIdx; // 0x94
    int32_t m_nAttachMeshDrawCallIdx; // 0x98
    bool m_bEnableSimulation; // 0x9c
    char pad_04[3];
}; // size: 0xa0

/// CRenderMesh
class __declspec(align(8)) CRenderMesh0 {
public:
    // CUtlLeanVectorFixedGrowable< CSceneObjectData, 1 > m_sceneObjects;
    char pad_00[16];
    char m_sceneObjects[1]; // 0x10
    // CUtlLeanVector< CBaseConstraint* > m_constraints;
    char pad_01[167];
    char m_constraints[1]; // 0xb8
    char pad_02[8];
    CRenderSkeleton m_skeleton; // 0xc8
    char pad_03[188];
    bool m_bUseUV2ForCharting; // 0x1d4
    bool m_bEmbeddedMapMesh; // 0x1d5
    char pad_04[32];
    DynamicMeshDeformParams_t m_meshDeformParams; // 0x1f8
    CRenderGroom* m_pGroomData; // 0x208
}; // size: 0x210

/// CBaseConstraint
class __declspec(align(4)) CBaseConstraint0 {
public:
    // CUtlString m_name;
    char pad_00[32];
    char m_name[1]; // 0x20
    char pad_01[4];
    Vector m_vUpVector; // 0x28
    // CUtlLeanVector< CConstraintSlave > m_slaves;
    char pad_02[4];
    char m_slaves[1]; // 0x38
    // CUtlVector< CConstraintTarget > m_targets;
    char pad_03[15];
    char m_targets[1]; // 0x48
    char pad_04[23];
}; // size: 0x60

/// CConstraintTarget
class __declspec(align(16)) CConstraintTarget0 {
public:
    // Quaternion m_qOffset;
    char pad_00[32];
    char m_qOffset[1]; // 0x20
    char pad_01[12];
    Vector m_vOffset; // 0x30
    uint32_t m_nBoneHash; // 0x3c
    // CUtlString m_sName;
    char m_sName[1]; // 0x40
    char pad_02[4];
    float m_flWeight; // 0x48
    char pad_03[13];
    bool m_bIsAttachment; // 0x59
    char pad_04[6];
}; // size: 0x60

/// CConstraintSlave
class __declspec(align(16)) CConstraintSlave0 {
public:
    // Quaternion m_qBaseOrientation;
    char m_qBaseOrientation[1]; // 0x0
    char pad_00[12];
    Vector m_vBasePosition; // 0x10
    uint32_t m_nBoneHash; // 0x1c
    float m_flWeight; // 0x20
    // CUtlString m_sName;
    char pad_01[4];
    char m_sName[1]; // 0x28
    char pad_02[39];
}; // size: 0x50

/// CBoneConstraintBase
class __declspec(align(1)) CBoneConstraintBase0 {
public:
    char pad_00[32];
}; // size: 0x20

/// CPointConstraint
class __declspec(align(8)) CPointConstraint0 {
public:
    char pad_00[96];
}; // size: 0x60

/// COrientConstraint
class __declspec(align(8)) COrientConstraint0 {
public:
    char pad_00[96];
}; // size: 0x60

/// CAimConstraint
class __declspec(align(16)) CAimConstraint0 {
public:
    // Quaternion m_qAimOffset;
    char pad_00[96];
    char m_qAimOffset[1]; // 0x60
    char pad_01[12];
    uint32_t m_nUpType; // 0x70
    char pad_02[12];
}; // size: 0x80

/// CTwistConstraint
class __declspec(align(16)) CTwistConstraint0 {
public:
    char pad_00[96];
    bool m_bInverse; // 0x60
    // Quaternion m_qParentBindRotation;
    char pad_01[15];
    char m_qParentBindRotation[1]; // 0x70
    // Quaternion m_qChildBindRotation;
    char pad_02[15];
    char m_qChildBindRotation[1]; // 0x80
    char pad_03[15];
}; // size: 0x90

/// CTiltTwistConstraint
class __declspec(align(16)) CTiltTwistConstraint0 {
public:
    char pad_00[96];
    int32_t m_nTargetAxis; // 0x60
    int32_t m_nSlaveAxis; // 0x64
    char pad_01[40];
}; // size: 0x90

/// CMorphConstraint
class __declspec(align(8)) CMorphConstraint0 {
public:
    // CUtlString m_sTargetMorph;
    char pad_00[96];
    char m_sTargetMorph[1]; // 0x60
    char pad_01[4];
    int32_t m_nSlaveChannel; // 0x68
    float m_flMin; // 0x6c
    float m_flMax; // 0x70
    char pad_02[12];
}; // size: 0x80

/// CParentConstraint
class __declspec(align(8)) CParentConstraint0 {
public:
    char pad_00[96];
}; // size: 0x60

/// CBoneConstraintPoseSpaceMorph
class __declspec(align(8)) CBoneConstraintPoseSpaceMorph0 {
public:
    // CUtlString m_sBoneName;
    char pad_00[32];
    char m_sBoneName[1]; // 0x20
    // CUtlString m_sAttachmentName;
    char pad_01[7];
    char m_sAttachmentName[1]; // 0x28
    // CUtlVector< CUtlString > m_outputMorph;
    char pad_02[7];
    char m_outputMorph[1]; // 0x30
    // CUtlVector< CBoneConstraintPoseSpaceMorph::Input_t > m_inputList;
    char pad_03[23];
    char m_inputList[1]; // 0x48
    char pad_04[23];
    bool m_bClamp; // 0x60
    char pad_05[63];
}; // size: 0xa0

/// CBoneConstraintPoseSpaceMorph::Input_t
class __declspec(align(4)) CBoneConstraintPoseSpaceMorph__Input_t0 {
public:
    Vector m_inputValue; // 0x0
    // CUtlVector< float32 > m_outputWeightList;
    char pad_00[4];
    char m_outputWeightList[1]; // 0x10
    char pad_01[23];
}; // size: 0x28

/// CBoneConstraintPoseSpaceBone
class __declspec(align(8)) CBoneConstraintPoseSpaceBone0 {
public:
    // CUtlVector< CBoneConstraintPoseSpaceBone::Input_t > m_inputList;
    char pad_00[96];
    char m_inputList[1]; // 0x60
    char pad_01[39];
}; // size: 0x88

/// CBoneConstraintPoseSpaceBone::Input_t
class __declspec(align(4)) CBoneConstraintPoseSpaceBone__Input_t0 {
public:
    Vector m_inputValue; // 0x0
    // CUtlVector< CTransform > m_outputTransformList;
    char pad_00[4];
    char m_outputTransformList[1]; // 0x10
    char pad_01[23];
}; // size: 0x28

/// CBoneConstraintDotToMorph
class __declspec(align(8)) CBoneConstraintDotToMorph0 {
public:
    // CUtlString m_sBoneName;
    char pad_00[32];
    char m_sBoneName[1]; // 0x20
    // CUtlString m_sTargetBoneName;
    char pad_01[7];
    char m_sTargetBoneName[1]; // 0x28
    // CUtlString m_sMorphChannelName;
    char pad_02[7];
    char m_sMorphChannelName[1]; // 0x30
    char pad_03[4];
    float m_flRemap[4]; // 0x38
    char pad_04[16];
}; // size: 0x58

/// CBoneConstraintRbf
class __declspec(align(8)) CBoneConstraintRbf0 {
public:
    // CUtlVector< std::pair< CUtlString, uint32 > > m_inputBones;
    char pad_00[32];
    char m_inputBones[1]; // 0x20
    // CUtlVector< std::pair< CUtlString, uint32 > > m_outputBones;
    char pad_01[23];
    char m_outputBones[1]; // 0x38
    char pad_02[143];
}; // size: 0xc8

/// CFlexOp
class __declspec(align(4)) CFlexOp0 {
public:
    FlexOpCode_t m_OpCode; // 0x0
    int32_t m_Data; // 0x4
}; // size: 0x8

/// CFlexRule
class __declspec(align(8)) CFlexRule0 {
public:
    int32_t m_nFlex; // 0x0
    // CUtlVector< CFlexOp > m_FlexOps;
    char pad_00[4];
    char m_FlexOps[1]; // 0x8
    char pad_01[23];
}; // size: 0x20

/// CFlexDesc
class __declspec(align(8)) CFlexDesc0 {
public:
    // CUtlString m_szFacs;
    char m_szFacs[1]; // 0x0
    char pad_00[7];
}; // size: 0x8

/// CFlexController
class __declspec(align(8)) CFlexController0 {
public:
    // CUtlString m_szName;
    char m_szName[1]; // 0x0
    // CUtlString m_szType;
    char pad_00[7];
    char m_szType[1]; // 0x8
    char pad_01[4];
    float min; // 0x10
    float max; // 0x14
}; // size: 0x18

/// CMorphBundleData
class __declspec(align(8)) CMorphBundleData0 {
public:
    float m_flULeftSrc; // 0x0
    float m_flVTopSrc; // 0x4
    // CUtlVector< float32 > m_offsets;
    char m_offsets[1]; // 0x8
    // CUtlVector< float32 > m_ranges;
    char pad_00[23];
    char m_ranges[1]; // 0x20
    char pad_01[23];
}; // size: 0x38

/// CMorphRectData
class __declspec(align(8)) CMorphRectData0 {
public:
    int16_t m_nXLeftDst; // 0x0
    int16_t m_nYTopDst; // 0x2
    float m_flUWidthSrc; // 0x4
    float m_flVHeightSrc; // 0x8
    // CUtlVector< CMorphBundleData > m_bundleDatas;
    char pad_00[4];
    char m_bundleDatas[1]; // 0x10
    char pad_01[23];
}; // size: 0x28

/// CMorphData
class __declspec(align(8)) CMorphData0 {
public:
    // CUtlString m_name;
    char m_name[1]; // 0x0
    // CUtlVector< CMorphRectData > m_morphRectDatas;
    char pad_00[7];
    char m_morphRectDatas[1]; // 0x8
    char pad_01[23];
}; // size: 0x20

/// CMorphSetData
class __declspec(align(8)) CMorphSetData0 {
public:
    char pad_00[16];
    int32_t m_nWidth; // 0x10
    int32_t m_nHeight; // 0x14
    // CUtlVector< MorphBundleType_t > m_bundleTypes;
    char m_bundleTypes[1]; // 0x18
    // CUtlVector< CMorphData > m_morphDatas;
    char pad_01[23];
    char m_morphDatas[1]; // 0x30
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureAtlas;
    char pad_02[23];
    char m_pTextureAtlas[1]; // 0x48
    // CUtlVector< CFlexDesc > m_FlexDesc;
    char pad_03[7];
    char m_FlexDesc[1]; // 0x50
    // CUtlVector< CFlexController > m_FlexControllers;
    char pad_04[23];
    char m_FlexControllers[1]; // 0x68
    // CUtlVector< CFlexRule > m_FlexRules;
    char pad_05[23];
    char m_FlexRules[1]; // 0x80
    char pad_06[23];
}; // size: 0x98

/// CAnimFoot
class __declspec(align(8)) CAnimFoot0 {
public:
    // CUtlString m_name;
    char m_name[1]; // 0x0
    char pad_00[4];
    Vector m_vBallOffset; // 0x8
    Vector m_vHeelOffset; // 0x14
    int32_t m_ankleBoneIndex; // 0x20
    int32_t m_toeBoneIndex; // 0x24
}; // size: 0x28

/// CAnimSkeleton
class __declspec(align(8)) CAnimSkeleton0 {
public:
    // CUtlVector< CTransform > m_localSpaceTransforms;
    char pad_00[16];
    char m_localSpaceTransforms[1]; // 0x10
    // CUtlVector< CTransform > m_modelSpaceTransforms;
    char pad_01[23];
    char m_modelSpaceTransforms[1]; // 0x28
    // CUtlVector< CUtlString > m_boneNames;
    char pad_02[23];
    char m_boneNames[1]; // 0x40
    // CUtlVector< CUtlVector< int32 > > m_children;
    char pad_03[23];
    char m_children[1]; // 0x58
    // CUtlVector< int32 > m_parents;
    char pad_04[23];
    char m_parents[1]; // 0x70
    // CUtlVector< CAnimFoot > m_feet;
    char pad_05[23];
    char m_feet[1]; // 0x88
    // CUtlVector< CUtlString > m_morphNames;
    char pad_06[23];
    char m_morphNames[1]; // 0xa0
    // CUtlVector< int32 > m_lodBoneCounts;
    char pad_07[23];
    char m_lodBoneCounts[1]; // 0xb8
    char pad_08[23];
}; // size: 0xd0

/// CFootDefinition
class __declspec(align(8)) CFootDefinition0 {
public:
    // CUtlString m_name;
    char m_name[1]; // 0x0
    // CUtlString m_ankleBoneName;
    char pad_00[7];
    char m_ankleBoneName[1]; // 0x8
    // CUtlString m_toeBoneName;
    char pad_01[7];
    char m_toeBoneName[1]; // 0x10
    char pad_02[4];
    Vector m_vBallOffset; // 0x18
    Vector m_vHeelOffset; // 0x24
    float m_flFootLength; // 0x30
    float m_flBindPoseDirectionMS; // 0x34
    float m_flTraceHeight; // 0x38
    float m_flTraceRadius; // 0x3c
}; // size: 0x40

/// CCycleBase
class __declspec(align(4)) CCycleBase0 {
public:
    float m_flCycle; // 0x0
}; // size: 0x4

/// CAnimCycle
class __declspec(align(4)) CAnimCycle0 {
public:
    char pad_00[4];
}; // size: 0x4

/// CFootCycle
class __declspec(align(4)) CFootCycle0 {
public:
    char pad_00[4];
}; // size: 0x4

/// CFootCycleDefinition
class __declspec(align(4)) CFootCycleDefinition0 {
public:
    Vector m_vStancePositionMS; // 0x0
    Vector m_vMidpointPositionMS; // 0xc
    float m_flStanceDirectionMS; // 0x18
    Vector m_vToStrideStartPos; // 0x1c
    CAnimCycle m_stanceCycle; // 0x28
    CFootCycle m_footLiftCycle; // 0x2c
    CFootCycle m_footOffCycle; // 0x30
    CFootCycle m_footStrikeCycle; // 0x34
    CFootCycle m_footLandCycle; // 0x38
}; // size: 0x3c

/// CFootTrajectory
class __declspec(align(8)) CFootTrajectory0 {
public:
    char pad_00[8];
    Vector m_vOffset; // 0x8
    float m_flRotationOffset; // 0x14
    float m_flProgression; // 0x18
    char pad_01[4];
}; // size: 0x20

/// CFootTrajectories
class __declspec(align(8)) CFootTrajectories0 {
public:
    // CUtlVector< CFootTrajectory > m_trajectories;
    char m_trajectories[1]; // 0x0
    char pad_00[23];
}; // size: 0x18

/// CFootStride
class __declspec(align(8)) CFootStride0 {
public:
    CFootCycleDefinition m_definition; // 0x0
    CFootTrajectories m_trajectories; // 0x40
}; // size: 0x58

/// MovementGaitId_t
class __declspec(align(8)) MovementGaitId_t0 {
public:
    // CGlobalSymbol m_sId;
    char m_sId[1]; // 0x0
    char pad_00[7];
}; // size: 0x8

/// CNPCPhysicsHull
class __declspec(align(8)) CNPCPhysicsHull0 {
public:
    // CGlobalSymbol m_sName;
    char m_sName[1]; // 0x0
    char pad_00[4];
    NPCPhysicsHullType_t m_eType; // 0x8
    float m_flCapsuleHeight; // 0xc
    float m_flCapsuleRadius; // 0x10
    Vector m_vCapsuleCenter1; // 0x14
    Vector m_vCapsuleCenter2; // 0x20
    float m_flGroundBoxHeight; // 0x2c
    float m_flGroundBoxWidth; // 0x30
    char pad_01[4];
}; // size: 0x38

/// SkeletonAnimCapture_t
class __declspec(align(8)) SkeletonAnimCapture_t0 {
public:
    // CEntityIndex m_nEntIndex;
    char m_nEntIndex[1]; // 0x0
    // CEntityIndex m_nEntParent;
    char pad_00[3];
    char m_nEntParent[1]; // 0x4
    // CUtlVector< CEntityIndex > m_ImportedCollision;
    char pad_01[3];
    char m_ImportedCollision[1]; // 0x8
    // CUtlString m_ModelName;
    char pad_02[23];
    char m_ModelName[1]; // 0x20
    // CUtlString m_CaptureName;
    char pad_03[7];
    char m_CaptureName[1]; // 0x28
    // CUtlVector< SkeletonAnimCapture_t::Bone_t > m_ModelBindPose;
    char pad_04[7];
    char m_ModelBindPose[1]; // 0x30
    // CUtlVector< SkeletonAnimCapture_t::Bone_t > m_FeModelInitPose;
    char pad_05[23];
    char m_FeModelInitPose[1]; // 0x48
    char pad_06[20];
    int32_t m_nFlexControllers; // 0x60
    bool m_bPredicted; // 0x64
    // CUtlVector< SkeletonAnimCapture_t::Frame_t > m_Frames;
    char pad_07[67];
    char m_Frames[1]; // 0xa8
    char pad_08[23];
}; // size: 0xc0

/// SkeletonAnimCapture_t::Bone_t
class __declspec(align(16)) SkeletonAnimCapture_t__Bone_t0 {
public:
    // CUtlString m_Name;
    char m_Name[1]; // 0x0
    // CTransform m_BindPose;
    char pad_00[15];
    char m_BindPose[1]; // 0x10
    char pad_01[28];
    int32_t m_nParent; // 0x30
    char pad_02[12];
}; // size: 0x40

/// SkeletonAnimCapture_t::Frame_t
class __declspec(align(16)) SkeletonAnimCapture_t__Frame_t0 {
public:
    float m_flTime; // 0x0
    // SkeletonAnimCapture_t::FrameStamp_t m_Stamp;
    char m_Stamp[1]; // 0x4
    // CTransform m_Transform;
    char pad_00[27];
    char m_Transform[1]; // 0x20
    char pad_01[31];
    bool m_bTeleport; // 0x40
    // CUtlVector< CTransform > m_CompositeBones;
    char pad_02[7];
    char m_CompositeBones[1]; // 0x48
    // CUtlVector< CTransform > m_SimStateBones;
    char pad_03[23];
    char m_SimStateBones[1]; // 0x60
    // CUtlVector< CTransform > m_FeModelAnims;
    char pad_04[23];
    char m_FeModelAnims[1]; // 0x78
    // CUtlVector< VectorAligned > m_FeModelPos;
    char pad_05[23];
    char m_FeModelPos[1]; // 0x90
    // CUtlVector< float32 > m_FlexControllerWeights;
    char pad_06[23];
    char m_FlexControllerWeights[1]; // 0xa8
    char pad_07[23];
}; // size: 0xc0

/// SkeletonAnimCapture_t::FrameStamp_t
class __declspec(align(4)) SkeletonAnimCapture_t__FrameStamp_t0 {
public:
    float m_flTime; // 0x0
    float m_flEntitySimTime; // 0x4
    bool m_bTeleportTick; // 0x8
    bool m_bPredicted; // 0x9
    float m_flCurTime; // 0xc
    float m_flRealTime; // 0x10
    int32_t m_nFrameCount; // 0x14
    int32_t m_nTickCount; // 0x18
}; // size: 0x1c

/// SkeletonAnimCapture_t::Camera_t
class __declspec(align(16)) SkeletonAnimCapture_t__Camera_t0 {
public:
    // CTransform m_tmCamera;
    char m_tmCamera[1]; // 0x0
    char pad_00[28];
    float m_flTime; // 0x20
    char pad_01[12];
}; // size: 0x30

/// SkeletonDemoDb_t
class __declspec(align(8)) SkeletonDemoDb_t0 {
public:
    // CUtlVector< SkeletonAnimCapture_t* > m_AnimCaptures;
    char m_AnimCaptures[1]; // 0x0
    // CUtlVector< SkeletonAnimCapture_t::Camera_t > m_CameraTrack;
    char pad_00[23];
    char m_CameraTrack[1]; // 0x18
    char pad_01[20];
    float m_flRecordingTime; // 0x30
    char pad_02[4];
}; // size: 0x38

/// CNmBoneWeightList
class __declspec(align(8)) CNmBoneWeightList0 {
public:
    // CResourceName m_skeletonName;
    char m_skeletonName[1]; // 0x0
    // CUtlVector< CGlobalSymbol > m_boneIDs;
    char pad_00[223];
    char m_boneIDs[1]; // 0xe0
    // CUtlVector< float32 > m_weights;
    char pad_01[23];
    char m_weights[1]; // 0xf8
    char pad_02[23];
}; // size: 0x110

/// NmBoneMaskSetDefinition_t
class __declspec(align(8)) NmBoneMaskSetDefinition_t0 {
public:
    // CGlobalSymbol m_ID;
    char m_ID[1]; // 0x0
    CNmBoneWeightList m_primaryWeightList; // 0x8
    // CUtlLeanVector< CNmBoneWeightList > m_secondaryWeightLists;
    char m_secondaryWeightLists[1]; // 0x118
    char pad_00[15];
}; // size: 0x128

/// CNmClip
class __declspec(align(16)) CNmClip0 {
public:
    // CStrongHandle< InfoForResourceTypeCNmSkeleton > m_skeleton;
    char m_skeleton[1]; // 0x0
    char pad_00[4];
    uint32_t m_nNumFrames; // 0x8
    float m_flDuration; // 0xc
    // CUtlBinaryBlock m_compressedPoseData;
    char m_compressedPoseData[1]; // 0x10
    // CUtlVector< NmCompressionSettings_t > m_trackCompressionSettings;
    char pad_01[15];
    char m_trackCompressionSettings[1]; // 0x20
    // CUtlVector< uint32 > m_compressedPoseOffsets;
    char pad_02[23];
    char m_compressedPoseOffsets[1]; // 0x38
    // CUtlVector< CGlobalSymbol > m_floatCurveIDs;
    char pad_03[23];
    char m_floatCurveIDs[1]; // 0x50
    // CUtlVector< NmFloatCurveCompressionSettings_t > m_floatCurveDefs;
    char pad_04[23];
    char m_floatCurveDefs[1]; // 0x68
    // CUtlVector< uint16 > m_compressedFloatCurveData;
    char pad_05[23];
    char m_compressedFloatCurveData[1]; // 0x80
    // CUtlVector< uint32 > m_compressedFloatCurveOffsets;
    char pad_06[23];
    char m_compressedFloatCurveOffsets[1]; // 0x98
    // CUtlVectorFixedGrowable< CNmClip*, 1 > m_secondaryAnimations;
    char pad_07[63];
    char m_secondaryAnimations[1]; // 0xd8
    char pad_08[24];
    CNmSyncTrack m_syncTrack; // 0xf8
    CNmRootMotionData m_rootMotion; // 0x1b0
    bool m_bIsAdditive; // 0x200
    // CUtlVector< CNmClip::ModelSpaceSamplingChainLink_t > m_modelSpaceSamplingChain;
    char pad_09[7];
    char m_modelSpaceSamplingChain[1]; // 0x208
    // CUtlVector< int32 > m_modelSpaceBoneSamplingIndices;
    char pad_10[23];
    char m_modelSpaceBoneSamplingIndices[1]; // 0x220
    char pad_011[31];
}; // size: 0x240

/// NmCompressionSettings_t
class __declspec(align(16)) NmCompressionSettings_t0 {
public:
    // NmCompressionSettings_t::QuantizationRange_t m_translationRangeX;
    char m_translationRangeX[1]; // 0x0
    // NmCompressionSettings_t::QuantizationRange_t m_translationRangeY;
    char pad_00[7];
    char m_translationRangeY[1]; // 0x8
    // NmCompressionSettings_t::QuantizationRange_t m_translationRangeZ;
    char pad_01[7];
    char m_translationRangeZ[1]; // 0x10
    // NmCompressionSettings_t::QuantizationRange_t m_scaleRange;
    char pad_02[7];
    char m_scaleRange[1]; // 0x18
    // Quaternion m_constantRotation;
    char pad_03[7];
    char m_constantRotation[1]; // 0x20
    char pad_04[15];
    bool m_bIsRotationStatic; // 0x30
    bool m_bIsTranslationStatic; // 0x31
    bool m_bIsScaleStatic; // 0x32
    char pad_05[13];
}; // size: 0x40

/// NmFloatCurveCompressionSettings_t
class __declspec(align(4)) NmFloatCurveCompressionSettings_t0 {
public:
    // NmCompressionSettings_t::QuantizationRange_t m_range;
    char m_range[1]; // 0x0
    char pad_00[7];
    bool m_bIsStatic; // 0x8
    char pad_01[3];
}; // size: 0xc

/// CNmSyncTrack
class __declspec(align(8)) CNmSyncTrack0 {
public:
    // CUtlLeanVectorFixedGrowable< CNmSyncTrack::Event_t, 10 > m_syncEvents;
    char m_syncEvents[1]; // 0x0
    char pad_00[164];
    int32_t m_nStartEventOffset; // 0xa8
    char pad_01[4];
}; // size: 0xb0

/// CNmRootMotionData
class __declspec(align(16)) CNmRootMotionData0 {
public:
    // CUtlVector< CTransform > m_transforms;
    char m_transforms[1]; // 0x0
    char pad_00[20];
    int32_t m_nNumFrames; // 0x18
    float m_flAverageLinearVelocity; // 0x1c
    float m_flAverageAngularVelocityRadians; // 0x20
    // CTransform m_totalDelta;
    char pad_01[12];
    char m_totalDelta[1]; // 0x30
    char pad_02[31];
}; // size: 0x50

/// CNmClip::ModelSpaceSamplingChainLink_t
class __declspec(align(4)) CNmClip__ModelSpaceSamplingChainLink_t0 {
public:
    int32_t m_nBoneIdx; // 0x0
    int32_t m_nParentBoneIdx; // 0x4
    int32_t m_nParentChainLinkIdx; // 0x8
}; // size: 0xc

/// NmCompressionSettings_t::QuantizationRange_t
class __declspec(align(4)) NmCompressionSettings_t__QuantizationRange_t0 {
public:
    float m_flRangeStart; // 0x0
    float m_flRangeLength; // 0x4
}; // size: 0x8

/// CNmEvent
class __declspec(align(4)) CNmEvent0 {
public:
    char pad_00[8];
    NmPercent_t m_flStartTime; // 0x8
    NmPercent_t m_flDuration; // 0xc
    // CGlobalSymbol m_syncID;
    char m_syncID[1]; // 0x10
    char pad_01[7];
    bool m_bClientOnly; // 0x18
    char pad_02[7];
}; // size: 0x20

/// NmPercent_t
class __declspec(align(4)) NmPercent_t0 {
public:
    float m_flValue; // 0x0
}; // size: 0x4

/// CNmBitFlags
class __declspec(align(4)) CNmBitFlags0 {
public:
    uint32_t m_flags; // 0x0
}; // size: 0x4

/// CNmSkeleton
class __declspec(align(8)) CNmSkeleton0 {
public:
    // CGlobalSymbol m_ID;
    char m_ID[1]; // 0x0
    // CUtlLeanVector< CGlobalSymbol > m_boneIDs;
    char pad_00[7];
    char m_boneIDs[1]; // 0x8
    // CUtlVector< int32 > m_parentIndices;
    char pad_01[15];
    char m_parentIndices[1]; // 0x18
    // CUtlVector< CTransform > m_parentSpaceReferencePose;
    char pad_02[23];
    char m_parentSpaceReferencePose[1]; // 0x30
    // CUtlVector< CTransform > m_modelSpaceReferencePose;
    char pad_03[23];
    char m_modelSpaceReferencePose[1]; // 0x48
    char pad_04[20];
    int32_t m_numBonesToSampleAtLowLOD; // 0x60
    // CUtlLeanVector< NmBoneMaskSetDefinition_t > m_maskDefinitions;
    char pad_05[36];
    char m_maskDefinitions[1]; // 0x88
    // CUtlLeanVector< CNmSkeleton::SecondarySkeleton_t > m_secondarySkeletons;
    char pad_06[31];
    char m_secondarySkeletons[1]; // 0xa8
    char pad_07[15];
    bool m_bIsPropSkeleton; // 0xb8
    char pad_08[7];
}; // size: 0xc0

/// CNmSkeleton::SecondarySkeleton_t
class __declspec(align(8)) CNmSkeleton__SecondarySkeleton_t0 {
public:
    // CGlobalSymbol m_attachToBoneID;
    char m_attachToBoneID[1]; // 0x0
    // CStrongHandle< InfoForResourceTypeCNmSkeleton > m_skeleton;
    char pad_00[7];
    char m_skeleton[1]; // 0x8
    char pad_01[7];
}; // size: 0x10

/// NmSyncTrackTime_t
class __declspec(align(4)) NmSyncTrackTime_t0 {
public:
    int32_t m_nEventIdx; // 0x0
    NmPercent_t m_percentageThrough; // 0x4
}; // size: 0x8

/// NmSyncTrackTimeRange_t
class __declspec(align(4)) NmSyncTrackTimeRange_t0 {
public:
    NmSyncTrackTime_t m_startTime; // 0x0
    NmSyncTrackTime_t m_endTime; // 0x8
}; // size: 0x10

/// CNmSyncTrack::Event_t
class __declspec(align(8)) CNmSyncTrack__Event_t0 {
public:
    // CGlobalSymbol m_ID;
    char m_ID[1]; // 0x0
    char pad_00[4];
    NmPercent_t m_startTime; // 0x8
    NmPercent_t m_duration; // 0xc
}; // size: 0x10

/// CNmSyncTrack::EventMarker_t
class __declspec(align(8)) CNmSyncTrack__EventMarker_t0 {
public:
    NmPercent_t m_startTime; // 0x0
    // CGlobalSymbol m_ID;
    char pad_00[4];
    char m_ID[1]; // 0x8
    char pad_01[7];
}; // size: 0x10

/// CNmTarget
class __declspec(align(16)) CNmTarget0 {
public:
    // CTransform m_transform;
    char m_transform[1]; // 0x0
    // CGlobalSymbol m_boneID;
    char pad_00[31];
    char m_boneID[1]; // 0x20
    char pad_01[7];
    bool m_bIsBoneTarget; // 0x28
    bool m_bIsUsingBoneSpaceOffsets; // 0x29
    bool m_bHasOffsets; // 0x2a
    bool m_bIsSet; // 0x2b
    char pad_02[4];
}; // size: 0x30

/// CNmPoseTask
class __declspec(align(1)) CNmPoseTask0 {
public:
    char pad_00[88];
}; // size: 0x58

/// CNmFootEvent
class __declspec(align(8)) CNmFootEvent0 {
public:
    char pad_00[32];
    NmFootPhase_t m_phase; // 0x20
    char pad_01[7];
}; // size: 0x28

/// CNmBodyGroupEvent
class __declspec(align(8)) CNmBodyGroupEvent0 {
public:
    // CUtlString m_groupName;
    char pad_00[32];
    char m_groupName[1]; // 0x20
    char pad_01[4];
    int32_t m_nGroupValue; // 0x28
    char pad_02[4];
}; // size: 0x30

/// CNmFloatCurveEvent
class __declspec(align(8)) CNmFloatCurveEvent0 {
public:
    // CGlobalSymbol m_ID;
    char pad_00[32];
    char m_ID[1]; // 0x20
    // CPiecewiseCurve m_curve;
    char pad_01[7];
    char m_curve[1]; // 0x28
    char pad_02[63];
}; // size: 0x68

/// CNmFrameSnapEvent
class __declspec(align(8)) CNmFrameSnapEvent0 {
public:
    char pad_00[32];
    NmFrameSnapEventMode_t m_frameSnapMode; // 0x20
    char pad_01[4];
}; // size: 0x28

/// CNmIDEvent
class __declspec(align(8)) CNmIDEvent0 {
public:
    // CGlobalSymbol m_ID;
    char pad_00[32];
    char m_ID[1]; // 0x20
    // CGlobalSymbol m_secondaryID;
    char pad_01[7];
    char m_secondaryID[1]; // 0x28
    char pad_02[7];
}; // size: 0x30

/// CNmLegacyEvent
class __declspec(align(8)) CNmLegacyEvent0 {
public:
    // CUtlString m_animEventClassName;
    char pad_00[32];
    char m_animEventClassName[1]; // 0x20
    // KeyValues3 m_KV;
    char pad_01[7];
    char m_KV[1]; // 0x28
    char pad_02[47];
}; // size: 0x58

/// CNmMaterialAttributeEvent
class __declspec(align(8)) CNmMaterialAttributeEvent0 {
public:
    // CUtlString m_attributeName;
    char pad_00[32];
    char m_attributeName[1]; // 0x20
    // CUtlStringToken m_attributeNameToken;
    char pad_01[7];
    char m_attributeNameToken[1]; // 0x28
    // CPiecewiseCurve m_x;
    char pad_02[7];
    char m_x[1]; // 0x30
    // CPiecewiseCurve m_y;
    char pad_03[63];
    char m_y[1]; // 0x70
    // CPiecewiseCurve m_z;
    char pad_04[63];
    char m_z[1]; // 0xb0
    // CPiecewiseCurve m_w;
    char pad_05[63];
    char m_w[1]; // 0xf0
    char pad_06[63];
}; // size: 0x130

/// CNmEntityAttributeEventBase
class __declspec(align(8)) CNmEntityAttributeEventBase0 {
public:
    // CUtlString m_attributeName;
    char pad_00[32];
    char m_attributeName[1]; // 0x20
    char pad_01[23];
}; // size: 0x38

/// CNmEntityAttributeIntEvent
class __declspec(align(8)) CNmEntityAttributeIntEvent0 {
public:
    char pad_00[56];
    int32_t m_nIntValue; // 0x38
    char pad_01[4];
}; // size: 0x40

/// CNmEntityAttributeFloatEvent
class __declspec(align(8)) CNmEntityAttributeFloatEvent0 {
public:
    // CPiecewiseCurve m_FloatValue;
    char pad_00[56];
    char m_FloatValue[1]; // 0x38
    char pad_01[63];
}; // size: 0x78

/// CNmParticleEvent
class __declspec(align(8)) CNmParticleEvent0 {
public:
    char pad_00[32];
    CNmEventRelevance_t m_relevance; // 0x20
    // CNmParticleEvent::Type_t m_type;
    char m_type[1]; // 0x24
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hParticleSystem;
    char pad_01[3];
    char m_hParticleSystem[1]; // 0x28
    // CUtlString m_tags;
    char pad_02[7];
    char m_tags[1]; // 0x30
    char pad_03[7];
    bool m_bStopImmediately; // 0x38
    bool m_bDetachFromOwner; // 0x39
    bool m_bPlayEndCap; // 0x3a
    // CUtlString m_attachmentPoint0;
    char pad_04[5];
    char m_attachmentPoint0[1]; // 0x40
    char pad_05[4];
    ParticleAttachment_t m_attachmentType0; // 0x48
    // CUtlString m_attachmentPoint1;
    char pad_06[4];
    char m_attachmentPoint1[1]; // 0x50
    char pad_07[4];
    ParticleAttachment_t m_attachmentType1; // 0x58
    // CUtlString m_config;
    char pad_08[4];
    char m_config[1]; // 0x60
    // CUtlString m_effectForConfig;
    char pad_09[7];
    char m_effectForConfig[1]; // 0x68
    char pad_010[7];
}; // size: 0x70

/// CNmRootMotionEvent
class __declspec(align(8)) CNmRootMotionEvent0 {
public:
    char pad_00[32];
    float m_flBlendTimeSeconds; // 0x20
    char pad_01[4];
}; // size: 0x28

/// CNmSoundEvent
class __declspec(align(8)) CNmSoundEvent0 {
public:
    char pad_00[32];
    CNmEventRelevance_t m_relevance; // 0x20
    // CUtlString m_name;
    char pad_01[4];
    char m_name[1]; // 0x28
    // CNmSoundEvent::Position_t m_position;
    char pad_02[7];
    char m_position[1]; // 0x30
    // CUtlString m_attachmentName;
    char pad_03[7];
    char m_attachmentName[1]; // 0x38
    // CUtlString m_tags;
    char pad_04[7];
    char m_tags[1]; // 0x40
    char pad_05[7];
    bool m_bContinuePlayingSoundAtDurationEnd; // 0x48
    float m_flDurationInterruptionThreshold; // 0x4c
}; // size: 0x50

/// CNmTransitionEvent
class __declspec(align(8)) CNmTransitionEvent0 {
public:
    char pad_00[32];
    NmTransitionRule_t m_rule; // 0x20
    // CGlobalSymbol m_ID;
    char pad_01[7];
    char m_ID[1]; // 0x28
    char pad_02[7];
}; // size: 0x30

/// CNmOrientationWarpEvent
class __declspec(align(8)) CNmOrientationWarpEvent0 {
public:
    char pad_00[32];
}; // size: 0x20

/// CNmTargetWarpEvent
class __declspec(align(8)) CNmTargetWarpEvent0 {
public:
    char pad_00[32];
    NmTargetWarpRule_t m_rule; // 0x20
    NmTargetWarpAlgorithm_t m_algorithm; // 0x21
    char pad_01[6];
}; // size: 0x28

/// CNmParameterizedBlendNode::BlendRange_t
class __declspec(align(4)) CNmParameterizedBlendNode__BlendRange_t0 {
public:
    int16_t m_nInputIdx0; // 0x0
    int16_t m_nInputIdx1; // 0x2
    // Range_t m_parameterValueRange;
    char m_parameterValueRange[1]; // 0x4
    char pad_00[7];
}; // size: 0xc

/// CNmParameterizedBlendNode::Parameterization_t
class __declspec(align(8)) CNmParameterizedBlendNode__Parameterization_t0 {
public:
    // CUtlLeanVectorFixedGrowable< CNmParameterizedBlendNode::BlendRange_t, 5 > m_blendRanges;
    char m_blendRanges[1]; // 0x0
    // Range_t m_parameterRange;
    char pad_00[71];
    char m_parameterRange[1]; // 0x48
    char pad_01[7];
}; // size: 0x50

/// CNmGraphEventConditionNode::Condition_t
class __declspec(align(8)) CNmGraphEventConditionNode__Condition_t0 {
public:
    // CGlobalSymbol m_eventID;
    char m_eventID[1]; // 0x0
    char pad_00[7];
    NmGraphEventTypeCondition_t m_eventTypeCondition; // 0x8
    char pad_01[7];
}; // size: 0x10

/// CNmFloatRemapNode::RemapRange_t
class __declspec(align(4)) CNmFloatRemapNode__RemapRange_t0 {
public:
    float m_flBegin; // 0x0
    float m_flEnd; // 0x4
}; // size: 0x8

/// CNmLayerBlendNode::LayerDefinition_t
class __declspec(align(2)) CNmLayerBlendNode__LayerDefinition_t0 {
public:
    int16_t m_nInputNodeIdx; // 0x0
    int16_t m_nWeightValueNodeIdx; // 0x2
    int16_t m_nBoneMaskValueNodeIdx; // 0x4
    int16_t m_nRootMotionWeightValueNodeIdx; // 0x6
    bool m_bIsSynchronized; // 0x8
    bool m_bIgnoreEvents; // 0x9
    bool m_bIsStateMachineLayer; // 0xa
    NmPoseBlendMode_t m_blendMode; // 0xb
}; // size: 0xc

/// CNmStateNode::TimedEvent_t
class __declspec(align(8)) CNmStateNode__TimedEvent_t0 {
public:
    // CGlobalSymbol m_ID;
    char m_ID[1]; // 0x0
    char pad_00[4];
    float m_flTimeValueSeconds; // 0x8
    // CNmStateNode::TimedEvent_t::Comparison_t m_comparisionOperator;
    char m_comparisionOperator[1]; // 0xc
    char pad_01[3];
}; // size: 0x10

/// CNmStateMachineNode::TransitionDefinition_t
class __declspec(align(2)) CNmStateMachineNode__TransitionDefinition_t0 {
public:
    int16_t m_nTargetStateIdx; // 0x0
    int16_t m_nConditionNodeIdx; // 0x2
    int16_t m_nTransitionNodeIdx; // 0x4
    bool m_bCanBeForced; // 0x6
    char pad_00[1];
}; // size: 0x8

/// CNmStateMachineNode::StateDefinition_t
class __declspec(align(8)) CNmStateMachineNode__StateDefinition_t0 {
public:
    int16_t m_nStateNodeIdx; // 0x0
    int16_t m_nEntryConditionNodeIdx; // 0x2
    // CUtlLeanVectorFixedGrowable< CNmStateMachineNode::TransitionDefinition_t, 5 > m_transitionDefinitions;
    char pad_00[4];
    char m_transitionDefinitions[1]; // 0x8
    char pad_01[47];
}; // size: 0x38

/// CNmGraphNode::CDefinition
class __declspec(align(2)) CNmGraphNode__CDefinition0 {
public:
    char pad_00[8];
    int16_t m_nNodeIdx; // 0x8
    char pad_01[6];
}; // size: 0x10

/// CNmPoseNode::CDefinition
class __declspec(align(1)) CNmPoseNode__CDefinition0 {
public:
    char pad_00[16];
}; // size: 0x10

/// CNmValueNode::CDefinition
class __declspec(align(1)) CNmValueNode__CDefinition0 {
public:
    char pad_00[16];
}; // size: 0x10

/// CNmBoolValueNode::CDefinition
class __declspec(align(1)) CNmBoolValueNode__CDefinition0 {
public:
    char pad_00[16];
}; // size: 0x10

/// CNmIDValueNode::CDefinition
class __declspec(align(1)) CNmIDValueNode__CDefinition0 {
public:
    char pad_00[16];
}; // size: 0x10

/// CNmFloatValueNode::CDefinition
class __declspec(align(1)) CNmFloatValueNode__CDefinition0 {
public:
    char pad_00[16];
}; // size: 0x10

/// CNmVectorValueNode::CDefinition
class __declspec(align(1)) CNmVectorValueNode__CDefinition0 {
public:
    char pad_00[16];
}; // size: 0x10

/// CNmTargetValueNode::CDefinition
class __declspec(align(1)) CNmTargetValueNode__CDefinition0 {
public:
    char pad_00[16];
}; // size: 0x10

/// CNmBoneMaskValueNode::CDefinition
class __declspec(align(1)) CNmBoneMaskValueNode__CDefinition0 {
public:
    char pad_00[16];
}; // size: 0x10

/// CNmGraphVariationUserData
class __declspec(align(8)) CNmGraphVariationUserData0 {
public:
    char pad_00[8];
}; // size: 0x8

/// CNmGraphDefinition
class __declspec(align(8)) CNmGraphDefinition0 {
public:
    // CGlobalSymbol m_variationID;
    char m_variationID[1]; // 0x0
    // CStrongHandle< InfoForResourceTypeCNmSkeleton > m_skeleton;
    char pad_00[7];
    char m_skeleton[1]; // 0x8
    CNmGraphVariationUserData* m_pUserData; // 0x10
    // CUtlVector< int16 > m_persistentNodeIndices;
    char m_persistentNodeIndices[1]; // 0x18
    char pad_01[22];
    int16_t m_nRootNodeIdx; // 0x30
    // CUtlVector< CGlobalSymbol > m_controlParameterIDs;
    char pad_02[6];
    char m_controlParameterIDs[1]; // 0x38
    // CUtlVector< CGlobalSymbol > m_virtualParameterIDs;
    char pad_03[23];
    char m_virtualParameterIDs[1]; // 0x50
    // CUtlVector< int16 > m_virtualParameterNodeIndices;
    char pad_04[23];
    char m_virtualParameterNodeIndices[1]; // 0x68
    // CUtlVector< CNmGraphDefinition::ReferencedGraphSlot_t > m_referencedGraphSlots;
    char pad_05[23];
    char m_referencedGraphSlots[1]; // 0x80
    // CUtlVector< CNmGraphDefinition::ExternalGraphSlot_t > m_externalGraphSlots;
    char pad_06[23];
    char m_externalGraphSlots[1]; // 0x98
    // CUtlVector< CNmGraphDefinition::ExternalPoseSlot_t > m_externalPoseSlots;
    char pad_07[23];
    char m_externalPoseSlots[1]; // 0xb0
    // CUtlVector< CUtlString > m_nodePaths;
    char pad_08[135];
    char m_nodePaths[1]; // 0x138
    // CUtlVector< CStrongHandleVoid > m_resources;
    char pad_09[23];
    char m_resources[1]; // 0x150
    char pad_010[79];
}; // size: 0x1a0

/// CNmGraphDefinition::ReferencedGraphSlot_t
class __declspec(align(2)) CNmGraphDefinition__ReferencedGraphSlot_t0 {
public:
    int16_t m_nNodeIdx; // 0x0
    int16_t m_dataSlotIdx; // 0x2
}; // size: 0x4

/// CNmGraphDefinition::ExternalGraphSlot_t
class __declspec(align(8)) CNmGraphDefinition__ExternalGraphSlot_t0 {
public:
    int16_t m_nNodeIdx; // 0x0
    // CGlobalSymbol m_slotID;
    char pad_00[6];
    char m_slotID[1]; // 0x8
    char pad_01[7];
}; // size: 0x10

/// CNmGraphDefinition::ExternalPoseSlot_t
class __declspec(align(8)) CNmGraphDefinition__ExternalPoseSlot_t0 {
public:
    int16_t m_nNodeIdx; // 0x0
    // CGlobalSymbol m_slotID;
    char pad_00[6];
    char m_slotID[1]; // 0x8
    char pad_01[7];
}; // size: 0x10

/// CNmIKEffector
class __declspec(align(16)) CNmIKEffector0 {
public:
    int32_t m_nBodyIndex; // 0x0
    bool m_bEnabled; // 0x4
    Vector m_vTargetPosition; // 0x8
    // Quaternion m_qTargetOrientation;
    char pad_00[12];
    char m_qTargetOrientation[1]; // 0x20
    char pad_01[12];
    float m_flWeight; // 0x30
    char pad_02[12];
}; // size: 0x40

/// CNmIKBody
class __declspec(align(4)) CNmIKBody0 {
public:
    float m_flMass; // 0x0
    Vector m_vLocalMassCenter; // 0x4
    Vector m_vRadius; // 0x10
    float m_flResistance; // 0x1c
}; // size: 0x20

/// CNmIKJoint
class __declspec(align(16)) CNmIKJoint0 {
public:
    int32_t m_nParentIndex; // 0x0
    int32_t m_nBodyIndex; // 0x4
    // CTransform m_xLocalFrame;
    char pad_00[8];
    char m_xLocalFrame[1]; // 0x10
    char pad_01[28];
    float m_flSwingLimit; // 0x30
    float m_flMinTwistLimit; // 0x34
    float m_flMaxTwistLimit; // 0x38
    float m_flWeight; // 0x3c
}; // size: 0x40

/// CNmIKRig
class __declspec(align(8)) CNmIKRig0 {
public:
    // CStrongHandle< InfoForResourceTypeCNmSkeleton > m_skeleton;
    char m_skeleton[1]; // 0x0
    // CUtlVector< CNmIKBody > m_vecBodies;
    char pad_00[7];
    char m_vecBodies[1]; // 0x8
    // CUtlVector< CNmIKJoint > m_vecJoints;
    char pad_01[23];
    char m_vecJoints[1]; // 0x20
    char pad_02[23];
}; // size: 0x38

/// BoneDemoCaptureSettings_t
class __declspec(align(8)) BoneDemoCaptureSettings_t0 {
public:
    // CUtlString m_boneName;
    char m_boneName[1]; // 0x0
    char pad_00[4];
    float m_flErrorSplineRotationMax; // 0x8
    float m_flErrorSplineTranslationMax; // 0xc
    float m_flErrorSplineScaleMax; // 0x10
    float m_flErrorQuantizationRotationMax; // 0x14
    float m_flErrorQuantizationTranslationMax; // 0x18
    float m_flErrorQuantizationScaleMax; // 0x1c
}; // size: 0x20

/// IKDemoCaptureSettings_t
class __declspec(align(8)) IKDemoCaptureSettings_t0 {
public:
    // CUtlString m_parentBoneName;
    char m_parentBoneName[1]; // 0x0
    char pad_00[4];
    IKChannelMode m_eMode; // 0x8
    // CUtlString m_ikChainName;
    char pad_01[4];
    char m_ikChainName[1]; // 0x10
    // CUtlString m_oneBoneStart;
    char pad_02[7];
    char m_oneBoneStart[1]; // 0x18
    // CUtlString m_oneBoneEnd;
    char pad_03[7];
    char m_oneBoneEnd[1]; // 0x20
    char pad_04[7];
}; // size: 0x28

/// CAnimDemoCaptureSettings
class __declspec(align(8)) CAnimDemoCaptureSettings0 {
public:
    Vector2D m_vecErrorRangeSplineRotation; // 0x0
    Vector2D m_vecErrorRangeSplineTranslation; // 0x8
    Vector2D m_vecErrorRangeSplineScale; // 0x10
    float m_flIkRotation_MaxSplineError; // 0x18
    float m_flIkTranslation_MaxSplineError; // 0x1c
    Vector2D m_vecErrorRangeQuantizationRotation; // 0x20
    Vector2D m_vecErrorRangeQuantizationTranslation; // 0x28
    Vector2D m_vecErrorRangeQuantizationScale; // 0x30
    float m_flIkRotation_MaxQuantizationError; // 0x38
    float m_flIkTranslation_MaxQuantizationError; // 0x3c
    // CUtlString m_baseSequence;
    char m_baseSequence[1]; // 0x40
    char pad_00[4];
    int32_t m_nBaseSequenceFrame; // 0x48
    EDemoBoneSelectionMode m_boneSelectionMode; // 0x4c
    // CUtlVector< BoneDemoCaptureSettings_t > m_bones;
    char m_bones[1]; // 0x50
    // CUtlVector< IKDemoCaptureSettings_t > m_ikChains;
    char pad_01[23];
    char m_ikChains[1]; // 0x68
    char pad_02[23];
}; // size: 0x80

/// CAnimReplayFrame
class __declspec(align(16)) CAnimReplayFrame0 {
public:
    // CUtlVector< CUtlBinaryBlock > m_inputDataBlocks;
    char pad_00[16];
    char m_inputDataBlocks[1]; // 0x10
    // CUtlBinaryBlock m_instanceData;
    char pad_01[23];
    char m_instanceData[1]; // 0x28
    // CTransform m_startingLocalToWorldTransform;
    char pad_02[23];
    char m_startingLocalToWorldTransform[1]; // 0x40
    // CTransform m_localToWorldTransform;
    char pad_03[31];
    char m_localToWorldTransform[1]; // 0x60
    char pad_04[28];
    float m_timeStamp; // 0x80
    char pad_05[12];
}; // size: 0x90

/// CAnimGraphDebugReplay
class __declspec(align(8)) CAnimGraphDebugReplay0 {
public:
    // CUtlString m_animGraphFileName;
    char pad_00[64];
    char m_animGraphFileName[1]; // 0x40
    // CUtlVector< CSmartPtr< CAnimReplayFrame > > m_frameList;
    char pad_01[7];
    char m_frameList[1]; // 0x48
    char pad_02[20];
    int32_t m_startIndex; // 0x60
    int32_t m_writeIndex; // 0x64
    int32_t m_frameCount; // 0x68
    char pad_03[4];
}; // size: 0x70

/// CAnimGraphModelBinding
class __declspec(align(8)) CAnimGraphModelBinding0 {
public:
    // CUtlString m_modelName;
    char pad_00[8];
    char m_modelName[1]; // 0x8
    // CSmartPtr< CAnimUpdateSharedData > m_pSharedData;
    char pad_01[7];
    char m_pSharedData[1]; // 0x10
    char pad_02[23];
}; // size: 0x28

/// CAnimUpdateSharedData
class __declspec(align(8)) CAnimUpdateSharedData0 {
public:
    // CUtlVector< CSmartPtr< CAnimUpdateNodeBase > > m_nodes;
    char pad_00[16];
    char m_nodes[1]; // 0x10
    // CUtlHashtable< CAnimNodePath, int32 > m_nodeIndexMap;
    char pad_01[23];
    char m_nodeIndexMap[1]; // 0x28
    // CUtlVector< CSmartPtr< CAnimComponentUpdater > > m_components;
    char pad_02[31];
    char m_components[1]; // 0x48
    // CSmartPtr< CAnimParameterManagerUpdater > m_pParamListUpdater;
    char pad_03[23];
    char m_pParamListUpdater[1]; // 0x60
    // CSmartPtr< CAnimTagManagerUpdater > m_pTagManagerUpdater;
    char pad_04[7];
    char m_pTagManagerUpdater[1]; // 0x68
    // CSmartPtr< CAnimScriptManager > m_scriptManager;
    char pad_05[7];
    char m_scriptManager[1]; // 0x70
    CAnimGraphSettingsManager m_settings; // 0x78
    // CSmartPtr< CStaticPoseCacheBuilder > m_pStaticPoseCache;
    char m_pStaticPoseCache[1]; // 0xa8
    // CSmartPtr< CAnimSkeleton > m_pSkeleton;
    char pad_06[7];
    char m_pSkeleton[1]; // 0xb0
    char pad_07[4];
    CAnimNodePath m_rootNodePath; // 0xb8
    char pad_08[24];
}; // size: 0x100

/// CAnimParamHandleMap
class __declspec(align(8)) CAnimParamHandleMap0 {
public:
    // CUtlHashtable< uint16, int16 > m_list;
    char m_list[1]; // 0x0
    char pad_00[31];
}; // size: 0x20

/// CAnimParameterManagerUpdater
class __declspec(align(8)) CAnimParameterManagerUpdater0 {
public:
    // CUtlVector< CSmartPtr< CAnimParameterBase > > m_parameters;
    char pad_00[24];
    char m_parameters[1]; // 0x18
    // CUtlHashtable< AnimParamID, int32 > m_idToIndexMap;
    char pad_01[23];
    char m_idToIndexMap[1]; // 0x30
    // CUtlHashtable< CUtlString, int32 > m_nameToIndexMap;
    char pad_02[31];
    char m_nameToIndexMap[1]; // 0x50
    // CUtlVector< CAnimParamHandle > m_indexToHandle;
    char pad_03[31];
    char m_indexToHandle[1]; // 0x70
    // CUtlVector< std::pair< CAnimParamHandle, CAnimVariant > > m_autoResetParams;
    char pad_04[23];
    char m_autoResetParams[1]; // 0x88
    // CUtlHashtable< CAnimParamHandle, int16 > m_autoResetMap;
    char pad_05[23];
    char m_autoResetMap[1]; // 0xa0
    char pad_06[95];
}; // size: 0x100

/// CAnimParameterBase
class __declspec(align(4)) CAnimParameterBase0 {
public:
    // CGlobalSymbol m_name;
    char pad_00[24];
    char m_name[1]; // 0x18
    // CUtlString m_sComment;
    char pad_01[7];
    char m_sComment[1]; // 0x20
    // CUtlString m_group;
    char pad_02[7];
    char m_group[1]; // 0x28
    char pad_03[4];
    AnimParamID m_id; // 0x30
    // CUtlString m_componentName;
    char pad_04[20];
    char m_componentName[1]; // 0x48
    char pad_05[31];
    bool m_bNetworkingRequested; // 0x68
    bool m_bIsReferenced; // 0x69
    char pad_06[6];
}; // size: 0x70

/// CAnimUpdateNodeBase
class __declspec(align(4)) CAnimUpdateNodeBase0 {
public:
    char pad_00[24];
    CAnimNodePath m_nodePath; // 0x18
    AnimNodeNetworkMode m_networkMode; // 0x48
    // CUtlString m_name;
    char pad_01[4];
    char m_name[1]; // 0x50
    char pad_02[7];
}; // size: 0x58

/// CAnimNodePath
class __declspec(align(4)) CAnimNodePath0 {
public:
    AnimNodeID m_path; // 0x0
    char pad_00[40];
    int32_t m_nCount; // 0x2c
}; // size: 0x30

/// CAnimComponentUpdater
class __declspec(align(4)) CAnimComponentUpdater0 {
public:
    // CUtlString m_name;
    char pad_00[24];
    char m_name[1]; // 0x18
    char pad_01[4];
    AnimComponentID m_id; // 0x20
    AnimNodeNetworkMode m_networkMode; // 0x24
    bool m_bStartEnabled; // 0x28
    char pad_02[7];
}; // size: 0x30

/// CAnimTagManagerUpdater
class __declspec(align(8)) CAnimTagManagerUpdater0 {
public:
    // CUtlVector< CSmartPtr< CAnimTagBase > > m_tags;
    char pad_00[56];
    char m_tags[1]; // 0x38
    char pad_01[63];
}; // size: 0x78

/// CAnimScriptManager
class __declspec(align(8)) CAnimScriptManager0 {
public:
    // CUtlVector< ScriptInfo_t > m_scriptInfo;
    char pad_00[16];
    char m_scriptInfo[1]; // 0x10
    char pad_01[399];
}; // size: 0x1a0

/// CAnimGraphSettingsManager
class __declspec(align(8)) CAnimGraphSettingsManager0 {
public:
    // CUtlVector< CSmartPtr< CAnimGraphSettingsGroup > > m_settingsGroups;
    char pad_00[24];
    char m_settingsGroups[1]; // 0x18
    char pad_01[23];
}; // size: 0x30

/// CStaticPoseCacheBuilder
class __declspec(align(8)) CStaticPoseCacheBuilder0 {
public:
    char pad_00[56];
}; // size: 0x38

/// CBlendCurve
class __declspec(align(4)) CBlendCurve0 {
public:
    float m_flControlPoint1; // 0x0
    float m_flControlPoint2; // 0x4
}; // size: 0x8

/// ParamSpanSample_t
class __declspec(align(4)) ParamSpanSample_t0 {
public:
    // CAnimVariant m_value;
    char m_value[1]; // 0x0
    char pad_00[16];
    float m_flCycle; // 0x14
}; // size: 0x18

/// ParamSpan_t
class __declspec(align(8)) ParamSpan_t0 {
public:
    // CUtlVector< ParamSpanSample_t > m_samples;
    char m_samples[1]; // 0x0
    char pad_00[23];
    CAnimParamHandle m_hParam; // 0x18
    AnimParamType_t m_eParamType; // 0x1a
    float m_flStartCycle; // 0x1c
    float m_flEndCycle; // 0x20
    char pad_01[4];
}; // size: 0x28

/// CParamSpanUpdater
class __declspec(align(8)) CParamSpanUpdater0 {
public:
    // CUtlVector< ParamSpan_t > m_spans;
    char m_spans[1]; // 0x0
    char pad_00[23];
}; // size: 0x18

/// CAnimGraphSettingsGroup
class __declspec(align(8)) CAnimGraphSettingsGroup0 {
public:
    char pad_00[32];
}; // size: 0x20

/// CCachedPose
class __declspec(align(8)) CCachedPose0 {
public:
    // CUtlVector< CTransform > m_transforms;
    char pad_00[8];
    char m_transforms[1]; // 0x8
    // CUtlVector< float32 > m_morphWeights;
    char pad_01[23];
    char m_morphWeights[1]; // 0x20
    char pad_02[20];
    HSequence m_hSequence; // 0x38
    float m_flCycle; // 0x3c
}; // size: 0x40

/// CStaticPoseCache
class __declspec(align(8)) CStaticPoseCache0 {
public:
    // CUtlVector< CCachedPose > m_poses;
    char pad_00[16];
    char m_poses[1]; // 0x10
    char pad_01[20];
    int32_t m_nBoneCount; // 0x28
    int32_t m_nMorphCount; // 0x2c
}; // size: 0x30

/// CAnimActionUpdater
class __declspec(align(1)) CAnimActionUpdater0 {
public:
    char pad_00[24];
}; // size: 0x18

/// CEmitTagActionUpdater
class __declspec(align(8)) CEmitTagActionUpdater0 {
public:
    char pad_00[24];
    int32_t m_nTagIndex; // 0x18
    bool m_bIsZeroDuration; // 0x1c
    char pad_01[3];
}; // size: 0x20

/// CSetParameterActionUpdater
class __declspec(align(8)) CSetParameterActionUpdater0 {
public:
    char pad_00[24];
    CAnimParamHandle m_hParam; // 0x18
    // CAnimVariant m_value;
    char m_value[1]; // 0x1a
    char pad_01[21];
}; // size: 0x30

/// CToggleComponentActionUpdater
class __declspec(align(8)) CToggleComponentActionUpdater0 {
public:
    char pad_00[24];
    AnimComponentID m_componentID; // 0x18
    bool m_bSetEnabled; // 0x1c
    char pad_01[3];
}; // size: 0x20

/// CExpressionActionUpdater
class __declspec(align(8)) CExpressionActionUpdater0 {
public:
    char pad_00[24];
    CAnimParamHandle m_hParam; // 0x18
    AnimParamType_t m_eParamType; // 0x1a
    AnimScriptHandle m_hScript; // 0x1c
}; // size: 0x20

/// CAnimTagBase
class __declspec(align(8)) CAnimTagBase0 {
public:
    // CGlobalSymbol m_name;
    char pad_00[24];
    char m_name[1]; // 0x18
    // CUtlString m_sComment;
    char pad_01[7];
    char m_sComment[1]; // 0x20
    // CGlobalSymbol m_group;
    char pad_02[7];
    char m_group[1]; // 0x28
    char pad_03[4];
    AnimTagID m_tagID; // 0x30
    char pad_04[20];
    bool m_bIsReferenced; // 0x48
    char pad_05[7];
}; // size: 0x50

/// CSequenceTagSpans
class __declspec(align(8)) CSequenceTagSpans0 {
public:
    // CGlobalSymbol m_sSequenceName;
    char m_sSequenceName[1]; // 0x0
    // CUtlVector< TagSpan_t > m_tags;
    char pad_00[7];
    char m_tags[1]; // 0x8
    char pad_01[23];
}; // size: 0x20

/// TagSpan_t
class __declspec(align(4)) TagSpan_t0 {
public:
    int32_t m_tagIndex; // 0x0
    float m_startCycle; // 0x4
    float m_endCycle; // 0x8
}; // size: 0xc

/// CAudioAnimTag
class __declspec(align(8)) CAudioAnimTag0 {
public:
    // CUtlString m_clipName;
    char pad_00[88];
    char m_clipName[1]; // 0x58
    // CUtlString m_attachmentName;
    char pad_01[7];
    char m_attachmentName[1]; // 0x60
    char pad_02[4];
    float m_flVolume; // 0x68
    bool m_bStopWhenTagEnds; // 0x6c
    bool m_bStopWhenGraphEnds; // 0x6d
    bool m_bPlayOnServer; // 0x6e
    bool m_bPlayOnClient; // 0x6f
}; // size: 0x70

/// CBodyGroupSetting
class __declspec(align(8)) CBodyGroupSetting0 {
public:
    // CUtlString m_BodyGroupName;
    char m_BodyGroupName[1]; // 0x0
    char pad_00[4];
    int32_t m_nBodyGroupOption; // 0x8
    char pad_01[4];
}; // size: 0x10

/// CBodyGroupAnimTag
class __declspec(align(8)) CBodyGroupAnimTag0 {
public:
    char pad_00[88];
    int32_t m_nPriority; // 0x58
    // CUtlVector< CBodyGroupSetting > m_bodyGroupSettings;
    char pad_01[4];
    char m_bodyGroupSettings[1]; // 0x60
    char pad_02[23];
}; // size: 0x78

/// CClothSettingsAnimTag
class __declspec(align(8)) CClothSettingsAnimTag0 {
public:
    char pad_00[88];
    float m_flStiffness; // 0x58
    float m_flEaseIn; // 0x5c
    float m_flEaseOut; // 0x60
    // CUtlString m_nVertexSet;
    char pad_01[4];
    char m_nVertexSet[1]; // 0x68
    char pad_02[7];
}; // size: 0x70

/// CFootFallAnimTag
class __declspec(align(8)) CFootFallAnimTag0 {
public:
    char pad_00[88];
    FootFallTagFoot_t m_foot; // 0x58
    char pad_01[4];
}; // size: 0x60

/// CFootstepLandedAnimTag
class __declspec(align(8)) CFootstepLandedAnimTag0 {
public:
    char pad_00[88];
    FootstepLandedFootSoundType_t m_FootstepType; // 0x58
    // CUtlString m_OverrideSoundName;
    char pad_01[4];
    char m_OverrideSoundName[1]; // 0x60
    // CUtlString m_DebugAnimSourceString;
    char pad_02[7];
    char m_DebugAnimSourceString[1]; // 0x68
    // CUtlString m_BoneName;
    char pad_03[7];
    char m_BoneName[1]; // 0x70
    char pad_04[7];
    FootstepJumpPhase_t m_footstepJumpPhase; // 0x78
    char pad_05[7];
}; // size: 0x80

/// CHandshakeAnimTagBase
class __declspec(align(8)) CHandshakeAnimTagBase0 {
public:
    char pad_00[80];
    bool m_bIsDisableTag; // 0x50
    char pad_01[7];
}; // size: 0x58

/// CTaskHandshakeAnimTag
class __declspec(align(8)) CTaskHandshakeAnimTag0 {
public:
    char pad_00[88];
}; // size: 0x58

/// CMovementHandshakeAnimTag
class __declspec(align(8)) CMovementHandshakeAnimTag0 {
public:
    char pad_00[88];
}; // size: 0x58

/// CMaterialAttributeAnimTag
class __declspec(align(8)) CMaterialAttributeAnimTag0 {
public:
    // CUtlString m_AttributeName;
    char pad_00[88];
    char m_AttributeName[1]; // 0x58
    char pad_01[4];
    MatterialAttributeTagType_t m_AttributeType; // 0x60
    float m_flValue; // 0x64
    // Color m_Color;
    char m_Color[1]; // 0x68
    char pad_02[7];
}; // size: 0x70

/// CParticleAnimTag
class __declspec(align(8)) CParticleAnimTag0 {
public:
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hParticleSystem;
    char pad_00[88];
    char m_hParticleSystem[1]; // 0x58
    // CUtlString m_particleSystemName;
    char pad_01[7];
    char m_particleSystemName[1]; // 0x60
    // CUtlString m_configName;
    char pad_02[7];
    char m_configName[1]; // 0x68
    char pad_03[7];
    bool m_bDetachFromOwner; // 0x70
    bool m_bAggregate; // 0x71
    bool m_bStopWhenTagEnds; // 0x72
    bool m_bTagEndStopIsInstant; // 0x73
    // CUtlString m_attachmentName;
    char pad_04[4];
    char m_attachmentName[1]; // 0x78
    char pad_05[4];
    ParticleAttachment_t m_attachmentType; // 0x80
    // CUtlString m_attachmentCP1Name;
    char pad_06[4];
    char m_attachmentCP1Name[1]; // 0x88
    char pad_07[4];
    ParticleAttachment_t m_attachmentCP1Type; // 0x90
    char pad_08[4];
}; // size: 0x98

/// CRagdollAnimTag
class __declspec(align(8)) CRagdollAnimTag0 {
public:
    // CGlobalSymbol m_profileName;
    char pad_00[88];
    char m_profileName[1]; // 0x58
    char pad_01[7];
}; // size: 0x60

/// CSequenceFinishedAnimTag
class __declspec(align(8)) CSequenceFinishedAnimTag0 {
public:
    // CUtlString m_sequenceName;
    char pad_00[88];
    char m_sequenceName[1]; // 0x58
    char pad_01[7];
}; // size: 0x60

/// CStringAnimTag
class __declspec(align(8)) CStringAnimTag0 {
public:
    char pad_00[80];
}; // size: 0x50

/// CTaskStatusAnimTag
class __declspec(align(8)) CTaskStatusAnimTag0 {
public:
    char pad_00[88];
}; // size: 0x58

/// CWarpSectionAnimTagBase
class __declspec(align(8)) CWarpSectionAnimTagBase0 {
public:
    char pad_00[80];
}; // size: 0x50

/// CWarpSectionAnimTag
class __declspec(align(8)) CWarpSectionAnimTag0 {
public:
    char pad_00[80];
    bool m_bWarpPosition; // 0x50
    bool m_bWarpOrientation; // 0x51
    char pad_01[6];
}; // size: 0x58

/// CAnimScriptComponentUpdater
class __declspec(align(8)) CAnimScriptComponentUpdater0 {
public:
    char pad_00[48];
    AnimScriptHandle m_hScript; // 0x30
    char pad_01[4];
}; // size: 0x38

/// CCPPScriptComponentUpdater
class __declspec(align(8)) CCPPScriptComponentUpdater0 {
public:
    // CUtlVector< CGlobalSymbol > m_scriptsToRun;
    char pad_00[48];
    char m_scriptsToRun[1]; // 0x30
    char pad_01[47];
}; // size: 0x60

/// CDampedValueUpdateItem
class __declspec(align(8)) CDampedValueUpdateItem0 {
public:
    CAnimInputDamping m_damping; // 0x0
    char pad_00[8];
    CAnimParamHandle m_hParamIn; // 0x20
    CAnimParamHandle m_hParamOut; // 0x22
    char pad_01[4];
}; // size: 0x28

/// CDampedValueComponentUpdater
class __declspec(align(8)) CDampedValueComponentUpdater0 {
public:
    // CUtlVector< CDampedValueUpdateItem > m_items;
    char pad_00[48];
    char m_items[1]; // 0x30
    char pad_01[23];
}; // size: 0x48

/// CDemoSettingsComponentUpdater
class __declspec(align(8)) CDemoSettingsComponentUpdater0 {
public:
    char pad_00[48];
    CAnimDemoCaptureSettings m_settings; // 0x30
}; // size: 0xb0

/// CLODComponentUpdater
class __declspec(align(8)) CLODComponentUpdater0 {
public:
    char pad_00[48];
    int32_t m_nServerLOD; // 0x30
    char pad_01[4];
}; // size: 0x38

/// CLookComponentUpdater
class __declspec(align(8)) CLookComponentUpdater0 {
public:
    char pad_00[52];
    CAnimParamHandle m_hLookHeading; // 0x34
    CAnimParamHandle m_hLookHeadingNormalized; // 0x36
    CAnimParamHandle m_hLookHeadingVelocity; // 0x38
    CAnimParamHandle m_hLookPitch; // 0x3a
    CAnimParamHandle m_hLookDistance; // 0x3c
    CAnimParamHandle m_hLookDirection; // 0x3e
    CAnimParamHandle m_hLookTarget; // 0x40
    CAnimParamHandle m_hLookTargetWorldSpace; // 0x42
    bool m_bNetworkLookTarget; // 0x44
    char pad_01[3];
}; // size: 0x48

/// CMovementComponentUpdater
class __declspec(align(8)) CMovementComponentUpdater0 {
public:
    // CUtlVector< CSmartPtr< CAnimMotorUpdaterBase > > m_motors;
    char pad_00[48];
    char m_motors[1]; // 0x30
    char pad_01[16];
    CAnimInputDamping m_facingDamping; // 0x48
    char pad_02[8];
    int32_t m_nDefaultMotorIndex; // 0x68
    float m_flDefaultRunSpeed; // 0x6c
    bool m_bMoveVarsDisabled; // 0x70
    bool m_bNetworkPath; // 0x71
    bool m_bNetworkFacing; // 0x72
    CAnimParamHandle m_paramHandles; // 0x73
    char pad_03[67];
}; // size: 0xb8

/// CAnimMotorUpdaterBase
class __declspec(align(1)) CAnimMotorUpdaterBase0 {
public:
    // CUtlString m_name;
    char pad_00[16];
    char m_name[1]; // 0x10
    char pad_01[7];
    bool m_bDefault; // 0x18
    char pad_02[7];
}; // size: 0x20

/// CPairedSequenceComponentUpdater
class __declspec(align(8)) CPairedSequenceComponentUpdater0 {
public:
    char pad_00[56];
}; // size: 0x38

/// WeightList
class __declspec(align(8)) WeightList0 {
public:
    // CUtlString m_name;
    char m_name[1]; // 0x0
    // CUtlVector< float32 > m_weights;
    char pad_00[7];
    char m_weights[1]; // 0x8
    char pad_01[23];
}; // size: 0x20

/// CRagdollComponentUpdater
class __declspec(align(8)) CRagdollComponentUpdater0 {
public:
    // CUtlVector< CAnimNodePath > m_ragdollNodePaths;
    char pad_00[48];
    char m_ragdollNodePaths[1]; // 0x30
    // CUtlVector< CAnimNodePath > m_followAttachmentNodePaths;
    char pad_01[23];
    char m_followAttachmentNodePaths[1]; // 0x48
    // CUtlVector< int32 > m_boneIndices;
    char pad_02[23];
    char m_boneIndices[1]; // 0x60
    // CUtlVector< CUtlString > m_boneNames;
    char pad_03[23];
    char m_boneNames[1]; // 0x78
    // CUtlVector< WeightList > m_weightLists;
    char pad_04[23];
    char m_weightLists[1]; // 0x90
    // CUtlVector< int32 > m_boneToWeightIndices;
    char pad_05[23];
    char m_boneToWeightIndices[1]; // 0xa8
    char pad_06[20];
    float m_flSpringFrequencyMin; // 0xc0
    float m_flSpringFrequencyMax; // 0xc4
    float m_flMaxStretch; // 0xc8
    bool m_bSolidCollisionAtZeroWeight; // 0xcc
    char pad_07[11];
}; // size: 0xd8

/// CRemapValueUpdateItem
class __declspec(align(4)) CRemapValueUpdateItem0 {
public:
    CAnimParamHandle m_hParamIn; // 0x0
    CAnimParamHandle m_hParamOut; // 0x2
    float m_flMinInputValue; // 0x4
    float m_flMaxInputValue; // 0x8
    float m_flMinOutputValue; // 0xc
    float m_flMaxOutputValue; // 0x10
}; // size: 0x14

/// CRemapValueComponentUpdater
class __declspec(align(8)) CRemapValueComponentUpdater0 {
public:
    // CUtlVector< CRemapValueUpdateItem > m_items;
    char pad_00[48];
    char m_items[1]; // 0x30
    char pad_01[23];
}; // size: 0x48

/// CSlopeComponentUpdater
class __declspec(align(8)) CSlopeComponentUpdater0 {
public:
    char pad_00[52];
    float m_flTraceDistance; // 0x34
    CAnimParamHandle m_hSlopeAngle; // 0x38
    CAnimParamHandle m_hSlopeAngleFront; // 0x3a
    CAnimParamHandle m_hSlopeAngleSide; // 0x3c
    CAnimParamHandle m_hSlopeHeading; // 0x3e
    CAnimParamHandle m_hSlopeNormal; // 0x40
    CAnimParamHandle m_hSlopeNormal_WorldSpace; // 0x42
    char pad_01[4];
}; // size: 0x48

/// CStateMachineComponentUpdater
class __declspec(align(8)) CStateMachineComponentUpdater0 {
public:
    char pad_00[48];
    CAnimStateMachineUpdater m_stateMachine; // 0x30
}; // size: 0x88

/// CAnimStateMachineUpdater
class __declspec(align(8)) CAnimStateMachineUpdater0 {
public:
    // CUtlVector< CStateUpdateData > m_states;
    char pad_00[8];
    char m_states[1]; // 0x8
    // CUtlVector< CTransitionUpdateData > m_transitions;
    char pad_01[23];
    char m_transitions[1]; // 0x20
    char pad_02[44];
    int32_t m_startStateIndex; // 0x50
    char pad_03[4];
}; // size: 0x58

/// CMotionDataSet
class __declspec(align(8)) CMotionDataSet0 {
public:
    // CUtlVector< CMotionGraphGroup > m_groups;
    char m_groups[1]; // 0x0
    char pad_00[20];
    int32_t m_nDimensionCount; // 0x18
    char pad_01[4];
}; // size: 0x20

/// CMotionGraphGroup
class __declspec(align(8)) CMotionGraphGroup0 {
public:
    CMotionSearchDB m_searchDB; // 0x0
    // CUtlVector< CSmartPtr< CMotionGraph > > m_motionGraphs;
    char m_motionGraphs[1]; // 0xb8
    // CUtlVector< CMotionGraphConfig > m_motionGraphConfigs;
    char pad_00[23];
    char m_motionGraphConfigs[1]; // 0xd0
    // CUtlVector< int32 > m_sampleToConfig;
    char pad_01[23];
    char m_sampleToConfig[1]; // 0xe8
    char pad_02[20];
    AnimScriptHandle m_hIsActiveScript; // 0x100
    char pad_03[4];
}; // size: 0x108

/// CMotionSearchDB
class __declspec(align(8)) CMotionSearchDB0 {
public:
    CMotionSearchNode m_rootNode; // 0x0
    CProductQuantizer m_residualQuantizer; // 0x80
    // CUtlVector< MotionDBIndex > m_codeIndices;
    char m_codeIndices[1]; // 0xa0
    char pad_00[23];
}; // size: 0xb8

/// CMotionGraph
class __declspec(align(8)) CMotionGraph0 {
public:
    char pad_00[16];
    CParamSpanUpdater m_paramSpans; // 0x10
    // CUtlVector< TagSpan_t > m_tags;
    char m_tags[1]; // 0x28
    // CSmartPtr< CMotionNode > m_pRootNode;
    char pad_01[23];
    char m_pRootNode[1]; // 0x40
    char pad_02[4];
    int32_t m_nParameterCount; // 0x48
    int32_t m_nConfigStartIndex; // 0x4c
    int32_t m_nConfigCount; // 0x50
    bool m_bLoop; // 0x54
    char pad_03[3];
}; // size: 0x58

/// CMotionGraphConfig
class __declspec(align(4)) CMotionGraphConfig0 {
public:
    float m_paramValues[4]; // 0x0
    float m_flDuration; // 0x10
    MotionIndex m_nMotionIndex; // 0x14
    int32_t m_nSampleStart; // 0x18
    int32_t m_nSampleCount; // 0x1c
}; // size: 0x20

/// SampleCode
class __declspec(align(1)) SampleCode0 {
public:
    uint8_t m_subCode[8]; // 0x0
}; // size: 0x8

/// MotionDBIndex
class __declspec(align(4)) MotionDBIndex0 {
public:
    uint32_t m_nIndex; // 0x0
}; // size: 0x4

/// CVectorQuantizer
class __declspec(align(8)) CVectorQuantizer0 {
public:
    // CUtlVector< float32 > m_centroidVectors;
    char m_centroidVectors[1]; // 0x0
    char pad_00[20];
    int32_t m_nCentroids; // 0x18
    int32_t m_nDimensions; // 0x1c
}; // size: 0x20

/// CProductQuantizer
class __declspec(align(8)) CProductQuantizer0 {
public:
    // CUtlVector< CVectorQuantizer > m_subQuantizers;
    char m_subQuantizers[1]; // 0x0
    char pad_00[20];
    int32_t m_nDimensions; // 0x18
    char pad_01[4];
}; // size: 0x20

/// CMotionSearchNode
class __declspec(align(8)) CMotionSearchNode0 {
public:
    // CUtlVector< CMotionSearchNode* > m_children;
    char m_children[1]; // 0x0
    char pad_00[16];
    CVectorQuantizer m_quantizer; // 0x18
    // CUtlVector< CUtlVector< SampleCode > > m_sampleCodes;
    char m_sampleCodes[1]; // 0x38
    // CUtlVector< CUtlVector< int32 > > m_sampleIndices;
    char pad_01[23];
    char m_sampleIndices[1]; // 0x50
    // CUtlVector< int32 > m_selectableSamples;
    char pad_02[23];
    char m_selectableSamples[1]; // 0x68
    char pad_03[23];
}; // size: 0x80

/// CMotionNode
class __declspec(align(4)) CMotionNode0 {
public:
    // CUtlString m_name;
    char pad_00[24];
    char m_name[1]; // 0x18
    char pad_01[4];
    AnimNodeID m_id; // 0x20
    char pad_02[4];
}; // size: 0x28

/// CEditableMotionGraph
class __declspec(align(8)) CEditableMotionGraph0 {
public:
    char pad_00[88];
}; // size: 0x58

/// CMotionNodeSequence
class __declspec(align(8)) CMotionNodeSequence0 {
public:
    // CUtlVector< TagSpan_t > m_tags;
    char pad_00[40];
    char m_tags[1]; // 0x28
    char pad_01[20];
    HSequence m_hSequence; // 0x40
    float m_flPlaybackSpeed; // 0x44
}; // size: 0x48

/// MotionBlendItem
class __declspec(align(8)) MotionBlendItem0 {
public:
    // CSmartPtr< CMotionNode > m_pChild;
    char m_pChild[1]; // 0x0
    char pad_00[4];
    float m_flKeyValue; // 0x8
    char pad_01[4];
}; // size: 0x10

/// CMotionNodeBlend1D
class __declspec(align(8)) CMotionNodeBlend1D0 {
public:
    // CUtlVector< MotionBlendItem > m_blendItems;
    char pad_00[40];
    char m_blendItems[1]; // 0x28
    char pad_01[20];
    int32_t m_nParamIndex; // 0x40
    char pad_02[4];
}; // size: 0x48

/// CMotionMetricEvaluator
class __declspec(align(4)) CMotionMetricEvaluator0 {
public:
    // CUtlVector< float32 > m_means;
    char pad_00[24];
    char m_means[1]; // 0x18
    // CUtlVector< float32 > m_standardDeviations;
    char pad_01[23];
    char m_standardDeviations[1]; // 0x30
    char pad_02[20];
    float m_flWeight; // 0x48
    int32_t m_nDimensionStartIndex; // 0x4c
}; // size: 0x50

/// CBlockSelectionMetricEvaluator
class __declspec(align(8)) CBlockSelectionMetricEvaluator0 {
public:
    char pad_00[80];
}; // size: 0x50

/// CBonePositionMetricEvaluator
class __declspec(align(8)) CBonePositionMetricEvaluator0 {
public:
    char pad_00[80];
    int32_t m_nBoneIndex; // 0x50
    char pad_01[4];
}; // size: 0x58

/// CBoneVelocityMetricEvaluator
class __declspec(align(8)) CBoneVelocityMetricEvaluator0 {
public:
    char pad_00[80];
    int32_t m_nBoneIndex; // 0x50
    char pad_01[4];
}; // size: 0x58

/// CCurrentRotationVelocityMetricEvaluator
class __declspec(align(8)) CCurrentRotationVelocityMetricEvaluator0 {
public:
    char pad_00[80];
}; // size: 0x50

/// CCurrentVelocityMetricEvaluator
class __declspec(align(8)) CCurrentVelocityMetricEvaluator0 {
public:
    char pad_00[80];
}; // size: 0x50

/// CDistanceRemainingMetricEvaluator
class __declspec(align(8)) CDistanceRemainingMetricEvaluator0 {
public:
    char pad_00[80];
    float m_flMaxDistance; // 0x50
    float m_flMinDistance; // 0x54
    float m_flStartGoalFilterDistance; // 0x58
    float m_flMaxGoalOvershootScale; // 0x5c
    bool m_bFilterFixedMinDistance; // 0x60
    bool m_bFilterGoalDistance; // 0x61
    bool m_bFilterGoalOvershoot; // 0x62
    char pad_01[5];
}; // size: 0x68

/// CFootCycleMetricEvaluator
class __declspec(align(8)) CFootCycleMetricEvaluator0 {
public:
    // CUtlVector< int32 > m_footIndices;
    char pad_00[80];
    char m_footIndices[1]; // 0x50
    char pad_01[23];
}; // size: 0x68

/// CFootPositionMetricEvaluator
class __declspec(align(8)) CFootPositionMetricEvaluator0 {
public:
    // CUtlVector< int32 > m_footIndices;
    char pad_00[80];
    char m_footIndices[1]; // 0x50
    char pad_01[23];
    bool m_bIgnoreSlope; // 0x68
    char pad_02[7];
}; // size: 0x70

/// CFutureFacingMetricEvaluator
class __declspec(align(8)) CFutureFacingMetricEvaluator0 {
public:
    char pad_00[80];
    float m_flDistance; // 0x50
    float m_flTime; // 0x54
}; // size: 0x58

/// CFutureVelocityMetricEvaluator
class __declspec(align(8)) CFutureVelocityMetricEvaluator0 {
public:
    char pad_00[80];
    float m_flDistance; // 0x50
    float m_flStoppingDistance; // 0x54
    float m_flTargetSpeed; // 0x58
    VelocityMetricMode m_eMode; // 0x5c
    char pad_01[3];
}; // size: 0x60

/// CPathMetricEvaluator
class __declspec(align(8)) CPathMetricEvaluator0 {
public:
    // CUtlVector< float32 > m_pathTimeSamples;
    char pad_00[80];
    char m_pathTimeSamples[1]; // 0x50
    char pad_01[20];
    float m_flDistance; // 0x68
    bool m_bExtrapolateMovement; // 0x6c
    float m_flMinExtrapolationSpeed; // 0x70
    char pad_02[4];
}; // size: 0x78

/// CStepsRemainingMetricEvaluator
class __declspec(align(8)) CStepsRemainingMetricEvaluator0 {
public:
    // CUtlVector< int32 > m_footIndices;
    char pad_00[80];
    char m_footIndices[1]; // 0x50
    char pad_01[20];
    float m_flMinStepsRemaining; // 0x68
    char pad_02[4];
}; // size: 0x70

/// CTimeRemainingMetricEvaluator
class __declspec(align(8)) CTimeRemainingMetricEvaluator0 {
public:
    char pad_00[80];
    bool m_bMatchByTimeRemaining; // 0x50
    float m_flMaxTimeRemaining; // 0x54
    bool m_bFilterByTimeRemaining; // 0x58
    float m_flMinTimeRemaining; // 0x5c
}; // size: 0x60

/// CPathAnimMotorUpdaterBase
class __declspec(align(1)) CPathAnimMotorUpdaterBase0 {
public:
    char pad_00[32];
    bool m_bLockToPath; // 0x20
    char pad_01[7];
}; // size: 0x28

/// CDampedPathAnimMotorUpdater
class __declspec(align(8)) CDampedPathAnimMotorUpdater0 {
public:
    char pad_00[44];
    float m_flAnticipationTime; // 0x2c
    float m_flMinSpeedScale; // 0x30
    CAnimParamHandle m_hAnticipationPosParam; // 0x34
    CAnimParamHandle m_hAnticipationHeadingParam; // 0x36
    float m_flSpringConstant; // 0x38
    float m_flMinSpringTension; // 0x3c
    float m_flMaxSpringTension; // 0x40
    char pad_01[4];
}; // size: 0x48

/// CPathAnimMotorUpdater
class __declspec(align(8)) CPathAnimMotorUpdater0 {
public:
    char pad_00[40];
}; // size: 0x28

/// CPlayerInputAnimMotorUpdater
class __declspec(align(8)) CPlayerInputAnimMotorUpdater0 {
public:
    // CUtlVector< float32 > m_sampleTimes;
    char pad_00[32];
    char m_sampleTimes[1]; // 0x20
    char pad_01[24];
    float m_flSpringConstant; // 0x3c
    float m_flAnticipationDistance; // 0x40
    CAnimParamHandle m_hAnticipationPosParam; // 0x44
    CAnimParamHandle m_hAnticipationHeadingParam; // 0x46
    bool m_bUseAcceleration; // 0x48
    char pad_02[7];
}; // size: 0x50

/// AimMatrixOpFixedSettings_t
class __declspec(align(16)) AimMatrixOpFixedSettings_t0 {
public:
    CAnimAttachment m_attachment; // 0x0
    CAnimInputDamping m_damping; // 0x80
    CPoseHandle m_poseCacheHandles; // 0x98
    char pad_00[36];
    AimMatrixBlendMode m_eBlendMode; // 0xc0
    float m_flMaxYawAngle; // 0xc4
    float m_flMaxPitchAngle; // 0xc8
    int32_t m_nSequenceMaxFrame; // 0xcc
    int32_t m_nBoneMaskIndex; // 0xd0
    bool m_bTargetIsPosition; // 0xd4
    bool m_bUseBiasAndClamp; // 0xd5
    float m_flBiasAndClampYawOffset; // 0xd8
    float m_flBiasAndClampPitchOffset; // 0xdc
    CBlendCurve m_biasAndClampBlendCurve; // 0xe0
    char pad_01[8];
}; // size: 0xf0

/// CPoseHandle
class __declspec(align(2)) CPoseHandle0 {
public:
    uint16_t m_nIndex; // 0x0
    PoseType_t m_eType; // 0x2
    char pad_00[1];
}; // size: 0x4

/// AimCameraOpFixedSettings_t
class __declspec(align(8)) AimCameraOpFixedSettings_t0 {
public:
    int32_t m_nChainIndex; // 0x0
    int32_t m_nCameraJointIndex; // 0x4
    int32_t m_nPelvisJointIndex; // 0x8
    int32_t m_nClavicleLeftJointIndex; // 0xc
    int32_t m_nClavicleRightJointIndex; // 0x10
    int32_t m_nDepenetrationJointIndex; // 0x14
    // CUtlVector< int32 > m_propJoints;
    char m_propJoints[1]; // 0x18
    char pad_00[23];
}; // size: 0x30

/// FollowAttachmentSettings_t
class __declspec(align(16)) FollowAttachmentSettings_t0 {
public:
    CAnimAttachment m_attachment; // 0x0
    int32_t m_boneIndex; // 0x80
    AttachmentHandle_t m_attachmentHandle; // 0x84
    bool m_bMatchTranslation; // 0x85
    bool m_bMatchRotation; // 0x86
    char pad_00[9];
}; // size: 0x90

/// FollowTargetOpFixedSettings_t
class __declspec(align(4)) FollowTargetOpFixedSettings_t0 {
public:
    int32_t m_boneIndex; // 0x0
    bool m_bBoneTarget; // 0x4
    int32_t m_boneTargetIndex; // 0x8
    bool m_bWorldCoodinateTarget; // 0xc
    bool m_bMatchTargetOrientation; // 0xd
    char pad_00[2];
}; // size: 0x10

/// FootLockPoseOpFixedSettings
class __declspec(align(8)) FootLockPoseOpFixedSettings0 {
public:
    // CUtlVector< FootFixedData_t > m_footInfo;
    char m_footInfo[1]; // 0x0
    char pad_00[16];
    CAnimInputDamping m_hipDampingSettings; // 0x18
    int32_t m_nHipBoneIndex; // 0x30
    IKSolverType m_ikSolverType; // 0x34
    bool m_bApplyTilt; // 0x38
    bool m_bApplyHipDrop; // 0x39
    bool m_bAlwaysUseFallbackHinge; // 0x3a
    bool m_bApplyFootRotationLimits; // 0x3b
    bool m_bApplyLegTwistLimits; // 0x3c
    float m_flMaxFootHeight; // 0x40
    float m_flExtensionScale; // 0x44
    float m_flMaxLegTwist; // 0x48
    bool m_bEnableLockBreaking; // 0x4c
    float m_flLockBreakTolerance; // 0x50
    float m_flLockBlendTime; // 0x54
    bool m_bEnableStretching; // 0x58
    float m_flMaxStretchAmount; // 0x5c
    float m_flStretchExtensionScale; // 0x60
    char pad_01[4];
}; // size: 0x68

/// FootFixedData_t
class __declspec(align(16)) FootFixedData_t0 {
public:
    // VectorAligned m_vToeOffset;
    char m_vToeOffset[1]; // 0x0
    // VectorAligned m_vHeelOffset;
    char pad_00[15];
    char m_vHeelOffset[1]; // 0x10
    char pad_01[12];
    int32_t m_nTargetBoneIndex; // 0x20
    int32_t m_nAnkleBoneIndex; // 0x24
    int32_t m_nIKAnchorBoneIndex; // 0x28
    int32_t m_ikChainIndex; // 0x2c
    float m_flMaxIKLength; // 0x30
    int32_t m_nFootIndex; // 0x34
    int32_t m_nTagIndex; // 0x38
    float m_flMaxRotationLeft; // 0x3c
    float m_flMaxRotationRight; // 0x40
    char pad_02[12];
}; // size: 0x50

/// FootPinningPoseOpFixedData_t
class __declspec(align(8)) FootPinningPoseOpFixedData_t0 {
public:
    // CUtlVector< FootFixedData_t > m_footInfo;
    char m_footInfo[1]; // 0x0
    char pad_00[20];
    float m_flBlendTime; // 0x18
    float m_flLockBreakDistance; // 0x1c
    float m_flMaxLegTwist; // 0x20
    int32_t m_nHipBoneIndex; // 0x24
    bool m_bApplyLegTwistLimits; // 0x28
    bool m_bApplyFootRotationLimits; // 0x29
    char pad_01[6];
}; // size: 0x30

/// HitReactFixedSettings_t
class __declspec(align(4)) HitReactFixedSettings_t0 {
public:
    int32_t m_nWeightListIndex; // 0x0
    int32_t m_nEffectedBoneCount; // 0x4
    float m_flMaxImpactForce; // 0x8
    float m_flMinImpactForce; // 0xc
    float m_flWhipImpactScale; // 0x10
    float m_flCounterRotationScale; // 0x14
    float m_flDistanceFadeScale; // 0x18
    float m_flPropagationScale; // 0x1c
    float m_flWhipDelay; // 0x20
    float m_flSpringStrength; // 0x24
    float m_flWhipSpringStrength; // 0x28
    float m_flMaxAngleRadians; // 0x2c
    int32_t m_nHipBoneIndex; // 0x30
    float m_flHipBoneTranslationScale; // 0x34
    float m_flHipDipSpringStrength; // 0x38
    float m_flHipDipImpactScale; // 0x3c
    float m_flHipDipDelay; // 0x40
}; // size: 0x44

/// JiggleBoneSettings_t
class __declspec(align(4)) JiggleBoneSettings_t0 {
public:
    int32_t m_nBoneIndex; // 0x0
    float m_flSpringStrength; // 0x4
    float m_flMaxTimeStep; // 0x8
    float m_flDamping; // 0xc
    Vector m_vBoundsMaxLS; // 0x10
    Vector m_vBoundsMinLS; // 0x1c
    JiggleBoneSimSpace m_eSimSpace; // 0x28
}; // size: 0x2c

/// JiggleBoneSettingsList_t
class __declspec(align(8)) JiggleBoneSettingsList_t0 {
public:
    // CUtlVector< JiggleBoneSettings_t > m_boneSettings;
    char m_boneSettings[1]; // 0x0
    char pad_00[23];
}; // size: 0x18

/// LookAtBone_t
class __declspec(align(4)) LookAtBone_t0 {
public:
    int32_t m_index; // 0x0
    float m_weight; // 0x4
}; // size: 0x8

/// LookAtOpFixedSettings_t
class __declspec(align(16)) LookAtOpFixedSettings_t0 {
public:
    CAnimAttachment m_attachment; // 0x0
    CAnimInputDamping m_damping; // 0x80
    // CUtlVector< LookAtBone_t > m_bones;
    char m_bones[1]; // 0x98
    char pad_00[20];
    float m_flYawLimit; // 0xb0
    float m_flPitchLimit; // 0xb4
    float m_flHysteresisInnerAngle; // 0xb8
    float m_flHysteresisOuterAngle; // 0xbc
    bool m_bRotateYawForward; // 0xc0
    bool m_bMaintainUpDirection; // 0xc1
    bool m_bTargetIsPosition; // 0xc2
    bool m_bUseHysteresis; // 0xc3
    char pad_01[12];
}; // size: 0xd0

/// ChainToSolveData_t
class __declspec(align(16)) ChainToSolveData_t0 {
public:
    int32_t m_nChainIndex; // 0x0
    IKSolverSettings_t m_SolverSettings; // 0x4
    IKTargetSettings_t m_TargetSettings; // 0x10
    SolveIKChainAnimNodeDebugSetting m_DebugSetting; // 0x38
    float m_flDebugNormalizedValue; // 0x3c
    // VectorAligned m_vDebugOffset;
    char m_vDebugOffset[1]; // 0x40
    char pad_00[15];
}; // size: 0x50

/// IKSolverSettings_t
class __declspec(align(4)) IKSolverSettings_t0 {
public:
    IKSolverType m_SolverType; // 0x0
    int32_t m_nNumIterations; // 0x4
    EIKEndEffectorRotationFixUpMode m_EndEffectorRotationFixUpMode; // 0x8
}; // size: 0xc

/// IKTargetSettings_t
class __declspec(align(4)) IKTargetSettings_t0 {
public:
    IKTargetSource m_TargetSource; // 0x0
    char pad_00[4];
    IKBoneNameAndIndex_t m_Bone; // 0x8
    AnimParamID m_AnimgraphParameterNamePosition; // 0x18
    AnimParamID m_AnimgraphParameterNameOrientation; // 0x1c
    IKTargetCoordinateSystem m_TargetCoordSystem; // 0x20
    char pad_01[4];
}; // size: 0x28

/// SolveIKChainPoseOpFixedSettings_t
class __declspec(align(8)) SolveIKChainPoseOpFixedSettings_t0 {
public:
    // CUtlVector< ChainToSolveData_t > m_ChainsToSolveData;
    char m_ChainsToSolveData[1]; // 0x0
    char pad_00[23];
}; // size: 0x18

/// CConcreteAnimParameter
class __declspec(align(4)) CConcreteAnimParameter0 {
public:
    char pad_00[112];
    AnimParamButton_t m_previewButton; // 0x70
    AnimParamNetworkSetting m_eNetworkSetting; // 0x74
    bool m_bUseMostRecentValue; // 0x78
    bool m_bAutoReset; // 0x79
    bool m_bGameWritable; // 0x7a
    bool m_bGraphWritable; // 0x7b
    char pad_01[4];
}; // size: 0x80

/// CVirtualAnimParameter
class __declspec(align(8)) CVirtualAnimParameter0 {
public:
    // CUtlString m_expressionString;
    char pad_00[112];
    char m_expressionString[1]; // 0x70
    char pad_01[7];
    AnimParamType_t m_eParamType; // 0x78
    char pad_02[7];
}; // size: 0x80

/// CBoolAnimParameter
class __declspec(align(8)) CBoolAnimParameter0 {
public:
    char pad_00[128];
    bool m_bDefaultValue; // 0x80
    char pad_01[7];
}; // size: 0x88

/// CEnumAnimParameter
class __declspec(align(8)) CEnumAnimParameter0 {
public:
    char pad_00[136];
    uint8_t m_defaultValue; // 0x88
    // CUtlVector< CUtlString > m_enumOptions;
    char pad_01[7];
    char m_enumOptions[1]; // 0x90
    // CUtlVector< uint64 > m_vecEnumReferenced;
    char pad_02[23];
    char m_vecEnumReferenced[1]; // 0xa8
    char pad_03[47];
}; // size: 0xd8

/// CIntAnimParameter
class __declspec(align(8)) CIntAnimParameter0 {
public:
    char pad_00[128];
    int32_t m_defaultValue; // 0x80
    int32_t m_minValue; // 0x84
    int32_t m_maxValue; // 0x88
    char pad_01[4];
}; // size: 0x90

/// CFloatAnimParameter
class __declspec(align(8)) CFloatAnimParameter0 {
public:
    char pad_00[128];
    float m_fDefaultValue; // 0x80
    float m_fMinValue; // 0x84
    float m_fMaxValue; // 0x88
    bool m_bInterpolate; // 0x8c
    char pad_01[3];
}; // size: 0x90

/// CVectorAnimParameter
class __declspec(align(8)) CVectorAnimParameter0 {
public:
    char pad_00[128];
    Vector m_defaultValue; // 0x80
    bool m_bInterpolate; // 0x8c
    AnimParamVectorType_t m_vectorType; // 0x90
    char pad_01[4];
}; // size: 0x98

/// CQuaternionAnimParameter
class __declspec(align(16)) CQuaternionAnimParameter0 {
public:
    // Quaternion m_defaultValue;
    char pad_00[128];
    char m_defaultValue[1]; // 0x80
    char pad_01[15];
    bool m_bInterpolate; // 0x90
    char pad_02[15];
}; // size: 0xa0

/// CSymbolAnimParameter
class __declspec(align(8)) CSymbolAnimParameter0 {
public:
    // CGlobalSymbol m_defaultValue;
    char pad_00[128];
    char m_defaultValue[1]; // 0x80
    char pad_01[7];
}; // size: 0x88

/// ScriptInfo_t
class __declspec(align(8)) ScriptInfo_t0 {
public:
    // CUtlString m_code;
    char m_code[1]; // 0x0
    // CUtlVector< CAnimParamHandle > m_paramsModified;
    char pad_00[7];
    char m_paramsModified[1]; // 0x8
    // CUtlVector< int32 > m_proxyReadParams;
    char pad_01[23];
    char m_proxyReadParams[1]; // 0x20
    // CUtlVector< int32 > m_proxyWriteParams;
    char pad_02[23];
    char m_proxyWriteParams[1]; // 0x38
    char pad_03[22];
    AnimScriptType m_eScriptType; // 0x50
    char pad_04[6];
}; // size: 0x58

/// CStateActionUpdater
class __declspec(align(8)) CStateActionUpdater0 {
public:
    // CSmartPtr< CAnimActionUpdater > m_pAction;
    char m_pAction[1]; // 0x0
    char pad_00[4];
    StateActionBehavior m_eBehavior; // 0x8
    char pad_01[4];
}; // size: 0x10

/// CTransitionUpdateData
class __declspec(align(1)) CTransitionUpdateData0 {
public:
    uint8_t m_srcStateIndex; // 0x0
    uint8_t m_destStateIndex; // 0x1
    // bitfield:7 m_nHandshakeMaskToDisableFirst;
    // bitfield:1 m_bDisabled;
    char pad_00[1];
}; // size: 0x3

/// CStateUpdateData
class __declspec(align(8)) CStateUpdateData0 {
public:
    // CUtlString m_name;
    char m_name[1]; // 0x0
    char pad_00[4];
    AnimScriptHandle m_hScript; // 0x8
    // CUtlVector< int32 > m_transitionIndices;
    char pad_01[4];
    char m_transitionIndices[1]; // 0x10
    // CUtlVector< CStateActionUpdater > m_actions;
    char pad_02[23];
    char m_actions[1]; // 0x28
    char pad_03[20];
    AnimStateID m_stateID; // 0x40
    // bitfield:1 m_bIsStartState;
    // bitfield:1 m_bIsEndState;
    // bitfield:1 m_bIsPassthrough;
    // bitfield:1 m_bIsPassthroughRootMotion;
    // bitfield:1 m_bPreEvaluatePassthroughTransitionPath;
    char pad_04[4];
}; // size: 0x48

/// CAnimUpdateNodeRef
class __declspec(align(8)) CAnimUpdateNodeRef0 {
public:
    char pad_00[8];
    int32_t m_nodeIndex; // 0x8
    char pad_01[4];
}; // size: 0x10

/// CBinaryUpdateNode
class __declspec(align(8)) CBinaryUpdateNode0 {
public:
    char pad_00[96];
    CAnimUpdateNodeRef m_pChild1; // 0x60
    CAnimUpdateNodeRef m_pChild2; // 0x70
    BinaryNodeTiming m_timingBehavior; // 0x80
    float m_flTimingBlend; // 0x84
    bool m_bResetChild1; // 0x88
    bool m_bResetChild2; // 0x89
    char pad_01[6];
}; // size: 0x90

/// CBlendUpdateNode
class __declspec(align(8)) CBlendUpdateNode0 {
public:
    // CUtlVector< CAnimUpdateNodeRef > m_children;
    char pad_00[96];
    char m_children[1]; // 0x60
    // CUtlVector< uint8 > m_sortedOrder;
    char pad_01[23];
    char m_sortedOrder[1]; // 0x78
    // CUtlVector< float32 > m_targetValues;
    char pad_02[23];
    char m_targetValues[1]; // 0x90
    char pad_03[24];
    AnimValueSource m_blendValueSource; // 0xac
    LinearRootMotionBlendMode_t m_eLinearRootMotionBlendMode; // 0xb0
    CAnimParamHandle m_paramIndex; // 0xb4
    CAnimInputDamping m_damping; // 0xb8
    BlendKeyType m_blendKeyType; // 0xd0
    bool m_bLockBlendOnReset; // 0xd4
    bool m_bSyncCycles; // 0xd5
    bool m_bLoop; // 0xd6
    bool m_bLockWhenWaning; // 0xd7
    bool m_bIsAngle; // 0xd8
    char pad_04[7];
}; // size: 0xe0

/// BlendItem_t
class __declspec(align(8)) BlendItem_t0 {
public:
    // CUtlVector< TagSpan_t > m_tags;
    char m_tags[1]; // 0x0
    char pad_00[16];
    CAnimUpdateNodeRef m_pChild; // 0x18
    HSequence m_hSequence; // 0x28
    Vector2D m_vPos; // 0x2c
    float m_flDuration; // 0x34
    bool m_bUseCustomDuration; // 0x38
    char pad_01[7];
}; // size: 0x40

/// CBlend2DUpdateNode
class __declspec(align(8)) CBlend2DUpdateNode0 {
public:
    // CUtlVector< BlendItem_t > m_items;
    char pad_00[96];
    char m_items[1]; // 0x60
    // CUtlVector< TagSpan_t > m_tags;
    char pad_01[23];
    char m_tags[1]; // 0x78
    char pad_02[16];
    CParamSpanUpdater m_paramSpans; // 0x90
    // CUtlVector< int32 > m_nodeItemIndices;
    char m_nodeItemIndices[1]; // 0xa8
    char pad_03[16];
    CAnimInputDamping m_damping; // 0xc0
    AnimValueSource m_blendSourceX; // 0xd8
    CAnimParamHandle m_paramX; // 0xdc
    AnimValueSource m_blendSourceY; // 0xe0
    CAnimParamHandle m_paramY; // 0xe4
    Blend2DMode m_eBlendMode; // 0xe8
    float m_playbackSpeed; // 0xec
    bool m_bLoop; // 0xf0
    bool m_bLockBlendOnReset; // 0xf1
    bool m_bLockWhenWaning; // 0xf2
    bool m_bAnimEventsAndTagsOnMostWeightedOnly; // 0xf3
    char pad_04[4];
}; // size: 0xf8

/// CBoneMaskUpdateNode
class __declspec(align(8)) CBoneMaskUpdateNode0 {
public:
    char pad_00[148];
    int32_t m_nWeightListIndex; // 0x94
    float m_flRootMotionBlend; // 0x98
    BoneMaskBlendSpace m_blendSpace; // 0x9c
    BinaryNodeChildOption m_footMotionTiming; // 0xa0
    bool m_bUseBlendScale; // 0xa4
    AnimValueSource m_blendValueSource; // 0xa8
    CAnimParamHandle m_hBlendParameter; // 0xac
    char pad_01[2];
}; // size: 0xb0

/// CChoiceUpdateNode
class __declspec(align(8)) CChoiceUpdateNode0 {
public:
    // CUtlVector< CAnimUpdateNodeRef > m_children;
    char pad_00[96];
    char m_children[1]; // 0x60
    // CUtlVector< float32 > m_weights;
    char pad_01[23];
    char m_weights[1]; // 0x78
    // CUtlVector< float32 > m_blendTimes;
    char pad_02[23];
    char m_blendTimes[1]; // 0x90
    char pad_03[20];
    ChoiceMethod m_choiceMethod; // 0xa8
    ChoiceChangeMethod m_choiceChangeMethod; // 0xac
    ChoiceBlendMethod m_blendMethod; // 0xb0
    float m_blendTime; // 0xb4
    bool m_bCrossFade; // 0xb8
    bool m_bResetChosen; // 0xb9
    bool m_bDontResetSameSelection; // 0xba
    char pad_04[5];
}; // size: 0xc0

/// CDirectPlaybackTagData
class __declspec(align(8)) CDirectPlaybackTagData0 {
public:
    // CUtlString m_sequenceName;
    char m_sequenceName[1]; // 0x0
    // CUtlVector< TagSpan_t > m_tags;
    char pad_00[7];
    char m_tags[1]; // 0x8
    char pad_01[23];
}; // size: 0x20

/// TraceSettings_t
class __declspec(align(4)) TraceSettings_t0 {
public:
    float m_flTraceHeight; // 0x0
    float m_flTraceRadius; // 0x4
}; // size: 0x8

/// FootFixedSettings
class __declspec(align(16)) FootFixedSettings0 {
public:
    TraceSettings_t m_traceSettings; // 0x0
    // VectorAligned m_vFootBaseBindPosePositionMS;
    char pad_00[8];
    char m_vFootBaseBindPosePositionMS[1]; // 0x10
    char pad_01[12];
    float m_flFootBaseLength; // 0x20
    float m_flMaxRotationLeft; // 0x24
    float m_flMaxRotationRight; // 0x28
    int32_t m_footstepLandedTagIndex; // 0x2c
    bool m_bEnableTracing; // 0x30
    float m_flTraceAngleBlend; // 0x34
    int32_t m_nDisableTagIndex; // 0x38
    int32_t m_nFootIndex; // 0x3c
}; // size: 0x40

/// FootStepTrigger
class __declspec(align(8)) FootStepTrigger0 {
public:
    // CUtlVector< int32 > m_tags;
    char m_tags[1]; // 0x0
    char pad_00[20];
    int32_t m_nFootIndex; // 0x18
    StepPhase m_triggerPhase; // 0x1c
}; // size: 0x20

/// CLeafUpdateNode
class __declspec(align(1)) CLeafUpdateNode0 {
public:
    char pad_00[88];
}; // size: 0x58

/// CLeanMatrixUpdateNode
class __declspec(align(8)) CLeanMatrixUpdateNode0 {
public:
    char pad_00[92];
    int32_t m_frameCorners[3]; // 0x5c
    char pad_01[24];
    CPoseHandle m_poses; // 0x80
    char pad_02[32];
    CAnimInputDamping m_damping; // 0xa8
    AnimVectorSource m_blendSource; // 0xc0
    CAnimParamHandle m_paramIndex; // 0xc4
    Vector m_verticalAxis; // 0xc8
    Vector m_horizontalAxis; // 0xd4
    HSequence m_hSequence; // 0xe0
    float m_flMaxValue; // 0xe4
    int32_t m_nSequenceMaxFrame; // 0xe8
    char pad_03[4];
}; // size: 0xf0

/// CMotionGraphUpdateNode
class __declspec(align(8)) CMotionGraphUpdateNode0 {
public:
    // CSmartPtr< CMotionGraph > m_pMotionGraph;
    char pad_00[88];
    char m_pMotionGraph[1]; // 0x58
    char pad_01[15];
}; // size: 0x68

/// CMotionMatchingUpdateNode
class __declspec(align(8)) CMotionMatchingUpdateNode0 {
public:
    char pad_00[88];
    CMotionDataSet m_dataSet; // 0x58
    // CUtlVector< CSmartPtr< CMotionMetricEvaluator > > m_metrics;
    char m_metrics[1]; // 0x78
    // CUtlVector< float32 > m_weights;
    char pad_01[23];
    char m_weights[1]; // 0x90
    char pad_02[79];
    bool m_bSearchEveryTick; // 0xe0
    float m_flSearchInterval; // 0xe4
    bool m_bSearchWhenClipEnds; // 0xe8
    bool m_bSearchWhenGoalChanges; // 0xe9
    CBlendCurve m_blendCurve; // 0xec
    float m_flSampleRate; // 0xf4
    float m_flBlendTime; // 0xf8
    bool m_bLockClipWhenWaning; // 0xfc
    float m_flSelectionThreshold; // 0x100
    float m_flReselectionTimeWindow; // 0x104
    bool m_bEnableRotationCorrection; // 0x108
    bool m_bGoalAssist; // 0x109
    float m_flGoalAssistDistance; // 0x10c
    float m_flGoalAssistTolerance; // 0x110
    CAnimInputDamping m_distanceScale_Damping; // 0x118
    float m_flDistanceScale_OuterRadius; // 0x130
    float m_flDistanceScale_InnerRadius; // 0x134
    float m_flDistanceScale_MaxScale; // 0x138
    float m_flDistanceScale_MinScale; // 0x13c
    bool m_bEnableDistanceScaling; // 0x140
    char pad_03[7];
}; // size: 0x148

/// CSelectorUpdateNode
class __declspec(align(8)) CSelectorUpdateNode0 {
public:
    // CUtlVector< CAnimUpdateNodeRef > m_children;
    char pad_00[96];
    char m_children[1]; // 0x60
    // CUtlVector< int8 > m_tags;
    char pad_01[23];
    char m_tags[1]; // 0x78
    char pad_02[24];
    CBlendCurve m_blendCurve; // 0x94
    // CAnimValue< float32 > m_flBlendTime;
    char m_flBlendTime[1]; // 0x9c
    char pad_03[7];
    CAnimParamHandle m_hParameter; // 0xa4
    int32_t m_nTagIndex; // 0xa8
    SelectorTagBehavior_t m_eTagBehavior; // 0xac
    bool m_bResetOnChange; // 0xb0
    bool m_bLockWhenWaning; // 0xb1
    bool m_bSyncCyclesOnChange; // 0xb2
    char pad_04[5];
}; // size: 0xb8

/// CSequenceUpdateNodeBase
class __declspec(align(4)) CSequenceUpdateNodeBase0 {
public:
    char pad_00[108];
    float m_playbackSpeed; // 0x6c
    bool m_bLoop; // 0x70
    char pad_01[7];
}; // size: 0x78

/// CSequenceUpdateNode
class __declspec(align(8)) CSequenceUpdateNode0 {
public:
    char pad_00[120];
    HSequence m_hSequence; // 0x78
    float m_duration; // 0x7c
    CParamSpanUpdater m_paramSpans; // 0x80
    // CUtlVector< TagSpan_t > m_tags;
    char m_tags[1]; // 0x98
    char pad_01[23];
}; // size: 0xb0

/// CSingleFrameUpdateNode
class __declspec(align(8)) CSingleFrameUpdateNode0 {
public:
    // CUtlVector< CSmartPtr< CAnimActionUpdater > > m_actions;
    char pad_00[88];
    char m_actions[1]; // 0x58
    char pad_01[22];
    CPoseHandle m_hPoseCacheHandle; // 0x70
    HSequence m_hSequence; // 0x74
    float m_flCycle; // 0x78
    char pad_02[4];
}; // size: 0x80

/// CSolveIKTargetHandle_t
class __declspec(align(1)) CSolveIKTargetHandle_t0 {
public:
    CAnimParamHandle m_positionHandle; // 0x0
    CAnimParamHandle m_orientationHandle; // 0x2
}; // size: 0x4

/// StanceInfo_t
class __declspec(align(4)) StanceInfo_t0 {
public:
    Vector m_vPosition; // 0x0
    float m_flDirection; // 0xc
}; // size: 0x10

/// CStateNodeTransitionData
class __declspec(align(4)) CStateNodeTransitionData0 {
public:
    CBlendCurve m_curve; // 0x0
    // CAnimValue< float32 > m_blendDuration;
    char m_blendDuration[1]; // 0x8
    // CAnimValue< float32 > m_resetCycleValue;
    char pad_00[7];
    char m_resetCycleValue[1]; // 0x10
    // bitfield:1 m_bReset;
    // bitfield:3 m_resetCycleOption;
    char pad_01[11];
}; // size: 0x1c

/// CStateNodeStateData
class __declspec(align(8)) CStateNodeStateData0 {
public:
    CAnimUpdateNodeRef m_pChild; // 0x0
    // bitfield:1 m_bExclusiveRootMotion;
    // bitfield:1 m_bExclusiveRootMotionFirstFrame;
    char pad_00[8];
}; // size: 0x18

/// CStateMachineUpdateNode
class __declspec(align(8)) CStateMachineUpdateNode0 {
public:
    char pad_00[112];
    CAnimStateMachineUpdater m_stateMachine; // 0x70
    // CUtlVector< CStateNodeStateData > m_stateData;
    char m_stateData[1]; // 0xc8
    // CUtlVector< CStateNodeTransitionData > m_transitionData;
    char pad_01[23];
    char m_transitionData[1]; // 0xe0
    char pad_02[27];
    bool m_bBlockWaningTags; // 0xfc
    bool m_bLockStateWhenWaning; // 0xfd
    bool m_bResetWhenActivated; // 0xfe
    char pad_03[1];
}; // size: 0x100

/// CSubtractUpdateNode
class __declspec(align(8)) CSubtractUpdateNode0 {
public:
    char pad_00[148];
    BinaryNodeChildOption m_footMotionTiming; // 0x94
    bool m_bApplyToFootMotion; // 0x98
    bool m_bApplyChannelsSeparately; // 0x99
    bool m_bUseModelSpace; // 0x9a
    char pad_01[5];
}; // size: 0xa0

/// CTargetSelectorUpdateNode
class __declspec(align(8)) CTargetSelectorUpdateNode0 {
public:
    char pad_00[96];
    TargetSelectorAngleMode_t m_eAngleMode; // 0x60
    // CUtlVector< CAnimUpdateNodeRef > m_children;
    char pad_01[4];
    char m_children[1]; // 0x68
    char pad_02[27];
    CAnimParamHandle m_hTargetPosition; // 0x84
    CAnimParamHandle m_hTargetFacePositionParameter; // 0x86
    CAnimParamHandle m_hMoveHeadingParameter; // 0x88
    CAnimParamHandle m_hDesiredMoveHeadingParameter; // 0x8a
    bool m_bTargetPositionIsWorldSpace; // 0x8c
    bool m_bTargetFacePositionIsWorldSpace; // 0x8d
    bool m_bEnablePhaseMatching; // 0x8e
    float m_flPhaseMatchingMaxRootMotionSkip; // 0x90
    char pad_03[12];
}; // size: 0xa0

/// TwoBoneIKSettings_t
class __declspec(align(16)) TwoBoneIKSettings_t0 {
public:
    IkEndEffectorType m_endEffectorType; // 0x0
    CAnimAttachment m_endEffectorAttachment; // 0x10
    IkTargetType m_targetType; // 0x90
    CAnimAttachment m_targetAttachment; // 0xa0
    int32_t m_targetBoneIndex; // 0x120
    CAnimParamHandle m_hPositionParam; // 0x124
    CAnimParamHandle m_hRotationParam; // 0x126
    bool m_bAlwaysUseFallbackHinge; // 0x128
    // VectorAligned m_vLsFallbackHingeAxis;
    char pad_00[7];
    char m_vLsFallbackHingeAxis[1]; // 0x130
    char pad_01[12];
    int32_t m_nFixedBoneIndex; // 0x140
    int32_t m_nMiddleBoneIndex; // 0x144
    int32_t m_nEndBoneIndex; // 0x148
    bool m_bMatchTargetOrientation; // 0x14c
    bool m_bConstrainTwist; // 0x14d
    float m_flMaxTwist; // 0x150
    char pad_02[12];
}; // size: 0x160

/// CUnaryUpdateNode
class __declspec(align(8)) CUnaryUpdateNode0 {
public:
    char pad_00[96];
    CAnimUpdateNodeRef m_pChildNode; // 0x60
}; // size: 0x70

/// CWayPointHelperUpdateNode
class __declspec(align(8)) CWayPointHelperUpdateNode0 {
public:
    char pad_00[116];
    float m_flStartCycle; // 0x74
    float m_flEndCycle; // 0x78
    bool m_bOnlyGoals; // 0x7c
    bool m_bPreventOvershoot; // 0x7d
    bool m_bPreventUndershoot; // 0x7e
    char pad_01[1];
}; // size: 0x80

/// CZeroPoseUpdateNode
class __declspec(align(8)) CZeroPoseUpdateNode0 {
public:
    char pad_00[96];
}; // size: 0x60

/// ConfigIndex
class __declspec(align(2)) ConfigIndex0 {
public:
    uint16_t m_nGroup; // 0x0
    uint16_t m_nConfig; // 0x2
}; // size: 0x4

/// MotionIndex
class __declspec(align(2)) MotionIndex0 {
public:
    uint16_t m_nGroup; // 0x0
    uint16_t m_nMotion; // 0x2
}; // size: 0x4

/// CAnimationGraphVisualizerPrimitiveBase
class __declspec(align(8)) CAnimationGraphVisualizerPrimitiveBase0 {
public:
    char pad_00[8];
    CAnimationGraphVisualizerPrimitiveType m_Type; // 0x8
    AnimNodeID m_OwningAnimNodePaths; // 0xc
    char pad_01[40];
    int32_t m_nOwningAnimNodePathCount; // 0x38
    char pad_02[4];
}; // size: 0x40

/// CAnimationGraphVisualizerText
class __declspec(align(16)) CAnimationGraphVisualizerText0 {
public:
    // VectorAligned m_vWsPosition;
    char pad_00[64];
    char m_vWsPosition[1]; // 0x40
    // Color m_Color;
    char pad_01[15];
    char m_Color[1]; // 0x50
    // CUtlString m_Text;
    char pad_02[7];
    char m_Text[1]; // 0x58
    char pad_03[7];
}; // size: 0x60

/// CAnimationGraphVisualizerSphere
class __declspec(align(16)) CAnimationGraphVisualizerSphere0 {
public:
    // VectorAligned m_vWsPosition;
    char pad_00[64];
    char m_vWsPosition[1]; // 0x40
    char pad_01[12];
    float m_flRadius; // 0x50
    // Color m_Color;
    char m_Color[1]; // 0x54
    char pad_02[11];
}; // size: 0x60

/// CAnimationGraphVisualizerLine
class __declspec(align(16)) CAnimationGraphVisualizerLine0 {
public:
    // VectorAligned m_vWsPositionStart;
    char pad_00[64];
    char m_vWsPositionStart[1]; // 0x40
    // VectorAligned m_vWsPositionEnd;
    char pad_01[15];
    char m_vWsPositionEnd[1]; // 0x50
    // Color m_Color;
    char pad_02[15];
    char m_Color[1]; // 0x60
    char pad_03[15];
}; // size: 0x70

/// CAnimationGraphVisualizerPie
class __declspec(align(16)) CAnimationGraphVisualizerPie0 {
public:
    // VectorAligned m_vWsCenter;
    char pad_00[64];
    char m_vWsCenter[1]; // 0x40
    // VectorAligned m_vWsStart;
    char pad_01[15];
    char m_vWsStart[1]; // 0x50
    // VectorAligned m_vWsEnd;
    char pad_02[15];
    char m_vWsEnd[1]; // 0x60
    // Color m_Color;
    char pad_03[15];
    char m_Color[1]; // 0x70
    char pad_04[15];
}; // size: 0x80

/// CAnimationGraphVisualizerAxis
class __declspec(align(16)) CAnimationGraphVisualizerAxis0 {
public:
    // CTransform m_xWsTransform;
    char pad_00[64];
    char m_xWsTransform[1]; // 0x40
    char pad_01[28];
    float m_flAxisSize; // 0x60
    char pad_02[12];
}; // size: 0x70

/// IAnimationGraphInstance
class __declspec(align(1)) IAnimationGraphInstance0 {
public:
    char pad_00[24];
}; // size: 0x18

/// IKBoneNameAndIndex_t
class __declspec(align(1)) IKBoneNameAndIndex_t0 {
public:
    // CUtlString m_Name;
    char m_Name[1]; // 0x0
    char pad_00[15];
}; // size: 0x10

/// CNmBlendTaskBase
class __declspec(align(1)) CNmBlendTaskBase0 {
public:
    char pad_00[224];
}; // size: 0xe0

/// CNmBlendTask
class __declspec(align(8)) CNmBlendTask0 {
public:
    char pad_00[224];
}; // size: 0xe0

/// CNmOverlayBlendTask
class __declspec(align(8)) CNmOverlayBlendTask0 {
public:
    char pad_00[224];
}; // size: 0xe0

/// CNmAdditiveBlendTask
class __declspec(align(8)) CNmAdditiveBlendTask0 {
public:
    char pad_00[224];
}; // size: 0xe0

/// CNmModelSpaceBlendTask
class __declspec(align(8)) CNmModelSpaceBlendTask0 {
public:
    char pad_00[224];
}; // size: 0xe0

/// CNmCachedPoseWriteTask
class __declspec(align(8)) CNmCachedPoseWriteTask0 {
public:
    char pad_00[96];
}; // size: 0x60

/// CNmCachedPoseReadTask
class __declspec(align(8)) CNmCachedPoseReadTask0 {
public:
    char pad_00[96];
}; // size: 0x60

/// CNmChainLookatTask
class __declspec(align(8)) CNmChainLookatTask0 {
public:
    char pad_00[88];
    int32_t m_nChainEndBoneIdx; // 0x58
    int32_t m_nNumBonesInChain; // 0x5c
    Vector m_chainForwardDir; // 0x60
    float m_flBlendWeight; // 0x6c
    float m_flHorizontalAngleLimitDegrees; // 0x70
    float m_flVerticalAngleLimitDegrees; // 0x74
    Vector m_lookatTarget; // 0x78
    bool m_bIsTargetInWorldSpace; // 0x84
    bool m_bIsRunningFromDeserializedData; // 0x85
    float m_flHorizontalAngleDegrees; // 0x88
    float m_flVerticalAngleDegrees; // 0x8c
}; // size: 0x90

/// CNmChainSolverTask
class __declspec(align(16)) CNmChainSolverTask0 {
public:
    char pad_00[88];
    int32_t m_nEffectorBoneIdx; // 0x58
    int32_t m_nEffectorTargetBoneIdx; // 0x5c
    // CTransform m_targetTransform;
    char m_targetTransform[1]; // 0x60
    char pad_01[28];
    int32_t m_nNumBonesInChain; // 0x80
    CNmTarget m_effectorTarget; // 0x90
    NmIKBlendMode_t m_blendMode; // 0xc0
    float m_flBlendWeight; // 0xc4
    bool m_bIsTargetInWorldSpace; // 0xc8
    bool m_bIsRunningFromDeserializedData; // 0xc9
    // CGlobalSymbol m_debugEffectorBoneID;
    char pad_02[6];
    char m_debugEffectorBoneID[1]; // 0xd0
    // CTransform m_chainStartTransformMS;
    char pad_03[15];
    char m_chainStartTransformMS[1]; // 0xe0
    // CTransform m_debugRequestedTargetTransformMS;
    char pad_04[31];
    char m_debugRequestedTargetTransformMS[1]; // 0x100
    char pad_05[28];
    float m_debugTotalChainLength; // 0x120
    char pad_06[12];
}; // size: 0x130

/// CNmReferencePoseTask
class __declspec(align(8)) CNmReferencePoseTask0 {
public:
    char pad_00[88];
}; // size: 0x58

/// CNmZeroPoseTask
class __declspec(align(8)) CNmZeroPoseTask0 {
public:
    char pad_00[88];
}; // size: 0x58

/// CNmFollowBoneTask
class __declspec(align(8)) CNmFollowBoneTask0 {
public:
    char pad_00[120];
}; // size: 0x78

/// CNmSampleTask
class __declspec(align(8)) CNmSampleTask0 {
public:
    char pad_00[104];
}; // size: 0x68

/// CNmScaleTask
class __declspec(align(8)) CNmScaleTask0 {
public:
    char pad_00[176];
}; // size: 0xb0

/// CNmTwoBoneIKTask
class __declspec(align(16)) CNmTwoBoneIKTask0 {
public:
    char pad_00[88];
    int32_t m_nEffectorBoneIdx; // 0x58
    int32_t m_nEffectorTargetBoneIdx; // 0x5c
    // CTransform m_targetTransform;
    char m_targetTransform[1]; // 0x60
    char pad_01[16];
    CNmTarget m_effectorTarget; // 0x80
    NmIKBlendMode_t m_blendMode; // 0xb0
    float m_flBlendWeight; // 0xb4
    bool m_bIsTargetInWorldSpace; // 0xb8
    bool m_bIsRunningFromDeserializedData; // 0xb9
    float m_flReferencePoseTwistWeight; // 0xbc
    // CGlobalSymbol m_debugEffectorBoneID;
    char m_debugEffectorBoneID[1]; // 0xc0
    char pad_02[15];
}; // size: 0xd0

/// CNmParameterizedBlendNode::CDefinition
class __declspec(align(8)) CNmParameterizedBlendNode__CDefinition0 {
public:
    // CUtlVectorFixedGrowable< int16, 5 > m_sourceNodeIndices;
    char pad_00[16];
    char m_sourceNodeIndices[1]; // 0x10
    char pad_01[38];
    int16_t m_nInputParameterValueNodeIdx; // 0x38
    bool m_bAllowLooping; // 0x3a
    char pad_02[5];
}; // size: 0x40

/// CNmBlend1DNode::CDefinition
class __declspec(align(8)) CNmBlend1DNode__CDefinition0 {
public:
    // CNmParameterizedBlendNode::Parameterization_t m_parameterization;
    char pad_00[64];
    char m_parameterization[1]; // 0x40
    char pad_01[79];
}; // size: 0x90

/// CNmVelocityBlendNode::CDefinition
class __declspec(align(8)) CNmVelocityBlendNode__CDefinition0 {
public:
    char pad_00[64];
}; // size: 0x40

/// CNmBlend2DNode::CDefinition
class __declspec(align(8)) CNmBlend2DNode__CDefinition0 {
public:
    // CUtlVectorFixedGrowable< int16, 5 > m_sourceNodeIndices;
    char pad_00[16];
    char m_sourceNodeIndices[1]; // 0x10
    char pad_01[38];
    int16_t m_nInputParameterNodeIdx0; // 0x38
    int16_t m_nInputParameterNodeIdx1; // 0x3a
    // CUtlVectorFixedGrowable< Vector2D, 10 > m_values;
    char pad_02[4];
    char m_values[1]; // 0x40
    // CUtlVectorFixedGrowable< uint8, 30 > m_indices;
    char pad_03[103];
    char m_indices[1]; // 0xa8
    // CUtlVectorFixedGrowable< uint8, 10 > m_hullIndices;
    char pad_04[55];
    char m_hullIndices[1]; // 0xe0
    char pad_05[39];
    bool m_bAllowLooping; // 0x108
    char pad_06[7];
}; // size: 0x110

/// CNmBoneMaskNode::CDefinition
class __declspec(align(8)) CNmBoneMaskNode__CDefinition0 {
public:
    // CGlobalSymbol m_boneMaskID;
    char pad_00[16];
    char m_boneMaskID[1]; // 0x10
    char pad_01[7];
}; // size: 0x18

/// CNmFixedWeightBoneMaskNode::CDefinition
class __declspec(align(8)) CNmFixedWeightBoneMaskNode__CDefinition0 {
public:
    char pad_00[16];
    float m_flBoneWeight; // 0x10
    char pad_01[4];
}; // size: 0x18

/// CNmBoneMaskBlendNode::CDefinition
class __declspec(align(8)) CNmBoneMaskBlendNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nSourceMaskNodeIdx; // 0x10
    int16_t m_nTargetMaskNodeIdx; // 0x12
    int16_t m_nBlendWeightValueNodeIdx; // 0x14
    char pad_01[2];
}; // size: 0x18

/// CNmBoneMaskSelectorNode::CDefinition
class __declspec(align(8)) CNmBoneMaskSelectorNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_defaultMaskNodeIdx; // 0x10
    int16_t m_parameterValueNodeIdx; // 0x12
    bool m_bSwitchDynamically; // 0x14
    // CUtlVectorFixedGrowable< int16, 7 > m_maskNodeIndices;
    char pad_01[3];
    char m_maskNodeIndices[1]; // 0x18
    // CUtlVectorFixedGrowable< CGlobalSymbol, 7 > m_parameterValues;
    char pad_02[39];
    char m_parameterValues[1]; // 0x40
    char pad_03[76];
    float m_flBlendTimeSeconds; // 0x90
    char pad_04[4];
}; // size: 0x98

/// CNmBoneMaskSwitchNode::CDefinition
class __declspec(align(8)) CNmBoneMaskSwitchNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nSwitchValueNodeIdx; // 0x10
    int16_t m_nTrueValueNodeIdx; // 0x12
    int16_t m_nFalseValueNodeIdx; // 0x14
    float m_flBlendTimeSeconds; // 0x18
    bool m_bSwitchDynamically; // 0x1c
    char pad_01[3];
}; // size: 0x20

/// CNmAndNode::CDefinition
class __declspec(align(8)) CNmAndNode__CDefinition0 {
public:
    // CUtlLeanVectorFixedGrowable< int16, 4 > m_conditionNodeIndices;
    char pad_00[16];
    char m_conditionNodeIndices[1]; // 0x10
    char pad_01[15];
}; // size: 0x20

/// CNmOrNode::CDefinition
class __declspec(align(8)) CNmOrNode__CDefinition0 {
public:
    // CUtlLeanVectorFixedGrowable< int16, 4 > m_conditionNodeIndices;
    char pad_00[16];
    char m_conditionNodeIndices[1]; // 0x10
    char pad_01[15];
}; // size: 0x20

/// CNmNotNode::CDefinition
class __declspec(align(8)) CNmNotNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    char pad_01[6];
}; // size: 0x18

/// CNmCachedBoolNode::CDefinition
class __declspec(align(8)) CNmCachedBoolNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    NmCachedValueMode_t m_mode; // 0x14
}; // size: 0x18

/// CNmCachedIDNode::CDefinition
class __declspec(align(8)) CNmCachedIDNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    NmCachedValueMode_t m_mode; // 0x14
}; // size: 0x18

/// CNmCachedFloatNode::CDefinition
class __declspec(align(8)) CNmCachedFloatNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    NmCachedValueMode_t m_mode; // 0x14
}; // size: 0x18

/// CNmCachedVectorNode::CDefinition
class __declspec(align(8)) CNmCachedVectorNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    NmCachedValueMode_t m_mode; // 0x14
}; // size: 0x18

/// CNmCachedTargetNode::CDefinition
class __declspec(align(8)) CNmCachedTargetNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    NmCachedValueMode_t m_mode; // 0x14
}; // size: 0x18

/// CNmClipReferenceNode::CDefinition
class __declspec(align(1)) CNmClipReferenceNode__CDefinition0 {
public:
    char pad_00[16];
}; // size: 0x10

/// CNmClipNode::CDefinition
class __declspec(align(8)) CNmClipNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nPlayInReverseValueNodeIdx; // 0x10
    int16_t m_nResetTimeValueNodeIdx; // 0x12
    bool m_bSampleRootMotion; // 0x14
    bool m_bAllowLooping; // 0x15
    int16_t m_nDataSlotIdx; // 0x16
    // CUtlVectorFixedGrowable< CGlobalSymbol, 2 > m_graphEvents;
    char m_graphEvents[1]; // 0x18
    char pad_01[36];
    float m_flSpeedMultiplier; // 0x40
    int32_t m_nStartSyncEventOffset; // 0x44
}; // size: 0x48

/// CNmConstBoolNode::CDefinition
class __declspec(align(8)) CNmConstBoolNode__CDefinition0 {
public:
    char pad_00[16];
    bool m_bValue; // 0x10
    char pad_01[7];
}; // size: 0x18

/// CNmConstIDNode::CDefinition
class __declspec(align(8)) CNmConstIDNode__CDefinition0 {
public:
    // CGlobalSymbol m_value;
    char pad_00[16];
    char m_value[1]; // 0x10
    char pad_01[7];
}; // size: 0x18

/// CNmConstFloatNode::CDefinition
class __declspec(align(8)) CNmConstFloatNode__CDefinition0 {
public:
    char pad_00[16];
    float m_flValue; // 0x10
    char pad_01[4];
}; // size: 0x18

/// CNmConstVectorNode::CDefinition
class __declspec(align(8)) CNmConstVectorNode__CDefinition0 {
public:
    char pad_00[16];
    Vector m_value; // 0x10
    char pad_01[4];
}; // size: 0x20

/// CNmConstTargetNode::CDefinition
class __declspec(align(16)) CNmConstTargetNode__CDefinition0 {
public:
    char pad_00[16];
    CNmTarget m_value; // 0x10
}; // size: 0x40

/// CNmControlParameterBoolNode::CDefinition
class __declspec(align(8)) CNmControlParameterBoolNode__CDefinition0 {
public:
    char pad_00[16];
}; // size: 0x10

/// CNmControlParameterIDNode::CDefinition
class __declspec(align(8)) CNmControlParameterIDNode__CDefinition0 {
public:
    char pad_00[16];
}; // size: 0x10

/// CNmControlParameterFloatNode::CDefinition
class __declspec(align(8)) CNmControlParameterFloatNode__CDefinition0 {
public:
    char pad_00[16];
}; // size: 0x10

/// CNmControlParameterVectorNode::CDefinition
class __declspec(align(8)) CNmControlParameterVectorNode__CDefinition0 {
public:
    char pad_00[16];
}; // size: 0x10

/// CNmControlParameterTargetNode::CDefinition
class __declspec(align(8)) CNmControlParameterTargetNode__CDefinition0 {
public:
    char pad_00[16];
}; // size: 0x10

/// CNmVirtualParameterBoolNode::CDefinition
class __declspec(align(8)) CNmVirtualParameterBoolNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx; // 0x10
    char pad_01[6];
}; // size: 0x18

/// CNmVirtualParameterIDNode::CDefinition
class __declspec(align(8)) CNmVirtualParameterIDNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx; // 0x10
    char pad_01[6];
}; // size: 0x18

/// CNmVirtualParameterFloatNode::CDefinition
class __declspec(align(8)) CNmVirtualParameterFloatNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx; // 0x10
    char pad_01[6];
}; // size: 0x18

/// CNmVirtualParameterVectorNode::CDefinition
class __declspec(align(8)) CNmVirtualParameterVectorNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx; // 0x10
    char pad_01[6];
}; // size: 0x18

/// CNmVirtualParameterTargetNode::CDefinition
class __declspec(align(8)) CNmVirtualParameterTargetNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx; // 0x10
    char pad_01[6];
}; // size: 0x18

/// CNmVirtualParameterBoneMaskNode::CDefinition
class __declspec(align(8)) CNmVirtualParameterBoneMaskNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx; // 0x10
    char pad_01[6];
}; // size: 0x18

/// CNmIDEventConditionNode::CDefinition
class __declspec(align(8)) CNmIDEventConditionNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx; // 0x10
    CNmBitFlags m_eventConditionRules; // 0x14
    // CUtlVectorFixedGrowable< CGlobalSymbol, 5 > m_eventIDs;
    char m_eventIDs[1]; // 0x18
    char pad_01[63];
}; // size: 0x58

/// CNmIDEventNode::CDefinition
class __declspec(align(8)) CNmIDEventNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx; // 0x10
    CNmBitFlags m_eventConditionRules; // 0x14
    // CGlobalSymbol m_defaultValue;
    char m_defaultValue[1]; // 0x18
    char pad_01[7];
}; // size: 0x20

/// CNmIDEventPercentageThroughNode::CDefinition
class __declspec(align(8)) CNmIDEventPercentageThroughNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx; // 0x10
    CNmBitFlags m_eventConditionRules; // 0x14
    // CGlobalSymbol m_eventID;
    char m_eventID[1]; // 0x18
    char pad_01[7];
}; // size: 0x20

/// CNmGraphEventConditionNode::CDefinition
class __declspec(align(8)) CNmGraphEventConditionNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx; // 0x10
    CNmBitFlags m_eventConditionRules; // 0x14
    // CUtlVectorFixedGrowable< CNmGraphEventConditionNode::Condition_t, 5 > m_conditions;
    char m_conditions[1]; // 0x18
    char pad_01[103];
}; // size: 0x80

/// CNmFootEventConditionNode::CDefinition
class __declspec(align(8)) CNmFootEventConditionNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx; // 0x10
    NmFootPhaseCondition_t m_phaseCondition; // 0x12
    CNmBitFlags m_eventConditionRules; // 0x14
}; // size: 0x18

/// CNmFootstepEventPercentageThroughNode::CDefinition
class __declspec(align(8)) CNmFootstepEventPercentageThroughNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx; // 0x10
    NmFootPhaseCondition_t m_phaseCondition; // 0x12
    CNmBitFlags m_eventConditionRules; // 0x14
}; // size: 0x18

/// CNmFootstepEventIDNode::CDefinition
class __declspec(align(8)) CNmFootstepEventIDNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx; // 0x10
    CNmBitFlags m_eventConditionRules; // 0x14
}; // size: 0x18

/// CNmSyncEventIndexConditionNode::CDefinition
class __declspec(align(8)) CNmSyncEventIndexConditionNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx; // 0x10
    // CNmSyncEventIndexConditionNode::TriggerMode_t m_triggerMode;
    char m_triggerMode[1]; // 0x12
    int32_t m_syncEventIdx; // 0x14
}; // size: 0x18

/// CNmCurrentSyncEventIDNode::CDefinition
class __declspec(align(8)) CNmCurrentSyncEventIDNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx; // 0x10
    char pad_01[6];
}; // size: 0x18

/// CNmCurrentSyncEventNode::CDefinition
class __declspec(align(8)) CNmCurrentSyncEventNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx; // 0x10
    // CNmCurrentSyncEventNode::InfoType_t m_infoType;
    char m_infoType[1]; // 0x12
    char pad_01[5];
}; // size: 0x18

/// CNmTransitionEventConditionNode::CDefinition
class __declspec(align(8)) CNmTransitionEventConditionNode__CDefinition0 {
public:
    // CGlobalSymbol m_requireRuleID;
    char pad_00[16];
    char m_requireRuleID[1]; // 0x10
    char pad_01[4];
    CNmBitFlags m_eventConditionRules; // 0x18
    int16_t m_nSourceStateNodeIdx; // 0x1c
    NmTransitionRuleCondition_t m_ruleCondition; // 0x1e
    char pad_02[1];
}; // size: 0x20

/// CNmFloatCurveEventNode::CDefinition
class __declspec(align(8)) CNmFloatCurveEventNode__CDefinition0 {
public:
    // CGlobalSymbol m_eventID;
    char pad_00[16];
    char m_eventID[1]; // 0x10
    char pad_01[6];
    int16_t m_nDefaultNodeIdx; // 0x18
    float m_flDefaultValue; // 0x1c
    CNmBitFlags m_eventConditionRules; // 0x20
    char pad_02[4];
}; // size: 0x28

/// CNmExternalPoseNode::CDefinition
class __declspec(align(8)) CNmExternalPoseNode__CDefinition0 {
public:
    char pad_00[16];
    bool m_bShouldSampleRootMotion; // 0x10
    char pad_01[7];
}; // size: 0x18

/// CNmIsExternalPoseSetNode::CDefinition
class __declspec(align(8)) CNmIsExternalPoseSetNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nExternalPoseNodeIdx; // 0x10
    char pad_01[6];
}; // size: 0x18

/// CNmFloatRemapNode::CDefinition
class __declspec(align(8)) CNmFloatRemapNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    // CNmFloatRemapNode::RemapRange_t m_inputRange;
    char pad_01[2];
    char m_inputRange[1]; // 0x14
    // CNmFloatRemapNode::RemapRange_t m_outputRange;
    char pad_02[7];
    char m_outputRange[1]; // 0x1c
    char pad_03[11];
}; // size: 0x28

/// CNmFloatClampNode::CDefinition
class __declspec(align(8)) CNmFloatClampNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    // Range_t m_clampRange;
    char pad_01[2];
    char m_clampRange[1]; // 0x14
    char pad_02[11];
}; // size: 0x20

/// CNmFloatEaseNode::CDefinition
class __declspec(align(8)) CNmFloatEaseNode__CDefinition0 {
public:
    char pad_00[16];
    float m_flEaseTime; // 0x10
    float m_flStartValue; // 0x14
    int16_t m_nInputValueNodeIdx; // 0x18
    NmEasingOperation_t m_easingOp; // 0x1a
    bool m_bUseStartValue; // 0x1b
    char pad_01[4];
}; // size: 0x20

/// CNmFloatCurveNode::CDefinition
class __declspec(align(8)) CNmFloatCurveNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    // CPiecewiseCurve m_curve;
    char pad_01[6];
    char m_curve[1]; // 0x18
    char pad_02[63];
}; // size: 0x58

/// CNmFloatMathNode::CDefinition
class __declspec(align(8)) CNmFloatMathNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdxA; // 0x10
    int16_t m_nInputValueNodeIdxB; // 0x12
    bool m_bReturnAbsoluteResult; // 0x14
    bool m_bReturnNegatedResult; // 0x15
    // CNmFloatMathNode::Operator_t m_operator;
    char m_operator[1]; // 0x16
    float m_flValueB; // 0x18
    char pad_01[4];
}; // size: 0x20

/// CNmFloatComparisonNode::CDefinition
class __declspec(align(8)) CNmFloatComparisonNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    int16_t m_nComparandValueNodeIdx; // 0x12
    // CNmFloatComparisonNode::Comparison_t m_comparison;
    char m_comparison[1]; // 0x14
    float m_flEpsilon; // 0x18
    float m_flComparisonValue; // 0x1c
}; // size: 0x20

/// CNmFloatRangeComparisonNode::CDefinition
class __declspec(align(8)) CNmFloatRangeComparisonNode__CDefinition0 {
public:
    // Range_t m_range;
    char pad_00[16];
    char m_range[1]; // 0x10
    char pad_01[6];
    int16_t m_nInputValueNodeIdx; // 0x18
    bool m_bIsInclusiveCheck; // 0x1a
    char pad_02[5];
}; // size: 0x20

/// CNmFloatSwitchNode::CDefinition
class __declspec(align(8)) CNmFloatSwitchNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nSwitchValueNodeIdx; // 0x10
    int16_t m_nTrueValueNodeIdx; // 0x12
    int16_t m_nFalseValueNodeIdx; // 0x14
    float m_flFalseValue; // 0x18
    float m_flTrueValue; // 0x1c
}; // size: 0x20

/// CNmFloatAngleMathNode::CDefinition
class __declspec(align(8)) CNmFloatAngleMathNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    // CNmFloatAngleMathNode::Operation_t m_operation;
    char m_operation[1]; // 0x12
    char pad_01[5];
}; // size: 0x18

/// CNmFloatSelectorNode::CDefinition
class __declspec(align(8)) CNmFloatSelectorNode__CDefinition0 {
public:
    // CUtlVectorFixedGrowable< int16, 5 > m_conditionNodeIndices;
    char pad_00[16];
    char m_conditionNodeIndices[1]; // 0x10
    // CUtlVectorFixedGrowable< float32, 5 > m_values;
    char pad_01[39];
    char m_values[1]; // 0x38
    char pad_02[44];
    float m_flDefaultValue; // 0x68
    float m_flEaseTime; // 0x6c
    NmEasingOperation_t m_easingOp; // 0x70
    char pad_03[7];
}; // size: 0x78

/// CNmIDComparisonNode::CDefinition
class __declspec(align(8)) CNmIDComparisonNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    // CNmIDComparisonNode::Comparison_t m_comparison;
    char m_comparison[1]; // 0x12
    // CUtlLeanVectorFixedGrowable< CGlobalSymbol, 4 > m_comparisionIDs;
    char pad_01[5];
    char m_comparisionIDs[1]; // 0x18
    char pad_02[39];
}; // size: 0x40

/// CNmIDToFloatNode::CDefinition
class __declspec(align(8)) CNmIDToFloatNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    float m_defaultValue; // 0x14
    // CUtlLeanVectorFixedGrowable< CGlobalSymbol, 5 > m_IDs;
    char m_IDs[1]; // 0x18
    // CUtlLeanVectorFixedGrowable< float32, 5 > m_values;
    char pad_01[47];
    char m_values[1]; // 0x48
    char pad_02[31];
}; // size: 0x68

/// CNmIDSwitchNode::CDefinition
class __declspec(align(8)) CNmIDSwitchNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nSwitchValueNodeIdx; // 0x10
    int16_t m_nTrueValueNodeIdx; // 0x12
    int16_t m_nFalseValueNodeIdx; // 0x14
    // CGlobalSymbol m_falseValue;
    char pad_01[2];
    char m_falseValue[1]; // 0x18
    // CGlobalSymbol m_trueValue;
    char pad_02[7];
    char m_trueValue[1]; // 0x20
    char pad_03[7];
}; // size: 0x28

/// CNmIDSelectorNode::CDefinition
class __declspec(align(8)) CNmIDSelectorNode__CDefinition0 {
public:
    // CUtlVectorFixedGrowable< int16, 5 > m_conditionNodeIndices;
    char pad_00[16];
    char m_conditionNodeIndices[1]; // 0x10
    // CUtlVectorFixedGrowable< CGlobalSymbol, 5 > m_values;
    char pad_01[39];
    char m_values[1]; // 0x38
    // CGlobalSymbol m_defaultValue;
    char pad_02[63];
    char m_defaultValue[1]; // 0x78
    char pad_03[7];
}; // size: 0x80

/// CNmLayerBlendNode::CDefinition
class __declspec(align(8)) CNmLayerBlendNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nBaseNodeIdx; // 0x10
    bool m_bOnlySampleBaseRootMotion; // 0x12
    // CUtlLeanVectorFixedGrowable< CNmLayerBlendNode::LayerDefinition_t, 3 > m_layerDefinition;
    char pad_01[5];
    char m_layerDefinition[1]; // 0x18
    char pad_02[47];
}; // size: 0x48

/// CNmOrientationWarpNode::CDefinition
class __declspec(align(8)) CNmOrientationWarpNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nClipReferenceNodeIdx; // 0x10
    int16_t m_nTargetValueNodeIdx; // 0x12
    bool m_bIsOffsetNode; // 0x14
    bool m_bIsOffsetRelativeToCharacter; // 0x15
    bool m_bWarpTranslation; // 0x16
    // CNmRootMotionData::SamplingMode_t m_samplingMode;
    char m_samplingMode[1]; // 0x17
}; // size: 0x18

/// CNmPassthroughNode::CDefinition
class __declspec(align(8)) CNmPassthroughNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx; // 0x10
    char pad_01[6];
}; // size: 0x18

/// CNmZeroPoseNode::CDefinition
class __declspec(align(8)) CNmZeroPoseNode__CDefinition0 {
public:
    char pad_00[16];
}; // size: 0x10

/// CNmReferencePoseNode::CDefinition
class __declspec(align(8)) CNmReferencePoseNode__CDefinition0 {
public:
    char pad_00[16];
}; // size: 0x10

/// CNmAnimationPoseNode::CDefinition
class __declspec(align(8)) CNmAnimationPoseNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nPoseTimeValueNodeIdx; // 0x10
    int16_t m_nDataSlotIdx; // 0x12
    // Range_t m_inputTimeRemapRange;
    char m_inputTimeRemapRange[1]; // 0x14
    char pad_01[4];
    float m_flUserSpecifiedTime; // 0x1c
    bool m_bUseFramesAsInput; // 0x20
    char pad_02[7];
}; // size: 0x28

/// CNmReferencedGraphNode::CDefinition
class __declspec(align(8)) CNmReferencedGraphNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nReferencedGraphIdx; // 0x10
    int16_t m_nFallbackNodeIdx; // 0x12
    char pad_01[4];
}; // size: 0x18

/// CNmIsExternalGraphSlotFilledNode::CDefinition
class __declspec(align(8)) CNmIsExternalGraphSlotFilledNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nExternalGraphNodeIdx; // 0x10
    char pad_01[6];
}; // size: 0x18

/// CNmRootMotionOverrideNode::CDefinition
class __declspec(align(8)) CNmRootMotionOverrideNode__CDefinition0 {
public:
    char pad_00[24];
    int16_t m_desiredMovingVelocityNodeIdx; // 0x18
    int16_t m_desiredFacingDirectionNodeIdx; // 0x1a
    int16_t m_linearVelocityLimitNodeIdx; // 0x1c
    int16_t m_angularVelocityLimitNodeIdx; // 0x1e
    float m_maxLinearVelocity; // 0x20
    float m_maxAngularVelocityRadians; // 0x24
    CNmBitFlags m_overrideFlags; // 0x28
    char pad_01[4];
}; // size: 0x30

/// CNmScaleNode::CDefinition
class __declspec(align(8)) CNmScaleNode__CDefinition0 {
public:
    char pad_00[24];
    int16_t m_nMaskNodeIdx; // 0x18
    int16_t m_nEnableNodeIdx; // 0x1a
    char pad_01[4];
}; // size: 0x20

/// CNmSelectorNode::CDefinition
class __declspec(align(8)) CNmSelectorNode__CDefinition0 {
public:
    // CUtlLeanVectorFixedGrowable< int16, 5 > m_optionNodeIndices;
    char pad_00[16];
    char m_optionNodeIndices[1]; // 0x10
    // CUtlLeanVectorFixedGrowable< int16, 5 > m_conditionNodeIndices;
    char pad_01[23];
    char m_conditionNodeIndices[1]; // 0x28
    char pad_02[23];
}; // size: 0x40

/// CNmClipSelectorNode::CDefinition
class __declspec(align(8)) CNmClipSelectorNode__CDefinition0 {
public:
    // CUtlLeanVectorFixedGrowable< int16, 5 > m_optionNodeIndices;
    char pad_00[16];
    char m_optionNodeIndices[1]; // 0x10
    // CUtlLeanVectorFixedGrowable< int16, 5 > m_conditionNodeIndices;
    char pad_01[23];
    char m_conditionNodeIndices[1]; // 0x28
    char pad_02[23];
}; // size: 0x40

/// CNmParameterizedSelectorNode::CDefinition
class __declspec(align(8)) CNmParameterizedSelectorNode__CDefinition0 {
public:
    // CUtlLeanVectorFixedGrowable< int16, 5 > m_optionNodeIndices;
    char pad_00[16];
    char m_optionNodeIndices[1]; // 0x10
    // CUtlLeanVectorFixedGrowable< uint8, 5 > m_optionWeights;
    char pad_01[23];
    char m_optionWeights[1]; // 0x28
    char pad_02[14];
    int16_t m_parameterNodeIdx; // 0x38
    bool m_bIgnoreInvalidOptions; // 0x3a
    bool m_bHasWeightsSet; // 0x3b
    char pad_03[4];
}; // size: 0x40

/// CNmParameterizedClipSelectorNode::CDefinition
class __declspec(align(8)) CNmParameterizedClipSelectorNode__CDefinition0 {
public:
    // CUtlLeanVectorFixedGrowable< int16, 5 > m_optionNodeIndices;
    char pad_00[16];
    char m_optionNodeIndices[1]; // 0x10
    // CUtlLeanVectorFixedGrowable< uint8, 5 > m_optionWeights;
    char pad_01[23];
    char m_optionWeights[1]; // 0x28
    char pad_02[14];
    int16_t m_parameterNodeIdx; // 0x38
    bool m_bIgnoreInvalidOptions; // 0x3a
    bool m_bHasWeightsSet; // 0x3b
    char pad_03[4];
}; // size: 0x40

/// CNmSpeedScaleBaseNode::CDefinition
class __declspec(align(8)) CNmSpeedScaleBaseNode__CDefinition0 {
public:
    char pad_00[24];
    int16_t m_nInputValueNodeIdx; // 0x18
    float m_flDefaultInputValue; // 0x1c
}; // size: 0x20

/// CNmSpeedScaleNode::CDefinition
class __declspec(align(8)) CNmSpeedScaleNode__CDefinition0 {
public:
    char pad_00[32];
}; // size: 0x20

/// CNmDurationScaleNode::CDefinition
class __declspec(align(8)) CNmDurationScaleNode__CDefinition0 {
public:
    char pad_00[32];
}; // size: 0x20

/// CNmVelocityBasedSpeedScaleNode::CDefinition
class __declspec(align(8)) CNmVelocityBasedSpeedScaleNode__CDefinition0 {
public:
    char pad_00[32];
}; // size: 0x20

/// CNmStateNode::CDefinition
class __declspec(align(8)) CNmStateNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx; // 0x10
    // CUtlLeanVectorFixedGrowable< CGlobalSymbol, 3 > m_entryEvents;
    char pad_01[6];
    char m_entryEvents[1]; // 0x18
    // CUtlLeanVectorFixedGrowable< CGlobalSymbol, 3 > m_executeEvents;
    char pad_02[31];
    char m_executeEvents[1]; // 0x38
    // CUtlLeanVectorFixedGrowable< CGlobalSymbol, 3 > m_exitEvents;
    char pad_03[31];
    char m_exitEvents[1]; // 0x58
    // CUtlLeanVectorFixedGrowable< CNmStateNode::TimedEvent_t, 1 > m_timedRemainingEvents;
    char pad_04[31];
    char m_timedRemainingEvents[1]; // 0x78
    // CUtlLeanVectorFixedGrowable< CNmStateNode::TimedEvent_t, 1 > m_timedElapsedEvents;
    char pad_05[23];
    char m_timedElapsedEvents[1]; // 0x90
    char pad_06[22];
    int16_t m_nLayerWeightNodeIdx; // 0xa8
    int16_t m_nLayerRootMotionWeightNodeIdx; // 0xaa
    int16_t m_nLayerBoneMaskNodeIdx; // 0xac
    bool m_bIsOffState; // 0xae
    bool m_bUseActualElapsedTimeInStateForTimedEvents; // 0xaf
}; // size: 0xb0

/// CNmStateCompletedConditionNode::CDefinition
class __declspec(align(8)) CNmStateCompletedConditionNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx; // 0x10
    int16_t m_nTransitionDurationOverrideNodeIdx; // 0x12
    float m_flTransitionDurationSeconds; // 0x14
}; // size: 0x18

/// CNmIsInactiveBranchConditionNode::CDefinition
class __declspec(align(8)) CNmIsInactiveBranchConditionNode__CDefinition0 {
public:
    char pad_00[16];
}; // size: 0x10

/// CNmTimeConditionNode::CDefinition
class __declspec(align(8)) CNmTimeConditionNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_sourceStateNodeIdx; // 0x10
    int16_t m_nInputValueNodeIdx; // 0x12
    float m_flComparand; // 0x14
    // CNmTimeConditionNode::ComparisonType_t m_type;
    char m_type[1]; // 0x18
    // CNmTimeConditionNode::Operator_t m_operator;
    char m_operator[1]; // 0x19
    char pad_01[6];
}; // size: 0x20

/// CNmStateMachineNode::CDefinition
class __declspec(align(8)) CNmStateMachineNode__CDefinition0 {
public:
    // CUtlLeanVectorFixedGrowable< CNmStateMachineNode::StateDefinition_t, 5 > m_stateDefinitions;
    char pad_00[16];
    char m_stateDefinitions[1]; // 0x10
    char pad_01[286];
    int16_t m_nDefaultStateIndex; // 0x130
    char pad_02[6];
}; // size: 0x138

/// CNmIsTargetSetNode::CDefinition
class __declspec(align(8)) CNmIsTargetSetNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    char pad_01[6];
}; // size: 0x18

/// CNmTargetInfoNode::CDefinition
class __declspec(align(8)) CNmTargetInfoNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    // CNmTargetInfoNode::Info_t m_infoType;
    char pad_01[2];
    char m_infoType[1]; // 0x14
    char pad_02[3];
    bool m_bIsWorldSpaceTarget; // 0x18
    char pad_03[7];
}; // size: 0x20

/// CNmTargetPointNode::CDefinition
class __declspec(align(8)) CNmTargetPointNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    bool m_bIsWorldSpaceTarget; // 0x12
    char pad_01[5];
}; // size: 0x18

/// CNmTargetOffsetNode::CDefinition
class __declspec(align(16)) CNmTargetOffsetNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    bool m_bIsBoneSpaceOffset; // 0x12
    // Quaternion m_rotationOffset;
    char pad_01[13];
    char m_rotationOffset[1]; // 0x20
    char pad_02[12];
    Vector m_translationOffset; // 0x30
    char pad_03[4];
}; // size: 0x40

/// CNmTargetSelectorNode::CDefinition
class __declspec(align(8)) CNmTargetSelectorNode__CDefinition0 {
public:
    // CUtlLeanVectorFixedGrowable< int16, 5 > m_optionNodeIndices;
    char pad_00[16];
    char m_optionNodeIndices[1]; // 0x10
    char pad_01[20];
    float m_flOrientationScoreWeight; // 0x28
    float m_flPositionScoreWeight; // 0x2c
    int16_t m_parameterNodeIdx; // 0x30
    bool m_bIgnoreInvalidOptions; // 0x32
    bool m_bIsWorldSpaceTarget; // 0x33
    char pad_02[4];
}; // size: 0x38

/// CNmTargetWarpNode::CDefinition
class __declspec(align(8)) CNmTargetWarpNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nClipReferenceNodeIdx; // 0x10
    int16_t m_nTargetValueNodeIdx; // 0x12
    // CNmRootMotionData::SamplingMode_t m_samplingMode;
    char m_samplingMode[1]; // 0x14
    bool m_bAllowTargetUpdate; // 0x15
    bool m_bAlignWithTargetAtLastWarpEvent; // 0x16
    float m_flSamplingPositionErrorThresholdSq; // 0x18
    float m_flMaxTangentLength; // 0x1c
    float m_flLerpFallbackDistanceThreshold; // 0x20
    float m_flTargetUpdateDistanceThreshold; // 0x24
    float m_flTargetUpdateAngleThresholdRadians; // 0x28
    char pad_01[4];
}; // size: 0x30

/// CNmTransitionNode::CDefinition
class __declspec(align(8)) CNmTransitionNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nTargetStateNodeIdx; // 0x10
    int16_t m_nDurationOverrideNodeIdx; // 0x12
    int16_t m_timeOffsetOverrideNodeIdx; // 0x14
    int16_t m_startBoneMaskNodeIdx; // 0x16
    float m_flDuration; // 0x18
    NmPercent_t m_boneMaskBlendInTimePercentage; // 0x1c
    float m_flTimeOffset; // 0x20
    CNmBitFlags m_transitionOptions; // 0x24
    int16_t m_targetSyncIDNodeIdx; // 0x28
    NmEasingOperation_t m_blendWeightEasing; // 0x2a
    NmRootMotionBlendMode_t m_rootMotionBlend; // 0x2b
    char pad_01[4];
}; // size: 0x30

/// CNmTwoBoneIKNode::CDefinition
class __declspec(align(8)) CNmTwoBoneIKNode__CDefinition0 {
public:
    // CGlobalSymbol m_effectorBoneID;
    char pad_00[24];
    char m_effectorBoneID[1]; // 0x18
    char pad_01[6];
    int16_t m_nEffectorTargetNodeIdx; // 0x20
    int16_t m_nEnabledNodeIdx; // 0x22
    float m_flBlendTimeSeconds; // 0x24
    NmIKBlendMode_t m_blendMode; // 0x28
    bool m_bIsTargetInWorldSpace; // 0x29
    float m_flReferencePoseTwistWeight; // 0x2c
}; // size: 0x30

/// CNmVectorInfoNode::CDefinition
class __declspec(align(8)) CNmVectorInfoNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    // CNmVectorInfoNode::Info_t m_desiredInfo;
    char m_desiredInfo[1]; // 0x12
    char pad_01[5];
}; // size: 0x18

/// CNmVectorCreateNode::CDefinition
class __declspec(align(8)) CNmVectorCreateNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_inputVectorValueNodeIdx; // 0x10
    int16_t m_inputValueXNodeIdx; // 0x12
    int16_t m_inputValueYNodeIdx; // 0x14
    int16_t m_inputValueZNodeIdx; // 0x16
}; // size: 0x18

/// CNmVectorNegateNode::CDefinition
class __declspec(align(8)) CNmVectorNegateNode__CDefinition0 {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    char pad_01[6];
}; // size: 0x18

/// CAnimGraphNetworkSettings
class __declspec(align(8)) CAnimGraphNetworkSettings0 {
public:
    char pad_00[32];
    bool m_bNetworkingEnabled; // 0x20
    char pad_01[7];
}; // size: 0x28

/// CActionComponentUpdater
class __declspec(align(8)) CActionComponentUpdater0 {
public:
    // CUtlVector< CSmartPtr< CAnimActionUpdater > > m_actions;
    char pad_00[48];
    char m_actions[1]; // 0x30
    char pad_01[23];
}; // size: 0x48

/// CAddUpdateNode
class __declspec(align(8)) CAddUpdateNode0 {
public:
    char pad_00[148];
    BinaryNodeChildOption m_footMotionTiming; // 0x94
    bool m_bApplyToFootMotion; // 0x98
    bool m_bApplyChannelsSeparately; // 0x99
    bool m_bUseModelSpace; // 0x9a
    bool m_bApplyScale; // 0x9b
    char pad_01[4];
}; // size: 0xa0

/// CAimCameraUpdateNode
class __declspec(align(8)) CAimCameraUpdateNode0 {
public:
    char pad_00[112];
    CAnimParamHandle m_hParameterPosition; // 0x70
    CAnimParamHandle m_hParameterOrientation; // 0x72
    CAnimParamHandle m_hParameterPelvisOffset; // 0x74
    CAnimParamHandle m_hParameterCameraOnly; // 0x76
    CAnimParamHandle m_hParameterWeaponDepenetrationDistance; // 0x78
    CAnimParamHandle m_hParameterWeaponDepenetrationDelta; // 0x7a
    CAnimParamHandle m_hParameterCameraClearanceDistance; // 0x7c
    AimCameraOpFixedSettings_t m_opFixedSettings; // 0x80
    char pad_01[8];
}; // size: 0xb8

/// CAimMatrixUpdateNode
class __declspec(align(16)) CAimMatrixUpdateNode0 {
public:
    char pad_00[112];
    AimMatrixOpFixedSettings_t m_opFixedSettings; // 0x70
    char pad_01[8];
    AnimVectorSource m_target; // 0x168
    CAnimParamHandle m_paramIndex; // 0x16c
    HSequence m_hSequence; // 0x170
    bool m_bResetChild; // 0x174
    bool m_bLockWhenWaning; // 0x175
    char pad_02[10];
}; // size: 0x180

/// CBindPoseUpdateNode
class __declspec(align(8)) CBindPoseUpdateNode0 {
public:
    char pad_00[96];
}; // size: 0x60

/// CChoreoUpdateNode
class __declspec(align(8)) CChoreoUpdateNode0 {
public:
    char pad_00[120];
}; // size: 0x78

/// CCycleControlUpdateNode
class __declspec(align(8)) CCycleControlUpdateNode0 {
public:
    char pad_00[112];
    AnimValueSource m_valueSource; // 0x70
    CAnimParamHandle m_paramIndex; // 0x74
    bool m_bLockWhenWaning; // 0x76
    char pad_01[1];
}; // size: 0x78

/// CCycleControlClipUpdateNode
class __declspec(align(8)) CCycleControlClipUpdateNode0 {
public:
    // CUtlVector< TagSpan_t > m_tags;
    char pad_00[96];
    char m_tags[1]; // 0x60
    char pad_01[24];
    HSequence m_hSequence; // 0x7c
    float m_duration; // 0x80
    AnimValueSource m_valueSource; // 0x84
    CAnimParamHandle m_paramIndex; // 0x88
    bool m_bLockWhenWaning; // 0x8a
    char pad_02[5];
}; // size: 0x90

/// CDirectionalBlendUpdateNode
class __declspec(align(8)) CDirectionalBlendUpdateNode0 {
public:
    char pad_00[92];
    HSequence m_hSequences; // 0x5c
    char pad_01[32];
    CAnimInputDamping m_damping; // 0x80
    AnimValueSource m_blendValueSource; // 0x98
    CAnimParamHandle m_paramIndex; // 0x9c
    float m_playbackSpeed; // 0xa0
    float m_duration; // 0xa4
    bool m_bLoop; // 0xa8
    bool m_bLockBlendOnReset; // 0xa9
    char pad_02[6];
}; // size: 0xb0

/// CDirectPlaybackUpdateNode
class __declspec(align(8)) CDirectPlaybackUpdateNode0 {
public:
    char pad_00[116];
    bool m_bFinishEarly; // 0x74
    bool m_bResetOnFinish; // 0x75
    // CUtlVector< CDirectPlaybackTagData > m_allTags;
    char pad_01[2];
    char m_allTags[1]; // 0x78
    char pad_02[23];
}; // size: 0x90

/// CFollowPathUpdateNode
class __declspec(align(8)) CFollowPathUpdateNode0 {
public:
    char pad_00[116];
    float m_flBlendOutTime; // 0x74
    bool m_bBlockNonPathMovement; // 0x78
    bool m_bStopFeetAtGoal; // 0x79
    bool m_bScaleSpeed; // 0x7a
    float m_flScale; // 0x7c
    float m_flMinAngle; // 0x80
    float m_flMaxAngle; // 0x84
    float m_flSpeedScaleBlending; // 0x88
    CAnimInputDamping m_turnDamping; // 0x90
    AnimValueSource m_facingTarget; // 0xa8
    CAnimParamHandle m_hParam; // 0xac
    float m_flTurnToFaceOffset; // 0xb0
    bool m_bTurnToFace; // 0xb4
    char pad_01[3];
}; // size: 0xb8

/// CFollowAttachmentUpdateNode
class __declspec(align(16)) CFollowAttachmentUpdateNode0 {
public:
    char pad_00[112];
    FollowAttachmentSettings_t m_opFixedData; // 0x70
    char pad_01[16];
}; // size: 0x110

/// CFollowTargetUpdateNode
class __declspec(align(8)) CFollowTargetUpdateNode0 {
public:
    char pad_00[112];
    FollowTargetOpFixedSettings_t m_opFixedData; // 0x70
    char pad_01[8];
    CAnimParamHandle m_hParameterPosition; // 0x88
    CAnimParamHandle m_hParameterOrientation; // 0x8a
    char pad_02[4];
}; // size: 0x90

/// CFootAdjustmentUpdateNode
class __declspec(align(8)) CFootAdjustmentUpdateNode0 {
public:
    // CUtlVector< HSequence > m_clips;
    char pad_00[120];
    char m_clips[1]; // 0x78
    char pad_01[22];
    CPoseHandle m_hBasePoseCacheHandle; // 0x90
    CAnimParamHandle m_facingTarget; // 0x94
    float m_flTurnTimeMin; // 0x98
    float m_flTurnTimeMax; // 0x9c
    float m_flStepHeightMax; // 0xa0
    float m_flStepHeightMaxAngle; // 0xa4
    bool m_bResetChild; // 0xa8
    bool m_bAnimationDriven; // 0xa9
    char pad_02[6];
}; // size: 0xb0

/// CFootLockUpdateNode
class __declspec(align(8)) CFootLockUpdateNode0 {
public:
    char pad_00[112];
    FootLockPoseOpFixedSettings m_opFixedSettings; // 0x70
    // CUtlVector< FootFixedSettings > m_footSettings;
    char pad_01[8];
    char m_footSettings[1]; // 0xe0
    char pad_02[16];
    CAnimInputDamping m_hipShiftDamping; // 0xf8
    CAnimInputDamping m_rootHeightDamping; // 0x110
    float m_flStrideCurveScale; // 0x128
    float m_flStrideCurveLimitScale; // 0x12c
    float m_flStepHeightIncreaseScale; // 0x130
    float m_flStepHeightDecreaseScale; // 0x134
    float m_flHipShiftScale; // 0x138
    float m_flBlendTime; // 0x13c
    float m_flMaxRootHeightOffset; // 0x140
    float m_flMinRootHeightOffset; // 0x144
    float m_flTiltPlanePitchSpringStrength; // 0x148
    float m_flTiltPlaneRollSpringStrength; // 0x14c
    bool m_bApplyFootRotationLimits; // 0x150
    bool m_bApplyHipShift; // 0x151
    bool m_bModulateStepHeight; // 0x152
    bool m_bResetChild; // 0x153
    bool m_bEnableVerticalCurvedPaths; // 0x154
    bool m_bEnableRootHeightDamping; // 0x155
    char pad_03[2];
}; // size: 0x158

/// CFootPinningUpdateNode
class __declspec(align(8)) CFootPinningUpdateNode0 {
public:
    char pad_00[120];
    FootPinningPoseOpFixedData_t m_poseOpFixedData; // 0x78
    FootPinningTimingSource m_eTimingSource; // 0xa8
    // CUtlVector< CAnimParamHandle > m_params;
    char pad_01[4];
    char m_params[1]; // 0xb0
    char pad_02[23];
    bool m_bResetChild; // 0xc8
    char pad_03[7];
}; // size: 0xd0

/// CFootStepTriggerUpdateNode
class __declspec(align(8)) CFootStepTriggerUpdateNode0 {
public:
    // CUtlVector< FootStepTrigger > m_triggers;
    char pad_00[112];
    char m_triggers[1]; // 0x70
    char pad_01[24];
    float m_flTolerance; // 0x8c
}; // size: 0x90

/// CHitReactUpdateNode
class __declspec(align(8)) CHitReactUpdateNode0 {
public:
    char pad_00[112];
    HitReactFixedSettings_t m_opFixedSettings; // 0x70
    char pad_01[8];
    CAnimParamHandle m_triggerParam; // 0xbc
    CAnimParamHandle m_hitBoneParam; // 0xbe
    CAnimParamHandle m_hitOffsetParam; // 0xc0
    CAnimParamHandle m_hitDirectionParam; // 0xc2
    CAnimParamHandle m_hitStrengthParam; // 0xc4
    float m_flMinDelayBetweenHits; // 0xc8
    bool m_bResetChild; // 0xcc
    char pad_02[3];
}; // size: 0xd0

/// CInputStreamUpdateNode
class __declspec(align(8)) CInputStreamUpdateNode0 {
public:
    char pad_00[96];
}; // size: 0x60

/// CJiggleBoneUpdateNode
class __declspec(align(8)) CJiggleBoneUpdateNode0 {
public:
    char pad_00[112];
    JiggleBoneSettingsList_t m_opFixedData; // 0x70
    char pad_01[8];
}; // size: 0x90

/// CJumpHelperUpdateNode
class __declspec(align(8)) CJumpHelperUpdateNode0 {
public:
    char pad_00[176];
    CAnimParamHandle m_hTargetParam; // 0xb0
    Vector m_flOriginalJumpMovement; // 0xb4
    float m_flOriginalJumpDuration; // 0xc0
    float m_flJumpStartCycle; // 0xc4
    float m_flJumpEndCycle; // 0xc8
    JumpCorrectionMethod m_eCorrectionMethod; // 0xcc
    bool m_bTranslationAxis[3]; // 0xd0
    bool m_bScaleSpeed; // 0xd3
    char pad_01[4];
}; // size: 0xd8

/// CLookAtUpdateNode
class __declspec(align(16)) CLookAtUpdateNode0 {
public:
    char pad_00[112];
    LookAtOpFixedSettings_t m_opFixedSettings; // 0x70
    char pad_01[8];
    AnimVectorSource m_target; // 0x148
    CAnimParamHandle m_paramIndex; // 0x14c
    CAnimParamHandle m_weightParamIndex; // 0x14e
    bool m_bResetChild; // 0x150
    bool m_bLockWhenWaning; // 0x151
    char pad_02[14];
}; // size: 0x160

/// CMoverUpdateNode
class __declspec(align(8)) CMoverUpdateNode0 {
public:
    char pad_00[120];
    CAnimInputDamping m_damping; // 0x78
    AnimValueSource m_facingTarget; // 0x90
    CAnimParamHandle m_hMoveVecParam; // 0x94
    CAnimParamHandle m_hMoveHeadingParam; // 0x96
    CAnimParamHandle m_hTurnToFaceParam; // 0x98
    float m_flTurnToFaceOffset; // 0x9c
    float m_flTurnToFaceLimit; // 0xa0
    bool m_bAdditive; // 0xa4
    bool m_bApplyMovement; // 0xa5
    bool m_bOrientMovement; // 0xa6
    bool m_bApplyRotation; // 0xa7
    bool m_bLimitOnly; // 0xa8
    char pad_01[7];
}; // size: 0xb0

/// CPairedSequenceUpdateNode
class __declspec(align(8)) CPairedSequenceUpdateNode0 {
public:
    // CGlobalSymbol m_sPairedSequenceRole;
    char pad_00[120];
    char m_sPairedSequenceRole[1]; // 0x78
    char pad_01[15];
}; // size: 0x88

/// CPathHelperUpdateNode
class __declspec(align(8)) CPathHelperUpdateNode0 {
public:
    char pad_00[112];
    float m_flStoppingRadius; // 0x70
    float m_flStoppingSpeedScale; // 0x74
}; // size: 0x78

/// COrientationWarpUpdateNode
class __declspec(align(8)) COrientationWarpUpdateNode0 {
public:
    char pad_00[116];
    OrientationWarpMode_t m_eMode; // 0x74
    CAnimParamHandle m_hTargetParam; // 0x78
    CAnimParamHandle m_hTargetPositionParam; // 0x7a
    CAnimParamHandle m_hFallbackTargetPositionParam; // 0x7c
    OrientationWarpTargetOffsetMode_t m_eTargetOffsetMode; // 0x80
    float m_flTargetOffset; // 0x84
    CAnimParamHandle m_hTargetOffsetParam; // 0x88
    CAnimInputDamping m_damping; // 0x90
    OrientationWarpRootMotionSource_t m_eRootMotionSource; // 0xa8
    float m_flMaxRootMotionScale; // 0xac
    bool m_bEnablePreferredRotationDirection; // 0xb0
    AnimValueSource m_ePreferredRotationDirection; // 0xb4
    float m_flPreferredRotationThreshold; // 0xb8
    char pad_01[4];
}; // size: 0xc0

/// CRagdollUpdateNode
class __declspec(align(8)) CRagdollUpdateNode0 {
public:
    char pad_00[112];
    int32_t m_nWeightListIndex; // 0x70
    RagdollPoseControl m_poseControlMethod; // 0x74
}; // size: 0x78

/// CRootUpdateNode
class __declspec(align(8)) CRootUpdateNode0 {
public:
    char pad_00[112];
}; // size: 0x70

/// CSlowDownOnSlopesUpdateNode
class __declspec(align(8)) CSlowDownOnSlopesUpdateNode0 {
public:
    char pad_00[112];
    float m_flSlowDownStrength; // 0x70
    char pad_01[4];
}; // size: 0x78

/// CSolveIKChainUpdateNode
class __declspec(align(8)) CSolveIKChainUpdateNode0 {
public:
    // CUtlVector< CSolveIKTargetHandle_t > m_targetHandles;
    char pad_00[112];
    char m_targetHandles[1]; // 0x70
    char pad_01[16];
    SolveIKChainPoseOpFixedSettings_t m_opFixedData; // 0x88
    char pad_02[8];
}; // size: 0xa8

/// CSpeedScaleUpdateNode
class __declspec(align(8)) CSpeedScaleUpdateNode0 {
public:
    char pad_00[112];
    CAnimParamHandle m_paramIndex; // 0x70
    char pad_01[6];
}; // size: 0x78

/// CStanceOverrideUpdateNode
class __declspec(align(8)) CStanceOverrideUpdateNode0 {
public:
    // CUtlVector< StanceInfo_t > m_footStanceInfo;
    char pad_00[112];
    char m_footStanceInfo[1]; // 0x70
    char pad_01[16];
    CAnimUpdateNodeRef m_pStanceSourceNode; // 0x88
    CAnimParamHandle m_hParameter; // 0x98
    StanceOverrideMode m_eMode; // 0x9c
}; // size: 0xa0

/// CStanceScaleUpdateNode
class __declspec(align(8)) CStanceScaleUpdateNode0 {
public:
    char pad_00[112];
    CAnimParamHandle m_hParam; // 0x70
    char pad_01[6];
}; // size: 0x78

/// CStopAtGoalUpdateNode
class __declspec(align(8)) CStopAtGoalUpdateNode0 {
public:
    char pad_00[116];
    float m_flOuterRadius; // 0x74
    float m_flInnerRadius; // 0x78
    float m_flMaxScale; // 0x7c
    float m_flMinScale; // 0x80
    CAnimInputDamping m_damping; // 0x88
}; // size: 0xa0

/// CTargetWarpUpdateNode
class __declspec(align(8)) CTargetWarpUpdateNode0 {
public:
    char pad_00[116];
    TargetWarpAngleMode_t m_eAngleMode; // 0x74
    CAnimParamHandle m_hTargetPositionParameter; // 0x78
    CAnimParamHandle m_hTargetUpVectorParameter; // 0x7a
    CAnimParamHandle m_hTargetFacePositionParameter; // 0x7c
    CAnimParamHandle m_hMoveHeadingParameter; // 0x7e
    CAnimParamHandle m_hDesiredMoveHeadingParameter; // 0x80
    TargetWarpCorrectionMethod m_eCorrectionMethod; // 0x84
    TargetWarpTimingMethod m_eTargetWarpTimingMethod; // 0x88
    bool m_bTargetFacePositionIsWorldSpace; // 0x8c
    bool m_bTargetPositionIsWorldSpace; // 0x8d
    bool m_bOnlyWarpWhenTagIsFound; // 0x8e
    bool m_bWarpOrientationDuringTranslation; // 0x8f
    bool m_bWarpAroundCenter; // 0x90
    float m_flMaxAngle; // 0x94
}; // size: 0x98

/// CTurnHelperUpdateNode
class __declspec(align(8)) CTurnHelperUpdateNode0 {
public:
    char pad_00[116];
    AnimValueSource m_facingTarget; // 0x74
    float m_turnStartTimeOffset; // 0x78
    float m_turnDuration; // 0x7c
    bool m_bMatchChildDuration; // 0x80
    float m_manualTurnOffset; // 0x84
    bool m_bUseManualTurnOffset; // 0x88
    char pad_01[7];
}; // size: 0x90

/// CTwoBoneIKUpdateNode
class __declspec(align(16)) CTwoBoneIKUpdateNode0 {
public:
    char pad_00[112];
    TwoBoneIKSettings_t m_opFixedData; // 0x70
    char pad_01[16];
}; // size: 0x1e0

/// CNmChainLookatNode::CDefinition
class __declspec(align(8)) CNmChainLookatNode__CDefinition0 {
public:
    // CGlobalSymbol m_chainEndBoneID;
    char pad_00[24];
    char m_chainEndBoneID[1]; // 0x18
    char pad_01[6];
    int16_t m_nLookatTargetNodeIdx; // 0x20
    int16_t m_nEnabledNodeIdx; // 0x22
    float m_flBlendTimeSeconds; // 0x24
    uint8_t m_nChainLength; // 0x28
    bool m_bIsTargetInWorldSpace; // 0x29
    Vector m_chainForwardDir; // 0x2c
}; // size: 0x38

/// CNmFollowBoneNode::CDefinition
class __declspec(align(8)) CNmFollowBoneNode__CDefinition0 {
public:
    // CGlobalSymbol m_bone;
    char pad_00[24];
    char m_bone[1]; // 0x18
    // CGlobalSymbol m_followTargetBone;
    char pad_01[7];
    char m_followTargetBone[1]; // 0x20
    char pad_02[6];
    int16_t m_nEnabledNodeIdx; // 0x28
    NmFollowBoneMode_t m_mode; // 0x2a
    char pad_03[5];
}; // size: 0x30

#ifdef __cplusplus
#pragma warning(pop)
#endif // __cplusplus