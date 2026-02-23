enum AnimValueSource : uint32_t {
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

enum MoodType_t : uint32_t {
    eMoodType_Head = 0,
    eMoodType_Body = 1,
};

enum AnimationProcessingType_t : uint32_t {
    ANIMATION_PROCESSING_SERVER_SIMULATION = 0,
    ANIMATION_PROCESSING_CLIENT_SIMULATION = 1,
    ANIMATION_PROCESSING_CLIENT_PREDICTION = 2,
    ANIMATION_PROCESSING_CLIENT_INTERPOLATION = 3,
    ANIMATION_PROCESSING_CLIENT_RENDER = 4,
    ANIMATION_PROCESSING_MAX = 5,
};

enum AnimationSnapshotType_t : uint32_t {
    ANIMATION_SNAPSHOT_SERVER_SIMULATION = 0,
    ANIMATION_SNAPSHOT_CLIENT_SIMULATION = 1,
    ANIMATION_SNAPSHOT_CLIENT_PREDICTION = 2,
    ANIMATION_SNAPSHOT_CLIENT_INTERPOLATION = 3,
    ANIMATION_SNAPSHOT_CLIENT_RENDER = 4,
    ANIMATION_SNAPSHOT_FINAL_COMPOSITE = 5,
    ANIMATION_SNAPSHOT_MAX = 6,
};

enum SeqCmd_t : uint32_t {
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

enum SeqPoseSetting_t : uint32_t {
    SEQ_POSE_SETTING_CONSTANT = 0,
    SEQ_POSE_SETTING_ROTATION = 1,
    SEQ_POSE_SETTING_POSITION = 2,
    SEQ_POSE_SETTING_VELOCITY = 3,
};

enum ParticleAttachment_t : uint32_t {
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

enum BoneTransformSpace_t : uint32_t {
    BoneTransformSpace_Invalid = 4294967295,
    BoneTransformSpace_Parent = 0,
    BoneTransformSpace_Model = 1,
    BoneTransformSpace_World = 2,
};

enum EPulseGraphExecutionHistoryFlag : uint32_t {
    NO_FLAGS = 0,
    CURSOR_ADD_TAG = 1,
    CURSOR_REMOVE_TAG = 2,
    CURSOR_RETIRED = 4,
    REQUIREMENT_PASS = 8,
    REQUIREMENT_FAIL = 16,
};

enum PulseInstructionCode_t : uint16_t {
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

enum PulseMethodCallMode_t : uint32_t {
    SYNC_WAIT_FOR_COMPLETION = 0,
    ASYNC_FIRE_AND_FORGET = 1,
};

enum PulseCursorExecResult_t : uint32_t {
    Succeeded = 0,
    Canceled = 1,
    Failed = 2,
    OngoingNotify = 3,
};

enum PulseCursorCancelPriority_t : uint32_t {
    None = 0,
    CancelOnSucceeded = 1,
    SoftCancel = 2,
    HardCancel = 3,
};

enum PulseValueType_t : uint32_t {
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

enum PulseDomainValueType_t : uint32_t {
    INVALID = 4294967295,
    ENTITY_NAME = 0,
    PANEL_ID = 1,
    COUNT = 2,
};

enum PulseVariableKeysSource_t : uint32_t {
    PRIVATE = 0,
    CPP = 1,
    VMAP = 2,
    VMDL = 3,
    XML = 4,
    COUNT = 5,
};

enum PulseApiFeature_t : uint32_t {
    AF_NONE = 0,
    AF_ENTITIES = 1,
    AF_PANORAMA = 2,
    AF_PARTICLES = 8,
    AF_FAKE_ENTITIES = 16,
    AF_SELECTORS_WITHOUT_REQUIREMENTS = 32,
};

enum PulseBestOutflowRules_t : uint32_t {
    SORT_BY_NUMBER_OF_VALID_CRITERIA = 0,
    SORT_BY_OUTFLOW_INDEX = 1,
};

enum ParticleFloatType_t : uint32_t {
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

enum ParticleFloatBiasType_t : uint32_t {
    PF_BIAS_TYPE_INVALID = 4294967295,
    PF_BIAS_TYPE_STANDARD = 0,
    PF_BIAS_TYPE_GAIN = 1,
    PF_BIAS_TYPE_EXPONENTIAL = 2,
    PF_BIAS_TYPE_COUNT = 3,
};

enum PFNoiseType_t : uint32_t {
    PF_NOISE_TYPE_PERLIN = 0,
    PF_NOISE_TYPE_SIMPLEX = 1,
    PF_NOISE_TYPE_WORLEY = 2,
    PF_NOISE_TYPE_CURL = 3,
};

enum PFNoiseModifier_t : uint32_t {
    PF_NOISE_MODIFIER_NONE = 0,
    PF_NOISE_MODIFIER_LINES = 1,
    PF_NOISE_MODIFIER_CLUMPS = 2,
    PF_NOISE_MODIFIER_RINGS = 3,
};

enum PFNoiseTurbulence_t : uint32_t {
    PF_NOISE_TURB_NONE = 0,
    PF_NOISE_TURB_HIGHLIGHT = 1,
    PF_NOISE_TURB_FEEDBACK = 2,
    PF_NOISE_TURB_LOOPY = 3,
    PF_NOISE_TURB_CONTRAST = 4,
    PF_NOISE_TURB_ALTERNATE = 5,
};

enum ParticleFloatRandomMode_t : uint32_t {
    PF_RANDOM_MODE_INVALID = 4294967295,
    PF_RANDOM_MODE_CONSTANT = 0,
    PF_RANDOM_MODE_VARYING = 1,
    PF_RANDOM_MODE_COUNT = 2,
};

enum ParticleFloatInputMode_t : uint32_t {
    PF_INPUT_MODE_INVALID = 4294967295,
    PF_INPUT_MODE_CLAMPED = 0,
    PF_INPUT_MODE_LOOPED = 1,
    PF_INPUT_MODE_COUNT = 2,
};

enum ParticleFloatMapType_t : uint32_t {
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

enum ParticleFloatRoundType_t : uint32_t {
    PF_ROUND_TYPE_INVALID = 4294967295,
    PF_ROUND_TYPE_NEAREST = 0,
    PF_ROUND_TYPE_FLOOR = 1,
    PF_ROUND_TYPE_CEIL = 2,
    PF_ROUND_TYPE_COUNT = 3,
};

enum ParticleTransformType_t : uint32_t {
    PT_TYPE_INVALID = 0,
    PT_TYPE_NAMED_VALUE = 1,
    PT_TYPE_CONTROL_POINT = 2,
    PT_TYPE_CONTROL_POINT_RANGE = 3,
    PT_TYPE_COUNT = 4,
};

enum ParticleModelType_t : uint32_t {
    PM_TYPE_INVALID = 0,
    PM_TYPE_NAMED_VALUE_MODEL = 1,
    PM_TYPE_NAMED_VALUE_EHANDLE = 2,
    PM_TYPE_CONTROL_POINT = 3,
    PM_TYPE_COUNT = 4,
};

enum ParticleVecType_t : uint32_t {
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

enum VPhysXBodyPart_t::VPhysXFlagEnum_t : uint32_t {
    FLAG_STATIC = 1,
    FLAG_KINEMATIC = 2,
    FLAG_JOINT = 4,
    FLAG_MASS = 8,
    FLAG_ALWAYS_DYNAMIC_ON_CLIENT = 16,
    FLAG_DISABLE_CCD = 32,
};

enum VPhysXConstraintParams_t::EnumFlags0_t : uint32_t {
    FLAG0_SHIFT_INTERPENETRATE = 0,
    FLAG0_SHIFT_CONSTRAIN = 1,
    FLAG0_SHIFT_BREAKABLE_FORCE = 2,
    FLAG0_SHIFT_BREAKABLE_TORQUE = 3,
};

enum VPhysXJoint_t::Flags_t : uint32_t {
    JOINT_FLAGS_NONE = 0,
    JOINT_FLAGS_BODY1_FIXED = 1,
    JOINT_FLAGS_USE_BLOCK_SOLVER = 2,
};

enum VPhysXAggregateData_t::VPhysXFlagEnum_t : uint32_t {
    FLAG_IS_POLYSOUP_GEOMETRY = 1,
    FLAG_LEVEL_COLLISION = 16,
    FLAG_IGNORE_SCALE_OBSOLETE_DO_NOT_USE = 32,
};

enum MeshDrawPrimitiveFlags_t : uint32_t {
    MESH_DRAW_FLAGS_NONE = 0,
    MESH_DRAW_FLAGS_USE_SHADOW_FAST_PATH = 1,
    MESH_DRAW_FLAGS_USE_COMPRESSED_NORMAL_TANGENT = 2,
    MESH_DRAW_INPUT_LAYOUT_IS_NOT_MATCHED_TO_MATERIAL = 8,
    MESH_DRAW_FLAGS_USE_COMPRESSED_PER_VERTEX_LIGHTING = 16,
    MESH_DRAW_FLAGS_USE_UNCOMPRESSED_PER_VERTEX_LIGHTING = 32,
    MESH_DRAW_FLAGS_CAN_BATCH_WITH_DYNAMIC_SHADER_CONSTANTS = 64,
    MESH_DRAW_FLAGS_DRAW_LAST = 128,
};

enum ModelSkeletonData_t::BoneFlags_t : uint32_t {
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

enum PermModelInfo_t::FlagEnum : uint32_t {
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

enum ModelBoneFlexComponent_t : uint32_t {
    MODEL_BONE_FLEX_INVALID = 4294967295,
    MODEL_BONE_FLEX_TX = 0,
    MODEL_BONE_FLEX_TY = 1,
    MODEL_BONE_FLEX_TZ = 2,
};

enum RenderMeshSlotType_t : uint8_t {
    RENDERMESH_SLOT_INVALID = 255,
    RENDERMESH_SLOT_PER_VERTEX = 0,
    RENDERMESH_SLOT_PER_INSTANCE = 1,
};

enum ModelMeshBufferUsage_t : uint8_t {
    MESH_BUFFER_USAGE_NONE = 0,
    MESH_BUFFER_USAGE_VB = 1,
    MESH_BUFFER_USAGE_IB = 2,
    MESH_BUFFER_USAGE_ADJACENCY = 4,
    MESH_BUFFER_USAGE_MESHLET_TRIS = 8,
    MESH_BUFFER_USAGE_RT_PROXY = 16,
    MESH_BUFFER_USAGE_VERTEX_ALBEDO = 32,
};

enum ScriptedMoveTo_t : uint32_t {
    eWait = 0,
    eMoveWithGait = 3,
    eTeleport = 4,
    eWaitFacing = 5,
    eObsoleteBackCompat1 = 1,
    eObsoleteBackCompat2 = 2,
};

enum ScriptedHeldWeaponBehavior_t : uint32_t {
    eInvalid = 4294967295,
    eHolster = 0,
    eDeploy = 1,
    eDrop = 2,
};

enum ModelConfigAttachmentType_t : uint32_t {
    MODEL_CONFIG_ATTACHMENT_INVALID = 4294967295,
    MODEL_CONFIG_ATTACHMENT_BONE_OR_ATTACHMENT = 0,
    MODEL_CONFIG_ATTACHMENT_ROOT_RELATIVE = 1,
    MODEL_CONFIG_ATTACHMENT_BONEMERGE = 2,
    MODEL_CONFIG_ATTACHMENT_COUNT = 3,
};

enum VertexAlbedoFormat_t : uint8_t {
    VERTEX_ALBEDO_NONE = 0,
    VERTEX_ALBEDO_8888 = 1,
    VERTEX_ALBEDO_565 = 2,
};

enum FlexOpCode_t : uint32_t {
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

enum MorphFlexControllerRemapType_t : uint32_t {
    MORPH_FLEXCONTROLLER_REMAP_PASSTHRU = 0,
    MORPH_FLEXCONTROLLER_REMAP_2WAY = 1,
    MORPH_FLEXCONTROLLER_REMAP_NWAY = 2,
    MORPH_FLEXCONTROLLER_REMAP_EYELID = 3,
};

enum MorphBundleType_t : uint32_t {
    MORPH_BUNDLE_TYPE_NONE = 0,
    MORPH_BUNDLE_TYPE_POSITION_SPEED = 1,
    MORPH_BUNDLE_TYPE_NORMAL_WRINKLE = 2,
    MORPH_BUNDLE_TYPE_COUNT = 3,
};

enum MovementCapability_t : uint32_t {
    eStrafe = 0,
    eIdleTurn = 1,
    eStart = 2,
    eStop = 3,
    eInstantStop = 4,
    eShuffle = 5,
    ePlantedTurn = 6,
    eCount = 7,
};

enum SharedMovementGait_t : uint8_t {
    eInvalid = 255,
    eSlow = 0,
    eMedium = 1,
    eFast = 2,
    eVeryFast = 3,
    eCount = 4,
};

enum NPCPhysicsHullType_t : uint32_t {
    eInvalid = 0,
    eGroundCapsule = 1,
    eCenteredCapsule = 2,
    eGenericCapsule = 3,
    eGroundBox = 4,
};

enum NmRootMotionBlendMode_t : uint8_t {
    Blend = 0,
    Additive = 1,
    IgnoreSource = 2,
    IgnoreTarget = 3,
};

enum CNmEventRelevance_t : uint32_t {
    ClientOnly = 0,
    ServerOnly = 1,
    ClientAndServer = 2,
};

enum NmEasingFunction_t : uint8_t {
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

enum NmEasingOperation_t : uint8_t {
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

enum CNmRootMotionData::SamplingMode_t : uint8_t {
    Delta = 0,
    WorldSpace = 1,
};

enum NmFollowBoneMode_t : uint8_t {
    RotationAndTranslation = 0,
    RotationOnly = 1,
    TranslationOnly = 2,
};

enum NmFootPhase_t : uint8_t {
    LeftFootDown = 0,
    RightFootPassing = 1,
    RightFootDown = 2,
    LeftFootPassing = 3,
    None = 4,
};

enum NmFootPhaseCondition_t : uint8_t {
    LeftFootDown = 0,
    LeftFootPassing = 1,
    LeftPhase = 4,
    RightFootDown = 2,
    RightFootPassing = 3,
    RightPhase = 5,
    None = 6,
};

enum NmFrameSnapEventMode_t : uint32_t {
    Floor = 0,
    Round = 1,
};

enum CNmParticleEvent::Type_t : uint32_t {
    Create = 0,
    Create_CFG = 1,
};

enum CNmSoundEvent::Position_t : uint32_t {
    None = 0,
    World = 1,
    EntityPos = 2,
    EntityEyePos = 3,
    EntityAttachment = 4,
};

enum NmTransitionRule_t : uint8_t {
    AllowTransition = 0,
    ConditionallyAllowTransition = 1,
    BlockTransition = 2,
};

enum NmTransitionRuleCondition_t : uint8_t {
    AnyAllowed = 0,
    FullyAllowed = 1,
    ConditionallyAllowed = 2,
    Blocked = 3,
};

enum NmTargetWarpRule_t : uint8_t {
    WarpXY = 0,
    WarpZ = 1,
    WarpXYZ = 2,
    RotationOnly = 3,
    FixedSection = 4,
};

enum NmTargetWarpAlgorithm_t : uint8_t {
    Lerp = 0,
    Hermite = 1,
    HermiteFeaturePreserving = 2,
    Bezier = 3,
};

enum NmCachedValueMode_t : uint32_t {
    OnEntry = 0,
    OnExit = 1,
};

enum NmEventConditionRules_t : uint8_t {
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

enum CNmSyncEventIndexConditionNode::TriggerMode_t : uint8_t {
    ExactlyAtEventIndex = 0,
    GreaterThanEqualToEventIndex = 1,
};

enum CNmCurrentSyncEventNode::InfoType_t : uint8_t {
    IndexAndPercentage = 0,
    IndexOnly = 1,
    PercentageOnly = 2,
};

enum CNmFloatMathNode::Operator_t : uint8_t {
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

enum CNmFloatComparisonNode::Comparison_t : uint8_t {
    GreaterThanEqual = 0,
    LessThanEqual = 1,
    NearEqual = 2,
    GreaterThan = 3,
    LessThan = 4,
};

enum CNmFloatAngleMathNode::Operation_t : uint8_t {
    ClampTo180 = 0,
    ClampTo360 = 1,
    FlipHemisphere = 2,
    FlipHemisphereNegate = 3,
};

enum CNmIDComparisonNode::Comparison_t : uint8_t {
    Matches = 0,
    DoesntMatch = 1,
};

enum NmPoseBlendMode_t : uint8_t {
    Overlay = 0,
    Additive = 1,
    ModelSpace = 2,
};

enum CNmRootMotionOverrideNode::OverrideFlags_t : uint8_t {
    AllowMoveX = 0,
    AllowMoveY = 1,
    AllowMoveZ = 2,
    AllowFacingPitch = 3,
    ListenForEvents = 4,
};

enum CNmStateNode::TimedEvent_t::Comparison_t : uint8_t {
    LessThanEqual = 0,
    GreaterThanEqual = 1,
};

enum CNmTimeConditionNode::ComparisonType_t : uint8_t {
    PercentageThroughState = 0,
    PercentageThroughSyncEvent = 1,
    ElapsedTime = 2,
};

enum CNmTimeConditionNode::Operator_t : uint8_t {
    LessThan = 0,
    LessThanEqual = 1,
    GreaterThan = 2,
    GreaterThanEqual = 3,
};

enum CNmTargetInfoNode::Info_t : uint32_t {
    AngleHorizontal = 0,
    AngleVertical = 1,
    Distance = 2,
    DistanceHorizontalOnly = 3,
    DistanceVerticalOnly = 4,
    DeltaOrientationX = 5,
    DeltaOrientationY = 6,
    DeltaOrientationZ = 7,
};

enum CNmTransitionNode::TransitionOptions_t : uint8_t {
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

enum CNmVectorInfoNode::Info_t : uint8_t {
    X = 0,
    Y = 1,
    Z = 2,
    Length = 3,
    AngleHorizontal = 4,
    AngleVertical = 5,
};

enum NmGraphEventTypeCondition_t : uint8_t {
    Entry = 0,
    FullyInState = 1,
    Exit = 2,
    Timed = 3,
    Generic = 4,
    Any = 5,
};

enum NmGraphValueType_t : uint8_t {
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

enum NmIKBlendMode_t : uint8_t {
    Effector = 0,
    Pose = 1,
};

enum IKChannelMode : uint32_t {
    TwoBone = 0,
    TwoBone_Translate = 1,
    OneBone = 2,
    OneBone_Translate = 3,
};

enum EDemoBoneSelectionMode : uint32_t {
    CaptureAllBones = 0,
    CaptureSelectedBones = 1,
};

enum AnimVectorSource : uint32_t {
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

enum DampingSpeedFunction : uint32_t {
    NoDamping = 0,
    Constant = 1,
    Spring = 2,
    AsymmetricSpring = 3,
};

enum AnimNodeNetworkMode : uint32_t {
    ServerAuthoritative = 0,
    ClientSimulate = 1,
};

enum StateActionBehavior : uint32_t {
    STATETAGBEHAVIOR_ACTIVE_WHILE_CURRENT = 0,
    STATETAGBEHAVIOR_FIRE_ON_ENTER = 1,
    STATETAGBEHAVIOR_FIRE_ON_EXIT = 2,
    STATETAGBEHAVIOR_FIRE_ON_ENTER_AND_EXIT = 3,
    STATETAGBEHAVIOR_ACTIVE_WHILE_FULLY_BLENDED = 4,
};

enum LinearRootMotionBlendMode_t : uint32_t {
    LERP = 0,
    NLERP = 1,
    SLERP = 2,
};

enum AnimParamNetworkSetting : uint32_t {
    Auto = 0,
    AlwaysNetwork = 1,
    NeverNetwork = 2,
};

enum FootstepLandedFootSoundType_t : uint32_t {
    FOOTSOUND_Left = 0,
    FOOTSOUND_Right = 1,
    FOOTSOUND_UseOverrideSound = 2,
};

enum FootstepJumpPhase_t : uint8_t {
    Unknown = 0,
    NotJumping = 1,
    Jumping = 2,
    Landing = 4,
};

enum AnimParamButton_t : uint32_t {
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

enum AnimParamVectorType_t : uint32_t {
    ANIMPARAM_VECTOR_TYPE_NONE = 0,
    ANIMPARAM_VECTOR_TYPE_POSITION_WS = 1,
    ANIMPARAM_VECTOR_TYPE_POSITION_LS = 2,
    ANIMPARAM_VECTOR_TYPE_DIRECTION_WS = 3,
    ANIMPARAM_VECTOR_TYPE_DIRECTION_LS = 4,
};

enum AnimParamType_t : uint8_t {
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

enum RagdollPoseControl : uint32_t {
    Absolute = 0,
};

enum FieldNetworkOption : uint32_t {
    Auto = 0,
    ForceEnable = 1,
    ForceDisable = 2,
};

enum FootFallTagFoot_t : uint32_t {
    FOOT1 = 0,
    FOOT2 = 1,
    FOOT3 = 2,
    FOOT4 = 3,
    FOOT5 = 4,
    FOOT6 = 5,
    FOOT7 = 6,
    FOOT8 = 7,
};

enum MatterialAttributeTagType_t : uint32_t {
    MATERIAL_ATTRIBUTE_TAG_VALUE = 0,
    MATERIAL_ATTRIBUTE_TAG_COLOR = 1,
};

enum VelocityMetricMode : uint8_t {
    DirectionOnly = 0,
    MagnitudeOnly = 1,
    DirectionAndMagnitude = 2,
};

enum AimMatrixBlendMode : uint32_t {
    AimMatrixBlendMode_None = 0,
    AimMatrixBlendMode_Additive = 1,
    AimMatrixBlendMode_ModelSpaceAdditive = 2,
    AimMatrixBlendMode_BoneMask = 3,
};

enum BoneMaskBlendSpace : uint32_t {
    BlendSpace_Parent = 0,
    BlendSpace_Model = 1,
    BlendSpace_Model_RotationOnly = 2,
    BlendSpace_Model_TranslationOnly = 3,
};

enum JiggleBoneSimSpace : uint32_t {
    SimSpace_Local = 0,
    SimSpace_Model = 1,
    SimSpace_World = 2,
};

enum SolveIKChainAnimNodeDebugSetting : uint32_t {
    SOLVEIKCHAINANIMNODEDEBUGSETTING_None = 0,
    SOLVEIKCHAINANIMNODEDEBUGSETTING_X_Axis_Circle = 1,
    SOLVEIKCHAINANIMNODEDEBUGSETTING_Y_Axis_Circle = 2,
    SOLVEIKCHAINANIMNODEDEBUGSETTING_Z_Axis_Circle = 3,
    SOLVEIKCHAINANIMNODEDEBUGSETTING_Forward = 4,
    SOLVEIKCHAINANIMNODEDEBUGSETTING_Up = 5,
    SOLVEIKCHAINANIMNODEDEBUGSETTING_Left = 6,
};

enum AnimScriptType : uint16_t {
    ANIMSCRIPT_TYPE_INVALID = 65535,
    ANIMSCRIPT_FUSE_GENERAL = 0,
    ANIMSCRIPT_FUSE_STATEMACHINE = 1,
};

enum BinaryNodeTiming : uint32_t {
    UseChild1 = 0,
    UseChild2 = 1,
    SyncChildren = 2,
};

enum BinaryNodeChildOption : uint32_t {
    Child1 = 0,
    Child2 = 1,
};

enum BlendKeyType : uint32_t {
    BlendKey_UserValue = 0,
    BlendKey_Velocity = 1,
    BlendKey_Distance = 2,
    BlendKey_RemainingDistance = 3,
};

enum Blend2DMode : uint32_t {
    Blend2DMode_General = 0,
    Blend2DMode_Directional = 1,
};

enum ChoiceMethod : uint32_t {
    WeightedRandom = 0,
    WeightedRandomNoRepeat = 1,
    Iterate = 2,
    IterateRandom = 3,
};

enum ChoiceChangeMethod : uint32_t {
    OnReset = 0,
    OnCycleEnd = 1,
    OnResetOrCycleEnd = 2,
};

enum ChoiceBlendMethod : uint32_t {
    SingleBlendTime = 0,
    PerChoiceBlendTimes = 1,
};

enum FootLockSubVisualization : uint32_t {
    FOOTLOCKSUBVISUALIZATION_ReachabilityAnalysis = 0,
    FOOTLOCKSUBVISUALIZATION_IKSolve = 1,
};

enum FootPinningTimingSource : uint32_t {
    FootMotion = 0,
    Tag = 1,
    Parameter = 2,
};

enum StepPhase : uint32_t {
    StepPhase_OnGround = 0,
    StepPhase_InAir = 1,
};

enum JumpCorrectionMethod : uint32_t {
    ScaleMotion = 0,
    AddCorrectionDelta = 1,
};

enum OrientationWarpTargetOffsetMode_t : uint32_t {
    eLiteralValue = 0,
    eParameter = 1,
    eAnimationMovementHeading = 2,
    eAnimationMovementHeadingAtEnd = 3,
};

enum OrientationWarpRootMotionSource_t : uint32_t {
    eAnimationOrProcedural = 0,
    eAnimationOnly = 1,
    eProceduralOnly = 2,
};

enum OrientationWarpMode_t : uint32_t {
    eInvalid = 0,
    eAngle = 1,
    eWorldPosition = 2,
};

enum SelectorTagBehavior_t : uint32_t {
    SelectorTagBehavior_OnWhileCurrent = 0,
    SelectorTagBehavior_OffWhenFinished = 1,
    SelectorTagBehavior_OffBeforeFinished = 2,
};

enum StanceOverrideMode : uint32_t {
    Sequence = 0,
    Node = 1,
};

enum ResetCycleOption : uint32_t {
    Beginning = 0,
    SameCycleAsSource = 1,
    InverseSourceCycle = 2,
    FixedValue = 3,
    SameTimeAsSource = 4,
};

enum TargetSelectorAngleMode_t : uint32_t {
    eFacingHeading = 0,
    eMoveHeading = 1,
};

enum TargetWarpAngleMode_t : uint32_t {
    eFacingHeading = 0,
    eMoveHeading = 1,
};

enum TargetWarpCorrectionMethod : uint32_t {
    ScaleMotion = 0,
    AddCorrectionDelta = 1,
};

enum TargetWarpTimingMethod : uint32_t {
    ReachDestinationOnRootMotionEnd = 0,
    ReachDestinationOnWarpTagEnd = 1,
};

enum IkEndEffectorType : uint32_t {
    IkEndEffector_Attachment = 0,
    IkEndEffector_Bone = 1,
};

enum IkTargetType : uint32_t {
    IkTarget_Attachment = 0,
    IkTarget_Bone = 1,
    IkTarget_Parameter_ModelSpace = 2,
    IkTarget_Parameter_WorldSpace = 3,
};

enum HandshakeTagType_t : uint32_t {
    eInvalid = 4294967295,
    eTask = 0,
    eMovement = 1,
    eCount = 2,
};

enum HandshakeTagState_t : uint8_t {
    eInactive = 0,
    eActive = 1,
    eMomentarilyInactive = 2,
};

enum PoseType_t : uint8_t {
    POSETYPE_STATIC = 0,
    POSETYPE_DYNAMIC = 1,
    POSETYPE_INVALID = 255,
};

enum CAnimationGraphVisualizerPrimitiveType : uint32_t {
    ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Text = 0,
    ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Sphere = 1,
    ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Line = 2,
    ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Pie = 3,
    ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Axis = 4,
};

enum FacingMode : uint8_t {
    FacingMode_Invalid = 0,
    FacingMode_Manual = 1,
    FacingMode_Path = 2,
    FacingMode_LookTarget = 3,
    FacingMode_ManualPosition = 4,
};

enum IKSolverType : uint32_t {
    IKSOLVER_Perlin = 0,
    IKSOLVER_TwoBone = 1,
    IKSOLVER_Fabrik = 2,
    IKSOLVER_DogLeg3Bone = 3,
    IKSOLVER_CCD = 4,
    IKSOLVER_COUNT = 5,
};

enum EIKEndEffectorRotationFixUpMode : uint32_t {
    None = 0,
    MatchTargetOrientation = 1,
    LookAtTargetForward = 2,
    MaintainParentOrientation = 3,
    Count = 4,
};

enum IKTargetSource : uint32_t {
    IKTARGETSOURCE_Bone = 0,
    IKTARGETSOURCE_AnimgraphParameter = 1,
    IKTARGETSOURCE_COUNT = 2,
};

enum IKTargetCoordinateSystem : uint32_t {
    IKTARGETCOORDINATESYSTEM_WorldSpace = 0,
    IKTARGETCOORDINATESYSTEM_ModelSpace = 1,
    IKTARGETCOORDINATESYSTEM_COUNT = 2,
};

class AttachmentHandle_t {
public:
    uint8_t m_Value;
};

class ParticleAttributeIndex_t {
public:
    int32_t m_Value;
};

class HSequence {
public:
    int32_t m_Value;
};

class AnimParamID {
public:
    uint32_t m_id;
};

class CAnimInputDamping {
public:
    char pad_00[8];
    DampingSpeedFunction m_speedFunction;
    float m_fSpeedScale;
    float m_fFallingSpeedScale;
    char pad_01[4];
};

class CAnimParamHandle {
public:
    AnimParamType_t m_type;
    uint8_t m_index;
};

class MoodAnimation_t {
public:
    // CModelAnimNameWithDeltas m_sName;
    char pad_00[8];
    float m_flWeight;
    char pad_01[4];
};

class MoodAnimationLayer_t {
public:
    // CUtlString m_sName;
    char pad_00[8];
    bool m_bActiveListening;
    bool m_bActiveTalking;
    // CUtlVector< MoodAnimation_t > m_layerAnimations;
    CRangeFloat m_flIntensity;
    CRangeFloat m_flDurationScale;
    bool m_bScaleWithInts;
    CRangeFloat m_flNextStart;
    CRangeFloat m_flStartOffset;
    CRangeFloat m_flEndOffset;
    float m_flFadeIn;
    float m_flFadeOut;
    char pad_01[4];
};

class CRangeFloat {
public:
    float m_pValue[2];
};

class CMoodVData {
public:
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName;
    char pad_00[224];
    MoodType_t m_nMoodType;
    // CUtlVector< MoodAnimationLayer_t > m_animationLayers;
    char pad_01[28];
};

class AnimationDecodeDebugDumpElement_t {
public:
    int32_t m_nEntityIndex;
    // CUtlString m_modelName;
    // CUtlVector< CUtlString > m_poseParams;
    // CUtlVector< CUtlString > m_decodeOps;
    // CUtlVector< CUtlString > m_internalOps;
    // CUtlVector< CUtlString > m_decodedAnims;
    char pad_00[108];
};

class AnimationDecodeDebugDump_t {
public:
    AnimationProcessingType_t m_processingType;
    // CUtlVector< AnimationDecodeDebugDumpElement_t > m_elems;
    char pad_00[28];
};

class AnimationSnapshotBase_t {
public:
    float m_flRealTime;
    // matrix3x4a_t m_rootToWorld;
    char pad_00[60];
    bool m_bBonesInWorldSpace;
    // CUtlVector< uint32 > m_boneSetupMask;
    // CUtlVector< matrix3x4a_t > m_boneTransforms;
    // CUtlVector< float32 > m_flexControllers;
    char pad_01[76];
    AnimationSnapshotType_t m_SnapshotType;
    bool m_bHasDecodeDump;
    AnimationDecodeDebugDumpElement_t m_DecodeDump;
    char pad_02[8];
};

class AnimationSnapshot_t {
public:
    char pad_00[272];
    int32_t m_nEntIndex;
    // CUtlString m_modelName;
    char pad_01[12];
};

class CAnimBoneDifference {
public:
    // CBufferString m_name;
    // CBufferString m_parent;
    // Vector m_posError;
    char pad_00[44];
    bool m_bHasRotation;
    bool m_bHasMovement;
    char pad_01[2];
};

class CAnimMorphDifference {
public:
    // CBufferString m_name;
    char pad_00[16];
};

class CAnimUserDifference {
public:
    // CBufferString m_name;
    char pad_00[16];
    int32_t m_nType;
    char pad_01[4];
};

class CAnimEncodeDifference {
public:
    // CUtlVector< CAnimBoneDifference > m_boneArray;
    // CUtlVector< CAnimMorphDifference > m_morphArray;
    // CUtlVector< CAnimUserDifference > m_userArray;
    // CUtlVector< uint8 > m_bHasRotationBitArray;
    // CUtlVector< uint8 > m_bHasMovementBitArray;
    // CUtlVector< uint8 > m_bHasMorphBitArray;
    // CUtlVector< uint8 > m_bHasUserBitArray;
    char pad_00[168];
};

class CAnimEventDefinition {
public:
    char pad_00[8];
    int32_t m_nFrame;
    int32_t m_nEndFrame;
    float m_flCycle;
    float m_flDuration;
    // KeyValues3 m_EventData;
    // CBufferString m_sLegacyOptions;
    // CGlobalSymbol m_sEventName;
    char pad_01[40];
};

class CAnimMovement {
public:
    int32_t endframe;
    int32_t motionflags;
    float v0;
    float v1;
    float angle;
    // Vector vector;
    // Vector position;
    char pad_00[24];
};

class CAnimLocalHierarchy {
public:
    // CBufferString m_sBone;
    // CBufferString m_sNewParent;
    char pad_00[32];
    int32_t m_nStartFrame;
    int32_t m_nPeakFrame;
    int32_t m_nTailFrame;
    int32_t m_nEndFrame;
};

class CAnimDecoder {
public:
    // CBufferString m_szName;
    char pad_00[16];
    int32_t m_nVersion;
    int32_t m_nType;
};

class CAnimFrameSegment {
public:
    int32_t m_nUniqueFrameIndex;
    uint32_t m_nLocalElementMasks;
    int32_t m_nLocalChannel;
    // CUtlBinaryBlock m_container;
    char pad_00[20];
};

class CAnimFrameBlockAnim {
public:
    int32_t m_nStartFrame;
    int32_t m_nEndFrame;
    // CUtlVector< int32 > m_segmentIndexArray;
    char pad_00[24];
};

class CAnimEncodedFrames {
public:
    // CBufferString m_fileName;
    char pad_00[16];
    int32_t m_nFrames;
    int32_t m_nFramesPerBlock;
    // CUtlVector< CAnimFrameBlockAnim > m_frameblockArray;
    char pad_01[24];
    CAnimEncodeDifference m_usageDifferences;
};

class CAnimDesc_Flag {
public:
    bool m_bLooping;
    bool m_bAllZeros;
    bool m_bHidden;
    bool m_bDelta;
    bool m_bLegacyWorldspace;
    bool m_bModelDoc;
    bool m_bImplicitSeqIgnoreDelta;
    bool m_bAnimGraphAdditive;
};

class CAnimSequenceParams {
public:
    float m_flFadeInTime;
    float m_flFadeOutTime;
};

class CAnimDesc {
public:
    // CBufferString m_name;
    char pad_00[16];
    CAnimDesc_Flag m_flags;
    float fps;
    CAnimEncodedFrames m_Data;
    // CUtlVector< CAnimMovement > m_movementArray;
    // CTransform m_xInitialOffset;
    // CUtlVector< CAnimEventDefinition > m_eventArray;
    // CUtlVector< CAnimActivity > m_activityArray;
    // CUtlVector< CAnimLocalHierarchy > m_hierarchyArray;
    char pad_01[128];
    float framestalltime;
    // Vector m_vecRootMin;
    // Vector m_vecRootMax;
    // CUtlVector< Vector > m_vecBoneWorldMin;
    // CUtlVector< Vector > m_vecBoneWorldMax;
    char pad_02[76];
    CAnimSequenceParams m_sequenceParams;
};

class CAnimActivity {
public:
    // CBufferString m_name;
    char pad_00[16];
    int32_t m_nActivity;
    int32_t m_nFlags;
    int32_t m_nWeight;
    char pad_01[4];
};

class CAnimData {
public:
    // CBufferString m_name;
    // CUtlVector< CAnimDesc > m_animArray;
    // CUtlVector< CAnimDecoder > m_decoderArray;
    char pad_00[80];
    int32_t m_nMaxUniqueFrameIndex;
    // CUtlVector< CAnimFrameSegment > m_segmentArray;
    char pad_01[28];
};

class CAnimBone {
public:
    // CBufferString m_name;
    char pad_00[16];
    int32_t m_parent;
    // Vector m_pos;
    // QuaternionStorage m_quat;
    char pad_01[28];
    float m_scale;
    // QuaternionStorage m_qAlignment;
    char pad_02[16];
    int32_t m_flags;
};

class CAnimUser {
public:
    // CBufferString m_name;
    char pad_00[16];
    int32_t m_nType;
    char pad_01[4];
};

class CAnimDataChannelDesc {
public:
    // CBufferString m_szChannelClass;
    // CBufferString m_szVariableName;
    char pad_00[32];
    int32_t m_nFlags;
    int32_t m_nType;
    // CBufferString m_szGrouping;
    // CBufferString m_szDescription;
    // CUtlVector< CBufferString > m_szElementNameArray;
    // CUtlVector< int32 > m_nElementIndexArray;
    // CUtlVector< uint32 > m_nElementMaskArray;
    char pad_01[104];
};

class CAnimKeyData {
public:
    // CBufferString m_name;
    // CUtlVector< CAnimBone > m_boneArray;
    // CUtlVector< CAnimUser > m_userArray;
    // CUtlVector< CBufferString > m_morphArray;
    char pad_00[88];
    int32_t m_nChannelElements;
    // CUtlVector< CAnimDataChannelDesc > m_dataChannelArray;
    char pad_01[28];
};

class CAnimationGroup {
public:
    char pad_00[16];
    uint32_t m_nFlags;
    // CBufferString m_name;
    // CUtlVector< CStrongHandle< InfoForResourceTypeCAnimData > > m_localHAnimArray_Handle;
    // CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > > m_includedGroupArray_Handle;
    // CStrongHandle< InfoForResourceTypeCSequenceGroupData > m_directHSeqGroup_Handle;
    char pad_01[128];
    CAnimKeyData m_decodeKey;
    // CUtlVector< CBufferString > m_szScripts;
    // CUtlVector< CStrongHandleVoid > m_AdditionalExtRefs;
    char pad_02[56];
};

class CSeqAutoLayerFlag {
public:
    bool m_bPost;
    bool m_bSpline;
    bool m_bXFade;
    bool m_bNoBlend;
    bool m_bLocal;
    bool m_bPose;
    bool m_bFetchFrame;
    bool m_bSubtract;
};

class CSeqAutoLayer {
public:
    int16_t m_nLocalReference;
    int16_t m_nLocalPose;
    CSeqAutoLayerFlag m_flags;
    float m_start;
    float m_peak;
    float m_tail;
    float m_end;
};

class CSeqIKLock {
public:
    float m_flPosWeight;
    float m_flAngleWeight;
    int16_t m_nLocalBone;
    bool m_bBonesOrientedAlongPositiveX;
    char pad_00[1];
};

class CSeqBoneMaskList {
public:
    // CBufferString m_sName;
    // CUtlVector< int16 > m_nLocalBoneArray;
    // CUtlVector< float32 > m_flBoneWeightArray;
    char pad_00[64];
    float m_flDefaultMorphCtrlWeight;
    // CUtlVector< std::pair< CBufferString, float32 > > m_morphCtrlWeightArray;
    char pad_01[28];
};

class CSeqScaleSet {
public:
    // CBufferString m_sName;
    char pad_00[16];
    bool m_bRootOffset;
    // Vector m_vRootOffset;
    // CUtlVector< int16 > m_nLocalBoneArray;
    // CUtlVector< float32 > m_flBoneScaleArray;
    char pad_01[63];
};

class CSeqMultiFetchFlag {
public:
    bool m_bRealtime;
    bool m_bCylepose;
    bool m_b0D;
    bool m_b1D;
    bool m_b2D;
    bool m_b2D_TRI;
};

class CSeqMultiFetch {
public:
    CSeqMultiFetchFlag m_flags;
    // CUtlVector< int16 > m_localReferenceArray;
    char pad_00[24];
    int32_t m_nGroupSize[2];
    int32_t m_nLocalPose[2];
    // CUtlVector< float32 > m_poseKeyArray0;
    // CUtlVector< float32 > m_poseKeyArray1;
    char pad_01[48];
    int32_t m_nLocalCyclePoseParameter;
    bool m_bCalculatePoseParameters;
    bool m_bFixedBlendWeight;
    float m_flFixedBlendWeightVals[2];
};

class CSeqSeqDescFlag {
public:
    bool m_bLooping;
    bool m_bSnap;
    bool m_bAutoplay;
    bool m_bPost;
    bool m_bHidden;
    bool m_bMulti;
    bool m_bLegacyDelta;
    bool m_bLegacyWorldspace;
    bool m_bLegacyCyclepose;
    bool m_bLegacyRealtime;
    bool m_bModelDoc;
};

class CSeqTransition {
public:
    float m_flFadeInTime;
    float m_flFadeOutTime;
};

class CSeqS1SeqDesc {
public:
    // CBufferString m_sName;
    char pad_00[16];
    CSeqSeqDescFlag m_flags;
    CSeqMultiFetch m_fetch;
    int32_t m_nLocalWeightlist;
    // CUtlVector< CSeqAutoLayer > m_autoLayerArray;
    // CUtlVector< CSeqIKLock > m_IKLockArray;
    char pad_01[52];
    CSeqTransition m_transition;
    // KeyValues3 m_SequenceKeys;
    // CBufferString m_LegacyKeyValueText;
    // CUtlVector< CAnimActivity > m_activityArray;
    // CUtlVector< CFootMotion > m_footMotion;
    char pad_02[80];
};

class CFootMotion {
public:
    // CUtlVector< CFootStride > m_strides;
    // CUtlString m_name;
    char pad_00[32];
    bool m_bAdditive;
    char pad_01[7];
};

class CSeqSynthAnimDesc {
public:
    // CBufferString m_sName;
    char pad_00[16];
    CSeqSeqDescFlag m_flags;
    CSeqTransition m_transition;
    int16_t m_nLocalBaseReference;
    int16_t m_nLocalBoneMask;
    // CUtlVector< CAnimActivity > m_activityArray;
    char pad_01[24];
};

class CSeqCmdLayer {
public:
    int16_t m_cmd;
    int16_t m_nLocalReference;
    int16_t m_nLocalBonemask;
    int16_t m_nDstResult;
    int16_t m_nSrcResult;
    bool m_bSpline;
    float m_flVar1;
    float m_flVar2;
    int16_t m_nLineNumber;
    char pad_00[2];
};

class CSeqPoseSetting {
public:
    // CBufferString m_sPoseParameter;
    // CBufferString m_sAttachment;
    // CBufferString m_sReferenceSequence;
    char pad_00[48];
    float m_flValue;
    bool m_bX;
    bool m_bY;
    bool m_bZ;
    int32_t m_eType;
    char pad_01[4];
};

class CSeqCmdSeqDesc {
public:
    // CBufferString m_sName;
    char pad_00[16];
    CSeqSeqDescFlag m_flags;
    CSeqTransition m_transition;
    int16_t m_nFrameRangeSequence;
    int16_t m_nFrameCount;
    float m_flFPS;
    int16_t m_nSubCycles;
    int16_t m_numLocalResults;
    // CUtlVector< CSeqCmdLayer > m_cmdLayerArray;
    // CUtlVector< CAnimEventDefinition > m_eventArray;
    // CUtlVector< CAnimActivity > m_activityArray;
    // CUtlVector< CSeqPoseSetting > m_poseSettingArray;
    char pad_01[96];
};

class CSeqPoseParamDesc {
public:
    // CBufferString m_sName;
    char pad_00[16];
    float m_flStart;
    float m_flEnd;
    float m_flLoop;
    bool m_bLooping;
    char pad_01[3];
};

class CSequenceGroupData {
public:
    // CBufferString m_sName;
    char pad_00[32];
    uint32_t m_nFlags;
    // CUtlVector< CBufferString > m_localSequenceNameArray;
    // CUtlVector< CSeqS1SeqDesc > m_localS1SeqDescArray;
    // CUtlVector< CSeqS1SeqDesc > m_localMultiSeqDescArray;
    // CUtlVector< CSeqSynthAnimDesc > m_localSynthAnimDescArray;
    // CUtlVector< CSeqCmdSeqDesc > m_localCmdSeqDescArray;
    // CUtlVector< CSeqBoneMaskList > m_localBoneMaskArray;
    // CUtlVector< CSeqScaleSet > m_localScaleSetArray;
    // CUtlVector< CBufferString > m_localBoneNameArray;
    // CBufferString m_localNodeName;
    // CUtlVector< CSeqPoseParamDesc > m_localPoseParamArray;
    // KeyValues3 m_keyValues;
    // CUtlVector< CSeqIKLock > m_localIKAutoplayLockArray;
    char pad_01[276];
};

class CCompressorGroup {
public:
    int32_t m_nTotalElementCount;
    // CUtlVector< char* > m_szChannelClass;
    // CUtlVector< char* > m_szVariableName;
    // CUtlVector< fieldtype_t > m_nType;
    // CUtlVector< int32 > m_nFlags;
    // CUtlVector< CUtlString > m_szGrouping;
    // CUtlVector< int32 > m_nCompressorIndex;
    // CUtlVector< CUtlVector< char* > > m_szElementNames;
    // CUtlVector< CUtlVector< int32 > > m_nElementUniqueID;
    // CUtlVector< uint32 > m_nElementMask;
    // CUtlVector< CCompressor< Vector >* > m_vectorCompressor;
    // CUtlVector< CCompressor< QuaternionStorage >* > m_quaternionCompressor;
    // CUtlVector< CCompressor< int32 >* > m_intCompressor;
    // CUtlVector< CCompressor< bool >* > m_boolCompressor;
    // CUtlVector< CCompressor< Color >* > m_colorCompressor;
    // CUtlVector< CCompressor< Vector2D >* > m_vector2DCompressor;
    // CUtlVector< CCompressor< Vector4D >* > m_vector4DCompressor;
    char pad_00[412];
};

class CAnimEnum {
public:
    uint8_t m_value;
};

class FollowAttachmentData {
public:
    int32_t m_boneIndex;
    AttachmentHandle_t m_attachmentHandle;
    char pad_00[3];
};

class CPulseExecCursor {
public:
    char pad_00[208];
};

class CPulse_RegisterInfo {
public:
    PulseRuntimeRegisterIndex_t m_nReg;
    // CPulseValueFullType m_Type;
    // CKV3MemberNameWithStorage m_OriginName;
    char pad_00[84];
    int32_t m_nWrittenByInstruction;
    int32_t m_nLastReadByInstruction;
};

class PulseRuntimeRegisterIndex_t {
public:
    int16_t m_Value;
};

class CPulse_InstructionDebug {
public:
    PulseDocNodeID_t m_nFlowNodeID;
    PulseDocNodeID_t m_nValueNodeID;
    // CGlobalSymbol m_SequencePointName;
    char pad_00[8];
};

class PulseDocNodeID_t {
public:
    int32_t m_Value;
};

class CPulse_Chunk {
public:
    // CUtlLeanVector< PGDInstruction_t > m_Instructions;
    // CUtlLeanVector< CPulse_RegisterInfo > m_Registers;
    // CUtlLeanVector< CPulse_InstructionDebug > m_InstructionDebugInfos;
    char pad_00[88];
};

class PGDInstruction_t {
public:
    PulseInstructionCode_t m_nCode;
    PulseRuntimeVarIndex_t m_nVar;
    PulseRuntimeRegisterIndex_t m_nReg0;
    PulseRuntimeRegisterIndex_t m_nReg1;
    PulseRuntimeRegisterIndex_t m_nReg2;
    PulseRuntimeInvokeIndex_t m_nInvokeBindingIndex;
    PulseRuntimeChunkIndex_t m_nChunk;
    int32_t m_nDestInstruction;
    PulseRuntimeCallInfoIndex_t m_nCallInfoIndex;
    PulseRuntimeConstantIndex_t m_nConstIdx;
    PulseRuntimeDomainValueIndex_t m_nDomainValueIdx;
    PulseRuntimeBlackboardReferenceIndex_t m_nBlackboardReferenceIdx;
    char pad_00[18];
};

class CPulse_Variable {
public:
    // PulseSymbol_t m_Name;
    // CUtlString m_Description;
    // CPulseValueFullType m_Type;
    // KeyValues3 m_DefaultValue;
    char pad_00[68];
    PulseVariableKeysSource_t m_nKeysSource;
    bool m_bIsPublicBlackboardVariable;
    bool m_bIsObservable;
    PulseDocNodeID_t m_nEditorNodeID;
};

class CPulse_Constant {
public:
    // CPulseValueFullType m_Type;
    // KeyValues3 m_Value;
    char pad_00[48];
};

class CPulse_DomainValue {
public:
    PulseDomainValueType_t m_nType;
    // CGlobalSymbolCaseSensitive m_Value;
    // CPulseValueFullType m_RequiredRuntimeType;
    char pad_00[44];
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

class CPulseRuntimeMethodArg {
public:
    // CKV3MemberNameWithStorage m_Name;
    // CUtlString m_Description;
    // CPulseValueFullType m_Type;
    char pad_00[128];
};

class CPulse_PublicOutput {
public:
    // PulseSymbol_t m_Name;
    // CUtlString m_Description;
    // CUtlLeanVector< CPulseRuntimeMethodArg > m_Args;
    char pad_00[40];
};

class CPulse_OutputConnection {
public:
    // PulseSymbol_t m_SourceOutput;
    // PulseSymbol_t m_TargetEntity;
    // PulseSymbol_t m_TargetInput;
    // PulseSymbol_t m_Param;
    char pad_00[64];
};

class PulseRegisterMap_t {
public:
    // KeyValues3 m_Inparams;
    // CKV3MemberNameSet m_InparamsWhichCanBeMoved;
    // KeyValues3 m_Outparams;
    char pad_00[48];
};

class PulseRuntimeCellIndex_t {
public:
    int32_t m_Value;
};

class PulseRuntimeChunkIndex_t {
public:
    int32_t m_Value;
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

class PulseGraphExecutionHistoryEntry_t {
public:
    PulseCursorID_t nCursorID;
    PulseDocNodeID_t nEditorID;
    float flExecTime;
    uint32_t unFlags;
    // PulseSymbol_t tagName;
    char pad_00[16];
};

class PulseCursorID_t {
public:
    int32_t m_Value;
};

class PulseGraphExecutionHistoryNodeDesc_t {
public:
    // CBufferString strCellDesc;
    // PulseSymbol_t strBindingName;
    char pad_00[32];
};

class PulseGraphExecutionHistoryCursorDesc_t {
public:
    // CUtlVector< PulseCursorID_t > vecAncestorCursorIDs;
    char pad_00[24];
    PulseDocNodeID_t nSpawnNodeID;
    PulseDocNodeID_t nRetiredAtNodeID;
    float flLastReferenced;
    int32_t nLastValidEntryIdx;
};

class CPulseGraphExecutionHistory {
public:
    PulseGraphInstanceID_t m_nInstanceID;
    // CUtlString m_strFileName;
    // CUtlVector< PulseGraphExecutionHistoryEntry_t* > m_vecHistory;
    // CUtlOrderedMap< PulseDocNodeID_t, PulseGraphExecutionHistoryNodeDesc_t* > m_mapCellDesc;
    // CUtlOrderedMap< PulseCursorID_t, PulseGraphExecutionHistoryCursorDesc_t* > m_mapCursorDesc;
    char pad_00[116];
};

class PulseGraphInstanceID_t {
public:
    uint32_t m_Value;
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

class PulseRuntimeCallInfoIndex_t {
public:
    int32_t m_Value;
};

class PulseRuntimeVarIndex_t {
public:
    int32_t m_Value;
};

class PulseRuntimeOutputIndex_t {
public:
    int32_t m_Value;
};

class PulseRuntimeStateOffset_t {
public:
    uint16_t m_Value;
};

class PulseRuntimeConstantIndex_t {
public:
    int16_t m_Value;
};

class PulseRuntimeDomainValueIndex_t {
public:
    int16_t m_Value;
};

class PulseRuntimeBlackboardReferenceIndex_t {
public:
    int16_t m_Value;
};

class PulseRuntimeInvokeIndex_t {
public:
    int32_t m_Value;
};

class PulseRuntimeEntrypointIndex_t {
public:
    int32_t m_Value;
};

class PulseCursorYieldToken_t {
public:
    int32_t m_Value;
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

class CParticleInput {
public:
    char pad_00[16];
};

class CParticleFloatInput {
public:
    char pad_00[16];
    ParticleFloatType_t m_nType;
    ParticleFloatMapType_t m_nMapType;
    float m_flLiteralValue;
    // CParticleNamedValueRef m_NamedValue;
    char pad_01[68];
    int32_t m_nControlPoint;
    ParticleAttributeIndex_t m_nScalarAttribute;
    ParticleAttributeIndex_t m_nVectorAttribute;
    int32_t m_nVectorComponent;
    bool m_bReverseOrder;
    float m_flRandomMin;
    float m_flRandomMax;
    bool m_bHasRandomSignFlip;
    int32_t m_nRandomSeed;
    ParticleFloatRandomMode_t m_nRandomMode;
    // CUtlString m_strSnapshotSubset;
    char pad_02[16];
    float m_flLOD0;
    float m_flLOD1;
    float m_flLOD2;
    float m_flLOD3;
    ParticleAttributeIndex_t m_nNoiseInputVectorAttribute;
    float m_flNoiseOutputMin;
    float m_flNoiseOutputMax;
    float m_flNoiseScale;
    // Vector m_vecNoiseOffsetRate;
    char pad_03[12];
    float m_flNoiseOffset;
    int32_t m_nNoiseOctaves;
    PFNoiseTurbulence_t m_nNoiseTurbulence;
    PFNoiseType_t m_nNoiseType;
    PFNoiseModifier_t m_nNoiseModifier;
    float m_flNoiseTurbulenceScale;
    float m_flNoiseTurbulenceMix;
    float m_flNoiseImgPreviewScale;
    bool m_bNoiseImgPreviewLive;
    char pad_04[8];
    float m_flNoCameraFallback;
    bool m_bUseBoundsCenter;
    ParticleFloatInputMode_t m_nInputMode;
    float m_flMultFactor;
    float m_flInput0;
    float m_flInput1;
    float m_flOutput0;
    float m_flOutput1;
    float m_flNotchedRangeMin;
    float m_flNotchedRangeMax;
    float m_flNotchedOutputOutside;
    float m_flNotchedOutputInside;
    ParticleFloatRoundType_t m_nRoundType;
    ParticleFloatBiasType_t m_nBiasType;
    float m_flBiasParameter;
    // CPiecewiseCurve m_Curve;
    char pad_05[68];
};

class CPerParticleFloatInput {
public:
    char pad_00[368];
};

class CParticleCollectionFloatInput {
public:
    char pad_00[368];
};

class CParticleCollectionRendererFloatInput {
public:
    char pad_00[368];
};

class CParticleRemapFloatInput {
public:
    char pad_00[368];
};

class CParticleTransformInput {
public:
    char pad_00[16];
    ParticleTransformType_t m_nType;
    // CParticleNamedValueRef m_NamedValue;
    char pad_01[68];
    bool m_bFollowNamedValue;
    bool m_bSupportsDisabled;
    bool m_bUseOrientation;
    int32_t m_nControlPoint;
    int32_t m_nControlPointRangeMax;
    float m_flEndCPGrowthTime;
};

class CParticleModelInput {
public:
    char pad_00[16];
    ParticleModelType_t m_nType;
    // CParticleNamedValueRef m_NamedValue;
    char pad_01[68];
    int32_t m_nControlPoint;
    char pad_02[4];
};

class CParticleVecInput {
public:
    char pad_00[16];
    ParticleVecType_t m_nType;
    // Vector m_vLiteralValue;
    // Color m_LiteralColor;
    // CParticleNamedValueRef m_NamedValue;
    char pad_01[84];
    bool m_bFollowNamedValue;
    ParticleAttributeIndex_t m_nVectorAttribute;
    // Vector m_vVectorAttributeScale;
    char pad_02[12];
    int32_t m_nControlPoint;
    int32_t m_nDeltaControlPoint;
    // Vector m_vCPValueScale;
    // Vector m_vCPRelativePosition;
    // Vector m_vCPRelativeDir;
    char pad_03[32];
    CParticleFloatInput m_FloatComponentX;
    CParticleFloatInput m_FloatComponentY;
    CParticleFloatInput m_FloatComponentZ;
    CParticleFloatInput m_FloatInterp;
    float m_flInterpInput0;
    float m_flInterpInput1;
    // Vector m_vInterpOutput0;
    // Vector m_vInterpOutput1;
    // CColorGradient m_Gradient;
    // Vector m_vRandomMin;
    // Vector m_vRandomMax;
    char pad_04[72];
};

class CPerParticleVecInput {
public:
    char pad_00[1720];
};

class CParticleCollectionVecInput {
public:
    char pad_00[1720];
};

class CParticleCollectionRendererVecInput {
public:
    char pad_00[1720];
};

class PARTICLE_EHANDLE__ {
public:
    int32_t unused;
};

class IParticleEffect {
public:
    char pad_00[8];
};

class CParticleCollectionBindingInstance {
public:
    char pad_00[312];
};

class CParticleBindingRealPulse {
public:
    char pad_00[312];
};

class ParticleNamedValueConfiguration_t {
public:
    // CUtlString m_ConfigName;
    // KeyValues3 m_ConfigValue;
    // CUtlString m_BoundValuePath;
    char pad_00[32];
    ParticleAttachment_t m_iAttachType;
    // CUtlString m_strEntityScope;
    // CUtlString m_strAttachmentName;
    char pad_01[20];
};

class ParticleNamedValueSource_t {
public:
    // CUtlString m_Name;
    char pad_00[8];
    bool m_IsPublic;
    // CPulseValueFullType m_ValueType;
    char pad_01[24];
    ParticleNamedValueConfiguration_t m_DefaultConfig;
};

class CParticleVariableRef {
public:
    // CKV3MemberNameWithStorage m_variableName;
    // CPulseValueFullType m_variableType;
    char pad_00[80];
};

class CParticleProperty {
public:
    char pad_00[40];
};

class CNewParticleEffect {
public:
    char pad_00[16];
    CNewParticleEffect* m_pNext;
    CNewParticleEffect* m_pPrev;
    IParticleCollection* m_pParticles;
    char* m_pDebugName;
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
    // Vector m_vSortOrigin;
    char pad_01[28];
    float m_flScale;
    PARTICLE_EHANDLE__* m_hOwner;
    CParticleProperty* m_pOwningParticleProperty;
    char pad_02[16];
    float m_flFreezeTransitionStart;
    float m_flFreezeTransitionDuration;
    float m_flFreezeTransitionOverride;
    // Vector m_LastMin;
    // Vector m_LastMax;
    // CSplitScreenSlot m_nSplitScreenUser;
    // Vector m_vecAggregationCenter;
    char pad_03[84];
    int32_t m_RefCount;
    char pad_04[4];
};

class IParticleCollection {
public:
    char pad_00[16];
};

class AnimNodeID {
public:
    uint32_t m_id;
};

class AnimNodeOutputID {
public:
    uint32_t m_id;
};

class AnimStateID {
public:
    uint32_t m_id;
};

class AnimTagID {
public:
    uint32_t m_id;
};

class AnimComponentID {
public:
    uint32_t m_id;
};

class AnimScriptHandle {
public:
    uint32_t m_id;
};

class CAnimAttachment {
public:
    // Quaternion[3] m_influenceRotations;
    // VectorAligned[3] m_influenceOffsets;
    char pad_00[96];
    int32_t m_influenceIndices[3];
    float m_influenceWeights[3];
    uint8_t m_numInfluences;
    char pad_01[7];
};

class VPhysics2ShapeDef_t {
public:
    // CUtlVector< RnSphereDesc_t > m_spheres;
    // CUtlVector< RnCapsuleDesc_t > m_capsules;
    // CUtlVector< RnHullDesc_t > m_hulls;
    // CUtlVector< RnMeshDesc_t > m_meshes;
    // CUtlVector< uint16 > m_CollisionAttributeIndices;
    char pad_00[120];
};

class RnSphereDesc_t {
public:
    // SphereBase_t< float32 > m_Sphere;
    char pad_00[40];
};

class RnCapsuleDesc_t {
public:
    char pad_00[24];
    RnCapsule_t m_Capsule;
    char pad_01[4];
};

class RnHullDesc_t {
public:
    char pad_00[24];
    RnHull_t m_Hull;
};

class RnMeshDesc_t {
public:
    char pad_00[24];
    RnMesh_t m_Mesh;
};

class VPhysXBodyPart_t {
public:
    uint32_t m_nFlags;
    float m_flMass;
    VPhysics2ShapeDef_t m_rnShape;
    uint16_t m_nCollisionAttributeIndex;
    uint16_t m_nReserved;
    float m_flInertiaScale;
    float m_flLinearDamping;
    float m_flAngularDamping;
    float m_flLinearDrag;
    float m_flAngularDrag;
    bool m_bOverrideMassCenter;
    // Vector m_vMassCenterOverride;
    char pad_00[15];
};

class VPhysXCollisionAttributes_t {
public:
    int32_t m_nIncludeDetailLayerCount;
    uint32_t m_CollisionGroup;
    // CUtlVector< uint32 > m_InteractAs;
    // CUtlVector< uint32 > m_InteractWith;
    // CUtlVector< uint32 > m_InteractExclude;
    // CUtlVector< uint32 > m_DetailLayers;
    // CUtlString m_CollisionGroupString;
    // CUtlVector< CUtlString > m_InteractAsStrings;
    // CUtlVector< CUtlString > m_InteractWithStrings;
    // CUtlVector< CUtlString > m_InteractExcludeStrings;
    // CUtlVector< CUtlString > m_DetailLayerStrings;
    char pad_00[200];
};

class VPhysXRange_t {
public:
    float m_flMin;
    float m_flMax;
};

class VPhysXConstraintParams_t {
public:
    int8_t m_nType;
    int8_t m_nTranslateMotion;
    int8_t m_nRotateMotion;
    int8_t m_nFlags;
    // Vector[2] m_anchor;
    // QuaternionStorage[2] m_axes;
    char pad_00[56];
    float m_maxForce;
    float m_maxTorque;
    float m_linearLimitValue;
    float m_linearLimitRestitution;
    float m_linearLimitSpring;
    float m_linearLimitDamping;
    float m_twistLowLimitValue;
    float m_twistLowLimitRestitution;
    float m_twistLowLimitSpring;
    float m_twistLowLimitDamping;
    float m_twistHighLimitValue;
    float m_twistHighLimitRestitution;
    float m_twistHighLimitSpring;
    float m_twistHighLimitDamping;
    float m_swing1LimitValue;
    float m_swing1LimitRestitution;
    float m_swing1LimitSpring;
    float m_swing1LimitDamping;
    float m_swing2LimitValue;
    float m_swing2LimitRestitution;
    float m_swing2LimitSpring;
    float m_swing2LimitDamping;
    // Vector m_goalPosition;
    // QuaternionStorage m_goalOrientation;
    // Vector m_goalAngularVelocity;
    char pad_01[40];
    float m_driveSpringX;
    float m_driveSpringY;
    float m_driveSpringZ;
    float m_driveDampingX;
    float m_driveDampingY;
    float m_driveDampingZ;
    float m_driveSpringTwist;
    float m_driveSpringSwing;
    float m_driveSpringSlerp;
    float m_driveDampingTwist;
    float m_driveDampingSwing;
    float m_driveDampingSlerp;
    int32_t m_solverIterationCount;
    float m_projectionLinearTolerance;
    float m_projectionAngularTolerance;
};

class VPhysXConstraint2_t {
public:
    uint32_t m_nFlags;
    uint16_t m_nParent;
    uint16_t m_nChild;
    VPhysXConstraintParams_t m_params;
};

class VPhysXJoint_t {
public:
    uint16_t m_nType;
    uint16_t m_nBody1;
    uint16_t m_nBody2;
    uint16_t m_nFlags;
    // CTransform m_Frame1;
    // CTransform m_Frame2;
    char pad_00[72];
    bool m_bEnableCollision;
    bool m_bIsLinearConstraintDisabled;
    bool m_bIsAngularConstraintDisabled;
    bool m_bEnableLinearLimit;
    VPhysXRange_t m_LinearLimit;
    bool m_bEnableLinearMotor;
    // Vector m_vLinearTargetVelocity;
    char pad_01[12];
    float m_flMaxForce;
    bool m_bEnableSwingLimit;
    VPhysXRange_t m_SwingLimit;
    bool m_bEnableTwistLimit;
    VPhysXRange_t m_TwistLimit;
    bool m_bEnableAngularMotor;
    // Vector m_vAngularTargetVelocity;
    char pad_02[12];
    float m_flMaxTorque;
    float m_flLinearFrequency;
    float m_flLinearDampingRatio;
    float m_flAngularFrequency;
    float m_flAngularDampingRatio;
    float m_flFriction;
    float m_flElasticity;
    float m_flElasticDamping;
    float m_flPlasticity;
    // CUtlString m_Tag;
    char pad_03[20];
};

class PhysSoftbodyDesc_t {
public:
    // CUtlVector< uint32 > m_ParticleBoneHash;
    // CUtlVector< RnSoftbodyParticle_t > m_Particles;
    // CUtlVector< RnSoftbodySpring_t > m_Springs;
    // CUtlVector< RnSoftbodyCapsule_t > m_Capsules;
    // CUtlVector< CTransform > m_InitPose;
    // CUtlVector< CUtlString > m_ParticleBoneName;
    char pad_00[144];
};

class RnSoftbodyParticle_t {
public:
    float m_flMassInv;
};

class RnSoftbodySpring_t {
public:
    uint16_t m_nParticle[2];
    float m_flLength;
};

class RnSoftbodyCapsule_t {
public:
    // Vector[2] m_vCenter;
    char pad_00[24];
    float m_flRadius;
    uint16_t m_nParticle[2];
};

class PhysShapeMarkup_t {
public:
    int32_t m_nBodyInAggregate;
    int32_t m_nShapeInBody;
    // CGlobalSymbol m_sHitGroup;
    char pad_00[8];
};

class VPhysXAggregateData_t {
public:
    uint16_t m_nFlags;
    uint16_t m_nRefCounter;
    // CUtlVector< uint32 > m_bonesHash;
    // CUtlVector< CUtlString > m_boneNames;
    // CUtlVector< uint16 > m_indexNames;
    // CUtlVector< uint16 > m_indexHash;
    // CUtlVector< matrix3x4a_t > m_bindPose;
    // CUtlVector< VPhysXBodyPart_t > m_parts;
    // CUtlVector< PhysShapeMarkup_t > m_shapeMarkups;
    // CUtlVector< VPhysXConstraint2_t > m_constraints2;
    // CUtlVector< VPhysXJoint_t > m_joints;
    char pad_00[216];
    PhysFeModelDesc_t* m_pFeModel;
    // CUtlVector< uint16 > m_boneParents;
    // CUtlVector< uint32 > m_surfacePropertyHashes;
    // CUtlVector< VPhysXCollisionAttributes_t > m_collisionAttributes;
    // CUtlVector< CUtlString > m_debugPartNames;
    // CUtlString m_embeddedKeyvalues;
    char pad_01[104];
};

class PhysFeModelDesc_t {
public:
    // CUtlVector< uint32 > m_CtrlHash;
    // CUtlVector< CUtlString > m_CtrlName;
    char pad_00[48];
    uint32_t m_nStaticNodeFlags;
    uint32_t m_nDynamicNodeFlags;
    float m_flLocalForce;
    float m_flLocalRotation;
    uint16_t m_nNodeCount;
    uint16_t m_nStaticNodes;
    uint16_t m_nRotLockStaticNodes;
    uint16_t m_nFirstPositionDrivenNode;
    uint16_t m_nSimdTriCount1;
    uint16_t m_nSimdTriCount2;
    uint16_t m_nSimdQuadCount1;
    uint16_t m_nSimdQuadCount2;
    uint16_t m_nQuadCount1;
    uint16_t m_nQuadCount2;
    uint16_t m_nTreeDepth;
    uint16_t m_nNodeBaseJiggleboneDependsCount;
    uint16_t m_nRopeCount;
    // CUtlVector< uint16 > m_Ropes;
    // CUtlVector< FeNodeBase_t > m_NodeBases;
    // CUtlVector< FeSimdNodeBase_t > m_SimdNodeBases;
    // CUtlVector< FeQuad_t > m_Quads;
    // CUtlVector< FeSimdQuad_t > m_SimdQuads;
    // CUtlVector< FeSimdTri_t > m_SimdTris;
    // CUtlVector< FeSimdRodConstraint_t > m_SimdRods;
    // CUtlVector< FeSimdRodConstraintAnim_t > m_SimdRodsAnim;
    // CUtlVector< CTransform > m_InitPose;
    // CUtlVector< FeRodConstraint_t > m_Rods;
    // CUtlVector< FeTwistConstraint_t > m_Twists;
    // CUtlVector< FeHingeLimit_t > m_HingeLimits;
    // CUtlVector< uint32 > m_AntiTunnelBytecode;
    // CUtlVector< FeDynKinLink_t > m_DynKinLinks;
    // CUtlVector< FeAntiTunnelProbe_t > m_AntiTunnelProbes;
    // CUtlVector< uint16 > m_AntiTunnelTargetNodes;
    // CUtlVector< FeNodeStrayBox_t > m_NodeStrayBoxes;
    // CUtlVector< FeAxialEdgeBend_t > m_AxialEdges;
    // CUtlVector< float32 > m_NodeInvMasses;
    // CUtlVector< FeCtrlOffset_t > m_CtrlOffsets;
    // CUtlVector< FeCtrlOsOffset_t > m_CtrlOsOffsets;
    // CUtlVector< FeFollowNode_t > m_FollowNodes;
    // CUtlVector< FeCollisionPlane_t > m_CollisionPlanes;
    // CUtlVector< FeNodeIntegrator_t > m_NodeIntegrator;
    // CUtlVector< FeSpringIntegrator_t > m_SpringIntegrator;
    // CUtlVector< FeSimdSpringIntegrator_t > m_SimdSpringIntegrator;
    // CUtlVector< FeWorldCollisionParams_t > m_WorldCollisionParams;
    // CUtlVector< float32 > m_LegacyStretchForce;
    // CUtlVector< float32 > m_NodeCollisionRadii;
    // CUtlVector< float32 > m_DynNodeFriction;
    // CUtlVector< float32 > m_LocalRotation;
    // CUtlVector< float32 > m_LocalForce;
    // CUtlVector< FeTaperedCapsuleStretch_t > m_TaperedCapsuleStretches;
    // CUtlVector< FeTaperedCapsuleRigid_t > m_TaperedCapsuleRigids;
    // CUtlVector< FeSphereRigid_t > m_SphereRigids;
    // CUtlVector< uint16 > m_WorldCollisionNodes;
    // CUtlVector< uint16 > m_TreeParents;
    // CUtlVector< uint16 > m_TreeCollisionMasks;
    // CUtlVector< FeTreeChildren_t > m_TreeChildren;
    // CUtlVector< uint16 > m_FreeNodes;
    // CUtlVector< FeFitMatrix_t > m_FitMatrices;
    // CUtlVector< FeFitWeight_t > m_FitWeights;
    // CUtlVector< FeNodeReverseOffset_t > m_ReverseOffsets;
    // CUtlVector< FeAnimStrayRadius_t > m_AnimStrayRadii;
    // CUtlVector< FeSimdAnimStrayRadius_t > m_SimdAnimStrayRadii;
    // CUtlVector< FeKelagerBend2_t > m_KelagerBends;
    // CUtlVector< FeCtrlSoftOffset_t > m_CtrlSoftOffsets;
    // CUtlVector< CFeIndexedJiggleBone > m_JiggleBones;
    // CUtlVector< uint16 > m_SourceElems;
    // CUtlVector< uint32 > m_GoalDampedSpringIntegrators;
    // CUtlVector< FeTri_t > m_Tris;
    char pad_01[1230];
    uint16_t m_nTriCount1;
    uint16_t m_nTriCount2;
    uint8_t m_nReservedUint8;
    uint8_t m_nExtraPressureIterations;
    uint8_t m_nExtraGoalIterations;
    uint8_t m_nExtraIterations;
    // CUtlVector< FeSDFRigid_t > m_SDFRigids;
    // CUtlVector< FeBoxRigid_t > m_BoxRigids;
    // CUtlVector< uint8 > m_DynNodeVertexSet;
    // CUtlVector< uint32 > m_VertexSetNames;
    // CUtlVector< FeRigidColliderIndices_t > m_RigidColliderPriorities;
    // CUtlVector< FeMorphLayerDepr_t > m_MorphLayers;
    // CUtlVector< uint8 > m_MorphSetData;
    // CUtlVector< FeVertexMapDesc_t > m_VertexMaps;
    // CUtlVector< uint8 > m_VertexMapValues;
    // CUtlVector< FeEffectDesc_t > m_Effects;
    // CUtlVector< FeCtrlOffset_t > m_LockToParent;
    // CUtlVector< uint16 > m_LockToGoal;
    // CUtlVector< int16 > m_SkelParents;
    // CUtlVector< FeNodeWindBase_t > m_DynNodeWindBases;
    // CUtlVector< FeModelSelfCollisionLayer_t > m_SelfCollisionLayers;
    char pad_02[360];
    float m_flInternalPressure;
    float m_flDefaultTimeDilation;
    float m_flWindage;
    float m_flWindDrag;
    float m_flDefaultSurfaceStretch;
    float m_flDefaultThreadStretch;
    float m_flDefaultGravityScale;
    float m_flDefaultVelAirDrag;
    float m_flDefaultExpAirDrag;
    float m_flDefaultVelQuadAirDrag;
    float m_flDefaultExpQuadAirDrag;
    float m_flRodVelocitySmoothRate;
    float m_flQuadVelocitySmoothRate;
    float m_flAddWorldCollisionRadius;
    float m_flDefaultVolumetricSolveAmount;
    float m_flMotionSmoothCDT;
    float m_flLocalDrag1;
    uint16_t m_nRodVelocitySmoothIterations;
    uint16_t m_nQuadVelocitySmoothIterations;
};

class CPhysSurfacePropertiesPhysics {
public:
    float m_friction;
    float m_elasticity;
    float m_density;
    float m_thickness;
    float m_softContactFrequency;
    float m_softContactDampingRatio;
};

class CPhysSurfacePropertiesVehicle {
public:
    float m_wheelDrag;
    float m_wheelFrictionScale;
};

class CPhysSurfacePropertiesAudio {
public:
    float m_reflectivity;
    float m_hardnessFactor;
    float m_roughnessFactor;
    float m_roughThreshold;
    float m_hardThreshold;
    float m_hardVelocityThreshold;
    float m_flStaticImpactVolume;
    float m_flOcclusionFactor;
};

class CPhysSurfacePropertiesSoundNames {
public:
    // CUtlString m_impactSoft;
    // CUtlString m_impactHard;
    // CUtlString m_scrapeSmooth;
    // CUtlString m_scrapeRough;
    // CUtlString m_bulletImpact;
    // CUtlString m_rolling;
    // CUtlString m_break;
    // CUtlString m_strain;
    // CUtlString m_meleeImpact;
    // CUtlString m_pushOff;
    // CUtlString m_skidStop;
    // CUtlString m_resonant;
    char pad_00[96];
};

class CPhysSurfaceProperties {
public:
    // CUtlString m_name;
    char pad_00[8];
    uint32_t m_nameHash;
    uint32_t m_baseNameHash;
    char pad_01[8];
    bool m_bHidden;
    // CUtlString m_description;
    char pad_02[12];
    CPhysSurfacePropertiesPhysics m_physics;
    CPhysSurfacePropertiesVehicle m_vehicleParams;
    CPhysSurfacePropertiesSoundNames m_audioSounds;
    CPhysSurfacePropertiesAudio m_audioParams;
};

class CVPhysXSurfacePropertiesList {
public:
    // CUtlVector< CPhysSurfaceProperties* > m_surfacePropertiesList;
    char pad_00[24];
};

class ModelAnimGraph2Ref_t {
public:
    // CUtlString m_sIdentifier;
    // CStrongHandle< InfoForResourceTypeCNmGraphDefinition > m_hGraph;
    char pad_00[16];
};

class MaterialGroup_t {
public:
    // CUtlString m_name;
    // CUtlVector< CStrongHandle< InfoForResourceTypeIMaterial2 > > m_materials;
    char pad_00[32];
};

class ModelSkeletonData_t {
public:
    // CUtlVector< CUtlString > m_boneName;
    // CUtlVector< int16 > m_nParent;
    // CUtlVector< float32 > m_boneSphere;
    // CUtlVector< uint32 > m_nFlag;
    // CUtlVector< Vector > m_bonePosParent;
    // CUtlVector< QuaternionStorage > m_boneRotParent;
    // CUtlVector< float32 > m_boneScaleParent;
    char pad_00[168];
};

class PermModelInfo_t {
public:
    uint32_t m_nFlags;
    // Vector m_vHullMin;
    // Vector m_vHullMax;
    // Vector m_vViewMin;
    // Vector m_vViewMax;
    char pad_00[48];
    float m_flMass;
    // Vector m_vEyePosition;
    char pad_01[12];
    float m_flMaxEyeDeflection;
    // CUtlString m_sSurfaceProperty;
    // CUtlString m_keyValueText;
    char pad_02[16];
};

class PermModelExtPart_t {
public:
    // CTransform m_Transform;
    // CUtlString m_Name;
    char pad_00[40];
    int32_t m_nParent;
    // CStrongHandle< InfoForResourceTypeCModel > m_refModel;
    char pad_01[20];
};

class ModelBoneFlexDriverControl_t {
public:
    ModelBoneFlexComponent_t m_nBoneComponent;
    // CUtlString m_flexController;
    char pad_00[12];
    uint32_t m_flexControllerToken;
    float m_flMin;
    float m_flMax;
    char pad_01[4];
};

class ModelBoneFlexDriver_t {
public:
    // CUtlString m_boneName;
    char pad_00[8];
    uint32_t m_boneNameToken;
    // CUtlVector< ModelBoneFlexDriverControl_t > m_controls;
    char pad_01[28];
};

class PermModelDataAnimatedMaterialAttribute_t {
public:
    // CUtlString m_AttributeName;
    char pad_00[8];
    int32_t m_nNumChannels;
    char pad_01[4];
};

class PermModelData_t {
public:
    // CUtlString m_name;
    char pad_00[8];
    PermModelInfo_t m_modelInfo;
    // CUtlVector< PermModelExtPart_t > m_ExtParts;
    // CUtlVector< CStrongHandle< InfoForResourceTypeCRenderMesh > > m_refMeshes;
    // CUtlVector< uint64 > m_refMeshGroupMasks;
    // CUtlVector< uint64 > m_refPhysGroupMasks;
    // CUtlVector< uint8 > m_refLODGroupMasks;
    // CUtlVector< float32 > m_lodGroupSwitchDistances;
    // CUtlVector< CStrongHandle< InfoForResourceTypeCPhysAggregateData > > m_refPhysicsData;
    // CUtlVector< CStrongHandle< InfoForResourceTypeCPhysAggregateData > > m_refPhysicsHitboxData;
    // CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > > m_refAnimGroups;
    // CUtlVector< CStrongHandle< InfoForResourceTypeCSequenceGroupData > > m_refSequenceGroups;
    // CUtlVector< CUtlString > m_meshGroups;
    // CUtlVector< MaterialGroup_t > m_materialGroups;
    char pad_01[288];
    uint64_t m_nDefaultMeshGroupMask;
    ModelSkeletonData_t m_modelSkeleton;
    // CUtlVector< int16 > m_remappingTable;
    // CUtlVector< uint16 > m_remappingTableStarts;
    // CUtlVector< ModelBoneFlexDriver_t > m_boneFlexDrivers;
    char pad_02[72];
    CModelConfigList* m_pModelConfigList;
    // CUtlVector< CUtlString > m_BodyGroupsHiddenInTools;
    // CUtlVector< CStrongHandle< InfoForResourceTypeCModel > > m_refAnimIncludeModels;
    // CUtlVector< PermModelDataAnimatedMaterialAttribute_t > m_AnimatedMaterialAttributes;
    // CUtlVector< ModelAnimGraph2Ref_t > m_animGraph2Refs;
    // CUtlVector< CStrongHandle< InfoForResourceTypeCNmSkeleton > > m_vecNmSkeletonRefs;
    char pad_03[120];
};

class CModelConfigList {
public:
    bool m_bHideMaterialGroupInTools;
    bool m_bHideRenderColorInTools;
    // CUtlVector< CModelConfig* > m_Configs;
    char pad_00[30];
};

class ModelMeshBufferData_t {
public:
    int32_t m_nBlockIndex;
    uint32_t m_nElementCount;
    uint32_t m_nElementSizeInBytes;
    bool m_bMeshoptCompressed;
    bool m_bMeshoptIndexSequence;
    bool m_bCompressedZSTD;
    bool m_bCreateBufferSRV;
    bool m_bCreateBufferUAV;
    bool m_bCreateRawBuffer;
    bool m_bCreatePooledBuffer;
    uint8_t m_nBufferUsage;
    // CUtlVector< RenderInputLayoutField_t > m_inputLayoutFields;
    char pad_00[28];
};

class ModelEmbeddedMesh_t {
public:
    // CUtlString m_Name;
    char pad_00[16];
    int32_t m_nMeshIndex;
    int32_t m_nDataBlock;
    int32_t m_nMorphBlock;
    // CUtlVector< ModelMeshBufferData_t > m_vertexBuffers;
    // CUtlVector< ModelMeshBufferData_t > m_indexBuffers;
    // CUtlVector< ModelMeshBufferData_t > m_toolsBuffers;
    char pad_01[76];
    int32_t m_nVBIBBlock;
    int32_t m_nToolsVBBlock;
};

class CModelConfigElement {
public:
    // CUtlString m_ElementName;
    // CUtlVector< CModelConfigElement* > m_NestedElements;
    char pad_00[72];
};

class CModelConfigElement_AttachedModel {
public:
    // CUtlString m_InstanceName;
    // CUtlString m_EntityClass;
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    // Vector m_vOffset;
    // QAngle m_aAngOffset;
    // CUtlString m_AttachmentName;
    // CUtlString m_LocalAttachmentOffsetName;
    char pad_00[136];
    ModelConfigAttachmentType_t m_AttachmentType;
    bool m_bBoneMergeFlex;
    bool m_bUserSpecifiedColor;
    bool m_bUserSpecifiedMaterialGroup;
    // CUtlString m_BodygroupOnOtherModels;
    // CUtlString m_MaterialGroupOnOtherModels;
    char pad_01[89];
};

class CModelConfigElement_UserPick {
public:
    // CUtlVector< CUtlString > m_Choices;
    char pad_00[96];
};

class CModelConfigElement_RandomPick {
public:
    // CUtlVector< CUtlString > m_Choices;
    // CUtlVector< float32 > m_ChoiceWeights;
    char pad_00[128];
};

class CModelConfigElement_SetMaterialGroup {
public:
    // CUtlString m_MaterialGroupName;
    char pad_00[80];
};

class CModelConfigElement_SetMaterialGroupOnAttachedModels {
public:
    // CUtlString m_MaterialGroupName;
    char pad_00[80];
};

class CModelConfigElement_SetRenderColor {
public:
    // Color m_Color;
    char pad_00[80];
};

class CModelConfigElement_RandomColor {
public:
    // CColorGradient m_Gradient;
    char pad_00[96];
};

class CModelConfigElement_SetBodygroup {
public:
    // CGlobalSymbol m_GroupName;
    char pad_00[80];
    int32_t m_nChoice;
    char pad_01[4];
};

class CModelConfigElement_SetBodygroupOnAttachedModels {
public:
    // CUtlString m_GroupName;
    char pad_00[80];
    int32_t m_nChoice;
    char pad_01[4];
};

class CModelConfigElement_Command {
public:
    // CUtlString m_Command;
    // KeyValues3 m_Args;
    char pad_00[96];
};

class CModelConfig {
public:
    // CUtlString m_ConfigName;
    // CUtlVector< CModelConfigElement* > m_Elements;
    char pad_00[32];
    bool m_bTopLevel;
    bool m_bActiveInEditorByDefault;
    char pad_01[6];
};

class CRenderBufferBinding {
public:
    uint64_t m_hBuffer;
    char pad_00[8];
    uint32_t m_nBindOffsetBytes;
    char pad_01[12];
};

class SkeletonBoneBounds_t {
public:
    // Vector m_vecCenter;
    // Vector m_vecSize;
    char pad_00[24];
};

class RenderSkeletonBone_t {
public:
    // CUtlString m_boneName;
    // CUtlString m_parentName;
    // matrix3x4_t m_invBindPose;
    char pad_00[64];
    SkeletonBoneBounds_t m_bbox;
    float m_flSphereRadius;
    char pad_01[4];
};

class CRenderSkeleton {
public:
    // CUtlVector< RenderSkeletonBone_t > m_bones;
    // CUtlVector< int32 > m_boneParents;
    char pad_00[72];
    int32_t m_nBoneWeightCount;
    char pad_01[4];
};

class CDrawCullingData {
public:
    int8_t m_ConeAxis[3];
    int8_t m_ConeCutoff;
};

class CMaterialDrawDescriptor {
public:
    float m_flUvDensity;
    // Vector m_vTintColor;
    char pad_00[12];
    float m_flAlpha;
    char pad_01[2];
    uint16_t m_nNumMeshlets;
    char pad_02[4];
    uint32_t m_nFirstMeshlet;
    uint32_t m_nAppliedIndexOffset;
    uint8_t m_nDepthVertexBufferIndex;
    uint8_t m_nMeshletPackedIVBIndex;
    // CUtlLeanVector< CMaterialDrawDescriptor::RigidMeshPart_t > m_rigidMeshParts;
    char pad_03[16];
    RenderPrimitiveType_t m_nPrimitiveType;
    int32_t m_nBaseVertex;
    int32_t m_nVertexCount;
    int32_t m_nStartIndex;
    int32_t m_nIndexCount;
    char pad_04[96];
    CRenderBufferBinding m_indexBuffer;
    CRenderBufferBinding m_meshletPackedIVB;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_material;
    char pad_05[24];
};

class CMaterialDrawDescriptor::RigidMeshPart_t {
public:
    uint16_t m_nRigidBLASIndex;
    int16_t m_nBoneIndex;
    uint32_t m_nStartIndexOffset;
    uint32_t m_nPrimitiveCount;
};

class CMeshletDescriptor {
public:
    PackedAABB_t m_PackedAABB;
    CDrawCullingData m_CullingData;
    uint32_t m_nVertexOffset;
    uint32_t m_nTriangleOffset;
    uint8_t m_nVertexCount;
    uint8_t m_nTriangleCount;
    char pad_00[2];
};

class CSceneObjectData {
public:
    // Vector m_vMinBounds;
    // Vector m_vMaxBounds;
    // CUtlLeanVector< CMaterialDrawDescriptor > m_drawCalls;
    // CUtlLeanVector< AABB_t > m_drawBounds;
    // CUtlLeanVector< CMeshletDescriptor > m_meshlets;
    // CUtlLeanVector< CSceneObjectData::RTProxyDrawDescriptor_t > m_rtProxyDrawCalls;
    // Vector4D m_vTintColor;
    char pad_00[160];
};

class CSceneObjectData::RTProxyDrawDescriptor_t {
public:
    CMaterialDrawDescriptor m_drawDesc;
    // matrix3x4_t m_mWorldFromLocal;
    char pad_00[48];
    VertexAlbedoFormat_t m_nVertexAlbedoFormat;
    int8_t m_nVertexAlbedoVB;
    uint16_t m_nVertexAlbedoOffset;
    uint16_t m_nVertexAlbedoStride;
    char pad_01[2];
};

class CAttachment {
public:
    // CUtlString m_name;
    // CUtlString[3] m_influenceNames;
    // Quaternion[3] m_vInfluenceRotations;
    // Vector[3] m_vInfluenceOffsets;
    char pad_00[116];
    float m_influenceWeights[3];
    bool m_bInfluenceRootTransform[3];
    uint8_t m_nInfluences;
    bool m_bIgnoreRotation;
    char pad_01[11];
};

class CHitBox {
public:
    // CUtlString m_name;
    // CUtlString m_sSurfaceProperty;
    // CUtlString m_sBoneName;
    // Vector m_vMinBounds;
    // Vector m_vMaxBounds;
    char pad_00[48];
    float m_flShapeRadius;
    uint32_t m_nBoneNameHash;
    int32_t m_nGroupId;
    uint8_t m_nShapeType;
    bool m_bTranslationOnly;
    uint32_t m_CRC;
    // Color m_cRenderColor;
    char pad_01[4];
    uint16_t m_nHitBoxIndex;
    char pad_02[38];
};

class CHitBoxSet {
public:
    // CUtlString m_name;
    char pad_00[8];
    uint32_t m_nNameHash;
    // CUtlVector< CHitBox > m_HitBoxes;
    // CUtlString m_SourceFilename;
    char pad_01[36];
};

class CHitBoxSetList {
public:
    // CUtlVector< CHitBoxSet > m_HitBoxSets;
    char pad_00[24];
};

class DynamicMeshDeformParams_t {
public:
    float m_flTensionCompressScale;
    float m_flTensionStretchScale;
    bool m_bRecomputeSmoothNormalsAfterAnimation;
    bool m_bComputeDynamicMeshTensionAfterAnimation;
    bool m_bSmoothNormalsAcrossUvSeams;
    bool m_bEnableEyeBulgeDeformation;
};

class RenderHairStrandInfo_t {
public:
    uint32_t m_nGuideHairIndices_nSurfaceTriIndex[2];
    uint16_t m_vGuideBary_vBaseBary[4];
    uint16_t m_vRootOffset_flLengthScale[4];
    uint16_t m_nPackedBaseUv[2];
    uint32_t m_nPackedSurfaceNormalOs;
    uint32_t m_nPackedSurfaceTangentOs;
    uint32_t m_nDataOffset_Segments;
};

class CRenderGroom {
public:
    // CUtlVector< RenderHairStrandInfo_t > m_hairs;
    // CUtlVector< uint32 > m_hairPositionOffsets;
    // CStrongHandleCopyable< InfoForResourceTypeIMaterial2 > m_hSimParamsMat;
    // CUtlVector< int32 > m_strandSegmentCountHist;
    char pad_00[120];
    int32_t m_nMaxSegmentsPerHairStrand;
    int32_t m_nGuideHairCount;
    int32_t m_nHairCount;
    int32_t m_nTotalVertexCount;
    int32_t m_nTotalSegmentCount;
    int32_t m_nGroomGroupID;
    int32_t m_nAttachBoneIdx;
    int32_t m_nAttachMeshIdx;
    int32_t m_nAttachMeshDrawCallIdx;
    bool m_bEnableSimulation;
    char pad_01[3];
};

class CRenderMesh {
public:
    // CUtlLeanVectorFixedGrowable< CSceneObjectData, 1 > m_sceneObjects;
    // CUtlLeanVector< CBaseConstraint* > m_constraints;
    char pad_00[200];
    CRenderSkeleton m_skeleton;
    char pad_01[188];
    bool m_bUseUV2ForCharting;
    bool m_bEmbeddedMapMesh;
    char pad_02[32];
    DynamicMeshDeformParams_t m_meshDeformParams;
    CRenderGroom* m_pGroomData;
};

class CBaseConstraint {
public:
    // CUtlString m_name;
    // Vector m_vUpVector;
    // CUtlLeanVector< CConstraintSlave > m_slaves;
    // CUtlVector< CConstraintTarget > m_targets;
    char pad_00[96];
};

class CConstraintTarget {
public:
    // Quaternion m_qOffset;
    // Vector m_vOffset;
    char pad_00[60];
    uint32_t m_nBoneHash;
    // CUtlString m_sName;
    char pad_01[8];
    float m_flWeight;
    char pad_02[13];
    bool m_bIsAttachment;
    char pad_03[6];
};

class CConstraintSlave {
public:
    // Quaternion m_qBaseOrientation;
    // Vector m_vBasePosition;
    char pad_00[28];
    uint32_t m_nBoneHash;
    float m_flWeight;
    // CUtlString m_sName;
    char pad_01[44];
};

class CBoneConstraintBase {
public:
    char pad_00[32];
};

class CPointConstraint {
public:
    char pad_00[96];
};

class COrientConstraint {
public:
    char pad_00[96];
};

class CAimConstraint {
public:
    // Quaternion m_qAimOffset;
    char pad_00[112];
    uint32_t m_nUpType;
    char pad_01[12];
};

class CTwistConstraint {
public:
    char pad_00[96];
    bool m_bInverse;
    // Quaternion m_qParentBindRotation;
    // Quaternion m_qChildBindRotation;
    char pad_01[47];
};

class CTiltTwistConstraint {
public:
    char pad_00[96];
    int32_t m_nTargetAxis;
    int32_t m_nSlaveAxis;
    char pad_01[40];
};

class CMorphConstraint {
public:
    // CUtlString m_sTargetMorph;
    char pad_00[104];
    int32_t m_nSlaveChannel;
    float m_flMin;
    float m_flMax;
    char pad_01[12];
};

class CParentConstraint {
public:
    char pad_00[96];
};

class CBoneConstraintPoseSpaceMorph {
public:
    // CUtlString m_sBoneName;
    // CUtlString m_sAttachmentName;
    // CUtlVector< CUtlString > m_outputMorph;
    // CUtlVector< CBoneConstraintPoseSpaceMorph::Input_t > m_inputList;
    char pad_00[96];
    bool m_bClamp;
    char pad_01[63];
};

class CBoneConstraintPoseSpaceMorph::Input_t {
public:
    // Vector m_inputValue;
    // CUtlVector< float32 > m_outputWeightList;
    char pad_00[40];
};

class CBoneConstraintPoseSpaceBone {
public:
    // CUtlVector< CBoneConstraintPoseSpaceBone::Input_t > m_inputList;
    char pad_00[136];
};

class CBoneConstraintPoseSpaceBone::Input_t {
public:
    // Vector m_inputValue;
    // CUtlVector< CTransform > m_outputTransformList;
    char pad_00[40];
};

class CBoneConstraintDotToMorph {
public:
    // CUtlString m_sBoneName;
    // CUtlString m_sTargetBoneName;
    // CUtlString m_sMorphChannelName;
    char pad_00[56];
    float m_flRemap[4];
    char pad_01[16];
};

class CBoneConstraintRbf {
public:
    // CUtlVector< std::pair< CUtlString, uint32 > > m_inputBones;
    // CUtlVector< std::pair< CUtlString, uint32 > > m_outputBones;
    char pad_00[200];
};

class CFlexOp {
public:
    FlexOpCode_t m_OpCode;
    int32_t m_Data;
};

class CFlexRule {
public:
    int32_t m_nFlex;
    // CUtlVector< CFlexOp > m_FlexOps;
    char pad_00[28];
};

class CFlexDesc {
public:
    // CUtlString m_szFacs;
    char pad_00[8];
};

class CFlexController {
public:
    // CUtlString m_szName;
    // CUtlString m_szType;
    char pad_00[16];
    float min;
    float max;
};

class CMorphBundleData {
public:
    float m_flULeftSrc;
    float m_flVTopSrc;
    // CUtlVector< float32 > m_offsets;
    // CUtlVector< float32 > m_ranges;
    char pad_00[48];
};

class CMorphRectData {
public:
    int16_t m_nXLeftDst;
    int16_t m_nYTopDst;
    float m_flUWidthSrc;
    float m_flVHeightSrc;
    // CUtlVector< CMorphBundleData > m_bundleDatas;
    char pad_00[28];
};

class CMorphData {
public:
    // CUtlString m_name;
    // CUtlVector< CMorphRectData > m_morphRectDatas;
    char pad_00[32];
};

class CMorphSetData {
public:
    char pad_00[16];
    int32_t m_nWidth;
    int32_t m_nHeight;
    // CUtlVector< MorphBundleType_t > m_bundleTypes;
    // CUtlVector< CMorphData > m_morphDatas;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureAtlas;
    // CUtlVector< CFlexDesc > m_FlexDesc;
    // CUtlVector< CFlexController > m_FlexControllers;
    // CUtlVector< CFlexRule > m_FlexRules;
    char pad_01[128];
};

class CAnimFoot {
public:
    // CUtlString m_name;
    // Vector m_vBallOffset;
    // Vector m_vHeelOffset;
    char pad_00[32];
    int32_t m_ankleBoneIndex;
    int32_t m_toeBoneIndex;
};

class CAnimSkeleton {
public:
    // CUtlVector< CTransform > m_localSpaceTransforms;
    // CUtlVector< CTransform > m_modelSpaceTransforms;
    // CUtlVector< CUtlString > m_boneNames;
    // CUtlVector< CUtlVector< int32 > > m_children;
    // CUtlVector< int32 > m_parents;
    // CUtlVector< CAnimFoot > m_feet;
    // CUtlVector< CUtlString > m_morphNames;
    // CUtlVector< int32 > m_lodBoneCounts;
    char pad_00[208];
};

class CFootDefinition {
public:
    // CUtlString m_name;
    // CUtlString m_ankleBoneName;
    // CUtlString m_toeBoneName;
    // Vector m_vBallOffset;
    // Vector m_vHeelOffset;
    char pad_00[48];
    float m_flFootLength;
    float m_flBindPoseDirectionMS;
    float m_flTraceHeight;
    float m_flTraceRadius;
};

class CCycleBase {
public:
    float m_flCycle;
};

class CAnimCycle {
public:
    char pad_00[4];
};

class CFootCycle {
public:
    char pad_00[4];
};

class CFootCycleDefinition {
public:
    // Vector m_vStancePositionMS;
    // Vector m_vMidpointPositionMS;
    char pad_00[24];
    float m_flStanceDirectionMS;
    // Vector m_vToStrideStartPos;
    char pad_01[12];
    CAnimCycle m_stanceCycle;
    CFootCycle m_footLiftCycle;
    CFootCycle m_footOffCycle;
    CFootCycle m_footStrikeCycle;
    CFootCycle m_footLandCycle;
};

class CFootTrajectory {
public:
    // Vector m_vOffset;
    char pad_00[20];
    float m_flRotationOffset;
    float m_flProgression;
    char pad_01[4];
};

class CFootTrajectories {
public:
    // CUtlVector< CFootTrajectory > m_trajectories;
    char pad_00[24];
};

class CFootStride {
public:
    CFootCycleDefinition m_definition;
    CFootTrajectories m_trajectories;
};

class MovementGaitId_t {
public:
    // CGlobalSymbol m_sId;
    char pad_00[8];
};

class CNPCPhysicsHull {
public:
    // CGlobalSymbol m_sName;
    char pad_00[8];
    NPCPhysicsHullType_t m_eType;
    float m_flCapsuleHeight;
    float m_flCapsuleRadius;
    // Vector m_vCapsuleCenter1;
    // Vector m_vCapsuleCenter2;
    char pad_01[24];
    float m_flGroundBoxHeight;
    float m_flGroundBoxWidth;
    char pad_02[4];
};

class SkeletonAnimCapture_t {
public:
    // CEntityIndex m_nEntIndex;
    // CEntityIndex m_nEntParent;
    // CUtlVector< CEntityIndex > m_ImportedCollision;
    // CUtlString m_ModelName;
    // CUtlString m_CaptureName;
    // CUtlVector< SkeletonAnimCapture_t::Bone_t > m_ModelBindPose;
    // CUtlVector< SkeletonAnimCapture_t::Bone_t > m_FeModelInitPose;
    char pad_00[96];
    int32_t m_nFlexControllers;
    bool m_bPredicted;
    // CUtlVector< SkeletonAnimCapture_t::Frame_t > m_Frames;
    char pad_01[91];
};

class SkeletonAnimCapture_t::Bone_t {
public:
    // CUtlString m_Name;
    // CTransform m_BindPose;
    char pad_00[48];
    int32_t m_nParent;
    char pad_01[12];
};

class SkeletonAnimCapture_t::Frame_t {
public:
    float m_flTime;
    SkeletonAnimCapture_t::FrameStamp_t m_Stamp;
    // CTransform m_Transform;
    char pad_00[32];
    bool m_bTeleport;
    // CUtlVector< CTransform > m_CompositeBones;
    // CUtlVector< CTransform > m_SimStateBones;
    // CUtlVector< CTransform > m_FeModelAnims;
    // CUtlVector< VectorAligned > m_FeModelPos;
    // CUtlVector< float32 > m_FlexControllerWeights;
    char pad_01[127];
};

class SkeletonAnimCapture_t::FrameStamp_t {
public:
    float m_flTime;
    float m_flEntitySimTime;
    bool m_bTeleportTick;
    bool m_bPredicted;
    float m_flCurTime;
    float m_flRealTime;
    int32_t m_nFrameCount;
    int32_t m_nTickCount;
};

class SkeletonAnimCapture_t::Camera_t {
public:
    // CTransform m_tmCamera;
    char pad_00[32];
    float m_flTime;
    char pad_01[12];
};

class SkeletonDemoDb_t {
public:
    // CUtlVector< SkeletonAnimCapture_t* > m_AnimCaptures;
    // CUtlVector< SkeletonAnimCapture_t::Camera_t > m_CameraTrack;
    char pad_00[48];
    float m_flRecordingTime;
    char pad_01[4];
};

class CNmBoneWeightList {
public:
    // CResourceName m_skeletonName;
    // CUtlVector< CGlobalSymbol > m_boneIDs;
    // CUtlVector< float32 > m_weights;
    char pad_00[272];
};

class NmBoneMaskSetDefinition_t {
public:
    // CGlobalSymbol m_ID;
    char pad_00[8];
    CNmBoneWeightList m_primaryWeightList;
    // CUtlLeanVector< CNmBoneWeightList > m_secondaryWeightLists;
    char pad_01[16];
};

class CNmClip {
public:
    // CStrongHandle< InfoForResourceTypeCNmSkeleton > m_skeleton;
    char pad_00[8];
    uint32_t m_nNumFrames;
    float m_flDuration;
    // CUtlBinaryBlock m_compressedPoseData;
    // CUtlVector< NmCompressionSettings_t > m_trackCompressionSettings;
    // CUtlVector< uint32 > m_compressedPoseOffsets;
    // CUtlVector< CGlobalSymbol > m_floatCurveIDs;
    // CUtlVector< NmFloatCurveCompressionSettings_t > m_floatCurveDefs;
    // CUtlVector< uint16 > m_compressedFloatCurveData;
    // CUtlVector< uint32 > m_compressedFloatCurveOffsets;
    // CUtlVectorFixedGrowable< CNmClip*, 1 > m_secondaryAnimations;
    char pad_01[232];
    CNmSyncTrack m_syncTrack;
    CNmRootMotionData m_rootMotion;
    bool m_bIsAdditive;
    // CUtlVector< CNmClip::ModelSpaceSamplingChainLink_t > m_modelSpaceSamplingChain;
    // CUtlVector< int32 > m_modelSpaceBoneSamplingIndices;
    char pad_02[63];
};

class NmCompressionSettings_t {
public:
    NmCompressionSettings_t::QuantizationRange_t m_translationRangeX;
    NmCompressionSettings_t::QuantizationRange_t m_translationRangeY;
    NmCompressionSettings_t::QuantizationRange_t m_translationRangeZ;
    NmCompressionSettings_t::QuantizationRange_t m_scaleRange;
    // Quaternion m_constantRotation;
    char pad_00[16];
    bool m_bIsRotationStatic;
    bool m_bIsTranslationStatic;
    bool m_bIsScaleStatic;
    char pad_01[13];
};

class NmFloatCurveCompressionSettings_t {
public:
    NmCompressionSettings_t::QuantizationRange_t m_range;
    bool m_bIsStatic;
    char pad_00[3];
};

class CNmSyncTrack {
public:
    // CUtlLeanVectorFixedGrowable< CNmSyncTrack::Event_t, 10 > m_syncEvents;
    char pad_00[168];
    int32_t m_nStartEventOffset;
    char pad_01[4];
};

class CNmRootMotionData {
public:
    // CUtlVector< CTransform > m_transforms;
    char pad_00[24];
    int32_t m_nNumFrames;
    float m_flAverageLinearVelocity;
    float m_flAverageAngularVelocityRadians;
    // CTransform m_totalDelta;
    char pad_01[44];
};

class CNmClip::ModelSpaceSamplingChainLink_t {
public:
    int32_t m_nBoneIdx;
    int32_t m_nParentBoneIdx;
    int32_t m_nParentChainLinkIdx;
};

class NmCompressionSettings_t::QuantizationRange_t {
public:
    float m_flRangeStart;
    float m_flRangeLength;
};

class CNmEvent {
public:
    char pad_00[8];
    NmPercent_t m_flStartTime;
    NmPercent_t m_flDuration;
    // CGlobalSymbol m_syncID;
    char pad_01[8];
    bool m_bClientOnly;
    char pad_02[7];
};

class NmPercent_t {
public:
    float m_flValue;
};

class CNmBitFlags {
public:
    uint32_t m_flags;
};

class CNmSkeleton {
public:
    // CGlobalSymbol m_ID;
    // CUtlLeanVector< CGlobalSymbol > m_boneIDs;
    // CUtlVector< int32 > m_parentIndices;
    // CUtlVector< CTransform > m_parentSpaceReferencePose;
    // CUtlVector< CTransform > m_modelSpaceReferencePose;
    char pad_00[96];
    int32_t m_numBonesToSampleAtLowLOD;
    // CUtlLeanVector< NmBoneMaskSetDefinition_t > m_maskDefinitions;
    // CUtlLeanVector< CNmSkeleton::SecondarySkeleton_t > m_secondarySkeletons;
    char pad_01[84];
    bool m_bIsPropSkeleton;
    char pad_02[7];
};

class CNmSkeleton::SecondarySkeleton_t {
public:
    // CGlobalSymbol m_attachToBoneID;
    // CStrongHandle< InfoForResourceTypeCNmSkeleton > m_skeleton;
    char pad_00[16];
};

class NmSyncTrackTime_t {
public:
    int32_t m_nEventIdx;
    NmPercent_t m_percentageThrough;
};

class NmSyncTrackTimeRange_t {
public:
    NmSyncTrackTime_t m_startTime;
    NmSyncTrackTime_t m_endTime;
};

class CNmSyncTrack::Event_t {
public:
    // CGlobalSymbol m_ID;
    char pad_00[8];
    NmPercent_t m_startTime;
    NmPercent_t m_duration;
};

class CNmSyncTrack::EventMarker_t {
public:
    NmPercent_t m_startTime;
    // CGlobalSymbol m_ID;
    char pad_00[12];
};

class CNmTarget {
public:
    // CTransform m_transform;
    // CGlobalSymbol m_boneID;
    char pad_00[40];
    bool m_bIsBoneTarget;
    bool m_bIsUsingBoneSpaceOffsets;
    bool m_bHasOffsets;
    bool m_bIsSet;
    char pad_01[4];
};

class CNmPoseTask {
public:
    char pad_00[88];
};

class CNmFootEvent {
public:
    char pad_00[32];
    NmFootPhase_t m_phase;
    char pad_01[7];
};

class CNmBodyGroupEvent {
public:
    // CUtlString m_groupName;
    char pad_00[40];
    int32_t m_nGroupValue;
    char pad_01[4];
};

class CNmFloatCurveEvent {
public:
    // CGlobalSymbol m_ID;
    // CPiecewiseCurve m_curve;
    char pad_00[104];
};

class CNmFrameSnapEvent {
public:
    char pad_00[32];
    NmFrameSnapEventMode_t m_frameSnapMode;
    char pad_01[4];
};

class CNmIDEvent {
public:
    // CGlobalSymbol m_ID;
    // CGlobalSymbol m_secondaryID;
    char pad_00[48];
};

class CNmLegacyEvent {
public:
    // CUtlString m_animEventClassName;
    // KeyValues3 m_KV;
    char pad_00[88];
};

class CNmMaterialAttributeEvent {
public:
    // CUtlString m_attributeName;
    // CUtlStringToken m_attributeNameToken;
    // CPiecewiseCurve m_x;
    // CPiecewiseCurve m_y;
    // CPiecewiseCurve m_z;
    // CPiecewiseCurve m_w;
    char pad_00[304];
};

class CNmEntityAttributeEventBase {
public:
    // CUtlString m_attributeName;
    char pad_00[56];
};

class CNmEntityAttributeIntEvent {
public:
    char pad_00[56];
    int32_t m_nIntValue;
    char pad_01[4];
};

class CNmEntityAttributeFloatEvent {
public:
    // CPiecewiseCurve m_FloatValue;
    char pad_00[120];
};

class CNmParticleEvent {
public:
    char pad_00[32];
    CNmEventRelevance_t m_relevance;
    CNmParticleEvent::Type_t m_type;
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hParticleSystem;
    // CUtlString m_tags;
    char pad_01[16];
    bool m_bStopImmediately;
    bool m_bDetachFromOwner;
    bool m_bPlayEndCap;
    // CUtlString m_attachmentPoint0;
    char pad_02[12];
    ParticleAttachment_t m_attachmentType0;
    // CUtlString m_attachmentPoint1;
    char pad_03[12];
    ParticleAttachment_t m_attachmentType1;
    // CUtlString m_config;
    // CUtlString m_effectForConfig;
    char pad_04[20];
};

class CNmRootMotionEvent {
public:
    char pad_00[32];
    float m_flBlendTimeSeconds;
    char pad_01[4];
};

class CNmSoundEvent {
public:
    char pad_00[32];
    CNmEventRelevance_t m_relevance;
    // CUtlString m_name;
    char pad_01[12];
    CNmSoundEvent::Position_t m_position;
    // CUtlString m_attachmentName;
    // CUtlString m_tags;
    char pad_02[20];
    bool m_bContinuePlayingSoundAtDurationEnd;
    float m_flDurationInterruptionThreshold;
};

class CNmTransitionEvent {
public:
    char pad_00[32];
    NmTransitionRule_t m_rule;
    // CGlobalSymbol m_ID;
    char pad_01[15];
};

class CNmOrientationWarpEvent {
public:
    char pad_00[32];
};

class CNmTargetWarpEvent {
public:
    char pad_00[32];
    NmTargetWarpRule_t m_rule;
    NmTargetWarpAlgorithm_t m_algorithm;
    char pad_01[6];
};

class CNmParameterizedBlendNode::BlendRange_t {
public:
    int16_t m_nInputIdx0;
    int16_t m_nInputIdx1;
    // Range_t m_parameterValueRange;
    char pad_00[8];
};

class CNmParameterizedBlendNode::Parameterization_t {
public:
    // CUtlLeanVectorFixedGrowable< CNmParameterizedBlendNode::BlendRange_t, 5 > m_blendRanges;
    // Range_t m_parameterRange;
    char pad_00[80];
};

class CNmGraphEventConditionNode::Condition_t {
public:
    // CGlobalSymbol m_eventID;
    char pad_00[8];
    NmGraphEventTypeCondition_t m_eventTypeCondition;
    char pad_01[7];
};

class CNmFloatRemapNode::RemapRange_t {
public:
    float m_flBegin;
    float m_flEnd;
};

class CNmLayerBlendNode::LayerDefinition_t {
public:
    int16_t m_nInputNodeIdx;
    int16_t m_nWeightValueNodeIdx;
    int16_t m_nBoneMaskValueNodeIdx;
    int16_t m_nRootMotionWeightValueNodeIdx;
    bool m_bIsSynchronized;
    bool m_bIgnoreEvents;
    bool m_bIsStateMachineLayer;
    NmPoseBlendMode_t m_blendMode;
};

class CNmStateNode::TimedEvent_t {
public:
    // CGlobalSymbol m_ID;
    char pad_00[8];
    float m_flTimeValueSeconds;
    CNmStateNode::TimedEvent_t::Comparison_t m_comparisionOperator;
    char pad_01[3];
};

class CNmStateMachineNode::TransitionDefinition_t {
public:
    int16_t m_nTargetStateIdx;
    int16_t m_nConditionNodeIdx;
    int16_t m_nTransitionNodeIdx;
    bool m_bCanBeForced;
    char pad_00[1];
};

class CNmStateMachineNode::StateDefinition_t {
public:
    int16_t m_nStateNodeIdx;
    int16_t m_nEntryConditionNodeIdx;
    // CUtlLeanVectorFixedGrowable< CNmStateMachineNode::TransitionDefinition_t, 5 > m_transitionDefinitions;
    char pad_00[52];
};

class CNmGraphNode::CDefinition {
public:
    char pad_00[8];
    int16_t m_nNodeIdx;
    char pad_01[6];
};

class CNmPoseNode::CDefinition {
public:
    char pad_00[16];
};

class CNmValueNode::CDefinition {
public:
    char pad_00[16];
};

class CNmBoolValueNode::CDefinition {
public:
    char pad_00[16];
};

class CNmIDValueNode::CDefinition {
public:
    char pad_00[16];
};

class CNmFloatValueNode::CDefinition {
public:
    char pad_00[16];
};

class CNmVectorValueNode::CDefinition {
public:
    char pad_00[16];
};

class CNmTargetValueNode::CDefinition {
public:
    char pad_00[16];
};

class CNmBoneMaskValueNode::CDefinition {
public:
    char pad_00[16];
};

class CNmGraphVariationUserData {
public:
    char pad_00[8];
};

class CNmGraphDefinition {
public:
    // CGlobalSymbol m_variationID;
    // CStrongHandle< InfoForResourceTypeCNmSkeleton > m_skeleton;
    char pad_00[16];
    CNmGraphVariationUserData* m_pUserData;
    // CUtlVector< int16 > m_persistentNodeIndices;
    char pad_01[24];
    int16_t m_nRootNodeIdx;
    // CUtlVector< CGlobalSymbol > m_controlParameterIDs;
    // CUtlVector< CGlobalSymbol > m_virtualParameterIDs;
    // CUtlVector< int16 > m_virtualParameterNodeIndices;
    // CUtlVector< CNmGraphDefinition::ReferencedGraphSlot_t > m_referencedGraphSlots;
    // CUtlVector< CNmGraphDefinition::ExternalGraphSlot_t > m_externalGraphSlots;
    // CUtlVector< CNmGraphDefinition::ExternalPoseSlot_t > m_externalPoseSlots;
    // CUtlVector< CUtlString > m_nodePaths;
    // CUtlVector< CStrongHandleVoid > m_resources;
    char pad_02[366];
};

class CNmGraphDefinition::ReferencedGraphSlot_t {
public:
    int16_t m_nNodeIdx;
    int16_t m_dataSlotIdx;
};

class CNmGraphDefinition::ExternalGraphSlot_t {
public:
    int16_t m_nNodeIdx;
    // CGlobalSymbol m_slotID;
    char pad_00[14];
};

class CNmGraphDefinition::ExternalPoseSlot_t {
public:
    int16_t m_nNodeIdx;
    // CGlobalSymbol m_slotID;
    char pad_00[14];
};

class CNmIKEffector {
public:
    int32_t m_nBodyIndex;
    bool m_bEnabled;
    // Vector m_vTargetPosition;
    // Quaternion m_qTargetOrientation;
    char pad_00[40];
    float m_flWeight;
    char pad_01[12];
};

class CNmIKBody {
public:
    float m_flMass;
    // Vector m_vLocalMassCenter;
    // Vector m_vRadius;
    char pad_00[24];
    float m_flResistance;
};

class CNmIKJoint {
public:
    int32_t m_nParentIndex;
    int32_t m_nBodyIndex;
    // CTransform m_xLocalFrame;
    char pad_00[40];
    float m_flSwingLimit;
    float m_flMinTwistLimit;
    float m_flMaxTwistLimit;
    float m_flWeight;
};

class CNmIKRig {
public:
    // CStrongHandle< InfoForResourceTypeCNmSkeleton > m_skeleton;
    // CUtlVector< CNmIKBody > m_vecBodies;
    // CUtlVector< CNmIKJoint > m_vecJoints;
    char pad_00[56];
};

class BoneDemoCaptureSettings_t {
public:
    // CUtlString m_boneName;
    char pad_00[8];
    float m_flErrorSplineRotationMax;
    float m_flErrorSplineTranslationMax;
    float m_flErrorSplineScaleMax;
    float m_flErrorQuantizationRotationMax;
    float m_flErrorQuantizationTranslationMax;
    float m_flErrorQuantizationScaleMax;
};

class IKDemoCaptureSettings_t {
public:
    // CUtlString m_parentBoneName;
    char pad_00[8];
    IKChannelMode m_eMode;
    // CUtlString m_ikChainName;
    // CUtlString m_oneBoneStart;
    // CUtlString m_oneBoneEnd;
    char pad_01[28];
};

class CAnimDemoCaptureSettings {
public:
    // Vector2D m_vecErrorRangeSplineRotation;
    // Vector2D m_vecErrorRangeSplineTranslation;
    // Vector2D m_vecErrorRangeSplineScale;
    char pad_00[24];
    float m_flIkRotation_MaxSplineError;
    float m_flIkTranslation_MaxSplineError;
    // Vector2D m_vecErrorRangeQuantizationRotation;
    // Vector2D m_vecErrorRangeQuantizationTranslation;
    // Vector2D m_vecErrorRangeQuantizationScale;
    char pad_01[24];
    float m_flIkRotation_MaxQuantizationError;
    float m_flIkTranslation_MaxQuantizationError;
    // CUtlString m_baseSequence;
    char pad_02[8];
    int32_t m_nBaseSequenceFrame;
    EDemoBoneSelectionMode m_boneSelectionMode;
    // CUtlVector< BoneDemoCaptureSettings_t > m_bones;
    // CUtlVector< IKDemoCaptureSettings_t > m_ikChains;
    char pad_03[48];
};

class CAnimReplayFrame {
public:
    // CUtlVector< CUtlBinaryBlock > m_inputDataBlocks;
    // CUtlBinaryBlock m_instanceData;
    // CTransform m_startingLocalToWorldTransform;
    // CTransform m_localToWorldTransform;
    char pad_00[128];
    float m_timeStamp;
    char pad_01[12];
};

class CAnimGraphDebugReplay {
public:
    // CUtlString m_animGraphFileName;
    // CUtlVector< CSmartPtr< CAnimReplayFrame > > m_frameList;
    char pad_00[96];
    int32_t m_startIndex;
    int32_t m_writeIndex;
    int32_t m_frameCount;
    char pad_01[4];
};

class CAnimGraphModelBinding {
public:
    // CUtlString m_modelName;
    // CSmartPtr< CAnimUpdateSharedData > m_pSharedData;
    char pad_00[40];
};

class CAnimUpdateSharedData {
public:
    // CUtlVector< CSmartPtr< CAnimUpdateNodeBase > > m_nodes;
    // CUtlHashtable< CAnimNodePath, int32 > m_nodeIndexMap;
    // CUtlVector< CSmartPtr< CAnimComponentUpdater > > m_components;
    // CSmartPtr< CAnimParameterManagerUpdater > m_pParamListUpdater;
    // CSmartPtr< CAnimTagManagerUpdater > m_pTagManagerUpdater;
    // CSmartPtr< CAnimScriptManager > m_scriptManager;
    char pad_00[120];
    CAnimGraphSettingsManager m_settings;
    // CSmartPtr< CStaticPoseCacheBuilder > m_pStaticPoseCache;
    // CSmartPtr< CAnimSkeleton > m_pSkeleton;
    char pad_01[16];
    CAnimNodePath m_rootNodePath;
    char pad_02[24];
};

class CAnimParamHandleMap {
public:
    // CUtlHashtable< uint16, int16 > m_list;
    char pad_00[32];
};

class CAnimParameterManagerUpdater {
public:
    // CUtlVector< CSmartPtr< CAnimParameterBase > > m_parameters;
    // CUtlHashtable< AnimParamID, int32 > m_idToIndexMap;
    // CUtlHashtable< CUtlString, int32 > m_nameToIndexMap;
    // CUtlVector< CAnimParamHandle > m_indexToHandle;
    // CUtlVector< std::pair< CAnimParamHandle, CAnimVariant > > m_autoResetParams;
    // CUtlHashtable< CAnimParamHandle, int16 > m_autoResetMap;
    char pad_00[256];
};

class CAnimParameterBase {
public:
    // CGlobalSymbol m_name;
    // CUtlString m_sComment;
    // CUtlString m_group;
    char pad_00[48];
    AnimParamID m_id;
    // CUtlString m_componentName;
    char pad_01[52];
    bool m_bNetworkingRequested;
    bool m_bIsReferenced;
    char pad_02[6];
};

class CAnimUpdateNodeBase {
public:
    char pad_00[24];
    CAnimNodePath m_nodePath;
    AnimNodeNetworkMode m_networkMode;
    // CUtlString m_name;
    char pad_01[12];
};

class CAnimNodePath {
public:
    AnimNodeID m_path;
    char pad_00[40];
    int32_t m_nCount;
};

class CAnimComponentUpdater {
public:
    // CUtlString m_name;
    char pad_00[32];
    AnimComponentID m_id;
    AnimNodeNetworkMode m_networkMode;
    bool m_bStartEnabled;
    char pad_01[7];
};

class CAnimTagManagerUpdater {
public:
    // CUtlVector< CSmartPtr< CAnimTagBase > > m_tags;
    char pad_00[120];
};

class CAnimScriptManager {
public:
    // CUtlVector< ScriptInfo_t > m_scriptInfo;
    char pad_00[416];
};

class CAnimGraphSettingsManager {
public:
    // CUtlVector< CSmartPtr< CAnimGraphSettingsGroup > > m_settingsGroups;
    char pad_00[48];
};

class CStaticPoseCacheBuilder {
public:
    char pad_00[56];
};

class CBlendCurve {
public:
    float m_flControlPoint1;
    float m_flControlPoint2;
};

class ParamSpanSample_t {
public:
    // CAnimVariant m_value;
    char pad_00[20];
    float m_flCycle;
};

class ParamSpan_t {
public:
    // CUtlVector< ParamSpanSample_t > m_samples;
    char pad_00[24];
    CAnimParamHandle m_hParam;
    AnimParamType_t m_eParamType;
    float m_flStartCycle;
    float m_flEndCycle;
    char pad_01[4];
};

class CParamSpanUpdater {
public:
    // CUtlVector< ParamSpan_t > m_spans;
    char pad_00[24];
};

class CAnimGraphSettingsGroup {
public:
    char pad_00[32];
};

class CCachedPose {
public:
    // CUtlVector< CTransform > m_transforms;
    // CUtlVector< float32 > m_morphWeights;
    char pad_00[56];
    HSequence m_hSequence;
    float m_flCycle;
};

class CStaticPoseCache {
public:
    // CUtlVector< CCachedPose > m_poses;
    char pad_00[40];
    int32_t m_nBoneCount;
    int32_t m_nMorphCount;
};

class CAnimActionUpdater {
public:
    char pad_00[24];
};

class CEmitTagActionUpdater {
public:
    char pad_00[24];
    int32_t m_nTagIndex;
    bool m_bIsZeroDuration;
    char pad_01[3];
};

class CSetParameterActionUpdater {
public:
    char pad_00[24];
    CAnimParamHandle m_hParam;
    // CAnimVariant m_value;
    char pad_01[22];
};

class CToggleComponentActionUpdater {
public:
    char pad_00[24];
    AnimComponentID m_componentID;
    bool m_bSetEnabled;
    char pad_01[3];
};

class CExpressionActionUpdater {
public:
    char pad_00[24];
    CAnimParamHandle m_hParam;
    AnimParamType_t m_eParamType;
    AnimScriptHandle m_hScript;
};

class CAnimTagBase {
public:
    // CGlobalSymbol m_name;
    // CUtlString m_sComment;
    // CGlobalSymbol m_group;
    char pad_00[48];
    AnimTagID m_tagID;
    char pad_01[20];
    bool m_bIsReferenced;
    char pad_02[7];
};

class CSequenceTagSpans {
public:
    // CGlobalSymbol m_sSequenceName;
    // CUtlVector< TagSpan_t > m_tags;
    char pad_00[32];
};

class TagSpan_t {
public:
    int32_t m_tagIndex;
    float m_startCycle;
    float m_endCycle;
};

class CAudioAnimTag {
public:
    // CUtlString m_clipName;
    // CUtlString m_attachmentName;
    char pad_00[104];
    float m_flVolume;
    bool m_bStopWhenTagEnds;
    bool m_bStopWhenGraphEnds;
    bool m_bPlayOnServer;
    bool m_bPlayOnClient;
};

class CBodyGroupSetting {
public:
    // CUtlString m_BodyGroupName;
    char pad_00[8];
    int32_t m_nBodyGroupOption;
    char pad_01[4];
};

class CBodyGroupAnimTag {
public:
    char pad_00[88];
    int32_t m_nPriority;
    // CUtlVector< CBodyGroupSetting > m_bodyGroupSettings;
    char pad_01[28];
};

class CClothSettingsAnimTag {
public:
    char pad_00[88];
    float m_flStiffness;
    float m_flEaseIn;
    float m_flEaseOut;
    // CUtlString m_nVertexSet;
    char pad_01[12];
};

class CFootFallAnimTag {
public:
    char pad_00[88];
    FootFallTagFoot_t m_foot;
    char pad_01[4];
};

class CFootstepLandedAnimTag {
public:
    char pad_00[88];
    FootstepLandedFootSoundType_t m_FootstepType;
    // CUtlString m_OverrideSoundName;
    // CUtlString m_DebugAnimSourceString;
    // CUtlString m_BoneName;
    char pad_01[28];
    FootstepJumpPhase_t m_footstepJumpPhase;
    char pad_02[7];
};

class CHandshakeAnimTagBase {
public:
    char pad_00[80];
    bool m_bIsDisableTag;
    char pad_01[7];
};

class CTaskHandshakeAnimTag {
public:
    char pad_00[88];
};

class CMovementHandshakeAnimTag {
public:
    char pad_00[88];
};

class CMaterialAttributeAnimTag {
public:
    // CUtlString m_AttributeName;
    char pad_00[96];
    MatterialAttributeTagType_t m_AttributeType;
    float m_flValue;
    // Color m_Color;
    char pad_01[8];
};

class CParticleAnimTag {
public:
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hParticleSystem;
    // CUtlString m_particleSystemName;
    // CUtlString m_configName;
    char pad_00[112];
    bool m_bDetachFromOwner;
    bool m_bAggregate;
    bool m_bStopWhenTagEnds;
    bool m_bTagEndStopIsInstant;
    // CUtlString m_attachmentName;
    char pad_01[12];
    ParticleAttachment_t m_attachmentType;
    // CUtlString m_attachmentCP1Name;
    char pad_02[12];
    ParticleAttachment_t m_attachmentCP1Type;
    char pad_03[4];
};

class CRagdollAnimTag {
public:
    // CGlobalSymbol m_profileName;
    char pad_00[96];
};

class CSequenceFinishedAnimTag {
public:
    // CUtlString m_sequenceName;
    char pad_00[96];
};

class CStringAnimTag {
public:
    char pad_00[80];
};

class CTaskStatusAnimTag {
public:
    char pad_00[88];
};

class CWarpSectionAnimTagBase {
public:
    char pad_00[80];
};

class CWarpSectionAnimTag {
public:
    char pad_00[80];
    bool m_bWarpPosition;
    bool m_bWarpOrientation;
    char pad_01[6];
};

class CAnimScriptComponentUpdater {
public:
    char pad_00[48];
    AnimScriptHandle m_hScript;
    char pad_01[4];
};

class CCPPScriptComponentUpdater {
public:
    // CUtlVector< CGlobalSymbol > m_scriptsToRun;
    char pad_00[96];
};

class CDampedValueUpdateItem {
public:
    CAnimInputDamping m_damping;
    char pad_00[8];
    CAnimParamHandle m_hParamIn;
    CAnimParamHandle m_hParamOut;
    char pad_01[4];
};

class CDampedValueComponentUpdater {
public:
    // CUtlVector< CDampedValueUpdateItem > m_items;
    char pad_00[72];
};

class CDemoSettingsComponentUpdater {
public:
    char pad_00[48];
    CAnimDemoCaptureSettings m_settings;
};

class CLODComponentUpdater {
public:
    char pad_00[48];
    int32_t m_nServerLOD;
    char pad_01[4];
};

class CLookComponentUpdater {
public:
    char pad_00[52];
    CAnimParamHandle m_hLookHeading;
    CAnimParamHandle m_hLookHeadingNormalized;
    CAnimParamHandle m_hLookHeadingVelocity;
    CAnimParamHandle m_hLookPitch;
    CAnimParamHandle m_hLookDistance;
    CAnimParamHandle m_hLookDirection;
    CAnimParamHandle m_hLookTarget;
    CAnimParamHandle m_hLookTargetWorldSpace;
    bool m_bNetworkLookTarget;
    char pad_01[3];
};

class CMovementComponentUpdater {
public:
    // CUtlVector< CSmartPtr< CAnimMotorUpdaterBase > > m_motors;
    char pad_00[72];
    CAnimInputDamping m_facingDamping;
    char pad_01[8];
    int32_t m_nDefaultMotorIndex;
    float m_flDefaultRunSpeed;
    bool m_bMoveVarsDisabled;
    bool m_bNetworkPath;
    bool m_bNetworkFacing;
    CAnimParamHandle m_paramHandles;
    char pad_02[67];
};

class CAnimMotorUpdaterBase {
public:
    // CUtlString m_name;
    char pad_00[24];
    bool m_bDefault;
    char pad_01[7];
};

class CPairedSequenceComponentUpdater {
public:
    char pad_00[56];
};

class WeightList {
public:
    // CUtlString m_name;
    // CUtlVector< float32 > m_weights;
    char pad_00[32];
};

class CRagdollComponentUpdater {
public:
    // CUtlVector< CAnimNodePath > m_ragdollNodePaths;
    // CUtlVector< CAnimNodePath > m_followAttachmentNodePaths;
    // CUtlVector< int32 > m_boneIndices;
    // CUtlVector< CUtlString > m_boneNames;
    // CUtlVector< WeightList > m_weightLists;
    // CUtlVector< int32 > m_boneToWeightIndices;
    char pad_00[192];
    float m_flSpringFrequencyMin;
    float m_flSpringFrequencyMax;
    float m_flMaxStretch;
    bool m_bSolidCollisionAtZeroWeight;
    char pad_01[11];
};

class CRemapValueUpdateItem {
public:
    CAnimParamHandle m_hParamIn;
    CAnimParamHandle m_hParamOut;
    float m_flMinInputValue;
    float m_flMaxInputValue;
    float m_flMinOutputValue;
    float m_flMaxOutputValue;
};

class CRemapValueComponentUpdater {
public:
    // CUtlVector< CRemapValueUpdateItem > m_items;
    char pad_00[72];
};

class CSlopeComponentUpdater {
public:
    char pad_00[52];
    float m_flTraceDistance;
    CAnimParamHandle m_hSlopeAngle;
    CAnimParamHandle m_hSlopeAngleFront;
    CAnimParamHandle m_hSlopeAngleSide;
    CAnimParamHandle m_hSlopeHeading;
    CAnimParamHandle m_hSlopeNormal;
    CAnimParamHandle m_hSlopeNormal_WorldSpace;
    char pad_01[4];
};

class CStateMachineComponentUpdater {
public:
    char pad_00[48];
    CAnimStateMachineUpdater m_stateMachine;
};

class CAnimStateMachineUpdater {
public:
    // CUtlVector< CStateUpdateData > m_states;
    // CUtlVector< CTransitionUpdateData > m_transitions;
    char pad_00[80];
    int32_t m_startStateIndex;
    char pad_01[4];
};

class CMotionDataSet {
public:
    // CUtlVector< CMotionGraphGroup > m_groups;
    char pad_00[24];
    int32_t m_nDimensionCount;
    char pad_01[4];
};

class CMotionGraphGroup {
public:
    CMotionSearchDB m_searchDB;
    // CUtlVector< CSmartPtr< CMotionGraph > > m_motionGraphs;
    // CUtlVector< CMotionGraphConfig > m_motionGraphConfigs;
    // CUtlVector< int32 > m_sampleToConfig;
    char pad_00[72];
    AnimScriptHandle m_hIsActiveScript;
    char pad_01[4];
};

class CMotionSearchDB {
public:
    CMotionSearchNode m_rootNode;
    CProductQuantizer m_residualQuantizer;
    // CUtlVector< MotionDBIndex > m_codeIndices;
    char pad_00[24];
};

class CMotionGraph {
public:
    char pad_00[16];
    CParamSpanUpdater m_paramSpans;
    // CUtlVector< TagSpan_t > m_tags;
    // CSmartPtr< CMotionNode > m_pRootNode;
    char pad_01[32];
    int32_t m_nParameterCount;
    int32_t m_nConfigStartIndex;
    int32_t m_nConfigCount;
    bool m_bLoop;
    char pad_02[3];
};

class CMotionGraphConfig {
public:
    float m_paramValues[4];
    float m_flDuration;
    MotionIndex m_nMotionIndex;
    int32_t m_nSampleStart;
    int32_t m_nSampleCount;
};

class SampleCode {
public:
    uint8_t m_subCode[8];
};

class MotionDBIndex {
public:
    uint32_t m_nIndex;
};

class CVectorQuantizer {
public:
    // CUtlVector< float32 > m_centroidVectors;
    char pad_00[24];
    int32_t m_nCentroids;
    int32_t m_nDimensions;
};

class CProductQuantizer {
public:
    // CUtlVector< CVectorQuantizer > m_subQuantizers;
    char pad_00[24];
    int32_t m_nDimensions;
    char pad_01[4];
};

class CMotionSearchNode {
public:
    // CUtlVector< CMotionSearchNode* > m_children;
    char pad_00[24];
    CVectorQuantizer m_quantizer;
    // CUtlVector< CUtlVector< SampleCode > > m_sampleCodes;
    // CUtlVector< CUtlVector< int32 > > m_sampleIndices;
    // CUtlVector< int32 > m_selectableSamples;
    char pad_01[72];
};

class CMotionNode {
public:
    // CUtlString m_name;
    char pad_00[32];
    AnimNodeID m_id;
    char pad_01[4];
};

class CEditableMotionGraph {
public:
    char pad_00[88];
};

class CMotionNodeSequence {
public:
    // CUtlVector< TagSpan_t > m_tags;
    char pad_00[64];
    HSequence m_hSequence;
    float m_flPlaybackSpeed;
};

class MotionBlendItem {
public:
    // CSmartPtr< CMotionNode > m_pChild;
    char pad_00[8];
    float m_flKeyValue;
    char pad_01[4];
};

class CMotionNodeBlend1D {
public:
    // CUtlVector< MotionBlendItem > m_blendItems;
    char pad_00[64];
    int32_t m_nParamIndex;
    char pad_01[4];
};

class CMotionMetricEvaluator {
public:
    // CUtlVector< float32 > m_means;
    // CUtlVector< float32 > m_standardDeviations;
    char pad_00[72];
    float m_flWeight;
    int32_t m_nDimensionStartIndex;
};

class CBlockSelectionMetricEvaluator {
public:
    char pad_00[80];
};

class CBonePositionMetricEvaluator {
public:
    char pad_00[80];
    int32_t m_nBoneIndex;
    char pad_01[4];
};

class CBoneVelocityMetricEvaluator {
public:
    char pad_00[80];
    int32_t m_nBoneIndex;
    char pad_01[4];
};

class CCurrentRotationVelocityMetricEvaluator {
public:
    char pad_00[80];
};

class CCurrentVelocityMetricEvaluator {
public:
    char pad_00[80];
};

class CDistanceRemainingMetricEvaluator {
public:
    char pad_00[80];
    float m_flMaxDistance;
    float m_flMinDistance;
    float m_flStartGoalFilterDistance;
    float m_flMaxGoalOvershootScale;
    bool m_bFilterFixedMinDistance;
    bool m_bFilterGoalDistance;
    bool m_bFilterGoalOvershoot;
    char pad_01[5];
};

class CFootCycleMetricEvaluator {
public:
    // CUtlVector< int32 > m_footIndices;
    char pad_00[104];
};

class CFootPositionMetricEvaluator {
public:
    // CUtlVector< int32 > m_footIndices;
    char pad_00[104];
    bool m_bIgnoreSlope;
    char pad_01[7];
};

class CFutureFacingMetricEvaluator {
public:
    char pad_00[80];
    float m_flDistance;
    float m_flTime;
};

class CFutureVelocityMetricEvaluator {
public:
    char pad_00[80];
    float m_flDistance;
    float m_flStoppingDistance;
    float m_flTargetSpeed;
    VelocityMetricMode m_eMode;
    char pad_01[3];
};

class CPathMetricEvaluator {
public:
    // CUtlVector< float32 > m_pathTimeSamples;
    char pad_00[104];
    float m_flDistance;
    bool m_bExtrapolateMovement;
    float m_flMinExtrapolationSpeed;
    char pad_01[4];
};

class CStepsRemainingMetricEvaluator {
public:
    // CUtlVector< int32 > m_footIndices;
    char pad_00[104];
    float m_flMinStepsRemaining;
    char pad_01[4];
};

class CTimeRemainingMetricEvaluator {
public:
    char pad_00[80];
    bool m_bMatchByTimeRemaining;
    float m_flMaxTimeRemaining;
    bool m_bFilterByTimeRemaining;
    float m_flMinTimeRemaining;
};

class CPathAnimMotorUpdaterBase {
public:
    char pad_00[32];
    bool m_bLockToPath;
    char pad_01[7];
};

class CDampedPathAnimMotorUpdater {
public:
    char pad_00[44];
    float m_flAnticipationTime;
    float m_flMinSpeedScale;
    CAnimParamHandle m_hAnticipationPosParam;
    CAnimParamHandle m_hAnticipationHeadingParam;
    float m_flSpringConstant;
    float m_flMinSpringTension;
    float m_flMaxSpringTension;
    char pad_01[4];
};

class CPathAnimMotorUpdater {
public:
    char pad_00[40];
};

class CPlayerInputAnimMotorUpdater {
public:
    // CUtlVector< float32 > m_sampleTimes;
    char pad_00[60];
    float m_flSpringConstant;
    float m_flAnticipationDistance;
    CAnimParamHandle m_hAnticipationPosParam;
    CAnimParamHandle m_hAnticipationHeadingParam;
    bool m_bUseAcceleration;
    char pad_01[7];
};

class AimMatrixOpFixedSettings_t {
public:
    CAnimAttachment m_attachment;
    CAnimInputDamping m_damping;
    CPoseHandle m_poseCacheHandles;
    char pad_00[36];
    AimMatrixBlendMode m_eBlendMode;
    float m_flMaxYawAngle;
    float m_flMaxPitchAngle;
    int32_t m_nSequenceMaxFrame;
    int32_t m_nBoneMaskIndex;
    bool m_bTargetIsPosition;
    bool m_bUseBiasAndClamp;
    float m_flBiasAndClampYawOffset;
    float m_flBiasAndClampPitchOffset;
    CBlendCurve m_biasAndClampBlendCurve;
    char pad_01[8];
};

class CPoseHandle {
public:
    uint16_t m_nIndex;
    PoseType_t m_eType;
    char pad_00[1];
};

class AimCameraOpFixedSettings_t {
public:
    int32_t m_nChainIndex;
    int32_t m_nCameraJointIndex;
    int32_t m_nPelvisJointIndex;
    int32_t m_nClavicleLeftJointIndex;
    int32_t m_nClavicleRightJointIndex;
    int32_t m_nDepenetrationJointIndex;
    // CUtlVector< int32 > m_propJoints;
    char pad_00[24];
};

class FollowAttachmentSettings_t {
public:
    CAnimAttachment m_attachment;
    int32_t m_boneIndex;
    AttachmentHandle_t m_attachmentHandle;
    bool m_bMatchTranslation;
    bool m_bMatchRotation;
    char pad_00[9];
};

class FollowTargetOpFixedSettings_t {
public:
    int32_t m_boneIndex;
    bool m_bBoneTarget;
    int32_t m_boneTargetIndex;
    bool m_bWorldCoodinateTarget;
    bool m_bMatchTargetOrientation;
    char pad_00[2];
};

class FootLockPoseOpFixedSettings {
public:
    // CUtlVector< FootFixedData_t > m_footInfo;
    char pad_00[24];
    CAnimInputDamping m_hipDampingSettings;
    int32_t m_nHipBoneIndex;
    IKSolverType m_ikSolverType;
    bool m_bApplyTilt;
    bool m_bApplyHipDrop;
    bool m_bAlwaysUseFallbackHinge;
    bool m_bApplyFootRotationLimits;
    bool m_bApplyLegTwistLimits;
    float m_flMaxFootHeight;
    float m_flExtensionScale;
    float m_flMaxLegTwist;
    bool m_bEnableLockBreaking;
    float m_flLockBreakTolerance;
    float m_flLockBlendTime;
    bool m_bEnableStretching;
    float m_flMaxStretchAmount;
    float m_flStretchExtensionScale;
    char pad_01[4];
};

class FootFixedData_t {
public:
    // VectorAligned m_vToeOffset;
    // VectorAligned m_vHeelOffset;
    char pad_00[32];
    int32_t m_nTargetBoneIndex;
    int32_t m_nAnkleBoneIndex;
    int32_t m_nIKAnchorBoneIndex;
    int32_t m_ikChainIndex;
    float m_flMaxIKLength;
    int32_t m_nFootIndex;
    int32_t m_nTagIndex;
    float m_flMaxRotationLeft;
    float m_flMaxRotationRight;
    char pad_01[12];
};

class FootPinningPoseOpFixedData_t {
public:
    // CUtlVector< FootFixedData_t > m_footInfo;
    char pad_00[24];
    float m_flBlendTime;
    float m_flLockBreakDistance;
    float m_flMaxLegTwist;
    int32_t m_nHipBoneIndex;
    bool m_bApplyLegTwistLimits;
    bool m_bApplyFootRotationLimits;
    char pad_01[6];
};

class HitReactFixedSettings_t {
public:
    int32_t m_nWeightListIndex;
    int32_t m_nEffectedBoneCount;
    float m_flMaxImpactForce;
    float m_flMinImpactForce;
    float m_flWhipImpactScale;
    float m_flCounterRotationScale;
    float m_flDistanceFadeScale;
    float m_flPropagationScale;
    float m_flWhipDelay;
    float m_flSpringStrength;
    float m_flWhipSpringStrength;
    float m_flMaxAngleRadians;
    int32_t m_nHipBoneIndex;
    float m_flHipBoneTranslationScale;
    float m_flHipDipSpringStrength;
    float m_flHipDipImpactScale;
    float m_flHipDipDelay;
};

class JiggleBoneSettings_t {
public:
    int32_t m_nBoneIndex;
    float m_flSpringStrength;
    float m_flMaxTimeStep;
    float m_flDamping;
    // Vector m_vBoundsMaxLS;
    // Vector m_vBoundsMinLS;
    char pad_00[24];
    JiggleBoneSimSpace m_eSimSpace;
};

class JiggleBoneSettingsList_t {
public:
    // CUtlVector< JiggleBoneSettings_t > m_boneSettings;
    char pad_00[24];
};

class LookAtBone_t {
public:
    int32_t m_index;
    float m_weight;
};

class LookAtOpFixedSettings_t {
public:
    CAnimAttachment m_attachment;
    CAnimInputDamping m_damping;
    // CUtlVector< LookAtBone_t > m_bones;
    char pad_00[24];
    float m_flYawLimit;
    float m_flPitchLimit;
    float m_flHysteresisInnerAngle;
    float m_flHysteresisOuterAngle;
    bool m_bRotateYawForward;
    bool m_bMaintainUpDirection;
    bool m_bTargetIsPosition;
    bool m_bUseHysteresis;
    char pad_01[12];
};

class ChainToSolveData_t {
public:
    int32_t m_nChainIndex;
    IKSolverSettings_t m_SolverSettings;
    IKTargetSettings_t m_TargetSettings;
    SolveIKChainAnimNodeDebugSetting m_DebugSetting;
    float m_flDebugNormalizedValue;
    // VectorAligned m_vDebugOffset;
    char pad_00[16];
};

class IKSolverSettings_t {
public:
    IKSolverType m_SolverType;
    int32_t m_nNumIterations;
    EIKEndEffectorRotationFixUpMode m_EndEffectorRotationFixUpMode;
};

class IKTargetSettings_t {
public:
    IKTargetSource m_TargetSource;
    IKBoneNameAndIndex_t m_Bone;
    AnimParamID m_AnimgraphParameterNamePosition;
    AnimParamID m_AnimgraphParameterNameOrientation;
    IKTargetCoordinateSystem m_TargetCoordSystem;
    char pad_00[4];
};

class SolveIKChainPoseOpFixedSettings_t {
public:
    // CUtlVector< ChainToSolveData_t > m_ChainsToSolveData;
    char pad_00[24];
};

class CConcreteAnimParameter {
public:
    char pad_00[112];
    AnimParamButton_t m_previewButton;
    AnimParamNetworkSetting m_eNetworkSetting;
    bool m_bUseMostRecentValue;
    bool m_bAutoReset;
    bool m_bGameWritable;
    bool m_bGraphWritable;
    char pad_01[4];
};

class CVirtualAnimParameter {
public:
    // CUtlString m_expressionString;
    char pad_00[120];
    AnimParamType_t m_eParamType;
    char pad_01[7];
};

class CBoolAnimParameter {
public:
    char pad_00[128];
    bool m_bDefaultValue;
    char pad_01[7];
};

class CEnumAnimParameter {
public:
    char pad_00[136];
    uint8_t m_defaultValue;
    // CUtlVector< CUtlString > m_enumOptions;
    // CUtlVector< uint64 > m_vecEnumReferenced;
    char pad_01[79];
};

class CIntAnimParameter {
public:
    char pad_00[128];
    int32_t m_defaultValue;
    int32_t m_minValue;
    int32_t m_maxValue;
    char pad_01[4];
};

class CFloatAnimParameter {
public:
    char pad_00[128];
    float m_fDefaultValue;
    float m_fMinValue;
    float m_fMaxValue;
    bool m_bInterpolate;
    char pad_01[3];
};

class CVectorAnimParameter {
public:
    // Vector m_defaultValue;
    char pad_00[140];
    bool m_bInterpolate;
    AnimParamVectorType_t m_vectorType;
    char pad_01[4];
};

class CQuaternionAnimParameter {
public:
    // Quaternion m_defaultValue;
    char pad_00[144];
    bool m_bInterpolate;
    char pad_01[15];
};

class CSymbolAnimParameter {
public:
    // CGlobalSymbol m_defaultValue;
    char pad_00[136];
};

class ScriptInfo_t {
public:
    // CUtlString m_code;
    // CUtlVector< CAnimParamHandle > m_paramsModified;
    // CUtlVector< int32 > m_proxyReadParams;
    // CUtlVector< int32 > m_proxyWriteParams;
    char pad_00[80];
    AnimScriptType m_eScriptType;
    char pad_01[6];
};

class CStateActionUpdater {
public:
    // CSmartPtr< CAnimActionUpdater > m_pAction;
    char pad_00[8];
    StateActionBehavior m_eBehavior;
    char pad_01[4];
};

class CTransitionUpdateData {
public:
    uint8_t m_srcStateIndex;
    uint8_t m_destStateIndex;
    // bitfield:7 m_nHandshakeMaskToDisableFirst;
    // bitfield:1 m_bDisabled;
    char pad_00[1];
};

class CStateUpdateData {
public:
    // CUtlString m_name;
    char pad_00[8];
    AnimScriptHandle m_hScript;
    // CUtlVector< int32 > m_transitionIndices;
    // CUtlVector< CStateActionUpdater > m_actions;
    char pad_01[52];
    AnimStateID m_stateID;
    // bitfield:1 m_bIsStartState;
    // bitfield:1 m_bIsEndState;
    // bitfield:1 m_bIsPassthrough;
    // bitfield:1 m_bIsPassthroughRootMotion;
    // bitfield:1 m_bPreEvaluatePassthroughTransitionPath;
    char pad_02[4];
};

class CAnimUpdateNodeRef {
public:
    char pad_00[8];
    int32_t m_nodeIndex;
    char pad_01[4];
};

class CBinaryUpdateNode {
public:
    char pad_00[96];
    CAnimUpdateNodeRef m_pChild1;
    CAnimUpdateNodeRef m_pChild2;
    BinaryNodeTiming m_timingBehavior;
    float m_flTimingBlend;
    bool m_bResetChild1;
    bool m_bResetChild2;
    char pad_01[6];
};

class CBlendUpdateNode {
public:
    // CUtlVector< CAnimUpdateNodeRef > m_children;
    // CUtlVector< uint8 > m_sortedOrder;
    // CUtlVector< float32 > m_targetValues;
    char pad_00[172];
    AnimValueSource m_blendValueSource;
    LinearRootMotionBlendMode_t m_eLinearRootMotionBlendMode;
    CAnimParamHandle m_paramIndex;
    CAnimInputDamping m_damping;
    BlendKeyType m_blendKeyType;
    bool m_bLockBlendOnReset;
    bool m_bSyncCycles;
    bool m_bLoop;
    bool m_bLockWhenWaning;
    bool m_bIsAngle;
    char pad_01[7];
};

class BlendItem_t {
public:
    // CUtlVector< TagSpan_t > m_tags;
    char pad_00[24];
    CAnimUpdateNodeRef m_pChild;
    HSequence m_hSequence;
    // Vector2D m_vPos;
    char pad_01[8];
    float m_flDuration;
    bool m_bUseCustomDuration;
    char pad_02[7];
};

class CBlend2DUpdateNode {
public:
    // CUtlVector< BlendItem_t > m_items;
    // CUtlVector< TagSpan_t > m_tags;
    char pad_00[144];
    CParamSpanUpdater m_paramSpans;
    // CUtlVector< int32 > m_nodeItemIndices;
    char pad_01[24];
    CAnimInputDamping m_damping;
    AnimValueSource m_blendSourceX;
    CAnimParamHandle m_paramX;
    AnimValueSource m_blendSourceY;
    CAnimParamHandle m_paramY;
    Blend2DMode m_eBlendMode;
    float m_playbackSpeed;
    bool m_bLoop;
    bool m_bLockBlendOnReset;
    bool m_bLockWhenWaning;
    bool m_bAnimEventsAndTagsOnMostWeightedOnly;
    char pad_02[4];
};

class CBoneMaskUpdateNode {
public:
    char pad_00[148];
    int32_t m_nWeightListIndex;
    float m_flRootMotionBlend;
    BoneMaskBlendSpace m_blendSpace;
    BinaryNodeChildOption m_footMotionTiming;
    bool m_bUseBlendScale;
    AnimValueSource m_blendValueSource;
    CAnimParamHandle m_hBlendParameter;
    char pad_01[2];
};

class CChoiceUpdateNode {
public:
    // CUtlVector< CAnimUpdateNodeRef > m_children;
    // CUtlVector< float32 > m_weights;
    // CUtlVector< float32 > m_blendTimes;
    char pad_00[168];
    ChoiceMethod m_choiceMethod;
    ChoiceChangeMethod m_choiceChangeMethod;
    ChoiceBlendMethod m_blendMethod;
    float m_blendTime;
    bool m_bCrossFade;
    bool m_bResetChosen;
    bool m_bDontResetSameSelection;
    char pad_01[5];
};

class CDirectPlaybackTagData {
public:
    // CUtlString m_sequenceName;
    // CUtlVector< TagSpan_t > m_tags;
    char pad_00[32];
};

class TraceSettings_t {
public:
    float m_flTraceHeight;
    float m_flTraceRadius;
};

class FootFixedSettings {
public:
    TraceSettings_t m_traceSettings;
    // VectorAligned m_vFootBaseBindPosePositionMS;
    char pad_00[24];
    float m_flFootBaseLength;
    float m_flMaxRotationLeft;
    float m_flMaxRotationRight;
    int32_t m_footstepLandedTagIndex;
    bool m_bEnableTracing;
    float m_flTraceAngleBlend;
    int32_t m_nDisableTagIndex;
    int32_t m_nFootIndex;
};

class FootStepTrigger {
public:
    // CUtlVector< int32 > m_tags;
    char pad_00[24];
    int32_t m_nFootIndex;
    StepPhase m_triggerPhase;
};

class CLeafUpdateNode {
public:
    char pad_00[88];
};

class CLeanMatrixUpdateNode {
public:
    char pad_00[92];
    int32_t m_frameCorners[3];
    char pad_01[24];
    CPoseHandle m_poses;
    char pad_02[32];
    CAnimInputDamping m_damping;
    AnimVectorSource m_blendSource;
    CAnimParamHandle m_paramIndex;
    // Vector m_verticalAxis;
    // Vector m_horizontalAxis;
    HSequence m_hSequence;
    float m_flMaxValue;
    int32_t m_nSequenceMaxFrame;
    char pad_03[4];
};

class CMotionGraphUpdateNode {
public:
    // CSmartPtr< CMotionGraph > m_pMotionGraph;
    char pad_00[104];
};

class CMotionMatchingUpdateNode {
public:
    char pad_00[88];
    CMotionDataSet m_dataSet;
    // CUtlVector< CSmartPtr< CMotionMetricEvaluator > > m_metrics;
    // CUtlVector< float32 > m_weights;
    char pad_01[104];
    bool m_bSearchEveryTick;
    float m_flSearchInterval;
    bool m_bSearchWhenClipEnds;
    bool m_bSearchWhenGoalChanges;
    CBlendCurve m_blendCurve;
    float m_flSampleRate;
    float m_flBlendTime;
    bool m_bLockClipWhenWaning;
    float m_flSelectionThreshold;
    float m_flReselectionTimeWindow;
    bool m_bEnableRotationCorrection;
    bool m_bGoalAssist;
    float m_flGoalAssistDistance;
    float m_flGoalAssistTolerance;
    CAnimInputDamping m_distanceScale_Damping;
    float m_flDistanceScale_OuterRadius;
    float m_flDistanceScale_InnerRadius;
    float m_flDistanceScale_MaxScale;
    float m_flDistanceScale_MinScale;
    bool m_bEnableDistanceScaling;
    char pad_02[7];
};

class CSelectorUpdateNode {
public:
    // CUtlVector< CAnimUpdateNodeRef > m_children;
    // CUtlVector< int8 > m_tags;
    char pad_00[148];
    CBlendCurve m_blendCurve;
    // CAnimValue< float32 > m_flBlendTime;
    char pad_01[8];
    CAnimParamHandle m_hParameter;
    int32_t m_nTagIndex;
    SelectorTagBehavior_t m_eTagBehavior;
    bool m_bResetOnChange;
    bool m_bLockWhenWaning;
    bool m_bSyncCyclesOnChange;
    char pad_02[5];
};

class CSequenceUpdateNodeBase {
public:
    char pad_00[108];
    float m_playbackSpeed;
    bool m_bLoop;
    char pad_01[7];
};

class CSequenceUpdateNode {
public:
    char pad_00[120];
    HSequence m_hSequence;
    float m_duration;
    CParamSpanUpdater m_paramSpans;
    // CUtlVector< TagSpan_t > m_tags;
    char pad_01[24];
};

class CSingleFrameUpdateNode {
public:
    // CUtlVector< CSmartPtr< CAnimActionUpdater > > m_actions;
    char pad_00[112];
    CPoseHandle m_hPoseCacheHandle;
    HSequence m_hSequence;
    float m_flCycle;
    char pad_01[4];
};

class CSolveIKTargetHandle_t {
public:
    CAnimParamHandle m_positionHandle;
    CAnimParamHandle m_orientationHandle;
};

class StanceInfo_t {
public:
    // Vector m_vPosition;
    char pad_00[12];
    float m_flDirection;
};

class CStateNodeTransitionData {
public:
    CBlendCurve m_curve;
    // CAnimValue< float32 > m_blendDuration;
    // CAnimValue< float32 > m_resetCycleValue;
    // bitfield:1 m_bReset;
    // bitfield:3 m_resetCycleOption;
    char pad_00[20];
};

class CStateNodeStateData {
public:
    CAnimUpdateNodeRef m_pChild;
    // bitfield:1 m_bExclusiveRootMotion;
    // bitfield:1 m_bExclusiveRootMotionFirstFrame;
    char pad_00[8];
};

class CStateMachineUpdateNode {
public:
    char pad_00[112];
    CAnimStateMachineUpdater m_stateMachine;
    // CUtlVector< CStateNodeStateData > m_stateData;
    // CUtlVector< CStateNodeTransitionData > m_transitionData;
    char pad_01[52];
    bool m_bBlockWaningTags;
    bool m_bLockStateWhenWaning;
    bool m_bResetWhenActivated;
    char pad_02[1];
};

class CSubtractUpdateNode {
public:
    char pad_00[148];
    BinaryNodeChildOption m_footMotionTiming;
    bool m_bApplyToFootMotion;
    bool m_bApplyChannelsSeparately;
    bool m_bUseModelSpace;
    char pad_01[5];
};

class CTargetSelectorUpdateNode {
public:
    char pad_00[96];
    TargetSelectorAngleMode_t m_eAngleMode;
    // CUtlVector< CAnimUpdateNodeRef > m_children;
    char pad_01[32];
    CAnimParamHandle m_hTargetPosition;
    CAnimParamHandle m_hTargetFacePositionParameter;
    CAnimParamHandle m_hMoveHeadingParameter;
    CAnimParamHandle m_hDesiredMoveHeadingParameter;
    bool m_bTargetPositionIsWorldSpace;
    bool m_bTargetFacePositionIsWorldSpace;
    bool m_bEnablePhaseMatching;
    float m_flPhaseMatchingMaxRootMotionSkip;
    char pad_02[12];
};

class TwoBoneIKSettings_t {
public:
    IkEndEffectorType m_endEffectorType;
    CAnimAttachment m_endEffectorAttachment;
    IkTargetType m_targetType;
    CAnimAttachment m_targetAttachment;
    int32_t m_targetBoneIndex;
    CAnimParamHandle m_hPositionParam;
    CAnimParamHandle m_hRotationParam;
    bool m_bAlwaysUseFallbackHinge;
    // VectorAligned m_vLsFallbackHingeAxis;
    char pad_00[20];
    int32_t m_nFixedBoneIndex;
    int32_t m_nMiddleBoneIndex;
    int32_t m_nEndBoneIndex;
    bool m_bMatchTargetOrientation;
    bool m_bConstrainTwist;
    float m_flMaxTwist;
    char pad_01[12];
};

class CUnaryUpdateNode {
public:
    char pad_00[96];
    CAnimUpdateNodeRef m_pChildNode;
};

class CWayPointHelperUpdateNode {
public:
    char pad_00[116];
    float m_flStartCycle;
    float m_flEndCycle;
    bool m_bOnlyGoals;
    bool m_bPreventOvershoot;
    bool m_bPreventUndershoot;
    char pad_01[1];
};

class CZeroPoseUpdateNode {
public:
    char pad_00[96];
};

class ConfigIndex {
public:
    uint16_t m_nGroup;
    uint16_t m_nConfig;
};

class MotionIndex {
public:
    uint16_t m_nGroup;
    uint16_t m_nMotion;
};

class CAnimationGraphVisualizerPrimitiveBase {
public:
    char pad_00[8];
    CAnimationGraphVisualizerPrimitiveType m_Type;
    AnimNodeID m_OwningAnimNodePaths;
    char pad_01[40];
    int32_t m_nOwningAnimNodePathCount;
    char pad_02[4];
};

class CAnimationGraphVisualizerText {
public:
    // VectorAligned m_vWsPosition;
    // Color m_Color;
    // CUtlString m_Text;
    char pad_00[96];
};

class CAnimationGraphVisualizerSphere {
public:
    // VectorAligned m_vWsPosition;
    char pad_00[80];
    float m_flRadius;
    // Color m_Color;
    char pad_01[12];
};

class CAnimationGraphVisualizerLine {
public:
    // VectorAligned m_vWsPositionStart;
    // VectorAligned m_vWsPositionEnd;
    // Color m_Color;
    char pad_00[112];
};

class CAnimationGraphVisualizerPie {
public:
    // VectorAligned m_vWsCenter;
    // VectorAligned m_vWsStart;
    // VectorAligned m_vWsEnd;
    // Color m_Color;
    char pad_00[128];
};

class CAnimationGraphVisualizerAxis {
public:
    // CTransform m_xWsTransform;
    char pad_00[96];
    float m_flAxisSize;
    char pad_01[12];
};

class IAnimationGraphInstance {
public:
    char pad_00[24];
};

class IKBoneNameAndIndex_t {
public:
    // CUtlString m_Name;
    char pad_00[16];
};

class CNmBlendTaskBase {
public:
    char pad_00[224];
};

class CNmBlendTask {
public:
    char pad_00[224];
};

class CNmOverlayBlendTask {
public:
    char pad_00[224];
};

class CNmAdditiveBlendTask {
public:
    char pad_00[224];
};

class CNmModelSpaceBlendTask {
public:
    char pad_00[224];
};

class CNmCachedPoseWriteTask {
public:
    char pad_00[96];
};

class CNmCachedPoseReadTask {
public:
    char pad_00[96];
};

class CNmChainLookatTask {
public:
    char pad_00[88];
    int32_t m_nChainEndBoneIdx;
    int32_t m_nNumBonesInChain;
    // Vector m_chainForwardDir;
    char pad_01[12];
    float m_flBlendWeight;
    float m_flHorizontalAngleLimitDegrees;
    float m_flVerticalAngleLimitDegrees;
    // Vector m_lookatTarget;
    char pad_02[12];
    bool m_bIsTargetInWorldSpace;
    bool m_bIsRunningFromDeserializedData;
    float m_flHorizontalAngleDegrees;
    float m_flVerticalAngleDegrees;
};

class CNmChainSolverTask {
public:
    char pad_00[88];
    int32_t m_nEffectorBoneIdx;
    int32_t m_nEffectorTargetBoneIdx;
    // CTransform m_targetTransform;
    char pad_01[32];
    int32_t m_nNumBonesInChain;
    CNmTarget m_effectorTarget;
    NmIKBlendMode_t m_blendMode;
    float m_flBlendWeight;
    bool m_bIsTargetInWorldSpace;
    bool m_bIsRunningFromDeserializedData;
    // CGlobalSymbol m_debugEffectorBoneID;
    // CTransform m_chainStartTransformMS;
    // CTransform m_debugRequestedTargetTransformMS;
    char pad_02[84];
    float m_debugTotalChainLength;
    char pad_03[12];
};

class CNmReferencePoseTask {
public:
    char pad_00[88];
};

class CNmZeroPoseTask {
public:
    char pad_00[88];
};

class CNmFollowBoneTask {
public:
    char pad_00[120];
};

class CNmSampleTask {
public:
    char pad_00[104];
};

class CNmScaleTask {
public:
    char pad_00[176];
};

class CNmTwoBoneIKTask {
public:
    char pad_00[88];
    int32_t m_nEffectorBoneIdx;
    int32_t m_nEffectorTargetBoneIdx;
    // CTransform m_targetTransform;
    char pad_01[32];
    CNmTarget m_effectorTarget;
    NmIKBlendMode_t m_blendMode;
    float m_flBlendWeight;
    bool m_bIsTargetInWorldSpace;
    bool m_bIsRunningFromDeserializedData;
    float m_flReferencePoseTwistWeight;
    // CGlobalSymbol m_debugEffectorBoneID;
    char pad_02[16];
};

class CNmParameterizedBlendNode::CDefinition {
public:
    // CUtlVectorFixedGrowable< int16, 5 > m_sourceNodeIndices;
    char pad_00[56];
    int16_t m_nInputParameterValueNodeIdx;
    bool m_bAllowLooping;
    char pad_01[5];
};

class CNmBlend1DNode::CDefinition {
public:
    char pad_00[64];
    CNmParameterizedBlendNode::Parameterization_t m_parameterization;
};

class CNmVelocityBlendNode::CDefinition {
public:
    char pad_00[64];
};

class CNmBlend2DNode::CDefinition {
public:
    // CUtlVectorFixedGrowable< int16, 5 > m_sourceNodeIndices;
    char pad_00[56];
    int16_t m_nInputParameterNodeIdx0;
    int16_t m_nInputParameterNodeIdx1;
    // CUtlVectorFixedGrowable< Vector2D, 10 > m_values;
    // CUtlVectorFixedGrowable< uint8, 30 > m_indices;
    // CUtlVectorFixedGrowable< uint8, 10 > m_hullIndices;
    char pad_01[204];
    bool m_bAllowLooping;
    char pad_02[7];
};

class CNmBoneMaskNode::CDefinition {
public:
    // CGlobalSymbol m_boneMaskID;
    char pad_00[24];
};

class CNmFixedWeightBoneMaskNode::CDefinition {
public:
    char pad_00[16];
    float m_flBoneWeight;
    char pad_01[4];
};

class CNmBoneMaskBlendNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceMaskNodeIdx;
    int16_t m_nTargetMaskNodeIdx;
    int16_t m_nBlendWeightValueNodeIdx;
    char pad_01[2];
};

class CNmBoneMaskSelectorNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_defaultMaskNodeIdx;
    int16_t m_parameterValueNodeIdx;
    bool m_bSwitchDynamically;
    // CUtlVectorFixedGrowable< int16, 7 > m_maskNodeIndices;
    // CUtlVectorFixedGrowable< CGlobalSymbol, 7 > m_parameterValues;
    char pad_01[120];
    float m_flBlendTimeSeconds;
    char pad_02[4];
};

class CNmBoneMaskSwitchNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nSwitchValueNodeIdx;
    int16_t m_nTrueValueNodeIdx;
    int16_t m_nFalseValueNodeIdx;
    float m_flBlendTimeSeconds;
    bool m_bSwitchDynamically;
    char pad_01[3];
};

class CNmAndNode::CDefinition {
public:
    // CUtlLeanVectorFixedGrowable< int16, 4 > m_conditionNodeIndices;
    char pad_00[32];
};

class CNmOrNode::CDefinition {
public:
    // CUtlLeanVectorFixedGrowable< int16, 4 > m_conditionNodeIndices;
    char pad_00[32];
};

class CNmNotNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    char pad_01[6];
};

class CNmCachedBoolNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    NmCachedValueMode_t m_mode;
};

class CNmCachedIDNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    NmCachedValueMode_t m_mode;
};

class CNmCachedFloatNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    NmCachedValueMode_t m_mode;
};

class CNmCachedVectorNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    NmCachedValueMode_t m_mode;
};

class CNmCachedTargetNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    NmCachedValueMode_t m_mode;
};

class CNmClipReferenceNode::CDefinition {
public:
    char pad_00[16];
};

class CNmClipNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nPlayInReverseValueNodeIdx;
    int16_t m_nResetTimeValueNodeIdx;
    bool m_bSampleRootMotion;
    bool m_bAllowLooping;
    int16_t m_nDataSlotIdx;
    // CUtlVectorFixedGrowable< CGlobalSymbol, 2 > m_graphEvents;
    char pad_01[40];
    float m_flSpeedMultiplier;
    int32_t m_nStartSyncEventOffset;
};

class CNmConstBoolNode::CDefinition {
public:
    char pad_00[16];
    bool m_bValue;
    char pad_01[7];
};

class CNmConstIDNode::CDefinition {
public:
    // CGlobalSymbol m_value;
    char pad_00[24];
};

class CNmConstFloatNode::CDefinition {
public:
    char pad_00[16];
    float m_flValue;
    char pad_01[4];
};

class CNmConstVectorNode::CDefinition {
public:
    // Vector m_value;
    char pad_00[32];
};

class CNmConstTargetNode::CDefinition {
public:
    char pad_00[16];
    CNmTarget m_value;
};

class CNmControlParameterBoolNode::CDefinition {
public:
    char pad_00[16];
};

class CNmControlParameterIDNode::CDefinition {
public:
    char pad_00[16];
};

class CNmControlParameterFloatNode::CDefinition {
public:
    char pad_00[16];
};

class CNmControlParameterVectorNode::CDefinition {
public:
    char pad_00[16];
};

class CNmControlParameterTargetNode::CDefinition {
public:
    char pad_00[16];
};

class CNmVirtualParameterBoolNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx;
    char pad_01[6];
};

class CNmVirtualParameterIDNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx;
    char pad_01[6];
};

class CNmVirtualParameterFloatNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx;
    char pad_01[6];
};

class CNmVirtualParameterVectorNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx;
    char pad_01[6];
};

class CNmVirtualParameterTargetNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx;
    char pad_01[6];
};

class CNmVirtualParameterBoneMaskNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx;
    char pad_01[6];
};

class CNmIDEventConditionNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx;
    CNmBitFlags m_eventConditionRules;
    // CUtlVectorFixedGrowable< CGlobalSymbol, 5 > m_eventIDs;
    char pad_01[64];
};

class CNmIDEventNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx;
    CNmBitFlags m_eventConditionRules;
    // CGlobalSymbol m_defaultValue;
    char pad_01[8];
};

class CNmIDEventPercentageThroughNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx;
    CNmBitFlags m_eventConditionRules;
    // CGlobalSymbol m_eventID;
    char pad_01[8];
};

class CNmGraphEventConditionNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx;
    CNmBitFlags m_eventConditionRules;
    // CUtlVectorFixedGrowable< CNmGraphEventConditionNode::Condition_t, 5 > m_conditions;
    char pad_01[104];
};

class CNmFootEventConditionNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx;
    NmFootPhaseCondition_t m_phaseCondition;
    CNmBitFlags m_eventConditionRules;
};

class CNmFootstepEventPercentageThroughNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx;
    NmFootPhaseCondition_t m_phaseCondition;
    CNmBitFlags m_eventConditionRules;
};

class CNmFootstepEventIDNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx;
    CNmBitFlags m_eventConditionRules;
};

class CNmSyncEventIndexConditionNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx;
    CNmSyncEventIndexConditionNode::TriggerMode_t m_triggerMode;
    int32_t m_syncEventIdx;
};

class CNmCurrentSyncEventIDNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx;
    char pad_01[6];
};

class CNmCurrentSyncEventNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx;
    CNmCurrentSyncEventNode::InfoType_t m_infoType;
    char pad_01[5];
};

class CNmTransitionEventConditionNode::CDefinition {
public:
    // CGlobalSymbol m_requireRuleID;
    char pad_00[24];
    CNmBitFlags m_eventConditionRules;
    int16_t m_nSourceStateNodeIdx;
    NmTransitionRuleCondition_t m_ruleCondition;
    char pad_01[1];
};

class CNmFloatCurveEventNode::CDefinition {
public:
    // CGlobalSymbol m_eventID;
    char pad_00[24];
    int16_t m_nDefaultNodeIdx;
    float m_flDefaultValue;
    CNmBitFlags m_eventConditionRules;
    char pad_01[4];
};

class CNmExternalPoseNode::CDefinition {
public:
    char pad_00[16];
    bool m_bShouldSampleRootMotion;
    char pad_01[7];
};

class CNmIsExternalPoseSetNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nExternalPoseNodeIdx;
    char pad_01[6];
};

class CNmFloatRemapNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    CNmFloatRemapNode::RemapRange_t m_inputRange;
    CNmFloatRemapNode::RemapRange_t m_outputRange;
    char pad_01[4];
};

class CNmFloatClampNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    // Range_t m_clampRange;
    char pad_01[14];
};

class CNmFloatEaseNode::CDefinition {
public:
    char pad_00[16];
    float m_flEaseTime;
    float m_flStartValue;
    int16_t m_nInputValueNodeIdx;
    NmEasingOperation_t m_easingOp;
    bool m_bUseStartValue;
    char pad_01[4];
};

class CNmFloatCurveNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    // CPiecewiseCurve m_curve;
    char pad_01[70];
};

class CNmFloatMathNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdxA;
    int16_t m_nInputValueNodeIdxB;
    bool m_bReturnAbsoluteResult;
    bool m_bReturnNegatedResult;
    CNmFloatMathNode::Operator_t m_operator;
    float m_flValueB;
    char pad_01[4];
};

class CNmFloatComparisonNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    int16_t m_nComparandValueNodeIdx;
    CNmFloatComparisonNode::Comparison_t m_comparison;
    float m_flEpsilon;
    float m_flComparisonValue;
};

class CNmFloatRangeComparisonNode::CDefinition {
public:
    // Range_t m_range;
    char pad_00[24];
    int16_t m_nInputValueNodeIdx;
    bool m_bIsInclusiveCheck;
    char pad_01[5];
};

class CNmFloatSwitchNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nSwitchValueNodeIdx;
    int16_t m_nTrueValueNodeIdx;
    int16_t m_nFalseValueNodeIdx;
    float m_flFalseValue;
    float m_flTrueValue;
};

class CNmFloatAngleMathNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    CNmFloatAngleMathNode::Operation_t m_operation;
    char pad_01[5];
};

class CNmFloatSelectorNode::CDefinition {
public:
    // CUtlVectorFixedGrowable< int16, 5 > m_conditionNodeIndices;
    // CUtlVectorFixedGrowable< float32, 5 > m_values;
    char pad_00[104];
    float m_flDefaultValue;
    float m_flEaseTime;
    NmEasingOperation_t m_easingOp;
    char pad_01[7];
};

class CNmIDComparisonNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    CNmIDComparisonNode::Comparison_t m_comparison;
    // CUtlLeanVectorFixedGrowable< CGlobalSymbol, 4 > m_comparisionIDs;
    char pad_01[45];
};

class CNmIDToFloatNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    float m_defaultValue;
    // CUtlLeanVectorFixedGrowable< CGlobalSymbol, 5 > m_IDs;
    // CUtlLeanVectorFixedGrowable< float32, 5 > m_values;
    char pad_01[80];
};

class CNmIDSwitchNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nSwitchValueNodeIdx;
    int16_t m_nTrueValueNodeIdx;
    int16_t m_nFalseValueNodeIdx;
    // CGlobalSymbol m_falseValue;
    // CGlobalSymbol m_trueValue;
    char pad_01[18];
};

class CNmIDSelectorNode::CDefinition {
public:
    // CUtlVectorFixedGrowable< int16, 5 > m_conditionNodeIndices;
    // CUtlVectorFixedGrowable< CGlobalSymbol, 5 > m_values;
    // CGlobalSymbol m_defaultValue;
    char pad_00[128];
};

class CNmLayerBlendNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nBaseNodeIdx;
    bool m_bOnlySampleBaseRootMotion;
    // CUtlLeanVectorFixedGrowable< CNmLayerBlendNode::LayerDefinition_t, 3 > m_layerDefinition;
    char pad_01[53];
};

class CNmOrientationWarpNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nClipReferenceNodeIdx;
    int16_t m_nTargetValueNodeIdx;
    bool m_bIsOffsetNode;
    bool m_bIsOffsetRelativeToCharacter;
    bool m_bWarpTranslation;
    CNmRootMotionData::SamplingMode_t m_samplingMode;
};

class CNmPassthroughNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx;
    char pad_01[6];
};

class CNmZeroPoseNode::CDefinition {
public:
    char pad_00[16];
};

class CNmReferencePoseNode::CDefinition {
public:
    char pad_00[16];
};

class CNmAnimationPoseNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nPoseTimeValueNodeIdx;
    int16_t m_nDataSlotIdx;
    // Range_t m_inputTimeRemapRange;
    char pad_01[8];
    float m_flUserSpecifiedTime;
    bool m_bUseFramesAsInput;
    char pad_02[7];
};

class CNmReferencedGraphNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nReferencedGraphIdx;
    int16_t m_nFallbackNodeIdx;
    char pad_01[4];
};

class CNmIsExternalGraphSlotFilledNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nExternalGraphNodeIdx;
    char pad_01[6];
};

class CNmRootMotionOverrideNode::CDefinition {
public:
    char pad_00[24];
    int16_t m_desiredMovingVelocityNodeIdx;
    int16_t m_desiredFacingDirectionNodeIdx;
    int16_t m_linearVelocityLimitNodeIdx;
    int16_t m_angularVelocityLimitNodeIdx;
    float m_maxLinearVelocity;
    float m_maxAngularVelocityRadians;
    CNmBitFlags m_overrideFlags;
    char pad_01[4];
};

class CNmScaleNode::CDefinition {
public:
    char pad_00[24];
    int16_t m_nMaskNodeIdx;
    int16_t m_nEnableNodeIdx;
    char pad_01[4];
};

class CNmSelectorNode::CDefinition {
public:
    // CUtlLeanVectorFixedGrowable< int16, 5 > m_optionNodeIndices;
    // CUtlLeanVectorFixedGrowable< int16, 5 > m_conditionNodeIndices;
    char pad_00[64];
};

class CNmClipSelectorNode::CDefinition {
public:
    // CUtlLeanVectorFixedGrowable< int16, 5 > m_optionNodeIndices;
    // CUtlLeanVectorFixedGrowable< int16, 5 > m_conditionNodeIndices;
    char pad_00[64];
};

class CNmParameterizedSelectorNode::CDefinition {
public:
    // CUtlLeanVectorFixedGrowable< int16, 5 > m_optionNodeIndices;
    // CUtlLeanVectorFixedGrowable< uint8, 5 > m_optionWeights;
    char pad_00[56];
    int16_t m_parameterNodeIdx;
    bool m_bIgnoreInvalidOptions;
    bool m_bHasWeightsSet;
    char pad_01[4];
};

class CNmParameterizedClipSelectorNode::CDefinition {
public:
    // CUtlLeanVectorFixedGrowable< int16, 5 > m_optionNodeIndices;
    // CUtlLeanVectorFixedGrowable< uint8, 5 > m_optionWeights;
    char pad_00[56];
    int16_t m_parameterNodeIdx;
    bool m_bIgnoreInvalidOptions;
    bool m_bHasWeightsSet;
    char pad_01[4];
};

class CNmSpeedScaleBaseNode::CDefinition {
public:
    char pad_00[24];
    int16_t m_nInputValueNodeIdx;
    float m_flDefaultInputValue;
};

class CNmSpeedScaleNode::CDefinition {
public:
    char pad_00[32];
};

class CNmDurationScaleNode::CDefinition {
public:
    char pad_00[32];
};

class CNmVelocityBasedSpeedScaleNode::CDefinition {
public:
    char pad_00[32];
};

class CNmStateNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx;
    // CUtlLeanVectorFixedGrowable< CGlobalSymbol, 3 > m_entryEvents;
    // CUtlLeanVectorFixedGrowable< CGlobalSymbol, 3 > m_executeEvents;
    // CUtlLeanVectorFixedGrowable< CGlobalSymbol, 3 > m_exitEvents;
    // CUtlLeanVectorFixedGrowable< CNmStateNode::TimedEvent_t, 1 > m_timedRemainingEvents;
    // CUtlLeanVectorFixedGrowable< CNmStateNode::TimedEvent_t, 1 > m_timedElapsedEvents;
    char pad_01[150];
    int16_t m_nLayerWeightNodeIdx;
    int16_t m_nLayerRootMotionWeightNodeIdx;
    int16_t m_nLayerBoneMaskNodeIdx;
    bool m_bIsOffState;
    bool m_bUseActualElapsedTimeInStateForTimedEvents;
};

class CNmStateCompletedConditionNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx;
    int16_t m_nTransitionDurationOverrideNodeIdx;
    float m_flTransitionDurationSeconds;
};

class CNmIsInactiveBranchConditionNode::CDefinition {
public:
    char pad_00[16];
};

class CNmTimeConditionNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_sourceStateNodeIdx;
    int16_t m_nInputValueNodeIdx;
    float m_flComparand;
    CNmTimeConditionNode::ComparisonType_t m_type;
    CNmTimeConditionNode::Operator_t m_operator;
    char pad_01[6];
};

class CNmStateMachineNode::CDefinition {
public:
    // CUtlLeanVectorFixedGrowable< CNmStateMachineNode::StateDefinition_t, 5 > m_stateDefinitions;
    char pad_00[304];
    int16_t m_nDefaultStateIndex;
    char pad_01[6];
};

class CNmIsTargetSetNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    char pad_01[6];
};

class CNmTargetInfoNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    CNmTargetInfoNode::Info_t m_infoType;
    bool m_bIsWorldSpaceTarget;
    char pad_01[7];
};

class CNmTargetPointNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    bool m_bIsWorldSpaceTarget;
    char pad_01[5];
};

class CNmTargetOffsetNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    bool m_bIsBoneSpaceOffset;
    // Quaternion m_rotationOffset;
    // Vector m_translationOffset;
    char pad_01[45];
};

class CNmTargetSelectorNode::CDefinition {
public:
    // CUtlLeanVectorFixedGrowable< int16, 5 > m_optionNodeIndices;
    char pad_00[40];
    float m_flOrientationScoreWeight;
    float m_flPositionScoreWeight;
    int16_t m_parameterNodeIdx;
    bool m_bIgnoreInvalidOptions;
    bool m_bIsWorldSpaceTarget;
    char pad_01[4];
};

class CNmTargetWarpNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nClipReferenceNodeIdx;
    int16_t m_nTargetValueNodeIdx;
    CNmRootMotionData::SamplingMode_t m_samplingMode;
    bool m_bAllowTargetUpdate;
    bool m_bAlignWithTargetAtLastWarpEvent;
    float m_flSamplingPositionErrorThresholdSq;
    float m_flMaxTangentLength;
    float m_flLerpFallbackDistanceThreshold;
    float m_flTargetUpdateDistanceThreshold;
    float m_flTargetUpdateAngleThresholdRadians;
    char pad_01[4];
};

class CNmTransitionNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nTargetStateNodeIdx;
    int16_t m_nDurationOverrideNodeIdx;
    int16_t m_timeOffsetOverrideNodeIdx;
    int16_t m_startBoneMaskNodeIdx;
    float m_flDuration;
    NmPercent_t m_boneMaskBlendInTimePercentage;
    float m_flTimeOffset;
    CNmBitFlags m_transitionOptions;
    int16_t m_targetSyncIDNodeIdx;
    NmEasingOperation_t m_blendWeightEasing;
    NmRootMotionBlendMode_t m_rootMotionBlend;
    char pad_01[4];
};

class CNmTwoBoneIKNode::CDefinition {
public:
    // CGlobalSymbol m_effectorBoneID;
    char pad_00[32];
    int16_t m_nEffectorTargetNodeIdx;
    int16_t m_nEnabledNodeIdx;
    float m_flBlendTimeSeconds;
    NmIKBlendMode_t m_blendMode;
    bool m_bIsTargetInWorldSpace;
    float m_flReferencePoseTwistWeight;
};

class CNmVectorInfoNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    CNmVectorInfoNode::Info_t m_desiredInfo;
    char pad_01[5];
};

class CNmVectorCreateNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_inputVectorValueNodeIdx;
    int16_t m_inputValueXNodeIdx;
    int16_t m_inputValueYNodeIdx;
    int16_t m_inputValueZNodeIdx;
};

class CNmVectorNegateNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    char pad_01[6];
};

class CAnimGraphNetworkSettings {
public:
    char pad_00[32];
    bool m_bNetworkingEnabled;
    char pad_01[7];
};

class CActionComponentUpdater {
public:
    // CUtlVector< CSmartPtr< CAnimActionUpdater > > m_actions;
    char pad_00[72];
};

class CAddUpdateNode {
public:
    char pad_00[148];
    BinaryNodeChildOption m_footMotionTiming;
    bool m_bApplyToFootMotion;
    bool m_bApplyChannelsSeparately;
    bool m_bUseModelSpace;
    bool m_bApplyScale;
    char pad_01[4];
};

class CAimCameraUpdateNode {
public:
    char pad_00[112];
    CAnimParamHandle m_hParameterPosition;
    CAnimParamHandle m_hParameterOrientation;
    CAnimParamHandle m_hParameterPelvisOffset;
    CAnimParamHandle m_hParameterCameraOnly;
    CAnimParamHandle m_hParameterWeaponDepenetrationDistance;
    CAnimParamHandle m_hParameterWeaponDepenetrationDelta;
    CAnimParamHandle m_hParameterCameraClearanceDistance;
    AimCameraOpFixedSettings_t m_opFixedSettings;
    char pad_01[8];
};

class CAimMatrixUpdateNode {
public:
    char pad_00[112];
    AimMatrixOpFixedSettings_t m_opFixedSettings;
    char pad_01[8];
    AnimVectorSource m_target;
    CAnimParamHandle m_paramIndex;
    HSequence m_hSequence;
    bool m_bResetChild;
    bool m_bLockWhenWaning;
    char pad_02[10];
};

class CBindPoseUpdateNode {
public:
    char pad_00[96];
};

class CChoreoUpdateNode {
public:
    char pad_00[120];
};

class CCycleControlUpdateNode {
public:
    char pad_00[112];
    AnimValueSource m_valueSource;
    CAnimParamHandle m_paramIndex;
    bool m_bLockWhenWaning;
    char pad_01[1];
};

class CCycleControlClipUpdateNode {
public:
    // CUtlVector< TagSpan_t > m_tags;
    char pad_00[124];
    HSequence m_hSequence;
    float m_duration;
    AnimValueSource m_valueSource;
    CAnimParamHandle m_paramIndex;
    bool m_bLockWhenWaning;
    char pad_01[5];
};

class CDirectionalBlendUpdateNode {
public:
    char pad_00[92];
    HSequence m_hSequences;
    char pad_01[32];
    CAnimInputDamping m_damping;
    AnimValueSource m_blendValueSource;
    CAnimParamHandle m_paramIndex;
    float m_playbackSpeed;
    float m_duration;
    bool m_bLoop;
    bool m_bLockBlendOnReset;
    char pad_02[6];
};

class CDirectPlaybackUpdateNode {
public:
    char pad_00[116];
    bool m_bFinishEarly;
    bool m_bResetOnFinish;
    // CUtlVector< CDirectPlaybackTagData > m_allTags;
    char pad_01[26];
};

class CFollowPathUpdateNode {
public:
    char pad_00[116];
    float m_flBlendOutTime;
    bool m_bBlockNonPathMovement;
    bool m_bStopFeetAtGoal;
    bool m_bScaleSpeed;
    float m_flScale;
    float m_flMinAngle;
    float m_flMaxAngle;
    float m_flSpeedScaleBlending;
    CAnimInputDamping m_turnDamping;
    AnimValueSource m_facingTarget;
    CAnimParamHandle m_hParam;
    float m_flTurnToFaceOffset;
    bool m_bTurnToFace;
    char pad_01[3];
};

class CFollowAttachmentUpdateNode {
public:
    char pad_00[112];
    FollowAttachmentSettings_t m_opFixedData;
    char pad_01[16];
};

class CFollowTargetUpdateNode {
public:
    char pad_00[112];
    FollowTargetOpFixedSettings_t m_opFixedData;
    char pad_01[8];
    CAnimParamHandle m_hParameterPosition;
    CAnimParamHandle m_hParameterOrientation;
    char pad_02[4];
};

class CFootAdjustmentUpdateNode {
public:
    // CUtlVector< HSequence > m_clips;
    char pad_00[144];
    CPoseHandle m_hBasePoseCacheHandle;
    CAnimParamHandle m_facingTarget;
    float m_flTurnTimeMin;
    float m_flTurnTimeMax;
    float m_flStepHeightMax;
    float m_flStepHeightMaxAngle;
    bool m_bResetChild;
    bool m_bAnimationDriven;
    char pad_01[6];
};

class CFootLockUpdateNode {
public:
    char pad_00[112];
    FootLockPoseOpFixedSettings m_opFixedSettings;
    // CUtlVector< FootFixedSettings > m_footSettings;
    char pad_01[32];
    CAnimInputDamping m_hipShiftDamping;
    CAnimInputDamping m_rootHeightDamping;
    float m_flStrideCurveScale;
    float m_flStrideCurveLimitScale;
    float m_flStepHeightIncreaseScale;
    float m_flStepHeightDecreaseScale;
    float m_flHipShiftScale;
    float m_flBlendTime;
    float m_flMaxRootHeightOffset;
    float m_flMinRootHeightOffset;
    float m_flTiltPlanePitchSpringStrength;
    float m_flTiltPlaneRollSpringStrength;
    bool m_bApplyFootRotationLimits;
    bool m_bApplyHipShift;
    bool m_bModulateStepHeight;
    bool m_bResetChild;
    bool m_bEnableVerticalCurvedPaths;
    bool m_bEnableRootHeightDamping;
    char pad_02[2];
};

class CFootPinningUpdateNode {
public:
    char pad_00[120];
    FootPinningPoseOpFixedData_t m_poseOpFixedData;
    FootPinningTimingSource m_eTimingSource;
    // CUtlVector< CAnimParamHandle > m_params;
    char pad_01[28];
    bool m_bResetChild;
    char pad_02[7];
};

class CFootStepTriggerUpdateNode {
public:
    // CUtlVector< FootStepTrigger > m_triggers;
    char pad_00[140];
    float m_flTolerance;
};

class CHitReactUpdateNode {
public:
    char pad_00[112];
    HitReactFixedSettings_t m_opFixedSettings;
    char pad_01[8];
    CAnimParamHandle m_triggerParam;
    CAnimParamHandle m_hitBoneParam;
    CAnimParamHandle m_hitOffsetParam;
    CAnimParamHandle m_hitDirectionParam;
    CAnimParamHandle m_hitStrengthParam;
    float m_flMinDelayBetweenHits;
    bool m_bResetChild;
    char pad_02[3];
};

class CInputStreamUpdateNode {
public:
    char pad_00[96];
};

class CJiggleBoneUpdateNode {
public:
    char pad_00[112];
    JiggleBoneSettingsList_t m_opFixedData;
    char pad_01[8];
};

class CJumpHelperUpdateNode {
public:
    char pad_00[176];
    CAnimParamHandle m_hTargetParam;
    // Vector m_flOriginalJumpMovement;
    char pad_01[12];
    float m_flOriginalJumpDuration;
    float m_flJumpStartCycle;
    float m_flJumpEndCycle;
    JumpCorrectionMethod m_eCorrectionMethod;
    bool m_bTranslationAxis[3];
    bool m_bScaleSpeed;
    char pad_02[4];
};

class CLookAtUpdateNode {
public:
    char pad_00[112];
    LookAtOpFixedSettings_t m_opFixedSettings;
    char pad_01[8];
    AnimVectorSource m_target;
    CAnimParamHandle m_paramIndex;
    CAnimParamHandle m_weightParamIndex;
    bool m_bResetChild;
    bool m_bLockWhenWaning;
    char pad_02[14];
};

class CMoverUpdateNode {
public:
    char pad_00[120];
    CAnimInputDamping m_damping;
    AnimValueSource m_facingTarget;
    CAnimParamHandle m_hMoveVecParam;
    CAnimParamHandle m_hMoveHeadingParam;
    CAnimParamHandle m_hTurnToFaceParam;
    float m_flTurnToFaceOffset;
    float m_flTurnToFaceLimit;
    bool m_bAdditive;
    bool m_bApplyMovement;
    bool m_bOrientMovement;
    bool m_bApplyRotation;
    bool m_bLimitOnly;
    char pad_01[7];
};

class CPairedSequenceUpdateNode {
public:
    // CGlobalSymbol m_sPairedSequenceRole;
    char pad_00[136];
};

class CPathHelperUpdateNode {
public:
    char pad_00[112];
    float m_flStoppingRadius;
    float m_flStoppingSpeedScale;
};

class COrientationWarpUpdateNode {
public:
    char pad_00[116];
    OrientationWarpMode_t m_eMode;
    CAnimParamHandle m_hTargetParam;
    CAnimParamHandle m_hTargetPositionParam;
    CAnimParamHandle m_hFallbackTargetPositionParam;
    OrientationWarpTargetOffsetMode_t m_eTargetOffsetMode;
    float m_flTargetOffset;
    CAnimParamHandle m_hTargetOffsetParam;
    CAnimInputDamping m_damping;
    OrientationWarpRootMotionSource_t m_eRootMotionSource;
    float m_flMaxRootMotionScale;
    bool m_bEnablePreferredRotationDirection;
    AnimValueSource m_ePreferredRotationDirection;
    float m_flPreferredRotationThreshold;
    char pad_01[4];
};

class CRagdollUpdateNode {
public:
    char pad_00[112];
    int32_t m_nWeightListIndex;
    RagdollPoseControl m_poseControlMethod;
};

class CRootUpdateNode {
public:
    char pad_00[112];
};

class CSlowDownOnSlopesUpdateNode {
public:
    char pad_00[112];
    float m_flSlowDownStrength;
    char pad_01[4];
};

class CSolveIKChainUpdateNode {
public:
    // CUtlVector< CSolveIKTargetHandle_t > m_targetHandles;
    char pad_00[136];
    SolveIKChainPoseOpFixedSettings_t m_opFixedData;
    char pad_01[8];
};

class CSpeedScaleUpdateNode {
public:
    char pad_00[112];
    CAnimParamHandle m_paramIndex;
    char pad_01[6];
};

class CStanceOverrideUpdateNode {
public:
    // CUtlVector< StanceInfo_t > m_footStanceInfo;
    char pad_00[136];
    CAnimUpdateNodeRef m_pStanceSourceNode;
    CAnimParamHandle m_hParameter;
    StanceOverrideMode m_eMode;
};

class CStanceScaleUpdateNode {
public:
    char pad_00[112];
    CAnimParamHandle m_hParam;
    char pad_01[6];
};

class CStopAtGoalUpdateNode {
public:
    char pad_00[116];
    float m_flOuterRadius;
    float m_flInnerRadius;
    float m_flMaxScale;
    float m_flMinScale;
    CAnimInputDamping m_damping;
};

class CTargetWarpUpdateNode {
public:
    char pad_00[116];
    TargetWarpAngleMode_t m_eAngleMode;
    CAnimParamHandle m_hTargetPositionParameter;
    CAnimParamHandle m_hTargetUpVectorParameter;
    CAnimParamHandle m_hTargetFacePositionParameter;
    CAnimParamHandle m_hMoveHeadingParameter;
    CAnimParamHandle m_hDesiredMoveHeadingParameter;
    TargetWarpCorrectionMethod m_eCorrectionMethod;
    TargetWarpTimingMethod m_eTargetWarpTimingMethod;
    bool m_bTargetFacePositionIsWorldSpace;
    bool m_bTargetPositionIsWorldSpace;
    bool m_bOnlyWarpWhenTagIsFound;
    bool m_bWarpOrientationDuringTranslation;
    bool m_bWarpAroundCenter;
    float m_flMaxAngle;
};

class CTurnHelperUpdateNode {
public:
    char pad_00[116];
    AnimValueSource m_facingTarget;
    float m_turnStartTimeOffset;
    float m_turnDuration;
    bool m_bMatchChildDuration;
    float m_manualTurnOffset;
    bool m_bUseManualTurnOffset;
    char pad_01[7];
};

class CTwoBoneIKUpdateNode {
public:
    char pad_00[112];
    TwoBoneIKSettings_t m_opFixedData;
    char pad_01[16];
};

class CNmChainLookatNode::CDefinition {
public:
    // CGlobalSymbol m_chainEndBoneID;
    char pad_00[32];
    int16_t m_nLookatTargetNodeIdx;
    int16_t m_nEnabledNodeIdx;
    float m_flBlendTimeSeconds;
    uint8_t m_nChainLength;
    bool m_bIsTargetInWorldSpace;
    // Vector m_chainForwardDir;
    char pad_01[14];
};

class CNmFollowBoneNode::CDefinition {
public:
    // CGlobalSymbol m_bone;
    // CGlobalSymbol m_followTargetBone;
    char pad_00[40];
    int16_t m_nEnabledNodeIdx;
    NmFollowBoneMode_t m_mode;
    char pad_01[5];
};

