#ifdef __cplusplus
#include <stdint.h>
#pragma warning(push)
#pragma warning(disable: 4324)
#ifndef _enum
#define _enum enum class
#endif // _enum
#else
#ifndef _enum
#define _enum enum
#endif // _enum
#endif // __cplusplus


_enum ThreeState_t : uint32_t {
    TRS_FALSE = 0,
    TRS_TRUE = 1,
    TRS_NONE = 2,
};

_enum fieldtype_t : uint8_t {
    FIELD_VOID = 0,
    FIELD_FLOAT32 = 1,
    FIELD_STRING = 2,
    FIELD_VECTOR = 3,
    FIELD_QUATERNION = 4,
    FIELD_INT32 = 5,
    FIELD_BOOLEAN = 6,
    FIELD_INT16 = 7,
    FIELD_CHARACTER = 8,
    FIELD_COLOR32 = 9,
    FIELD_EMBEDDED = 10,
    FIELD_CUSTOM = 11,
    FIELD_CLASSPTR = 12,
    FIELD_EHANDLE = 13,
    FIELD_POSITION_VECTOR = 14,
    FIELD_TIME = 15,
    FIELD_TICK = 16,
    FIELD_SOUNDNAME = 17,
    FIELD_INPUT = 18,
    FIELD_FUNCTION = 19,
    FIELD_VMATRIX = 20,
    FIELD_VMATRIX_WORLDSPACE = 21,
    FIELD_MATRIX3X4_WORLDSPACE = 22,
    FIELD_INTERVAL = 23,
    FIELD_UNUSED = 24,
    FIELD_VECTOR2D = 25,
    FIELD_INT64 = 26,
    FIELD_VECTOR4D = 27,
    FIELD_RESOURCE = 28,
    FIELD_TYPEUNKNOWN = 29,
    FIELD_CSTRING = 30,
    FIELD_HSCRIPT = 31,
    FIELD_VARIANT = 32,
    FIELD_UINT64 = 33,
    FIELD_FLOAT64 = 34,
    FIELD_POSITIVEINTEGER_OR_NULL = 35,
    FIELD_HSCRIPT_NEW_INSTANCE = 36,
    FIELD_UINT32 = 37,
    FIELD_UTLSTRINGTOKEN = 38,
    FIELD_QANGLE = 39,
    FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_VECTOR = 40,
    FIELD_HMATERIAL = 41,
    FIELD_HMODEL = 42,
    FIELD_NETWORK_QUANTIZED_VECTOR = 43,
    FIELD_NETWORK_QUANTIZED_FLOAT = 44,
    FIELD_DIRECTION_VECTOR_WORLDSPACE = 45,
    FIELD_QANGLE_WORLDSPACE = 46,
    FIELD_QUATERNION_WORLDSPACE = 47,
    FIELD_HSCRIPT_LIGHTBINDING = 48,
    FIELD_V8_VALUE = 49,
    FIELD_V8_OBJECT = 50,
    FIELD_V8_ARRAY = 51,
    FIELD_V8_CALLBACK_INFO = 52,
    FIELD_UTLSTRING = 53,
    FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_POSITION_VECTOR = 54,
    FIELD_HRENDERTEXTURE = 55,
    FIELD_HPARTICLESYSTEMDEFINITION = 56,
    FIELD_UINT8 = 57,
    FIELD_UINT16 = 58,
    FIELD_CTRANSFORM = 59,
    FIELD_CTRANSFORM_WORLDSPACE = 60,
    FIELD_HPOSTPROCESSING = 61,
    FIELD_MATRIX3X4 = 62,
    FIELD_SHIM = 63,
    FIELD_CMOTIONTRANSFORM = 64,
    FIELD_CMOTIONTRANSFORM_WORLDSPACE = 65,
    FIELD_ATTACHMENT_HANDLE = 66,
    FIELD_AMMO_INDEX = 67,
    FIELD_CONDITION_ID = 68,
    FIELD_AI_SCHEDULE_BITS = 69,
    FIELD_MODIFIER_HANDLE = 70,
    FIELD_ROTATION_VECTOR = 71,
    FIELD_ROTATION_VECTOR_WORLDSPACE = 72,
    FIELD_HVDATA = 73,
    FIELD_SCALE32 = 74,
    FIELD_STRING_AND_TOKEN = 75,
    FIELD_ENGINE_TIME = 76,
    FIELD_ENGINE_TICK = 77,
    FIELD_WORLD_GROUP_ID = 78,
    FIELD_GLOBALSYMBOL = 79,
    FIELD_HNMGRAPHDEFINITION = 80,
    FIELD_TYPECOUNT = 81,
};

_enum FuseVariableAccess_t : uint8_t {
    WRITABLE = 0,
    READ_ONLY = 1,
};

_enum FuseVariableType_t : uint8_t {
    INVALID = 0,
    BOOL = 1,
    INT8 = 2,
    INT16 = 3,
    INT32 = 4,
    UINT8 = 5,
    UINT16 = 6,
    UINT32 = 7,
    FLOAT32 = 8,
};

_enum RenderSlotType_t : uint8_t {
    RENDER_SLOT_INVALID = 255,
    RENDER_SLOT_PER_VERTEX = 0,
    RENDER_SLOT_PER_INSTANCE = 1,
};

_enum InputLayoutVariation_t : uint8_t {
    INPUT_LAYOUT_VARIATION_DEFAULT = 0,
    INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID = 1,
    INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID_MORPH_VERT_ID = 2,
    INPUT_LAYOUT_VARIATION_MAX = 3,
};

_enum RenderMultisampleType_t : uint8_t {
    RENDER_MULTISAMPLE_INVALID = 255,
    RENDER_MULTISAMPLE_NONE = 0,
    RENDER_MULTISAMPLE_2X = 1,
    RENDER_MULTISAMPLE_4X = 2,
    RENDER_MULTISAMPLE_6X = 3,
    RENDER_MULTISAMPLE_8X = 4,
    RENDER_MULTISAMPLE_16X = 5,
    RENDER_MULTISAMPLE_TYPE_COUNT = 6,
};

_enum RsFillMode_t : uint8_t {
    RS_FILL_SOLID = 0,
    RS_FILL_WIREFRAME = 1,
};

_enum RsComparison_t : uint8_t {
    RS_CMP_NEVER = 0,
    RS_CMP_LESS = 1,
    RS_CMP_EQUAL = 2,
    RS_CMP_LESS_EQUAL = 3,
    RS_CMP_GREATER = 4,
    RS_CMP_NOT_EQUAL = 5,
    RS_CMP_GREATER_EQUAL = 6,
    RS_CMP_ALWAYS = 7,
};

_enum RsCullMode_t : uint8_t {
    RS_CULL_NONE = 0,
    RS_CULL_BACK = 1,
    RS_CULL_FRONT = 2,
};

_enum RenderBufferFlags_t : uint32_t {
    RENDER_BUFFER_USAGE_NONE = 0,
    RENDER_BUFFER_USAGE_VERTEX_BUFFER = 1,
    RENDER_BUFFER_USAGE_INDEX_BUFFER = 2,
    RENDER_BUFFER_USAGE_SHADER_RESOURCE = 4,
    RENDER_BUFFER_USAGE_UNORDERED_ACCESS = 8,
    RENDER_BUFFER_BYTEADDRESS_BUFFER = 16,
    RENDER_BUFFER_STRUCTURED_BUFFER = 32,
    RENDER_BUFFER_UAV_DRAW_INDIRECT_ARGS = 256,
    RENDER_BUFFER_ACCELERATION_STRUCTURE = 512,
    RENDER_BUFFER_SHADER_BINDING_TABLE = 1024,
    RENDER_BUFFER_POOL_ALLOCATED = 2048,
    RENDER_BUFFER_USAGE_CONDITIONAL_RENDERING = 4096,
    RENDER_BUFFER_IMMOVABLE_ALLOCATION = 8192,
};

_enum RenderPrimitiveType_t : uint32_t {
    RENDER_PRIM_POINTS = 0,
    RENDER_PRIM_LINES = 1,
    RENDER_PRIM_LINES_WITH_ADJACENCY = 2,
    RENDER_PRIM_LINE_STRIP = 3,
    RENDER_PRIM_LINE_STRIP_WITH_ADJACENCY = 4,
    RENDER_PRIM_TRIANGLES = 5,
    RENDER_PRIM_TRIANGLES_WITH_ADJACENCY = 6,
    RENDER_PRIM_TRIANGLE_STRIP = 7,
    RENDER_PRIM_TRIANGLE_STRIP_WITH_ADJACENCY = 8,
    RENDER_PRIM_INSTANCED_QUADS = 9,
    RENDER_PRIM_HETEROGENOUS = 10,
    RENDER_PRIM_COMPUTE_SHADER = 11,
    RENDER_PRIM_MESH_SHADER = 12,
    RENDER_PRIM_TYPE_COUNT = 13,
};

_enum EntityIOTargetType_t : uint32_t {
    ENTITY_IO_TARGET_INVALID = 4294967295,
    ENTITY_IO_TARGET_ENTITYNAME = 2,
    ENTITY_IO_TARGET_EHANDLE = 6,
    ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME = 7,
};

_enum EntityDormancyType_t : uint32_t {
    ENTITY_NOT_DORMANT = 0,
    ENTITY_DORMANT = 1,
    ENTITY_SUSPENDED = 2,
};

_enum HorizJustification_e : uint32_t {
    HORIZ_JUSTIFICATION_LEFT = 0,
    HORIZ_JUSTIFICATION_CENTER = 1,
    HORIZ_JUSTIFICATION_RIGHT = 2,
    HORIZ_JUSTIFICATION_NONE = 3,
};

_enum BloomBlendMode_t : uint32_t {
    BLOOM_BLEND_ADD = 0,
    BLOOM_BLEND_SCREEN = 1,
    BLOOM_BLEND_BLUR = 2,
};

_enum ViewFadeMode_t : uint32_t {
    VIEW_FADE_CONSTANT_COLOR = 0,
    VIEW_FADE_MODULATE = 1,
    VIEW_FADE_MOD2X = 2,
};

_enum LayoutPositionType_e : uint32_t {
    LAYOUTPOSITIONTYPE_VIEWPORT_RELATIVE = 0,
    LAYOUTPOSITIONTYPE_FRACTIONAL = 1,
    LAYOUTPOSITIONTYPE_NONE = 2,
};

_enum VertJustification_e : uint32_t {
    VERT_JUSTIFICATION_TOP = 0,
    VERT_JUSTIFICATION_CENTER = 1,
    VERT_JUSTIFICATION_BOTTOM = 2,
    VERT_JUSTIFICATION_NONE = 3,
};

_enum OutOfPVSUpdates_t : uint32_t {
    OOPVSUpdates_OptOut = 0,
    OOPVSUpdates_OptIn = 1,
    OOPVSUpdates_Default = 2,
    OOPVSUpdates_Count = 3,
};

_enum MoodType_t : uint32_t {
    eMoodType_Head = 0,
    eMoodType_Body = 1,
};

_enum JumpCorrectionMethod : uint32_t {
    ScaleMotion = 0,
    AddCorrectionDelta = 1,
};

_enum PulseDomainValueType_t : uint32_t {
    INVALID = 4294967295,
    ENTITY_NAME = 0,
    PANEL_ID = 1,
    COUNT = 2,
};

_enum NPCPhysicsHullType_t : uint32_t {
    eInvalid = 0,
    eGroundCapsule = 1,
    eCenteredCapsule = 2,
    eGenericCapsule = 3,
    eGroundBox = 4,
};

_enum BinaryNodeChildOption : uint32_t {
    Child1 = 0,
    Child2 = 1,
};

_enum ModelConfigAttachmentType_t : uint32_t {
    MODEL_CONFIG_ATTACHMENT_INVALID = 4294967295,
    MODEL_CONFIG_ATTACHMENT_BONE_OR_ATTACHMENT = 0,
    MODEL_CONFIG_ATTACHMENT_ROOT_RELATIVE = 1,
    MODEL_CONFIG_ATTACHMENT_BONEMERGE = 2,
    MODEL_CONFIG_ATTACHMENT_COUNT = 3,
};

_enum MovementCapability_t : uint32_t {
    eStrafe = 0,
    eIdleTurn = 1,
    eStart = 2,
    eStop = 3,
    eInstantStop = 4,
    eShuffle = 5,
    ePlantedTurn = 6,
    eCount = 7,
};

_enum BoneMaskBlendSpace : uint32_t {
    BlendSpace_Parent = 0,
    BlendSpace_Model = 1,
    BlendSpace_Model_RotationOnly = 2,
    BlendSpace_Model_TranslationOnly = 3,
};

_enum RenderMeshSlotType_t : uint8_t {
    RENDERMESH_SLOT_INVALID = 255,
    RENDERMESH_SLOT_PER_VERTEX = 0,
    RENDERMESH_SLOT_PER_INSTANCE = 1,
};

_enum IkTargetType : uint32_t {
    IkTarget_Attachment = 0,
    IkTarget_Bone = 1,
    IkTarget_Parameter_ModelSpace = 2,
    IkTarget_Parameter_WorldSpace = 3,
};

_enum AnimVectorSource : uint32_t {
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

_enum ChoiceMethod : uint32_t {
    WeightedRandom = 0,
    WeightedRandomNoRepeat = 1,
    Iterate = 2,
    IterateRandom = 3,
};

_enum FootFallTagFoot_t : uint32_t {
    FOOT1 = 0,
    FOOT2 = 1,
    FOOT3 = 2,
    FOOT4 = 3,
    FOOT5 = 4,
    FOOT6 = 5,
    FOOT7 = 6,
    FOOT8 = 7,
};

_enum NmTargetWarpRule_t : uint8_t {
    WarpXY = 0,
    WarpZ = 1,
    WarpXYZ = 2,
    RotationOnly = 3,
    FixedSection = 4,
};

_enum AnimationSnapshotType_t : uint32_t {
    ANIMATION_SNAPSHOT_SERVER_SIMULATION = 0,
    ANIMATION_SNAPSHOT_CLIENT_SIMULATION = 1,
    ANIMATION_SNAPSHOT_CLIENT_PREDICTION = 2,
    ANIMATION_SNAPSHOT_CLIENT_INTERPOLATION = 3,
    ANIMATION_SNAPSHOT_CLIENT_RENDER = 4,
    ANIMATION_SNAPSHOT_FINAL_COMPOSITE = 5,
    ANIMATION_SNAPSHOT_MAX = 6,
};

_enum AimMatrixBlendMode : uint32_t {
    AimMatrixBlendMode_None = 0,
    AimMatrixBlendMode_Additive = 1,
    AimMatrixBlendMode_ModelSpaceAdditive = 2,
    AimMatrixBlendMode_BoneMask = 3,
};

_enum VertexAlbedoFormat_t : uint8_t {
    VERTEX_ALBEDO_NONE = 0,
    VERTEX_ALBEDO_8888 = 1,
    VERTEX_ALBEDO_565 = 2,
};

_enum FacingMode : uint8_t {
    FacingMode_Invalid = 0,
    FacingMode_Manual = 1,
    FacingMode_Path = 2,
    FacingMode_LookTarget = 3,
    FacingMode_ManualPosition = 4,
};

_enum VelocityMetricMode : uint8_t {
    DirectionOnly = 0,
    MagnitudeOnly = 1,
    DirectionAndMagnitude = 2,
};

_enum ScriptedHeldWeaponBehavior_t : uint32_t {
    eInvalid = 4294967295,
    eHolster = 0,
    eDeploy = 1,
    eDrop = 2,
};

/// VPhysXJoint_t::Flags_t
_enum VPhysXJoint_t__Flags_t : uint32_t {
    JOINT_FLAGS_NONE = 0,
    JOINT_FLAGS_BODY1_FIXED = 1,
    JOINT_FLAGS_USE_BLOCK_SOLVER = 2,
};

/// CNmFloatComparisonNode::Comparison_t
_enum CNmFloatComparisonNode__Comparison_t : uint8_t {
    GreaterThanEqual = 0,
    LessThanEqual = 1,
    NearEqual = 2,
    GreaterThan = 3,
    LessThan = 4,
};

/// CNmTransitionNode::TransitionOptions_t
_enum CNmTransitionNode__TransitionOptions_t : uint8_t {
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

_enum NmGraphEventTypeCondition_t : uint8_t {
    Entry = 0,
    FullyInState = 1,
    Exit = 2,
    Timed = 3,
    Generic = 4,
    Any = 5,
};

_enum FieldNetworkOption : uint32_t {
    Auto = 0,
    ForceEnable = 1,
    ForceDisable = 2,
};

_enum ParticleAttachment_t : uint32_t {
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

_enum ParticleTransformType_t : uint32_t {
    PT_TYPE_INVALID = 0,
    PT_TYPE_NAMED_VALUE = 1,
    PT_TYPE_CONTROL_POINT = 2,
    PT_TYPE_CONTROL_POINT_RANGE = 3,
    PT_TYPE_COUNT = 4,
};

_enum PulseInstructionCode_t : uint16_t {
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

_enum OrientationWarpMode_t : uint32_t {
    eInvalid = 0,
    eAngle = 1,
    eWorldPosition = 2,
};

_enum OrientationWarpTargetOffsetMode_t : uint32_t {
    eLiteralValue = 0,
    eParameter = 1,
    eAnimationMovementHeading = 2,
    eAnimationMovementHeadingAtEnd = 3,
};

_enum HandshakeTagType_t : uint32_t {
    eInvalid = 4294967295,
    eTask = 0,
    eMovement = 1,
    eCount = 2,
};

_enum SelectorTagBehavior_t : uint32_t {
    SelectorTagBehavior_OnWhileCurrent = 0,
    SelectorTagBehavior_OffWhenFinished = 1,
    SelectorTagBehavior_OffBeforeFinished = 2,
};

_enum AnimParamButton_t : uint32_t {
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

_enum SeqPoseSetting_t : uint32_t {
    SEQ_POSE_SETTING_CONSTANT = 0,
    SEQ_POSE_SETTING_ROTATION = 1,
    SEQ_POSE_SETTING_POSITION = 2,
    SEQ_POSE_SETTING_VELOCITY = 3,
};

/// CNmTimeConditionNode::ComparisonType_t
_enum CNmTimeConditionNode__ComparisonType_t : uint8_t {
    PercentageThroughState = 0,
    PercentageThroughSyncEvent = 1,
    ElapsedTime = 2,
};

_enum AnimScriptType : uint16_t {
    ANIMSCRIPT_TYPE_INVALID = 65535,
    ANIMSCRIPT_FUSE_GENERAL = 0,
    ANIMSCRIPT_FUSE_STATEMACHINE = 1,
};

_enum IkEndEffectorType : uint32_t {
    IkEndEffector_Attachment = 0,
    IkEndEffector_Bone = 1,
};

_enum StanceOverrideMode : uint32_t {
    Sequence = 0,
    Node = 1,
};

_enum JiggleBoneSimSpace : uint32_t {
    SimSpace_Local = 0,
    SimSpace_Model = 1,
    SimSpace_World = 2,
};

_enum AnimationProcessingType_t : uint32_t {
    ANIMATION_PROCESSING_SERVER_SIMULATION = 0,
    ANIMATION_PROCESSING_CLIENT_SIMULATION = 1,
    ANIMATION_PROCESSING_CLIENT_PREDICTION = 2,
    ANIMATION_PROCESSING_CLIENT_INTERPOLATION = 3,
    ANIMATION_PROCESSING_CLIENT_RENDER = 4,
    ANIMATION_PROCESSING_MAX = 5,
};

_enum PulseApiFeature_t : uint32_t {
    AF_NONE = 0,
    AF_ENTITIES = 1,
    AF_PANORAMA = 2,
    AF_PARTICLES = 8,
    AF_FAKE_ENTITIES = 16,
    AF_SELECTORS_WITHOUT_REQUIREMENTS = 32,
};

_enum DampingSpeedFunction : uint32_t {
    NoDamping = 0,
    Constant = 1,
    Spring = 2,
    AsymmetricSpring = 3,
};

_enum FootPinningTimingSource : uint32_t {
    FootMotion = 0,
    Tag = 1,
    Parameter = 2,
};

_enum NmFrameSnapEventMode_t : uint32_t {
    Floor = 0,
    Round = 1,
};

_enum FootstepJumpPhase_t : uint8_t {
    Unknown = 0,
    NotJumping = 1,
    Jumping = 2,
    Landing = 4,
};

/// CNmSoundEvent::Position_t
_enum CNmSoundEvent__Position_t : uint32_t {
    None = 0,
    World = 1,
    EntityPos = 2,
    EntityEyePos = 3,
    EntityAttachment = 4,
};

_enum FootLockSubVisualization : uint32_t {
    FOOTLOCKSUBVISUALIZATION_ReachabilityAnalysis = 0,
    FOOTLOCKSUBVISUALIZATION_IKSolve = 1,
};

_enum FootstepLandedFootSoundType_t : uint32_t {
    FOOTSOUND_Left = 0,
    FOOTSOUND_Right = 1,
    FOOTSOUND_UseOverrideSound = 2,
};

/// CNmTargetInfoNode::Info_t
_enum CNmTargetInfoNode__Info_t : uint32_t {
    AngleHorizontal = 0,
    AngleVertical = 1,
    Distance = 2,
    DistanceHorizontalOnly = 3,
    DistanceVerticalOnly = 4,
    DeltaOrientationX = 5,
    DeltaOrientationY = 6,
    DeltaOrientationZ = 7,
};

_enum NmFootPhase_t : uint8_t {
    LeftFootDown = 0,
    RightFootPassing = 1,
    RightFootDown = 2,
    LeftFootPassing = 3,
    None = 4,
};

_enum ParticleVecType_t : uint32_t {
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

_enum PFNoiseModifier_t : uint32_t {
    PF_NOISE_MODIFIER_NONE = 0,
    PF_NOISE_MODIFIER_LINES = 1,
    PF_NOISE_MODIFIER_CLUMPS = 2,
    PF_NOISE_MODIFIER_RINGS = 3,
};

_enum PulseValueType_t : uint32_t {
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

_enum ParticleFloatRandomMode_t : uint32_t {
    PF_RANDOM_MODE_INVALID = 4294967295,
    PF_RANDOM_MODE_CONSTANT = 0,
    PF_RANDOM_MODE_VARYING = 1,
    PF_RANDOM_MODE_COUNT = 2,
};

_enum NmGraphValueType_t : uint8_t {
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

_enum IKChannelMode : uint32_t {
    TwoBone = 0,
    TwoBone_Translate = 1,
    OneBone = 2,
    OneBone_Translate = 3,
};

/// CNmVectorInfoNode::Info_t
_enum CNmVectorInfoNode__Info_t : uint8_t {
    X = 0,
    Y = 1,
    Z = 2,
    Length = 3,
    AngleHorizontal = 4,
    AngleVertical = 5,
};

_enum ResetCycleOption : uint32_t {
    Beginning = 0,
    SameCycleAsSource = 1,
    InverseSourceCycle = 2,
    FixedValue = 3,
    SameTimeAsSource = 4,
};

_enum ParticleFloatInputMode_t : uint32_t {
    PF_INPUT_MODE_INVALID = 4294967295,
    PF_INPUT_MODE_CLAMPED = 0,
    PF_INPUT_MODE_LOOPED = 1,
    PF_INPUT_MODE_COUNT = 2,
};

_enum NmPoseBlendMode_t : uint8_t {
    Overlay = 0,
    Additive = 1,
    ModelSpace = 2,
};

/// CNmIDComparisonNode::Comparison_t
_enum CNmIDComparisonNode__Comparison_t : uint8_t {
    Matches = 0,
    DoesntMatch = 1,
};

_enum MorphBundleType_t : uint32_t {
    MORPH_BUNDLE_TYPE_NONE = 0,
    MORPH_BUNDLE_TYPE_POSITION_SPEED = 1,
    MORPH_BUNDLE_TYPE_NORMAL_WRINKLE = 2,
    MORPH_BUNDLE_TYPE_COUNT = 3,
};

/// ModelSkeletonData_t::BoneFlags_t
_enum ModelSkeletonData_t__BoneFlags_t : uint32_t {
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

_enum NmFootPhaseCondition_t : uint8_t {
    LeftFootDown = 0,
    LeftFootPassing = 1,
    LeftPhase = 4,
    RightFootDown = 2,
    RightFootPassing = 3,
    RightPhase = 5,
    None = 6,
};

_enum NmRootMotionBlendMode_t : uint8_t {
    Blend = 0,
    Additive = 1,
    IgnoreSource = 2,
    IgnoreTarget = 3,
};

_enum StateActionBehavior : uint32_t {
    STATETAGBEHAVIOR_ACTIVE_WHILE_CURRENT = 0,
    STATETAGBEHAVIOR_FIRE_ON_ENTER = 1,
    STATETAGBEHAVIOR_FIRE_ON_EXIT = 2,
    STATETAGBEHAVIOR_FIRE_ON_ENTER_AND_EXIT = 3,
    STATETAGBEHAVIOR_ACTIVE_WHILE_FULLY_BLENDED = 4,
};

_enum BlendKeyType : uint32_t {
    BlendKey_UserValue = 0,
    BlendKey_Velocity = 1,
    BlendKey_Distance = 2,
    BlendKey_RemainingDistance = 3,
};

/// CNmCurrentSyncEventNode::InfoType_t
_enum CNmCurrentSyncEventNode__InfoType_t : uint8_t {
    IndexAndPercentage = 0,
    IndexOnly = 1,
    PercentageOnly = 2,
};

_enum AnimParamVectorType_t : uint32_t {
    ANIMPARAM_VECTOR_TYPE_NONE = 0,
    ANIMPARAM_VECTOR_TYPE_POSITION_WS = 1,
    ANIMPARAM_VECTOR_TYPE_POSITION_LS = 2,
    ANIMPARAM_VECTOR_TYPE_DIRECTION_WS = 3,
    ANIMPARAM_VECTOR_TYPE_DIRECTION_LS = 4,
};

_enum ParticleFloatMapType_t : uint32_t {
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

/// VPhysXConstraintParams_t::EnumFlags0_t
_enum VPhysXConstraintParams_t__EnumFlags0_t : uint32_t {
    FLAG0_SHIFT_INTERPENETRATE = 0,
    FLAG0_SHIFT_CONSTRAIN = 1,
    FLAG0_SHIFT_BREAKABLE_FORCE = 2,
    FLAG0_SHIFT_BREAKABLE_TORQUE = 3,
};

_enum ChoiceBlendMethod : uint32_t {
    SingleBlendTime = 0,
    PerChoiceBlendTimes = 1,
};

_enum ChoiceChangeMethod : uint32_t {
    OnReset = 0,
    OnCycleEnd = 1,
    OnResetOrCycleEnd = 2,
};

_enum HandshakeTagState_t : uint8_t {
    eInactive = 0,
    eActive = 1,
    eMomentarilyInactive = 2,
};

_enum PulseCursorExecResult_t : uint32_t {
    Succeeded = 0,
    Canceled = 1,
    Failed = 2,
    OngoingNotify = 3,
};

_enum Blend2DMode : uint32_t {
    Blend2DMode_General = 0,
    Blend2DMode_Directional = 1,
};

_enum TargetSelectorAngleMode_t : uint32_t {
    eFacingHeading = 0,
    eMoveHeading = 1,
};

_enum TargetWarpCorrectionMethod : uint32_t {
    ScaleMotion = 0,
    AddCorrectionDelta = 1,
};

_enum IKSolverType : uint32_t {
    IKSOLVER_Perlin = 0,
    IKSOLVER_TwoBone = 1,
    IKSOLVER_Fabrik = 2,
    IKSOLVER_DogLeg3Bone = 3,
    IKSOLVER_CCD = 4,
    IKSOLVER_COUNT = 5,
};

_enum RagdollPoseControl : uint32_t {
    Absolute = 0,
};

_enum LinearRootMotionBlendMode_t : uint32_t {
    LERP = 0,
    NLERP = 1,
    SLERP = 2,
};

/// CNmTimeConditionNode::Operator_t
_enum CNmTimeConditionNode__Operator_t : uint8_t {
    LessThan = 0,
    LessThanEqual = 1,
    GreaterThan = 2,
    GreaterThanEqual = 3,
};

_enum AnimValueSource : uint32_t {
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

_enum NmEventConditionRules_t : uint8_t {
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

/// CNmRootMotionData::SamplingMode_t
_enum CNmRootMotionData__SamplingMode_t : uint8_t {
    Delta = 0,
    WorldSpace = 1,
};

_enum PoseType_t : uint8_t {
    POSETYPE_STATIC = 0,
    POSETYPE_DYNAMIC = 1,
    POSETYPE_INVALID = 255,
};

/// CNmStateNode::TimedEvent_t::Comparison_t
_enum CNmStateNode__TimedEvent_t__Comparison_t : uint8_t {
    LessThanEqual = 0,
    GreaterThanEqual = 1,
};

_enum ModelBoneFlexComponent_t : uint32_t {
    MODEL_BONE_FLEX_INVALID = 4294967295,
    MODEL_BONE_FLEX_TX = 0,
    MODEL_BONE_FLEX_TY = 1,
    MODEL_BONE_FLEX_TZ = 2,
};

_enum NmIKBlendMode_t : uint8_t {
    Effector = 0,
    Pose = 1,
};

_enum TargetWarpAngleMode_t : uint32_t {
    eFacingHeading = 0,
    eMoveHeading = 1,
};

_enum MeshDrawPrimitiveFlags_t : uint32_t {
    MESH_DRAW_FLAGS_NONE = 0,
    MESH_DRAW_FLAGS_USE_SHADOW_FAST_PATH = 1,
    MESH_DRAW_FLAGS_USE_COMPRESSED_NORMAL_TANGENT = 2,
    MESH_DRAW_INPUT_LAYOUT_IS_NOT_MATCHED_TO_MATERIAL = 8,
    MESH_DRAW_FLAGS_USE_COMPRESSED_PER_VERTEX_LIGHTING = 16,
    MESH_DRAW_FLAGS_USE_UNCOMPRESSED_PER_VERTEX_LIGHTING = 32,
    MESH_DRAW_FLAGS_CAN_BATCH_WITH_DYNAMIC_SHADER_CONSTANTS = 64,
    MESH_DRAW_FLAGS_DRAW_LAST = 128,
};

_enum MorphFlexControllerRemapType_t : uint32_t {
    MORPH_FLEXCONTROLLER_REMAP_PASSTHRU = 0,
    MORPH_FLEXCONTROLLER_REMAP_2WAY = 1,
    MORPH_FLEXCONTROLLER_REMAP_NWAY = 2,
    MORPH_FLEXCONTROLLER_REMAP_EYELID = 3,
};

_enum AnimParamNetworkSetting : uint32_t {
    Auto = 0,
    AlwaysNetwork = 1,
    NeverNetwork = 2,
};

_enum PFNoiseType_t : uint32_t {
    PF_NOISE_TYPE_PERLIN = 0,
    PF_NOISE_TYPE_SIMPLEX = 1,
    PF_NOISE_TYPE_WORLEY = 2,
    PF_NOISE_TYPE_CURL = 3,
};

_enum ParticleFloatRoundType_t : uint32_t {
    PF_ROUND_TYPE_INVALID = 4294967295,
    PF_ROUND_TYPE_NEAREST = 0,
    PF_ROUND_TYPE_FLOOR = 1,
    PF_ROUND_TYPE_CEIL = 2,
    PF_ROUND_TYPE_COUNT = 3,
};

/// CNmSyncEventIndexConditionNode::TriggerMode_t
_enum CNmSyncEventIndexConditionNode__TriggerMode_t : uint8_t {
    ExactlyAtEventIndex = 0,
    GreaterThanEqualToEventIndex = 1,
};

/// CNmFloatMathNode::Operator_t
_enum CNmFloatMathNode__Operator_t : uint8_t {
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

/// PermModelInfo_t::FlagEnum
_enum PermModelInfo_t__FlagEnum : uint32_t {
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

_enum IKTargetSource : uint32_t {
    IKTARGETSOURCE_Bone = 0,
    IKTARGETSOURCE_AnimgraphParameter = 1,
    IKTARGETSOURCE_COUNT = 2,
};

_enum ParticleModelType_t : uint32_t {
    PM_TYPE_INVALID = 0,
    PM_TYPE_NAMED_VALUE_MODEL = 1,
    PM_TYPE_NAMED_VALUE_EHANDLE = 2,
    PM_TYPE_CONTROL_POINT = 3,
    PM_TYPE_COUNT = 4,
};

_enum NmEasingFunction_t : uint8_t {
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

_enum AnimParamType_t : uint8_t {
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

/// VPhysXBodyPart_t::VPhysXFlagEnum_t
_enum VPhysXBodyPart_t__VPhysXFlagEnum_t : uint32_t {
    FLAG_STATIC = 1,
    FLAG_KINEMATIC = 2,
    FLAG_JOINT = 4,
    FLAG_MASS = 8,
    FLAG_ALWAYS_DYNAMIC_ON_CLIENT = 16,
    FLAG_DISABLE_CCD = 32,
};

_enum AnimNodeNetworkMode : uint32_t {
    ServerAuthoritative = 0,
    ClientSimulate = 1,
};

_enum NmCachedValueMode_t : uint32_t {
    OnEntry = 0,
    OnExit = 1,
};

_enum FlexOpCode_t : uint32_t {
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

_enum StepPhase : uint32_t {
    StepPhase_OnGround = 0,
    StepPhase_InAir = 1,
};

_enum EPulseGraphExecutionHistoryFlag : uint32_t {
    NO_FLAGS = 0,
    CURSOR_ADD_TAG = 1,
    CURSOR_REMOVE_TAG = 2,
    CURSOR_RETIRED = 4,
    REQUIREMENT_PASS = 8,
    REQUIREMENT_FAIL = 16,
};

_enum EDemoBoneSelectionMode : uint32_t {
    CaptureAllBones = 0,
    CaptureSelectedBones = 1,
};

_enum ScriptedMoveTo_t : uint32_t {
    eWait = 0,
    eMoveWithGait = 3,
    eTeleport = 4,
    eWaitFacing = 5,
    eObsoleteBackCompat1 = 1,
    eObsoleteBackCompat2 = 2,
};

_enum TargetWarpTimingMethod : uint32_t {
    ReachDestinationOnRootMotionEnd = 0,
    ReachDestinationOnWarpTagEnd = 1,
};

_enum ModelMeshBufferUsage_t : uint8_t {
    MESH_BUFFER_USAGE_NONE = 0,
    MESH_BUFFER_USAGE_VB = 1,
    MESH_BUFFER_USAGE_IB = 2,
    MESH_BUFFER_USAGE_ADJACENCY = 4,
    MESH_BUFFER_USAGE_MESHLET_TRIS = 8,
    MESH_BUFFER_USAGE_RT_PROXY = 16,
    MESH_BUFFER_USAGE_VERTEX_ALBEDO = 32,
};

_enum NmTransitionRuleCondition_t : uint8_t {
    AnyAllowed = 0,
    FullyAllowed = 1,
    ConditionallyAllowed = 2,
    Blocked = 3,
};

_enum NmTargetWarpAlgorithm_t : uint8_t {
    Lerp = 0,
    Hermite = 1,
    HermiteFeaturePreserving = 2,
    Bezier = 3,
};

_enum PFNoiseTurbulence_t : uint32_t {
    PF_NOISE_TURB_NONE = 0,
    PF_NOISE_TURB_HIGHLIGHT = 1,
    PF_NOISE_TURB_FEEDBACK = 2,
    PF_NOISE_TURB_LOOPY = 3,
    PF_NOISE_TURB_CONTRAST = 4,
    PF_NOISE_TURB_ALTERNATE = 5,
};

_enum MatterialAttributeTagType_t : uint32_t {
    MATERIAL_ATTRIBUTE_TAG_VALUE = 0,
    MATERIAL_ATTRIBUTE_TAG_COLOR = 1,
};

_enum EIKEndEffectorRotationFixUpMode : uint32_t {
    None = 0,
    MatchTargetOrientation = 1,
    LookAtTargetForward = 2,
    MaintainParentOrientation = 3,
    Count = 4,
};

_enum NmEasingOperation_t : uint8_t {
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

/// CNmRootMotionOverrideNode::OverrideFlags_t
_enum CNmRootMotionOverrideNode__OverrideFlags_t : uint8_t {
    AllowMoveX = 0,
    AllowMoveY = 1,
    AllowMoveZ = 2,
    AllowFacingPitch = 3,
    ListenForEvents = 4,
};

/// VPhysXAggregateData_t::VPhysXFlagEnum_t
_enum VPhysXAggregateData_t__VPhysXFlagEnum_t : uint32_t {
    FLAG_IS_POLYSOUP_GEOMETRY = 1,
    FLAG_LEVEL_COLLISION = 16,
    FLAG_IGNORE_SCALE_OBSOLETE_DO_NOT_USE = 32,
};

/// CNmFloatAngleMathNode::Operation_t
_enum CNmFloatAngleMathNode__Operation_t : uint8_t {
    ClampTo180 = 0,
    ClampTo360 = 1,
    FlipHemisphere = 2,
    FlipHemisphereNegate = 3,
};

_enum ParticleFloatType_t : uint32_t {
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

_enum IKTargetCoordinateSystem : uint32_t {
    IKTARGETCOORDINATESYSTEM_WorldSpace = 0,
    IKTARGETCOORDINATESYSTEM_ModelSpace = 1,
    IKTARGETCOORDINATESYSTEM_COUNT = 2,
};

_enum PulseVariableKeysSource_t : uint32_t {
    PRIVATE = 0,
    CPP = 1,
    VMAP = 2,
    VMDL = 3,
    XML = 4,
    COUNT = 5,
};

_enum OrientationWarpRootMotionSource_t : uint32_t {
    eAnimationOrProcedural = 0,
    eAnimationOnly = 1,
    eProceduralOnly = 2,
};

_enum SharedMovementGait_t : uint8_t {
    eInvalid = 255,
    eSlow = 0,
    eMedium = 1,
    eFast = 2,
    eVeryFast = 3,
    eCount = 4,
};

_enum ParticleFloatBiasType_t : uint32_t {
    PF_BIAS_TYPE_INVALID = 4294967295,
    PF_BIAS_TYPE_STANDARD = 0,
    PF_BIAS_TYPE_GAIN = 1,
    PF_BIAS_TYPE_EXPONENTIAL = 2,
    PF_BIAS_TYPE_COUNT = 3,
};

/// CNmParticleEvent::Type_t
_enum CNmParticleEvent__Type_t : uint32_t {
    Create = 0,
    Create_CFG = 1,
};

_enum SolveIKChainAnimNodeDebugSetting : uint32_t {
    SOLVEIKCHAINANIMNODEDEBUGSETTING_None = 0,
    SOLVEIKCHAINANIMNODEDEBUGSETTING_X_Axis_Circle = 1,
    SOLVEIKCHAINANIMNODEDEBUGSETTING_Y_Axis_Circle = 2,
    SOLVEIKCHAINANIMNODEDEBUGSETTING_Z_Axis_Circle = 3,
    SOLVEIKCHAINANIMNODEDEBUGSETTING_Forward = 4,
    SOLVEIKCHAINANIMNODEDEBUGSETTING_Up = 5,
    SOLVEIKCHAINANIMNODEDEBUGSETTING_Left = 6,
};

_enum NmFollowBoneMode_t : uint8_t {
    RotationAndTranslation = 0,
    RotationOnly = 1,
    TranslationOnly = 2,
};

_enum BinaryNodeTiming : uint32_t {
    UseChild1 = 0,
    UseChild2 = 1,
    SyncChildren = 2,
};

_enum NmTransitionRule_t : uint8_t {
    AllowTransition = 0,
    ConditionallyAllowTransition = 1,
    BlockTransition = 2,
};

_enum CAnimationGraphVisualizerPrimitiveType : uint32_t {
    ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Text = 0,
    ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Sphere = 1,
    ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Line = 2,
    ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Pie = 3,
    ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Axis = 4,
};

_enum BoneTransformSpace_t : uint32_t {
    BoneTransformSpace_Invalid = 4294967295,
    BoneTransformSpace_Parent = 0,
    BoneTransformSpace_Model = 1,
    BoneTransformSpace_World = 2,
};

_enum CNmEventRelevance_t : uint32_t {
    ClientOnly = 0,
    ServerOnly = 1,
    ClientAndServer = 2,
};

_enum SeqCmd_t : uint32_t {
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

_enum DynamicContinuousContactBehavior_t : uint8_t {
    DYNAMIC_CONTINUOUS_ALLOW_IF_REQUESTED_BY_OTHER_BODY = 0,
    DYNAMIC_CONTINUOUS_ALWAYS = 1,
    DYNAMIC_CONTINUOUS_NEVER = 2,
};

_enum JointAxis_t : uint32_t {
    JOINT_AXIS_X = 0,
    JOINT_AXIS_Y = 1,
    JOINT_AXIS_Z = 2,
    JOINT_AXIS_COUNT = 3,
};

_enum JointMotion_t : uint32_t {
    JOINT_MOTION_FREE = 0,
    JOINT_MOTION_LOCKED = 1,
    JOINT_MOTION_COUNT = 2,
};

_enum SosActionSetParamSortType_t : uint32_t {
    SOS_SETPARAM_SORTTYPE_HIGHEST = 0,
    SOS_SETPARAM_SORTTYPE_LOWEST = 1,
};

_enum SosGroupType_t : uint32_t {
    SOS_GROUPTYPE_DYNAMIC = 0,
    SOS_GROUPTYPE_STATIC = 1,
};

_enum VMixSubgraphSwitchInterpolationType_t : uint32_t {
    SUBGRAPH_INTERPOLATION_TEMPORAL_CROSSFADE = 0,
    SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT = 1,
    SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING = 2,
};

_enum SosActionLimitSortType_t : uint32_t {
    SOS_LIMIT_SORTTYPE_HIGHEST = 0,
    SOS_LIMIT_SORTTYPE_LOWEST = 1,
};

_enum VMixFilterSlope_t : uint8_t {
    FILTER_SLOPE_1POLE_6dB = 0,
    FILTER_SLOPE_1POLE_12dB = 1,
    FILTER_SLOPE_1POLE_18dB = 2,
    FILTER_SLOPE_1POLE_24dB = 3,
    FILTER_SLOPE_12dB = 4,
    FILTER_SLOPE_24dB = 5,
    FILTER_SLOPE_36dB = 6,
    FILTER_SLOPE_48dB = 7,
    FILTER_SLOPE_MAX = 7,
};

_enum CVSoundFormat_t : uint8_t {
    PCM16 = 0,
    PCM8 = 1,
    MP3 = 2,
    ADPCM = 3,
};

_enum EMidiNote : uint8_t {
    C = 0,
    C_Sharp = 1,
    D = 2,
    D_Sharp = 3,
    E = 4,
    F = 5,
    F_Sharp = 6,
    G = 7,
    G_Sharp = 8,
    A = 9,
    A_Sharp = 10,
    B = 11,
    Count = 12,
};

_enum VMixChannelOperation_t : uint32_t {
    VMIX_CHAN_STEREO = 0,
    VMIX_CHAN_LEFT = 1,
    VMIX_CHAN_RIGHT = 2,
    VMIX_CHAN_SWAP = 3,
    VMIX_CHAN_MONO = 4,
    VMIX_CHAN_MID_SIDE = 5,
};

_enum VMixPannerType_t : uint32_t {
    PANNER_TYPE_LINEAR = 0,
    PANNER_TYPE_EQUAL_POWER = 1,
};

_enum soundlevel_t : uint32_t {
    SNDLVL_NONE = 0,
    SNDLVL_20dB = 20,
    SNDLVL_25dB = 25,
    SNDLVL_30dB = 30,
    SNDLVL_35dB = 35,
    SNDLVL_40dB = 40,
    SNDLVL_45dB = 45,
    SNDLVL_50dB = 50,
    SNDLVL_55dB = 55,
    SNDLVL_IDLE = 60,
    SNDLVL_60dB = 60,
    SNDLVL_65dB = 65,
    SNDLVL_STATIC = 66,
    SNDLVL_70dB = 70,
    SNDLVL_NORM = 75,
    SNDLVL_75dB = 75,
    SNDLVL_80dB = 80,
    SNDLVL_TALKING = 80,
    SNDLVL_85dB = 85,
    SNDLVL_90dB = 90,
    SNDLVL_95dB = 95,
    SNDLVL_100dB = 100,
    SNDLVL_105dB = 105,
    SNDLVL_110dB = 110,
    SNDLVL_120dB = 120,
    SNDLVL_130dB = 130,
    SNDLVL_GUNFIRE = 140,
    SNDLVL_140dB = 140,
    SNDLVL_150dB = 150,
    SNDLVL_180dB = 180,
};

_enum SosGroupFieldBehavior_t : uint32_t {
    kIgnore = 0,
    kBranch = 1,
    kMatch = 2,
};

_enum PlayBackMode_t : uint32_t {
    Random = 0,
    RandomNoRepeats = 1,
    RandomAvoidLast = 2,
    Sequential = 3,
    RandomWeights = 4,
};

_enum SosEditItemType_t : uint32_t {
    SOS_EDIT_ITEM_TYPE_SOUNDEVENTS = 0,
    SOS_EDIT_ITEM_TYPE_SOUNDEVENT = 1,
    SOS_EDIT_ITEM_TYPE_LIBRARYSTACKS = 2,
    SOS_EDIT_ITEM_TYPE_STACK = 3,
    SOS_EDIT_ITEM_TYPE_OPERATOR = 4,
    SOS_EDIT_ITEM_TYPE_FIELD = 5,
};

_enum SosActionStopType_t : uint32_t {
    SOS_STOPTYPE_NONE = 0,
    SOS_STOPTYPE_TIME = 1,
    SOS_STOPTYPE_OPVAR = 2,
};

_enum VMixFilterType_t : uint16_t {
    FILTER_UNKNOWN = 65535,
    FILTER_LOWPASS = 0,
    FILTER_HIGHPASS = 1,
    FILTER_BANDPASS = 2,
    FILTER_NOTCH = 3,
    FILTER_PEAKING_EQ = 4,
    FILTER_LOW_SHELF = 5,
    FILTER_HIGH_SHELF = 6,
    FILTER_ALLPASS = 7,
    FILTER_PASSTHROUGH = 8,
};

_enum VMixLFOShape_t : uint32_t {
    LFO_SHAPE_SINE = 0,
    LFO_SHAPE_SQUARE = 1,
    LFO_SHAPE_TRI = 2,
    LFO_SHAPE_SAW = 3,
    LFO_SHAPE_NOISE = 4,
};

_enum EWaveform : uint8_t {
    Sine = 0,
    Square = 1,
    Saw = 2,
    Triangle = 3,
    Noise = 4,
};

_enum VMixGraphCommandID_t : uint32_t {
    CMD_INVALID = 4294967295,
    CMD_CONTROL_INPUT_STORE = 1,
    CMD_CONTROL_INPUT_STORE_DB = 2,
    CMD_CONTROL_TRANSIENT_INPUT_STORE = 3,
    CMD_CONTROL_TRANSIENT_INPUT_RESET = 4,
    CMD_CONTROL_OUTPUT_STORE = 5,
    CMD_CONTROL_EVALUATE_CURVE = 6,
    CMD_CONTROL_COPY = 7,
    CMD_CONTROL_COND_COPY_IF_NEGATIVE = 8,
    CMD_CONTROL_REMAP_LINEAR = 9,
    CMD_CONTROL_REMAP_SINE = 10,
    CMD_CONTROL_REMAP_LOGLINEAR = 11,
    CMD_CONTROL_MAX = 12,
    CMD_CONTROL_RESET_TIMER = 13,
    CMD_CONTROL_INCREMENT_TIMER = 14,
    CMD_CONTROL_EVAL_ENVELOPE = 15,
    CMD_CONTROL_SINE_BLEND = 16,
    CMD_PROCESSOR_SET_CONTROL_VALUE = 17,
    CMD_PROCESSOR_SET_NAME_INPUT = 18,
    CMD_PROCESSOR_SET_CONTROL_ARRAYVALUE = 19,
    CMD_PROCESSOR_STORE_CONTROL_VALUE = 20,
    CMD_PROCESSOR_SET_VSND_VALUE = 21,
    CMD_SUBMIX_PROCESS = 22,
    CMD_SUBMIX_GENERATE = 23,
    CMD_SUBMIX_GENERATE_SIDECHAIN = 24,
    CMD_SUBMIX_DEBUG = 25,
    CMD_SUBMIX_MIX2x1 = 26,
    CMD_SUBMIX_OUTPUT = 27,
    CMD_SUBMIX_OUTPUTx2 = 28,
    CMD_SUBMIX_COPY = 29,
    CMD_SUBMIX_ACCUMULATE = 30,
    CMD_SUBMIX_METER = 31,
    CMD_SUBMIX_METER_SPECTRUM = 32,
    CMD_IMPULSERESPONSE_INPUT_STORE = 33,
    CMD_PROCESSOR_SET_IMPULSERESPONSE_VALUE = 34,
    CMD_REMAP_VSND_TO_IMPULSERESPONSE = 35,
    CMD_IMPULSERESPONSE_RESET = 36,
    CMD_BLEND_VSNDS_TO_IMPULSERESPONSE = 37,
    CMD_IMPULSERESPONSE_DELAY = 38,
};

_enum EMode_t : uint32_t {
    Peak = 0,
    RMS = 1,
};

_enum ESceneObjectVisualization : uint32_t {
    SCENEOBJECT_VIS_NONE = 0,
    SCENEOBJECT_VIS_OBJECT = 1,
    SCENEOBJECT_VIS_MATERIAL = 2,
    SCENEOBJECT_VIS_TEXTURE_SIZE = 3,
    SCENEOBJECT_VIS_LOD = 4,
    SCENEOBJECT_VIS_INSTANCING = 5,
};

_enum DecalRtEncoding_t : uint8_t {
    kDecalInvalid = 255,
    kDecalMin = 0,
    kDecalBlood = 0,
    kDecalCloak = 1,
    kDecalMax = 2,
    kDecalDefault = 0,
};

_enum DisableShadows_t : uint8_t {
    kDisableShadows_None = 0,
    kDisableShadows_All = 1,
    kDisableShadows_Baked = 2,
    kDisableShadows_Realtime = 3,
};

_enum ESilhouetteType_t : uint32_t {
    SILHOUETTE_NONE = 0,
    SILHOUETTE_LIGHT = 1,
    SILHOUETTE_ENVMAP = 2,
    SILHOUETTE_LPV = 4,
};

_enum AggregateInstanceStream_t : uint8_t {
    AGGREGATE_INSTANCE_STREAM_NONE = 0,
    AGGREGATE_INSTANCE_STREAM_LIGHTMAPUV_UNORM16 = 1,
    AGGREGATE_INSTANCE_STREAM_VERTEXTINT_UNORM8 = 2,
    AGGREGATE_INSTANCE_STREAM_VERTEXBLEND_UNORM8 = 4,
};

_enum ObjectTypeFlags_t : uint32_t {
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

_enum RTProxyInstanceFlags_t : uint8_t {
    RTPROXY_INSTANCE_FLAG_NONE = 0,
    RTPROXY_INSTANCE_UNIQUE_MESH = 1,
};

_enum TextureRepetitionMode_t : uint32_t {
    TEXTURE_REPETITION_PARTICLE = 0,
    TEXTURE_REPETITION_PATH = 1,
};

_enum ParticleCollisionMask_t : uint64_t {
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

_enum ParticleOrientationSetMode_t : uint32_t {
    PARTICLE_ORIENTATION_SET_NONE = 4294967295,
    PARTICLE_ORIENTATION_SET_FROM_VELOCITY = 0,
    PARTICLE_ORIENTATION_SET_FROM_NORMAL = 1,
    PARTICLE_ORIENTATION_SET_FROM_ROTATIONS = 2,
};

_enum ParticleLightTypeChoiceList_t : uint32_t {
    PARTICLE_LIGHT_TYPE_POINT = 0,
    PARTICLE_LIGHT_TYPE_SPOT = 1,
    PARTICLE_LIGHT_TYPE_FX = 2,
    PARTICLE_LIGHT_TYPE_CAPSULE = 3,
};

_enum ParticleLightFogLightingMode_t : uint32_t {
    PARTICLE_LIGHT_FOG_LIGHTING_MODE_NONE = 0,
    PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC = 2,
    PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC_NOSHADOWS = 4,
};

_enum ParticleOmni2LightTypeChoiceList_t : uint32_t {
    PARTICLE_OMNI2_LIGHT_TYPE_POINT = 0,
    PARTICLE_OMNI2_LIGHT_TYPE_SPHERE = 1,
};

_enum SpriteCardShaderType_t : uint32_t {
    SPRITECARD_SHADER_BASE = 0,
    SPRITECARD_SHADER_CUSTOM = 1,
};

_enum ParticleLiquidContents_t : uint32_t {
    PARTICLE_LIQUID_NONE = 0,
    PARTICLE_LIQUID_OIL = 1,
    PARTICLE_LIQUID_WATER = 2,
};

_enum ParticleImpulseType_t : uint32_t {
    IMPULSE_TYPE_NONE = 0,
    IMPULSE_TYPE_GENERIC = 1,
    IMPULSE_TYPE_ROPE = 2,
    IMPULSE_TYPE_EXPLOSION = 4,
    IMPULSE_TYPE_EXPLOSION_UNDERWATER = 8,
    IMPULSE_TYPE_PARTICLE_SYSTEM = 16,
};

_enum ClosestPointTestType_t : uint32_t {
    PARTICLE_CLOSEST_TYPE_BOX = 0,
    PARTICLE_CLOSEST_TYPE_CAPSULE = 1,
    PARTICLE_CLOSEST_TYPE_HYBRID = 2,
};

_enum ParticleEndcapMode_t : uint32_t {
    PARTICLE_ENDCAP_ALWAYS_ON = 4294967295,
    PARTICLE_ENDCAP_ENDCAP_OFF = 0,
    PARTICLE_ENDCAP_ENDCAP_ON = 1,
};

_enum ParticleSortingChoiceList_t : uint32_t {
    PARTICLE_SORTING_NEAREST = 0,
    PARTICLE_SORTING_CREATION_TIME = 1,
};

_enum ParticleCollisionMode_t : uint32_t {
    COLLISION_MODE_PER_PARTICLE_TRACE = 3,
    COLLISION_MODE_USE_NEAREST_TRACE = 2,
    COLLISION_MODE_PER_FRAME_PLANESET = 1,
    COLLISION_MODE_INITIAL_TRACE_DOWN = 0,
    COLLISION_MODE_DISABLED = 4294967295,
};

_enum ParticleOrientationChoiceList_t : uint32_t {
    PARTICLE_ORIENTATION_SCREEN_ALIGNED = 0,
    PARTICLE_ORIENTATION_SCREEN_Z_ALIGNED = 1,
    PARTICLE_ORIENTATION_WORLD_Z_ALIGNED = 2,
    PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL = 3,
    PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL = 4,
    PARTICLE_ORIENTATION_FULL_3AXIS_ROTATION = 5,
};

_enum ParticleHitboxDataSelection_t : uint32_t {
    PARTICLE_HITBOX_AVERAGE_SPEED = 0,
    PARTICLE_HITBOX_COUNT = 1,
};

_enum RenderModelSubModelFieldType_t : uint32_t {
    SUBMODEL_AS_BODYGROUP_SUBMODEL = 0,
    SUBMODEL_AS_MESHGROUP_INDEX = 1,
    SUBMODEL_AS_MESHGROUP_MASK = 2,
    SUBMODEL_IGNORED_USE_MODEL_DEFAULT_MESHGROUP_MASK = 3,
};

_enum SpriteCardTextureChannel_t : uint32_t {
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

_enum ParticleAlphaReferenceType_t : uint32_t {
    PARTICLE_ALPHA_REFERENCE_ALPHA_ALPHA = 0,
    PARTICLE_ALPHA_REFERENCE_OPAQUE_ALPHA = 1,
    PARTICLE_ALPHA_REFERENCE_ALPHA_OPAQUE = 2,
    PARTICLE_ALPHA_REFERENCE_OPAQUE_OPAQUE = 3,
};

_enum SpriteCardTextureType_t : uint32_t {
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

_enum BBoxVolumeType_t : uint32_t {
    BBOX_VOLUME = 0,
    BBOX_DIMENSIONS = 1,
    BBOX_MINS_MAXS = 2,
    BBOX_RADIUS = 3,
};

_enum ParticleDetailLevel_t : uint32_t {
    PARTICLEDETAIL_LOW = 0,
    PARTICLEDETAIL_MEDIUM = 1,
    PARTICLEDETAIL_HIGH = 2,
    PARTICLEDETAIL_ULTRA = 3,
};

_enum ParticleSequenceCropOverride_t : uint32_t {
    PARTICLE_SEQUENCE_CROP_OVERRIDE_DEFAULT = 4294967295,
    PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_OFF = 0,
    PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_ON = 1,
};

_enum ParticleFalloffFunction_t : uint32_t {
    PARTICLE_FALLOFF_CONSTANT = 0,
    PARTICLE_FALLOFF_LINEAR = 1,
    PARTICLE_FALLOFF_EXPONENTIAL = 2,
};

_enum ParticleLightUnitChoiceList_t : uint32_t {
    PARTICLE_LIGHT_UNIT_CANDELAS = 0,
    PARTICLE_LIGHT_UNIT_LUMENS = 1,
};

_enum ParticleDepthFeatheringMode_t : uint32_t {
    PARTICLE_DEPTH_FEATHERING_OFF = 0,
    PARTICLE_DEPTH_FEATHERING_ON_OPTIONAL = 1,
    PARTICLE_DEPTH_FEATHERING_ON_REQUIRED = 2,
};

_enum MaterialProxyType_t : uint32_t {
    MATERIAL_PROXY_STATUS_EFFECT = 0,
    MATERIAL_PROXY_TINT = 1,
};

_enum ParticleLightnintBranchBehavior_t : uint32_t {
    PARTICLE_LIGHTNING_BRANCH_CURRENT_DIR = 0,
    PARTICLE_LIGHTNING_BRANCH_ENDPOINT_DIR = 1,
};

_enum ParticleOutputBlendMode_t : uint32_t {
    PARTICLE_OUTPUT_BLEND_MODE_ALPHA = 0,
    PARTICLE_OUTPUT_BLEND_MODE_ADD = 1,
    PARTICLE_OUTPUT_BLEND_MODE_BLEND_ADD = 2,
    PARTICLE_OUTPUT_BLEND_MODE_HALF_BLEND_ADD = 3,
    PARTICLE_OUTPUT_BLEND_MODE_NEG_HALF_BLEND_ADD = 4,
    PARTICLE_OUTPUT_BLEND_MODE_MOD2X = 5,
    PARTICLE_OUTPUT_BLEND_MODE_LIGHTEN = 6,
};

_enum SnapshotIndexType_t : uint32_t {
    SNAPSHOT_INDEX_INCREMENT = 0,
    SNAPSHOT_INDEX_DIRECT = 1,
};

_enum ParticleSelection_t : uint32_t {
    PARTICLE_SELECTION_FIRST = 0,
    PARTICLE_SELECTION_LAST = 1,
    PARTICLE_SELECTION_NUMBER = 2,
};

_enum ParticleTextureLayerBlendType_t : uint32_t {
    SPRITECARD_TEXTURE_BLEND_MULTIPLY = 0,
    SPRITECARD_TEXTURE_BLEND_MOD2X = 1,
    SPRITECARD_TEXTURE_BLEND_REPLACE = 2,
    SPRITECARD_TEXTURE_BLEND_ADD = 3,
    SPRITECARD_TEXTURE_BLEND_SUBTRACT = 4,
    SPRITECARD_TEXTURE_BLEND_AVERAGE = 5,
    SPRITECARD_TEXTURE_BLEND_LUMINANCE = 6,
};

_enum ParticleTraceSet_t : uint32_t {
    PARTICLE_TRACE_SET_ALL = 0,
    PARTICLE_TRACE_SET_STATIC = 1,
    PARTICLE_TRACE_SET_STATIC_AND_KEYFRAMED = 2,
    PARTICLE_TRACE_SET_DYNAMIC = 3,
};

_enum ParticleOrientationType_t : uint32_t {
    PARTICLE_ORIENTATION_NONE = 0,
    PARTICLE_ORIENTATION_VELOCITY = 1,
    PARTICLE_ORIENTATION_NORMAL = 2,
    PARTICLE_ORIENTATION_ROTATION = 4,
};

_enum ModelHitboxType_t : uint32_t {
    MODEL_HITBOX_TYPE_STANDARD = 0,
    MODEL_HITBOX_TYPE_RAW_BONES = 1,
    MODEL_HITBOX_TYPE_RENDERBOUNDS = 2,
    MODEL_HITBOX_TYPE_SNAPSHOT = 3,
};

_enum ParticleLightBehaviorChoiceList_t : uint32_t {
    PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION = 0,
    PARTICLE_LIGHT_BEHAVIOR_ROPE = 1,
    PARTICLE_LIGHT_BEHAVIOR_TRAILS = 2,
};

_enum ParticleTopology_t : uint32_t {
    PARTICLE_TOPOLOGY_POINTS = 0,
    PARTICLE_TOPOLOGY_LINES = 1,
    PARTICLE_TOPOLOGY_TRIS = 2,
    PARTICLE_TOPOLOGY_QUADS = 3,
    PARTICLE_TOPOLOGY_CUBES = 4,
};

_enum ParticleAttrBoxFlags_t : uint32_t {
    PARTICLE_ATTR_BOX_FLAGS_NONE = 0,
    PARTICLE_ATTR_BOX_FLAGS_WATER = 1,
    PARTICLE_ATTR_BOX_FLAGS_ON_FIRE = 2,
    PARTICLE_ATTR_BOX_FLAGS_ELECTRIFIED = 4,
    PARTICLE_ATTR_BOX_FLAGS_ASLEEP = 8,
    PARTICLE_ATTR_BOX_FLAGS_FROZEN = 16,
    PARTICLE_ATTR_BOX_FLAGS_TIMED_DECAY = 32,
};

_enum AnimationType_t : uint32_t {
    ANIMATION_TYPE_FIXED_RATE = 0,
    ANIMATION_TYPE_FIT_LIFETIME = 1,
    ANIMATION_TYPE_MANUAL_FRAMES = 2,
};

_enum HitboxLerpType_t : uint32_t {
    HITBOX_LERP_LIFETIME = 0,
    HITBOX_LERP_CONSTANT = 1,
};

_enum ParticleRotationLockType_t : uint32_t {
    PARTICLE_ROTATION_LOCK_NONE = 0,
    PARTICLE_ROTATION_LOCK_ROTATIONS = 1,
    PARTICLE_ROTATION_LOCK_NORMAL = 2,
};

_enum VectorExpressionType_t : uint32_t {
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

_enum ParticleFogType_t : uint32_t {
    PARTICLE_FOG_GAME_DEFAULT = 0,
    PARTICLE_FOG_ENABLED = 1,
    PARTICLE_FOG_DISABLED = 2,
};

_enum VectorFloatExpressionType_t : uint32_t {
    VECTOR_FLOAT_EXPRESSION_UNINITIALIZED = 4294967295,
    VECTOR_FLOAT_EXPRESSION_DOTPRODUCT = 0,
    VECTOR_FLOAT_EXPRESSION_DISTANCE = 1,
    VECTOR_FLOAT_EXPRESSION_DISTANCESQR = 2,
    VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTH = 3,
    VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTHSQR = 4,
    VECTOR_FLOAT_EXPRESSION_INPUT1_NOISE = 5,
};

_enum ParticlePinDistance_t : uint32_t {
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

_enum ParticleControlPointAxis_t : uint32_t {
    PARTICLE_CP_AXIS_X = 0,
    PARTICLE_CP_AXIS_Y = 1,
    PARTICLE_CP_AXIS_Z = 2,
    PARTICLE_CP_AXIS_NEGATIVE_X = 3,
    PARTICLE_CP_AXIS_NEGATIVE_Y = 4,
    PARTICLE_CP_AXIS_NEGATIVE_Z = 5,
};

_enum ParticleHitboxBiasType_t : uint32_t {
    PARTICLE_HITBOX_BIAS_ENTITY = 0,
    PARTICLE_HITBOX_BIAS_HITBOX = 1,
};

_enum ParticleDirectionNoiseType_t : uint32_t {
    PARTICLE_DIR_NOISE_PERLIN = 0,
    PARTICLE_DIR_NOISE_CURL = 1,
    PARTICLE_DIR_NOISE_WORLEY_BASIC = 2,
};

_enum ParticleMassMode_t : uint32_t {
    PARTICLE_MASSMODE_RADIUS_CUBED = 0,
    PARTICLE_MASSMODE_RADIUS_SQUARED = 2,
};

_enum EventTypeSelection_t : uint32_t {
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

_enum SetStatisticExpressionType_t : uint32_t {
    SET_EXPRESSION_UNINITIALIZED = 4294967295,
    SET_EXPRESSION_SUM = 0,
    SET_EXPRESSION_MEAN = 1,
    SET_EXPRESSION_MEDIAN = 2,
    SET_EXPRESSION_MODE = 3,
    SET_EXPRESSION_STANDARD_DEVIATION = 4,
    SET_EXPRESSION_MIN = 5,
    SET_EXPRESSION_MAX = 6,
};

_enum ParticleLightingQuality_t : uint32_t {
    PARTICLE_LIGHTING_PER_PARTICLE = 0,
    PARTICLE_LIGHTING_PER_VERTEX = 1,
    PARTICLE_LIGHTING_PER_PIXEL = 4294967295,
    PARTICLE_LIGHTING_OVERRIDE_POSITION = 2,
    PARTICLE_LIGHTING_OVERRIDE_COLOR = 3,
    PARTICLE_LIGHTING_ADD_EXTRA_LIGHT = 4,
};

_enum ParticleParentSetMode_t : uint32_t {
    PARTICLE_SET_PARENT_NO = 0,
    PARTICLE_SET_PARENT_IMMEDIATE = 1,
    PARTICLE_SET_PARENT_ROOT = 2,
};

_enum StandardLightingAttenuationStyle_t : uint32_t {
    LIGHT_STYLE_OLD = 0,
    LIGHT_STYLE_NEW = 1,
};

_enum BlurFilterType_t : uint32_t {
    BLURFILTER_GAUSSIAN = 0,
    BLURFILTER_BOX = 1,
};

_enum SpriteCardPerParticleScale_t : uint32_t {
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

_enum ScalarExpressionType_t : uint32_t {
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

_enum DetailCombo_t : uint32_t {
    DETAIL_COMBO_OFF = 0,
    DETAIL_COMBO_ADD = 1,
    DETAIL_COMBO_ADD_SELF_ILLUM = 2,
    DETAIL_COMBO_MOD2X = 3,
};

_enum ParticleColorBlendType_t : uint32_t {
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

_enum ParticleColorBlendMode_t : uint32_t {
    PARTICLEBLEND_DEFAULT = 0,
    PARTICLEBLEND_OVERLAY = 1,
    PARTICLEBLEND_DARKEN = 2,
    PARTICLEBLEND_LIGHTEN = 3,
    PARTICLEBLEND_MULTIPLY = 4,
};

_enum ParticleCollisionGroup_t : uint32_t {
    PARTICLE_COLLISION_GROUP_DEFAULT = 4,
    PARTICLE_COLLISION_GROUP_DEBRIS = 5,
    PARTICLE_COLLISION_GROUP_INTERACTIVE = 7,
    PARTICLE_COLLISION_GROUP_PLAYER = 8,
    PARTICLE_COLLISION_GROUP_VEHICLE = 10,
    PARTICLE_COLLISION_GROUP_NPC = 12,
    PARTICLE_COLLISION_GROUP_PROPS = 24,
};

_enum ParticlePostProcessPriorityGroup_t : uint32_t {
    PARTICLE_POST_PROCESS_PRIORITY_LEVEL_VOLUME = 0,
    PARTICLE_POST_PROCESS_PRIORITY_LEVEL_OVERRIDE = 1,
    PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_EFFECT = 2,
    PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_LOW = 3,
    PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_HIGH = 4,
    PARTICLE_POST_PROCESS_PRIORITY_GLOBAL_UI = 5,
};

_enum InheritableBoolType_t : uint32_t {
    INHERITABLE_BOOL_INHERIT = 0,
    INHERITABLE_BOOL_FALSE = 1,
    INHERITABLE_BOOL_TRUE = 2,
};

_enum PetGroundType_t : uint32_t {
    PET_GROUND_NONE = 0,
    PET_GROUND_GRID = 1,
    PET_GROUND_PLANE = 2,
};

_enum ParticleFanType_t : uint32_t {
    PARTICLE_FAN_TYPE_FAN = 0,
    PARTICLE_FAN_TYPE_ROTOR_WASH = 1,
    PARTICLE_FAN_TYPE_RADIAL = 2,
};

_enum ParticleEntityPos_t : uint32_t {
    PARTICLE_ABS_ORIGIN = 0,
    PARTICLE_WORLDSPACE_CENTER = 1,
    PARTICLE_EYES = 2,
};

_enum ParticleReplicationMode_t : uint32_t {
    PARTICLE_REPLICATIONMODE_NONE = 0,
    PARTICLE_REPLICATIONMODE_REPLICATE_FOR_EACH_PARENT_PARTICLE = 1,
};

_enum ParticleVRHandChoiceList_t : uint32_t {
    PARTICLE_VRHAND_LEFT = 0,
    PARTICLE_VRHAND_RIGHT = 1,
    PARTICLE_VRHAND_CP = 2,
    PARTICLE_VRHAND_CP_OBJECT = 3,
};

_enum PFuncVisualizationType_t : uint32_t {
    PFUNC_VISUALIZATION_SPHERE_WIREFRAME = 0,
    PFUNC_VISUALIZATION_SPHERE_SOLID = 1,
    PFUNC_VISUALIZATION_BOX = 2,
    PFUNC_VISUALIZATION_RING = 3,
    PFUNC_VISUALIZATION_PLANE = 4,
    PFUNC_VISUALIZATION_LINE = 5,
    PFUNC_VISUALIZATION_CYLINDER = 6,
};

_enum ParticleTraceMissBehavior_t : uint32_t {
    PARTICLE_TRACE_MISS_BEHAVIOR_NONE = 0,
    PARTICLE_TRACE_MISS_BEHAVIOR_KILL = 1,
    PARTICLE_TRACE_MISS_BEHAVIOR_TRACE_END = 2,
};

_enum MissingParentInheritBehavior_t : uint32_t {
    MISSING_PARENT_DO_NOTHING = 4294967295,
    MISSING_PARENT_KILL = 0,
    MISSING_PARENT_FIND_NEW = 1,
    MISSING_PARENT_SAME_INDEX = 2,
};

_enum Detail2Combo_t : uint32_t {
    DETAIL_2_COMBO_UNINITIALIZED = 4294967295,
    DETAIL_2_COMBO_OFF = 0,
    DETAIL_2_COMBO_ADD = 1,
    DETAIL_2_COMBO_ADD_SELF_ILLUM = 2,
    DETAIL_2_COMBO_MOD2X = 3,
    DETAIL_2_COMBO_MUL = 4,
    DETAIL_2_COMBO_CROSSFADE = 5,
};

_enum ParticleSetMethod_t : uint32_t {
    PARTICLE_SET_REPLACE_VALUE = 0,
    PARTICLE_SET_SCALE_INITIAL_VALUE = 1,
    PARTICLE_SET_ADD_TO_INITIAL_VALUE = 2,
    PARTICLE_SET_RAMP_CURRENT_VALUE = 3,
    PARTICLE_SET_SCALE_CURRENT_VALUE = 4,
    PARTICLE_SET_ADD_TO_CURRENT_VALUE = 5,
};

_enum EStyleNodeType : uint32_t {
    ROOT = 0,
    EXPRESSION = 1,
    PROPERTY = 2,
    DEFINE = 3,
    IMPORT = 4,
    KEYFRAMES = 5,
    KEYFRAME_SELECTOR = 6,
    STYLE_SELECTOR = 7,
    WHITESPACE = 8,
    EXPRESSION_TEXT = 9,
    EXPRESSION_URL = 10,
    EXPRESSION_CONCAT = 11,
    REFERENCE_CONTENT = 12,
    REFERENCE_COMPILED = 13,
    REFERENCE_PASSTHROUGH = 14,
    REFERENCE_PANEL = 15,
    COMPILER_CONDITIONAL = 16,
};

_enum ELayoutNodeType : uint32_t {
    ROOT = 0,
    STYLES = 1,
    SCRIPT_BODY = 2,
    SCRIPTS = 3,
    SNIPPETS = 4,
    INCLUDE = 5,
    SNIPPET = 6,
    PANEL = 7,
    PANEL_ATTRIBUTE = 8,
    PANEL_ATTRIBUTE_VALUE = 9,
    REFERENCE_CONTENT = 10,
    REFERENCE_COMPILED = 11,
    REFERENCE_PASSTHROUGH = 12,
};

_enum MoveType_t : uint8_t {
    MOVETYPE_NONE = 0,
    MOVETYPE_OBSOLETE = 1,
    MOVETYPE_WALK = 2,
    MOVETYPE_FLY = 3,
    MOVETYPE_FLYGRAVITY = 4,
    MOVETYPE_VPHYSICS = 5,
    MOVETYPE_PUSH = 6,
    MOVETYPE_NOCLIP = 7,
    MOVETYPE_OBSERVER = 8,
    MOVETYPE_LADDER = 9,
    MOVETYPE_CUSTOM = 10,
    MOVETYPE_LAST = 11,
    MOVETYPE_INVALID = 11,
    MOVETYPE_MAX_BITS = 5,
};

_enum EntityAttachmentType_t : uint32_t {
    eAbsOrigin = 0,
    eCenter = 1,
    eEyes = 2,
    eAttachment = 3,
};

_enum EOverrideBlockLOS_t : uint32_t {
    BLOCK_LOS_DEFAULT = 0,
    BLOCK_LOS_FORCE_FALSE = 1,
    BLOCK_LOS_FORCE_TRUE = 2,
};

_enum FuncDoorSpawnPos_t : uint32_t {
    FUNC_DOOR_SPAWN_CLOSED = 0,
    FUNC_DOOR_SPAWN_OPEN = 1,
};

_enum ObserverMode_t : uint32_t {
    OBS_MODE_NONE = 0,
    OBS_MODE_FIXED = 1,
    OBS_MODE_IN_EYE = 2,
    OBS_MODE_CHASE = 3,
    OBS_MODE_ROAMING = 4,
    NUM_OBSERVER_MODES = 5,
};

_enum MedalRank_t : uint32_t {
    MEDAL_RANK_NONE = 0,
    MEDAL_RANK_BRONZE = 1,
    MEDAL_RANK_SILVER = 2,
    MEDAL_RANK_GOLD = 3,
    MEDAL_RANK_COUNT = 4,
};

_enum CanPlaySequence_t : uint32_t {
    CANNOT_PLAY = 0,
    CAN_PLAY_NOW = 1,
    CAN_PLAY_ENQUEUED = 2,
};

_enum RotatorTargetSpace_t : uint32_t {
    ROTATOR_TARGET_WORLDSPACE = 0,
    ROTATOR_TARGET_LOCALSPACE = 1,
};

_enum Disposition_t : uint32_t {
    D_ER = 0,
    D_HT = 1,
    D_FR = 2,
    D_LI = 3,
    D_NU = 4,
    D_ERROR = 0,
    D_HATE = 1,
    D_FEAR = 2,
    D_LIKE = 3,
    D_NEUTRAL = 4,
};

_enum ValueRemapperHapticsType_t : uint32_t {
    HaticsType_Default = 0,
    HaticsType_None = 1,
};

_enum TakeDamageFlags_t : uint64_t {
    DFLAG_NONE = 0,
    DFLAG_SUPPRESS_HEALTH_CHANGES = 1,
    DFLAG_SUPPRESS_PHYSICS_FORCE = 2,
    DFLAG_SUPPRESS_EFFECTS = 4,
    DFLAG_PREVENT_DEATH = 8,
    DFLAG_FORCE_DEATH = 16,
    DFLAG_ALWAYS_GIB = 32,
    DFLAG_NEVER_GIB = 64,
    DFLAG_REMOVE_NO_RAGDOLL = 128,
    DFLAG_SUPPRESS_DAMAGE_MODIFICATION = 256,
    DFLAG_ALWAYS_FIRE_DAMAGE_EVENTS = 512,
    DFLAG_RADIUS_DMG = 1024,
    DFLAG_FORCEREDUCEARMOR_DMG = 2048,
    DFLAG_SUPPRESS_INTERRUPT_FLINCH = 4096,
    DFLAG_IGNORE_DESTRUCTIBLE_PARTS = 8192,
    DFLAG_SUPPRESS_BREAKABLES = 16384,
    DFLAG_FORCE_PHYSICS_FORCE = 32768,
    DFLAG_SUPPRESS_SCREENSPACE_DAMAGE_FX = 65536,
    DFLAG_ALLOW_NON_AUTHORITATIVE = 131072,
    DMG_LASTDFLAG = 131072,
    DFLAG_IGNORE_ARMOR = 262144,
    DFLAG_SUPPRESS_UTILREMOVE = 524288,
};

_enum WeaponSound_t : uint32_t {
    WEAPON_SOUND_EMPTY = 0,
    WEAPON_SOUND_SECONDARY_EMPTY = 1,
    WEAPON_SOUND_SINGLE = 2,
    WEAPON_SOUND_SECONDARY_ATTACK = 3,
    WEAPON_SOUND_MELEE_MISS = 4,
    WEAPON_SOUND_MELEE_HIT = 5,
    WEAPON_SOUND_MELEE_HIT_WORLD = 6,
    WEAPON_SOUND_MELEE_HIT_PLAYER = 7,
    WEAPON_SOUND_MELEE_HIT_NPC = 8,
    WEAPON_SOUND_SPECIAL1 = 9,
    WEAPON_SOUND_SPECIAL2 = 10,
    WEAPON_SOUND_SPECIAL3 = 11,
    WEAPON_SOUND_NEARLYEMPTY = 12,
    WEAPON_SOUND_IMPACT = 13,
    WEAPON_SOUND_REFLECT = 14,
    WEAPON_SOUND_SECONDARY_IMPACT = 15,
    WEAPON_SOUND_SECONDARY_REFLECT = 16,
    WEAPON_SOUND_RELOAD = 17,
    WEAPON_SOUND_SINGLE_ACCURATE = 18,
    WEAPON_SOUND_ZOOM_IN = 19,
    WEAPON_SOUND_ZOOM_OUT = 20,
    WEAPON_SOUND_MOUSE_PRESSED = 21,
    WEAPON_SOUND_DROP = 22,
    WEAPON_SOUND_RADIO_USE = 23,
    WEAPON_SOUND_NUM_TYPES = 24,
};

_enum EKillTypes_t : uint8_t {
    KILL_NONE = 0,
    KILL_DEFAULT = 1,
    KILL_HEADSHOT = 2,
    KILL_BLAST = 3,
    KILL_BURN = 4,
    KILL_SLASH = 5,
    KILL_SHOCK = 6,
    KILLTYPE_COUNT = 7,
};

_enum ValueRemapperInputType_t : uint32_t {
    InputType_PlayerShootPosition = 0,
    InputType_PlayerShootPositionAroundAxis = 1,
};

_enum GrenadeType_t : uint32_t {
    GRENADE_TYPE_EXPLOSIVE = 0,
    GRENADE_TYPE_FLASH = 1,
    GRENADE_TYPE_FIRE = 2,
    GRENADE_TYPE_DECOY = 3,
    GRENADE_TYPE_SMOKE = 4,
    GRENADE_TYPE_TOTAL = 5,
};

_enum ShadowType_t : uint32_t {
    SHADOWS_NONE = 0,
    SHADOWS_SIMPLE = 1,
};

_enum ModifyDamageReturn_t : uint32_t {
    CONTINUE_TO_APPLY_DAMAGE = 0,
    ABORT_DO_NOT_APPLY_DAMAGE = 1,
};

/// QuestProgress::Reason
_enum QuestProgress__Reason : uint32_t {
    QUEST_NONINITIALIZED = 0,
    QUEST_OK = 1,
    QUEST_NOT_ENOUGH_PLAYERS = 2,
    QUEST_WARMUP = 3,
    QUEST_NOT_CONNECTED_TO_STEAM = 4,
    QUEST_NONOFFICIAL_SERVER = 5,
    QUEST_NO_ENTITLEMENT = 6,
    QUEST_NO_QUEST = 7,
    QUEST_PLAYER_IS_BOT = 8,
    QUEST_WRONG_MAP = 9,
    QUEST_WRONG_MODE = 10,
    QUEST_NOT_SYNCED_WITH_SERVER = 11,
    QUEST_REASON_MAX = 12,
};

_enum BrushSolidities_e : uint32_t {
    BRUSHSOLID_TOGGLE = 0,
    BRUSHSOLID_NEVER = 1,
    BRUSHSOLID_ALWAYS = 2,
};

_enum DestructiblePartDestructionDeathBehavior_t : uint32_t {
    eDoNotKill = 0,
    eKill = 1,
    eGib = 2,
    eRemove = 3,
};

_enum TRAIN_CODE : uint32_t {
    TRAIN_SAFE = 0,
    TRAIN_BLOCKING = 1,
    TRAIN_FOLLOWING = 2,
};

_enum Flags_t : uint32_t {
    FL_ONGROUND = 1,
    FL_DUCKING = 2,
    FL_WATERJUMP = 4,
    FL_BOT = 16,
    FL_FROZEN = 32,
    FL_ATCONTROLS = 64,
    FL_CLIENT = 128,
    FL_FAKECLIENT = 256,
    FL_FLY = 1024,
    FL_SUPPRESS_SAVE = 2048,
    FL_IN_VEHICLE = 4096,
    FL_GODMODE = 16384,
    FL_NOTARGET = 32768,
    FL_AIMTARGET = 65536,
    FL_GRENADE = 1048576,
    FL_DONTTOUCH = 4194304,
    FL_BASEVELOCITY = 8388608,
    FL_CONVEYOR = 16777216,
    FL_OBJECT = 33554432,
    FL_ONFIRE = 134217728,
    FL_DISSOLVING = 268435456,
    FL_TRANSRAGDOLL = 536870912,
    FL_UNBLOCKABLE_BY_PLAYER = 1073741824,
};

_enum ShakeCommand_t : uint32_t {
    SHAKE_START = 0,
    SHAKE_STOP = 1,
    SHAKE_AMPLITUDE = 2,
    SHAKE_FREQUENCY = 3,
    SHAKE_START_RUMBLEONLY = 4,
    SHAKE_START_NORUMBLE = 5,
};

_enum PointWorldTextJustifyHorizontal_t : uint32_t {
    POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_LEFT = 0,
    POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_CENTER = 1,
    POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_RIGHT = 2,
};

_enum PulseTraceContents_t : uint32_t {
    STATIC_LEVEL = 0,
    SOLID = 1,
};

_enum EntityDistanceMode_t : uint32_t {
    eOriginToOrigin = 0,
    eCenterToCenter = 1,
    eAxisToAxis = 2,
};

_enum EDestructiblePartRadiusDamageApplyType : uint32_t {
    ScaleByExplosionRadius = 0,
    PrioritizeClosestPart = 1,
};

_enum WeaponGameplayAnimState : uint16_t {
    WPN_ANIMSTATE_UNINITIALIZED = 0,
    WPN_ANIMSTATE_DROPPED = 1,
    WPN_ANIMSTATE_HOLSTERED = 10,
    WPN_ANIMSTATE_DEPLOY = 11,
    WPN_ANIMSTATE_IDLE = 50,
    WPN_ANIMSTATE_SHOOT_PRIMARY = 100,
    WPN_ANIMSTATE_SHOOT_SECONDARY = 101,
    WPN_ANIMSTATE_SHOOT_DRYFIRE = 102,
    WPN_ANIMSTATE_CHARGE = 103,
    WPN_ANIMSTATE_GRENADE_PULL_PIN = 200,
    WPN_ANIMSTATE_GRENADE_READY = 201,
    WPN_ANIMSTATE_GRENADE_THROW = 202,
    WPN_ANIMSTATE_C4_PLANT = 300,
    WPN_ANIMSTATE_HEALTHSHOT_INJECT = 400,
    WPN_ANIMSTATE_KNIFE_PRIMARY_HIT = 500,
    WPN_ANIMSTATE_KNIFE_PRIMARY_MISS = 501,
    WPN_ANIMSTATE_KNIFE_SECONDARY_HIT = 502,
    WPN_ANIMSTATE_KNIFE_SECONDARY_MISS = 503,
    WPN_ANIMSTATE_KNIFE_PRIMARY_STAB = 504,
    WPN_ANIMSTATE_KNIFE_SECONDARY_STAB = 505,
    WPN_ANIMSTATE_SILENCER_APPLY = 600,
    WPN_ANIMSTATE_SILENCER_REMOVE = 601,
    WPN_ANIMSTATE_RELOAD = 800,
    WPN_ANIMSTATE_RELOAD_OUTRO = 801,
    WPN_ANIMSTATE_INSPECT = 1000,
    WPN_ANIMSTATE_INSPECT_OUTRO = 1001,
    WPN_ANIMSTATE_INVENTORY_UI_TUMBLE = 1500,
    WPN_ANIMSTATE_INVENTORY_UI_KEYCHAIN_APPLY = 1501,
    WPN_ANIMSTATE_END_VALID = 2000,
    WEAPON_LEGACY_STATE_CLEAR_FIRING = 2001,
};

_enum eSplinePushType : uint32_t {
    k_eSplinePushAlong = 0,
    k_eSplinePushAway = 1,
    k_eSplinePushTowards = 2,
};

_enum EContributionScoreFlag_t : uint8_t {
    k_EContributionScoreFlag_Default = 0,
    k_EContributionScoreFlag_Objective = 1,
    k_EContributionScoreFlag_Bullets = 2,
};

_enum PointTemplateOwnerSpawnGroupType_t : uint32_t {
    INSERT_INTO_POINT_TEMPLATE_SPAWN_GROUP = 0,
    INSERT_INTO_CURRENTLY_ACTIVE_SPAWN_GROUP = 1,
    INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP = 2,
};

_enum ValueRemapperOutputType_t : uint32_t {
    OutputType_AnimationCycle = 0,
    OutputType_RotationX = 1,
    OutputType_RotationY = 2,
    OutputType_RotationZ = 3,
};

/// IChoreoServices::ChoreoState_t
_enum IChoreoServices__ChoreoState_t : uint32_t {
    STATE_PRE_SCRIPT = 0,
    STATE_WAIT_FOR_SCRIPT = 1,
    STATE_WALK_TO_MARK = 2,
    STATE_SYNCHRONIZE_SCRIPT = 3,
    STATE_PLAY_SCRIPT = 4,
    STATE_PLAY_SCRIPT_POST_IDLE = 5,
    STATE_PLAY_SCRIPT_POST_IDLE_DONE = 6,
};

_enum MoveCollide_t : uint8_t {
    MOVECOLLIDE_DEFAULT = 0,
    MOVECOLLIDE_FLY_BOUNCE = 1,
    MOVECOLLIDE_FLY_CUSTOM = 2,
    MOVECOLLIDE_FLY_SLIDE = 3,
    MOVECOLLIDE_COUNT = 4,
    MOVECOLLIDE_MAX_BITS = 3,
};

_enum attributeprovidertypes_t : uint32_t {
    PROVIDER_GENERIC = 0,
    PROVIDER_WEAPON = 1,
};

_enum PointWorldTextJustifyVertical_t : uint32_t {
    POINT_WORLD_TEXT_JUSTIFY_VERTICAL_BOTTOM = 0,
    POINT_WORLD_TEXT_JUSTIFY_VERTICAL_CENTER = 1,
    POINT_WORLD_TEXT_JUSTIFY_VERTICAL_TOP = 2,
};

_enum DamageTypes_t : uint32_t {
    DMG_GENERIC = 0,
    DMG_CRUSH = 1,
    DMG_BULLET = 2,
    DMG_SLASH = 4,
    DMG_BURN = 8,
    DMG_VEHICLE = 16,
    DMG_FALL = 32,
    DMG_BLAST = 64,
    DMG_CLUB = 128,
    DMG_SHOCK = 256,
    DMG_SONIC = 512,
    DMG_ENERGYBEAM = 1024,
    DMG_BUCKSHOT = 2048,
    DMG_BLAST_SURFACE = 4096,
    DMG_DISSOLVE = 8192,
    DMG_DROWN = 16384,
    DMG_POISON = 32768,
    DMG_RADIATION = 65536,
    DMG_DROWNRECOVER = 131072,
    DMG_ACID = 262144,
    DMG_LASTGENERICFLAG = 262144,
    DMG_HEADSHOT = 524288,
};

_enum SolidType_t : uint8_t {
    SOLID_NONE = 0,
    SOLID_BSP = 1,
    SOLID_BBOX = 2,
    SOLID_OBB = 3,
    SOLID_SPHERE = 4,
    SOLID_POINT = 5,
    SOLID_VPHYSICS = 6,
    SOLID_CAPSULE = 7,
    SOLID_LAST = 8,
};

_enum EntityEffects_t : uint16_t {
    DEPRICATED_EF_NOINTERP = 8,
    EF_NOSHADOW = 16,
    EF_NODRAW = 32,
    EF_NORECEIVESHADOW = 64,
    EF_PARENT_ANIMATES = 512,
    EF_NODRAW_BUT_TRANSMIT = 1024,
    EF_MAX_BITS = 10,
};

_enum navproperties_t : uint32_t {
    NAV_IGNORE = 1,
};

_enum PlayerConnectedState : uint32_t {
    PlayerNeverConnected = 4294967295,
    PlayerConnected = 0,
    PlayerConnecting = 1,
    PlayerReconnecting = 2,
    PlayerDisconnecting = 3,
    PlayerDisconnected = 4,
    PlayerReserved = 5,
};

_enum ChatIgnoreType_t : uint32_t {
    CHAT_IGNORE_NONE = 0,
    CHAT_IGNORE_ALL = 1,
    CHAT_IGNORE_TEAM = 2,
};

_enum ChoreoLookAtMode_t : uint32_t {
    eInvalid = 4294967295,
    eChest = 0,
    eHead = 1,
    eEyesOnly = 2,
};

_enum DoorState_t : uint32_t {
    DOOR_STATE_CLOSED = 0,
    DOOR_STATE_OPENING = 1,
    DOOR_STATE_OPEN = 2,
    DOOR_STATE_CLOSING = 3,
    DOOR_STATE_AJAR = 4,
};

_enum LatchDirtyPermission_t : uint32_t {
    LATCH_DIRTY_DISALLOW = 0,
    LATCH_DIRTY_SERVER_CONTROLLED = 1,
    LATCH_DIRTY_CLIENT_SIMULATED = 2,
    LATCH_DIRTY_PREDICTION = 3,
    LATCH_DIRTY_FRAMESIMULATE = 4,
    LATCH_DIRTY_PARTICLE_SIMULATE = 5,
};

_enum RumbleEffect_t : uint32_t {
    RUMBLE_INVALID = 4294967295,
    RUMBLE_STOP_ALL = 0,
    RUMBLE_PISTOL = 1,
    RUMBLE_357 = 2,
    RUMBLE_SMG1 = 3,
    RUMBLE_AR2 = 4,
    RUMBLE_SHOTGUN_SINGLE = 5,
    RUMBLE_SHOTGUN_DOUBLE = 6,
    RUMBLE_AR2_ALT_FIRE = 7,
    RUMBLE_RPG_MISSILE = 8,
    RUMBLE_CROWBAR_SWING = 9,
    RUMBLE_AIRBOAT_GUN = 10,
    RUMBLE_JEEP_ENGINE_LOOP = 11,
    RUMBLE_FLAT_LEFT = 12,
    RUMBLE_FLAT_RIGHT = 13,
    RUMBLE_FLAT_BOTH = 14,
    RUMBLE_DMG_LOW = 15,
    RUMBLE_DMG_MED = 16,
    RUMBLE_DMG_HIGH = 17,
    RUMBLE_FALL_LONG = 18,
    RUMBLE_FALL_SHORT = 19,
    RUMBLE_PHYSCANNON_OPEN = 20,
    RUMBLE_PHYSCANNON_PUNT = 21,
    RUMBLE_PHYSCANNON_LOW = 22,
    RUMBLE_PHYSCANNON_MEDIUM = 23,
    RUMBLE_PHYSCANNON_HIGH = 24,
    NUM_RUMBLE_EFFECTS = 25,
};

_enum vote_create_failed_t : uint32_t {
    VOTE_FAILED_GENERIC = 0,
    VOTE_FAILED_TRANSITIONING_PLAYERS = 1,
    VOTE_FAILED_RATE_EXCEEDED = 2,
    VOTE_FAILED_YES_MUST_EXCEED_NO = 3,
    VOTE_FAILED_QUORUM_FAILURE = 4,
    VOTE_FAILED_ISSUE_DISABLED = 5,
    VOTE_FAILED_MAP_NOT_FOUND = 6,
    VOTE_FAILED_MAP_NAME_REQUIRED = 7,
    VOTE_FAILED_FAILED_RECENTLY = 8,
    VOTE_FAILED_TEAM_CANT_CALL = 9,
    VOTE_FAILED_WAITINGFORPLAYERS = 10,
    VOTE_FAILED_PLAYERNOTFOUND = 11,
    VOTE_FAILED_CANNOT_KICK_ADMIN = 12,
    VOTE_FAILED_SCRAMBLE_IN_PROGRESS = 13,
    VOTE_FAILED_SPECTATOR = 14,
    VOTE_FAILED_FAILED_RECENT_KICK = 15,
    VOTE_FAILED_FAILED_RECENT_CHANGEMAP = 16,
    VOTE_FAILED_FAILED_RECENT_SWAPTEAMS = 17,
    VOTE_FAILED_FAILED_RECENT_SCRAMBLETEAMS = 18,
    VOTE_FAILED_FAILED_RECENT_RESTART = 19,
    VOTE_FAILED_SWAP_IN_PROGRESS = 20,
    VOTE_FAILED_DISABLED = 21,
    VOTE_FAILED_NEXTLEVEL_SET = 22,
    VOTE_FAILED_TOO_EARLY_SURRENDER = 23,
    VOTE_FAILED_MATCH_PAUSED = 24,
    VOTE_FAILED_MATCH_NOT_PAUSED = 25,
    VOTE_FAILED_NOT_IN_WARMUP = 26,
    VOTE_FAILED_NOT_10_PLAYERS = 27,
    VOTE_FAILED_TIMEOUT_ACTIVE = 28,
    VOTE_FAILED_TIMEOUT_INACTIVE = 29,
    VOTE_FAILED_TIMEOUT_EXHAUSTED = 30,
    VOTE_FAILED_CANT_ROUND_END = 31,
    VOTE_FAILED_REMATCH = 32,
    VOTE_FAILED_CONTINUE = 33,
    VOTE_FAILED_MAX = 34,
};

_enum RenderFx_t : uint8_t {
    kRenderFxNone = 0,
    kRenderFxPulseSlow = 1,
    kRenderFxPulseFast = 2,
    kRenderFxPulseSlowWide = 3,
    kRenderFxPulseFastWide = 4,
    kRenderFxFadeSlow = 5,
    kRenderFxFadeFast = 6,
    kRenderFxSolidSlow = 7,
    kRenderFxSolidFast = 8,
    kRenderFxStrobeSlow = 9,
    kRenderFxStrobeFast = 10,
    kRenderFxStrobeFaster = 11,
    kRenderFxFlickerSlow = 12,
    kRenderFxFlickerFast = 13,
    kRenderFxFadeOut = 14,
    kRenderFxFadeIn = 15,
    kRenderFxPulseFastWider = 16,
    kRenderFxMax = 17,
};

_enum HoverPoseFlags_t : uint8_t {
    eNone = 0,
    ePosition = 1,
    eAngles = 2,
};

_enum MoveMountingAmount_t : uint32_t {
    MOVE_MOUNT_NONE = 0,
    MOVE_MOUNT_LOW = 1,
    MOVE_MOUNT_HIGH = 2,
    MOVE_MOUNT_MAXCOUNT = 3,
};

/// CRR_Response::ResponseEnum_t
_enum CRR_Response__ResponseEnum_t : uint32_t {
    MAX_RESPONSE_NAME = 192,
    MAX_RULE_NAME = 128,
};

_enum NavDirType : uint32_t {
    NORTH = 0,
    EAST = 1,
    SOUTH = 2,
    WEST = 3,
    NUM_NAV_DIR_TYPE_DIRECTIONS = 4,
};

_enum ValueRemapperRatchetType_t : uint32_t {
    RatchetType_Absolute = 0,
    RatchetType_EachEngage = 1,
};

_enum WeaponSwitchReason_t : uint32_t {
    eDrawn = 0,
    eEquipped = 1,
    eUserInitiatedSwitchToLast = 2,
    eUserInitiatedUIKeyPress = 3,
    eUserInitiatedSwitchHands = 4,
};

_enum TrackOrientationType_t : uint32_t {
    TrackOrientation_Fixed = 0,
    TrackOrientation_FacePath = 1,
    TrackOrientation_FacePathAngles = 2,
};

_enum ShatterGlassStressType : uint8_t {
    SHATTERGLASS_BLUNT = 0,
    SHATTERGLASS_BALLISTIC = 1,
    SHATTERGLASS_PULSE = 2,
    SHATTERGLASS_EXPLOSIVE = 3,
};

_enum CDebugOverlayCombinedTypes_t : uint32_t {
    ALL = 0,
    ANY = 1,
    COUNT = 2,
};

_enum PointTemplateClientOnlyEntityBehavior_t : uint32_t {
    CREATE_FOR_CURRENTLY_CONNECTED_CLIENTS_ONLY = 0,
    CREATE_FOR_CLIENTS_WHO_CONNECT_LATER = 1,
};

_enum EntitySubclassScope_t : uint32_t {
    SUBCLASS_SCOPE_NONE = 4294967295,
    SUBCLASS_SCOPE_PRECIPITATION = 0,
    SUBCLASS_SCOPE_PLAYER_WEAPONS = 1,
    SUBCLASS_SCOPE_COUNT = 2,
};

_enum BeamType_t : uint32_t {
    BEAM_INVALID = 0,
    BEAM_POINTS = 1,
    BEAM_ENTPOINT = 2,
    BEAM_ENTS = 3,
    BEAM_HOSE = 4,
    BEAM_SPLINE = 5,
    BEAM_LASER = 6,
};

_enum doorCheck_e : uint32_t {
    DOOR_CHECK_FORWARD = 0,
    DOOR_CHECK_BACKWARD = 1,
    DOOR_CHECK_FULL = 2,
};

_enum HierarchyType_t : uint32_t {
    HIERARCHY_NONE = 0,
    HIERARCHY_BONE_MERGE = 1,
    HIERARCHY_ATTACHMENT = 2,
    HIERARCHY_ABSORIGIN = 3,
    HIERARCHY_BONE = 4,
    HIERARCHY_TYPE_COUNT = 5,
};

_enum DecalFlags_t : uint32_t {
    eNone = 0,
    eCannotClear = 1,
    eDecalProjectToBackfaces = 2,
    eAll = 4294967295,
    eAllButCannotClear = 4294967294,
};

_enum AmmoFlags_t : uint32_t {
    AMMO_FORCE_DROP_IF_CARRIED = 1,
    AMMO_RESERVE_STAYS_WITH_WEAPON = 2,
    AMMO_FLAG_MAX = 2,
};

_enum DebugOverlayBits_t : uint64_t {
    OVERLAY_TEXT_BIT = 1,
    OVERLAY_NAME_BIT = 2,
    OVERLAY_BBOX_BIT = 4,
    OVERLAY_PIVOT_BIT = 8,
    OVERLAY_MESSAGE_BIT = 16,
    OVERLAY_ABSBOX_BIT = 32,
    OVERLAY_RBOX_BIT = 64,
    OVERLAY_SHOW_BLOCKSLOS = 128,
    OVERLAY_ATTACHMENTS_BIT = 256,
    OVERLAY_INTERPOLATED_ATTACHMENTS_BIT = 512,
    OVERLAY_INTERPOLATED_PIVOT_BIT = 1024,
    OVERLAY_SKELETON_BIT = 2048,
    OVERLAY_INTERPOLATED_SKELETON_BIT = 4096,
    OVERLAY_TRIGGER_BOUNDS_BIT = 8192,
    OVERLAY_HITBOX_BIT = 16384,
    OVERLAY_INTERPOLATED_HITBOX_BIT = 32768,
    OVERLAY_AUTOAIM_BIT = 65536,
    OVERLAY_NPC_SELECTED_BIT = 131072,
    OVERLAY_JOINT_INFO_BIT = 262144,
    OVERLAY_NPC_ROUTE_BIT = 524288,
    OVERLAY_VISIBILITY_TRACES_BIT = 1048576,
    OVERLAY_NPC_ENEMIES_BIT = 4194304,
    OVERLAY_NPC_CONDITIONS_BIT = 8388608,
    OVERLAY_NPC_COMBAT_BIT = 16777216,
    OVERLAY_NPC_TASK_BIT = 33554432,
    OVERLAY_NPC_BODYLOCATIONS = 67108864,
    OVERLAY_NPC_VIEWCONE_BIT = 134217728,
    OVERLAY_NPC_KILL_BIT = 268435456,
    OVERLAY_BUDDHA_MODE = 1073741824,
    OVERLAY_NPC_STEERING_REGULATIONS = 2147483648,
    OVERLAY_NPC_TASK_TEXT_BIT = 4294967296,
    OVERLAY_PROP_DEBUG = 8589934592,
    OVERLAY_NPC_RELATION_BIT = 17179869184,
    OVERLAY_VIEWOFFSET = 34359738368,
    OVERLAY_VCOLLIDE_WIREFRAME_BIT = 68719476736,
    OVERLAY_NPC_SCRIPTED_COMMANDS_BIT = 137438953472,
    OVERLAY_ACTORNAME_BIT = 274877906944,
    OVERLAY_NPC_CONDITIONS_TEXT_BIT = 549755813888,
    OVERLAY_NPC_ABILITY_RANGE_DEBUG_BIT = 1099511627776,
    OVERLAY_MINIMAL_TEXT = 2199023255552,
};

_enum PointWorldTextReorientMode_t : uint32_t {
    POINT_WORLD_TEXT_REORIENT_NONE = 0,
    POINT_WORLD_TEXT_REORIENT_AROUND_UP = 1,
};

_enum ChickenActivity : uint32_t {
    IDLE = 0,
    SQUAT = 1,
    WALK = 2,
    RUN = 3,
    GLIDE = 4,
    LAND = 5,
    PANIC = 6,
    TRICK = 7,
    TURN_IN_PLACE = 8,
    FEED = 9,
    SLEEP = 10,
};

_enum HitGroup_t : uint32_t {
    HITGROUP_INVALID = 4294967295,
    HITGROUP_GENERIC = 0,
    HITGROUP_HEAD = 1,
    HITGROUP_CHEST = 2,
    HITGROUP_STOMACH = 3,
    HITGROUP_LEFTARM = 4,
    HITGROUP_RIGHTARM = 5,
    HITGROUP_LEFTLEG = 6,
    HITGROUP_RIGHTLEG = 7,
    HITGROUP_NECK = 8,
    HITGROUP_UNUSED = 9,
    HITGROUP_GEAR = 10,
    HITGROUP_SPECIAL = 11,
    HITGROUP_COUNT = 12,
};

_enum InputBitMask_t : uint64_t {
    IN_NONE = 0,
    IN_ALL = 18446744073709551615,
    IN_ATTACK = 1,
    IN_JUMP = 2,
    IN_DUCK = 4,
    IN_FORWARD = 8,
    IN_BACK = 16,
    IN_USE = 32,
    IN_TURNLEFT = 128,
    IN_TURNRIGHT = 256,
    IN_MOVELEFT = 512,
    IN_MOVERIGHT = 1024,
    IN_ATTACK2 = 2048,
    IN_RELOAD = 8192,
    IN_SPEED = 65536,
    IN_JOYAUTOSPRINT = 131072,
    IN_FIRST_MOD_SPECIFIC_BIT = 4294967296,
    IN_USEORRELOAD = 4294967296,
    IN_SCORE = 8589934592,
    IN_ZOOM = 17179869184,
    IN_LOOK_AT_WEAPON = 34359738368,
};

_enum EntityDisolveType_t : uint32_t {
    ENTITY_DISSOLVE_INVALID = 4294967295,
    ENTITY_DISSOLVE_NORMAL = 0,
    ENTITY_DISSOLVE_ELECTRICAL = 1,
    ENTITY_DISSOLVE_ELECTRICAL_LIGHT = 2,
    ENTITY_DISSOLVE_CORE = 3,
};

_enum PreviewEOMCelebration : uint32_t {
    INVALID = 4294967295,
    WALKUP = 0,
    PUNCHING = 1,
    SWAGGER = 2,
    DROPDOWN = 3,
    STRETCH = 4,
    SWAT_FEMALE = 5,
    MASK_F = 6,
    GUERILLA = 7,
    GUERILLA02 = 8,
    GENDARMERIE = 9,
    SCUBA_FEMALE = 10,
    SCUBA_MALE = 11,
    AVA_DEFEAT = 12,
    GENDARMERIE_DEFEAT = 13,
    MAE_DEFEAT = 14,
    RICKSAW_DEFEAT = 15,
    SCUBA_FEMALE_DEFEAT = 16,
    SCUBA_MALE_DEFEAT = 17,
    CRASSWATER_DEFEAT = 18,
    DARRYL_DEFEAT = 19,
    DOCTOR_DEFEAT = 20,
    MUHLIK_DEFEAT = 21,
    VYPA_DEFEAT = 22,
};

_enum CDebugOverlayFilterType_t : uint32_t {
    NONE = 0,
    TEXT = 1,
    ENTITY = 2,
    COUNT = 3,
    TACTICAL_SEARCH = 4,
    AI_SCHEDULE = 5,
    AI_TASK = 6,
    AI_EVENT = 7,
    AI_PATHFINDING = 8,
    END_SIM_HISTORY_TYPES = 9,
    COMBINED = 4294967295,
};

_enum AmmoPosition_t : uint32_t {
    AMMO_POSITION_INVALID = 4294967295,
    AMMO_POSITION_PRIMARY = 0,
    AMMO_POSITION_SECONDARY = 1,
    AMMO_POSITION_COUNT = 2,
};

_enum RelativeLocationType_t : uint8_t {
    WORLD_SPACE_POSITION = 0,
    RELATIVE_TO_ENTITY_IN_LOCAL_SPACE = 1,
    RELATIVE_TO_ENTITY_YAW_ONLY = 2,
    RELATIVE_TO_ENTITY_IN_WORLD_SPACE = 3,
};

_enum WorldTextPanelVerticalAlign_t : uint32_t {
    WORLDTEXT_VERTICAL_ALIGN_TOP = 0,
    WORLDTEXT_VERTICAL_ALIGN_CENTER = 1,
    WORLDTEXT_VERTICAL_ALIGN_BOTTOM = 2,
};

_enum WaterLevel_t : uint8_t {
    WL_NotInWater = 0,
    WL_Feet = 1,
    WL_Knees = 2,
    WL_Waist = 3,
    WL_Chest = 4,
    WL_FullyUnderwater = 5,
    WL_Count = 6,
};

_enum ScriptedConflictResponse_t : uint32_t {
    SS_CONFLICT_ENQUEUE = 0,
    SS_CONFLICT_INTERRUPT = 1,
};

_enum CSPlayerState : uint32_t {
    STATE_ACTIVE = 0,
    STATE_WELCOME = 1,
    STATE_PICKINGTEAM = 2,
    STATE_PICKINGCLASS = 3,
    STATE_DEATH_ANIM = 4,
    STATE_DEATH_WAIT_FOR_KEY = 5,
    STATE_OBSERVER_MODE = 6,
    STATE_GUNGAME_RESPAWN = 7,
    STATE_DORMANT = 8,
    NUM_PLAYER_STATES = 9,
};

_enum gear_slot_t : uint32_t {
    GEAR_SLOT_INVALID = 4294967295,
    GEAR_SLOT_RIFLE = 0,
    GEAR_SLOT_PISTOL = 1,
    GEAR_SLOT_KNIFE = 2,
    GEAR_SLOT_GRENADES = 3,
    GEAR_SLOT_C4 = 4,
    GEAR_SLOT_RESERVED_SLOT6 = 5,
    GEAR_SLOT_RESERVED_SLOT7 = 6,
    GEAR_SLOT_RESERVED_SLOT8 = 7,
    GEAR_SLOT_RESERVED_SLOT9 = 8,
    GEAR_SLOT_RESERVED_SLOT10 = 9,
    GEAR_SLOT_RESERVED_SLOT11 = 10,
    GEAR_SLOT_BOOSTS = 11,
    GEAR_SLOT_UTILITY = 12,
    GEAR_SLOT_COUNT = 13,
    GEAR_SLOT_FIRST = 0,
    GEAR_SLOT_LAST = 12,
};

_enum ChoreoLookAtSpeed_t : uint32_t {
    eInvalid = 4294967295,
    eSlow = 0,
    eMedium = 1,
    eFast = 2,
};

_enum CSWeaponNameID : uint32_t {
    WEAPONID_GLOCK = 0,
    WEAPONID_HKP2000 = 1,
    WEAPONID_CZ75A = 2,
    WEAPONID_ELITE = 3,
    WEAPONID_DEAGLE = 4,
    WEAPONID_FIVESEVEN = 5,
    WEAPONID_P250 = 6,
    WEAPONID_REVOLVER = 7,
    WEAPONID_TEC9 = 8,
    WEAPONID_USP_SILENCER = 9,
    WEAPONID_AK47 = 10,
    WEAPONID_M4A1 = 11,
    WEAPONID_M4A1_SILENCER = 12,
    WEAPONID_FAMAS = 13,
    WEAPONID_GALILAR = 14,
    WEAPONID_AUG = 15,
    WEAPONID_SG556 = 16,
    WEAPONID_BIZON = 17,
    WEAPONID_MAC10 = 18,
    WEAPONID_MP5SD = 19,
    WEAPONID_MP7 = 20,
    WEAPONID_MP9 = 21,
    WEAPONID_P90 = 22,
    WEAPONID_UMP45 = 23,
    WEAPONID_MAG7 = 24,
    WEAPONID_NOVA = 25,
    WEAPONID_SAWEDOFF = 26,
    WEAPONID_XM1014 = 27,
    WEAPONID_AWP = 28,
    WEAPONID_SSG08 = 29,
    WEAPONID_G3SG1 = 30,
    WEAPONID_SCAR20 = 31,
    WEAPONID_M249 = 32,
    WEAPONID_NEGEV = 33,
    WEAPONID_TASER = 34,
    WEAPONID_DECOY = 35,
    WEAPONID_FLASHBANG = 36,
    WEAPONID_HEGRENADE = 37,
    WEAPONID_INCGRENADE = 38,
    WEAPONID_MOLOTOV = 39,
    WEAPONID_SMOKEGRENADE = 40,
    WEAPONID_C4 = 41,
    WEAPONID_HEALTHSHOT = 42,
    WEAPONID_KNIFE = 43,
    WEAPONID_KNIFE_T = 44,
    WEAPONID_KNIFE_CSS = 45,
    WEAPONID_KNIFE_FLIP = 46,
    WEAPONID_KNIFE_GUT = 47,
    WEAPONID_KNIFE_KARAMBIT = 48,
    WEAPONID_BAYONET = 49,
    WEAPONID_KNIFE_M9_BAYONET = 50,
    WEAPONID_KNIFE_TACTICAL = 51,
    WEAPONID_KNIFE_FALCHION = 52,
    WEAPONID_KNIFE_SURVIVAL_BOWIE = 53,
    WEAPONID_KNIFE_BUTTERFLY = 54,
    WEAPONID_KNIFE_PUSH = 55,
    WEAPONID_KNIFE_CORD = 56,
    WEAPONID_KNIFE_CANIS = 57,
    WEAPONID_KNIFE_URSUS = 58,
    WEAPONID_KNIFE_GYPSY_JACKKNIFE = 59,
    WEAPONID_KNIFE_OUTDOOR = 60,
    WEAPONID_KNIFE_STILETTO = 61,
    WEAPONID_KNIFE_WIDOWMAKER = 62,
    WEAPONID_KNIFE_SKELETON = 63,
    WEAPONID_KNIFE_KUKRI = 64,
    WEAPONID_UNKNOWN = 65,
};

_enum ScriptedOnDeath_t : uint32_t {
    SS_ONDEATH_NOT_APPLICABLE = 4294967295,
    SS_ONDEATH_UNDEFINED = 0,
    SS_ONDEATH_RAGDOLL = 1,
    SS_ONDEATH_ANIMATED_DEATH = 2,
};

_enum ShatterDamageCause : uint8_t {
    SHATTERDAMAGE_BULLET = 0,
    SHATTERDAMAGE_MELEE = 1,
    SHATTERDAMAGE_THROWN = 2,
    SHATTERDAMAGE_SCRIPT = 3,
    SHATTERDAMAGE_EXPLOSIVE = 4,
};

_enum CSPlayerBlockingUseAction_t : uint32_t {
    k_CSPlayerBlockingUseAction_None = 0,
    k_CSPlayerBlockingUseAction_DefusingDefault = 1,
    k_CSPlayerBlockingUseAction_DefusingWithKit = 2,
    k_CSPlayerBlockingUseAction_HostageGrabbing = 3,
    k_CSPlayerBlockingUseAction_HostageDropping = 4,
    k_CSPlayerBlockingUseAction_MapLongUseEntity_Pickup = 5,
    k_CSPlayerBlockingUseAction_MapLongUseEntity_Place = 6,
    k_CSPlayerBlockingUseAction_MaxCount = 7,
};

_enum CDebugOverlayFilterTextType_t : uint32_t {
    FILTER_TEXT_NONE = 0,
    MATCH = 1,
    HIERARCHY = 2,
    COUNT = 3,
};

_enum WeaponAttackType_t : uint32_t {
    eInvalid = 4294967295,
    ePrimary = 0,
    eSecondary = 1,
    eCount = 2,
};

_enum BeamClipStyle_t : uint32_t {
    kNOCLIP = 0,
    kGEOCLIP = 1,
    kMODELCLIP = 2,
    kBEAMCLIPSTYLE_NUMBITS = 2,
};

_enum EInButtonState : uint32_t {
    IN_BUTTON_UP = 0,
    IN_BUTTON_DOWN = 1,
    IN_BUTTON_DOWN_UP = 2,
    IN_BUTTON_UP_DOWN = 3,
    IN_BUTTON_UP_DOWN_UP = 4,
    IN_BUTTON_DOWN_UP_DOWN = 5,
    IN_BUTTON_DOWN_UP_DOWN_UP = 6,
    IN_BUTTON_UP_DOWN_UP_DOWN = 7,
    IN_BUTTON_STATE_COUNT = 8,
};

_enum PreviewWeaponState : uint32_t {
    DROPPED = 0,
    HOLSTERED = 1,
    DEPLOYED = 2,
    PLANTED = 3,
    INSPECT = 4,
    ICON = 5,
};

_enum ESceneRequestState_t : uint32_t {
    INACTIVE = 0,
    ACTIVE = 1,
};

_enum BodySectionAuthority_t : uint32_t {
    eNone = 0,
    eLowerBody = 1,
    eUpperBody = 2,
    eFullBody = 3,
};

_enum ExternalAnimGraphInactiveBehavior_t : uint8_t {
    eNone = 0,
    eUnbind = 1,
    eUnbindAndDelete = 2,
};

_enum Hull_t : uint32_t {
    HULL_HUMAN = 0,
    HULL_SMALL_CENTERED = 1,
    HULL_WIDE_HUMAN = 2,
    HULL_TINY = 3,
    HULL_MEDIUM = 4,
    HULL_TINY_CENTERED = 5,
    HULL_LARGE = 6,
    HULL_LARGE_CENTERED = 7,
    HULL_MEDIUM_TALL = 8,
    HULL_SMALL = 9,
    NUM_HULLS = 10,
    HULL_NONE = 11,
};

_enum ValueRemapperMomentumType_t : uint32_t {
    MomentumType_None = 0,
    MomentumType_Friction = 1,
    MomentumType_SpringTowardSnapValue = 2,
    MomentumType_SpringAwayFromSnapValue = 3,
};

_enum MoveLinearAuthoredPos_t : uint32_t {
    MOVELINEAR_AUTHORED_AT_START_POSITION = 0,
    MOVELINEAR_AUTHORED_AT_OPEN_POSITION = 1,
    MOVELINEAR_AUTHORED_AT_CLOSED_POSITION = 2,
};

_enum NavAttributeEnum : uint64_t {
    NAV_MESH_AVOID = 128,
    NAV_MESH_STAIRS = 4096,
    NAV_MESH_NON_ZUP = 32768,
    NAV_MESH_CROUCH_HEIGHT = 65536,
    NAV_MESH_NON_ZUP_TRANSITION = 131072,
    NAV_MESH_CRAWL_HEIGHT = 262144,
    NAV_MESH_CROUCH = 65536,
    NAV_MESH_JUMP = 2,
    NAV_MESH_NO_JUMP = 8,
    NAV_MESH_STOP = 16,
    NAV_MESH_RUN = 32,
    NAV_MESH_WALK = 64,
    NAV_MESH_TRANSIENT = 256,
    NAV_MESH_DONT_HIDE = 512,
    NAV_MESH_STAND = 1024,
    NAV_MESH_NO_HOSTAGES = 2048,
    NAV_MESH_NO_MERGE = 8192,
    NAV_MESH_OBSTACLE_TOP = 16384,
    NAV_ATTR_FIRST_GAME_INDEX = 19,
    NAV_ATTR_LAST_INDEX = 63,
};

_enum EDestructiblePartDamagePassThroughType : uint32_t {
    Normal = 0,
    Absorb = 1,
    InvincibleAbsorb = 2,
    InvinciblePassthrough = 3,
};

_enum loadout_slot_t : uint32_t {
    LOADOUT_SLOT_PROMOTED = 4294967294,
    LOADOUT_SLOT_INVALID = 4294967295,
    LOADOUT_SLOT_MELEE = 0,
    LOADOUT_SLOT_C4 = 1,
    LOADOUT_SLOT_FIRST_AUTO_BUY_WEAPON = 0,
    LOADOUT_SLOT_LAST_AUTO_BUY_WEAPON = 1,
    LOADOUT_SLOT_SECONDARY0 = 2,
    LOADOUT_SLOT_SECONDARY1 = 3,
    LOADOUT_SLOT_SECONDARY2 = 4,
    LOADOUT_SLOT_SECONDARY3 = 5,
    LOADOUT_SLOT_SECONDARY4 = 6,
    LOADOUT_SLOT_SECONDARY5 = 7,
    LOADOUT_SLOT_SMG0 = 8,
    LOADOUT_SLOT_SMG1 = 9,
    LOADOUT_SLOT_SMG2 = 10,
    LOADOUT_SLOT_SMG3 = 11,
    LOADOUT_SLOT_SMG4 = 12,
    LOADOUT_SLOT_SMG5 = 13,
    LOADOUT_SLOT_RIFLE0 = 14,
    LOADOUT_SLOT_RIFLE1 = 15,
    LOADOUT_SLOT_RIFLE2 = 16,
    LOADOUT_SLOT_RIFLE3 = 17,
    LOADOUT_SLOT_RIFLE4 = 18,
    LOADOUT_SLOT_RIFLE5 = 19,
    LOADOUT_SLOT_HEAVY0 = 20,
    LOADOUT_SLOT_HEAVY1 = 21,
    LOADOUT_SLOT_HEAVY2 = 22,
    LOADOUT_SLOT_HEAVY3 = 23,
    LOADOUT_SLOT_HEAVY4 = 24,
    LOADOUT_SLOT_HEAVY5 = 25,
    LOADOUT_SLOT_FIRST_WHEEL_WEAPON = 2,
    LOADOUT_SLOT_LAST_WHEEL_WEAPON = 25,
    LOADOUT_SLOT_FIRST_PRIMARY_WEAPON = 8,
    LOADOUT_SLOT_LAST_PRIMARY_WEAPON = 25,
    LOADOUT_SLOT_FIRST_WHEEL_GRENADE = 26,
    LOADOUT_SLOT_GRENADE0 = 26,
    LOADOUT_SLOT_GRENADE1 = 27,
    LOADOUT_SLOT_GRENADE2 = 28,
    LOADOUT_SLOT_GRENADE3 = 29,
    LOADOUT_SLOT_GRENADE4 = 30,
    LOADOUT_SLOT_GRENADE5 = 31,
    LOADOUT_SLOT_LAST_WHEEL_GRENADE = 31,
    LOADOUT_SLOT_EQUIPMENT0 = 32,
    LOADOUT_SLOT_EQUIPMENT1 = 33,
    LOADOUT_SLOT_EQUIPMENT2 = 34,
    LOADOUT_SLOT_EQUIPMENT3 = 35,
    LOADOUT_SLOT_EQUIPMENT4 = 36,
    LOADOUT_SLOT_EQUIPMENT5 = 37,
    LOADOUT_SLOT_FIRST_WHEEL_EQUIPMENT = 32,
    LOADOUT_SLOT_LAST_WHEEL_EQUIPMENT = 37,
    LOADOUT_SLOT_CLOTHING_CUSTOMPLAYER = 38,
    LOADOUT_SLOT_CLOTHING_CUSTOMHEAD = 39,
    LOADOUT_SLOT_CLOTHING_FACEMASK = 40,
    LOADOUT_SLOT_CLOTHING_HANDS = 41,
    LOADOUT_SLOT_FIRST_COSMETIC = 41,
    LOADOUT_SLOT_LAST_COSMETIC = 41,
    LOADOUT_SLOT_CLOTHING_EYEWEAR = 42,
    LOADOUT_SLOT_CLOTHING_HAT = 43,
    LOADOUT_SLOT_CLOTHING_LOWERBODY = 44,
    LOADOUT_SLOT_CLOTHING_TORSO = 45,
    LOADOUT_SLOT_CLOTHING_APPEARANCE = 46,
    LOADOUT_SLOT_MISC0 = 47,
    LOADOUT_SLOT_MISC1 = 48,
    LOADOUT_SLOT_MISC2 = 49,
    LOADOUT_SLOT_MISC3 = 50,
    LOADOUT_SLOT_MISC4 = 51,
    LOADOUT_SLOT_MISC5 = 52,
    LOADOUT_SLOT_MISC6 = 53,
    LOADOUT_SLOT_MUSICKIT = 54,
    LOADOUT_SLOT_FLAIR0 = 55,
    LOADOUT_SLOT_SPRAY0 = 56,
    LOADOUT_SLOT_FIRST_ALL_CHARACTER = 54,
    LOADOUT_SLOT_LAST_ALL_CHARACTER = 56,
    LOADOUT_SLOT_COUNT = 57,
};

_enum TOGGLE_STATE : uint32_t {
    TS_AT_TOP = 0,
    TS_AT_BOTTOM = 1,
    TS_GOING_UP = 2,
    TS_GOING_DOWN = 3,
    DOOR_OPEN = 0,
    DOOR_CLOSED = 1,
    DOOR_OPENING = 2,
    DOOR_CLOSING = 3,
};

_enum PerformanceMode_t : uint32_t {
    PM_NORMAL = 0,
    PM_NO_GIBS = 1,
};

_enum ForcedCrouchState_t : uint32_t {
    FORCEDCROUCH_NONE = 0,
    FORCEDCROUCH_CROUCHED = 1,
    FORCEDCROUCH_UNCROUCHED = 2,
};

_enum RenderMode_t : uint8_t {
    kRenderNormal = 0,
    kRenderTransAlpha = 1,
    kRenderNone = 2,
    kRenderModeCount = 3,
};

_enum PulseNPCCondition_t : uint32_t {
    COND_SEE_PLAYER = 1,
    COND_LOST_PLAYER = 2,
    COND_HEAR_PLAYER = 3,
    COND_PLAYER_PUSHING = 4,
    COND_NO_PRIMARY_AMMO = 5,
};

_enum EntityPlatformTypes_t : uint8_t {
    ENTITY_NOT_PLATFORM = 0,
    ENTITY_PLATFORM_PLAYER_FOLLOWS_YAW = 1,
    ENTITY_PLATFORM_PLAYER_IGNORES_YAW = 2,
};

_enum ShardSolid_t : uint8_t {
    SHARD_SOLID = 0,
    SHARD_DEBRIS = 1,
};

_enum PropDoorRotatingSpawnPos_t : uint32_t {
    DOOR_SPAWN_CLOSED = 0,
    DOOR_SPAWN_OPEN_FORWARD = 1,
    DOOR_SPAWN_OPEN_BACK = 2,
    DOOR_SPAWN_AJAR = 3,
};

_enum TestInputOutputCombinationsEnum_t : uint32_t {
    ZERO = 0,
    ONE = 1,
    TWO = 2,
};

_enum EntFinderMethod_t : uint32_t {
    ENT_FIND_METHOD_NEAREST = 0,
    ENT_FIND_METHOD_FARTHEST = 1,
    ENT_FIND_METHOD_RANDOM = 2,
};

_enum NavScopeFlags_t : uint8_t {
    eGround = 1,
    eAir = 2,
    eAll = 3,
    eNone = 0,
};

_enum CSWeaponType : uint32_t {
    WEAPONTYPE_KNIFE = 0,
    WEAPONTYPE_PISTOL = 1,
    WEAPONTYPE_SUBMACHINEGUN = 2,
    WEAPONTYPE_RIFLE = 3,
    WEAPONTYPE_SHOTGUN = 4,
    WEAPONTYPE_SNIPER_RIFLE = 5,
    WEAPONTYPE_MACHINEGUN = 6,
    WEAPONTYPE_C4 = 7,
    WEAPONTYPE_TASER = 8,
    WEAPONTYPE_GRENADE = 9,
    WEAPONTYPE_EQUIPMENT = 10,
    WEAPONTYPE_STACKABLEITEM = 11,
    WEAPONTYPE_UNKNOWN = 12,
};

_enum TrainVelocityType_t : uint32_t {
    TrainVelocity_Instantaneous = 0,
    TrainVelocity_LinearBlend = 1,
    TrainVelocity_EaseInEaseOut = 2,
};

_enum Touch_t : uint32_t {
    touch_none = 0,
    touch_player_only = 1,
    touch_npc_only = 2,
    touch_player_or_npc = 3,
    touch_player_or_npc_or_physicsprop = 4,
};

/// IChoreoServices::ScriptState_t
_enum IChoreoServices__ScriptState_t : uint32_t {
    SCRIPT_PLAYING = 0,
    SCRIPT_WAIT = 1,
    SCRIPT_POST_IDLE = 2,
    SCRIPT_CLEANUP = 3,
    SCRIPT_MOVE_TO_MARK = 4,
};

_enum FixAngleSet_t : uint8_t {
    None = 0,
    Absolute = 1,
    Relative = 2,
};

_enum GameAnimEventIndex_t : uint32_t {
    AE_EMPTY = 0,
    AE_CL_PLAYSOUND = 1,
    AE_CL_PLAYSOUND_ATTACHMENT = 2,
    AE_CL_PLAYSOUND_POSITION = 3,
    AE_SV_PLAYSOUND = 4,
    AE_CL_STOPSOUND = 5,
    AE_CL_PLAYSOUND_LOOPING = 6,
    AE_CL_CREATE_PARTICLE_EFFECT = 7,
    AE_CL_STOP_PARTICLE_EFFECT = 8,
    AE_CL_CREATE_PARTICLE_EFFECT_CFG = 9,
    AE_SV_CREATE_PARTICLE_EFFECT_CFG = 10,
    AE_SV_STOP_PARTICLE_EFFECT = 11,
    AE_FOOTSTEP = 12,
    AE_CL_STOP_RAGDOLL_CONTROL = 13,
    AE_CL_ENABLE_BODYGROUP = 14,
    AE_CL_DISABLE_BODYGROUP = 15,
    AE_BODYGROUP_SET_VALUE = 16,
    AE_WEAPON_PERFORM_ATTACK = 17,
    AE_FIRE_INPUT = 18,
    AE_CL_CLOTH_ATTR = 19,
    AE_CL_CLOTH_GROUND_OFFSET = 20,
    AE_CL_CLOTH_STIFFEN = 21,
    AE_CL_CLOTH_EFFECT = 22,
    AE_CL_CREATE_ANIM_SCOPE_PROP = 23,
    AE_SV_IKLOCK = 24,
    AE_PULSE_GRAPH = 25,
    AE_DISABLE_PLATFORM = 26,
    AE_ENABLE_PLATFORM_PLAYER_FOLLOWS_YAW = 27,
    AE_ENABLE_PLATFORM_PLAYER_IGNORES_YAW = 28,
    AE_DESTRUCTIBLE_PART_DESTROY = 29,
    AE_CL_WEAPON_TRANSITION_INTO_HAND = 30,
    AE_SV_ATTACH_SILENCER_COMPLETE = 31,
    AE_SV_DETACH_SILENCER_COMPLETE = 32,
    AE_CL_EJECT_MAG = 33,
    AE_WPN_COMPLETE_RELOAD = 34,
    AE_WPN_HEALTHSHOT_INJECT = 35,
    AE_GRENADE_THROW_COMPLETE = 36,
};

_enum BaseExplosionTypes_t : uint32_t {
    EXPLOSION_TYPE_DEFAULT = 0,
    EXPLOSION_TYPE_GRENADE = 1,
    EXPLOSION_TYPE_MOLOTOV = 2,
    EXPLOSION_TYPE_FIREWORKS = 3,
    EXPLOSION_TYPE_GASCAN = 4,
    EXPLOSION_TYPE_GASCYLINDER = 5,
    EXPLOSION_TYPE_EXPLOSIVEBARREL = 6,
    EXPLOSION_TYPE_ELECTRICAL = 7,
    EXPLOSION_TYPE_EMP = 8,
    EXPLOSION_TYPE_SHRAPNEL = 9,
    EXPLOSION_TYPE_SMOKEGRENADE = 10,
    EXPLOSION_TYPE_FLASHBANG = 11,
    EXPLOSION_TYPE_TRIPMINE = 12,
    EXPLOSION_TYPE_ICE = 13,
    EXPLOSION_TYPE_NONE = 14,
    EXPLOSION_TYPE_CUSTOM = 15,
    EXPLOSION_TYPE_COUNT = 16,
};

_enum EProceduralRagdollWeightIndexPropagationMethod : uint32_t {
    Bone = 0,
    BoneAndChildren = 1,
};

_enum CSWeaponSilencerType : uint32_t {
    WEAPONSILENCER_NONE = 0,
    WEAPONSILENCER_DETACHABLE = 1,
    WEAPONSILENCER_INTEGRATED = 2,
};

_enum filter_t : uint32_t {
    FILTER_AND = 0,
    FILTER_OR = 1,
};

_enum Class_T : uint32_t {
    CLASS_NONE = 0,
    CLASS_PLAYER = 1,
    CLASS_PLAYER_ALLY = 2,
    CLASS_C4_FOR_RADAR = 3,
    CLASS_FOOT_CONTACT_SHADOW = 4,
    CLASS_WEAPON = 5,
    CLASS_WATER_SPLASHER = 6,
    CLASS_HUDMODEL_WEAPON = 7,
    CLASS_HUDMODEL_ARMS = 8,
    CLASS_HUDMODEL_ADDON = 9,
    CLASS_WORLDMODEL_GLOVES = 10,
    CLASS_DOOR = 11,
    CLASS_PLANTED_C4 = 12,
    NUM_CLASSIFY_CLASSES = 13,
};

_enum AnimLoopMode_t : uint32_t {
    ANIM_LOOP_MODE_INVALID = 4294967295,
    ANIM_LOOP_MODE_NOT_LOOPING = 0,
    ANIM_LOOP_MODE_LOOPING = 1,
    ANIM_LOOP_MODE_USE_SEQUENCE_SETTINGS = 2,
    ANIM_LOOP_MODE_COUNT = 3,
};

_enum BreakableContentsType_t : uint32_t {
    BC_DEFAULT = 0,
    BC_EMPTY = 1,
    BC_PROP_GROUP_OVERRIDE = 2,
    BC_PARTICLE_SYSTEM_OVERRIDE = 3,
};

_enum NavScope_t : uint8_t {
    eGround = 0,
    eAir = 1,
    eCount = 2,
    eFirst = 0,
    eInvalid = 255,
};

_enum BloodType : uint32_t {
    None = 4294967295,
    ColorRed = 0,
    ColorYellow = 1,
    ColorGreen = 2,
    ColorRedLVL2 = 3,
    ColorRedLVL3 = 4,
    ColorRedLVL4 = 5,
    ColorRedLVL5 = 6,
    ColorRedLVL6 = 7,
};

_enum Materials : uint32_t {
    matGlass = 0,
    matWood = 1,
    matMetal = 2,
    matFlesh = 3,
    matCinderBlock = 4,
    matCeilingTile = 5,
    matComputer = 6,
    matUnbreakableGlass = 7,
    matRocks = 8,
    matWeb = 9,
    matNone = 10,
    matLastMaterial = 11,
};

_enum OnFrame : uint8_t {
    ONFRAME_UNKNOWN = 0,
    ONFRAME_TRUE = 1,
    ONFRAME_FALSE = 2,
};

_enum CSWeaponMode : uint32_t {
    Primary_Mode = 0,
    Secondary_Mode = 1,
    WeaponMode_MAX = 2,
};

_enum AnimationAlgorithm_t : uint8_t {
    eInvalid = 255,
    eNone = 0,
    eSequence = 1,
    eAnimGraph2 = 2,
    eAnimGraph2Secondary = 3,
    eAnimGraph1 = 4,
    eCount = 5,
};

_enum NPCFollowFormation_t : uint32_t {
    Default = 4294967295,
    CloseCircle = 0,
    WideCircle = 1,
    MediumCircle = 5,
    Sidekick = 6,
};

_enum PointOrientConstraint_t : uint32_t {
    eNone = 0,
    ePreserveUpAxis = 1,
};

_enum LifeState_t : uint32_t {
    LIFE_ALIVE = 0,
    LIFE_DYING = 1,
    LIFE_DEAD = 2,
    LIFE_RESPAWNABLE = 3,
    LIFE_RESPAWNING = 4,
    NUM_LIFESTATES = 5,
};

_enum SurroundingBoundsType_t : uint8_t {
    USE_OBB_COLLISION_BOUNDS = 0,
    USE_BEST_COLLISION_BOUNDS = 1,
    USE_HITBOXES = 2,
    USE_SPECIFIED_BOUNDS = 3,
    USE_GAME_CODE = 4,
    USE_ROTATION_EXPANDED_BOUNDS = 5,
    USE_ROTATION_EXPANDED_ORIENTED_BOUNDS = 6,
    USE_COLLISION_BOUNDS_NEVER_VPHYSICS = 7,
    USE_ROTATION_EXPANDED_SEQUENCE_BOUNDS = 8,
    SURROUNDING_TYPE_BIT_COUNT = 3,
};

_enum ItemFlagTypes_t : uint8_t {
    ITEM_FLAG_NONE = 0,
    ITEM_FLAG_CAN_SELECT_WITHOUT_AMMO = 1,
    ITEM_FLAG_NOAUTORELOAD = 2,
    ITEM_FLAG_NOAUTOSWITCHEMPTY = 4,
    ITEM_FLAG_LIMITINWORLD = 8,
    ITEM_FLAG_EXHAUSTIBLE = 16,
    ITEM_FLAG_DOHITLOCATIONDMG = 32,
    ITEM_FLAG_NOAMMOPICKUPS = 64,
    ITEM_FLAG_NOITEMPICKUP = 128,
};

_enum PointOrientGoalDirectionType_t : uint32_t {
    eAbsOrigin = 0,
    eCenter = 1,
    eHead = 2,
    eForward = 3,
    eEyesForward = 4,
};

_enum BeginDeathLifeStateTransition_t : uint8_t {
    TRANSITION_TO_LIFESTATE_DYING = 0,
    TRANSITION_TO_LIFESTATE_DEAD = 1,
};

_enum CSWeaponCategory : uint32_t {
    WEAPONCATEGORY_OTHER = 0,
    WEAPONCATEGORY_MELEE = 1,
    WEAPONCATEGORY_SECONDARY = 2,
    WEAPONCATEGORY_SMG = 3,
    WEAPONCATEGORY_RIFLE = 4,
    WEAPONCATEGORY_HEAVY = 5,
    WEAPONCATEGORY_COUNT = 6,
};

_enum TrainOrientationType_t : uint32_t {
    TrainOrientation_Fixed = 0,
    TrainOrientation_AtPathTracks = 1,
    TrainOrientation_LinearBlend = 2,
    TrainOrientation_EaseInEaseOut = 3,
};

_enum AnimGraphDebugDrawType_t : uint32_t {
    None = 0,
    WsPosition = 1,
    MsPosition = 2,
    WsDirection = 3,
    MsDirection = 4,
};

_enum SoundEventStartType_t : uint32_t {
    SOUNDEVENT_START_PLAYER = 0,
    SOUNDEVENT_START_WORLD = 1,
    SOUNDEVENT_START_ENTITY = 2,
};

_enum SequenceFinishNotifyState_t : uint8_t {
    eDoNotNotify = 0,
    eNotifyWhenFinished = 1,
    eNotifyTriggered = 2,
};

_enum WorldTextPanelHorizontalAlign_t : uint32_t {
    WORLDTEXT_HORIZONTAL_ALIGN_LEFT = 0,
    WORLDTEXT_HORIZONTAL_ALIGN_CENTER = 1,
    WORLDTEXT_HORIZONTAL_ALIGN_RIGHT = 2,
};

_enum EDestructibleParts_DestroyParameterFlags : uint32_t {
    None = 0,
    GenerateBreakpieces = 1,
    SetBodyGroupAndCollisionState = 2,
    EnableFlinches = 4,
    ForceDamageApply = 8,
    IgnoreKillEntityFlag = 16,
    IgnoreHealthCheck = 32,
    Default = 7,
};

_enum WorldTextPanelOrientation_t : uint32_t {
    WORLDTEXT_ORIENTATION_DEFAULT = 0,
    WORLDTEXT_ORIENTATION_FACEUSER = 1,
    WORLDTEXT_ORIENTATION_FACEUSER_UPRIGHT = 2,
};

_enum ObserverInterpState_t : uint32_t {
    OBSERVER_INTERP_NONE = 0,
    OBSERVER_INTERP_STARTING = 1,
    OBSERVER_INTERP_TRAVELING = 2,
    OBSERVER_INTERP_SETTLING = 3,
};

_enum PreviewCharacterMode : uint32_t {
    INVALID = 4294967295,
    DIORAMA = 0,
    MAIN_MENU = 1,
    BUY_MENU = 2,
    TEAM_SELECT = 3,
    END_OF_MATCH = 4,
    INVENTORY_INSPECT = 5,
    WALKING = 6,
    TEAM_INTRO = 7,
    WINGMAN_INTRO = 8,
    BANNER = 9,
};

_enum Explosions : uint32_t {
    expRandom = 0,
    expDirected = 1,
    expUsePrecise = 2,
};

_enum StanceType_t : uint32_t {
    STANCE_CURRENT = 4294967295,
    STANCE_DEFAULT = 0,
    STANCE_CROUCHING = 1,
    STANCE_PRONE = 2,
    NUM_STANCES = 3,
};

_enum C4LightEffect_t : uint32_t {
    eLightEffectNone = 0,
    eLightEffectDropped = 1,
    eLightEffectThirdPersonHeld = 2,
};

_enum SubclassVDataChangeType_t : uint32_t {
    SUBCLASS_VDATA_CREATED = 0,
    SUBCLASS_VDATA_SUBCLASS_CHANGED = 1,
    SUBCLASS_VDATA_RELOADED = 2,
};

_enum TimelineCompression_t : uint32_t {
    TIMELINE_COMPRESSION_SUM = 0,
    TIMELINE_COMPRESSION_COUNT_PER_INTERVAL = 1,
    TIMELINE_COMPRESSION_AVERAGE = 2,
    TIMELINE_COMPRESSION_AVERAGE_BLEND = 3,
    TIMELINE_COMPRESSION_TOTAL = 4,
};

_enum LessonPanelLayoutFileTypes_t : uint32_t {
    LAYOUT_HAND_DEFAULT = 0,
    LAYOUT_WORLD_DEFAULT = 1,
    LAYOUT_CUSTOM = 2,
};

_enum SceneOnPlayerDeath_t : uint32_t {
    SCENE_ONPLAYERDEATH_DO_NOTHING = 0,
    SCENE_ONPLAYERDEATH_CANCEL = 1,
};

_enum PulseCollisionGroup_t : uint32_t {
    DEFAULT = 0,
};

_enum PropDoorRotatingOpenDirection_e : uint32_t {
    DOOR_ROTATING_OPEN_BOTH_WAYS = 0,
    DOOR_ROTATING_OPEN_FORWARD = 1,
    DOOR_ROTATING_OPEN_BACKWARD = 2,
};

_enum CompMatPropertyMutatorConditionType_t : uint32_t {
    COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0,
    COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 1,
    COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 2,
};

_enum CompositeMaterialMatchFilterType_t : uint32_t {
    MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0,
    MATCH_FILTER_MATERIAL_SHADER = 1,
    MATCH_FILTER_MATERIAL_NAME_SUBSTR = 2,
    MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 3,
    MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 4,
    MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 5,
};

_enum CompositeMaterialVarSystemVar_t : uint32_t {
    COMPMATSYSVAR_COMPOSITETIME = 0,
    COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 1,
};

_enum CompMatPropertyMutatorType_t : uint32_t {
    COMP_MAT_PROPERTY_MUTATOR_INIT = 0,
    COMP_MAT_PROPERTY_MUTATOR_COPY_MATCHING_KEYS = 1,
    COMP_MAT_PROPERTY_MUTATOR_COPY_KEYS_WITH_SUFFIX = 2,
    COMP_MAT_PROPERTY_MUTATOR_COPY_PROPERTY = 3,
    COMP_MAT_PROPERTY_MUTATOR_SET_VALUE = 4,
    COMP_MAT_PROPERTY_MUTATOR_GENERATE_TEXTURE = 5,
    COMP_MAT_PROPERTY_MUTATOR_CONDITIONAL_MUTATORS = 6,
    COMP_MAT_PROPERTY_MUTATOR_POP_INPUT_QUEUE = 7,
    COMP_MAT_PROPERTY_MUTATOR_DRAW_TEXT = 8,
    COMP_MAT_PROPERTY_MUTATOR_RANDOM_ROLL_INPUT_VARIABLES = 9,
};

_enum CompositeMaterialInputContainerSourceType_t : uint32_t {
    CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0,
    CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 1,
    CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 2,
    CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 3,
    CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 4,
    CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 5,
};

_enum InventoryNodeType_t : uint32_t {
    NODE_TYPE_INVALID = 0,
    VIRTUAL_NODE_SCHEMA_PREFAB = 1,
    VIRTUAL_NODE_SCHEMA_ITEMDEF = 2,
    VIRTUAL_NODE_SCHEMA_STICKER = 3,
    VIRTUAL_NODE_SCHEMA_KEYCHAIN = 4,
    CONCRETE_NODE_SCHEMA_PREFAB = 5,
    CONCRETE_NODE_SCHEMA_ITEMDEF = 6,
    CONCRETE_NODE_SCHEMA_STICKER = 7,
    CONCRETE_NODE_SCHEMA_KEYCHAIN = 8,
};

_enum CompositeMaterialInputTextureType_t : uint32_t {
    INPUT_TEXTURE_TYPE_DEFAULT = 0,
    INPUT_TEXTURE_TYPE_NORMALMAP = 1,
    INPUT_TEXTURE_TYPE_COLOR = 2,
    INPUT_TEXTURE_TYPE_MASKS = 3,
    INPUT_TEXTURE_TYPE_ROUGHNESS = 4,
    INPUT_TEXTURE_TYPE_PEARLESCENCE_MASK = 5,
    INPUT_TEXTURE_TYPE_AO = 6,
    INPUT_TEXTURE_TYPE_POSITION = 7,
};

_enum CompositeMaterialInputLooseVariableType_t : uint32_t {
    LOOSE_VARIABLE_TYPE_BOOLEAN = 0,
    LOOSE_VARIABLE_TYPE_INTEGER1 = 1,
    LOOSE_VARIABLE_TYPE_INTEGER2 = 2,
    LOOSE_VARIABLE_TYPE_INTEGER3 = 3,
    LOOSE_VARIABLE_TYPE_INTEGER4 = 4,
    LOOSE_VARIABLE_TYPE_FLOAT1 = 5,
    LOOSE_VARIABLE_TYPE_FLOAT2 = 6,
    LOOSE_VARIABLE_TYPE_FLOAT3 = 7,
    LOOSE_VARIABLE_TYPE_FLOAT4 = 8,
    LOOSE_VARIABLE_TYPE_COLOR4 = 9,
    LOOSE_VARIABLE_TYPE_STRING = 10,
    LOOSE_VARIABLE_TYPE_SYSTEMVAR = 11,
    LOOSE_VARIABLE_TYPE_RESOURCE_MATERIAL = 12,
    LOOSE_VARIABLE_TYPE_RESOURCE_TEXTURE = 13,
    LOOSE_VARIABLE_TYPE_PANORAMA_RENDER = 14,
};

class CEntityComponentHelper;
class CModelConfigList;
class CNewParticleEffect;
class CRegionSVM;
class CVoiceContainerAnalysisBase;


class __declspec(align(4)) CExampleSchemaVData_Monomorphic {
public:
    int32_t m_nExample1; // 0x0
    int32_t m_nExample2; // 0x4
}; // size: 0x8

class __declspec(align(8)) ResourceId_t {
public:
    uint64_t m_Value; // 0x0
}; // size: 0x8

class __declspec(align(8)) CExampleSchemaVData_PolymorphicDerivedB {
public:
    char pad_00[16];
    int32_t m_nDerivedB; // 0x10
    char pad_01[4];
}; // size: 0x18

class __declspec(align(8)) CExampleSchemaVData_PolymorphicBase {
public:
    char pad_00[8];
    int32_t m_nBase; // 0x8
    char pad_01[4];
}; // size: 0x10

class __declspec(align(8)) CExampleSchemaVData_PolymorphicDerivedA {
public:
    char pad_00[16];
    int32_t m_nDerivedA; // 0x10
    char pad_01[4];
}; // size: 0x18

class __declspec(align(1)) CSchemaSystemInternalRegistration {
public:
    // Vector2D m_Vector2D;
    // Vector m_Vector;
    // VectorWS m_VectorWS;
    // VectorAligned m_VectorAligned;
    // Quaternion m_Quaternion;
    // QAngle m_QAngle;
    // RotationVector m_RotationVector;
    // RadianEuler m_RadianEuler;
    // DegreeEuler m_DegreeEuler;
    // QuaternionStorage m_QuaternionStorage;
    // matrix3x4_t m_matrix3x4_t;
    // matrix3x4a_t m_matrix3x4a_t;
    // Color m_Color;
    // Vector4D m_Vector4D;
    // CTransform m_CTransform;
    // KeyValues* m_pKeyValues;
    // CUtlBinaryBlock m_CUtlBinaryBlock;
    // CUtlString m_CUtlString;
    // CUtlSymbol m_CUtlSymbol;
    // CUtlStringToken m_stringToken;
    // CUtlStringTokenWithStorage m_stringTokenWithStorage;
    // CResourceArray< CResourcePointer< CResourceString > > m_ResourceTypes;
    // KeyValues3 m_KV3;
    char pad_00[384];
}; // size: 0x180

class __declspec(align(1)) InfoForResourceTypeCResourceManifestInternal {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCDOTAPatchNotesList {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCEntityLump {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(8)) ManifestTestResource_t {
public:
    // CUtlString m_name;
    // CStrongHandle< InfoForResourceTypeManifestTestResource_t > m_child;
    char pad_00[16];
}; // size: 0x10

class __declspec(align(1)) InfoForResourceTypeCSequenceGroupData {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeIParticleSystemDefinition {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(2)) FuseVariableIndex_t {
public:
    uint16_t m_Value; // 0x0
}; // size: 0x2

class __declspec(align(1)) InfoForResourceTypeCTextureBase {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCDOTANovelsList {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCModel {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCVDataResource {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(8)) FunctionInfo_t {
public:
    // CUtlString m_name;
    // CUtlStringToken m_nameToken;
    char pad_00[20];
    int32_t m_nParamCount; // 0x14
    // FuseFunctionIndex_t m_nIndex;
    char pad_01[2];
    bool m_bIsPure; // 0x1a
    char pad_02[5];
}; // size: 0x20

class __declspec(align(1)) InfoForResourceTypeIPulseGraphDef {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCPanoramaDynamicImages {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeIVectorGraphic {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeIMaterial2 {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCAnimData {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCVMixListResource {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCCompositeMaterialKit {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(8)) CFuseProgram {
public:
    // CUtlVector< uint8 > m_programBuffer;
    // CUtlVector< FuseVariableIndex_t > m_variablesRead;
    // CUtlVector< FuseVariableIndex_t > m_variablesWritten;
    char pad_00[72];
    int32_t m_nMaxTempVarsUsed; // 0x48
    char pad_01[4];
}; // size: 0x50

class __declspec(align(1)) InfoForResourceTypeCSmartProp {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCNmGraphDefinition {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCCSGOEconItem {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCSurfaceGraph {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCWorldNode {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCPanoramaStyle {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCVoiceContainerBase {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCVSoundEventScriptList {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCAnimationGroup {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCTestResourceData {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCNmSkeleton {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCChoreoSceneResource {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCTypeScriptResource {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCPanoramaLayout {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) FourQuaternions {
public:
    // fltx4 x;
    // fltx4 y;
    // fltx4 z;
    // fltx4 w;
    char pad_00[64];
}; // size: 0x40

class __declspec(align(1)) InfoForResourceTypeIParticleSnapshot {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(8)) VariableInfo_t {
public:
    // CUtlString m_name;
    // CUtlStringToken m_nameToken;
    char pad_00[12];
    FuseVariableIndex_t m_nIndex; // 0xc
    uint8_t m_nNumComponents; // 0xe
    FuseVariableType_t m_eVarType; // 0xf
    FuseVariableAccess_t m_eAccess; // 0x10
    char pad_01[7];
}; // size: 0x18

class __declspec(align(1)) InfoForResourceTypeCPostProcessingResource {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) AABB_t {
public:
    // Vector m_vMinBounds;
    // Vector m_vMaxBounds;
    char pad_00[24];
}; // size: 0x18

class __declspec(align(1)) InfoForResourceTypeProceduralTestResource_t {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeWorld_t {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCNmClip {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCPhysAggregateData {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCVoxelVisibility {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCRenderMesh {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(8)) CFuseSymbolTable {
public:
    // CUtlVector< ConstantInfo_t > m_constants;
    // CUtlVector< VariableInfo_t > m_variables;
    // CUtlVector< FunctionInfo_t > m_functions;
    // CUtlHashtable< CUtlStringToken, int32 > m_constantMap;
    // CUtlHashtable< CUtlStringToken, int32 > m_variableMap;
    // CUtlHashtable< CUtlStringToken, int32 > m_functionMap;
    char pad_00[176];
}; // size: 0xb0

class __declspec(align(1)) InfoForResourceTypeCJavaScriptResource {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeIAnimGraphModelBinding {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCGcExportableExternalData {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(2)) FuseFunctionIndex_t {
public:
    uint16_t m_Value; // 0x0
}; // size: 0x2

class __declspec(align(8)) ConstantInfo_t {
public:
    // CUtlString m_name;
    // CUtlStringToken m_nameToken;
    char pad_00[12];
    float m_flValue; // 0xc
}; // size: 0x10

class __declspec(align(1)) InfoForResourceTypeManifestTestResource_t {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCVPhysXSurfacePropertiesList {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(4)) PackedAABB_t {
public:
    uint32_t m_nPackedMin; // 0x0
    uint32_t m_nPackedMax; // 0x4
}; // size: 0x8

class __declspec(align(1)) InfoForResourceTypeCVSoundStackScriptList {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCMorphSetData {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCDotaItemDefinitionResource {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCResponseRulesList {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) InfoForResourceTypeCNmIKRig {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(2)) RenderInputLayoutField_t {
public:
    char m_pSemanticName[32]; // 0x0
    int8_t m_nSemanticIndex; // 0x20
    char pad_00[6];
    int16_t m_nOffset; // 0x28
    int8_t m_nSlot; // 0x2a
    RenderSlotType_t m_nSlotType; // 0x2b
    char m_szShaderSemantic[32]; // 0x2c
}; // size: 0x4c

class __declspec(align(1)) VsInputSignature_t {
public:
    // CUtlVector< VsInputSignatureElement_t > m_elems;
    // CUtlVector< VsInputSignatureElement_t > m_depth_elems;
    char pad_00[48];
}; // size: 0x30

class __declspec(align(1)) RsStencilStateDesc_t {
public:
    // bitfield:1 m_bStencilEnable;
    // bitfield:3 m_frontStencilFailOp;
    // bitfield:3 m_frontStencilDepthFailOp;
    // bitfield:3 m_frontStencilPassOp;
    // bitfield:3 m_frontStencilFunc;
    // bitfield:3 m_backStencilFailOp;
    // bitfield:3 m_backStencilDepthFailOp;
    // bitfield:3 m_backStencilPassOp;
    // bitfield:3 m_backStencilFunc;
    char pad_00[4];
    uint8_t m_nStencilReadMask; // 0x4
    uint8_t m_nStencilWriteMask; // 0x5
}; // size: 0x6

class __declspec(align(4)) RsRasterizerStateDesc_t {
public:
    RsFillMode_t m_nFillMode; // 0x0
    RsCullMode_t m_nCullMode; // 0x1
    bool m_bDepthClipEnable; // 0x2
    bool m_bMultisampleEnable; // 0x3
    int32_t m_nDepthBias; // 0x4
    float m_flDepthBiasClamp; // 0x8
    float m_flSlopeScaledDepthBias; // 0xc
}; // size: 0x10

class __declspec(align(4)) VsInputSignatureElement_t {
public:
    char m_pName[64]; // 0x0
    char m_pSemantic[64]; // 0x40
    char m_pD3DSemanticName[64]; // 0x80
    int32_t m_nD3DSemanticIndex; // 0xc0
}; // size: 0xc4

class __declspec(align(4)) RsBlendStateDesc_t {
public:
    uint32_t m_srcBlendBits; // 0x0
    uint32_t m_destBlendBits; // 0x4
    uint32_t m_srcBlendAlphaBits; // 0x8
    uint32_t m_destBlendAlphaBits; // 0xc
    uint32_t m_renderTargetWriteMaskBits; // 0x10
    // bitfield:30 m_blendOpBits;
    // bitfield:1 m_bAlphaToCoverageEnable;
    // bitfield:1 m_bIndependentBlendEnable;
    char pad_00[4];
    uint32_t m_blendOpAlphaBits; // 0x18
    uint8_t m_blendEnableBits; // 0x1c
    uint8_t m_srgbWriteEnableBits; // 0x1d
    char pad_01[2];
}; // size: 0x20

class __declspec(align(4)) SheetSequenceIntegerId_t {
public:
    uint32_t m_Value; // 0x0
}; // size: 0x4

class __declspec(align(1)) RsDepthStencilStateDesc_t {
public:
    // bitfield:1 m_bDepthTestEnable;
    // bitfield:1 m_bDepthWriteEnable;
    char pad_00[1];
    RsComparison_t m_depthFunc; // 0x1
    RsStencilStateDesc_t m_stencilState; // 0x2
}; // size: 0x8

class __declspec(align(1)) EventServerPollNetworking_t {
public:
    char pad_00[48];
}; // size: 0x30

class __declspec(align(1)) EventServerEndSimulate_t {
public:
    bool m_bLastTick; // 0x0
}; // size: 0x1

class __declspec(align(4)) EventClientProcessInput_t {
public:
    // EngineLoopState_t m_LoopState;
    char pad_00[40];
    float m_flRealTime; // 0x28
    float m_flTickInterval; // 0x2c
    // float64 m_flTickStartTime;
    char pad_01[8];
}; // size: 0x38

class __declspec(align(1)) EventServerBeginAsyncPostTickWork_t {
public:
    bool m_bIsOncePerFrameAsyncWorkPhase; // 0x0
}; // size: 0x1

class __declspec(align(4)) EventClientPollNetworking_t {
public:
    int32_t m_nTickCount; // 0x0
}; // size: 0x4

class __declspec(align(4)) EngineLoopState_t {
public:
    char pad_00[24];
    int32_t m_nPlatWindowWidth; // 0x18
    int32_t m_nPlatWindowHeight; // 0x1c
    int32_t m_nRenderWidth; // 0x20
    int32_t m_nRenderHeight; // 0x24
}; // size: 0x28

class __declspec(align(8)) EntComponentInfo_t {
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

class __declspec(align(1)) CEmptyEntityInstance {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) EventServerProcessNetworking_t {
public:
    char pad_00[48];
}; // size: 0x30

class __declspec(align(1)) EventClientAdvanceNonRenderedFrame_t {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(4)) EventSimulate_t {
public:
    EngineLoopState_t m_LoopState; // 0x0
    bool m_bFirstTick; // 0x28
    bool m_bLastTick; // 0x29
    char pad_00[6];
}; // size: 0x30

class __declspec(align(1)) EntOutput_t {
public:
    char pad_00[16];
}; // size: 0x10

class __declspec(align(4)) EventSetTime_t {
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

class __declspec(align(1)) EventServerAdvanceTick_t {
public:
    char pad_00[64];
}; // size: 0x40

class __declspec(align(4)) EventClientFrameSimulate_t {
public:
    EngineLoopState_t m_LoopState; // 0x0
    float m_flRealTime; // 0x28
    float m_flFrameTime; // 0x2c
    bool m_bScheduleSendTickPacket; // 0x30
    char pad_00[7];
}; // size: 0x38

class __declspec(align(4)) EventClientPreOutput_t {
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

class __declspec(align(1)) EventModInitialized_t {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) CVariantDefaultAllocator {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) EventClientPostAdvanceTick_t {
public:
    char pad_00[64];
}; // size: 0x40

class __declspec(align(1)) EventSplitScreenStateChanged_t {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(4)) EventAdvanceTick_t {
public:
    char pad_00[48];
    int32_t m_nCurrentTick; // 0x30
    int32_t m_nCurrentTickThisFrame; // 0x34
    int32_t m_nTotalTicksThisFrame; // 0x38
    int32_t m_nTotalTicks; // 0x3c
}; // size: 0x40

class __declspec(align(1)) EventClientPreOutputParallelWithServer_t {
public:
    char pad_00[72];
}; // size: 0x48

class __declspec(align(1)) CEntityAttributeTable {
public:
    // CUtlOrderedMap< CUtlStringToken, Attribute_t > m_Attributes;
    // CUtlOrderedMap< CUtlStringToken, CUtlString > m_Names;
    char pad_00[80];
}; // size: 0x50

class __declspec(align(4)) EventClientProcessNetworking_t {
public:
    int32_t m_nTickCount; // 0x0
}; // size: 0x4

class __declspec(align(4)) ChangeAccessorFieldPathIndex_t {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

class __declspec(align(1)) EventClientPauseSimulate_t {
public:
    char pad_00[48];
}; // size: 0x30

class __declspec(align(1)) EventClientPreSimulate_t {
public:
    char pad_00[48];
}; // size: 0x30

class __declspec(align(4)) EventPostDataUpdate_t {
public:
    int32_t m_nCount; // 0x0
    char pad_00[12];
}; // size: 0x10

class __declspec(align(1)) EventProfileStorageAvailable_t {
public:
    // CSplitScreenSlot m_nSplitScreenSlot;
    char pad_00[4];
}; // size: 0x4

class __declspec(align(1)) EventServerPostAdvanceTick_t {
public:
    char pad_00[64];
    bool m_bLastTickBeforeClientUpdate; // 0x40
    char pad_01[7];
}; // size: 0x48

class __declspec(align(4)) EventAppShutdown_t {
public:
    int32_t m_nDummy0; // 0x0
}; // size: 0x4

class __declspec(align(4)) EventFrameBoundary_t {
public:
    float m_flFrameTime; // 0x0
}; // size: 0x4

class __declspec(align(4)) EventClientProcessGameInput_t {
public:
    EngineLoopState_t m_LoopState; // 0x0
    float m_flRealTime; // 0x28
    float m_flFrameTime; // 0x2c
}; // size: 0x30

class __declspec(align(4)) EventPreDataUpdate_t {
public:
    int32_t m_nCount; // 0x0
    char pad_00[12];
}; // size: 0x10

class __declspec(align(4)) EventClientPollInput_t {
public:
    EngineLoopState_t m_LoopState; // 0x0
    float m_flRealTime; // 0x28
    char pad_00[4];
}; // size: 0x30

class __declspec(align(4)) GameTick_t {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

class __declspec(align(4)) EventClientPostOutput_t {
public:
    EngineLoopState_t m_LoopState; // 0x0
    // float64 m_flRenderTime;
    char pad_00[8];
    float m_flRenderFrameTime; // 0x30
    float m_flRenderFrameTimeUnbounded; // 0x34
    bool m_bRenderOnly; // 0x38
    char pad_01[7];
}; // size: 0x40

class __declspec(align(1)) EventClientSimulate_t {
public:
    char pad_00[48];
}; // size: 0x30

class __declspec(align(4)) CNetworkVarChainer {
public:
    char pad_00[32];
    ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x20
    char pad_01[4];
}; // size: 0x28

class __declspec(align(1)) EntInput_t {
public:
    char pad_00[48];
}; // size: 0x30

class __declspec(align(1)) EventClientAdvanceTick_t {
public:
    char pad_00[64];
}; // size: 0x40

class __declspec(align(1)) EventServerEndAsyncPostTickWork_t {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) EventServerBeginSimulate_t {
public:
    char pad_00[48];
}; // size: 0x30

class __declspec(align(4)) GameTime_t {
public:
    float m_Value; // 0x0
}; // size: 0x4

class __declspec(align(8)) CEntityComponentHelper {
public:
    char pad_00[8];
    uint32_t m_flags; // 0x8
    EntComponentInfo_t* m_pInfo; // 0x10
    int32_t m_nPriority; // 0x18
    CEntityComponentHelper* m_pNext; // 0x20
}; // size: 0x28

class __declspec(align(1)) EventServerPostSimulate_t {
public:
    char pad_00[48];
    bool m_bLastTickBeforeClientUpdate; // 0x30
    char pad_01[7];
}; // size: 0x38

class __declspec(align(4)) EventClientOutput_t {
public:
    EngineLoopState_t m_LoopState; // 0x0
    float m_flRenderTime; // 0x28
    float m_flRealTime; // 0x2c
    float m_flRenderFrameTimeUnbounded; // 0x30
    bool m_bRenderOnly; // 0x34
    char pad_00[3];
}; // size: 0x38

class __declspec(align(1)) EventClientSceneSystemThreadStateChange_t {
public:
    bool m_bThreadsActive; // 0x0
}; // size: 0x1

class __declspec(align(1)) CEntityIOOutput {
public:
    char pad_00[24];
}; // size: 0x18

class __declspec(align(4)) EventPostAdvanceTick_t {
public:
    char pad_00[48];
    int32_t m_nCurrentTick; // 0x30
    int32_t m_nCurrentTickThisFrame; // 0x34
    int32_t m_nTotalTicksThisFrame; // 0x38
    int32_t m_nTotalTicks; // 0x3c
}; // size: 0x40

class __declspec(align(4)) EventSimpleLoopFrameUpdate_t {
public:
    EngineLoopState_t m_LoopState; // 0x0
    float m_flRealTime; // 0x28
    float m_flFrameTime; // 0x2c
}; // size: 0x30

class __declspec(align(1)) EventClientPostSimulate_t {
public:
    char pad_00[48];
}; // size: 0x30

class __declspec(align(8)) MaterialParamTexture_t {
public:
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pValue;
    char pad_00[16];
}; // size: 0x10

class __declspec(align(8)) MaterialParamFloat_t {
public:
    char pad_00[8];
    float m_flValue; // 0x8
    char pad_01[4];
}; // size: 0x10

class __declspec(align(4)) PostProcessingBloomParameters_t {
public:
    BloomBlendMode_t m_blendMode; // 0x0
    float m_flBloomStrength; // 0x4
    float m_flScreenBloomStrength; // 0x8
    float m_flBlurBloomStrength; // 0xc
    float m_flBloomThreshold; // 0x10
    float m_flBloomThresholdWidth; // 0x14
    float m_flSkyboxBloomStrength; // 0x18
    float m_flBloomStartValue; // 0x1c
    float m_flComputeBloomStrength; // 0x20
    float m_flComputeBloomThreshold; // 0x24
    float m_flComputeBloomRadius; // 0x28
    float m_flComputeBloomEffectsScale; // 0x2c
    float m_flComputeBloomLensDirtStrength; // 0x30
    float m_flComputeBloomLensDirtBlackLevel; // 0x34
    float m_flBlurWeight[5]; // 0x38
    // Vector[5] m_vBlurTint;
    char pad_00[60];
}; // size: 0x88

class __declspec(align(8)) MaterialResourceData_t {
public:
    // CUtlString m_materialName;
    // CUtlString m_shaderName;
    // CUtlVector< MaterialParamInt_t > m_intParams;
    // CUtlVector< MaterialParamFloat_t > m_floatParams;
    // CUtlVector< MaterialParamVector_t > m_vectorParams;
    // CUtlVector< MaterialParamTexture_t > m_textureParams;
    // CUtlVector< MaterialParamBuffer_t > m_dynamicParams;
    // CUtlVector< MaterialParamBuffer_t > m_dynamicTextureParams;
    // CUtlVector< MaterialParamInt_t > m_intAttributes;
    // CUtlVector< MaterialParamFloat_t > m_floatAttributes;
    // CUtlVector< MaterialParamVector_t > m_vectorAttributes;
    // CUtlVector< MaterialParamTexture_t > m_textureAttributes;
    // CUtlVector< MaterialParamString_t > m_stringAttributes;
    // CUtlVector< CUtlString > m_renderAttributesUsed;
    char pad_00[304];
}; // size: 0x130

class __declspec(align(8)) MaterialParamBuffer_t {
public:
    // CUtlBinaryBlock m_value;
    char pad_00[24];
}; // size: 0x18

class __declspec(align(4)) PostProcessingFogScatteringParameters_t {
public:
    float m_fRadius; // 0x0
    float m_fScale; // 0x4
    float m_fCubemapScale; // 0x8
    float m_fVolumetricScale; // 0xc
    float m_fGradientScale; // 0x10
}; // size: 0x14

class __declspec(align(4)) PostProcessingTonemapParameters_t {
public:
    float m_flExposureBias; // 0x0
    float m_flShoulderStrength; // 0x4
    float m_flLinearStrength; // 0x8
    float m_flLinearAngle; // 0xc
    float m_flToeStrength; // 0x10
    float m_flToeNum; // 0x14
    float m_flToeDenom; // 0x18
    float m_flWhitePoint; // 0x1c
    float m_flLuminanceSource; // 0x20
    float m_flExposureBiasShadows; // 0x24
    float m_flExposureBiasHighlights; // 0x28
    float m_flMinShadowLum; // 0x2c
    float m_flMaxShadowLum; // 0x30
    float m_flMinHighlightLum; // 0x34
    float m_flMaxHighlightLum; // 0x38
}; // size: 0x3c

class __declspec(align(4)) PostProcessingLocalContrastParameters_t {
public:
    float m_flLocalContrastStrength; // 0x0
    float m_flLocalContrastEdgeStrength; // 0x4
    float m_flLocalContrastVignetteStart; // 0x8
    float m_flLocalContrastVignetteEnd; // 0xc
    float m_flLocalContrastVignetteBlur; // 0x10
}; // size: 0x14

class __declspec(align(4)) PostProcessingVignetteParameters_t {
public:
    float m_flVignetteStrength; // 0x0
    // Vector2D m_vCenter;
    char pad_00[8];
    float m_flRadius; // 0xc
    float m_flRoundness; // 0x10
    float m_flFeather; // 0x14
    // Vector m_vColorTint;
    char pad_01[12];
}; // size: 0x24

class __declspec(align(8)) MaterialParamInt_t {
public:
    char pad_00[8];
    int32_t m_nValue; // 0x8
    char pad_01[4];
}; // size: 0x10

class __declspec(align(8)) PostProcessingResource_t {
public:
    bool m_bHasTonemapParams; // 0x0
    PostProcessingTonemapParameters_t m_toneMapParams; // 0x4
    bool m_bHasBloomParams; // 0x40
    PostProcessingBloomParameters_t m_bloomParams; // 0x44
    bool m_bHasVignetteParams; // 0xcc
    PostProcessingVignetteParameters_t m_vignetteParams; // 0xd0
    bool m_bHasLocalContrastParams; // 0xf4
    PostProcessingLocalContrastParameters_t m_localConstrastParams; // 0xf8
    int32_t m_nColorCorrectionVolumeDim; // 0x10c
    // CUtlBinaryBlock m_colorCorrectionVolumeData;
    char pad_00[16];
    bool m_bHasColorCorrection; // 0x120
    bool m_bHasFogScatteringParams; // 0x121
    PostProcessingFogScatteringParameters_t m_fogScatteringParams; // 0x124
}; // size: 0x138

class __declspec(align(8)) MaterialParamString_t {
public:
    // CUtlString m_value;
    char pad_00[16];
}; // size: 0x10

class __declspec(align(8)) MaterialParamVector_t {
public:
    // Vector4D m_value;
    char pad_00[24];
}; // size: 0x18

class __declspec(align(8)) MaterialParam_t {
public:
    // CUtlString m_name;
    char pad_00[8];
}; // size: 0x8

class __declspec(align(1)) CParticleProperty {
public:
    char pad_00[40];
}; // size: 0x28

class __declspec(align(8)) CAnimTagManagerUpdater {
public:
    // CUtlVector< CSmartPtr< CAnimTagBase > > m_tags;
    char pad_00[120];
}; // size: 0x78

class __declspec(align(8)) CModelConfigElement_AttachedModel {
public:
    // CUtlString m_InstanceName;
    // CUtlString m_EntityClass;
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    // Vector m_vOffset;
    // QAngle m_aAngOffset;
    // CUtlString m_AttachmentName;
    // CUtlString m_LocalAttachmentOffsetName;
    char pad_00[136];
    ModelConfigAttachmentType_t m_AttachmentType; // 0x88
    bool m_bBoneMergeFlex; // 0x8c
    bool m_bUserSpecifiedColor; // 0x8d
    bool m_bUserSpecifiedMaterialGroup; // 0x8e
    // CUtlString m_BodygroupOnOtherModels;
    // CUtlString m_MaterialGroupOnOtherModels;
    char pad_01[89];
}; // size: 0xe8

class __declspec(align(8)) CMoodVData {
public:
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName;
    char pad_00[224];
    MoodType_t m_nMoodType; // 0xe0
    // CUtlVector< MoodAnimationLayer_t > m_animationLayers;
    char pad_01[28];
}; // size: 0x100

class __declspec(align(8)) CWayPointHelperUpdateNode {
public:
    char pad_00[116];
    float m_flStartCycle; // 0x74
    float m_flEndCycle; // 0x78
    bool m_bOnlyGoals; // 0x7c
    bool m_bPreventOvershoot; // 0x7d
    bool m_bPreventUndershoot; // 0x7e
    char pad_01[1];
}; // size: 0x80

class __declspec(align(8)) CNmBodyGroupEvent {
public:
    // CUtlString m_groupName;
    char pad_00[40];
    int32_t m_nGroupValue; // 0x28
    char pad_01[4];
}; // size: 0x30

/// CNmControlParameterIDNode::CDefinition
class __declspec(align(8)) CNmControlParameterIDNode__CDefinition {
public:
    char pad_00[16];
}; // size: 0x10

class __declspec(align(16)) CNmTarget {
public:
    // CTransform m_transform;
    // CGlobalSymbol m_boneID;
    char pad_00[40];
    bool m_bIsBoneTarget; // 0x28
    bool m_bIsUsingBoneSpaceOffsets; // 0x29
    bool m_bHasOffsets; // 0x2a
    bool m_bIsSet; // 0x2b
    char pad_01[4];
}; // size: 0x30

class __declspec(align(8)) CParticleCollectionRendererVecInput {
public:
    char pad_00[1720];
}; // size: 0x6b8

/// CNmSyncTrack::Event_t
class __declspec(align(8)) CNmSyncTrack__Event_t {
public:
    // CGlobalSymbol m_ID;
    // NmPercent_t m_startTime;
    // NmPercent_t m_duration;
    char pad_00[16];
}; // size: 0x10

/// CNmVectorNegateNode::CDefinition
class __declspec(align(8)) CNmVectorNegateNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    char pad_01[6];
}; // size: 0x18

class __declspec(align(8)) CPulse_InstructionDebug {
public:
    // PulseDocNodeID_t m_nFlowNodeID;
    // PulseDocNodeID_t m_nValueNodeID;
    // CGlobalSymbol m_SequencePointName;
    char pad_00[16];
}; // size: 0x10

class __declspec(align(8)) CMotionGraphGroup {
public:
    // CMotionSearchDB m_searchDB;
    // CUtlVector< CSmartPtr< CMotionGraph > > m_motionGraphs;
    // CUtlVector< CMotionGraphConfig > m_motionGraphConfigs;
    // CUtlVector< int32 > m_sampleToConfig;
    // AnimScriptHandle m_hIsActiveScript;
    char pad_00[264];
}; // size: 0x108

class __declspec(align(16)) FootFixedData_t {
public:
    // VectorAligned m_vToeOffset;
    // VectorAligned m_vHeelOffset;
    char pad_00[32];
    int32_t m_nTargetBoneIndex; // 0x20
    int32_t m_nAnkleBoneIndex; // 0x24
    int32_t m_nIKAnchorBoneIndex; // 0x28
    int32_t m_ikChainIndex; // 0x2c
    float m_flMaxIKLength; // 0x30
    int32_t m_nFootIndex; // 0x34
    int32_t m_nTagIndex; // 0x38
    float m_flMaxRotationLeft; // 0x3c
    float m_flMaxRotationRight; // 0x40
    char pad_01[12];
}; // size: 0x50

class __declspec(align(8)) CAnimMorphDifference {
public:
    // CBufferString m_name;
    char pad_00[16];
}; // size: 0x10

class __declspec(align(1)) AttachmentHandle_t {
public:
    uint8_t m_Value; // 0x0
}; // size: 0x1

class __declspec(align(8)) CAnimKeyData {
public:
    // CBufferString m_name;
    // CUtlVector< CAnimBone > m_boneArray;
    // CUtlVector< CAnimUser > m_userArray;
    // CUtlVector< CBufferString > m_morphArray;
    char pad_00[88];
    int32_t m_nChannelElements; // 0x58
    // CUtlVector< CAnimDataChannelDesc > m_dataChannelArray;
    char pad_01[28];
}; // size: 0x78

/// CNmParameterizedBlendNode::BlendRange_t
class __declspec(align(4)) CNmParameterizedBlendNode__BlendRange_t {
public:
    int16_t m_nInputIdx0; // 0x0
    int16_t m_nInputIdx1; // 0x2
    // Range_t m_parameterValueRange;
    char pad_00[8];
}; // size: 0xc

class __declspec(align(4)) CBinaryUpdateNode {
public:
    // CAnimUpdateNodeRef m_pChild1;
    // CAnimUpdateNodeRef m_pChild2;
    char pad_00[128];
    BinaryNodeTiming m_timingBehavior; // 0x80
    float m_flTimingBlend; // 0x84
    bool m_bResetChild1; // 0x88
    bool m_bResetChild2; // 0x89
    char pad_01[6];
}; // size: 0x90

class __declspec(align(4)) IKSolverSettings_t {
public:
    IKSolverType m_SolverType; // 0x0
    int32_t m_nNumIterations; // 0x4
    EIKEndEffectorRotationFixUpMode m_EndEffectorRotationFixUpMode; // 0x8
}; // size: 0xc

class __declspec(align(8)) CAnimData {
public:
    // CBufferString m_name;
    // CUtlVector< CAnimDesc > m_animArray;
    // CUtlVector< CAnimDecoder > m_decoderArray;
    char pad_00[80];
    int32_t m_nMaxUniqueFrameIndex; // 0x50
    // CUtlVector< CAnimFrameSegment > m_segmentArray;
    char pad_01[28];
}; // size: 0x70

class __declspec(align(8)) CCPPScriptComponentUpdater {
public:
    // CUtlVector< CGlobalSymbol > m_scriptsToRun;
    char pad_00[96];
}; // size: 0x60

class __declspec(align(2)) PulseRuntimeStateOffset_t {
public:
    uint16_t m_Value; // 0x0
}; // size: 0x2

class __declspec(align(8)) CFollowTargetUpdateNode {
public:
    // FollowTargetOpFixedSettings_t m_opFixedData;
    // CAnimParamHandle m_hParameterPosition;
    // CAnimParamHandle m_hParameterOrientation;
    char pad_00[144];
}; // size: 0x90

/// CNmVirtualParameterBoolNode::CDefinition
class __declspec(align(8)) CNmVirtualParameterBoolNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx; // 0x10
    char pad_01[6];
}; // size: 0x18

class __declspec(align(8)) CTargetWarpUpdateNode {
public:
    char pad_00[116];
    TargetWarpAngleMode_t m_eAngleMode; // 0x74
    // CAnimParamHandle m_hTargetPositionParameter;
    // CAnimParamHandle m_hTargetUpVectorParameter;
    // CAnimParamHandle m_hTargetFacePositionParameter;
    // CAnimParamHandle m_hMoveHeadingParameter;
    // CAnimParamHandle m_hDesiredMoveHeadingParameter;
    char pad_01[12];
    TargetWarpCorrectionMethod m_eCorrectionMethod; // 0x84
    TargetWarpTimingMethod m_eTargetWarpTimingMethod; // 0x88
    bool m_bTargetFacePositionIsWorldSpace; // 0x8c
    bool m_bTargetPositionIsWorldSpace; // 0x8d
    bool m_bOnlyWarpWhenTagIsFound; // 0x8e
    bool m_bWarpOrientationDuringTranslation; // 0x8f
    bool m_bWarpAroundCenter; // 0x90
    float m_flMaxAngle; // 0x94
}; // size: 0x98

class __declspec(align(4)) CAnimSequenceParams {
public:
    float m_flFadeInTime; // 0x0
    float m_flFadeOutTime; // 0x4
}; // size: 0x8

class __declspec(align(16)) CPulseRuntimeMethodArg {
public:
    // CKV3MemberNameWithStorage m_Name;
    // CUtlString m_Description;
    // CPulseValueFullType m_Type;
    char pad_00[128];
}; // size: 0x80

class __declspec(align(8)) PhysSoftbodyDesc_t {
public:
    // CUtlVector< uint32 > m_ParticleBoneHash;
    // CUtlVector< RnSoftbodyParticle_t > m_Particles;
    // CUtlVector< RnSoftbodySpring_t > m_Springs;
    // CUtlVector< RnSoftbodyCapsule_t > m_Capsules;
    // CUtlVector< CTransform > m_InitPose;
    // CUtlVector< CUtlString > m_ParticleBoneName;
    char pad_00[144];
}; // size: 0x90

class __declspec(align(8)) ModelEmbeddedMesh_t {
public:
    // CUtlString m_Name;
    char pad_00[16];
    int32_t m_nMeshIndex; // 0x10
    int32_t m_nDataBlock; // 0x14
    int32_t m_nMorphBlock; // 0x18
    // CUtlVector< ModelMeshBufferData_t > m_vertexBuffers;
    // CUtlVector< ModelMeshBufferData_t > m_indexBuffers;
    // CUtlVector< ModelMeshBufferData_t > m_toolsBuffers;
    char pad_01[76];
    int32_t m_nVBIBBlock; // 0x68
    int32_t m_nToolsVBBlock; // 0x6c
}; // size: 0x70

class __declspec(align(4)) CSeqAutoLayer {
public:
    int16_t m_nLocalReference; // 0x0
    int16_t m_nLocalPose; // 0x2
    // CSeqAutoLayerFlag m_flags;
    char pad_00[8];
    float m_start; // 0xc
    float m_peak; // 0x10
    float m_tail; // 0x14
    float m_end; // 0x18
}; // size: 0x1c

class __declspec(align(4)) CPhysSurfacePropertiesAudio {
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

class __declspec(align(8)) CNmFootEvent {
public:
    char pad_00[32];
    NmFootPhase_t m_phase; // 0x20
    char pad_01[7];
}; // size: 0x28

/// CNmFootEventConditionNode::CDefinition
class __declspec(align(8)) CNmFootEventConditionNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx; // 0x10
    NmFootPhaseCondition_t m_phaseCondition; // 0x12
    // CNmBitFlags m_eventConditionRules;
    char pad_01[5];
}; // size: 0x18

class __declspec(align(8)) CMaterialAttributeAnimTag {
public:
    // CUtlString m_AttributeName;
    char pad_00[96];
    MatterialAttributeTagType_t m_AttributeType; // 0x60
    float m_flValue; // 0x64
    // Color m_Color;
    char pad_01[8];
}; // size: 0x70

class __declspec(align(8)) CPathAnimMotorUpdater {
public:
    char pad_00[40];
}; // size: 0x28

class __declspec(align(1)) CBoneConstraintBase {
public:
    char pad_00[32];
}; // size: 0x20

class __declspec(align(8)) CRagdollUpdateNode {
public:
    char pad_00[112];
    int32_t m_nWeightListIndex; // 0x70
    RagdollPoseControl m_poseControlMethod; // 0x74
}; // size: 0x78

class __declspec(align(8)) CAnimScriptComponentUpdater {
public:
    // AnimScriptHandle m_hScript;
    char pad_00[56];
}; // size: 0x38

class __declspec(align(16)) AimMatrixOpFixedSettings_t {
public:
    // CAnimAttachment m_attachment;
    // CAnimInputDamping m_damping;
    // CPoseHandle[10] m_poseCacheHandles;
    char pad_00[192];
    AimMatrixBlendMode m_eBlendMode; // 0xc0
    float m_flMaxYawAngle; // 0xc4
    float m_flMaxPitchAngle; // 0xc8
    int32_t m_nSequenceMaxFrame; // 0xcc
    int32_t m_nBoneMaskIndex; // 0xd0
    bool m_bTargetIsPosition; // 0xd4
    bool m_bUseBiasAndClamp; // 0xd5
    float m_flBiasAndClampYawOffset; // 0xd8
    float m_flBiasAndClampPitchOffset; // 0xdc
    // CBlendCurve m_biasAndClampBlendCurve;
    char pad_01[16];
}; // size: 0xf0

class __declspec(align(8)) CFollowPathUpdateNode {
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
    // CAnimInputDamping m_turnDamping;
    char pad_01[28];
    AnimValueSource m_facingTarget; // 0xa8
    // CAnimParamHandle m_hParam;
    char pad_02[4];
    float m_flTurnToFaceOffset; // 0xb0
    bool m_bTurnToFace; // 0xb4
    char pad_03[3];
}; // size: 0xb8

class __declspec(align(8)) CTaskHandshakeAnimTag {
public:
    char pad_00[88];
}; // size: 0x58

class __declspec(align(4)) PulseRuntimeChunkIndex_t {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

class __declspec(align(8)) VPhysXBodyPart_t {
public:
    uint32_t m_nFlags; // 0x0
    float m_flMass; // 0x4
    // VPhysics2ShapeDef_t m_rnShape;
    char pad_00[120];
    uint16_t m_nCollisionAttributeIndex; // 0x80
    uint16_t m_nReserved; // 0x82
    float m_flInertiaScale; // 0x84
    float m_flLinearDamping; // 0x88
    float m_flAngularDamping; // 0x8c
    float m_flLinearDrag; // 0x90
    float m_flAngularDrag; // 0x94
    bool m_bOverrideMassCenter; // 0x98
    // Vector m_vMassCenterOverride;
    char pad_01[15];
}; // size: 0xa8

class __declspec(align(1)) IParticleCollection {
public:
    char pad_00[16];
}; // size: 0x10

class __declspec(align(16)) CTwoBoneIKUpdateNode {
public:
    // TwoBoneIKSettings_t m_opFixedData;
    char pad_00[480];
}; // size: 0x1e0

class __declspec(align(4)) SkeletonBoneBounds_t {
public:
    // Vector m_vecCenter;
    // Vector m_vecSize;
    char pad_00[24];
}; // size: 0x18

/// CNmControlParameterTargetNode::CDefinition
class __declspec(align(8)) CNmControlParameterTargetNode__CDefinition {
public:
    char pad_00[16];
}; // size: 0x10

/// CNmCurrentSyncEventNode::CDefinition
class __declspec(align(8)) CNmCurrentSyncEventNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx; // 0x10
    // CNmCurrentSyncEventNode::InfoType_t m_infoType;
    char pad_01[6];
}; // size: 0x18

class __declspec(align(8)) CMotionNodeBlend1D {
public:
    // CUtlVector< MotionBlendItem > m_blendItems;
    char pad_00[64];
    int32_t m_nParamIndex; // 0x40
    char pad_01[4];
}; // size: 0x48

class __declspec(align(8)) CMotionSearchDB {
public:
    // CMotionSearchNode m_rootNode;
    // CProductQuantizer m_residualQuantizer;
    // CUtlVector< MotionDBIndex > m_codeIndices;
    char pad_00[184];
}; // size: 0xb8

/// CNmAnimationPoseNode::CDefinition
class __declspec(align(8)) CNmAnimationPoseNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nPoseTimeValueNodeIdx; // 0x10
    int16_t m_nDataSlotIdx; // 0x12
    // Range_t m_inputTimeRemapRange;
    char pad_01[8];
    float m_flUserSpecifiedTime; // 0x1c
    bool m_bUseFramesAsInput; // 0x20
    char pad_02[7];
}; // size: 0x28

class __declspec(align(8)) CNmAdditiveBlendTask {
public:
    char pad_00[224];
}; // size: 0xe0

class __declspec(align(8)) CModelConfigElement_SetRenderColor {
public:
    // Color m_Color;
    char pad_00[80];
}; // size: 0x50

class __declspec(align(4)) IKTargetSettings_t {
public:
    IKTargetSource m_TargetSource; // 0x0
    // IKBoneNameAndIndex_t m_Bone;
    // AnimParamID m_AnimgraphParameterNamePosition;
    // AnimParamID m_AnimgraphParameterNameOrientation;
    char pad_00[28];
    IKTargetCoordinateSystem m_TargetCoordSystem; // 0x20
    char pad_01[4];
}; // size: 0x28

class __declspec(align(4)) CRangeFloat {
public:
    float m_pValue[2]; // 0x0
}; // size: 0x8

class __declspec(align(8)) CFootStepTriggerUpdateNode {
public:
    // CUtlVector< FootStepTrigger > m_triggers;
    char pad_00[140];
    float m_flTolerance; // 0x8c
}; // size: 0x90

class __declspec(align(8)) ParamSpan_t {
public:
    // CUtlVector< ParamSpanSample_t > m_samples;
    // CAnimParamHandle m_hParam;
    char pad_00[26];
    AnimParamType_t m_eParamType; // 0x1a
    float m_flStartCycle; // 0x1c
    float m_flEndCycle; // 0x20
    char pad_01[4];
}; // size: 0x28

/// CNmGraphDefinition::ReferencedGraphSlot_t
class __declspec(align(2)) CNmGraphDefinition__ReferencedGraphSlot_t {
public:
    int16_t m_nNodeIdx; // 0x0
    int16_t m_dataSlotIdx; // 0x2
}; // size: 0x4

class __declspec(align(8)) CDirectionalBlendUpdateNode {
public:
    // HSequence[8] m_hSequences;
    // CAnimInputDamping m_damping;
    char pad_00[152];
    AnimValueSource m_blendValueSource; // 0x98
    // CAnimParamHandle m_paramIndex;
    char pad_01[4];
    float m_playbackSpeed; // 0xa0
    float m_duration; // 0xa4
    bool m_bLoop; // 0xa8
    bool m_bLockBlendOnReset; // 0xa9
    char pad_02[6];
}; // size: 0xb0

class __declspec(align(4)) PulseRuntimeCallInfoIndex_t {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

class __declspec(align(8)) CSeqScaleSet {
public:
    // CBufferString m_sName;
    char pad_00[16];
    bool m_bRootOffset; // 0x10
    // Vector m_vRootOffset;
    // CUtlVector< int16 > m_nLocalBoneArray;
    // CUtlVector< float32 > m_flBoneScaleArray;
    char pad_01[63];
}; // size: 0x50

/// CNmVirtualParameterIDNode::CDefinition
class __declspec(align(8)) CNmVirtualParameterIDNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx; // 0x10
    char pad_01[6];
}; // size: 0x18

class __declspec(align(8)) AnimationDecodeDebugDump_t {
public:
    AnimationProcessingType_t m_processingType; // 0x0
    // CUtlVector< AnimationDecodeDebugDumpElement_t > m_elems;
    char pad_00[28];
}; // size: 0x20

class __declspec(align(8)) ModelAnimGraph2Ref_t {
public:
    // CUtlString m_sIdentifier;
    // CStrongHandle< InfoForResourceTypeCNmGraphDefinition > m_hGraph;
    char pad_00[16];
}; // size: 0x10

/// CNmBoneMaskNode::CDefinition
class __declspec(align(8)) CNmBoneMaskNode__CDefinition {
public:
    // CGlobalSymbol m_boneMaskID;
    char pad_00[24];
}; // size: 0x18

class __declspec(align(4)) AnimParamID {
public:
    uint32_t m_id; // 0x0
}; // size: 0x4

class __declspec(align(8)) RnCapsuleDesc_t {
public:
    // RnCapsule_t m_Capsule;
    char pad_00[56];
}; // size: 0x38

/// CNmOrientationWarpNode::CDefinition
class __declspec(align(8)) CNmOrientationWarpNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nClipReferenceNodeIdx; // 0x10
    int16_t m_nTargetValueNodeIdx; // 0x12
    bool m_bIsOffsetNode; // 0x14
    bool m_bIsOffsetRelativeToCharacter; // 0x15
    bool m_bWarpTranslation; // 0x16
    // CNmRootMotionData::SamplingMode_t m_samplingMode;
    char pad_01[1];
}; // size: 0x18

/// CNmZeroPoseNode::CDefinition
class __declspec(align(8)) CNmZeroPoseNode__CDefinition {
public:
    char pad_00[16];
}; // size: 0x10

class __declspec(align(8)) CNmModelSpaceBlendTask {
public:
    char pad_00[224];
}; // size: 0xe0

class __declspec(align(8)) CBodyGroupAnimTag {
public:
    char pad_00[88];
    int32_t m_nPriority; // 0x58
    // CUtlVector< CBodyGroupSetting > m_bodyGroupSettings;
    char pad_01[28];
}; // size: 0x78

/// CNmStateMachineNode::CDefinition
class __declspec(align(8)) CNmStateMachineNode__CDefinition {
public:
    // CUtlLeanVectorFixedGrowable< CNmStateMachineNode::StateDefinition_t, 5 > m_stateDefinitions;
    char pad_00[304];
    int16_t m_nDefaultStateIndex; // 0x130
    char pad_01[6];
}; // size: 0x138

class __declspec(align(1)) CMotionNode {
public:
    // CUtlString m_name;
    // AnimNodeID m_id;
    char pad_00[40];
}; // size: 0x28

class __declspec(align(8)) CRagdollAnimTag {
public:
    // CGlobalSymbol m_profileName;
    char pad_00[96];
}; // size: 0x60

class __declspec(align(8)) CBoolAnimParameter {
public:
    char pad_00[128];
    bool m_bDefaultValue; // 0x80
    char pad_01[7];
}; // size: 0x88

class __declspec(align(8)) CStringAnimTag {
public:
    char pad_00[80];
}; // size: 0x50

/// CNmConstFloatNode::CDefinition
class __declspec(align(8)) CNmConstFloatNode__CDefinition {
public:
    char pad_00[16];
    float m_flValue; // 0x10
    char pad_01[4];
}; // size: 0x18

class __declspec(align(8)) CEditableMotionGraph {
public:
    char pad_00[88];
}; // size: 0x58

/// CNmIDComparisonNode::CDefinition
class __declspec(align(8)) CNmIDComparisonNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    // CNmIDComparisonNode::Comparison_t m_comparison;
    // CUtlLeanVectorFixedGrowable< CGlobalSymbol, 4 > m_comparisionIDs;
    char pad_01[46];
}; // size: 0x40

class __declspec(align(8)) CFootTrajectories {
public:
    // CUtlVector< CFootTrajectory > m_trajectories;
    char pad_00[24];
}; // size: 0x18

class __declspec(align(16)) CAnimAttachment {
public:
    // Quaternion[3] m_influenceRotations;
    // VectorAligned[3] m_influenceOffsets;
    char pad_00[96];
    int32_t m_influenceIndices[3]; // 0x60
    float m_influenceWeights[3]; // 0x6c
    uint8_t m_numInfluences; // 0x78
    char pad_01[7];
}; // size: 0x80

class __declspec(align(8)) CAnimUpdateSharedData {
public:
    // CUtlVector< CSmartPtr< CAnimUpdateNodeBase > > m_nodes;
    // CUtlHashtable< CAnimNodePath, int32 > m_nodeIndexMap;
    // CUtlVector< CSmartPtr< CAnimComponentUpdater > > m_components;
    // CSmartPtr< CAnimParameterManagerUpdater > m_pParamListUpdater;
    // CSmartPtr< CAnimTagManagerUpdater > m_pTagManagerUpdater;
    // CSmartPtr< CAnimScriptManager > m_scriptManager;
    // CAnimGraphSettingsManager m_settings;
    // CSmartPtr< CStaticPoseCacheBuilder > m_pStaticPoseCache;
    // CSmartPtr< CAnimSkeleton > m_pSkeleton;
    // CAnimNodePath m_rootNodePath;
    char pad_00[256];
}; // size: 0x100

class __declspec(align(8)) CNmCachedPoseWriteTask {
public:
    char pad_00[96];
}; // size: 0x60

class __declspec(align(16)) TwoBoneIKSettings_t {
public:
    IkEndEffectorType m_endEffectorType; // 0x0
    CAnimAttachment m_endEffectorAttachment; // 0x10
    IkTargetType m_targetType; // 0x90
    CAnimAttachment m_targetAttachment; // 0xa0
    int32_t m_targetBoneIndex; // 0x120
    // CAnimParamHandle m_hPositionParam;
    // CAnimParamHandle m_hRotationParam;
    char pad_00[4];
    bool m_bAlwaysUseFallbackHinge; // 0x128
    // VectorAligned m_vLsFallbackHingeAxis;
    char pad_01[20];
    int32_t m_nFixedBoneIndex; // 0x140
    int32_t m_nMiddleBoneIndex; // 0x144
    int32_t m_nEndBoneIndex; // 0x148
    bool m_bMatchTargetOrientation; // 0x14c
    bool m_bConstrainTwist; // 0x14d
    float m_flMaxTwist; // 0x150
    char pad_02[12];
}; // size: 0x160

/// CNmIDSelectorNode::CDefinition
class __declspec(align(8)) CNmIDSelectorNode__CDefinition {
public:
    // CUtlVectorFixedGrowable< int16, 5 > m_conditionNodeIndices;
    // CUtlVectorFixedGrowable< CGlobalSymbol, 5 > m_values;
    // CGlobalSymbol m_defaultValue;
    char pad_00[128];
}; // size: 0x80

class __declspec(align(8)) CNmEntityAttributeFloatEvent {
public:
    // CPiecewiseCurve m_FloatValue;
    char pad_00[120];
}; // size: 0x78

class __declspec(align(8)) SolveIKChainPoseOpFixedSettings_t {
public:
    // CUtlVector< ChainToSolveData_t > m_ChainsToSolveData;
    char pad_00[24];
}; // size: 0x18

class __declspec(align(8)) CParticleFloatInput {
public:
    char pad_00[16];
    ParticleFloatType_t m_nType; // 0x10
    ParticleFloatMapType_t m_nMapType; // 0x14
    float m_flLiteralValue; // 0x18
    // CParticleNamedValueRef m_NamedValue;
    char pad_01[68];
    int32_t m_nControlPoint; // 0x60
    // ParticleAttributeIndex_t m_nScalarAttribute;
    // ParticleAttributeIndex_t m_nVectorAttribute;
    char pad_02[8];
    int32_t m_nVectorComponent; // 0x6c
    bool m_bReverseOrder; // 0x70
    float m_flRandomMin; // 0x74
    float m_flRandomMax; // 0x78
    bool m_bHasRandomSignFlip; // 0x7c
    int32_t m_nRandomSeed; // 0x80
    ParticleFloatRandomMode_t m_nRandomMode; // 0x84
    // CUtlString m_strSnapshotSubset;
    char pad_03[16];
    float m_flLOD0; // 0x98
    float m_flLOD1; // 0x9c
    float m_flLOD2; // 0xa0
    float m_flLOD3; // 0xa4
    // ParticleAttributeIndex_t m_nNoiseInputVectorAttribute;
    char pad_04[4];
    float m_flNoiseOutputMin; // 0xac
    float m_flNoiseOutputMax; // 0xb0
    float m_flNoiseScale; // 0xb4
    // Vector m_vecNoiseOffsetRate;
    char pad_05[12];
    float m_flNoiseOffset; // 0xc4
    int32_t m_nNoiseOctaves; // 0xc8
    PFNoiseTurbulence_t m_nNoiseTurbulence; // 0xcc
    PFNoiseType_t m_nNoiseType; // 0xd0
    PFNoiseModifier_t m_nNoiseModifier; // 0xd4
    float m_flNoiseTurbulenceScale; // 0xd8
    float m_flNoiseTurbulenceMix; // 0xdc
    float m_flNoiseImgPreviewScale; // 0xe0
    bool m_bNoiseImgPreviewLive; // 0xe4
    char pad_06[8];
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
    char pad_07[68];
}; // size: 0x170

class __declspec(align(8)) CPulse_Constant {
public:
    // CPulseValueFullType m_Type;
    // KeyValues3 m_Value;
    char pad_00[48];
}; // size: 0x30

class __declspec(align(1)) CLeafUpdateNode {
public:
    char pad_00[88];
}; // size: 0x58

class __declspec(align(8)) CBoneMaskUpdateNode {
public:
    char pad_00[148];
    int32_t m_nWeightListIndex; // 0x94
    float m_flRootMotionBlend; // 0x98
    BoneMaskBlendSpace m_blendSpace; // 0x9c
    BinaryNodeChildOption m_footMotionTiming; // 0xa0
    bool m_bUseBlendScale; // 0xa4
    AnimValueSource m_blendValueSource; // 0xa8
    // CAnimParamHandle m_hBlendParameter;
    char pad_01[4];
}; // size: 0xb0

class __declspec(align(8)) CSeqCmdSeqDesc {
public:
    // CBufferString m_sName;
    // CSeqSeqDescFlag m_flags;
    // CSeqTransition m_transition;
    char pad_00[36];
    int16_t m_nFrameRangeSequence; // 0x24
    int16_t m_nFrameCount; // 0x26
    float m_flFPS; // 0x28
    int16_t m_nSubCycles; // 0x2c
    int16_t m_numLocalResults; // 0x2e
    // CUtlVector< CSeqCmdLayer > m_cmdLayerArray;
    // CUtlVector< CAnimEventDefinition > m_eventArray;
    // CUtlVector< CAnimActivity > m_activityArray;
    // CUtlVector< CSeqPoseSetting > m_poseSettingArray;
    char pad_01[96];
}; // size: 0x90

/// CNmOrNode::CDefinition
class __declspec(align(8)) CNmOrNode__CDefinition {
public:
    // CUtlLeanVectorFixedGrowable< int16, 4 > m_conditionNodeIndices;
    char pad_00[32];
}; // size: 0x20

class __declspec(align(8)) CSolveIKChainUpdateNode {
public:
    // CUtlVector< CSolveIKTargetHandle_t > m_targetHandles;
    char pad_00[136];
    SolveIKChainPoseOpFixedSettings_t m_opFixedData; // 0x88
    char pad_01[8];
}; // size: 0xa8

/// CNmFootstepEventIDNode::CDefinition
class __declspec(align(8)) CNmFootstepEventIDNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx; // 0x10
    // CNmBitFlags m_eventConditionRules;
    char pad_01[6];
}; // size: 0x18

class __declspec(align(2)) CPoseHandle {
public:
    uint16_t m_nIndex; // 0x0
    PoseType_t m_eType; // 0x2
    char pad_00[1];
}; // size: 0x4

/// CNmFloatRemapNode::CDefinition
class __declspec(align(8)) CNmFloatRemapNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    // CNmFloatRemapNode::RemapRange_t m_inputRange;
    // CNmFloatRemapNode::RemapRange_t m_outputRange;
    char pad_01[22];
}; // size: 0x28

class __declspec(align(4)) PulseGraphInstanceID_t {
public:
    uint32_t m_Value; // 0x0
}; // size: 0x4

class __declspec(align(8)) CSubtractUpdateNode {
public:
    char pad_00[148];
    BinaryNodeChildOption m_footMotionTiming; // 0x94
    bool m_bApplyToFootMotion; // 0x98
    bool m_bApplyChannelsSeparately; // 0x99
    bool m_bUseModelSpace; // 0x9a
    char pad_01[5];
}; // size: 0xa0

class __declspec(align(8)) JiggleBoneSettingsList_t {
public:
    // CUtlVector< JiggleBoneSettings_t > m_boneSettings;
    char pad_00[24];
}; // size: 0x18

class __declspec(align(1)) CAnimMotorUpdaterBase {
public:
    // CUtlString m_name;
    char pad_00[24];
    bool m_bDefault; // 0x18
    char pad_01[7];
}; // size: 0x20

/// CNmLayerBlendNode::CDefinition
class __declspec(align(8)) CNmLayerBlendNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nBaseNodeIdx; // 0x10
    bool m_bOnlySampleBaseRootMotion; // 0x12
    // CUtlLeanVectorFixedGrowable< CNmLayerBlendNode::LayerDefinition_t, 3 > m_layerDefinition;
    char pad_01[53];
}; // size: 0x48

class __declspec(align(8)) CMoverUpdateNode {
public:
    // CAnimInputDamping m_damping;
    char pad_00[144];
    AnimValueSource m_facingTarget; // 0x90
    // CAnimParamHandle m_hMoveVecParam;
    // CAnimParamHandle m_hMoveHeadingParam;
    // CAnimParamHandle m_hTurnToFaceParam;
    char pad_01[8];
    float m_flTurnToFaceOffset; // 0x9c
    float m_flTurnToFaceLimit; // 0xa0
    bool m_bAdditive; // 0xa4
    bool m_bApplyMovement; // 0xa5
    bool m_bOrientMovement; // 0xa6
    bool m_bApplyRotation; // 0xa7
    bool m_bLimitOnly; // 0xa8
    char pad_02[7];
}; // size: 0xb0

class __declspec(align(8)) COrientConstraint {
public:
    char pad_00[96];
}; // size: 0x60

/// CNmTargetValueNode::CDefinition
class __declspec(align(1)) CNmTargetValueNode__CDefinition {
public:
    char pad_00[16];
}; // size: 0x10

class __declspec(align(8)) CStateUpdateData {
public:
    // CUtlString m_name;
    // AnimScriptHandle m_hScript;
    // CUtlVector< int32 > m_transitionIndices;
    // CUtlVector< CStateActionUpdater > m_actions;
    // AnimStateID m_stateID;
    // bitfield:1 m_bIsStartState;
    // bitfield:1 m_bIsEndState;
    // bitfield:1 m_bIsPassthrough;
    // bitfield:1 m_bIsPassthroughRootMotion;
    // bitfield:1 m_bPreEvaluatePassthroughTransitionPath;
    char pad_00[72];
}; // size: 0x48

class __declspec(align(16)) CNmChainSolverTask {
public:
    char pad_00[88];
    int32_t m_nEffectorBoneIdx; // 0x58
    int32_t m_nEffectorTargetBoneIdx; // 0x5c
    // CTransform m_targetTransform;
    char pad_01[32];
    int32_t m_nNumBonesInChain; // 0x80
    CNmTarget m_effectorTarget; // 0x90
    NmIKBlendMode_t m_blendMode; // 0xc0
    float m_flBlendWeight; // 0xc4
    bool m_bIsTargetInWorldSpace; // 0xc8
    bool m_bIsRunningFromDeserializedData; // 0xc9
    // CGlobalSymbol m_debugEffectorBoneID;
    // CTransform m_chainStartTransformMS;
    // CTransform m_debugRequestedTargetTransformMS;
    char pad_02[84];
    float m_debugTotalChainLength; // 0x120
    char pad_03[12];
}; // size: 0x130

/// CNmFloatComparisonNode::CDefinition
class __declspec(align(8)) CNmFloatComparisonNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    int16_t m_nComparandValueNodeIdx; // 0x12
    // CNmFloatComparisonNode::Comparison_t m_comparison;
    char pad_01[4];
    float m_flEpsilon; // 0x18
    float m_flComparisonValue; // 0x1c
}; // size: 0x20

class __declspec(align(4)) VPhysXConstraintParams_t {
public:
    int8_t m_nType; // 0x0
    int8_t m_nTranslateMotion; // 0x1
    int8_t m_nRotateMotion; // 0x2
    int8_t m_nFlags; // 0x3
    // Vector[2] m_anchor;
    // QuaternionStorage[2] m_axes;
    char pad_00[56];
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
    // Vector m_goalPosition;
    // QuaternionStorage m_goalOrientation;
    // Vector m_goalAngularVelocity;
    char pad_01[40];
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

class __declspec(align(8)) CNmFollowBoneTask {
public:
    char pad_00[120];
}; // size: 0x78

class __declspec(align(4)) ParamSpanSample_t {
public:
    // CAnimVariant m_value;
    char pad_00[20];
    float m_flCycle; // 0x14
}; // size: 0x18

class __declspec(align(4)) TraceSettings_t {
public:
    float m_flTraceHeight; // 0x0
    float m_flTraceRadius; // 0x4
}; // size: 0x8

class __declspec(align(8)) CCurrentRotationVelocityMetricEvaluator {
public:
    char pad_00[80];
}; // size: 0x50

class __declspec(align(8)) CPointConstraint {
public:
    char pad_00[96];
}; // size: 0x60

class __declspec(align(8)) CBoneConstraintDotToMorph {
public:
    // CUtlString m_sBoneName;
    // CUtlString m_sTargetBoneName;
    // CUtlString m_sMorphChannelName;
    char pad_00[56];
    float m_flRemap[4]; // 0x38
    char pad_01[16];
}; // size: 0x58

class __declspec(align(4)) NmFloatCurveCompressionSettings_t {
public:
    // NmCompressionSettings_t::QuantizationRange_t m_range;
    char pad_00[8];
    bool m_bIsStatic; // 0x8
    char pad_01[3];
}; // size: 0xc

class __declspec(align(16)) CAnimationGraphVisualizerPie {
public:
    // VectorAligned m_vWsCenter;
    // VectorAligned m_vWsStart;
    // VectorAligned m_vWsEnd;
    // Color m_Color;
    char pad_00[128];
}; // size: 0x80

class __declspec(align(4)) CPhysSurfacePropertiesPhysics {
public:
    float m_friction; // 0x0
    float m_elasticity; // 0x4
    float m_density; // 0x8
    float m_thickness; // 0xc
    float m_softContactFrequency; // 0x10
    float m_softContactDampingRatio; // 0x14
}; // size: 0x18

/// CNmTargetWarpNode::CDefinition
class __declspec(align(8)) CNmTargetWarpNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nClipReferenceNodeIdx; // 0x10
    int16_t m_nTargetValueNodeIdx; // 0x12
    // CNmRootMotionData::SamplingMode_t m_samplingMode;
    char pad_01[1];
    bool m_bAllowTargetUpdate; // 0x15
    bool m_bAlignWithTargetAtLastWarpEvent; // 0x16
    float m_flSamplingPositionErrorThresholdSq; // 0x18
    float m_flMaxTangentLength; // 0x1c
    float m_flLerpFallbackDistanceThreshold; // 0x20
    float m_flTargetUpdateDistanceThreshold; // 0x24
    float m_flTargetUpdateAngleThresholdRadians; // 0x28
    char pad_02[4];
}; // size: 0x30

/// CNmRootMotionOverrideNode::CDefinition
class __declspec(align(8)) CNmRootMotionOverrideNode__CDefinition {
public:
    char pad_00[24];
    int16_t m_desiredMovingVelocityNodeIdx; // 0x18
    int16_t m_desiredFacingDirectionNodeIdx; // 0x1a
    int16_t m_linearVelocityLimitNodeIdx; // 0x1c
    int16_t m_angularVelocityLimitNodeIdx; // 0x1e
    float m_maxLinearVelocity; // 0x20
    float m_maxAngularVelocityRadians; // 0x24
    // CNmBitFlags m_overrideFlags;
    char pad_01[8];
}; // size: 0x30

class __declspec(align(16)) CAnimDesc {
public:
    // CBufferString m_name;
    // CAnimDesc_Flag m_flags;
    char pad_00[24];
    float fps; // 0x18
    // CAnimEncodedFrames m_Data;
    // CUtlVector< CAnimMovement > m_movementArray;
    // CTransform m_xInitialOffset;
    // CUtlVector< CAnimEventDefinition > m_eventArray;
    // CUtlVector< CAnimActivity > m_activityArray;
    // CUtlVector< CAnimLocalHierarchy > m_hierarchyArray;
    char pad_01[348];
    float framestalltime; // 0x178
    // Vector m_vecRootMin;
    // Vector m_vecRootMax;
    // CUtlVector< Vector > m_vecBoneWorldMin;
    // CUtlVector< Vector > m_vecBoneWorldMax;
    char pad_02[76];
    CAnimSequenceParams m_sequenceParams; // 0x1c8
}; // size: 0x1d0

/// CNmExternalPoseNode::CDefinition
class __declspec(align(8)) CNmExternalPoseNode__CDefinition {
public:
    char pad_00[16];
    bool m_bShouldSampleRootMotion; // 0x10
    char pad_01[7];
}; // size: 0x18

class __declspec(align(4)) PulseRuntimeCellIndex_t {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

/// CNmFloatClampNode::CDefinition
class __declspec(align(8)) CNmFloatClampNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    // Range_t m_clampRange;
    char pad_01[14];
}; // size: 0x20

class __declspec(align(8)) CAnimParamHandleMap {
public:
    // CUtlHashtable< uint16, int16 > m_list;
    char pad_00[32];
}; // size: 0x20

class __declspec(align(4)) CSeqIKLock {
public:
    float m_flPosWeight; // 0x0
    float m_flAngleWeight; // 0x4
    int16_t m_nLocalBone; // 0x8
    bool m_bBonesOrientedAlongPositiveX; // 0xa
    char pad_00[1];
}; // size: 0xc

class __declspec(align(8)) CRenderSkeleton {
public:
    // CUtlVector< RenderSkeletonBone_t > m_bones;
    // CUtlVector< int32 > m_boneParents;
    char pad_00[72];
    int32_t m_nBoneWeightCount; // 0x48
    char pad_01[4];
}; // size: 0x50

class __declspec(align(8)) CPlayerInputAnimMotorUpdater {
public:
    // CUtlVector< float32 > m_sampleTimes;
    char pad_00[60];
    float m_flSpringConstant; // 0x3c
    float m_flAnticipationDistance; // 0x40
    // CAnimParamHandle m_hAnticipationPosParam;
    // CAnimParamHandle m_hAnticipationHeadingParam;
    char pad_01[4];
    bool m_bUseAcceleration; // 0x48
    char pad_02[7];
}; // size: 0x50

class __declspec(align(8)) CStateActionUpdater {
public:
    // CSmartPtr< CAnimActionUpdater > m_pAction;
    char pad_00[8];
    StateActionBehavior m_eBehavior; // 0x8
    char pad_01[4];
}; // size: 0x10

class __declspec(align(8)) CFloatAnimParameter {
public:
    char pad_00[128];
    float m_fDefaultValue; // 0x80
    float m_fMinValue; // 0x84
    float m_fMaxValue; // 0x88
    bool m_bInterpolate; // 0x8c
    char pad_01[3];
}; // size: 0x90

class __declspec(align(8)) CBoneConstraintPoseSpaceMorph {
public:
    // CUtlString m_sBoneName;
    // CUtlString m_sAttachmentName;
    // CUtlVector< CUtlString > m_outputMorph;
    // CUtlVector< CBoneConstraintPoseSpaceMorph::Input_t > m_inputList;
    char pad_00[96];
    bool m_bClamp; // 0x60
    char pad_01[63];
}; // size: 0xa0

class __declspec(align(8)) MotionBlendItem {
public:
    // CSmartPtr< CMotionNode > m_pChild;
    char pad_00[8];
    float m_flKeyValue; // 0x8
    char pad_01[4];
}; // size: 0x10

class __declspec(align(16)) CNmTwoBoneIKTask {
public:
    char pad_00[88];
    int32_t m_nEffectorBoneIdx; // 0x58
    int32_t m_nEffectorTargetBoneIdx; // 0x5c
    // CTransform m_targetTransform;
    char pad_01[32];
    CNmTarget m_effectorTarget; // 0x80
    NmIKBlendMode_t m_blendMode; // 0xb0
    float m_flBlendWeight; // 0xb4
    bool m_bIsTargetInWorldSpace; // 0xb8
    bool m_bIsRunningFromDeserializedData; // 0xb9
    float m_flReferencePoseTwistWeight; // 0xbc
    // CGlobalSymbol m_debugEffectorBoneID;
    char pad_02[16];
}; // size: 0xd0

class __declspec(align(8)) CBoneConstraintPoseSpaceBone {
public:
    // CUtlVector< CBoneConstraintPoseSpaceBone::Input_t > m_inputList;
    char pad_00[136];
}; // size: 0x88

class __declspec(align(8)) CAnimGraphModelBinding {
public:
    // CUtlString m_modelName;
    // CSmartPtr< CAnimUpdateSharedData > m_pSharedData;
    char pad_00[40];
}; // size: 0x28

class __declspec(align(8)) CAnimGraphSettingsManager {
public:
    // CUtlVector< CSmartPtr< CAnimGraphSettingsGroup > > m_settingsGroups;
    char pad_00[48];
}; // size: 0x30

class __declspec(align(16)) LookAtOpFixedSettings_t {
public:
    CAnimAttachment m_attachment; // 0x0
    // CAnimInputDamping m_damping;
    // CUtlVector< LookAtBone_t > m_bones;
    char pad_00[48];
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

class __declspec(align(8)) CStaticPoseCache {
public:
    // CUtlVector< CCachedPose > m_poses;
    char pad_00[40];
    int32_t m_nBoneCount; // 0x28
    int32_t m_nMorphCount; // 0x2c
}; // size: 0x30

class __declspec(align(8)) CNmGraphVariationUserData {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(8)) CWarpSectionAnimTagBase {
public:
    char pad_00[80];
}; // size: 0x50

/// CNmFloatValueNode::CDefinition
class __declspec(align(1)) CNmFloatValueNode__CDefinition {
public:
    char pad_00[16];
}; // size: 0x10

class __declspec(align(8)) CPulse_RegisterInfo {
public:
    // PulseRuntimeRegisterIndex_t m_nReg;
    // CPulseValueFullType m_Type;
    // CKV3MemberNameWithStorage m_OriginName;
    char pad_00[88];
    int32_t m_nWrittenByInstruction; // 0x58
    int32_t m_nLastReadByInstruction; // 0x5c
}; // size: 0x60

/// CNmTargetSelectorNode::CDefinition
class __declspec(align(8)) CNmTargetSelectorNode__CDefinition {
public:
    // CUtlLeanVectorFixedGrowable< int16, 5 > m_optionNodeIndices;
    char pad_00[40];
    float m_flOrientationScoreWeight; // 0x28
    float m_flPositionScoreWeight; // 0x2c
    int16_t m_parameterNodeIdx; // 0x30
    bool m_bIgnoreInvalidOptions; // 0x32
    bool m_bIsWorldSpaceTarget; // 0x33
    char pad_01[4];
}; // size: 0x38

/// CNmTargetPointNode::CDefinition
class __declspec(align(8)) CNmTargetPointNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    bool m_bIsWorldSpaceTarget; // 0x12
    char pad_01[5];
}; // size: 0x18

class __declspec(align(8)) CCycleControlClipUpdateNode {
public:
    // CUtlVector< TagSpan_t > m_tags;
    // HSequence m_hSequence;
    char pad_00[128];
    float m_duration; // 0x80
    AnimValueSource m_valueSource; // 0x84
    // CAnimParamHandle m_paramIndex;
    char pad_01[2];
    bool m_bLockWhenWaning; // 0x8a
    char pad_02[5];
}; // size: 0x90

class __declspec(align(4)) RenderHairStrandInfo_t {
public:
    uint32_t m_nGuideHairIndices_nSurfaceTriIndex[2]; // 0x0
    uint16_t m_vGuideBary_vBaseBary[4]; // 0x8
    uint16_t m_vRootOffset_flLengthScale[4]; // 0x10
    uint16_t m_nPackedBaseUv[2]; // 0x18
    uint32_t m_nPackedSurfaceNormalOs; // 0x1c
    uint32_t m_nPackedSurfaceTangentOs; // 0x20
    uint32_t m_nDataOffset_Segments; // 0x24
}; // size: 0x28

class __declspec(align(8)) CVPhysXSurfacePropertiesList {
public:
    // CUtlVector< CPhysSurfaceProperties* > m_surfacePropertiesList;
    char pad_00[24];
}; // size: 0x18

/// CNmSpeedScaleNode::CDefinition
class __declspec(align(8)) CNmSpeedScaleNode__CDefinition {
public:
    char pad_00[32];
}; // size: 0x20

class __declspec(align(16)) CTiltTwistConstraint {
public:
    char pad_00[96];
    int32_t m_nTargetAxis; // 0x60
    int32_t m_nSlaveAxis; // 0x64
    char pad_01[40];
}; // size: 0x90

/// CNmParameterizedClipSelectorNode::CDefinition
class __declspec(align(8)) CNmParameterizedClipSelectorNode__CDefinition {
public:
    // CUtlLeanVectorFixedGrowable< int16, 5 > m_optionNodeIndices;
    // CUtlLeanVectorFixedGrowable< uint8, 5 > m_optionWeights;
    char pad_00[56];
    int16_t m_parameterNodeIdx; // 0x38
    bool m_bIgnoreInvalidOptions; // 0x3a
    bool m_bHasWeightsSet; // 0x3b
    char pad_01[4];
}; // size: 0x40

class __declspec(align(8)) CRenderGroom {
public:
    // CUtlVector< RenderHairStrandInfo_t > m_hairs;
    // CUtlVector< uint32 > m_hairPositionOffsets;
    // CStrongHandleCopyable< InfoForResourceTypeIMaterial2 > m_hSimParamsMat;
    // CUtlVector< int32 > m_strandSegmentCountHist;
    char pad_00[120];
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
    char pad_01[3];
}; // size: 0xa0

class __declspec(align(8)) CNmSoundEvent {
public:
    char pad_00[32];
    CNmEventRelevance_t m_relevance; // 0x20
    // CUtlString m_name;
    // CNmSoundEvent::Position_t m_position;
    // CUtlString m_attachmentName;
    // CUtlString m_tags;
    char pad_01[36];
    bool m_bContinuePlayingSoundAtDurationEnd; // 0x48
    float m_flDurationInterruptionThreshold; // 0x4c
}; // size: 0x50

class __declspec(align(8)) RnHullDesc_t {
public:
    // RnHull_t m_Hull;
    char pad_00[272];
}; // size: 0x110

class __declspec(align(8)) CBoneConstraintRbf {
public:
    // CUtlVector< std::pair< CUtlString, uint32 > > m_inputBones;
    // CUtlVector< std::pair< CUtlString, uint32 > > m_outputBones;
    char pad_00[200];
}; // size: 0xc8

class __declspec(align(8)) ScriptInfo_t {
public:
    // CUtlString m_code;
    // CUtlVector< CAnimParamHandle > m_paramsModified;
    // CUtlVector< int32 > m_proxyReadParams;
    // CUtlVector< int32 > m_proxyWriteParams;
    char pad_00[80];
    AnimScriptType m_eScriptType; // 0x50
    char pad_01[6];
}; // size: 0x58

class __declspec(align(8)) CFlexRule {
public:
    int32_t m_nFlex; // 0x0
    // CUtlVector< CFlexOp > m_FlexOps;
    char pad_00[28];
}; // size: 0x20

class __declspec(align(8)) CNmIDEvent {
public:
    // CGlobalSymbol m_ID;
    // CGlobalSymbol m_secondaryID;
    char pad_00[48];
}; // size: 0x30

class __declspec(align(8)) CDirectPlaybackUpdateNode {
public:
    char pad_00[116];
    bool m_bFinishEarly; // 0x74
    bool m_bResetOnFinish; // 0x75
    // CUtlVector< CDirectPlaybackTagData > m_allTags;
    char pad_01[26];
}; // size: 0x90

class __declspec(align(8)) CDistanceRemainingMetricEvaluator {
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

class __declspec(align(8)) RenderSkeletonBone_t {
public:
    // CUtlString m_boneName;
    // CUtlString m_parentName;
    // matrix3x4_t m_invBindPose;
    char pad_00[64];
    SkeletonBoneBounds_t m_bbox; // 0x40
    float m_flSphereRadius; // 0x58
    char pad_01[4];
}; // size: 0x60

class __declspec(align(8)) FootPinningPoseOpFixedData_t {
public:
    // CUtlVector< FootFixedData_t > m_footInfo;
    char pad_00[24];
    float m_flBlendTime; // 0x18
    float m_flLockBreakDistance; // 0x1c
    float m_flMaxLegTwist; // 0x20
    int32_t m_nHipBoneIndex; // 0x24
    bool m_bApplyLegTwistLimits; // 0x28
    bool m_bApplyFootRotationLimits; // 0x29
    char pad_01[6];
}; // size: 0x30

class __declspec(align(4)) CSeqCmdLayer {
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

class __declspec(align(8)) CParticleCollectionFloatInput {
public:
    char pad_00[368];
}; // size: 0x170

class __declspec(align(8)) ModelBoneFlexDriverControl_t {
public:
    ModelBoneFlexComponent_t m_nBoneComponent; // 0x0
    // CUtlString m_flexController;
    char pad_00[12];
    uint32_t m_flexControllerToken; // 0x10
    float m_flMin; // 0x14
    float m_flMax; // 0x18
    char pad_01[4];
}; // size: 0x20

class __declspec(align(4)) PulseDocNodeID_t {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

class __declspec(align(16)) CTwistConstraint {
public:
    char pad_00[96];
    bool m_bInverse; // 0x60
    // Quaternion m_qParentBindRotation;
    // Quaternion m_qChildBindRotation;
    char pad_01[47];
}; // size: 0x90

class __declspec(align(16)) CAnimationGraphVisualizerAxis {
public:
    // CTransform m_xWsTransform;
    char pad_00[96];
    float m_flAxisSize; // 0x60
    char pad_01[12];
}; // size: 0x70

/// CNmFloatCurveNode::CDefinition
class __declspec(align(8)) CNmFloatCurveNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    // CPiecewiseCurve m_curve;
    char pad_01[70];
}; // size: 0x58

class __declspec(align(8)) VPhysics2ShapeDef_t {
public:
    // CUtlVector< RnSphereDesc_t > m_spheres;
    // CUtlVector< RnCapsuleDesc_t > m_capsules;
    // CUtlVector< RnHullDesc_t > m_hulls;
    // CUtlVector< RnMeshDesc_t > m_meshes;
    // CUtlVector< uint16 > m_CollisionAttributeIndices;
    char pad_00[120];
}; // size: 0x78

class __declspec(align(2)) PulseRuntimeConstantIndex_t {
public:
    int16_t m_Value; // 0x0
}; // size: 0x2

class __declspec(align(8)) CAnimSkeleton {
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
}; // size: 0xd0

class __declspec(align(8)) CRenderMesh {
public:
    // CUtlLeanVectorFixedGrowable< CSceneObjectData, 1 > m_sceneObjects;
    // CUtlLeanVector< CBaseConstraint* > m_constraints;
    char pad_00[200];
    CRenderSkeleton m_skeleton; // 0xc8
    char pad_01[188];
    bool m_bUseUV2ForCharting; // 0x1d4
    bool m_bEmbeddedMapMesh; // 0x1d5
    // DynamicMeshDeformParams_t m_meshDeformParams;
    char pad_02[48];
    CRenderGroom* m_pGroomData; // 0x208
}; // size: 0x210

class __declspec(align(8)) CFlexDesc {
public:
    // CUtlString m_szFacs;
    char pad_00[8];
}; // size: 0x8

/// CNmTwoBoneIKNode::CDefinition
class __declspec(align(8)) CNmTwoBoneIKNode__CDefinition {
public:
    // CGlobalSymbol m_effectorBoneID;
    char pad_00[32];
    int16_t m_nEffectorTargetNodeIdx; // 0x20
    int16_t m_nEnabledNodeIdx; // 0x22
    float m_flBlendTimeSeconds; // 0x24
    NmIKBlendMode_t m_blendMode; // 0x28
    bool m_bIsTargetInWorldSpace; // 0x29
    float m_flReferencePoseTwistWeight; // 0x2c
}; // size: 0x30

class __declspec(align(8)) CMotionNodeSequence {
public:
    // CUtlVector< TagSpan_t > m_tags;
    // HSequence m_hSequence;
    char pad_00[68];
    float m_flPlaybackSpeed; // 0x44
}; // size: 0x48

/// CNmFloatRangeComparisonNode::CDefinition
class __declspec(align(8)) CNmFloatRangeComparisonNode__CDefinition {
public:
    // Range_t m_range;
    char pad_00[24];
    int16_t m_nInputValueNodeIdx; // 0x18
    bool m_bIsInclusiveCheck; // 0x1a
    char pad_01[5];
}; // size: 0x20

class __declspec(align(8)) SkeletonDemoDb_t {
public:
    // CUtlVector< SkeletonAnimCapture_t* > m_AnimCaptures;
    // CUtlVector< SkeletonAnimCapture_t::Camera_t > m_CameraTrack;
    char pad_00[48];
    float m_flRecordingTime; // 0x30
    char pad_01[4];
}; // size: 0x38

class __declspec(align(8)) CFlexController {
public:
    // CUtlString m_szName;
    // CUtlString m_szType;
    char pad_00[16];
    float min; // 0x10
    float max; // 0x14
}; // size: 0x18

class __declspec(align(8)) CSeqS1SeqDesc {
public:
    // CBufferString m_sName;
    // CSeqSeqDescFlag m_flags;
    // CSeqMultiFetch m_fetch;
    char pad_00[144];
    int32_t m_nLocalWeightlist; // 0x90
    // CUtlVector< CSeqAutoLayer > m_autoLayerArray;
    // CUtlVector< CSeqIKLock > m_IKLockArray;
    // CSeqTransition m_transition;
    // KeyValues3 m_SequenceKeys;
    // CBufferString m_LegacyKeyValueText;
    // CUtlVector< CAnimActivity > m_activityArray;
    // CUtlVector< CFootMotion > m_footMotion;
    char pad_01[140];
}; // size: 0x120

/// CNmReferencePoseNode::CDefinition
class __declspec(align(8)) CNmReferencePoseNode__CDefinition {
public:
    char pad_00[16];
}; // size: 0x10

class __declspec(align(8)) CMotionMatchingUpdateNode {
public:
    // CMotionDataSet m_dataSet;
    // CUtlVector< CSmartPtr< CMotionMetricEvaluator > > m_metrics;
    // CUtlVector< float32 > m_weights;
    char pad_00[224];
    bool m_bSearchEveryTick; // 0xe0
    float m_flSearchInterval; // 0xe4
    bool m_bSearchWhenClipEnds; // 0xe8
    bool m_bSearchWhenGoalChanges; // 0xe9
    // CBlendCurve m_blendCurve;
    char pad_01[8];
    float m_flSampleRate; // 0xf4
    float m_flBlendTime; // 0xf8
    bool m_bLockClipWhenWaning; // 0xfc
    float m_flSelectionThreshold; // 0x100
    float m_flReselectionTimeWindow; // 0x104
    bool m_bEnableRotationCorrection; // 0x108
    bool m_bGoalAssist; // 0x109
    float m_flGoalAssistDistance; // 0x10c
    float m_flGoalAssistTolerance; // 0x110
    // CAnimInputDamping m_distanceScale_Damping;
    char pad_02[28];
    float m_flDistanceScale_OuterRadius; // 0x130
    float m_flDistanceScale_InnerRadius; // 0x134
    float m_flDistanceScale_MaxScale; // 0x138
    float m_flDistanceScale_MinScale; // 0x13c
    bool m_bEnableDistanceScaling; // 0x140
    char pad_03[7];
}; // size: 0x148

class __declspec(align(8)) CFootTrajectory {
public:
    // Vector m_vOffset;
    char pad_00[20];
    float m_flRotationOffset; // 0x14
    float m_flProgression; // 0x18
    char pad_01[4];
}; // size: 0x20

class __declspec(align(16)) CAnimationGraphVisualizerText {
public:
    // VectorAligned m_vWsPosition;
    // Color m_Color;
    // CUtlString m_Text;
    char pad_00[96];
}; // size: 0x60

class __declspec(align(4)) NmSyncTrackTimeRange_t {
public:
    // NmSyncTrackTime_t m_startTime;
    // NmSyncTrackTime_t m_endTime;
    char pad_00[16];
}; // size: 0x10

class __declspec(align(8)) CBindPoseUpdateNode {
public:
    char pad_00[96];
}; // size: 0x60

class __declspec(align(8)) CAnimationGraphVisualizerPrimitiveBase {
public:
    char pad_00[8];
    CAnimationGraphVisualizerPrimitiveType m_Type; // 0x8
    // AnimNodeID[11] m_OwningAnimNodePaths;
    char pad_01[44];
    int32_t m_nOwningAnimNodePathCount; // 0x38
    char pad_02[4];
}; // size: 0x40

/// CNmValueNode::CDefinition
class __declspec(align(1)) CNmValueNode__CDefinition {
public:
    char pad_00[16];
}; // size: 0x10

/// CNmSpeedScaleBaseNode::CDefinition
class __declspec(align(8)) CNmSpeedScaleBaseNode__CDefinition {
public:
    char pad_00[24];
    int16_t m_nInputValueNodeIdx; // 0x18
    float m_flDefaultInputValue; // 0x1c
}; // size: 0x20

class __declspec(align(8)) CNmOverlayBlendTask {
public:
    char pad_00[224];
}; // size: 0xe0

class __declspec(align(8)) CToggleComponentActionUpdater {
public:
    // AnimComponentID m_componentID;
    char pad_00[28];
    bool m_bSetEnabled; // 0x1c
    char pad_01[3];
}; // size: 0x20

class __declspec(align(16)) CNmClip {
public:
    // CStrongHandle< InfoForResourceTypeCNmSkeleton > m_skeleton;
    char pad_00[8];
    uint32_t m_nNumFrames; // 0x8
    float m_flDuration; // 0xc
    // CUtlBinaryBlock m_compressedPoseData;
    // CUtlVector< NmCompressionSettings_t > m_trackCompressionSettings;
    // CUtlVector< uint32 > m_compressedPoseOffsets;
    // CUtlVector< CGlobalSymbol > m_floatCurveIDs;
    // CUtlVector< NmFloatCurveCompressionSettings_t > m_floatCurveDefs;
    // CUtlVector< uint16 > m_compressedFloatCurveData;
    // CUtlVector< uint32 > m_compressedFloatCurveOffsets;
    // CUtlVectorFixedGrowable< CNmClip*, 1 > m_secondaryAnimations;
    // CNmSyncTrack m_syncTrack;
    // CNmRootMotionData m_rootMotion;
    char pad_01[496];
    bool m_bIsAdditive; // 0x200
    // CUtlVector< CNmClip::ModelSpaceSamplingChainLink_t > m_modelSpaceSamplingChain;
    // CUtlVector< int32 > m_modelSpaceBoneSamplingIndices;
    char pad_02[63];
}; // size: 0x240

class __declspec(align(4)) NmSyncTrackTime_t {
public:
    int32_t m_nEventIdx; // 0x0
    // NmPercent_t m_percentageThrough;
    char pad_00[4];
}; // size: 0x8

class __declspec(align(8)) CAnimationGroup {
public:
    char pad_00[16];
    uint32_t m_nFlags; // 0x10
    // CBufferString m_name;
    // CUtlVector< CStrongHandle< InfoForResourceTypeCAnimData > > m_localHAnimArray_Handle;
    // CUtlVector< CStrongHandle< InfoForResourceTypeCAnimationGroup > > m_includedGroupArray_Handle;
    // CStrongHandle< InfoForResourceTypeCSequenceGroupData > m_directHSeqGroup_Handle;
    char pad_01[128];
    CAnimKeyData m_decodeKey; // 0x98
    // CUtlVector< CBufferString > m_szScripts;
    // CUtlVector< CStrongHandleVoid > m_AdditionalExtRefs;
    char pad_02[56];
}; // size: 0x148

class __declspec(align(8)) CTurnHelperUpdateNode {
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

class __declspec(align(8)) CAudioAnimTag {
public:
    // CUtlString m_clipName;
    // CUtlString m_attachmentName;
    char pad_00[104];
    float m_flVolume; // 0x68
    bool m_bStopWhenTagEnds; // 0x6c
    bool m_bStopWhenGraphEnds; // 0x6d
    bool m_bPlayOnServer; // 0x6e
    bool m_bPlayOnClient; // 0x6f
}; // size: 0x70

class __declspec(align(8)) NmBoneMaskSetDefinition_t {
public:
    // CGlobalSymbol m_ID;
    // CNmBoneWeightList m_primaryWeightList;
    // CUtlLeanVector< CNmBoneWeightList > m_secondaryWeightLists;
    char pad_00[296];
}; // size: 0x128

class __declspec(align(8)) CPhysSurfacePropertiesSoundNames {
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
}; // size: 0x60

class __declspec(align(8)) CSeqMultiFetch {
public:
    // CSeqMultiFetchFlag m_flags;
    // CUtlVector< int16 > m_localReferenceArray;
    char pad_00[32];
    int32_t m_nGroupSize[2]; // 0x20
    int32_t m_nLocalPose[2]; // 0x28
    // CUtlVector< float32 > m_poseKeyArray0;
    // CUtlVector< float32 > m_poseKeyArray1;
    char pad_01[48];
    int32_t m_nLocalCyclePoseParameter; // 0x60
    bool m_bCalculatePoseParameters; // 0x64
    bool m_bFixedBlendWeight; // 0x65
    float m_flFixedBlendWeightVals[2]; // 0x68
}; // size: 0x70

/// CBoneConstraintPoseSpaceBone::Input_t
class __declspec(align(1)) CBoneConstraintPoseSpaceBone__Input_t {
public:
    // Vector m_inputValue;
    // CUtlVector< CTransform > m_outputTransformList;
    char pad_00[40];
}; // size: 0x28

class __declspec(align(8)) CMovementHandshakeAnimTag {
public:
    char pad_00[88];
}; // size: 0x58

class __declspec(align(2)) PulseRuntimeBlackboardReferenceIndex_t {
public:
    int16_t m_Value; // 0x0
}; // size: 0x2

class __declspec(align(1)) CTransitionUpdateData {
public:
    uint8_t m_srcStateIndex; // 0x0
    uint8_t m_destStateIndex; // 0x1
    // bitfield:7 m_nHandshakeMaskToDisableFirst;
    // bitfield:1 m_bDisabled;
    char pad_00[1];
}; // size: 0x3

/// CNmDurationScaleNode::CDefinition
class __declspec(align(8)) CNmDurationScaleNode__CDefinition {
public:
    char pad_00[32];
}; // size: 0x20

class __declspec(align(8)) CAnimUserDifference {
public:
    // CBufferString m_name;
    char pad_00[16];
    int32_t m_nType; // 0x10
    char pad_01[4];
}; // size: 0x18

/// CNmClip::ModelSpaceSamplingChainLink_t
class __declspec(align(4)) CNmClip__ModelSpaceSamplingChainLink_t {
public:
    int32_t m_nBoneIdx; // 0x0
    int32_t m_nParentBoneIdx; // 0x4
    int32_t m_nParentChainLinkIdx; // 0x8
}; // size: 0xc

class __declspec(align(16)) CAnimationGraphVisualizerSphere {
public:
    // VectorAligned m_vWsPosition;
    char pad_00[80];
    float m_flRadius; // 0x50
    // Color m_Color;
    char pad_01[12];
}; // size: 0x60

/// CNmGraphNode::CDefinition
class __declspec(align(2)) CNmGraphNode__CDefinition {
public:
    char pad_00[8];
    int16_t m_nNodeIdx; // 0x8
    char pad_01[6];
}; // size: 0x10

class __declspec(align(4)) RnSoftbodyCapsule_t {
public:
    // Vector[2] m_vCenter;
    char pad_00[24];
    float m_flRadius; // 0x18
    uint16_t m_nParticle[2]; // 0x1c
}; // size: 0x20

class __declspec(align(4)) CBlendCurve {
public:
    float m_flControlPoint1; // 0x0
    float m_flControlPoint2; // 0x4
}; // size: 0x8

/// CNmBlend2DNode::CDefinition
class __declspec(align(8)) CNmBlend2DNode__CDefinition {
public:
    // CUtlVectorFixedGrowable< int16, 5 > m_sourceNodeIndices;
    char pad_00[56];
    int16_t m_nInputParameterNodeIdx0; // 0x38
    int16_t m_nInputParameterNodeIdx1; // 0x3a
    // CUtlVectorFixedGrowable< Vector2D, 10 > m_values;
    // CUtlVectorFixedGrowable< uint8, 30 > m_indices;
    // CUtlVectorFixedGrowable< uint8, 10 > m_hullIndices;
    char pad_01[204];
    bool m_bAllowLooping; // 0x108
    char pad_02[7];
}; // size: 0x110

class __declspec(align(1)) CAnimDesc_Flag {
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

class __declspec(align(8)) CClothSettingsAnimTag {
public:
    char pad_00[88];
    float m_flStiffness; // 0x58
    float m_flEaseIn; // 0x5c
    float m_flEaseOut; // 0x60
    // CUtlString m_nVertexSet;
    char pad_01[12];
}; // size: 0x70

class __declspec(align(8)) CMorphConstraint {
public:
    // CUtlString m_sTargetMorph;
    char pad_00[104];
    int32_t m_nSlaveChannel; // 0x68
    float m_flMin; // 0x6c
    float m_flMax; // 0x70
    char pad_01[12];
}; // size: 0x80

/// CNmAndNode::CDefinition
class __declspec(align(8)) CNmAndNode__CDefinition {
public:
    // CUtlLeanVectorFixedGrowable< int16, 4 > m_conditionNodeIndices;
    char pad_00[32];
}; // size: 0x20

class __declspec(align(8)) CMorphSetData {
public:
    char pad_00[16];
    int32_t m_nWidth; // 0x10
    int32_t m_nHeight; // 0x14
    // CUtlVector< MorphBundleType_t > m_bundleTypes;
    // CUtlVector< CMorphData > m_morphDatas;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureAtlas;
    // CUtlVector< CFlexDesc > m_FlexDesc;
    // CUtlVector< CFlexController > m_FlexControllers;
    // CUtlVector< CFlexRule > m_FlexRules;
    char pad_01[128];
}; // size: 0x98

class __declspec(align(4)) CMeshletDescriptor {
public:
    PackedAABB_t m_PackedAABB; // 0x0
    // CDrawCullingData m_CullingData;
    char pad_00[4];
    uint32_t m_nVertexOffset; // 0xc
    uint32_t m_nTriangleOffset; // 0x10
    uint8_t m_nVertexCount; // 0x14
    uint8_t m_nTriangleCount; // 0x15
    char pad_01[2];
}; // size: 0x18

/// CNmNotNode::CDefinition
class __declspec(align(8)) CNmNotNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    char pad_01[6];
}; // size: 0x18

class __declspec(align(8)) CNmEntityAttributeIntEvent {
public:
    char pad_00[56];
    int32_t m_nIntValue; // 0x38
    char pad_01[4];
}; // size: 0x40

/// CNmParameterizedBlendNode::Parameterization_t
class __declspec(align(8)) CNmParameterizedBlendNode__Parameterization_t {
public:
    // CUtlLeanVectorFixedGrowable< CNmParameterizedBlendNode::BlendRange_t, 5 > m_blendRanges;
    // Range_t m_parameterRange;
    char pad_00[80];
}; // size: 0x50

class __declspec(align(8)) CParticleCollectionRendererFloatInput {
public:
    char pad_00[368];
}; // size: 0x170

class __declspec(align(8)) CRenderBufferBinding {
public:
    uint64_t m_hBuffer; // 0x0
    char pad_00[8];
    uint32_t m_nBindOffsetBytes; // 0x10
    char pad_01[12];
}; // size: 0x20

class __declspec(align(8)) CBonePositionMetricEvaluator {
public:
    char pad_00[80];
    int32_t m_nBoneIndex; // 0x50
    char pad_01[4];
}; // size: 0x58

class __declspec(align(8)) CPulse_DomainValue {
public:
    PulseDomainValueType_t m_nType; // 0x0
    // CGlobalSymbolCaseSensitive m_Value;
    // CPulseValueFullType m_RequiredRuntimeType;
    char pad_00[44];
}; // size: 0x30

/// SkeletonAnimCapture_t::FrameStamp_t
class __declspec(align(4)) SkeletonAnimCapture_t__FrameStamp_t {
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

/// CNmFixedWeightBoneMaskNode::CDefinition
class __declspec(align(8)) CNmFixedWeightBoneMaskNode__CDefinition {
public:
    char pad_00[16];
    float m_flBoneWeight; // 0x10
    char pad_01[4];
}; // size: 0x18

class __declspec(align(8)) CSetParameterActionUpdater {
public:
    // CAnimParamHandle m_hParam;
    // CAnimVariant m_value;
    char pad_00[48];
}; // size: 0x30

class __declspec(align(4)) CAnimUpdateNodeBase {
public:
    // CAnimNodePath m_nodePath;
    char pad_00[72];
    AnimNodeNetworkMode m_networkMode; // 0x48
    // CUtlString m_name;
    char pad_01[12];
}; // size: 0x58

/// CNmSkeleton::SecondarySkeleton_t
class __declspec(align(8)) CNmSkeleton__SecondarySkeleton_t {
public:
    // CGlobalSymbol m_attachToBoneID;
    // CStrongHandle< InfoForResourceTypeCNmSkeleton > m_skeleton;
    char pad_00[16];
}; // size: 0x10

class __declspec(align(8)) CFutureVelocityMetricEvaluator {
public:
    char pad_00[80];
    float m_flDistance; // 0x50
    float m_flStoppingDistance; // 0x54
    float m_flTargetSpeed; // 0x58
    VelocityMetricMode m_eMode; // 0x5c
    char pad_01[3];
}; // size: 0x60

class __declspec(align(4)) CMotionMetricEvaluator {
public:
    // CUtlVector< float32 > m_means;
    // CUtlVector< float32 > m_standardDeviations;
    char pad_00[72];
    float m_flWeight; // 0x48
    int32_t m_nDimensionStartIndex; // 0x4c
}; // size: 0x50

class __declspec(align(8)) CVirtualAnimParameter {
public:
    // CUtlString m_expressionString;
    char pad_00[120];
    AnimParamType_t m_eParamType; // 0x78
    char pad_01[7];
}; // size: 0x80

class __declspec(align(4)) CFootCycleDefinition {
public:
    // Vector m_vStancePositionMS;
    // Vector m_vMidpointPositionMS;
    char pad_00[24];
    float m_flStanceDirectionMS; // 0x18
    // Vector m_vToStrideStartPos;
    // CAnimCycle m_stanceCycle;
    // CFootCycle m_footLiftCycle;
    // CFootCycle m_footOffCycle;
    // CFootCycle m_footStrikeCycle;
    // CFootCycle m_footLandCycle;
    char pad_01[32];
}; // size: 0x3c

class __declspec(align(4)) PulseRuntimeOutputIndex_t {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

class __declspec(align(16)) CConstraintSlave {
public:
    // Quaternion m_qBaseOrientation;
    // Vector m_vBasePosition;
    char pad_00[28];
    uint32_t m_nBoneHash; // 0x1c
    float m_flWeight; // 0x20
    // CUtlString m_sName;
    char pad_01[44];
}; // size: 0x50

class __declspec(align(4)) RnSoftbodyParticle_t {
public:
    float m_flMassInv; // 0x0
}; // size: 0x4

class __declspec(align(16)) ChainToSolveData_t {
public:
    int32_t m_nChainIndex; // 0x0
    IKSolverSettings_t m_SolverSettings; // 0x4
    IKTargetSettings_t m_TargetSettings; // 0x10
    SolveIKChainAnimNodeDebugSetting m_DebugSetting; // 0x38
    float m_flDebugNormalizedValue; // 0x3c
    // VectorAligned m_vDebugOffset;
    char pad_00[16];
}; // size: 0x50

class __declspec(align(8)) CHitBoxSet {
public:
    // CUtlString m_name;
    char pad_00[8];
    uint32_t m_nNameHash; // 0x8
    // CUtlVector< CHitBox > m_HitBoxes;
    // CUtlString m_SourceFilename;
    char pad_01[36];
}; // size: 0x30

class __declspec(align(4)) CNmIKBody {
public:
    float m_flMass; // 0x0
    // Vector m_vLocalMassCenter;
    // Vector m_vRadius;
    char pad_00[24];
    float m_flResistance; // 0x1c
}; // size: 0x20

class __declspec(align(8)) CAnimInputDamping {
public:
    char pad_00[8];
    DampingSpeedFunction m_speedFunction; // 0x8
    float m_fSpeedScale; // 0xc
    float m_fFallingSpeedScale; // 0x10
    char pad_01[4];
}; // size: 0x18

class __declspec(align(8)) CSlopeComponentUpdater {
public:
    char pad_00[52];
    float m_flTraceDistance; // 0x34
    // CAnimParamHandle m_hSlopeAngle;
    // CAnimParamHandle m_hSlopeAngleFront;
    // CAnimParamHandle m_hSlopeAngleSide;
    // CAnimParamHandle m_hSlopeHeading;
    // CAnimParamHandle m_hSlopeNormal;
    // CAnimParamHandle m_hSlopeNormal_WorldSpace;
    char pad_01[16];
}; // size: 0x48

class __declspec(align(8)) CAnimFrameSegment {
public:
    int32_t m_nUniqueFrameIndex; // 0x0
    uint32_t m_nLocalElementMasks; // 0x4
    int32_t m_nLocalChannel; // 0x8
    // CUtlBinaryBlock m_container;
    char pad_00[20];
}; // size: 0x20

class __declspec(align(4)) AnimTagID {
public:
    uint32_t m_id; // 0x0
}; // size: 0x4

class __declspec(align(8)) CHandshakeAnimTagBase {
public:
    char pad_00[80];
    bool m_bIsDisableTag; // 0x50
    char pad_01[7];
}; // size: 0x58

class __declspec(align(8)) CEnumAnimParameter {
public:
    char pad_00[136];
    uint8_t m_defaultValue; // 0x88
    // CUtlVector< CUtlString > m_enumOptions;
    // CUtlVector< uint64 > m_vecEnumReferenced;
    char pad_01[79];
}; // size: 0xd8

class __declspec(align(8)) CFootstepLandedAnimTag {
public:
    char pad_00[88];
    FootstepLandedFootSoundType_t m_FootstepType; // 0x58
    // CUtlString m_OverrideSoundName;
    // CUtlString m_DebugAnimSourceString;
    // CUtlString m_BoneName;
    char pad_01[28];
    FootstepJumpPhase_t m_footstepJumpPhase; // 0x78
    char pad_02[7];
}; // size: 0x80

class __declspec(align(8)) CStateNodeStateData {
public:
    // CAnimUpdateNodeRef m_pChild;
    // bitfield:1 m_bExclusiveRootMotion;
    // bitfield:1 m_bExclusiveRootMotionFirstFrame;
    char pad_00[24];
}; // size: 0x18

class __declspec(align(8)) CNmLegacyEvent {
public:
    // CUtlString m_animEventClassName;
    // KeyValues3 m_KV;
    char pad_00[88];
}; // size: 0x58

/// CSceneObjectData::RTProxyDrawDescriptor_t
class __declspec(align(8)) CSceneObjectData__RTProxyDrawDescriptor_t {
public:
    // CMaterialDrawDescriptor m_drawDesc;
    // matrix3x4_t m_mWorldFromLocal;
    char pad_00[312];
    VertexAlbedoFormat_t m_nVertexAlbedoFormat; // 0x138
    int8_t m_nVertexAlbedoVB; // 0x139
    uint16_t m_nVertexAlbedoOffset; // 0x13a
    uint16_t m_nVertexAlbedoStride; // 0x13c
    char pad_01[2];
}; // size: 0x140

class __declspec(align(8)) CFootStride {
public:
    CFootCycleDefinition m_definition; // 0x0
    CFootTrajectories m_trajectories; // 0x40
}; // size: 0x58

class __declspec(align(4)) CNmBitFlags {
public:
    uint32_t m_flags; // 0x0
}; // size: 0x4

/// CNmConstBoolNode::CDefinition
class __declspec(align(8)) CNmConstBoolNode__CDefinition {
public:
    char pad_00[16];
    bool m_bValue; // 0x10
    char pad_01[7];
}; // size: 0x18

class __declspec(align(8)) CPerParticleFloatInput {
public:
    char pad_00[368];
}; // size: 0x170

/// CNmCachedTargetNode::CDefinition
class __declspec(align(8)) CNmCachedTargetNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    NmCachedValueMode_t m_mode; // 0x14
}; // size: 0x18

class __declspec(align(8)) CAnimDecoder {
public:
    // CBufferString m_szName;
    char pad_00[16];
    int32_t m_nVersion; // 0x10
    int32_t m_nType; // 0x14
}; // size: 0x18

class __declspec(align(8)) PhysFeModelDesc_t {
public:
    // CUtlVector< uint32 > m_CtrlHash;
    // CUtlVector< CUtlString > m_CtrlName;
    char pad_00[48];
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
    uint16_t m_nTriCount1; // 0x528
    uint16_t m_nTriCount2; // 0x52a
    uint8_t m_nReservedUint8; // 0x52c
    uint8_t m_nExtraPressureIterations; // 0x52d
    uint8_t m_nExtraGoalIterations; // 0x52e
    uint8_t m_nExtraIterations; // 0x52f
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

class __declspec(align(8)) CDemoSettingsComponentUpdater {
public:
    // CAnimDemoCaptureSettings m_settings;
    char pad_00[176];
}; // size: 0xb0

class __declspec(align(1)) CAnimEnum {
public:
    uint8_t m_value; // 0x0
}; // size: 0x1

class __declspec(align(8)) CAddUpdateNode {
public:
    char pad_00[148];
    BinaryNodeChildOption m_footMotionTiming; // 0x94
    bool m_bApplyToFootMotion; // 0x98
    bool m_bApplyChannelsSeparately; // 0x99
    bool m_bUseModelSpace; // 0x9a
    bool m_bApplyScale; // 0x9b
    char pad_01[4];
}; // size: 0xa0

class __declspec(align(4)) PARTICLE_EHANDLE__ {
public:
    int32_t unused; // 0x0
}; // size: 0x4

class __declspec(align(8)) CPulse_Variable {
public:
    // PulseSymbol_t m_Name;
    // CUtlString m_Description;
    // CPulseValueFullType m_Type;
    // KeyValues3 m_DefaultValue;
    char pad_00[68];
    PulseVariableKeysSource_t m_nKeysSource; // 0x44
    bool m_bIsPublicBlackboardVariable; // 0x48
    bool m_bIsObservable; // 0x49
    PulseDocNodeID_t m_nEditorNodeID; // 0x4c
}; // size: 0x50

class __declspec(align(16)) NmCompressionSettings_t {
public:
    // NmCompressionSettings_t::QuantizationRange_t m_translationRangeX;
    // NmCompressionSettings_t::QuantizationRange_t m_translationRangeY;
    // NmCompressionSettings_t::QuantizationRange_t m_translationRangeZ;
    // NmCompressionSettings_t::QuantizationRange_t m_scaleRange;
    // Quaternion m_constantRotation;
    char pad_00[48];
    bool m_bIsRotationStatic; // 0x30
    bool m_bIsTranslationStatic; // 0x31
    bool m_bIsScaleStatic; // 0x32
    char pad_01[13];
}; // size: 0x40

class __declspec(align(8)) CFutureFacingMetricEvaluator {
public:
    char pad_00[80];
    float m_flDistance; // 0x50
    float m_flTime; // 0x54
}; // size: 0x58

class __declspec(align(16)) CNmIKJoint {
public:
    int32_t m_nParentIndex; // 0x0
    int32_t m_nBodyIndex; // 0x4
    // CTransform m_xLocalFrame;
    char pad_00[40];
    float m_flSwingLimit; // 0x30
    float m_flMinTwistLimit; // 0x34
    float m_flMaxTwistLimit; // 0x38
    float m_flWeight; // 0x3c
}; // size: 0x40

class __declspec(align(1)) IParticleEffect {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(8)) CModelConfigElement_SetMaterialGroup {
public:
    // CUtlString m_MaterialGroupName;
    char pad_00[80];
}; // size: 0x50

class __declspec(align(8)) CMovementComponentUpdater {
public:
    // CUtlVector< CSmartPtr< CAnimMotorUpdaterBase > > m_motors;
    char pad_00[72];
    CAnimInputDamping m_facingDamping; // 0x48
    char pad_01[8];
    int32_t m_nDefaultMotorIndex; // 0x68
    float m_flDefaultRunSpeed; // 0x6c
    bool m_bMoveVarsDisabled; // 0x70
    bool m_bNetworkPath; // 0x71
    bool m_bNetworkFacing; // 0x72
    // CAnimParamHandle[34] m_paramHandles;
    char pad_02[69];
}; // size: 0xb8

class __declspec(align(16)) CFollowAttachmentUpdateNode {
public:
    // FollowAttachmentSettings_t m_opFixedData;
    char pad_00[272];
}; // size: 0x110

/// CNmGraphEventConditionNode::CDefinition
class __declspec(align(8)) CNmGraphEventConditionNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx; // 0x10
    CNmBitFlags m_eventConditionRules; // 0x14
    // CUtlVectorFixedGrowable< CNmGraphEventConditionNode::Condition_t, 5 > m_conditions;
    char pad_01[104];
}; // size: 0x80

/// SkeletonAnimCapture_t::Camera_t
class __declspec(align(16)) SkeletonAnimCapture_t__Camera_t {
public:
    // CTransform m_tmCamera;
    char pad_00[32];
    float m_flTime; // 0x20
    char pad_01[12];
}; // size: 0x30

class __declspec(align(8)) AimCameraOpFixedSettings_t {
public:
    int32_t m_nChainIndex; // 0x0
    int32_t m_nCameraJointIndex; // 0x4
    int32_t m_nPelvisJointIndex; // 0x8
    int32_t m_nClavicleLeftJointIndex; // 0xc
    int32_t m_nClavicleRightJointIndex; // 0x10
    int32_t m_nDepenetrationJointIndex; // 0x14
    // CUtlVector< int32 > m_propJoints;
    char pad_00[24];
}; // size: 0x30

/// CNmFootstepEventPercentageThroughNode::CDefinition
class __declspec(align(8)) CNmFootstepEventPercentageThroughNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx; // 0x10
    NmFootPhaseCondition_t m_phaseCondition; // 0x12
    CNmBitFlags m_eventConditionRules; // 0x14
}; // size: 0x18

class __declspec(align(8)) PGDInstruction_t {
public:
    PulseInstructionCode_t m_nCode; // 0x0
    // PulseRuntimeVarIndex_t m_nVar;
    // PulseRuntimeRegisterIndex_t m_nReg0;
    // PulseRuntimeRegisterIndex_t m_nReg1;
    // PulseRuntimeRegisterIndex_t m_nReg2;
    // PulseRuntimeInvokeIndex_t m_nInvokeBindingIndex;
    char pad_00[16];
    PulseRuntimeChunkIndex_t m_nChunk; // 0x14
    int32_t m_nDestInstruction; // 0x18
    PulseRuntimeCallInfoIndex_t m_nCallInfoIndex; // 0x1c
    PulseRuntimeConstantIndex_t m_nConstIdx; // 0x20
    // PulseRuntimeDomainValueIndex_t m_nDomainValueIdx;
    char pad_01[2];
    PulseRuntimeBlackboardReferenceIndex_t m_nBlackboardReferenceIdx; // 0x24
    char pad_02[18];
}; // size: 0x38

class __declspec(align(1)) CPathAnimMotorUpdaterBase {
public:
    char pad_00[32];
    bool m_bLockToPath; // 0x20
    char pad_01[7];
}; // size: 0x28

class __declspec(align(8)) CParticleTransformInput {
public:
    char pad_00[16];
    ParticleTransformType_t m_nType; // 0x10
    // CParticleNamedValueRef m_NamedValue;
    char pad_01[68];
    bool m_bFollowNamedValue; // 0x58
    bool m_bSupportsDisabled; // 0x59
    bool m_bUseOrientation; // 0x5a
    int32_t m_nControlPoint; // 0x5c
    int32_t m_nControlPointRangeMax; // 0x60
    float m_flEndCPGrowthTime; // 0x64
}; // size: 0x68

class __declspec(align(8)) RnSphereDesc_t {
public:
    // SphereBase_t< float32 > m_Sphere;
    char pad_00[40];
}; // size: 0x28

class __declspec(align(8)) CNmFloatCurveEvent {
public:
    // CGlobalSymbol m_ID;
    // CPiecewiseCurve m_curve;
    char pad_00[104];
}; // size: 0x68

class __declspec(align(8)) CNmIKRig {
public:
    // CStrongHandle< InfoForResourceTypeCNmSkeleton > m_skeleton;
    // CUtlVector< CNmIKBody > m_vecBodies;
    // CUtlVector< CNmIKJoint > m_vecJoints;
    char pad_00[56];
}; // size: 0x38

class __declspec(align(8)) CNmTransitionEvent {
public:
    char pad_00[32];
    NmTransitionRule_t m_rule; // 0x20
    // CGlobalSymbol m_ID;
    char pad_01[15];
}; // size: 0x30

class __declspec(align(16)) CAnimReplayFrame {
public:
    // CUtlVector< CUtlBinaryBlock > m_inputDataBlocks;
    // CUtlBinaryBlock m_instanceData;
    // CTransform m_startingLocalToWorldTransform;
    // CTransform m_localToWorldTransform;
    char pad_00[128];
    float m_timeStamp; // 0x80
    char pad_01[12];
}; // size: 0x90

/// CNmBoolValueNode::CDefinition
class __declspec(align(1)) CNmBoolValueNode__CDefinition {
public:
    char pad_00[16];
}; // size: 0x10

class __declspec(align(8)) CCurrentVelocityMetricEvaluator {
public:
    char pad_00[80];
}; // size: 0x50

class __declspec(align(8)) CModelConfigElement_SetBodygroupOnAttachedModels {
public:
    // CUtlString m_GroupName;
    char pad_00[80];
    int32_t m_nChoice; // 0x50
    char pad_01[4];
}; // size: 0x58

class __declspec(align(8)) CSequenceTagSpans {
public:
    // CGlobalSymbol m_sSequenceName;
    // CUtlVector< TagSpan_t > m_tags;
    char pad_00[32];
}; // size: 0x20

class __declspec(align(8)) CSpeedScaleUpdateNode {
public:
    // CAnimParamHandle m_paramIndex;
    char pad_00[120];
}; // size: 0x78

class __declspec(align(8)) MoodAnimationLayer_t {
public:
    // CUtlString m_sName;
    char pad_00[8];
    bool m_bActiveListening; // 0x8
    bool m_bActiveTalking; // 0x9
    // CUtlVector< MoodAnimation_t > m_layerAnimations;
    char pad_01[28];
    CRangeFloat m_flIntensity; // 0x28
    CRangeFloat m_flDurationScale; // 0x30
    bool m_bScaleWithInts; // 0x38
    CRangeFloat m_flNextStart; // 0x3c
    CRangeFloat m_flStartOffset; // 0x44
    CRangeFloat m_flEndOffset; // 0x4c
    float m_flFadeIn; // 0x54
    float m_flFadeOut; // 0x58
    char pad_02[4];
}; // size: 0x60

/// CBoneConstraintPoseSpaceMorph::Input_t
class __declspec(align(1)) CBoneConstraintPoseSpaceMorph__Input_t {
public:
    // Vector m_inputValue;
    // CUtlVector< float32 > m_outputWeightList;
    char pad_00[40];
}; // size: 0x28

class __declspec(align(8)) BoneDemoCaptureSettings_t {
public:
    // CUtlString m_boneName;
    char pad_00[8];
    float m_flErrorSplineRotationMax; // 0x8
    float m_flErrorSplineTranslationMax; // 0xc
    float m_flErrorSplineScaleMax; // 0x10
    float m_flErrorQuantizationRotationMax; // 0x14
    float m_flErrorQuantizationTranslationMax; // 0x18
    float m_flErrorQuantizationScaleMax; // 0x1c
}; // size: 0x20

class __declspec(align(8)) CAnimParameterManagerUpdater {
public:
    // CUtlVector< CSmartPtr< CAnimParameterBase > > m_parameters;
    // CUtlHashtable< AnimParamID, int32 > m_idToIndexMap;
    // CUtlHashtable< CUtlString, int32 > m_nameToIndexMap;
    // CUtlVector< CAnimParamHandle > m_indexToHandle;
    // CUtlVector< std::pair< CAnimParamHandle, CAnimVariant > > m_autoResetParams;
    // CUtlHashtable< CAnimParamHandle, int16 > m_autoResetMap;
    char pad_00[256];
}; // size: 0x100

class __declspec(align(8)) CAnimBone {
public:
    // CBufferString m_name;
    char pad_00[16];
    int32_t m_parent; // 0x10
    // Vector m_pos;
    // QuaternionStorage m_quat;
    char pad_01[28];
    float m_scale; // 0x30
    // QuaternionStorage m_qAlignment;
    char pad_02[16];
    int32_t m_flags; // 0x44
}; // size: 0x48

class __declspec(align(16)) CLookAtUpdateNode {
public:
    char pad_00[112];
    LookAtOpFixedSettings_t m_opFixedSettings; // 0x70
    char pad_01[8];
    AnimVectorSource m_target; // 0x148
    // CAnimParamHandle m_paramIndex;
    // CAnimParamHandle m_weightParamIndex;
    char pad_02[4];
    bool m_bResetChild; // 0x150
    bool m_bLockWhenWaning; // 0x151
    char pad_03[14];
}; // size: 0x160

class __declspec(align(8)) CHitReactUpdateNode {
public:
    // HitReactFixedSettings_t m_opFixedSettings;
    // CAnimParamHandle m_triggerParam;
    // CAnimParamHandle m_hitBoneParam;
    // CAnimParamHandle m_hitOffsetParam;
    // CAnimParamHandle m_hitDirectionParam;
    // CAnimParamHandle m_hitStrengthParam;
    char pad_00[200];
    float m_flMinDelayBetweenHits; // 0xc8
    bool m_bResetChild; // 0xcc
    char pad_01[3];
}; // size: 0xd0

class __declspec(align(4)) CFlexOp {
public:
    FlexOpCode_t m_OpCode; // 0x0
    int32_t m_Data; // 0x4
}; // size: 0x8

class __declspec(align(4)) AnimScriptHandle {
public:
    uint32_t m_id; // 0x0
}; // size: 0x4

class __declspec(align(8)) CPulseGraphExecutionHistory {
public:
    PulseGraphInstanceID_t m_nInstanceID; // 0x0
    // CUtlString m_strFileName;
    // CUtlVector< PulseGraphExecutionHistoryEntry_t* > m_vecHistory;
    // CUtlOrderedMap< PulseDocNodeID_t, PulseGraphExecutionHistoryNodeDesc_t* > m_mapCellDesc;
    // CUtlOrderedMap< PulseCursorID_t, PulseGraphExecutionHistoryCursorDesc_t* > m_mapCursorDesc;
    char pad_00[116];
}; // size: 0x78

class __declspec(align(16)) CNmRootMotionData {
public:
    // CUtlVector< CTransform > m_transforms;
    char pad_00[24];
    int32_t m_nNumFrames; // 0x18
    float m_flAverageLinearVelocity; // 0x1c
    float m_flAverageAngularVelocityRadians; // 0x20
    // CTransform m_totalDelta;
    char pad_01[44];
}; // size: 0x50

class __declspec(align(8)) CAnimEventDefinition {
public:
    char pad_00[8];
    int32_t m_nFrame; // 0x8
    int32_t m_nEndFrame; // 0xc
    float m_flCycle; // 0x10
    float m_flDuration; // 0x14
    // KeyValues3 m_EventData;
    // CBufferString m_sLegacyOptions;
    // CGlobalSymbol m_sEventName;
    char pad_01[40];
}; // size: 0x40

class __declspec(align(8)) CModelConfigElement_Command {
public:
    // CUtlString m_Command;
    // KeyValues3 m_Args;
    char pad_00[96];
}; // size: 0x60

/// SkeletonAnimCapture_t::Frame_t
class __declspec(align(16)) SkeletonAnimCapture_t__Frame_t {
public:
    float m_flTime; // 0x0
    // SkeletonAnimCapture_t::FrameStamp_t m_Stamp;
    // CTransform m_Transform;
    char pad_00[60];
    bool m_bTeleport; // 0x40
    // CUtlVector< CTransform > m_CompositeBones;
    // CUtlVector< CTransform > m_SimStateBones;
    // CUtlVector< CTransform > m_FeModelAnims;
    // CUtlVector< VectorAligned > m_FeModelPos;
    // CUtlVector< float32 > m_FlexControllerWeights;
    char pad_01[127];
}; // size: 0xc0

class __declspec(align(16)) CAimMatrixUpdateNode {
public:
    char pad_00[112];
    AimMatrixOpFixedSettings_t m_opFixedSettings; // 0x70
    char pad_01[8];
    AnimVectorSource m_target; // 0x168
    // CAnimParamHandle m_paramIndex;
    // HSequence m_hSequence;
    char pad_02[8];
    bool m_bResetChild; // 0x174
    bool m_bLockWhenWaning; // 0x175
    char pad_03[10];
}; // size: 0x180

class __declspec(align(8)) CStateMachineUpdateNode {
public:
    // CAnimStateMachineUpdater m_stateMachine;
    // CUtlVector< CStateNodeStateData > m_stateData;
    // CUtlVector< CStateNodeTransitionData > m_transitionData;
    char pad_00[252];
    bool m_bBlockWaningTags; // 0xfc
    bool m_bLockStateWhenWaning; // 0xfd
    bool m_bResetWhenActivated; // 0xfe
    char pad_01[1];
}; // size: 0x100

class __declspec(align(8)) CSequenceGroupData {
public:
    // CBufferString m_sName;
    char pad_00[32];
    uint32_t m_nFlags; // 0x20
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
}; // size: 0x138

class __declspec(align(8)) ModelMeshBufferData_t {
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
    char pad_00[28];
}; // size: 0x30

class __declspec(align(8)) CStaticPoseCacheBuilder {
public:
    char pad_00[56];
}; // size: 0x38

class __declspec(align(8)) CNmSampleTask {
public:
    char pad_00[104];
}; // size: 0x68

class __declspec(align(4)) PulseCursorYieldToken_t {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

class __declspec(align(8)) PermModelData_t {
public:
    // CUtlString m_name;
    // PermModelInfo_t m_modelInfo;
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
    char pad_00[384];
    uint64_t m_nDefaultMeshGroupMask; // 0x180
    // ModelSkeletonData_t m_modelSkeleton;
    // CUtlVector< int16 > m_remappingTable;
    // CUtlVector< uint16 > m_remappingTableStarts;
    // CUtlVector< ModelBoneFlexDriver_t > m_boneFlexDrivers;
    char pad_01[240];
    CModelConfigList* m_pModelConfigList; // 0x278
    // CUtlVector< CUtlString > m_BodyGroupsHiddenInTools;
    // CUtlVector< CStrongHandle< InfoForResourceTypeCModel > > m_refAnimIncludeModels;
    // CUtlVector< PermModelDataAnimatedMaterialAttribute_t > m_AnimatedMaterialAttributes;
    // CUtlVector< ModelAnimGraph2Ref_t > m_animGraph2Refs;
    // CUtlVector< CStrongHandle< InfoForResourceTypeCNmSkeleton > > m_vecNmSkeletonRefs;
    char pad_02[120];
}; // size: 0x2f8

class __declspec(align(16)) CQuaternionAnimParameter {
public:
    // Quaternion m_defaultValue;
    char pad_00[144];
    bool m_bInterpolate; // 0x90
    char pad_01[15];
}; // size: 0xa0

class __declspec(align(8)) PulseGraphExecutionHistoryEntry_t {
public:
    // PulseCursorID_t nCursorID;
    char pad_00[4];
    PulseDocNodeID_t nEditorID; // 0x4
    float flExecTime; // 0x8
    uint32_t unFlags; // 0xc
    // PulseSymbol_t tagName;
    char pad_01[16];
}; // size: 0x20

class __declspec(align(8)) CBlendUpdateNode {
public:
    // CUtlVector< CAnimUpdateNodeRef > m_children;
    // CUtlVector< uint8 > m_sortedOrder;
    // CUtlVector< float32 > m_targetValues;
    char pad_00[172];
    AnimValueSource m_blendValueSource; // 0xac
    LinearRootMotionBlendMode_t m_eLinearRootMotionBlendMode; // 0xb0
    // CAnimParamHandle m_paramIndex;
    CAnimInputDamping m_damping; // 0xb8
    BlendKeyType m_blendKeyType; // 0xd0
    bool m_bLockBlendOnReset; // 0xd4
    bool m_bSyncCycles; // 0xd5
    bool m_bLoop; // 0xd6
    bool m_bLockWhenWaning; // 0xd7
    bool m_bIsAngle; // 0xd8
    char pad_01[7];
}; // size: 0xe0

class __declspec(align(8)) CAnimLocalHierarchy {
public:
    // CBufferString m_sBone;
    // CBufferString m_sNewParent;
    char pad_00[32];
    int32_t m_nStartFrame; // 0x20
    int32_t m_nPeakFrame; // 0x24
    int32_t m_nTailFrame; // 0x28
    int32_t m_nEndFrame; // 0x2c
}; // size: 0x30

class __declspec(align(8)) CDampedValueUpdateItem {
public:
    CAnimInputDamping m_damping; // 0x0
    // CAnimParamHandle m_hParamIn;
    // CAnimParamHandle m_hParamOut;
    char pad_00[16];
}; // size: 0x28

class __declspec(align(4)) HSequence {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

class __declspec(align(8)) CParticleVariableRef {
public:
    // CKV3MemberNameWithStorage m_variableName;
    // CPulseValueFullType m_variableType;
    char pad_00[80];
}; // size: 0x50

class __declspec(align(8)) CFootPositionMetricEvaluator {
public:
    // CUtlVector< int32 > m_footIndices;
    char pad_00[104];
    bool m_bIgnoreSlope; // 0x68
    char pad_01[7];
}; // size: 0x70

/// CNmStateNode::TimedEvent_t
class __declspec(align(8)) CNmStateNode__TimedEvent_t {
public:
    // CGlobalSymbol m_ID;
    char pad_00[8];
    float m_flTimeValueSeconds; // 0x8
    // CNmStateNode::TimedEvent_t::Comparison_t m_comparisionOperator;
    char pad_01[4];
}; // size: 0x10

/// CNmCachedVectorNode::CDefinition
class __declspec(align(8)) CNmCachedVectorNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    NmCachedValueMode_t m_mode; // 0x14
}; // size: 0x18

class __declspec(align(8)) CParentConstraint {
public:
    char pad_00[96];
}; // size: 0x60

class __declspec(align(8)) CAnimFoot {
public:
    // CUtlString m_name;
    // Vector m_vBallOffset;
    // Vector m_vHeelOffset;
    char pad_00[32];
    int32_t m_ankleBoneIndex; // 0x20
    int32_t m_toeBoneIndex; // 0x24
}; // size: 0x28

class __declspec(align(8)) CMorphRectData {
public:
    int16_t m_nXLeftDst; // 0x0
    int16_t m_nYTopDst; // 0x2
    float m_flUWidthSrc; // 0x4
    float m_flVHeightSrc; // 0x8
    // CUtlVector< CMorphBundleData > m_bundleDatas;
    char pad_00[28];
}; // size: 0x28

class __declspec(align(8)) CNmParticleEvent {
public:
    char pad_00[32];
    CNmEventRelevance_t m_relevance; // 0x20
    // CNmParticleEvent::Type_t m_type;
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hParticleSystem;
    // CUtlString m_tags;
    char pad_01[20];
    bool m_bStopImmediately; // 0x38
    bool m_bDetachFromOwner; // 0x39
    bool m_bPlayEndCap; // 0x3a
    // CUtlString m_attachmentPoint0;
    char pad_02[12];
    ParticleAttachment_t m_attachmentType0; // 0x48
    // CUtlString m_attachmentPoint1;
    char pad_03[12];
    ParticleAttachment_t m_attachmentType1; // 0x58
    // CUtlString m_config;
    // CUtlString m_effectForConfig;
    char pad_04[20];
}; // size: 0x70

class __declspec(align(8)) CPairedSequenceComponentUpdater {
public:
    char pad_00[56];
}; // size: 0x38

class __declspec(align(8)) CAnimDataChannelDesc {
public:
    // CBufferString m_szChannelClass;
    // CBufferString m_szVariableName;
    char pad_00[32];
    int32_t m_nFlags; // 0x20
    int32_t m_nType; // 0x24
    // CBufferString m_szGrouping;
    // CBufferString m_szDescription;
    // CUtlVector< CBufferString > m_szElementNameArray;
    // CUtlVector< int32 > m_nElementIndexArray;
    // CUtlVector< uint32 > m_nElementMaskArray;
    char pad_01[104];
}; // size: 0x90

class __declspec(align(4)) CPhysSurfacePropertiesVehicle {
public:
    float m_wheelDrag; // 0x0
    float m_wheelFrictionScale; // 0x4
}; // size: 0x8

/// CNmIsTargetSetNode::CDefinition
class __declspec(align(8)) CNmIsTargetSetNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    char pad_01[6];
}; // size: 0x18

class __declspec(align(8)) CLODComponentUpdater {
public:
    char pad_00[48];
    int32_t m_nServerLOD; // 0x30
    char pad_01[4];
}; // size: 0x38

class __declspec(align(8)) MoodAnimation_t {
public:
    // CModelAnimNameWithDeltas m_sName;
    char pad_00[8];
    float m_flWeight; // 0x8
    char pad_01[4];
}; // size: 0x10

/// CNmConstVectorNode::CDefinition
class __declspec(align(8)) CNmConstVectorNode__CDefinition {
public:
    // Vector m_value;
    char pad_00[32];
}; // size: 0x20

class __declspec(align(8)) CJiggleBoneUpdateNode {
public:
    char pad_00[112];
    JiggleBoneSettingsList_t m_opFixedData; // 0x70
    char pad_01[8];
}; // size: 0x90

class __declspec(align(8)) CFootMotion {
public:
    // CUtlVector< CFootStride > m_strides;
    // CUtlString m_name;
    char pad_00[32];
    bool m_bAdditive; // 0x20
    char pad_01[7];
}; // size: 0x28

class __declspec(align(8)) CModelConfigElement_RandomColor {
public:
    // CColorGradient m_Gradient;
    char pad_00[96];
}; // size: 0x60

class __declspec(align(8)) CWarpSectionAnimTag {
public:
    char pad_00[80];
    bool m_bWarpPosition; // 0x50
    bool m_bWarpOrientation; // 0x51
    char pad_01[6];
}; // size: 0x58

class __declspec(align(8)) CBoneVelocityMetricEvaluator {
public:
    char pad_00[80];
    int32_t m_nBoneIndex; // 0x50
    char pad_01[4];
}; // size: 0x58

class __declspec(align(8)) FootLockPoseOpFixedSettings {
public:
    // CUtlVector< FootFixedData_t > m_footInfo;
    char pad_00[24];
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

class __declspec(align(8)) CNmChainLookatTask {
public:
    char pad_00[88];
    int32_t m_nChainEndBoneIdx; // 0x58
    int32_t m_nNumBonesInChain; // 0x5c
    // Vector m_chainForwardDir;
    char pad_01[12];
    float m_flBlendWeight; // 0x6c
    float m_flHorizontalAngleLimitDegrees; // 0x70
    float m_flVerticalAngleLimitDegrees; // 0x74
    // Vector m_lookatTarget;
    char pad_02[12];
    bool m_bIsTargetInWorldSpace; // 0x84
    bool m_bIsRunningFromDeserializedData; // 0x85
    float m_flHorizontalAngleDegrees; // 0x88
    float m_flVerticalAngleDegrees; // 0x8c
}; // size: 0x90

/// CNmControlParameterBoolNode::CDefinition
class __declspec(align(8)) CNmControlParameterBoolNode__CDefinition {
public:
    char pad_00[16];
}; // size: 0x10

class __declspec(align(8)) CJumpHelperUpdateNode {
public:
    // CAnimParamHandle m_hTargetParam;
    // Vector m_flOriginalJumpMovement;
    char pad_00[192];
    float m_flOriginalJumpDuration; // 0xc0
    float m_flJumpStartCycle; // 0xc4
    float m_flJumpEndCycle; // 0xc8
    JumpCorrectionMethod m_eCorrectionMethod; // 0xcc
    bool m_bTranslationAxis[3]; // 0xd0
    bool m_bScaleSpeed; // 0xd3
    char pad_01[4];
}; // size: 0xd8

class __declspec(align(4)) JiggleBoneSettings_t {
public:
    int32_t m_nBoneIndex; // 0x0
    float m_flSpringStrength; // 0x4
    float m_flMaxTimeStep; // 0x8
    float m_flDamping; // 0xc
    // Vector m_vBoundsMaxLS;
    // Vector m_vBoundsMinLS;
    char pad_00[24];
    JiggleBoneSimSpace m_eSimSpace; // 0x28
}; // size: 0x2c

class __declspec(align(8)) PulseGraphExecutionHistoryNodeDesc_t {
public:
    // CBufferString strCellDesc;
    // PulseSymbol_t strBindingName;
    char pad_00[32];
}; // size: 0x20

/// CNmIDValueNode::CDefinition
class __declspec(align(1)) CNmIDValueNode__CDefinition {
public:
    char pad_00[16];
}; // size: 0x10

class __declspec(align(8)) CNmOrientationWarpEvent {
public:
    char pad_00[32];
}; // size: 0x20

class __declspec(align(8)) CFootLockUpdateNode {
public:
    char pad_00[112];
    FootLockPoseOpFixedSettings m_opFixedSettings; // 0x70
    // CUtlVector< FootFixedSettings > m_footSettings;
    char pad_01[32];
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
    char pad_02[2];
}; // size: 0x158

class __declspec(align(8)) CPathMetricEvaluator {
public:
    // CUtlVector< float32 > m_pathTimeSamples;
    char pad_00[104];
    float m_flDistance; // 0x68
    bool m_bExtrapolateMovement; // 0x6c
    float m_flMinExtrapolationSpeed; // 0x70
    char pad_01[4];
}; // size: 0x78

/// CNmSyncTrack::EventMarker_t
class __declspec(align(8)) CNmSyncTrack__EventMarker_t {
public:
    // NmPercent_t m_startTime;
    // CGlobalSymbol m_ID;
    char pad_00[16];
}; // size: 0x10

class __declspec(align(8)) FootStepTrigger {
public:
    // CUtlVector< int32 > m_tags;
    char pad_00[24];
    int32_t m_nFootIndex; // 0x18
    StepPhase m_triggerPhase; // 0x1c
}; // size: 0x20

class __declspec(align(4)) FollowAttachmentData {
public:
    int32_t m_boneIndex; // 0x0
    AttachmentHandle_t m_attachmentHandle; // 0x4
    char pad_00[3];
}; // size: 0x8

class __declspec(align(8)) CParticleRemapFloatInput {
public:
    char pad_00[368];
}; // size: 0x170

class __declspec(align(4)) CAnimMovement {
public:
    int32_t endframe; // 0x0
    int32_t motionflags; // 0x4
    float v0; // 0x8
    float v1; // 0xc
    float angle; // 0x10
    // Vector vector;
    // Vector position;
    char pad_00[24];
}; // size: 0x2c

class __declspec(align(8)) CModelConfigElement_SetBodygroup {
public:
    // CGlobalSymbol m_GroupName;
    char pad_00[80];
    int32_t m_nChoice; // 0x50
    char pad_01[4];
}; // size: 0x58

class __declspec(align(8)) CSeqPoseParamDesc {
public:
    // CBufferString m_sName;
    char pad_00[16];
    float m_flStart; // 0x10
    float m_flEnd; // 0x14
    float m_flLoop; // 0x18
    bool m_bLooping; // 0x1c
    char pad_01[3];
}; // size: 0x20

/// CNmBoneMaskValueNode::CDefinition
class __declspec(align(1)) CNmBoneMaskValueNode__CDefinition {
public:
    char pad_00[16];
}; // size: 0x10

class __declspec(align(8)) CPhysSurfaceProperties {
public:
    // CUtlString m_name;
    char pad_00[8];
    uint32_t m_nameHash; // 0x8
    uint32_t m_baseNameHash; // 0xc
    char pad_01[8];
    bool m_bHidden; // 0x18
    // CUtlString m_description;
    char pad_02[12];
    CPhysSurfacePropertiesPhysics m_physics; // 0x28
    CPhysSurfacePropertiesVehicle m_vehicleParams; // 0x40
    CPhysSurfacePropertiesSoundNames m_audioSounds; // 0x48
    CPhysSurfacePropertiesAudio m_audioParams; // 0xa8
}; // size: 0xc8

class __declspec(align(8)) CPulse_OutputConnection {
public:
    // PulseSymbol_t m_SourceOutput;
    // PulseSymbol_t m_TargetEntity;
    // PulseSymbol_t m_TargetInput;
    // PulseSymbol_t m_Param;
    char pad_00[64];
}; // size: 0x40

class __declspec(align(8)) CAnimUpdateNodeRef {
public:
    char pad_00[8];
    int32_t m_nodeIndex; // 0x8
    char pad_01[4];
}; // size: 0x10

class __declspec(align(8)) CStateMachineComponentUpdater {
public:
    // CAnimStateMachineUpdater m_stateMachine;
    char pad_00[136];
}; // size: 0x88

class __declspec(align(4)) NmPercent_t {
public:
    float m_flValue; // 0x0
}; // size: 0x4

class __declspec(align(8)) CSelectorUpdateNode {
public:
    // CUtlVector< CAnimUpdateNodeRef > m_children;
    // CUtlVector< int8 > m_tags;
    char pad_00[148];
    CBlendCurve m_blendCurve; // 0x94
    // CAnimValue< float32 > m_flBlendTime;
    // CAnimParamHandle m_hParameter;
    char pad_01[12];
    int32_t m_nTagIndex; // 0xa8
    SelectorTagBehavior_t m_eTagBehavior; // 0xac
    bool m_bResetOnChange; // 0xb0
    bool m_bLockWhenWaning; // 0xb1
    bool m_bSyncCyclesOnChange; // 0xb2
    char pad_02[5];
}; // size: 0xb8

class __declspec(align(4)) CCompressorGroup {
public:
    int32_t m_nTotalElementCount; // 0x0
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
}; // size: 0x1a0

/// CNmIDToFloatNode::CDefinition
class __declspec(align(8)) CNmIDToFloatNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    float m_defaultValue; // 0x14
    // CUtlLeanVectorFixedGrowable< CGlobalSymbol, 5 > m_IDs;
    // CUtlLeanVectorFixedGrowable< float32, 5 > m_values;
    char pad_01[80];
}; // size: 0x68

class __declspec(align(8)) CUnaryUpdateNode {
public:
    char pad_00[96];
    CAnimUpdateNodeRef m_pChildNode; // 0x60
}; // size: 0x70

class __declspec(align(8)) CAnimStateMachineUpdater {
public:
    // CUtlVector< CStateUpdateData > m_states;
    // CUtlVector< CTransitionUpdateData > m_transitions;
    char pad_00[80];
    int32_t m_startStateIndex; // 0x50
    char pad_01[4];
}; // size: 0x58

/// CNmSyncEventIndexConditionNode::CDefinition
class __declspec(align(8)) CNmSyncEventIndexConditionNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx; // 0x10
    // CNmSyncEventIndexConditionNode::TriggerMode_t m_triggerMode;
    int32_t m_syncEventIdx; // 0x14
}; // size: 0x18

/// CNmTimeConditionNode::CDefinition
class __declspec(align(8)) CNmTimeConditionNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_sourceStateNodeIdx; // 0x10
    int16_t m_nInputValueNodeIdx; // 0x12
    float m_flComparand; // 0x14
    // CNmTimeConditionNode::ComparisonType_t m_type;
    // CNmTimeConditionNode::Operator_t m_operator;
    char pad_01[8];
}; // size: 0x20

class __declspec(align(4)) DynamicMeshDeformParams_t {
public:
    float m_flTensionCompressScale; // 0x0
    float m_flTensionStretchScale; // 0x4
    bool m_bRecomputeSmoothNormalsAfterAnimation; // 0x8
    bool m_bComputeDynamicMeshTensionAfterAnimation; // 0x9
    bool m_bSmoothNormalsAcrossUvSeams; // 0xa
    bool m_bEnableEyeBulgeDeformation; // 0xb
}; // size: 0xc

class __declspec(align(8)) CEmitTagActionUpdater {
public:
    char pad_00[24];
    int32_t m_nTagIndex; // 0x18
    bool m_bIsZeroDuration; // 0x1c
    char pad_01[3];
}; // size: 0x20

class __declspec(align(8)) RnMeshDesc_t {
public:
    // RnMesh_t m_Mesh;
    char pad_00[216];
}; // size: 0xd8

class __declspec(align(16)) CNmIKEffector {
public:
    int32_t m_nBodyIndex; // 0x0
    bool m_bEnabled; // 0x4
    // Vector m_vTargetPosition;
    // Quaternion m_qTargetOrientation;
    char pad_00[40];
    float m_flWeight; // 0x30
    char pad_01[12];
}; // size: 0x40

class __declspec(align(16)) AnimationSnapshotBase_t {
public:
    float m_flRealTime; // 0x0
    // matrix3x4a_t m_rootToWorld;
    char pad_00[60];
    bool m_bBonesInWorldSpace; // 0x40
    // CUtlVector< uint32 > m_boneSetupMask;
    // CUtlVector< matrix3x4a_t > m_boneTransforms;
    // CUtlVector< float32 > m_flexControllers;
    char pad_01[76];
    AnimationSnapshotType_t m_SnapshotType; // 0x90
    bool m_bHasDecodeDump; // 0x94
    // AnimationDecodeDebugDumpElement_t m_DecodeDump;
    char pad_02[123];
}; // size: 0x110

class __declspec(align(8)) CPulse_PublicOutput {
public:
    // PulseSymbol_t m_Name;
    // CUtlString m_Description;
    // CUtlLeanVector< CPulseRuntimeMethodArg > m_Args;
    char pad_00[40];
}; // size: 0x28

class __declspec(align(8)) CNmRootMotionEvent {
public:
    char pad_00[32];
    float m_flBlendTimeSeconds; // 0x20
    char pad_01[4];
}; // size: 0x28

/// CNmIDSwitchNode::CDefinition
class __declspec(align(8)) CNmIDSwitchNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nSwitchValueNodeIdx; // 0x10
    int16_t m_nTrueValueNodeIdx; // 0x12
    int16_t m_nFalseValueNodeIdx; // 0x14
    // CGlobalSymbol m_falseValue;
    // CGlobalSymbol m_trueValue;
    char pad_01[18];
}; // size: 0x28

class __declspec(align(4)) FollowTargetOpFixedSettings_t {
public:
    int32_t m_boneIndex; // 0x0
    bool m_bBoneTarget; // 0x4
    int32_t m_boneTargetIndex; // 0x8
    bool m_bWorldCoodinateTarget; // 0xc
    bool m_bMatchTargetOrientation; // 0xd
    char pad_00[2];
}; // size: 0x10

class __declspec(align(4)) CCycleBase {
public:
    float m_flCycle; // 0x0
}; // size: 0x4

class __declspec(align(8)) CParticleAnimTag {
public:
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hParticleSystem;
    // CUtlString m_particleSystemName;
    // CUtlString m_configName;
    char pad_00[112];
    bool m_bDetachFromOwner; // 0x70
    bool m_bAggregate; // 0x71
    bool m_bStopWhenTagEnds; // 0x72
    bool m_bTagEndStopIsInstant; // 0x73
    // CUtlString m_attachmentName;
    char pad_01[12];
    ParticleAttachment_t m_attachmentType; // 0x80
    // CUtlString m_attachmentCP1Name;
    char pad_02[12];
    ParticleAttachment_t m_attachmentCP1Type; // 0x90
    char pad_03[4];
}; // size: 0x98

class __declspec(align(1)) CAnimActionUpdater {
public:
    char pad_00[24];
}; // size: 0x18

class __declspec(align(8)) CParamSpanUpdater {
public:
    // CUtlVector< ParamSpan_t > m_spans;
    char pad_00[24];
}; // size: 0x18

class __declspec(align(8)) CNmTargetWarpEvent {
public:
    char pad_00[32];
    NmTargetWarpRule_t m_rule; // 0x20
    NmTargetWarpAlgorithm_t m_algorithm; // 0x21
    char pad_01[6];
}; // size: 0x28

/// CNmStateCompletedConditionNode::CDefinition
class __declspec(align(8)) CNmStateCompletedConditionNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx; // 0x10
    int16_t m_nTransitionDurationOverrideNodeIdx; // 0x12
    float m_flTransitionDurationSeconds; // 0x14
}; // size: 0x18

/// CNmCurrentSyncEventIDNode::CDefinition
class __declspec(align(8)) CNmCurrentSyncEventIDNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx; // 0x10
    char pad_01[6];
}; // size: 0x18

/// CNmFloatRemapNode::RemapRange_t
class __declspec(align(4)) CNmFloatRemapNode__RemapRange_t {
public:
    float m_flBegin; // 0x0
    float m_flEnd; // 0x4
}; // size: 0x8

/// CNmGraphEventConditionNode::Condition_t
class __declspec(align(8)) CNmGraphEventConditionNode__Condition_t {
public:
    // CGlobalSymbol m_eventID;
    char pad_00[8];
    NmGraphEventTypeCondition_t m_eventTypeCondition; // 0x8
    char pad_01[7];
}; // size: 0x10

class __declspec(align(8)) CParticleCollectionVecInput {
public:
    char pad_00[1720];
}; // size: 0x6b8

class __declspec(align(8)) CDirectPlaybackTagData {
public:
    // CUtlString m_sequenceName;
    // CUtlVector< TagSpan_t > m_tags;
    char pad_00[32];
}; // size: 0x20

class __declspec(align(4)) MotionDBIndex {
public:
    uint32_t m_nIndex; // 0x0
}; // size: 0x4

/// CNmIsInactiveBranchConditionNode::CDefinition
class __declspec(align(8)) CNmIsInactiveBranchConditionNode__CDefinition {
public:
    char pad_00[16];
}; // size: 0x10

class __declspec(align(8)) CHitBoxSetList {
public:
    // CUtlVector< CHitBoxSet > m_HitBoxSets;
    char pad_00[24];
}; // size: 0x18

class __declspec(align(8)) CTargetSelectorUpdateNode {
public:
    char pad_00[96];
    TargetSelectorAngleMode_t m_eAngleMode; // 0x60
    // CUtlVector< CAnimUpdateNodeRef > m_children;
    // CAnimParamHandle m_hTargetPosition;
    // CAnimParamHandle m_hTargetFacePositionParameter;
    // CAnimParamHandle m_hMoveHeadingParameter;
    // CAnimParamHandle m_hDesiredMoveHeadingParameter;
    char pad_01[40];
    bool m_bTargetPositionIsWorldSpace; // 0x8c
    bool m_bTargetFacePositionIsWorldSpace; // 0x8d
    bool m_bEnablePhaseMatching; // 0x8e
    float m_flPhaseMatchingMaxRootMotionSkip; // 0x90
    char pad_02[12];
}; // size: 0xa0

/// CNmFloatSelectorNode::CDefinition
class __declspec(align(8)) CNmFloatSelectorNode__CDefinition {
public:
    // CUtlVectorFixedGrowable< int16, 5 > m_conditionNodeIndices;
    // CUtlVectorFixedGrowable< float32, 5 > m_values;
    char pad_00[104];
    float m_flDefaultValue; // 0x68
    float m_flEaseTime; // 0x6c
    NmEasingOperation_t m_easingOp; // 0x70
    char pad_01[7];
}; // size: 0x78

/// CNmStateMachineNode::TransitionDefinition_t
class __declspec(align(2)) CNmStateMachineNode__TransitionDefinition_t {
public:
    int16_t m_nTargetStateIdx; // 0x0
    int16_t m_nConditionNodeIdx; // 0x2
    int16_t m_nTransitionNodeIdx; // 0x4
    bool m_bCanBeForced; // 0x6
    char pad_00[1];
}; // size: 0x8

class __declspec(align(1)) IAnimationGraphInstance {
public:
    char pad_00[24];
}; // size: 0x18

/// CNmFloatCurveEventNode::CDefinition
class __declspec(align(8)) CNmFloatCurveEventNode__CDefinition {
public:
    // CGlobalSymbol m_eventID;
    char pad_00[24];
    int16_t m_nDefaultNodeIdx; // 0x18
    float m_flDefaultValue; // 0x1c
    CNmBitFlags m_eventConditionRules; // 0x20
    char pad_01[4];
}; // size: 0x28

class __declspec(align(8)) CSymbolAnimParameter {
public:
    // CGlobalSymbol m_defaultValue;
    char pad_00[136];
}; // size: 0x88

class __declspec(align(8)) CLeanMatrixUpdateNode {
public:
    char pad_00[92];
    int32_t m_frameCorners[3]; // 0x5c
    char pad_01[24];
    CPoseHandle m_poses; // 0x80
    char pad_02[32];
    CAnimInputDamping m_damping; // 0xa8
    AnimVectorSource m_blendSource; // 0xc0
    // CAnimParamHandle m_paramIndex;
    // Vector m_verticalAxis;
    // Vector m_horizontalAxis;
    char pad_03[28];
    HSequence m_hSequence; // 0xe0
    float m_flMaxValue; // 0xe4
    int32_t m_nSequenceMaxFrame; // 0xe8
    char pad_04[4];
}; // size: 0xf0

/// CNmCachedIDNode::CDefinition
class __declspec(align(8)) CNmCachedIDNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    NmCachedValueMode_t m_mode; // 0x14
}; // size: 0x18

class __declspec(align(16)) PermModelExtPart_t {
public:
    // CTransform m_Transform;
    // CUtlString m_Name;
    char pad_00[40];
    int32_t m_nParent; // 0x28
    // CStrongHandle< InfoForResourceTypeCModel > m_refModel;
    char pad_01[20];
}; // size: 0x40

class __declspec(align(8)) CNPCPhysicsHull {
public:
    // CGlobalSymbol m_sName;
    char pad_00[8];
    NPCPhysicsHullType_t m_eType; // 0x8
    float m_flCapsuleHeight; // 0xc
    float m_flCapsuleRadius; // 0x10
    // Vector m_vCapsuleCenter1;
    // Vector m_vCapsuleCenter2;
    char pad_01[24];
    float m_flGroundBoxHeight; // 0x2c
    float m_flGroundBoxWidth; // 0x30
    char pad_02[4];
}; // size: 0x38

/// CNmVelocityBasedSpeedScaleNode::CDefinition
class __declspec(align(8)) CNmVelocityBasedSpeedScaleNode__CDefinition {
public:
    char pad_00[32];
}; // size: 0x20

class __declspec(align(8)) CBlend2DUpdateNode {
public:
    // CUtlVector< BlendItem_t > m_items;
    // CUtlVector< TagSpan_t > m_tags;
    char pad_00[144];
    CParamSpanUpdater m_paramSpans; // 0x90
    // CUtlVector< int32 > m_nodeItemIndices;
    char pad_01[24];
    CAnimInputDamping m_damping; // 0xc0
    AnimValueSource m_blendSourceX; // 0xd8
    // CAnimParamHandle m_paramX;
    char pad_02[4];
    AnimValueSource m_blendSourceY; // 0xe0
    // CAnimParamHandle m_paramY;
    char pad_03[4];
    Blend2DMode m_eBlendMode; // 0xe8
    float m_playbackSpeed; // 0xec
    bool m_bLoop; // 0xf0
    bool m_bLockBlendOnReset; // 0xf1
    bool m_bLockWhenWaning; // 0xf2
    bool m_bAnimEventsAndTagsOnMostWeightedOnly; // 0xf3
    char pad_04[4];
}; // size: 0xf8

class __declspec(align(4)) CAnimComponentUpdater {
public:
    // CUtlString m_name;
    // AnimComponentID m_id;
    char pad_00[36];
    AnimNodeNetworkMode m_networkMode; // 0x24
    bool m_bStartEnabled; // 0x28
    char pad_01[7];
}; // size: 0x30

/// CNmLayerBlendNode::LayerDefinition_t
class __declspec(align(2)) CNmLayerBlendNode__LayerDefinition_t {
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

class __declspec(align(8)) CSeqSynthAnimDesc {
public:
    // CBufferString m_sName;
    // CSeqSeqDescFlag m_flags;
    // CSeqTransition m_transition;
    char pad_00[36];
    int16_t m_nLocalBaseReference; // 0x24
    int16_t m_nLocalBoneMask; // 0x26
    // CUtlVector< CAnimActivity > m_activityArray;
    char pad_01[24];
}; // size: 0x40

class __declspec(align(8)) CFootDefinition {
public:
    // CUtlString m_name;
    // CUtlString m_ankleBoneName;
    // CUtlString m_toeBoneName;
    // Vector m_vBallOffset;
    // Vector m_vHeelOffset;
    char pad_00[48];
    float m_flFootLength; // 0x30
    float m_flBindPoseDirectionMS; // 0x34
    float m_flTraceHeight; // 0x38
    float m_flTraceRadius; // 0x3c
}; // size: 0x40

class __declspec(align(8)) ParticleNamedValueSource_t {
public:
    // CUtlString m_Name;
    char pad_00[8];
    bool m_IsPublic; // 0x8
    // CPulseValueFullType m_ValueType;
    // ParticleNamedValueConfiguration_t m_DefaultConfig;
    char pad_01[87];
}; // size: 0x60

class __declspec(align(8)) CRagdollComponentUpdater {
public:
    // CUtlVector< CAnimNodePath > m_ragdollNodePaths;
    // CUtlVector< CAnimNodePath > m_followAttachmentNodePaths;
    // CUtlVector< int32 > m_boneIndices;
    // CUtlVector< CUtlString > m_boneNames;
    // CUtlVector< WeightList > m_weightLists;
    // CUtlVector< int32 > m_boneToWeightIndices;
    char pad_00[192];
    float m_flSpringFrequencyMin; // 0xc0
    float m_flSpringFrequencyMax; // 0xc4
    float m_flMaxStretch; // 0xc8
    bool m_bSolidCollisionAtZeroWeight; // 0xcc
    char pad_01[11];
}; // size: 0xd8

class __declspec(align(8)) CAnimUser {
public:
    // CBufferString m_name;
    char pad_00[16];
    int32_t m_nType; // 0x10
    char pad_01[4];
}; // size: 0x18

class __declspec(align(8)) SkeletonAnimCapture_t {
public:
    // CEntityIndex m_nEntIndex;
    // CEntityIndex m_nEntParent;
    // CUtlVector< CEntityIndex > m_ImportedCollision;
    // CUtlString m_ModelName;
    // CUtlString m_CaptureName;
    // CUtlVector< SkeletonAnimCapture_t::Bone_t > m_ModelBindPose;
    // CUtlVector< SkeletonAnimCapture_t::Bone_t > m_FeModelInitPose;
    char pad_00[96];
    int32_t m_nFlexControllers; // 0x60
    bool m_bPredicted; // 0x64
    // CUtlVector< SkeletonAnimCapture_t::Frame_t > m_Frames;
    char pad_01[91];
}; // size: 0xc0

class __declspec(align(16)) CConstraintTarget {
public:
    // Quaternion m_qOffset;
    // Vector m_vOffset;
    char pad_00[60];
    uint32_t m_nBoneHash; // 0x3c
    // CUtlString m_sName;
    char pad_01[8];
    float m_flWeight; // 0x48
    char pad_02[13];
    bool m_bIsAttachment; // 0x59
    char pad_03[6];
}; // size: 0x60

class __declspec(align(4)) VPhysXConstraint2_t {
public:
    uint32_t m_nFlags; // 0x0
    uint16_t m_nParent; // 0x4
    uint16_t m_nChild; // 0x6
    VPhysXConstraintParams_t m_params; // 0x8
}; // size: 0x100

/// CNmScaleNode::CDefinition
class __declspec(align(8)) CNmScaleNode__CDefinition {
public:
    char pad_00[24];
    int16_t m_nMaskNodeIdx; // 0x18
    int16_t m_nEnableNodeIdx; // 0x1a
    char pad_01[4];
}; // size: 0x20

class __declspec(align(8)) CNmReferencePoseTask {
public:
    char pad_00[88];
}; // size: 0x58

class __declspec(align(8)) CModelConfigElement_RandomPick {
public:
    // CUtlVector< CUtlString > m_Choices;
    // CUtlVector< float32 > m_ChoiceWeights;
    char pad_00[128];
}; // size: 0x80

class __declspec(align(8)) CPairedSequenceUpdateNode {
public:
    // CGlobalSymbol m_sPairedSequenceRole;
    char pad_00[136];
}; // size: 0x88

class __declspec(align(8)) CNmBoneWeightList {
public:
    // CResourceName m_skeletonName;
    // CUtlVector< CGlobalSymbol > m_boneIDs;
    // CUtlVector< float32 > m_weights;
    char pad_00[272];
}; // size: 0x110

class __declspec(align(4)) CConcreteAnimParameter {
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

/// CNmBlend1DNode::CDefinition
class __declspec(align(8)) CNmBlend1DNode__CDefinition {
public:
    // CNmParameterizedBlendNode::Parameterization_t m_parameterization;
    char pad_00[144];
}; // size: 0x90

class __declspec(align(8)) CNmMaterialAttributeEvent {
public:
    // CUtlString m_attributeName;
    // CUtlStringToken m_attributeNameToken;
    // CPiecewiseCurve m_x;
    // CPiecewiseCurve m_y;
    // CPiecewiseCurve m_z;
    // CPiecewiseCurve m_w;
    char pad_00[304];
}; // size: 0x130

/// CNmClipNode::CDefinition
class __declspec(align(8)) CNmClipNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nPlayInReverseValueNodeIdx; // 0x10
    int16_t m_nResetTimeValueNodeIdx; // 0x12
    bool m_bSampleRootMotion; // 0x14
    bool m_bAllowLooping; // 0x15
    int16_t m_nDataSlotIdx; // 0x16
    // CUtlVectorFixedGrowable< CGlobalSymbol, 2 > m_graphEvents;
    char pad_01[40];
    float m_flSpeedMultiplier; // 0x40
    int32_t m_nStartSyncEventOffset; // 0x44
}; // size: 0x48

class __declspec(align(8)) CNewParticleEffect {
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
    // Vector m_vSortOrigin;
    char pad_01[28];
    float m_flScale; // 0x4c
    PARTICLE_EHANDLE__* m_hOwner; // 0x50
    CParticleProperty* m_pOwningParticleProperty; // 0x58
    char pad_02[16];
    float m_flFreezeTransitionStart; // 0x70
    float m_flFreezeTransitionDuration; // 0x74
    float m_flFreezeTransitionOverride; // 0x78
    // Vector m_LastMin;
    // Vector m_LastMax;
    // CSplitScreenSlot m_nSplitScreenUser;
    // Vector m_vecAggregationCenter;
    char pad_03[84];
    int32_t m_RefCount; // 0xd0
    char pad_04[4];
}; // size: 0xd8

/// CNmIsExternalGraphSlotFilledNode::CDefinition
class __declspec(align(8)) CNmIsExternalGraphSlotFilledNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nExternalGraphNodeIdx; // 0x10
    char pad_01[6];
}; // size: 0x18

class __declspec(align(8)) BlendItem_t {
public:
    // CUtlVector< TagSpan_t > m_tags;
    char pad_00[24];
    CAnimUpdateNodeRef m_pChild; // 0x18
    HSequence m_hSequence; // 0x28
    // Vector2D m_vPos;
    char pad_01[8];
    float m_flDuration; // 0x34
    bool m_bUseCustomDuration; // 0x38
    char pad_02[7];
}; // size: 0x40

/// CNmControlParameterFloatNode::CDefinition
class __declspec(align(8)) CNmControlParameterFloatNode__CDefinition {
public:
    char pad_00[16];
}; // size: 0x10

class __declspec(align(1)) CBaseConstraint {
public:
    // CUtlString m_name;
    // Vector m_vUpVector;
    // CUtlLeanVector< CConstraintSlave > m_slaves;
    // CUtlVector< CConstraintTarget > m_targets;
    char pad_00[96];
}; // size: 0x60

class __declspec(align(8)) CDampedValueComponentUpdater {
public:
    // CUtlVector< CDampedValueUpdateItem > m_items;
    char pad_00[72];
}; // size: 0x48

/// CNmTargetInfoNode::CDefinition
class __declspec(align(8)) CNmTargetInfoNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    // CNmTargetInfoNode::Info_t m_infoType;
    char pad_01[6];
    bool m_bIsWorldSpaceTarget; // 0x18
    char pad_02[7];
}; // size: 0x20

class __declspec(align(8)) CCycleControlUpdateNode {
public:
    char pad_00[112];
    AnimValueSource m_valueSource; // 0x70
    // CAnimParamHandle m_paramIndex;
    char pad_01[2];
    bool m_bLockWhenWaning; // 0x76
    char pad_02[1];
}; // size: 0x78

class __declspec(align(16)) CAnimationGraphVisualizerLine {
public:
    // VectorAligned m_vWsPositionStart;
    // VectorAligned m_vWsPositionEnd;
    // Color m_Color;
    char pad_00[112];
}; // size: 0x70

/// CNmFloatMathNode::CDefinition
class __declspec(align(8)) CNmFloatMathNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdxA; // 0x10
    int16_t m_nInputValueNodeIdxB; // 0x12
    bool m_bReturnAbsoluteResult; // 0x14
    bool m_bReturnNegatedResult; // 0x15
    // CNmFloatMathNode::Operator_t m_operator;
    float m_flValueB; // 0x18
    char pad_01[4];
}; // size: 0x20

class __declspec(align(8)) CExpressionActionUpdater {
public:
    // CAnimParamHandle m_hParam;
    char pad_00[26];
    AnimParamType_t m_eParamType; // 0x1a
    AnimScriptHandle m_hScript; // 0x1c
}; // size: 0x20

/// SkeletonAnimCapture_t::Bone_t
class __declspec(align(16)) SkeletonAnimCapture_t__Bone_t {
public:
    // CUtlString m_Name;
    // CTransform m_BindPose;
    char pad_00[48];
    int32_t m_nParent; // 0x30
    char pad_01[12];
}; // size: 0x40

class __declspec(align(8)) CChoiceUpdateNode {
public:
    // CUtlVector< CAnimUpdateNodeRef > m_children;
    // CUtlVector< float32 > m_weights;
    // CUtlVector< float32 > m_blendTimes;
    char pad_00[168];
    ChoiceMethod m_choiceMethod; // 0xa8
    ChoiceChangeMethod m_choiceChangeMethod; // 0xac
    ChoiceBlendMethod m_blendMethod; // 0xb0
    float m_blendTime; // 0xb4
    bool m_bCrossFade; // 0xb8
    bool m_bResetChosen; // 0xb9
    bool m_bDontResetSameSelection; // 0xba
    char pad_01[5];
}; // size: 0xc0

class __declspec(align(8)) CProductQuantizer {
public:
    // CUtlVector< CVectorQuantizer > m_subQuantizers;
    char pad_00[24];
    int32_t m_nDimensions; // 0x18
    char pad_01[4];
}; // size: 0x20

class __declspec(align(4)) ParticleAttributeIndex_t {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

class __declspec(align(8)) CMotionDataSet {
public:
    // CUtlVector< CMotionGraphGroup > m_groups;
    char pad_00[24];
    int32_t m_nDimensionCount; // 0x18
    char pad_01[4];
}; // size: 0x20

class __declspec(align(8)) PermModelDataAnimatedMaterialAttribute_t {
public:
    // CUtlString m_AttributeName;
    char pad_00[8];
    int32_t m_nNumChannels; // 0x8
    char pad_01[4];
}; // size: 0x10

class __declspec(align(4)) CRemapValueUpdateItem {
public:
    // CAnimParamHandle m_hParamIn;
    // CAnimParamHandle m_hParamOut;
    char pad_00[4];
    float m_flMinInputValue; // 0x4
    float m_flMaxInputValue; // 0x8
    float m_flMinOutputValue; // 0xc
    float m_flMaxOutputValue; // 0x10
}; // size: 0x14

/// CNmConstTargetNode::CDefinition
class __declspec(align(16)) CNmConstTargetNode__CDefinition {
public:
    char pad_00[16];
    CNmTarget m_value; // 0x10
}; // size: 0x40

class __declspec(align(4)) TagSpan_t {
public:
    int32_t m_tagIndex; // 0x0
    float m_startCycle; // 0x4
    float m_endCycle; // 0x8
}; // size: 0xc

class __declspec(align(1)) CNmBlendTaskBase {
public:
    char pad_00[224];
}; // size: 0xe0

/// NmCompressionSettings_t::QuantizationRange_t
class __declspec(align(4)) NmCompressionSettings_t__QuantizationRange_t {
public:
    float m_flRangeStart; // 0x0
    float m_flRangeLength; // 0x4
}; // size: 0x8

class __declspec(align(4)) CNmEvent {
public:
    char pad_00[8];
    NmPercent_t m_flStartTime; // 0x8
    NmPercent_t m_flDuration; // 0xc
    // CGlobalSymbol m_syncID;
    char pad_01[8];
    bool m_bClientOnly; // 0x18
    char pad_02[7];
}; // size: 0x20

class __declspec(align(8)) ModelSkeletonData_t {
public:
    // CUtlVector< CUtlString > m_boneName;
    // CUtlVector< int16 > m_nParent;
    // CUtlVector< float32 > m_boneSphere;
    // CUtlVector< uint32 > m_nFlag;
    // CUtlVector< Vector > m_bonePosParent;
    // CUtlVector< QuaternionStorage > m_boneRotParent;
    // CUtlVector< float32 > m_boneScaleParent;
    char pad_00[168];
}; // size: 0xa8

class __declspec(align(4)) RnSoftbodySpring_t {
public:
    uint16_t m_nParticle[2]; // 0x0
    float m_flLength; // 0x4
}; // size: 0x8

/// CNmParameterizedSelectorNode::CDefinition
class __declspec(align(8)) CNmParameterizedSelectorNode__CDefinition {
public:
    // CUtlLeanVectorFixedGrowable< int16, 5 > m_optionNodeIndices;
    // CUtlLeanVectorFixedGrowable< uint8, 5 > m_optionWeights;
    char pad_00[56];
    int16_t m_parameterNodeIdx; // 0x38
    bool m_bIgnoreInvalidOptions; // 0x3a
    bool m_bHasWeightsSet; // 0x3b
    char pad_01[4];
}; // size: 0x40

class __declspec(align(16)) CHitBox {
public:
    // CUtlString m_name;
    // CUtlString m_sSurfaceProperty;
    // CUtlString m_sBoneName;
    // Vector m_vMinBounds;
    // Vector m_vMaxBounds;
    char pad_00[48];
    float m_flShapeRadius; // 0x30
    uint32_t m_nBoneNameHash; // 0x34
    int32_t m_nGroupId; // 0x38
    uint8_t m_nShapeType; // 0x3c
    bool m_bTranslationOnly; // 0x3d
    uint32_t m_CRC; // 0x40
    // Color m_cRenderColor;
    char pad_01[4];
    uint16_t m_nHitBoxIndex; // 0x48
    char pad_02[38];
}; // size: 0x70

/// CNmConstIDNode::CDefinition
class __declspec(align(8)) CNmConstIDNode__CDefinition {
public:
    // CGlobalSymbol m_value;
    char pad_00[24];
}; // size: 0x18

class __declspec(align(8)) CFootCycleMetricEvaluator {
public:
    // CUtlVector< int32 > m_footIndices;
    char pad_00[104];
}; // size: 0x68

/// CNmVirtualParameterVectorNode::CDefinition
class __declspec(align(8)) CNmVirtualParameterVectorNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx; // 0x10
    char pad_01[6];
}; // size: 0x18

/// CNmBoneMaskSelectorNode::CDefinition
class __declspec(align(8)) CNmBoneMaskSelectorNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_defaultMaskNodeIdx; // 0x10
    int16_t m_parameterValueNodeIdx; // 0x12
    bool m_bSwitchDynamically; // 0x14
    // CUtlVectorFixedGrowable< int16, 7 > m_maskNodeIndices;
    // CUtlVectorFixedGrowable< CGlobalSymbol, 7 > m_parameterValues;
    char pad_01[120];
    float m_flBlendTimeSeconds; // 0x90
    char pad_02[4];
}; // size: 0x98

/// CNmStateNode::CDefinition
class __declspec(align(8)) CNmStateNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx; // 0x10
    // CUtlLeanVectorFixedGrowable< CGlobalSymbol, 3 > m_entryEvents;
    // CUtlLeanVectorFixedGrowable< CGlobalSymbol, 3 > m_executeEvents;
    // CUtlLeanVectorFixedGrowable< CGlobalSymbol, 3 > m_exitEvents;
    // CUtlLeanVectorFixedGrowable< CNmStateNode::TimedEvent_t, 1 > m_timedRemainingEvents;
    // CUtlLeanVectorFixedGrowable< CNmStateNode::TimedEvent_t, 1 > m_timedElapsedEvents;
    char pad_01[150];
    int16_t m_nLayerWeightNodeIdx; // 0xa8
    int16_t m_nLayerRootMotionWeightNodeIdx; // 0xaa
    int16_t m_nLayerBoneMaskNodeIdx; // 0xac
    bool m_bIsOffState; // 0xae
    bool m_bUseActualElapsedTimeInStateForTimedEvents; // 0xaf
}; // size: 0xb0

class __declspec(align(8)) CParticleVecInput {
public:
    char pad_00[16];
    ParticleVecType_t m_nType; // 0x10
    // Vector m_vLiteralValue;
    // Color m_LiteralColor;
    // CParticleNamedValueRef m_NamedValue;
    char pad_01[84];
    bool m_bFollowNamedValue; // 0x68
    ParticleAttributeIndex_t m_nVectorAttribute; // 0x6c
    // Vector m_vVectorAttributeScale;
    char pad_02[12];
    int32_t m_nControlPoint; // 0x7c
    int32_t m_nDeltaControlPoint; // 0x80
    // Vector m_vCPValueScale;
    // Vector m_vCPRelativePosition;
    // Vector m_vCPRelativeDir;
    char pad_03[32];
    CParticleFloatInput m_FloatComponentX; // 0xa8
    CParticleFloatInput m_FloatComponentY; // 0x218
    CParticleFloatInput m_FloatComponentZ; // 0x388
    CParticleFloatInput m_FloatInterp; // 0x4f8
    float m_flInterpInput0; // 0x668
    float m_flInterpInput1; // 0x66c
    // Vector m_vInterpOutput0;
    // Vector m_vInterpOutput1;
    // CColorGradient m_Gradient;
    // Vector m_vRandomMin;
    // Vector m_vRandomMax;
    char pad_04[72];
}; // size: 0x6b8

/// CNmVectorCreateNode::CDefinition
class __declspec(align(8)) CNmVectorCreateNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_inputVectorValueNodeIdx; // 0x10
    int16_t m_inputValueXNodeIdx; // 0x12
    int16_t m_inputValueYNodeIdx; // 0x14
    int16_t m_inputValueZNodeIdx; // 0x16
}; // size: 0x18

class __declspec(align(8)) ParticleNamedValueConfiguration_t {
public:
    // CUtlString m_ConfigName;
    // KeyValues3 m_ConfigValue;
    // CUtlString m_BoundValuePath;
    char pad_00[32];
    ParticleAttachment_t m_iAttachType; // 0x20
    // CUtlString m_strEntityScope;
    // CUtlString m_strAttachmentName;
    char pad_01[20];
}; // size: 0x38

class __declspec(align(8)) CVectorQuantizer {
public:
    // CUtlVector< float32 > m_centroidVectors;
    char pad_00[24];
    int32_t m_nCentroids; // 0x18
    int32_t m_nDimensions; // 0x1c
}; // size: 0x20

class __declspec(align(8)) CBodyGroupSetting {
public:
    // CUtlString m_BodyGroupName;
    char pad_00[8];
    int32_t m_nBodyGroupOption; // 0x8
    char pad_01[4];
}; // size: 0x10

class __declspec(align(8)) CNmZeroPoseTask {
public:
    char pad_00[88];
}; // size: 0x58

/// CNmVelocityBlendNode::CDefinition
class __declspec(align(8)) CNmVelocityBlendNode__CDefinition {
public:
    char pad_00[64];
}; // size: 0x40

class __declspec(align(8)) CStepsRemainingMetricEvaluator {
public:
    // CUtlVector< int32 > m_footIndices;
    char pad_00[104];
    float m_flMinStepsRemaining; // 0x68
    char pad_01[4];
}; // size: 0x70

class __declspec(align(8)) CNmSkeleton {
public:
    // CGlobalSymbol m_ID;
    // CUtlLeanVector< CGlobalSymbol > m_boneIDs;
    // CUtlVector< int32 > m_parentIndices;
    // CUtlVector< CTransform > m_parentSpaceReferencePose;
    // CUtlVector< CTransform > m_modelSpaceReferencePose;
    char pad_00[96];
    int32_t m_numBonesToSampleAtLowLOD; // 0x60
    // CUtlLeanVector< NmBoneMaskSetDefinition_t > m_maskDefinitions;
    // CUtlLeanVector< CNmSkeleton::SecondarySkeleton_t > m_secondarySkeletons;
    char pad_01[84];
    bool m_bIsPropSkeleton; // 0xb8
    char pad_02[7];
}; // size: 0xc0

class __declspec(align(8)) CMaterialDrawDescriptor {
public:
    float m_flUvDensity; // 0x0
    // Vector m_vTintColor;
    char pad_00[12];
    float m_flAlpha; // 0x10
    char pad_01[2];
    uint16_t m_nNumMeshlets; // 0x16
    char pad_02[4];
    uint32_t m_nFirstMeshlet; // 0x1c
    uint32_t m_nAppliedIndexOffset; // 0x20
    uint8_t m_nDepthVertexBufferIndex; // 0x24
    uint8_t m_nMeshletPackedIVBIndex; // 0x25
    // CUtlLeanVector< CMaterialDrawDescriptor::RigidMeshPart_t > m_rigidMeshParts;
    char pad_03[16];
    RenderPrimitiveType_t m_nPrimitiveType; // 0x38
    int32_t m_nBaseVertex; // 0x3c
    int32_t m_nVertexCount; // 0x40
    int32_t m_nStartIndex; // 0x44
    int32_t m_nIndexCount; // 0x48
    char pad_04[96];
    CRenderBufferBinding m_indexBuffer; // 0xb0
    CRenderBufferBinding m_meshletPackedIVB; // 0xd0
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_material;
    char pad_05[24];
}; // size: 0x108

class __declspec(align(8)) CFootFallAnimTag {
public:
    char pad_00[88];
    FootFallTagFoot_t m_foot; // 0x58
    char pad_01[4];
}; // size: 0x60

/// CMaterialDrawDescriptor::RigidMeshPart_t
class __declspec(align(4)) CMaterialDrawDescriptor__RigidMeshPart_t {
public:
    uint16_t m_nRigidBLASIndex; // 0x0
    int16_t m_nBoneIndex; // 0x2
    uint32_t m_nStartIndexOffset; // 0x4
    uint32_t m_nPrimitiveCount; // 0x8
}; // size: 0xc

class __declspec(align(16)) CAimConstraint {
public:
    // Quaternion m_qAimOffset;
    char pad_00[112];
    uint32_t m_nUpType; // 0x70
    char pad_01[12];
}; // size: 0x80

class __declspec(align(8)) CChoreoUpdateNode {
public:
    char pad_00[120];
}; // size: 0x78

class __declspec(align(8)) CFootAdjustmentUpdateNode {
public:
    // CUtlVector< HSequence > m_clips;
    char pad_00[144];
    CPoseHandle m_hBasePoseCacheHandle; // 0x90
    // CAnimParamHandle m_facingTarget;
    char pad_01[4];
    float m_flTurnTimeMin; // 0x98
    float m_flTurnTimeMax; // 0x9c
    float m_flStepHeightMax; // 0xa0
    float m_flStepHeightMaxAngle; // 0xa4
    bool m_bResetChild; // 0xa8
    bool m_bAnimationDriven; // 0xa9
    char pad_02[6];
}; // size: 0xb0

class __declspec(align(1)) CSolveIKTargetHandle_t {
public:
    // CAnimParamHandle m_positionHandle;
    // CAnimParamHandle m_orientationHandle;
    char pad_00[4];
}; // size: 0x4

class __declspec(align(8)) CModelConfigElement_UserPick {
public:
    // CUtlVector< CUtlString > m_Choices;
    char pad_00[96];
}; // size: 0x60

class __declspec(align(8)) CMorphBundleData {
public:
    float m_flULeftSrc; // 0x0
    float m_flVTopSrc; // 0x4
    // CUtlVector< float32 > m_offsets;
    // CUtlVector< float32 > m_ranges;
    char pad_00[48];
}; // size: 0x38

class __declspec(align(8)) MaterialGroup_t {
public:
    // CUtlString m_name;
    // CUtlVector< CStrongHandle< InfoForResourceTypeIMaterial2 > > m_materials;
    char pad_00[32];
}; // size: 0x20

class __declspec(align(8)) CPathHelperUpdateNode {
public:
    char pad_00[112];
    float m_flStoppingRadius; // 0x70
    float m_flStoppingSpeedScale; // 0x74
}; // size: 0x78

/// CNmVirtualParameterBoneMaskNode::CDefinition
class __declspec(align(8)) CNmVirtualParameterBoneMaskNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx; // 0x10
    char pad_01[6];
}; // size: 0x18

class __declspec(align(8)) CNmEntityAttributeEventBase {
public:
    // CUtlString m_attributeName;
    char pad_00[56];
}; // size: 0x38

class __declspec(align(8)) CModelConfigElement_SetMaterialGroupOnAttachedModels {
public:
    // CUtlString m_MaterialGroupName;
    char pad_00[80];
}; // size: 0x50

/// CNmFloatSwitchNode::CDefinition
class __declspec(align(8)) CNmFloatSwitchNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nSwitchValueNodeIdx; // 0x10
    int16_t m_nTrueValueNodeIdx; // 0x12
    int16_t m_nFalseValueNodeIdx; // 0x14
    float m_flFalseValue; // 0x18
    float m_flTrueValue; // 0x1c
}; // size: 0x20

/// CNmCachedFloatNode::CDefinition
class __declspec(align(8)) CNmCachedFloatNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    NmCachedValueMode_t m_mode; // 0x14
}; // size: 0x18

class __declspec(align(8)) CDampedPathAnimMotorUpdater {
public:
    char pad_00[44];
    float m_flAnticipationTime; // 0x2c
    float m_flMinSpeedScale; // 0x30
    // CAnimParamHandle m_hAnticipationPosParam;
    // CAnimParamHandle m_hAnticipationHeadingParam;
    char pad_01[4];
    float m_flSpringConstant; // 0x38
    float m_flMinSpringTension; // 0x3c
    float m_flMaxSpringTension; // 0x40
    char pad_02[4];
}; // size: 0x48

class __declspec(align(8)) CActionComponentUpdater {
public:
    // CUtlVector< CSmartPtr< CAnimActionUpdater > > m_actions;
    char pad_00[72];
}; // size: 0x48

class __declspec(align(4)) CAnimCycle {
public:
    char pad_00[4];
}; // size: 0x4

/// CNmCachedBoolNode::CDefinition
class __declspec(align(8)) CNmCachedBoolNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    NmCachedValueMode_t m_mode; // 0x14
}; // size: 0x18

class __declspec(align(8)) CAnimBoneDifference {
public:
    // CBufferString m_name;
    // CBufferString m_parent;
    // Vector m_posError;
    char pad_00[44];
    bool m_bHasRotation; // 0x2c
    bool m_bHasMovement; // 0x2d
    char pad_01[2];
}; // size: 0x30

/// CNmIDEventPercentageThroughNode::CDefinition
class __declspec(align(8)) CNmIDEventPercentageThroughNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx; // 0x10
    CNmBitFlags m_eventConditionRules; // 0x14
    // CGlobalSymbol m_eventID;
    char pad_01[8];
}; // size: 0x20

class __declspec(align(8)) CStopAtGoalUpdateNode {
public:
    char pad_00[116];
    float m_flOuterRadius; // 0x74
    float m_flInnerRadius; // 0x78
    float m_flMaxScale; // 0x7c
    float m_flMinScale; // 0x80
    CAnimInputDamping m_damping; // 0x88
}; // size: 0xa0

class __declspec(align(4)) VPhysXRange_t {
public:
    float m_flMin; // 0x0
    float m_flMax; // 0x4
}; // size: 0x8

class __declspec(align(1)) PulseRegisterMap_t {
public:
    // KeyValues3 m_Inparams;
    // CKV3MemberNameSet m_InparamsWhichCanBeMoved;
    // KeyValues3 m_Outparams;
    char pad_00[48];
}; // size: 0x30

class __declspec(align(1)) CSeqMultiFetchFlag {
public:
    bool m_bRealtime; // 0x0
    bool m_bCylepose; // 0x1
    bool m_b0D; // 0x2
    bool m_b1D; // 0x3
    bool m_b2D; // 0x4
    bool m_b2D_TRI; // 0x5
}; // size: 0x6

class __declspec(align(8)) IKDemoCaptureSettings_t {
public:
    // CUtlString m_parentBoneName;
    char pad_00[8];
    IKChannelMode m_eMode; // 0x8
    // CUtlString m_ikChainName;
    // CUtlString m_oneBoneStart;
    // CUtlString m_oneBoneEnd;
    char pad_01[28];
}; // size: 0x28

class __declspec(align(8)) CAnimDemoCaptureSettings {
public:
    // Vector2D m_vecErrorRangeSplineRotation;
    // Vector2D m_vecErrorRangeSplineTranslation;
    // Vector2D m_vecErrorRangeSplineScale;
    char pad_00[24];
    float m_flIkRotation_MaxSplineError; // 0x18
    float m_flIkTranslation_MaxSplineError; // 0x1c
    // Vector2D m_vecErrorRangeQuantizationRotation;
    // Vector2D m_vecErrorRangeQuantizationTranslation;
    // Vector2D m_vecErrorRangeQuantizationScale;
    char pad_01[24];
    float m_flIkRotation_MaxQuantizationError; // 0x38
    float m_flIkTranslation_MaxQuantizationError; // 0x3c
    // CUtlString m_baseSequence;
    char pad_02[8];
    int32_t m_nBaseSequenceFrame; // 0x48
    EDemoBoneSelectionMode m_boneSelectionMode; // 0x4c
    // CUtlVector< BoneDemoCaptureSettings_t > m_bones;
    // CUtlVector< IKDemoCaptureSettings_t > m_ikChains;
    char pad_03[48];
}; // size: 0x80

/// CNmSelectorNode::CDefinition
class __declspec(align(8)) CNmSelectorNode__CDefinition {
public:
    // CUtlLeanVectorFixedGrowable< int16, 5 > m_optionNodeIndices;
    // CUtlLeanVectorFixedGrowable< int16, 5 > m_conditionNodeIndices;
    char pad_00[64];
}; // size: 0x40

class __declspec(align(8)) CNmGraphDefinition {
public:
    // CGlobalSymbol m_variationID;
    // CStrongHandle< InfoForResourceTypeCNmSkeleton > m_skeleton;
    char pad_00[16];
    CNmGraphVariationUserData* m_pUserData; // 0x10
    // CUtlVector< int16 > m_persistentNodeIndices;
    char pad_01[24];
    int16_t m_nRootNodeIdx; // 0x30
    // CUtlVector< CGlobalSymbol > m_controlParameterIDs;
    // CUtlVector< CGlobalSymbol > m_virtualParameterIDs;
    // CUtlVector< int16 > m_virtualParameterNodeIndices;
    // CUtlVector< CNmGraphDefinition::ReferencedGraphSlot_t > m_referencedGraphSlots;
    // CUtlVector< CNmGraphDefinition::ExternalGraphSlot_t > m_externalGraphSlots;
    // CUtlVector< CNmGraphDefinition::ExternalPoseSlot_t > m_externalPoseSlots;
    // CUtlVector< CUtlString > m_nodePaths;
    // CUtlVector< CStrongHandleVoid > m_resources;
    char pad_02[366];
}; // size: 0x1a0

class __declspec(align(8)) VPhysXAggregateData_t {
public:
    uint16_t m_nFlags; // 0x0
    uint16_t m_nRefCounter; // 0x2
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
    PhysFeModelDesc_t* m_pFeModel; // 0xe0
    // CUtlVector< uint16 > m_boneParents;
    // CUtlVector< uint32 > m_surfacePropertyHashes;
    // CUtlVector< VPhysXCollisionAttributes_t > m_collisionAttributes;
    // CUtlVector< CUtlString > m_debugPartNames;
    // CUtlString m_embeddedKeyvalues;
    char pad_01[104];
}; // size: 0x150

class __declspec(align(4)) AnimComponentID {
public:
    uint32_t m_id; // 0x0
}; // size: 0x4

class __declspec(align(8)) CModelConfig {
public:
    // CUtlString m_ConfigName;
    // CUtlVector< CModelConfigElement* > m_Elements;
    char pad_00[32];
    bool m_bTopLevel; // 0x20
    bool m_bActiveInEditorByDefault; // 0x21
    char pad_01[6];
}; // size: 0x28

/// CNmBoneMaskSwitchNode::CDefinition
class __declspec(align(8)) CNmBoneMaskSwitchNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nSwitchValueNodeIdx; // 0x10
    int16_t m_nTrueValueNodeIdx; // 0x12
    int16_t m_nFalseValueNodeIdx; // 0x14
    float m_flBlendTimeSeconds; // 0x18
    bool m_bSwitchDynamically; // 0x1c
    char pad_01[3];
}; // size: 0x20

class __declspec(align(16)) FootFixedSettings {
public:
    TraceSettings_t m_traceSettings; // 0x0
    // VectorAligned m_vFootBaseBindPosePositionMS;
    char pad_00[24];
    float m_flFootBaseLength; // 0x20
    float m_flMaxRotationLeft; // 0x24
    float m_flMaxRotationRight; // 0x28
    int32_t m_footstepLandedTagIndex; // 0x2c
    bool m_bEnableTracing; // 0x30
    float m_flTraceAngleBlend; // 0x34
    int32_t m_nDisableTagIndex; // 0x38
    int32_t m_nFootIndex; // 0x3c
}; // size: 0x40

/// CNmControlParameterVectorNode::CDefinition
class __declspec(align(8)) CNmControlParameterVectorNode__CDefinition {
public:
    char pad_00[16];
}; // size: 0x10

class __declspec(align(1)) CModelConfigElement {
public:
    // CUtlString m_ElementName;
    // CUtlVector< CModelConfigElement* > m_NestedElements;
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CParticleInput {
public:
    char pad_00[16];
}; // size: 0x10

class __declspec(align(8)) CTimeRemainingMetricEvaluator {
public:
    char pad_00[80];
    bool m_bMatchByTimeRemaining; // 0x50
    float m_flMaxTimeRemaining; // 0x54
    bool m_bFilterByTimeRemaining; // 0x58
    float m_flMinTimeRemaining; // 0x5c
}; // size: 0x60

class __declspec(align(4)) CStateNodeTransitionData {
public:
    CBlendCurve m_curve; // 0x0
    // CAnimValue< float32 > m_blendDuration;
    // CAnimValue< float32 > m_resetCycleValue;
    // bitfield:1 m_bReset;
    // bitfield:3 m_resetCycleOption;
    char pad_00[20];
}; // size: 0x1c

class __declspec(align(16)) VPhysXJoint_t {
public:
    uint16_t m_nType; // 0x0
    uint16_t m_nBody1; // 0x2
    uint16_t m_nBody2; // 0x4
    uint16_t m_nFlags; // 0x6
    // CTransform m_Frame1;
    // CTransform m_Frame2;
    char pad_00[72];
    bool m_bEnableCollision; // 0x50
    bool m_bIsLinearConstraintDisabled; // 0x51
    bool m_bIsAngularConstraintDisabled; // 0x52
    bool m_bEnableLinearLimit; // 0x53
    VPhysXRange_t m_LinearLimit; // 0x54
    bool m_bEnableLinearMotor; // 0x5c
    // Vector m_vLinearTargetVelocity;
    char pad_01[12];
    float m_flMaxForce; // 0x6c
    bool m_bEnableSwingLimit; // 0x70
    VPhysXRange_t m_SwingLimit; // 0x74
    bool m_bEnableTwistLimit; // 0x7c
    VPhysXRange_t m_TwistLimit; // 0x80
    bool m_bEnableAngularMotor; // 0x88
    // Vector m_vAngularTargetVelocity;
    char pad_02[12];
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
    char pad_03[20];
}; // size: 0xd0

class __declspec(align(1)) CDrawCullingData {
public:
    int8_t m_ConeAxis[3]; // 0x0
    int8_t m_ConeCutoff; // 0x3
}; // size: 0x4

class __declspec(align(4)) CSequenceUpdateNodeBase {
public:
    char pad_00[108];
    float m_playbackSpeed; // 0x6c
    bool m_bLoop; // 0x70
    char pad_01[7];
}; // size: 0x78

class __declspec(align(16)) CAttachment {
public:
    // CUtlString m_name;
    // CUtlString[3] m_influenceNames;
    // Quaternion[3] m_vInfluenceRotations;
    // Vector[3] m_vInfluenceOffsets;
    char pad_00[116];
    float m_influenceWeights[3]; // 0x74
    bool m_bInfluenceRootTransform[3]; // 0x80
    uint8_t m_nInfluences; // 0x83
    bool m_bIgnoreRotation; // 0x84
    char pad_01[11];
}; // size: 0x90

/// CNmVirtualParameterFloatNode::CDefinition
class __declspec(align(8)) CNmVirtualParameterFloatNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx; // 0x10
    char pad_01[6];
}; // size: 0x18

class __declspec(align(8)) PulseGraphExecutionHistoryCursorDesc_t {
public:
    // CUtlVector< PulseCursorID_t > vecAncestorCursorIDs;
    char pad_00[24];
    PulseDocNodeID_t nSpawnNodeID; // 0x18
    PulseDocNodeID_t nRetiredAtNodeID; // 0x1c
    float flLastReferenced; // 0x20
    int32_t nLastValidEntryIdx; // 0x24
}; // size: 0x28

class __declspec(align(8)) CSeqPoseSetting {
public:
    // CBufferString m_sPoseParameter;
    // CBufferString m_sAttachment;
    // CBufferString m_sReferenceSequence;
    char pad_00[48];
    float m_flValue; // 0x30
    bool m_bX; // 0x34
    bool m_bY; // 0x35
    bool m_bZ; // 0x36
    int32_t m_eType; // 0x38
    char pad_01[4];
}; // size: 0x40

class __declspec(align(8)) CFootPinningUpdateNode {
public:
    char pad_00[120];
    FootPinningPoseOpFixedData_t m_poseOpFixedData; // 0x78
    FootPinningTimingSource m_eTimingSource; // 0xa8
    // CUtlVector< CAnimParamHandle > m_params;
    char pad_01[28];
    bool m_bResetChild; // 0xc8
    char pad_02[7];
}; // size: 0xd0

class __declspec(align(8)) CMorphData {
public:
    // CUtlString m_name;
    // CUtlVector< CMorphRectData > m_morphRectDatas;
    char pad_00[32];
}; // size: 0x20

class __declspec(align(8)) ModelBoneFlexDriver_t {
public:
    // CUtlString m_boneName;
    char pad_00[8];
    uint32_t m_boneNameToken; // 0x8
    // CUtlVector< ModelBoneFlexDriverControl_t > m_controls;
    char pad_01[28];
}; // size: 0x28

/// CNmIDEventConditionNode::CDefinition
class __declspec(align(8)) CNmIDEventConditionNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx; // 0x10
    CNmBitFlags m_eventConditionRules; // 0x14
    // CUtlVectorFixedGrowable< CGlobalSymbol, 5 > m_eventIDs;
    char pad_01[64];
}; // size: 0x58

class __declspec(align(4)) AnimStateID {
public:
    uint32_t m_id; // 0x0
}; // size: 0x4

class __declspec(align(1)) CSeqAutoLayerFlag {
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

class __declspec(align(8)) CModelConfigList {
public:
    bool m_bHideMaterialGroupInTools; // 0x0
    bool m_bHideRenderColorInTools; // 0x1
    // CUtlVector< CModelConfig* > m_Configs;
    char pad_00[30];
}; // size: 0x20

class __declspec(align(8)) CRemapValueComponentUpdater {
public:
    // CUtlVector< CRemapValueUpdateItem > m_items;
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CBlockSelectionMetricEvaluator {
public:
    char pad_00[80];
}; // size: 0x50

/// CNmFollowBoneNode::CDefinition
class __declspec(align(8)) CNmFollowBoneNode__CDefinition {
public:
    // CGlobalSymbol m_bone;
    // CGlobalSymbol m_followTargetBone;
    char pad_00[40];
    int16_t m_nEnabledNodeIdx; // 0x28
    NmFollowBoneMode_t m_mode; // 0x2a
    char pad_01[5];
}; // size: 0x30

/// CNmChainLookatNode::CDefinition
class __declspec(align(8)) CNmChainLookatNode__CDefinition {
public:
    // CGlobalSymbol m_chainEndBoneID;
    char pad_00[32];
    int16_t m_nLookatTargetNodeIdx; // 0x20
    int16_t m_nEnabledNodeIdx; // 0x22
    float m_flBlendTimeSeconds; // 0x24
    uint8_t m_nChainLength; // 0x28
    bool m_bIsTargetInWorldSpace; // 0x29
    // Vector m_chainForwardDir;
    char pad_01[14];
}; // size: 0x38

class __declspec(align(8)) CSingleFrameUpdateNode {
public:
    // CUtlVector< CSmartPtr< CAnimActionUpdater > > m_actions;
    char pad_00[112];
    CPoseHandle m_hPoseCacheHandle; // 0x70
    HSequence m_hSequence; // 0x74
    float m_flCycle; // 0x78
    char pad_01[4];
}; // size: 0x80

class __declspec(align(8)) CAnimGraphNetworkSettings {
public:
    char pad_00[32];
    bool m_bNetworkingEnabled; // 0x20
    char pad_01[7];
}; // size: 0x28

/// CNmIsExternalPoseSetNode::CDefinition
class __declspec(align(8)) CNmIsExternalPoseSetNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nExternalPoseNodeIdx; // 0x10
    char pad_01[6];
}; // size: 0x18

class __declspec(align(8)) CLookComponentUpdater {
public:
    // CAnimParamHandle m_hLookHeading;
    // CAnimParamHandle m_hLookHeadingNormalized;
    // CAnimParamHandle m_hLookHeadingVelocity;
    // CAnimParamHandle m_hLookPitch;
    // CAnimParamHandle m_hLookDistance;
    // CAnimParamHandle m_hLookDirection;
    // CAnimParamHandle m_hLookTarget;
    // CAnimParamHandle m_hLookTargetWorldSpace;
    char pad_00[68];
    bool m_bNetworkLookTarget; // 0x44
    char pad_01[3];
}; // size: 0x48

/// CNmClipSelectorNode::CDefinition
class __declspec(align(8)) CNmClipSelectorNode__CDefinition {
public:
    // CUtlLeanVectorFixedGrowable< int16, 5 > m_optionNodeIndices;
    // CUtlLeanVectorFixedGrowable< int16, 5 > m_conditionNodeIndices;
    char pad_00[64];
}; // size: 0x40

class __declspec(align(4)) AnimNodeID {
public:
    uint32_t m_id; // 0x0
}; // size: 0x4

/// CNmReferencedGraphNode::CDefinition
class __declspec(align(8)) CNmReferencedGraphNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nReferencedGraphIdx; // 0x10
    int16_t m_nFallbackNodeIdx; // 0x12
    char pad_01[4];
}; // size: 0x18

class __declspec(align(16)) FollowAttachmentSettings_t {
public:
    CAnimAttachment m_attachment; // 0x0
    int32_t m_boneIndex; // 0x80
    AttachmentHandle_t m_attachmentHandle; // 0x84
    bool m_bMatchTranslation; // 0x85
    bool m_bMatchRotation; // 0x86
    char pad_00[9];
}; // size: 0x90

class __declspec(align(2)) MotionIndex {
public:
    uint16_t m_nGroup; // 0x0
    uint16_t m_nMotion; // 0x2
}; // size: 0x4

class __declspec(align(8)) WeightList {
public:
    // CUtlString m_name;
    // CUtlVector< float32 > m_weights;
    char pad_00[32];
}; // size: 0x20

class __declspec(align(1)) CAnimParamHandle {
public:
    AnimParamType_t m_type; // 0x0
    uint8_t m_index; // 0x1
}; // size: 0x2

class __declspec(align(4)) PulseCursorID_t {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

/// CNmFloatAngleMathNode::CDefinition
class __declspec(align(8)) CNmFloatAngleMathNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    // CNmFloatAngleMathNode::Operation_t m_operation;
    char pad_01[6];
}; // size: 0x18

class __declspec(align(8)) CMotionGraphUpdateNode {
public:
    // CSmartPtr< CMotionGraph > m_pMotionGraph;
    char pad_00[104];
}; // size: 0x68

/// CNmTargetOffsetNode::CDefinition
class __declspec(align(16)) CNmTargetOffsetNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    bool m_bIsBoneSpaceOffset; // 0x12
    // Quaternion m_rotationOffset;
    // Vector m_translationOffset;
    char pad_01[45];
}; // size: 0x40

class __declspec(align(8)) CRootUpdateNode {
public:
    char pad_00[112];
}; // size: 0x70

class __declspec(align(8)) CAnimEncodeDifference {
public:
    // CUtlVector< CAnimBoneDifference > m_boneArray;
    // CUtlVector< CAnimMorphDifference > m_morphArray;
    // CUtlVector< CAnimUserDifference > m_userArray;
    // CUtlVector< uint8 > m_bHasRotationBitArray;
    // CUtlVector< uint8 > m_bHasMovementBitArray;
    // CUtlVector< uint8 > m_bHasMorphBitArray;
    // CUtlVector< uint8 > m_bHasUserBitArray;
    char pad_00[168];
}; // size: 0xa8

/// CNmFloatEaseNode::CDefinition
class __declspec(align(8)) CNmFloatEaseNode__CDefinition {
public:
    char pad_00[16];
    float m_flEaseTime; // 0x10
    float m_flStartValue; // 0x14
    int16_t m_nInputValueNodeIdx; // 0x18
    NmEasingOperation_t m_easingOp; // 0x1a
    bool m_bUseStartValue; // 0x1b
    char pad_01[4];
}; // size: 0x20

class __declspec(align(2)) PulseRuntimeRegisterIndex_t {
public:
    int16_t m_Value; // 0x0
}; // size: 0x2

/// CNmTransitionNode::CDefinition
class __declspec(align(8)) CNmTransitionNode__CDefinition {
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

class __declspec(align(4)) LookAtBone_t {
public:
    int32_t m_index; // 0x0
    float m_weight; // 0x4
}; // size: 0x8

class __declspec(align(8)) PhysShapeMarkup_t {
public:
    int32_t m_nBodyInAggregate; // 0x0
    int32_t m_nShapeInBody; // 0x4
    // CGlobalSymbol m_sHitGroup;
    char pad_00[8];
}; // size: 0x10

/// CNmGraphDefinition::ExternalPoseSlot_t
class __declspec(align(8)) CNmGraphDefinition__ExternalPoseSlot_t {
public:
    int16_t m_nNodeIdx; // 0x0
    // CGlobalSymbol m_slotID;
    char pad_00[14];
}; // size: 0x10

class __declspec(align(8)) CStanceOverrideUpdateNode {
public:
    // CUtlVector< StanceInfo_t > m_footStanceInfo;
    char pad_00[136];
    CAnimUpdateNodeRef m_pStanceSourceNode; // 0x88
    CAnimParamHandle m_hParameter; // 0x98
    StanceOverrideMode m_eMode; // 0x9c
}; // size: 0xa0

/// CNmStateMachineNode::StateDefinition_t
class __declspec(align(8)) CNmStateMachineNode__StateDefinition_t {
public:
    int16_t m_nStateNodeIdx; // 0x0
    int16_t m_nEntryConditionNodeIdx; // 0x2
    // CUtlLeanVectorFixedGrowable< CNmStateMachineNode::TransitionDefinition_t, 5 > m_transitionDefinitions;
    char pad_00[52];
}; // size: 0x38

class __declspec(align(8)) CNmCachedPoseReadTask {
public:
    char pad_00[96];
}; // size: 0x60

class __declspec(align(8)) CVectorAnimParameter {
public:
    // Vector m_defaultValue;
    char pad_00[140];
    bool m_bInterpolate; // 0x8c
    AnimParamVectorType_t m_vectorType; // 0x90
    char pad_01[4];
}; // size: 0x98

class __declspec(align(8)) CAnimGraphDebugReplay {
public:
    // CUtlString m_animGraphFileName;
    // CUtlVector< CSmartPtr< CAnimReplayFrame > > m_frameList;
    char pad_00[96];
    int32_t m_startIndex; // 0x60
    int32_t m_writeIndex; // 0x64
    int32_t m_frameCount; // 0x68
    char pad_01[4];
}; // size: 0x70

/// CNmVirtualParameterTargetNode::CDefinition
class __declspec(align(8)) CNmVirtualParameterTargetNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx; // 0x10
    char pad_01[6];
}; // size: 0x18

class __declspec(align(8)) CAnimGraphSettingsGroup {
public:
    char pad_00[32];
}; // size: 0x20

class __declspec(align(1)) CNmPoseTask {
public:
    char pad_00[88];
}; // size: 0x58

class __declspec(align(4)) CSeqTransition {
public:
    float m_flFadeInTime; // 0x0
    float m_flFadeOutTime; // 0x4
}; // size: 0x8

/// CNmVectorValueNode::CDefinition
class __declspec(align(1)) CNmVectorValueNode__CDefinition {
public:
    char pad_00[16];
}; // size: 0x10

class __declspec(align(8)) CNmBlendTask {
public:
    char pad_00[224];
}; // size: 0xe0

class __declspec(align(16)) AnimationSnapshot_t {
public:
    char pad_00[272];
    int32_t m_nEntIndex; // 0x110
    // CUtlString m_modelName;
    char pad_01[12];
}; // size: 0x120

/// CNmVectorInfoNode::CDefinition
class __declspec(align(8)) CNmVectorInfoNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx; // 0x10
    // CNmVectorInfoNode::Info_t m_desiredInfo;
    char pad_01[6];
}; // size: 0x18

class __declspec(align(8)) CMotionGraph {
public:
    char pad_00[16];
    CParamSpanUpdater m_paramSpans; // 0x10
    // CUtlVector< TagSpan_t > m_tags;
    // CSmartPtr< CMotionNode > m_pRootNode;
    char pad_01[32];
    int32_t m_nParameterCount; // 0x48
    int32_t m_nConfigStartIndex; // 0x4c
    int32_t m_nConfigCount; // 0x50
    bool m_bLoop; // 0x54
    char pad_02[3];
}; // size: 0x58

class __declspec(align(8)) CPerParticleVecInput {
public:
    char pad_00[1720];
}; // size: 0x6b8

class __declspec(align(8)) CAnimTagBase {
public:
    // CGlobalSymbol m_name;
    // CUtlString m_sComment;
    // CGlobalSymbol m_group;
    char pad_00[48];
    AnimTagID m_tagID; // 0x30
    char pad_01[20];
    bool m_bIsReferenced; // 0x48
    char pad_02[7];
}; // size: 0x50

/// CNmPoseNode::CDefinition
class __declspec(align(1)) CNmPoseNode__CDefinition {
public:
    char pad_00[16];
}; // size: 0x10

class __declspec(align(4)) HitReactFixedSettings_t {
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

/// CNmIDEventNode::CDefinition
class __declspec(align(8)) CNmIDEventNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx; // 0x10
    CNmBitFlags m_eventConditionRules; // 0x14
    // CGlobalSymbol m_defaultValue;
    char pad_01[8];
}; // size: 0x20

/// CNmBoneMaskBlendNode::CDefinition
class __declspec(align(8)) CNmBoneMaskBlendNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceMaskNodeIdx; // 0x10
    int16_t m_nTargetMaskNodeIdx; // 0x12
    int16_t m_nBlendWeightValueNodeIdx; // 0x14
    char pad_01[2];
}; // size: 0x18

class __declspec(align(4)) PulseRuntimeInvokeIndex_t {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

class __declspec(align(8)) CStanceScaleUpdateNode {
public:
    char pad_00[112];
    CAnimParamHandle m_hParam; // 0x70
    char pad_01[6];
}; // size: 0x78

class __declspec(align(8)) CPulse_Chunk {
public:
    // CUtlLeanVector< PGDInstruction_t > m_Instructions;
    // CUtlLeanVector< CPulse_RegisterInfo > m_Registers;
    // CUtlLeanVector< CPulse_InstructionDebug > m_InstructionDebugInfos;
    char pad_00[88];
}; // size: 0x58

class __declspec(align(1)) IKBoneNameAndIndex_t {
public:
    // CUtlString m_Name;
    char pad_00[16];
}; // size: 0x10

class __declspec(align(4)) StanceInfo_t {
public:
    // Vector m_vPosition;
    char pad_00[12];
    float m_flDirection; // 0xc
}; // size: 0x10

class __declspec(align(8)) PermModelInfo_t {
public:
    uint32_t m_nFlags; // 0x0
    // Vector m_vHullMin;
    // Vector m_vHullMax;
    // Vector m_vViewMin;
    // Vector m_vViewMax;
    char pad_00[48];
    float m_flMass; // 0x34
    // Vector m_vEyePosition;
    char pad_01[12];
    float m_flMaxEyeDeflection; // 0x44
    // CUtlString m_sSurfaceProperty;
    // CUtlString m_keyValueText;
    char pad_02[16];
}; // size: 0x58

class __declspec(align(1)) CSeqSeqDescFlag {
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

class __declspec(align(2)) PulseRuntimeDomainValueIndex_t {
public:
    int16_t m_Value; // 0x0
}; // size: 0x2

class __declspec(align(8)) CAimCameraUpdateNode {
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

class __declspec(align(4)) PulseRuntimeEntrypointIndex_t {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

/// CNmGraphDefinition::ExternalGraphSlot_t
class __declspec(align(8)) CNmGraphDefinition__ExternalGraphSlot_t {
public:
    int16_t m_nNodeIdx; // 0x0
    // CGlobalSymbol m_slotID;
    char pad_00[14];
}; // size: 0x10

/// CNmClipReferenceNode::CDefinition
class __declspec(align(1)) CNmClipReferenceNode__CDefinition {
public:
    char pad_00[16];
}; // size: 0x10

/// CNmPassthroughNode::CDefinition
class __declspec(align(8)) CNmPassthroughNode__CDefinition {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx; // 0x10
    char pad_01[6];
}; // size: 0x18

class __declspec(align(8)) CSequenceUpdateNode {
public:
    char pad_00[120];
    HSequence m_hSequence; // 0x78
    float m_duration; // 0x7c
    CParamSpanUpdater m_paramSpans; // 0x80
    // CUtlVector< TagSpan_t > m_tags;
    char pad_01[24];
}; // size: 0xb0

class __declspec(align(8)) VPhysXCollisionAttributes_t {
public:
    int32_t m_nIncludeDetailLayerCount; // 0x0
    uint32_t m_CollisionGroup; // 0x4
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
}; // size: 0xd0

class __declspec(align(2)) ConfigIndex {
public:
    uint16_t m_nGroup; // 0x0
    uint16_t m_nConfig; // 0x2
}; // size: 0x4

class __declspec(align(4)) PulseRuntimeVarIndex_t {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

class __declspec(align(8)) MovementGaitId_t {
public:
    // CGlobalSymbol m_sId;
    char pad_00[8];
}; // size: 0x8

class __declspec(align(8)) AnimationDecodeDebugDumpElement_t {
public:
    int32_t m_nEntityIndex; // 0x0
    // CUtlString m_modelName;
    // CUtlVector< CUtlString > m_poseParams;
    // CUtlVector< CUtlString > m_decodeOps;
    // CUtlVector< CUtlString > m_internalOps;
    // CUtlVector< CUtlString > m_decodedAnims;
    char pad_00[108];
}; // size: 0x70

class __declspec(align(8)) CAnimScriptManager {
public:
    // CUtlVector< ScriptInfo_t > m_scriptInfo;
    char pad_00[416];
}; // size: 0x1a0

class __declspec(align(8)) CAnimActivity {
public:
    // CBufferString m_name;
    char pad_00[16];
    int32_t m_nActivity; // 0x10
    int32_t m_nFlags; // 0x14
    int32_t m_nWeight; // 0x18
    char pad_01[4];
}; // size: 0x20

class __declspec(align(8)) CMotionSearchNode {
public:
    // CUtlVector< CMotionSearchNode* > m_children;
    char pad_00[24];
    CVectorQuantizer m_quantizer; // 0x18
    // CUtlVector< CUtlVector< SampleCode > > m_sampleCodes;
    // CUtlVector< CUtlVector< int32 > > m_sampleIndices;
    // CUtlVector< int32 > m_selectableSamples;
    char pad_01[72];
}; // size: 0x80

class __declspec(align(4)) CMotionGraphConfig {
public:
    float m_paramValues[4]; // 0x0
    float m_flDuration; // 0x10
    MotionIndex m_nMotionIndex; // 0x14
    int32_t m_nSampleStart; // 0x18
    int32_t m_nSampleCount; // 0x1c
}; // size: 0x20

class __declspec(align(8)) CTaskStatusAnimTag {
public:
    char pad_00[88];
}; // size: 0x58

/// CNmTransitionEventConditionNode::CDefinition
class __declspec(align(8)) CNmTransitionEventConditionNode__CDefinition {
public:
    // CGlobalSymbol m_requireRuleID;
    char pad_00[24];
    CNmBitFlags m_eventConditionRules; // 0x18
    int16_t m_nSourceStateNodeIdx; // 0x1c
    NmTransitionRuleCondition_t m_ruleCondition; // 0x1e
    char pad_01[1];
}; // size: 0x20

class __declspec(align(8)) CCachedPose {
public:
    // CUtlVector< CTransform > m_transforms;
    // CUtlVector< float32 > m_morphWeights;
    char pad_00[56];
    HSequence m_hSequence; // 0x38
    float m_flCycle; // 0x3c
}; // size: 0x40

class __declspec(align(1)) SampleCode {
public:
    uint8_t m_subCode[8]; // 0x0
}; // size: 0x8

class __declspec(align(8)) CAnimEncodedFrames {
public:
    // CBufferString m_fileName;
    char pad_00[16];
    int32_t m_nFrames; // 0x10
    int32_t m_nFramesPerBlock; // 0x14
    // CUtlVector< CAnimFrameBlockAnim > m_frameblockArray;
    char pad_01[24];
    CAnimEncodeDifference m_usageDifferences; // 0x30
}; // size: 0xd8

class __declspec(align(8)) CSeqBoneMaskList {
public:
    // CBufferString m_sName;
    // CUtlVector< int16 > m_nLocalBoneArray;
    // CUtlVector< float32 > m_flBoneWeightArray;
    char pad_00[64];
    float m_flDefaultMorphCtrlWeight; // 0x40
    // CUtlVector< std::pair< CBufferString, float32 > > m_morphCtrlWeightArray;
    char pad_01[28];
}; // size: 0x60

class __declspec(align(8)) CNmSyncTrack {
public:
    // CUtlLeanVectorFixedGrowable< CNmSyncTrack::Event_t, 10 > m_syncEvents;
    char pad_00[168];
    int32_t m_nStartEventOffset; // 0xa8
    char pad_01[4];
}; // size: 0xb0

class __declspec(align(4)) AnimNodeOutputID {
public:
    uint32_t m_id; // 0x0
}; // size: 0x4

class __declspec(align(4)) CAnimNodePath {
public:
    AnimNodeID m_path; // 0x0
    char pad_00[40];
    int32_t m_nCount; // 0x2c
}; // size: 0x30

class __declspec(align(8)) CNmFrameSnapEvent {
public:
    char pad_00[32];
    NmFrameSnapEventMode_t m_frameSnapMode; // 0x20
    char pad_01[4];
}; // size: 0x28

class __declspec(align(8)) CNmScaleTask {
public:
    char pad_00[176];
}; // size: 0xb0

/// CNmParameterizedBlendNode::CDefinition
class __declspec(align(8)) CNmParameterizedBlendNode__CDefinition {
public:
    // CUtlVectorFixedGrowable< int16, 5 > m_sourceNodeIndices;
    char pad_00[56];
    int16_t m_nInputParameterValueNodeIdx; // 0x38
    bool m_bAllowLooping; // 0x3a
    char pad_01[5];
}; // size: 0x40

class __declspec(align(8)) CIntAnimParameter {
public:
    char pad_00[128];
    int32_t m_defaultValue; // 0x80
    int32_t m_minValue; // 0x84
    int32_t m_maxValue; // 0x88
    char pad_01[4];
}; // size: 0x90

class __declspec(align(8)) CInputStreamUpdateNode {
public:
    char pad_00[96];
}; // size: 0x60

class __declspec(align(8)) CParticleModelInput {
public:
    char pad_00[16];
    ParticleModelType_t m_nType; // 0x10
    // CParticleNamedValueRef m_NamedValue;
    char pad_01[68];
    int32_t m_nControlPoint; // 0x58
    char pad_02[4];
}; // size: 0x60

class __declspec(align(4)) CFootCycle {
public:
    char pad_00[4];
}; // size: 0x4

class __declspec(align(8)) CSceneObjectData {
public:
    // Vector m_vMinBounds;
    // Vector m_vMaxBounds;
    // CUtlLeanVector< CMaterialDrawDescriptor > m_drawCalls;
    // CUtlLeanVector< AABB_t > m_drawBounds;
    // CUtlLeanVector< CMeshletDescriptor > m_meshlets;
    // CUtlLeanVector< CSceneObjectData::RTProxyDrawDescriptor_t > m_rtProxyDrawCalls;
    // Vector4D m_vTintColor;
    char pad_00[160];
}; // size: 0xa0

class __declspec(align(8)) CSequenceFinishedAnimTag {
public:
    // CUtlString m_sequenceName;
    char pad_00[96];
}; // size: 0x60

class __declspec(align(4)) CAnimParameterBase {
public:
    // CGlobalSymbol m_name;
    // CUtlString m_sComment;
    // CUtlString m_group;
    char pad_00[48];
    AnimParamID m_id; // 0x30
    // CUtlString m_componentName;
    char pad_01[52];
    bool m_bNetworkingRequested; // 0x68
    bool m_bIsReferenced; // 0x69
    char pad_02[6];
}; // size: 0x70

class __declspec(align(8)) COrientationWarpUpdateNode {
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

class __declspec(align(8)) CSlowDownOnSlopesUpdateNode {
public:
    char pad_00[112];
    float m_flSlowDownStrength; // 0x70
    char pad_01[4];
}; // size: 0x78

class __declspec(align(8)) CZeroPoseUpdateNode {
public:
    char pad_00[96];
}; // size: 0x60

class __declspec(align(8)) CAnimFrameBlockAnim {
public:
    int32_t m_nStartFrame; // 0x0
    int32_t m_nEndFrame; // 0x4
    // CUtlVector< int32 > m_segmentIndexArray;
    char pad_00[24];
}; // size: 0x20

class __declspec(align(4)) FeHingeLimitBuild_t {
public:
    uint16_t nNode[6]; // 0x0
    uint32_t nFlags; // 0xc
    float flLimitCW; // 0x10
    float flLimitCCW; // 0x14
}; // size: 0x18

class __declspec(align(4)) FeFitInfluence_t {
public:
    uint32_t nVertexNode; // 0x0
    float flWeight; // 0x4
    uint32_t nMatrixNode; // 0x8
}; // size: 0xc

class __declspec(align(1)) VertexPositionColor_t {
public:
    // Vector m_vPosition;
    char pad_00[16];
}; // size: 0x10

class __declspec(align(16)) FeSimdTri_t {
public:
    uint32_t nNode[4]; // 0x0
    // fltx4 w1;
    // fltx4 w2;
    // fltx4 v1x;
    // FourVectors2D v2;
    char pad_00[112];
}; // size: 0x80

class __declspec(align(1)) RnHalfEdge_t {
public:
    uint8_t m_nNext; // 0x0
    uint8_t m_nTwin; // 0x1
    uint8_t m_nOrigin; // 0x2
    uint8_t m_nFace; // 0x3
}; // size: 0x4

class __declspec(align(4)) FeFitWeight_t {
public:
    float flWeight; // 0x0
    uint16_t nNode; // 0x4
    uint16_t nDummy; // 0x6
}; // size: 0x8

class __declspec(align(4)) FeRodConstraint_t {
public:
    uint16_t nNode[2]; // 0x0
    float flMaxDist; // 0x4
    float flMinDist; // 0x8
    float flWeight0; // 0xc
    float flRelaxationFactor; // 0x10
}; // size: 0x14

class __declspec(align(2)) FeTreeChildren_t {
public:
    uint16_t nChild[2]; // 0x0
}; // size: 0x4

class __declspec(align(8)) RnShapeDesc_t {
public:
    uint32_t m_nCollisionAttributeIndex; // 0x0
    uint32_t m_nSurfacePropertyIndex; // 0x4
    // CUtlString m_UserFriendlyName;
    char pad_00[8];
    bool m_bUserFriendlyNameSealed; // 0x10
    bool m_bUserFriendlyNameLong; // 0x11
    uint32_t m_nToolMaterialHash; // 0x14
}; // size: 0x18

class __declspec(align(4)) FeSoftParent_t {
public:
    int32_t nParent; // 0x0
    float flAlpha; // 0x4
}; // size: 0x8

class __declspec(align(16)) FeBuildTaperedCapsuleRigid_t {
public:
    char pad_00[48];
    int32_t m_nPriority; // 0x30
    uint32_t m_nVertexMapHash; // 0x34
    uint32_t m_nAntitunnelGroupBits; // 0x38
    char pad_01[4];
}; // size: 0x40

/// CollisionDetailLayerInfo_t::Name_t
class __declspec(align(8)) CollisionDetailLayerInfo_t__Name_t {
public:
    // CUtlStringToken m_nNameToken;
    // CUtlString m_sNameString;
    char pad_00[16];
}; // size: 0x10

class __declspec(align(16)) FeSphereRigid_t {
public:
    // fltx4 vSphere;
    char pad_00[16];
    uint16_t nNode; // 0x10
    uint16_t nCollisionMask; // 0x12
    uint16_t nVertexMapIndex; // 0x14
    uint16_t nFlags; // 0x16
    char pad_01[8];
}; // size: 0x20

class __declspec(align(4)) constraint_breakableparams_t {
public:
    float strength; // 0x0
    float forceLimit; // 0x4
    float torqueLimit; // 0x8
    float bodyMassScale[2]; // 0xc
    bool isActive; // 0x14
    char pad_00[3];
}; // size: 0x18

class __declspec(align(16)) FourCovMatrices3 {
public:
    // FourVectors m_vDiag;
    // fltx4 m_flXY;
    // fltx4 m_flXZ;
    // fltx4 m_flYZ;
    char pad_00[96];
}; // size: 0x60

class __declspec(align(4)) FeAxialEdgeBend_t {
public:
    float te; // 0x0
    float tv; // 0x4
    float flDist; // 0x8
    float flWeight[4]; // 0xc
    uint16_t nNode[6]; // 0x1c
}; // size: 0x28

class __declspec(align(2)) FeNodeWindBase_t {
public:
    uint16_t nNodeX0; // 0x0
    uint16_t nNodeX1; // 0x2
    uint16_t nNodeY0; // 0x4
    uint16_t nNodeY1; // 0x6
}; // size: 0x8

class __declspec(align(4)) FeTwistConstraint_t {
public:
    uint16_t nNodeOrient; // 0x0
    uint16_t nNodeEnd; // 0x2
    float flTwistRelax; // 0x4
    float flSwingRelax; // 0x8
}; // size: 0xc

class __declspec(align(2)) FeSourceEdge_t {
public:
    uint16_t nNode[2]; // 0x0
}; // size: 0x4

class __declspec(align(4)) FeAntiTunnelProbe_t {
public:
    float flWeight; // 0x0
    uint32_t nFlags; // 0x4
    uint16_t nProbeNode; // 0x8
    uint16_t nCount; // 0xa
    uint32_t nBegin; // 0xc
    float flActivationDistance; // 0x10
    float flCurvatureRadius; // 0x14
    float flBias; // 0x18
}; // size: 0x1c

class __declspec(align(4)) FeCtrlOsOffset_t {
public:
    uint16_t nCtrlParent; // 0x0
    uint16_t nCtrlChild; // 0x2
}; // size: 0x4

class __declspec(align(1)) RnFace_t {
public:
    uint8_t m_nEdge; // 0x0
}; // size: 0x1

class __declspec(align(2)) FeDynKinLink_t {
public:
    uint16_t m_nParent; // 0x0
    uint16_t m_nChild; // 0x2
}; // size: 0x4

class __declspec(align(4)) Dop26_t {
public:
    float m_flSupport[26]; // 0x0
}; // size: 0x68

class __declspec(align(1)) RnVertex_t {
public:
    uint8_t m_nEdge; // 0x0
}; // size: 0x1

class __declspec(align(4)) PhysicsParticleId_t {
public:
    uint32_t m_Value; // 0x0
}; // size: 0x4

class __declspec(align(4)) CovMatrix3 {
public:
    // Vector m_vDiag;
    char pad_00[12];
    float m_flXY; // 0xc
    float m_flXZ; // 0x10
    float m_flYZ; // 0x14
}; // size: 0x18

class __declspec(align(4)) FeAntiTunnelGroupBuild_t {
public:
    uint32_t m_nVertexMapHash; // 0x0
    uint32_t m_nCollisionMask; // 0x4
}; // size: 0x8

class __declspec(align(8)) FeModelSelfCollisionLayer_t {
public:
    // CUtlString m_Name;
    // CUtlVector< uint16 > m_Nodes;
    char pad_00[32];
    float m_flParentReaction; // 0x20
    uint32_t m_nFlags; // 0x24
    uint32_t m_nEndIdx[4]; // 0x28
}; // size: 0x38

class __declspec(align(8)) RnHull_t {
public:
    // Vector m_vCentroid;
    char pad_00[12];
    float m_flMaxAngularRadius; // 0xc
    AABB_t m_Bounds; // 0x10
    // Vector m_vOrthographicAreas;
    // matrix3x4_t m_MassProperties;
    char pad_01[60];
    float m_flVolume; // 0x64
    float m_flSurfaceArea; // 0x68
    // CUtlVector< RnVertex_t > m_Vertices;
    // CUtlVector< Vector > m_VertexPositions;
    // CUtlVector< RnHalfEdge_t > m_Edges;
    // CUtlVector< RnFace_t > m_Faces;
    // CUtlVector< RnPlane_t > m_FacePlanes;
    char pad_02[124];
    uint32_t m_nFlags; // 0xe8
    CRegionSVM* m_pRegionSVM; // 0xf0
}; // size: 0xf8

class __declspec(align(4)) FeTri_t {
public:
    uint16_t nNode[3]; // 0x0
    float w1; // 0x8
    float w2; // 0xc
    float v1x; // 0x10
    // Vector2D v2;
    char pad_00[8];
}; // size: 0x1c

class __declspec(align(8)) CFeVertexMapBuildArray {
public:
    // CUtlVector< FeVertexMapBuild_t* > m_Array;
    char pad_00[24];
}; // size: 0x18

class __declspec(align(8)) FeVertexMapBuild_t {
public:
    // CUtlString m_VertexMapName;
    char pad_00[8];
    uint32_t m_nNameHash; // 0x8
    // Color m_Color;
    char pad_01[4];
    float m_flVolumetricSolveStrength; // 0x10
    int32_t m_nScaleSourceNode; // 0x14
    // CUtlVector< float32 > m_Weights;
    char pad_02[24];
}; // size: 0x30

class __declspec(align(16)) FeNodeBase_t {
public:
    uint16_t nNode; // 0x0
    uint16_t nDummy[3]; // 0x2
    uint16_t nNodeX0; // 0x8
    uint16_t nNodeX1; // 0xa
    uint16_t nNodeY0; // 0xc
    uint16_t nNodeY1; // 0xe
    // QuaternionStorage qAdjust;
    char pad_00[16];
}; // size: 0x20

class __declspec(align(1)) IPhysicsPlayerController {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(4)) FeCtrlOffset_t {
public:
    // Vector vOffset;
    char pad_00[12];
    uint16_t nCtrlParent; // 0xc
    uint16_t nCtrlChild; // 0xe
}; // size: 0x10

class __declspec(align(8)) FeMorphLayerDepr_t {
public:
    // CUtlString m_Name;
    char pad_00[8];
    uint32_t m_nNameHash; // 0x8
    // CUtlVector< uint16 > m_Nodes;
    // CUtlVector< Vector > m_InitPos;
    // CUtlVector< float32 > m_Gravity;
    // CUtlVector< float32 > m_GoalStrength;
    // CUtlVector< float32 > m_GoalDamping;
    char pad_01[124];
    uint32_t m_nFlags; // 0x88
    char pad_02[4];
}; // size: 0x90

class __declspec(align(16)) FeBoxRigid_t {
public:
    // CTransform tmFrame2;
    char pad_00[32];
    uint16_t nNode; // 0x20
    uint16_t nCollisionMask; // 0x22
    // Vector vSize;
    char pad_01[12];
    uint16_t nVertexMapIndex; // 0x30
    uint16_t nFlags; // 0x32
    char pad_02[12];
}; // size: 0x40

class __declspec(align(4)) FeStiffHingeBuild_t {
public:
    float flMaxAngle; // 0x0
    float flStrength; // 0x4
    float flMotionBias[3]; // 0x8
    uint16_t nNode[3]; // 0x14
    char pad_00[2];
}; // size: 0x1c

class __declspec(align(4)) FeCollisionPlane_t {
public:
    uint16_t nCtrlParent; // 0x0
    uint16_t nChildNode; // 0x2
    // RnPlane_t m_Plane;
    char pad_00[16];
    float flStrength; // 0x14
}; // size: 0x18

class __declspec(align(2)) FeRigidColliderIndices_t {
public:
    uint16_t m_nTaperedCapsuleRigidIndex; // 0x0
    uint16_t m_nSphereRigidIndex; // 0x2
    uint16_t m_nBoxRigidIndex; // 0x4
    uint16_t m_nSDFRigidIndex; // 0x6
    uint16_t m_nCollisionPlaneIndex; // 0x8
}; // size: 0xa

class __declspec(align(8)) CastSphereSATParams_t {
public:
    // Vector m_vRayStart;
    // Vector m_vRayDelta;
    char pad_00[24];
    float m_flRadius; // 0x18
    float m_flMaxFraction; // 0x1c
    float m_flScale; // 0x20
    RnHull_t* m_pHull; // 0x28
}; // size: 0x30

class __declspec(align(4)) FeKelagerBend2_t {
public:
    float flWeight[3]; // 0x0
    float flHeight0; // 0xc
    uint16_t nNode[3]; // 0x10
    uint16_t nReserved; // 0x16
}; // size: 0x18

class __declspec(align(16)) FourVectors2D {
public:
    // fltx4 x;
    // fltx4 y;
    char pad_00[32];
}; // size: 0x20

class __declspec(align(4)) FeSpringIntegrator_t {
public:
    uint16_t nNode[2]; // 0x0
    float flSpringRestLength; // 0x4
    float flSpringConstant; // 0x8
    float flSpringDamping; // 0xc
    float flNodeWeight0; // 0x10
}; // size: 0x14

class __declspec(align(8)) FeEffectDesc_t {
public:
    // CUtlString sName;
    char pad_00[8];
    uint32_t nNameHash; // 0x8
    int32_t nType; // 0xc
    // KeyValues3 m_Params;
    char pad_01[16];
}; // size: 0x20

class __declspec(align(8)) CollisionDetailLayerInfo_t {
public:
    // CUtlString m_sDescription;
    // CUtlString m_sFriendlyName;
    char pad_00[16];
    bool m_bIsQueryOnly; // 0x10
    // CUtlString m_sParentDetailLayer;
    // CUtlVector< CollisionDetailLayerInfo_t::Name_t > m_vecSubtreeDetailLayers;
    char pad_01[39];
    bool m_bNotPickable; // 0x38
    char pad_02[7];
}; // size: 0x40

class __declspec(align(2)) FeWeightedNode_t {
public:
    uint16_t nNode; // 0x0
    uint16_t nWeight; // 0x2
}; // size: 0x4

class __declspec(align(4)) RnWing_t {
public:
    int32_t m_nIndex[3]; // 0x0
}; // size: 0xc

class __declspec(align(4)) FeHingeLimit_t {
public:
    uint16_t nNode[6]; // 0x0
    uint32_t nFlags; // 0xc
    float flWeight4; // 0x10
    float flWeight5; // 0x14
    float flAngleCenter; // 0x18
    float flAngleExtents; // 0x1c
}; // size: 0x20

class __declspec(align(4)) FeQuad_t {
public:
    uint16_t nNode[4]; // 0x0
    float flSlack; // 0x8
    // Vector4D[4] vShape;
    char pad_00[64];
}; // size: 0x4c

class __declspec(align(16)) FeSimdNodeBase_t {
public:
    uint16_t nNode[4]; // 0x0
    uint16_t nNodeX0[4]; // 0x8
    uint16_t nNodeX1[4]; // 0x10
    uint16_t nNodeY0[4]; // 0x18
    uint16_t nNodeY1[4]; // 0x20
    uint16_t nDummy[4]; // 0x28
    FourQuaternions qAdjust; // 0x30
}; // size: 0x70

class __declspec(align(16)) FeSimdSpringIntegrator_t {
public:
    uint16_t nNode[4]; // 0x0
    // fltx4 flSpringRestLength;
    // fltx4 flSpringConstant;
    // fltx4 flSpringDamping;
    // fltx4 flNodeWeight0;
    char pad_00[72];
}; // size: 0x50

class __declspec(align(16)) FeSimdQuad_t {
public:
    uint16_t nNode[4]; // 0x0
    // fltx4 f4Slack;
    // FourVectors[4] vShape;
    // fltx4[4] f4Weights;
    char pad_00[296];
}; // size: 0x130

class __declspec(align(16)) FeFitMatrix_t {
public:
    // CTransform bone;
    // Vector vCenter;
    char pad_00[44];
    uint16_t nEnd; // 0x2c
    uint16_t nNode; // 0x2e
    uint16_t nBeginDynamic; // 0x30
    char pad_01[14];
}; // size: 0x40

class __declspec(align(16)) RnNode_t {
public:
    // Vector m_vMin;
    char pad_00[12];
    uint32_t m_nChildren; // 0xc
    // Vector m_vMax;
    char pad_01[12];
    uint32_t m_nTriangleOffset; // 0x1c
}; // size: 0x20

class __declspec(align(4)) FeWorldCollisionParams_t {
public:
    float flWorldFriction; // 0x0
    float flGroundFriction; // 0x4
    uint16_t nListBegin; // 0x8
    uint16_t nListEnd; // 0xa
}; // size: 0xc

class __declspec(align(8)) CRegionSVM {
public:
    // CUtlVector< RnPlane_t > m_Planes;
    // CUtlVector< uint32 > m_Nodes;
    char pad_00[48];
}; // size: 0x30

class __declspec(align(4)) CFeJiggleBone {
public:
    uint32_t m_nFlags; // 0x0
    float m_flLength; // 0x4
    float m_flTipMass; // 0x8
    float m_flYawStiffness; // 0xc
    float m_flYawDamping; // 0x10
    float m_flPitchStiffness; // 0x14
    float m_flPitchDamping; // 0x18
    float m_flAlongStiffness; // 0x1c
    float m_flAlongDamping; // 0x20
    float m_flAngleLimit; // 0x24
    float m_flMinYaw; // 0x28
    float m_flMaxYaw; // 0x2c
    float m_flYawFriction; // 0x30
    float m_flYawBounce; // 0x34
    float m_flMinPitch; // 0x38
    float m_flMaxPitch; // 0x3c
    float m_flPitchFriction; // 0x40
    float m_flPitchBounce; // 0x44
    float m_flBaseMass; // 0x48
    float m_flBaseStiffness; // 0x4c
    float m_flBaseDamping; // 0x50
    float m_flBaseMinLeft; // 0x54
    float m_flBaseMaxLeft; // 0x58
    float m_flBaseLeftFriction; // 0x5c
    float m_flBaseMinUp; // 0x60
    float m_flBaseMaxUp; // 0x64
    float m_flBaseUpFriction; // 0x68
    float m_flBaseMinForward; // 0x6c
    float m_flBaseMaxForward; // 0x70
    float m_flBaseForwardFriction; // 0x74
    float m_flRadius0; // 0x78
    float m_flRadius1; // 0x7c
    // Vector m_vPoint0;
    // Vector m_vPoint1;
    char pad_00[24];
    uint16_t m_nCollisionMask; // 0x98
    char pad_01[2];
}; // size: 0x9c

class __declspec(align(8)) FeSDFRigid_t {
public:
    // Vector vLocalMin;
    // Vector vLocalMax;
    char pad_00[24];
    float flBounciness; // 0x18
    uint16_t nNode; // 0x1c
    uint16_t nCollisionMask; // 0x1e
    uint16_t nVertexMapIndex; // 0x20
    uint16_t nFlags; // 0x22
    // CUtlVector< float32 > m_Distances;
    char pad_01[28];
    int32_t m_nWidth; // 0x40
    int32_t m_nHeight; // 0x44
    int32_t m_nDepth; // 0x48
    char pad_02[4];
}; // size: 0x50

class __declspec(align(4)) RnPlane_t {
public:
    // Vector m_vNormal;
    char pad_00[12];
    float m_flOffset; // 0xc
}; // size: 0x10

class __declspec(align(4)) FeNodeReverseOffset_t {
public:
    // Vector vOffset;
    char pad_00[12];
    uint16_t nBoneCtrl; // 0xc
    uint16_t nTargetNode; // 0xe
}; // size: 0x10

class __declspec(align(16)) FeNodeStrayBox_t {
public:
    // Vector vMin;
    char pad_00[12];
    uint32_t nFlags; // 0xc
    // Vector vMax;
    char pad_01[12];
    uint16_t nNode[2]; // 0x1c
}; // size: 0x20

class __declspec(align(2)) FeEdgeDesc_t {
public:
    uint16_t nEdge[2]; // 0x0
    uint16_t nSide[2]; // 0x4
    char pad_00[4];
    uint16_t nVirtElem[2]; // 0xc
}; // size: 0x10

class __declspec(align(4)) FeAnimStrayRadius_t {
public:
    uint16_t nNode[2]; // 0x0
    float flMaxDist; // 0x4
    float flRelaxationFactor; // 0x8
}; // size: 0xc

class __declspec(align(16)) FeTaperedCapsuleRigid_t {
public:
    // fltx4[2] vSphere;
    char pad_00[32];
    uint16_t nNode; // 0x20
    uint16_t nCollisionMask; // 0x22
    uint16_t nVertexMapIndex; // 0x24
    uint16_t nFlags; // 0x26
    char pad_01[8];
}; // size: 0x30

class __declspec(align(8)) FeVertexMapDesc_t {
public:
    // CUtlString sName;
    char pad_00[8];
    uint32_t nNameHash; // 0x8
    uint32_t nColor; // 0xc
    uint32_t nFlags; // 0x10
    uint16_t nVertexBase; // 0x14
    uint16_t nVertexCount; // 0x16
    uint32_t nMapOffset; // 0x18
    uint32_t nNodeListOffset; // 0x1c
    // Vector vCenterOfMass;
    char pad_01[12];
    float flVolumetricSolveStrength; // 0x2c
    int16_t nScaleSourceNode; // 0x30
    uint16_t nNodeListCount; // 0x32
    char pad_02[4];
}; // size: 0x38

class __declspec(align(4)) FeCtrlSoftOffset_t {
public:
    uint16_t nCtrlParent; // 0x0
    uint16_t nCtrlChild; // 0x2
    // Vector vOffset;
    char pad_00[12];
    float flAlpha; // 0x10
}; // size: 0x14

class __declspec(align(8)) CFeMorphLayer {
public:
    // CUtlString m_Name;
    char pad_00[8];
    uint32_t m_nNameHash; // 0x8
    // CUtlVector< uint16 > m_Nodes;
    // CUtlVector< Vector > m_InitPos;
    // CUtlVector< float32 > m_Gravity;
    // CUtlVector< float32 > m_GoalStrength;
    // CUtlVector< float32 > m_GoalDamping;
    char pad_01[124];
}; // size: 0x88

class __declspec(align(16)) RnBlendVertex_t {
public:
    uint16_t m_nWeight0; // 0x0
    uint16_t m_nIndex0; // 0x2
    uint16_t m_nWeight1; // 0x4
    uint16_t m_nIndex1; // 0x6
    uint16_t m_nWeight2; // 0x8
    uint16_t m_nIndex2; // 0xa
    uint16_t m_nFlags; // 0xc
    uint16_t m_nTargetIndex; // 0xe
}; // size: 0x10

class __declspec(align(8)) FeBuildSDFRigid_t {
public:
    char pad_00[80];
    int32_t m_nPriority; // 0x50
    uint32_t m_nVertexMapHash; // 0x54
    uint32_t m_nAntitunnelGroupBits; // 0x58
    char pad_01[4];
}; // size: 0x60

class __declspec(align(1)) VertexPositionNormal_t {
public:
    // Vector m_vPosition;
    // Vector m_vNormal;
    char pad_00[24];
}; // size: 0x18

class __declspec(align(8)) RnMesh_t {
public:
    // Vector m_vMin;
    // Vector m_vMax;
    // CUtlVector< RnNode_t > m_Nodes;
    // CUtlVectorSIMDPaddedVector m_Vertices;
    // CUtlVector< RnTriangle_t > m_Triangles;
    // CUtlVector< RnWing_t > m_Wings;
    // CUtlVector< uint8 > m_TriangleEdgeFlags;
    // CUtlVector< uint8 > m_Materials;
    // Vector m_vOrthographicAreas;
    char pad_00[180];
    uint32_t m_nFlags; // 0xb4
    uint32_t m_nDebugFlags; // 0xb8
    char pad_01[4];
}; // size: 0xc0

class __declspec(align(4)) FeFollowNode_t {
public:
    uint16_t nParentNode; // 0x0
    uint16_t nChildNode; // 0x2
    float flWeight; // 0x4
}; // size: 0x8

class __declspec(align(4)) OldFeEdge_t {
public:
    float m_flK[3]; // 0x0
    float invA; // 0xc
    float t; // 0x10
    float flThetaRelaxed; // 0x14
    float flThetaFactor; // 0x18
    float c01; // 0x1c
    float c02; // 0x20
    float c03; // 0x24
    float c04; // 0x28
    float flAxialModelDist; // 0x2c
    float flAxialModelWeights[4]; // 0x30
    uint16_t m_nNode[4]; // 0x40
}; // size: 0x48

class __declspec(align(8)) RnBodyDesc_t {
public:
    // CUtlString m_sDebugName;
    // Vector m_vPosition;
    // QuaternionStorage m_qOrientation;
    // Vector m_vLinearVelocity;
    // Vector m_vAngularVelocity;
    // Vector m_vLocalMassCenter;
    // Vector[3] m_LocalInertiaInv;
    char pad_00[108];
    float m_flMassInv; // 0x6c
    float m_flGameMass; // 0x70
    float m_flMassScaleInv; // 0x74
    float m_flInertiaScaleInv; // 0x78
    float m_flLinearDamping; // 0x7c
    float m_flAngularDamping; // 0x80
    float m_flLinearDragScale; // 0x84
    float m_flAngularDragScale; // 0x88
    float m_flLinearFluidDragScale; // 0x8c
    float m_flAngularFluidDragScale; // 0x90
    // Vector m_vLastAwakeForceAccum;
    // Vector m_vLastAwakeTorqueAccum;
    char pad_01[24];
    float m_flBuoyancyScale; // 0xac
    float m_flGravityScale; // 0xb0
    float m_flTimeScale; // 0xb4
    int32_t m_nBodyType; // 0xb8
    uint32_t m_nGameIndex; // 0xbc
    uint32_t m_nGameFlags; // 0xc0
    int8_t m_nMinVelocityIterations; // 0xc4
    int8_t m_nMinPositionIterations; // 0xc5
    int8_t m_nMassPriority; // 0xc6
    bool m_bEnabled; // 0xc7
    bool m_bSleeping; // 0xc8
    bool m_bIsContinuousEnabled; // 0xc9
    bool m_bDragEnabled; // 0xca
    // Vector m_vGravity;
    char pad_02[13];
    bool m_bSpeculativeEnabled; // 0xd8
    bool m_bHasShadowController; // 0xd9
    DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // 0xda
    char pad_03[5];
}; // size: 0xe0

class __declspec(align(8)) FeAntiTunnelProbeBuild_t {
public:
    float flWeight; // 0x0
    float flActivationDistance; // 0x4
    float flBias; // 0x8
    float flCurvature; // 0xc
    uint32_t nFlags; // 0x10
    uint16_t nProbeNode; // 0x14
    // CUtlVector< uint16 > targetNodes;
    char pad_00[26];
}; // size: 0x30

class __declspec(align(16)) CFeNamedJiggleBone {
public:
    // CUtlString m_strParentBone;
    // CTransform m_transform;
    char pad_00[48];
    uint32_t m_nJiggleParent; // 0x30
    CFeJiggleBone m_jiggleBone; // 0x34
}; // size: 0xd0

class __declspec(align(4)) RnCapsule_t {
public:
    // Vector[2] m_vCenter;
    char pad_00[24];
    float m_flRadius; // 0x18
}; // size: 0x1c

class __declspec(align(4)) FeNodeIntegrator_t {
public:
    float flPointDamping; // 0x0
    float flAnimationForceAttraction; // 0x4
    float flAnimationVertexAttraction; // 0x8
    float flGravity; // 0xc
}; // size: 0x10

class __declspec(align(8)) FeProxyVertexMap_t {
public:
    // CUtlString m_Name;
    char pad_00[8];
    float m_flWeight; // 0x8
    char pad_01[4];
}; // size: 0x10

class __declspec(align(4)) RnTriangle_t {
public:
    int32_t m_nIndex[3]; // 0x0
}; // size: 0xc

class __declspec(align(16)) FeSimdAnimStrayRadius_t {
public:
    uint16_t nNode[4]; // 0x0
    // fltx4 flMaxDist;
    // fltx4 flRelaxationFactor;
    char pad_00[40];
}; // size: 0x30

class __declspec(align(16)) FeBuildSphereRigid_t {
public:
    char pad_00[32];
    int32_t m_nPriority; // 0x20
    uint32_t m_nVertexMapHash; // 0x24
    uint32_t m_nAntitunnelGroupBits; // 0x28
    char pad_01[4];
}; // size: 0x30

class __declspec(align(4)) constraint_hingeparams_t {
public:
    // Vector worldPosition;
    // Vector worldAxisDirection;
    // constraint_axislimit_t hingeAxis;
    char pad_00[40];
    constraint_breakableparams_t constraint; // 0x28
}; // size: 0x40

class __declspec(align(16)) FeSimdRodConstraint_t {
public:
    uint16_t nNode[4]; // 0x0
    // fltx4 f4MaxDist;
    // fltx4 f4MinDist;
    // fltx4 f4Weight0;
    // fltx4 f4RelaxationFactor;
    char pad_00[72];
}; // size: 0x50

class __declspec(align(16)) FeSimdRodConstraintAnim_t {
public:
    uint16_t nNode[4]; // 0x0
    // fltx4 f4Weight0;
    // fltx4 f4RelaxationFactor;
    char pad_00[40];
}; // size: 0x30

class __declspec(align(4)) constraint_axislimit_t {
public:
    float flMinRotation; // 0x0
    float flMaxRotation; // 0x4
    float flMotorTargetAngSpeed; // 0x8
    float flMotorMaxTorque; // 0xc
}; // size: 0x10

class __declspec(align(4)) FeTaperedCapsuleStretch_t {
public:
    uint16_t nNode[2]; // 0x0
    uint16_t nCollisionMask; // 0x4
    uint16_t nDummy; // 0x6
    float flRadius[2]; // 0x8
}; // size: 0x10

class __declspec(align(4)) FeBandBendLimit_t {
public:
    float flDistMin; // 0x0
    float flDistMax; // 0x4
    uint16_t nNode[6]; // 0x8
}; // size: 0x14

class __declspec(align(4)) CFeIndexedJiggleBone {
public:
    uint32_t m_nNode; // 0x0
    uint32_t m_nJiggleParent; // 0x4
    CFeJiggleBone m_jiggleBone; // 0x8
}; // size: 0xa4

class __declspec(align(16)) FeBuildBoxRigid_t {
public:
    char pad_00[64];
    int32_t m_nPriority; // 0x40
    uint32_t m_nVertexMapHash; // 0x44
    uint32_t m_nAntitunnelGroupBits; // 0x48
    char pad_01[4];
}; // size: 0x50

class __declspec(align(8)) vphysics_save_cphysicsbody_t {
public:
    char pad_00[224];
    uint64_t m_nOldPointer; // 0xe0
}; // size: 0xe8

class __declspec(align(4)) VMixDynamicsDesc_t {
public:
    float m_fldbGain; // 0x0
    float m_fldbNoiseGateThreshold; // 0x4
    float m_fldbCompressionThreshold; // 0x8
    float m_fldbLimiterThreshold; // 0xc
    float m_fldbKneeWidth; // 0x10
    float m_flRatio; // 0x14
    float m_flLimiterRatio; // 0x18
    float m_flAttackTimeMS; // 0x1c
    float m_flReleaseTimeMS; // 0x20
    float m_flRMSTimeMS; // 0x24
    float m_flWetMix; // 0x28
    bool m_bPeakMode; // 0x2c
    char pad_00[3];
}; // size: 0x30

class __declspec(align(4)) VMixFlangerDesc_t {
public:
    bool m_bPhaseInvert; // 0x0
    float m_flGlideTime; // 0x4
    float m_flDelay; // 0x8
    float m_flOutputGain; // 0xc
    float m_flFeedbackGain; // 0x10
    float m_flFeedforwardGain; // 0x14
    float m_flModRate; // 0x18
    float m_flModDepth; // 0x1c
    bool m_bApplyAntialiasing; // 0x20
    char pad_00[3];
}; // size: 0x24

class __declspec(align(8)) CVMixAutoFilterProcessorDesc {
public:
    // VMixAutoFilterDesc_t m_desc;
    char pad_00[80];
}; // size: 0x50

class __declspec(align(4)) VMixOscDesc_t {
public:
    VMixLFOShape_t oscType; // 0x0
    float m_freq; // 0x4
    float m_flPhase; // 0x8
}; // size: 0xc

class __declspec(align(4)) VMixFilterDesc_t {
public:
    VMixFilterType_t m_nFilterType; // 0x0
    VMixFilterSlope_t m_nFilterSlope; // 0x2
    bool m_bEnabled; // 0x3
    float m_fldbGain; // 0x4
    float m_flCutoffFreq; // 0x8
    float m_flQ; // 0xc
}; // size: 0x10

class __declspec(align(8)) CVMixBoxverb2ProcessorDesc {
public:
    // VMixBoxverbDesc_t m_desc;
    char pad_00[112];
}; // size: 0x70

class __declspec(align(8)) CVMixDelayProcessorDesc {
public:
    // VMixDelayDesc_t m_desc;
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CVoiceContainerDecayingSineWave {
public:
    char pad_00[168];
    float m_flFrequency; // 0xa8
    float m_flDecayTime; // 0xac
}; // size: 0xb0

class __declspec(align(8)) CVoiceContainerLoopTrigger {
public:
    // CSoundContainerReference m_sound;
    char pad_00[192];
    float m_flRetriggerTimeMin; // 0xc0
    float m_flRetriggerTimeMax; // 0xc4
    float m_flFadeTime; // 0xc8
    bool m_bCrossFade; // 0xcc
    char pad_01[3];
}; // size: 0xd0

class __declspec(align(4)) VMixUtilityDesc_t {
public:
    VMixChannelOperation_t m_nOp; // 0x0
    float m_flInputPan; // 0x4
    float m_flOutputBalance; // 0x8
    float m_fldbOutputGain; // 0xc
    bool m_bBassMono; // 0x10
    float m_flBassFreq; // 0x14
}; // size: 0x18

class __declspec(align(4)) VMixVocoderDesc_t {
public:
    int32_t m_nBandCount; // 0x0
    float m_flBandwidth; // 0x4
    float m_fldBModGain; // 0x8
    float m_flFreqRangeStart; // 0xc
    float m_flFreqRangeEnd; // 0x10
    float m_fldBUnvoicedGain; // 0x14
    float m_flAttackTimeMS; // 0x18
    float m_flReleaseTimeMS; // 0x1c
    int32_t m_nDebugBand; // 0x20
    bool m_bPeakMode; // 0x24
    char pad_00[3];
}; // size: 0x28

class __declspec(align(8)) CSosGroupActionTimeLimitSchema {
public:
    char pad_00[8];
    float m_flMaxDuration; // 0x8
    char pad_01[4];
}; // size: 0x10

class __declspec(align(8)) CVoiceContainerEnum {
public:
    // CSoundContainerReferenceArray m_soundsToPlay;
    char pad_00[224];
    int32_t m_iSelection; // 0xe0
    float m_flCrossfadeTime; // 0xe4
}; // size: 0xe8

class __declspec(align(8)) CVMixControlMeter {
public:
    char pad_00[16];
    int32_t m_nValueIndex; // 0x10
    char pad_01[4];
}; // size: 0x18

class __declspec(align(8)) CVoiceContainerSwitch {
public:
    // CUtlVector< CSoundContainerReference > m_soundsToPlay;
    char pad_00[192];
}; // size: 0xc0

class __declspec(align(8)) CVMixDualCompressorProcessorDesc {
public:
    // VMixDualCompressorDesc_t m_desc;
    char pad_00[88];
}; // size: 0x58

class __declspec(align(8)) CSosGroupActionMemberCountEnvelopeSchema {
public:
    char pad_00[8];
    int32_t m_nBaseCount; // 0x8
    int32_t m_nTargetCount; // 0xc
    float m_flBaseValue; // 0x10
    float m_flTargetValue; // 0x14
    float m_flAttack; // 0x18
    float m_flDecay; // 0x1c
    // CUtlString m_resultVarName;
    char pad_01[8];
    bool m_bSaveToGroup; // 0x28
    char pad_02[7];
}; // size: 0x30

class __declspec(align(8)) CSosGroupActionTimeBlockLimitSchema {
public:
    char pad_00[8];
    int32_t m_nMaxCount; // 0x8
    float m_flMaxDuration; // 0xc
}; // size: 0x10

class __declspec(align(8)) CVoiceContainerSelector {
public:
    char pad_00[168];
    PlayBackMode_t m_mode; // 0xa8
    // CSoundContainerReferenceArray m_soundsToPlay;
    // CUtlVector< float32 > m_fProbabilityWeights;
    char pad_01[116];
}; // size: 0x120

/// CVoiceContainerStaticAdditiveSynth::CGainScalePerInstance
class __declspec(align(4)) CVoiceContainerStaticAdditiveSynth__CGainScalePerInstance {
public:
    float m_flMinVolume; // 0x0
    int32_t m_nInstancesAtMinVolume; // 0x4
    float m_flMaxVolume; // 0x8
    int32_t m_nInstancesAtMaxVolume; // 0xc
}; // size: 0x10

class __declspec(align(8)) CVMixVsndInput {
public:
    // CUtlString m_defaultValue;
    char pad_00[24];
    int32_t m_nProcessor; // 0x18
    char pad_01[4];
}; // size: 0x20

class __declspec(align(8)) CVoiceContainerMultiBlender {
public:
    // CSoundContainerReferenceArray m_soundsToPlay;
    char pad_00[224];
    float m_flBlendFactor; // 0xe0
    float m_flCrossover; // 0xe4
}; // size: 0xe8

class __declspec(align(8)) CVMixPlateReverbProcessorDesc {
public:
    // VMixPlateverbDesc_t m_desc;
    char pad_00[64];
}; // size: 0x40

class __declspec(align(8)) VMixEffectChainDesc_t {
public:
    // CUtlString m_effectName;
    char pad_00[8];
}; // size: 0x8

class __declspec(align(4)) VMixDynamicsBand_t {
public:
    float m_fldbGainInput; // 0x0
    float m_fldbGainOutput; // 0x4
    float m_fldbThresholdBelow; // 0x8
    float m_fldbThresholdAbove; // 0xc
    float m_flRatioBelow; // 0x10
    float m_flRatioAbove; // 0x14
    float m_flAttackTimeMS; // 0x18
    float m_flReleaseTimeMS; // 0x1c
    bool m_bEnable; // 0x20
    bool m_bSolo; // 0x21
    char pad_00[2];
}; // size: 0x24

class __declspec(align(4)) VMixAutoFilterDesc_t {
public:
    float m_flEnvelopeAmount; // 0x0
    float m_flAttackTimeMS; // 0x4
    float m_flReleaseTimeMS; // 0x8
    VMixFilterDesc_t m_filter; // 0xc
    float m_flLFOAmount; // 0x1c
    float m_flLFORate; // 0x20
    float m_flPhase; // 0x24
    VMixLFOShape_t m_nLFOShape; // 0x28
}; // size: 0x2c

class __declspec(align(8)) CVoiceContainerEnvelope {
public:
    // CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sound;
    char pad_00[176];
    CVoiceContainerAnalysisBase* m_analysisContainer; // 0xb0
}; // size: 0xb8

class __declspec(align(8)) CVoiceContainerAmpedDecayingSineWave {
public:
    char pad_00[176];
    float m_flGainAmount; // 0xb0
    char pad_01[4];
}; // size: 0xb8

class __declspec(align(8)) CSosGroupActionLimitSchema {
public:
    char pad_00[8];
    int32_t m_nMaxCount; // 0x8
    SosActionStopType_t m_nStopType; // 0xc
    SosActionLimitSortType_t m_nSortType; // 0x10
    bool m_bStopImmediate; // 0x14
    bool m_bCountStopped; // 0x15
    char pad_01[2];
}; // size: 0x18

class __declspec(align(8)) CVMixVocoderProcessorDesc {
public:
    char pad_00[32];
    VMixVocoderDesc_t m_desc; // 0x20
}; // size: 0x48

class __declspec(align(8)) CVMixAudioMeter {
public:
    // CUtlString m_name;
    // CUtlString m_displayName;
    char pad_00[24];
}; // size: 0x18

class __declspec(align(8)) CVoiceContainerParameterBlender {
public:
    // CSoundContainerReference m_firstSound;
    // CSoundContainerReference m_secondSound;
    char pad_00[216];
    bool m_bEnableOcclusionBlend; // 0xd8
    // CPiecewiseCurve m_curve1;
    // CPiecewiseCurve m_curve2;
    char pad_01[135];
    bool m_bEnableDistanceBlend; // 0x160
    // CPiecewiseCurve m_curve3;
    // CPiecewiseCurve m_curve4;
    char pad_02[135];
}; // size: 0x1e8

class __declspec(align(8)) CAudioSentence {
public:
    bool m_bShouldVoiceDuck; // 0x0
    // CUtlVector< CAudioPhonemeTag > m_RunTimePhonemes;
    // CUtlVector< CAudioEmphasisSample > m_EmphasisSamples;
    // CAudioMorphData m_morphData;
    char pad_00[159];
}; // size: 0xa0

class __declspec(align(4)) VMixEnvelopeDesc_t {
public:
    float m_flAttackTimeMS; // 0x0
    float m_flHoldTimeMS; // 0x4
    float m_flReleaseTimeMS; // 0x8
}; // size: 0xc

class __declspec(align(4)) VMixShaperDesc_t {
public:
    int32_t m_nShape; // 0x0
    float m_fldbDrive; // 0x4
    float m_fldbOutputGain; // 0x8
    float m_flWetMix; // 0xc
    int32_t m_nOversampleFactor; // 0x10
}; // size: 0x14

class __declspec(align(8)) CVMixStereoDelayProcessorDesc {
public:
    char pad_00[32];
}; // size: 0x20

class __declspec(align(4)) VMixDynamicsCompressorDesc_t {
public:
    float m_fldbOutputGain; // 0x0
    float m_fldbCompressionThreshold; // 0x4
    float m_fldbKneeWidth; // 0x8
    float m_flCompressionRatio; // 0xc
    float m_flAttackTimeMS; // 0x10
    float m_flReleaseTimeMS; // 0x14
    float m_flRMSTimeMS; // 0x18
    float m_flWetMix; // 0x1c
    bool m_bPeakMode; // 0x20
    char pad_00[3];
}; // size: 0x24

class __declspec(align(8)) CVMixPannerProcessorDesc {
public:
    // VMixPannerDesc_t m_desc;
    char pad_00[40];
}; // size: 0x28

class __declspec(align(8)) CVMixSteamAudioPathingProcessorDesc {
public:
    char pad_00[32];
}; // size: 0x20

class __declspec(align(4)) VMixDiffusorDesc_t {
public:
    float m_flSize; // 0x0
    float m_flComplexity; // 0x4
    float m_flFeedback; // 0x8
    float m_flOutputGain; // 0xc
}; // size: 0x10

class __declspec(align(8)) CVMixSubgraphSwitchProcessorDesc {
public:
    // VMixSubgraphSwitchDesc_t m_desc;
    char pad_00[88];
}; // size: 0x58

class __declspec(align(8)) CVoiceContainerTapePlayer {
public:
    char pad_00[184];
    bool m_bShouldWraparound; // 0xb8
    // CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sourceAudio;
    char pad_01[12];
    float m_flTapeSpeedAttackTime; // 0xc8
    float m_flTapeSpeedReleaseTime; // 0xcc
    char pad_02[40];
}; // size: 0xf8

class __declspec(align(8)) CVMixAdditionalOutput {
public:
    // CUtlString m_name;
    char pad_00[16];
}; // size: 0x10

class __declspec(align(8)) CVMixFilterProcessorDesc {
public:
    char pad_00[32];
    VMixFilterDesc_t m_desc; // 0x20
}; // size: 0x30

class __declspec(align(8)) CSoundContainerReferenceArray {
public:
    bool m_bUseReference; // 0x0
    // CUtlVector< CStrongHandle< InfoForResourceTypeCVoiceContainerBase > > m_sounds;
    // CUtlVector< CVoiceContainerBase* > m_pSounds;
    char pad_00[55];
}; // size: 0x38

class __declspec(align(8)) CVMixConvolutionProcessorDesc {
public:
    // VMixConvolutionDesc_t m_desc;
    char pad_00[64];
}; // size: 0x40

class __declspec(align(4)) VMixPlateverbDesc_t {
public:
    float m_flPrefilter; // 0x0
    float m_flInputDiffusion1; // 0x4
    float m_flInputDiffusion2; // 0x8
    float m_flDecay; // 0xc
    float m_flDamp; // 0x10
    float m_flFeedbackDiffusion1; // 0x14
    float m_flFeedbackDiffusion2; // 0x18
}; // size: 0x1c

class __declspec(align(8)) CVMixFreeverbProcessorDesc {
public:
    // VMixFreeverbDesc_t m_desc;
    char pad_00[48];
}; // size: 0x30

class __declspec(align(8)) CVMixEffectChainProcessorDesc {
public:
    char pad_00[32];
    VMixEffectChainDesc_t m_desc; // 0x20
}; // size: 0x28

class __declspec(align(8)) CVMixFlangerProcessorDesc {
public:
    char pad_00[32];
    VMixFlangerDesc_t m_desc; // 0x20
    char pad_01[4];
}; // size: 0x48

class __declspec(align(8)) SosEditItemInfo_t {
public:
    SosEditItemType_t itemType; // 0x0
    // CUtlString itemName;
    // CUtlString itemTypeName;
    // CUtlString itemKVString;
    // Vector2D itemPos;
    char pad_00[44];
}; // size: 0x30

class __declspec(align(1)) CSoundInfoHeader {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) CVoiceContainerAsyncGenerator {
public:
    char pad_00[184];
}; // size: 0xb8

class __declspec(align(8)) CVoiceContainerSetElement {
public:
    // CSoundContainerReference m_sound;
    char pad_00[24];
    float m_flVolumeDB; // 0x18
    char pad_01[4];
}; // size: 0x20

class __declspec(align(4)) VMixConvolutionDesc_t {
public:
    float m_fldbGain; // 0x0
    float m_flPreDelayMS; // 0x4
    float m_flWetMix; // 0x8
    float m_fldbLow; // 0xc
    float m_fldbMid; // 0x10
    float m_fldbHigh; // 0x14
    float m_flLowCutoffFreq; // 0x18
    float m_flHighCutoffFreq; // 0x1c
}; // size: 0x20

class __declspec(align(8)) CVoiceContainerSet {
public:
    // CUtlVector< CVoiceContainerSetElement > m_soundsToPlay;
    char pad_00[192];
}; // size: 0xc0

class __declspec(align(1)) CVoiceContainerGenerator {
public:
    char pad_00[168];
}; // size: 0xa8

class __declspec(align(4)) CVMixCurveHeader {
public:
    uint32_t m_nControlPointCount; // 0x0
    uint32_t m_nControlPointStart; // 0x4
}; // size: 0x8

class __declspec(align(8)) CVMixOscProcessorDesc {
public:
    char pad_00[32];
    VMixOscDesc_t m_desc; // 0x20
    char pad_01[4];
}; // size: 0x30

class __declspec(align(4)) CAudioEmphasisSample {
public:
    float m_flTime; // 0x0
    float m_flValue; // 0x4
}; // size: 0x8

class __declspec(align(8)) CVMixAutomaticControlInput {
public:
    // CUtlString m_name;
    char pad_00[8];
    int32_t m_nControlInputIndex; // 0x8
    bool m_bIsTrackSend; // 0xc
    bool m_bIsStackVar; // 0xd
    char pad_01[2];
}; // size: 0x10

class __declspec(align(8)) CVMixShaperProcessorDesc {
public:
    char pad_00[32];
    VMixShaperDesc_t m_desc; // 0x20
    char pad_01[4];
}; // size: 0x38

class __declspec(align(8)) CVMixModDelayProcessorDesc {
public:
    // VMixModDelayDesc_t m_desc;
    char pad_00[80];
}; // size: 0x50

class __declspec(align(8)) CVMixControlOutput {
public:
    char pad_00[16];
    float m_flDefaultValue; // 0x10
    char pad_01[4];
}; // size: 0x18

class __declspec(align(4)) VMixPitchShiftDesc_t {
public:
    int32_t m_nGrainSampleCount; // 0x0
    float m_flPitchShift; // 0x4
    int32_t m_nQuality; // 0x8
    int32_t m_nProcType; // 0xc
}; // size: 0x10

class __declspec(align(8)) CSoundEventMetaData {
public:
    // CStrongHandle< InfoForResourceTypeCVMixListResource > m_soundEventVMix;
    char pad_00[8];
}; // size: 0x8

class __declspec(align(8)) CVMixSteamAudioHybridReverbProcessorDesc {
public:
    char pad_00[32];
}; // size: 0x20

class __declspec(align(8)) CVMixImpulseResponseInput {
public:
    char pad_00[16];
}; // size: 0x10

class __declspec(align(4)) CVMixBaseProcessorDesc {
public:
    // CUtlString m_name;
    char pad_00[20];
    int32_t m_nChannels; // 0x14
    float m_flxfade; // 0x18
    char pad_01[4];
}; // size: 0x20

class __declspec(align(8)) CVoiceContainerEnvelopeAnalyzer {
public:
    char pad_00[80];
    EMode_t m_mode; // 0x50
    float m_fAnalysisWindowMs; // 0x54
    float m_flThreshold; // 0x58
    char pad_01[4];
}; // size: 0x60

class __declspec(align(8)) CSosGroupActionSoundeventCountSchema {
public:
    char pad_00[8];
    bool m_bExcludeStoppedSounds; // 0x8
    // CUtlString m_strCountKeyName;
    char pad_01[15];
}; // size: 0x18

class __declspec(align(8)) CVMixNameInput {
public:
    // CUtlString m_defaultValue;
    char pad_00[32];
}; // size: 0x20

class __declspec(align(8)) CVMixControlInputArray {
public:
    char pad_00[16];
    int32_t m_nArrayIndex; // 0x10
    char pad_01[4];
}; // size: 0x18

class __declspec(align(4)) CAudioPhonemeTag {
public:
    float m_flStartTime; // 0x0
    float m_flEndTime; // 0x4
    int32_t m_nPhonemeCode; // 0x8
}; // size: 0xc

class __declspec(align(8)) VMixPresetDSPDesc_t {
public:
    // CUtlString m_effectName;
    char pad_00[16];
}; // size: 0x10

class __declspec(align(8)) CVoiceContainerLoopXFade {
public:
    // CSoundContainerReference m_sound;
    char pad_00[192];
    float m_flLoopEnd; // 0xc0
    float m_flLoopStart; // 0xc4
    float m_flFadeOut; // 0xc8
    float m_flFadeIn; // 0xcc
    bool m_bPlayHead; // 0xd0
    bool m_bPlayTail; // 0xd1
    bool m_bEqualPow; // 0xd2
    char pad_01[5];
}; // size: 0xd8

class __declspec(align(8)) CVMixGraphDescData {
public:
    // CUtlString m_name;
    char pad_00[8];
    int32_t m_nGraphOutputChannels; // 0x8
    bool m_bIsMainGraph; // 0xc
    char pad_01[3];
}; // size: 0x10

class __declspec(align(8)) CVMixDynamicsProcessorDesc {
public:
    char pad_00[32];
    VMixDynamicsDesc_t m_desc; // 0x20
}; // size: 0x50

class __declspec(align(4)) VMixEQ8Desc_t {
public:
    VMixFilterDesc_t m_stages; // 0x0
    char pad_00[112];
}; // size: 0x80

class __declspec(align(4)) VMixDelayDesc_t {
public:
    VMixFilterDesc_t m_feedbackFilter; // 0x0
    bool m_bEnableFilter; // 0x10
    float m_flDelay; // 0x14
    float m_flDirectGain; // 0x18
    float m_flDelayGain; // 0x1c
    float m_flFeedbackGain; // 0x20
    float m_flWidth; // 0x24
}; // size: 0x28

class __declspec(align(8)) CVMixPresetDSPProcessorDesc {
public:
    char pad_00[32];
    VMixPresetDSPDesc_t m_desc; // 0x20
}; // size: 0x30

class __declspec(align(8)) CVoiceContainerGranulator {
public:
    char pad_00[184];
    float m_flGrainLength; // 0xb8
    float m_flGrainCrossfadeAmount; // 0xbc
    float m_flStartJitter; // 0xc0
    float m_flPlaybackJitter; // 0xc4
    bool m_bShouldWraparound; // 0xc8
    // CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sourceAudio;
    char pad_01[199];
}; // size: 0x190

class __declspec(align(8)) CVMixUtilityProcessorDesc {
public:
    char pad_00[32];
    VMixUtilityDesc_t m_desc; // 0x20
}; // size: 0x38

class __declspec(align(8)) CVMixDiffusorProcessorDesc {
public:
    char pad_00[32];
    VMixDiffusorDesc_t m_desc; // 0x20
}; // size: 0x30

class __declspec(align(8)) CVoiceContainerBase {
public:
    // CVSound m_vSound;
    char pad_00[160];
    CVoiceContainerAnalysisBase* m_pEnvelopeAnalyzer; // 0xa0
}; // size: 0xa8

class __declspec(align(8)) CDspPresetModifierList {
public:
    // CUtlString m_dspName;
    // CUtlVector< CDSPMixgroupModifier > m_modifiers;
    char pad_00[32];
}; // size: 0x20

class __declspec(align(8)) CVoiceContainerShapedNoise {
public:
    char pad_00[168];
    bool m_bUseCurveForFrequency; // 0xa8
    float m_flFrequency; // 0xac
    // CPiecewiseCurve m_frequencySweep;
    char pad_01[64];
    bool m_bUseCurveForResonance; // 0xf0
    float m_flResonance; // 0xf4
    // CPiecewiseCurve m_resonanceSweep;
    char pad_02[64];
    bool m_bUseCurveForAmplitude; // 0x138
    float m_flGainInDecibels; // 0x13c
    // CPiecewiseCurve m_gainSweep;
    char pad_03[64];
}; // size: 0x180

class __declspec(align(8)) CVoiceContainerStaticAdditiveSynth {
public:
    // CUtlVector< CVoiceContainerStaticAdditiveSynth::CTone > m_tones;
    char pad_00[232];
}; // size: 0xe8

class __declspec(align(4)) VMixDualCompressorDesc_t {
public:
    float m_flRMSTimeMS; // 0x0
    float m_fldbKneeWidth; // 0x4
    float m_flWetMix; // 0x8
    bool m_bPeakMode; // 0xc
    VMixDynamicsBand_t m_bandDesc; // 0x10
}; // size: 0x34

class __declspec(align(8)) CAudioMorphData {
public:
    // CUtlVector< float32 > m_times;
    // CUtlVector< uint32 > m_nameHashCodes;
    // CUtlVector< CUtlString > m_nameStrings;
    // CUtlVector< CUtlVector< float32 > > m_samples;
    char pad_00[96];
    float m_flEaseIn; // 0x60
    float m_flEaseOut; // 0x64
}; // size: 0x68

class __declspec(align(8)) CDSPMixgroupModifier {
public:
    // CUtlString m_mixgroup;
    char pad_00[8];
    float m_flModifier; // 0x8
    float m_flModifierMin; // 0xc
    float m_flSourceModifier; // 0x10
    float m_flSourceModifierMin; // 0x14
    float m_flListenerReverbModifierWhenSourceReverbIsActive; // 0x18
    char pad_01[4];
}; // size: 0x20

class __declspec(align(8)) CVMixEQ8ProcessorDesc {
public:
    char pad_00[32];
    VMixEQ8Desc_t m_desc; // 0x20
}; // size: 0xa0

class __declspec(align(4)) VMixDynamics3BandDesc_t {
public:
    float m_fldbGainOutput; // 0x0
    float m_flRMSTimeMS; // 0x4
    float m_fldbKneeWidth; // 0x8
    float m_flDepth; // 0xc
    float m_flWetMix; // 0x10
    float m_flTimeScale; // 0x14
    float m_flLowCutoffFreq; // 0x18
    float m_flHighCutoffFreq; // 0x1c
    bool m_bPeakMode; // 0x20
    VMixDynamicsBand_t m_bandDesc; // 0x24
    char pad_00[72];
}; // size: 0x90

class __declspec(align(8)) CSosSoundEventGroupSchema {
public:
    char pad_00[8];
    SosGroupType_t m_nGroupType; // 0x8
    bool m_bBlocksEvents; // 0xc
    int32_t m_nBlockMaxCount; // 0x10
    float m_flMemberLifespanTime; // 0x14
    bool m_bInvertMatch; // 0x18
    SosGroupFieldBehavior_t m_Behavior_EventName; // 0x1c
    // CUtlString m_matchSoundEventName;
    char pad_01[8];
    bool m_bMatchEventSubString; // 0x28
    // CUtlString m_matchSoundEventSubString;
    char pad_02[12];
    SosGroupFieldBehavior_t m_Behavior_EntIndex; // 0x38
    float m_flEntIndex; // 0x3c
    SosGroupFieldBehavior_t m_Behavior_Opvar; // 0x40
    float m_flOpvar; // 0x44
    SosGroupFieldBehavior_t m_Behavior_String; // 0x48
    // CUtlString m_opvarString;
    // CUtlVector< CSosGroupActionSchema* > m_vActions;
    char pad_03[36];
}; // size: 0x70

class __declspec(align(1)) CSosGroupActionSchema {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(4)) VMixBoxverbDesc_t {
public:
    float m_flSizeMax; // 0x0
    float m_flSizeMin; // 0x4
    float m_flComplexity; // 0x8
    float m_flDiffusion; // 0xc
    float m_flModDepth; // 0x10
    float m_flModRate; // 0x14
    bool m_bParallel; // 0x18
    VMixFilterDesc_t m_filterType; // 0x1c
    float m_flWidth; // 0x2c
    float m_flHeight; // 0x30
    float m_flDepth; // 0x34
    float m_flFeedbackScale; // 0x38
    float m_flFeedbackWidth; // 0x3c
    float m_flFeedbackHeight; // 0x40
    float m_flFeedbackDepth; // 0x44
    float m_flOutputGain; // 0x48
    float m_flTaps; // 0x4c
}; // size: 0x50

class __declspec(align(8)) CVMixDynamics3BandProcessorDesc {
public:
    char pad_00[32];
    VMixDynamics3BandDesc_t m_desc; // 0x20
}; // size: 0xb0

class __declspec(align(8)) CVMixNameInputMeter {
public:
    char pad_00[16];
    int32_t m_nValueIndex; // 0x10
    char pad_01[4];
}; // size: 0x18

class __declspec(align(4)) VMixModDelayDesc_t {
public:
    VMixFilterDesc_t m_feedbackFilter; // 0x0
    bool m_bPhaseInvert; // 0x10
    float m_flGlideTime; // 0x14
    float m_flDelay; // 0x18
    float m_flOutputGain; // 0x1c
    float m_flFeedbackGain; // 0x20
    float m_flModRate; // 0x24
    float m_flModDepth; // 0x28
    bool m_bApplyAntialiasing; // 0x2c
    char pad_00[3];
}; // size: 0x30

class __declspec(align(8)) SelectedEditItemInfo_t {
public:
    // CUtlVector< SosEditItemInfo_t > m_EditItems;
    char pad_00[24];
}; // size: 0x18

class __declspec(align(8)) CVoiceContainerRealtimeFMSineWave {
public:
    char pad_00[168];
    float m_flCarrierFrequency; // 0xa8
    float m_flModulatorFrequency; // 0xac
    float m_flModulatorAmount; // 0xb0
    char pad_01[4];
}; // size: 0xb8

class __declspec(align(8)) CSosGroupActionSoundeventPrioritySchema {
public:
    // CUtlString m_priorityValue;
    // CUtlString m_priorityVolumeScalar;
    // CUtlString m_priorityContributeButDontRead;
    // CUtlString m_bPriorityReadButDontContribute;
    char pad_00[56];
}; // size: 0x38

class __declspec(align(4)) VMixPannerDesc_t {
public:
    VMixPannerType_t m_type; // 0x0
    float m_flStrength; // 0x4
}; // size: 0x8

class __declspec(align(8)) CVMixDynamicsCompressorProcessorDesc {
public:
    char pad_00[32];
    VMixDynamicsCompressorDesc_t m_desc; // 0x20
    char pad_01[4];
}; // size: 0x48

class __declspec(align(8)) CVMixBoxverbProcessorDesc {
public:
    char pad_00[32];
    VMixBoxverbDesc_t m_desc; // 0x20
}; // size: 0x70

class __declspec(align(8)) CVMixControlInput {
public:
    char pad_00[16];
    float m_flDefaultValue; // 0x10
    char pad_01[4];
}; // size: 0x18

class __declspec(align(4)) CVMixCommand {
public:
    VMixGraphCommandID_t m_nCommand; // 0x0
    uint32_t m_nParameterNameHash; // 0x4
    int32_t m_nOutputSubmix; // 0x8
    int32_t m_nInputSubmix0; // 0xc
    int32_t m_nInputSubmix1; // 0x10
    int32_t m_nProcessor; // 0x14
    int32_t m_nInputValue0; // 0x18
    int32_t m_nInputValue1; // 0x1c
}; // size: 0x20

class __declspec(align(8)) CVMixEnvelopeProcessorDesc {
public:
    char pad_00[32];
    VMixEnvelopeDesc_t m_desc; // 0x20
    char pad_01[4];
}; // size: 0x30

class __declspec(align(8)) CSosGroupActionSoundeventMinMaxValuesSchema {
public:
    // CUtlString m_strQueryPublicFieldName;
    // CUtlString m_strDelayPublicFieldName;
    char pad_00[24];
    bool m_bExcludeStoppedSounds; // 0x18
    bool m_bExcludeDelayedSounds; // 0x19
    bool m_bExcludeSoundsBelowThreshold; // 0x1a
    float m_flExcludeSoundsMinThresholdValue; // 0x1c
    bool m_bExcludSoundsAboveThreshold; // 0x20
    float m_flExcludeSoundsMaxThresholdValue; // 0x24
    // CUtlString m_strMinValueName;
    // CUtlString m_strMaxValueName;
    char pad_01[24];
}; // size: 0x40

class __declspec(align(8)) CVoiceContainerAnalysisBase {
public:
    char pad_00[8];
    bool m_bRegenerateCurveOnCompile; // 0x8
    // CPiecewiseCurve m_curve;
    char pad_01[71];
}; // size: 0x50

class __declspec(align(8)) VMixSubgraphSwitchDesc_t {
public:
    // CUtlString m_name;
    // CUtlString m_effectName;
    // CUtlVector< CUtlString > m_subgraphs;
    char pad_00[40];
    VMixSubgraphSwitchInterpolationType_t m_interpolationMode; // 0x28
    bool m_bOnlyTailsOnFadeOut; // 0x2c
    float m_flInterpolationTime; // 0x30
    char pad_01[4];
}; // size: 0x38

class __declspec(align(8)) CVoiceContainerNull {
public:
    char pad_00[168];
}; // size: 0xa8

class __declspec(align(8)) CSoundContainerReference {
public:
    bool m_bUseReference; // 0x0
    // CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sound;
    char pad_00[8];
    CVoiceContainerBase* m_pSound; // 0x10
}; // size: 0x18

class __declspec(align(8)) CSosGroupActionSetSoundeventParameterSchema {
public:
    char pad_00[8];
    int32_t m_nMaxCount; // 0x8
    float m_flMinValue; // 0xc
    float m_flMaxValue; // 0x10
    // CUtlString m_opvarName;
    char pad_01[12];
    SosActionSetParamSortType_t m_nSortType; // 0x20
    char pad_02[4];
}; // size: 0x28

class __declspec(align(8)) CSosGroupActionSoundeventClusterSchema {
public:
    char pad_00[8];
    int32_t m_nMinNearby; // 0x8
    float m_flClusterEpsilon; // 0xc
    // CUtlString m_shouldPlayOpvar;
    // CUtlString m_shouldPlayClusterChild;
    // CUtlString m_clusterSizeOpvar;
    // CUtlString m_groupBoundingBoxMinsOpvar;
    // CUtlString m_groupBoundingBoxMaxsOpvar;
    char pad_01[64];
}; // size: 0x50

class __declspec(align(8)) CDSPPresetMixgroupModifierTable {
public:
    // CUtlVector< CDspPresetModifierList > m_table;
    char pad_00[24];
}; // size: 0x18

class __declspec(align(8)) CVSound {
public:
    int32_t m_nRate; // 0x0
    CVSoundFormat_t m_nFormat; // 0x4
    uint32_t m_nChannels; // 0x8
    int32_t m_nLoopStart; // 0xc
    uint32_t m_nSampleCount; // 0x10
    float m_flDuration; // 0x14
    // CUtlVector< CAudioSentence > m_Sentences;
    char pad_00[24];
    uint32_t m_nStreamingSize; // 0x30
    // CUtlVector< int32 > m_nSeekTable;
    char pad_01[28];
    int32_t m_nLoopEnd; // 0x50
    // CUtlBinaryBlock m_encodedHeader;
    char pad_02[36];
}; // size: 0x78

class __declspec(align(8)) CVoiceContainerDefault {
public:
    char pad_00[168];
}; // size: 0xa8

class __declspec(align(8)) CVMixSteamAudioHRTFProcessorDesc {
public:
    char pad_00[32];
}; // size: 0x20

class __declspec(align(8)) CVMixSteamAudioDirectProcessorDesc {
public:
    char pad_00[32];
}; // size: 0x20

class __declspec(align(8)) CVoiceContainerRandomSampler {
public:
    char pad_00[184];
    float m_flAmplitude; // 0xb8
    float m_flAmplitudeJitter; // 0xbc
    float m_flTimeJitter; // 0xc0
    float m_flMaxLength; // 0xc4
    int32_t m_nNumDelayVariations; // 0xc8
    // CUtlVector< CStrongHandle< InfoForResourceTypeCVoiceContainerBase > > m_grainResources;
    char pad_01[276];
}; // size: 0x1e0

/// CVoiceContainerStaticAdditiveSynth::CTone
class __declspec(align(8)) CVoiceContainerStaticAdditiveSynth__CTone {
public:
    // CUtlVector< CVoiceContainerStaticAdditiveSynth::CHarmonic > m_harmonics;
    // CPiecewiseCurve m_curve;
    char pad_00[88];
    bool m_bSyncInstances; // 0x58
    char pad_01[7];
}; // size: 0x60

/// CVoiceContainerStaticAdditiveSynth::CHarmonic
class __declspec(align(8)) CVoiceContainerStaticAdditiveSynth__CHarmonic {
public:
    EWaveform m_nWaveform; // 0x0
    EMidiNote m_nFundamental; // 0x1
    int32_t m_nOctave; // 0x4
    float m_flCents; // 0x8
    float m_flPhase; // 0xc
    // CPiecewiseCurve m_curve;
    // CVoiceContainerStaticAdditiveSynth::CGainScalePerInstance m_volumeScaling;
    char pad_00[88];
}; // size: 0x68

class __declspec(align(4)) VMixFreeverbDesc_t {
public:
    float m_flRoomSize; // 0x0
    float m_flDamp; // 0x4
    float m_flWidth; // 0x8
    float m_flLateReflections; // 0xc
}; // size: 0x10

class __declspec(align(8)) CVMixPitchShiftProcessorDesc {
public:
    char pad_00[32];
    VMixPitchShiftDesc_t m_desc; // 0x20
}; // size: 0x30

class __declspec(align(8)) CVoiceContainerBlender {
public:
    char pad_00[168];
    CSoundContainerReference m_firstSound; // 0xa8
    CSoundContainerReference m_secondSound; // 0xc0
    float m_flBlendFactor; // 0xd8
    char pad_01[4];
}; // size: 0xe0

class __declspec(align(8)) CVMixInputBase {
public:
    // CUtlString m_name;
    char pad_00[16];
}; // size: 0x10

class __declspec(align(8)) CSteamAudioCompressedReverb {
public:
    int32_t m_nChannels; // 0x0
    int32_t m_nBands; // 0x4
    int32_t m_nBins; // 0x8
    int32_t m_nProbes; // 0xc
    // CUtlVector< int32 > m_vecNumSingularValues;
    // CUtlVector< float32 > m_vecDictionary;
    // CUtlVector< float32 > m_vecCompressedData;
    // IPLCompressedEnergyFields m_pCompressedData;
    char pad_00[80];
}; // size: 0x60

class __declspec(align(8)) CSteamAudioProbeGrid {
public:
    AABB_t m_aabb; // 0x0
    float m_flSpacing; // 0x18
    int32_t m_nx; // 0x1c
    int32_t m_ny; // 0x20
    int32_t m_nz; // 0x24
    // CUtlVector< CSteamAudioProbeLineSegment > m_vecLineSegments;
    // CUtlVector< Vector > m_vecProbes;
    char pad_00[48];
}; // size: 0x58

class __declspec(align(8)) CSteamAudioBakedDimensionsData {
public:
    // SteamAudioCustomDataDimensionsSettings_t m_settings;
    // CSteamAudioProbeData m_probes;
    // CUtlVector< float32 > m_vecInOut;
    // CUtlVector< float32 > m_vecSize;
    // CUtlVector< CSteamAudioAmbisonicsField > m_vecOutsideField;
    // CUtlVector< CSteamAudioAmbisonicsField > m_vecInsideSmallSizeField;
    // CSteamAudioMovableBakedData< CSteamAudioBakedDimensionsData > m_movables;
    char pad_00[296];
}; // size: 0x128

class __declspec(align(4)) SteamAudioCustomDataOcclusionSettings_t {
public:
    bool m_bEnablePathing; // 0x0
    bool m_bEnableReflections; // 0x1
    int32_t m_nReflectionRays; // 0x4
    int32_t m_nReflectionBounces; // 0x8
}; // size: 0xc

class __declspec(align(8)) CSteamAudioProbeLineSegment {
public:
    // Vector m_vStart;
    // Vector m_vEnd;
    // CUtlVector< float32 > m_vecIntervals;
    // CUtlVector< int32 > m_vecProbeIndices;
    char pad_00[72];
}; // size: 0x48

class __declspec(align(8)) CSteamAudioBakedReverbData {
public:
    int32_t m_nBands; // 0x0
    // CSteamAudioProbeData m_probes;
    char pad_00[8];
    CSteamAudioProbeGrid m_grid; // 0x10
    // SteamAudioReverbSettings_t m_reverbSettings;
    // SteamAudioReverbClusteringSettings_t m_reverbClusteringSettings;
    // SteamAudioReverbCompressionSettings_t m_reverbCompressionSettings;
    // CSteamAudioProbeData m_clusteredProbes;
    // CUtlVector< int16 > m_vecClusterForProbe;
    char pad_01[72];
    CSteamAudioCompressedReverb m_compressedData; // 0xb0
    CSteamAudioCompressedReverb m_compressedClusteredData; // 0x110
    // CSteamAudioMovableBakedData< CSteamAudioBakedReverbData > m_movables;
    char pad_02[168];
}; // size: 0x218

class __declspec(align(8)) CSteamAudioBakedOcclusionData {
public:
    SteamAudioCustomDataOcclusionSettings_t m_settings; // 0x0
    // CSteamAudioProbeData m_probes;
    // CUtlVector< float32 > m_vecPathingRatio;
    // CUtlVector< float32 > m_vecPathingDeviation;
    // CUtlVector< float32 > m_vecReflectionRatio;
    char pad_00[84];
}; // size: 0x60

class __declspec(align(8)) CSteamAudioBakedMaterialsData {
public:
    // CSteamAudioProbeData m_probes;
    // CUtlVector< uint32 > m_vecMaterialTokens;
    // CUtlVector< float32 > m_vecMaterialWeights;
    char pad_00[56];
}; // size: 0x38

class __declspec(align(4)) SteamAudioReverbCompressionSettings_t {
public:
    bool m_bEnableCompression; // 0x0
    float m_flQuality; // 0x4
}; // size: 0x8

class __declspec(align(8)) CSteamAudioProbeData {
public:
    // IPLProbeBatch m_pProbeBatch;
    char pad_00[8];
}; // size: 0x8

class __declspec(align(4)) SteamAudioReverbSettings_t {
public:
    int32_t m_nNumRays; // 0x0
    int32_t m_nNumBounces; // 0x4
    float m_flIRDuration; // 0x8
    int32_t m_nAmbisonicsOrder; // 0xc
}; // size: 0x10

class __declspec(align(8)) CSteamAudioBakedPathingData {
public:
    int32_t m_nBands; // 0x0
    CSteamAudioProbeData m_probes; // 0x8
    // CSteamAudioMovableBakedData< CSteamAudioBakedPathingData > m_movables;
    char pad_00[168];
}; // size: 0xb8

class __declspec(align(8)) CSteamAudioAmbisonicsField {
public:
    // CUtlVector< float32 > m_field;
    char pad_00[24];
}; // size: 0x18

class __declspec(align(4)) SteamAudioPathSettings_t {
public:
    int32_t m_nNumVisSamples; // 0x0
    float m_flProbeVisRadius; // 0x4
    float m_flProbeVisThreshold; // 0x8
    float m_flProbePathRange; // 0xc
}; // size: 0x10

class __declspec(align(4)) SteamAudioCustomDataDimensionsSettings_t {
public:
    int32_t m_nAmbisonicsOrderOutsideField; // 0x0
    int32_t m_nAmbisonicsOrderInsideSizeField; // 0x4
    float m_flOutsideThreshold; // 0x8
    float m_flSizeThreshold; // 0xc
    float m_flInsideThreshold; // 0x10
}; // size: 0x14

class __declspec(align(4)) SteamAudioReverbClusteringSettings_t {
public:
    bool m_bEnableClustering; // 0x0
    int32_t m_nCubeMapResolution; // 0x4
    float m_flDepthThreshold; // 0x8
}; // size: 0xc

class __declspec(align(8)) CSSDSMsg_EndFrame {
public:
    // CUtlVector< CSSDSEndFrameViewInfo > m_Views;
    char pad_00[24];
}; // size: 0x18

class __declspec(align(8)) CSSDSMsg_ViewRender {
public:
    // SceneViewId_t m_viewId;
    // CUtlString m_ViewName;
    char pad_00[24];
}; // size: 0x18

class __declspec(align(8)) CSSDSMsg_ViewTargetList {
public:
    // SceneViewId_t m_viewId;
    // CUtlString m_ViewName;
    // CUtlVector< CSSDSMsg_ViewTarget > m_Targets;
    char pad_00[48];
}; // size: 0x30

class __declspec(align(8)) CSSDSMsg_PreLayer {
public:
    char pad_00[48];
}; // size: 0x30

class __declspec(align(8)) CSSDSMsg_LayerBase {
public:
    // SceneViewId_t m_viewId;
    // CUtlString m_ViewName;
    char pad_00[24];
    uint64_t m_nLayerId; // 0x18
    // CUtlString m_LayerName;
    // CUtlString m_displayText;
    char pad_01[16];
}; // size: 0x30

class __declspec(align(8)) CSSDSMsg_PostLayer {
public:
    char pad_00[48];
}; // size: 0x30

class __declspec(align(8)) CSSDSEndFrameViewInfo {
public:
    uint64_t m_nViewId; // 0x0
    // CUtlString m_ViewName;
    char pad_00[8];
}; // size: 0x10

class __declspec(align(8)) SceneViewId_t {
public:
    uint64_t m_nViewId; // 0x0
    uint64_t m_nFrameCount; // 0x8
}; // size: 0x10

class __declspec(align(8)) CSSDSMsg_ViewTarget {
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

class __declspec(align(8)) CVoxelVisibility {
public:
    char pad_00[64];
    uint32_t m_nBaseClusterCount; // 0x40
    uint32_t m_nPVSBytesPerCluster; // 0x44
    // Vector m_vMinBounds;
    // Vector m_vMaxBounds;
    char pad_01[24];
    float m_flGridSize; // 0x60
    uint32_t m_nSkyVisibilityCluster; // 0x64
    uint32_t m_nSunVisibilityCluster; // 0x68
    // VoxelVisBlockOffset_t m_NodeBlock;
    // VoxelVisBlockOffset_t m_RegionBlock;
    // VoxelVisBlockOffset_t m_EnclosedClusterListBlock;
    // VoxelVisBlockOffset_t m_EnclosedClustersBlock;
    // VoxelVisBlockOffset_t m_MasksBlock;
    // VoxelVisBlockOffset_t m_nVisBlocks;
    char pad_02[52];
}; // size: 0xa0

class __declspec(align(8)) EntityKeyValueData_t {
public:
    // CUtlVector< EntityIOConnectionData_t > m_connections;
    // CUtlBinaryBlock m_keyValuesData;
    char pad_00[56];
}; // size: 0x38

class __declspec(align(8)) AggregateRTProxySceneObject_t {
public:
    int16_t m_nLayer; // 0x0
    // CUtlVector< RTProxyBLAS_t > m_BLASes;
    // CUtlVector< RTProxyInstanceInfo_t > m_Instances;
    // CUtlBinaryBlock m_VBData;
    // CUtlBinaryBlock m_IBData;
    // CUtlBinaryBlock m_InstanceAlbedoData;
    char pad_00[102];
}; // size: 0x68

class __declspec(align(8)) MaterialOverride_t {
public:
    char pad_00[4];
    uint32_t m_nSubSceneObject; // 0x4
    uint32_t m_nDrawCallIndex; // 0x8
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_pMaterial;
    // Vector m_vLinearTintColor;
    char pad_01[28];
}; // size: 0x28

/// BakedLightingInfo_t::BakedShadowAssignment_t
class __declspec(align(4)) BakedLightingInfo_t__BakedShadowAssignment_t {
public:
    uint32_t m_nLightHash; // 0x0
    uint32_t m_nMapHash; // 0x4
    int8_t m_nShadowChannel; // 0x8
    char pad_00[3];
}; // size: 0xc

class __declspec(align(8)) World_t {
public:
    // WorldBuilderParams_t m_builderParams;
    // CUtlVector< NodeData_t > m_worldNodes;
    // BakedLightingInfo_t m_worldLightingInfo;
    // CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_entityLumps;
    char pad_00[216];
}; // size: 0xd8

class __declspec(align(4)) AggregateMeshInfo_t {
public:
    uint32_t m_nVisClusterMemberOffset; // 0x0
    uint8_t m_nVisClusterMemberCount; // 0x4
    bool m_bHasTransform; // 0x5
    uint8_t m_nLODGroupMask; // 0x6
    int16_t m_nDrawCallIndex; // 0x8
    int16_t m_nLODSetupIndex; // 0xa
    // Color m_vTintColor;
    char pad_00[4];
    ObjectTypeFlags_t m_objectFlags; // 0x10
    int32_t m_nLightProbeVolumePrecomputedHandshake; // 0x14
    uint32_t m_nInstanceStreamOffset; // 0x18
    uint32_t m_nVertexAlbedoStreamOffset; // 0x1c
    AggregateInstanceStream_t m_instanceStreams; // 0x20
    char pad_01[3];
}; // size: 0x24

class __declspec(align(8)) WorldNodeOnDiskBufferData_t {
public:
    int32_t m_nElementCount; // 0x0
    int32_t m_nElementSizeInBytes; // 0x4
    // CUtlVector< RenderInputLayoutField_t > m_inputLayoutFields;
    // CUtlVector< uint8 > m_pData;
    char pad_00[48];
}; // size: 0x38

class __declspec(align(1)) InfoForResourceTypeVMapResourceData_t {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(4)) VoxelVisBlockOffset_t {
public:
    uint32_t m_nOffset; // 0x0
    uint32_t m_nElementCount; // 0x4
}; // size: 0x8

class __declspec(align(8)) BakedLightingInfo_t {
public:
    uint32_t m_nLightmapVersionNumber; // 0x0
    uint32_t m_nLightmapGameVersionNumber; // 0x4
    // Vector2D m_vLightmapUvScale;
    char pad_00[8];
    bool m_bHasLightmaps; // 0x10
    bool m_bBakedShadowsGamma20; // 0x11
    bool m_bCompressionEnabled; // 0x12
    bool m_bSHLightmaps; // 0x13
    uint8_t m_nChartPackIterations; // 0x14
    uint8_t m_nVradQuality; // 0x15
    // CUtlVector< CStrongHandle< InfoForResourceTypeCTextureBase > > m_lightMaps;
    // CUtlVector< BakedLightingInfo_t::BakedShadowAssignment_t > m_bakedShadows;
    char pad_01[50];
}; // size: 0x48

class __declspec(align(8)) EntityIOConnectionData_t {
public:
    // CUtlString m_outputName;
    char pad_00[8];
    uint32_t m_targetType; // 0x8
    // CUtlString m_targetName;
    // CUtlString m_inputName;
    // CUtlString m_overrideParam;
    char pad_01[28];
    float m_flDelay; // 0x28
    int32_t m_nTimesToFire; // 0x2c
    // KeyValues3 m_paramMap;
    char pad_02[16];
}; // size: 0x40

class __declspec(align(4)) BaseSceneObjectOverride_t {
public:
    uint32_t m_nSceneObjectIndex; // 0x0
}; // size: 0x4

class __declspec(align(8)) WorldNode_t {
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
    BakedLightingInfo_t m_nodeLightingInfo; // 0x128
    bool m_bHasBakedGeometryFlag; // 0x170
    char pad_01[7];
}; // size: 0x178

class __declspec(align(8)) PermEntityLumpData_t {
public:
    // CUtlString m_name;
    // CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_childLumps;
    // CUtlLeanVector< EntityKeyValueData_t > m_entityKeyValues;
    char pad_00[56];
}; // size: 0x38

class __declspec(align(8)) WorldBuilderParams_t {
public:
    float m_flMinDrawVolumeSize; // 0x0
    bool m_bBuildBakedLighting; // 0x4
    bool m_bAggregateInstanceStreams; // 0x5
    BakedLightingInfo_t m_bakedLightingInfo; // 0x8
    uint64_t m_nCompileTimestamp; // 0x50
    uint64_t m_nCompileFingerprint; // 0x58
}; // size: 0x60

class __declspec(align(8)) ClutterSceneObject_t {
public:
    AABB_t m_Bounds; // 0x0
    ObjectTypeFlags_t m_flags; // 0x18
    int16_t m_nLayer; // 0x1c
    // CUtlVector< Vector > m_instancePositions;
    // CUtlVector< float32 > m_instanceScales;
    // CUtlVector< Color > m_instanceTintSrgb;
    // CUtlVector< ClutterTile_t > m_tiles;
    // CStrongHandle< InfoForResourceTypeCModel > m_renderableModel;
    // CUtlStringToken m_materialGroup;
    char pad_00[132];
    float m_flBeginCullSize; // 0xa4
    float m_flEndCullSize; // 0xa8
    char pad_01[4];
}; // size: 0xb0

class __declspec(align(4)) RTProxyBLAS_t {
public:
    uint32_t m_nFirstIndex; // 0x0
    uint32_t m_nIndexCount; // 0x4
    uint32_t m_nVBByteOffset; // 0x8
    uint32_t m_nBaseVertex; // 0xc
    uint16_t m_nVertexCount; // 0x10
    VertexAlbedoFormat_t m_albedoFormat; // 0x12
    char pad_00[1];
    AABB_t m_boundLs; // 0x14
    // Vector m_vVertexOriginLs;
    // Vector m_vVertexExtentLs;
    char pad_01[24];
}; // size: 0x44

class __declspec(align(8)) AggregateInstanceStreamOnDiskData_t {
public:
    uint32_t m_DecodedSize; // 0x0
    // CUtlBinaryBlock m_BufferData;
    char pad_00[20];
}; // size: 0x18

class __declspec(align(1)) VMapResourceData_t {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(8)) NodeData_t {
public:
    int32_t m_nParent; // 0x0
    // Vector m_vOrigin;
    // Vector m_vMinBounds;
    // Vector m_vMaxBounds;
    char pad_00[36];
    float m_flMinimumDistance; // 0x28
    // CUtlVector< int32 > m_ChildNodeIndices;
    // CUtlString m_worldNodePrefix;
    char pad_01[36];
}; // size: 0x50

class __declspec(align(8)) AggregateSceneObject_t {
public:
    ObjectTypeFlags_t m_allFlags; // 0x0
    ObjectTypeFlags_t m_anyFlags; // 0x4
    int16_t m_nLayer; // 0x8
    int16_t m_instanceStream; // 0xa
    int16_t m_vertexAlbedoStream; // 0xc
    // CUtlVector< AggregateMeshInfo_t > m_aggregateMeshes;
    // CUtlVector< AggregateLODSetup_t > m_lodSetups;
    // CUtlVector< uint16 > m_visClusterMembership;
    // CUtlVector< matrix3x4_t > m_fragmentTransforms;
    // CStrongHandle< InfoForResourceTypeCModel > m_renderableModel;
    char pad_00[106];
}; // size: 0x78

class __declspec(align(4)) ClutterTile_t {
public:
    uint32_t m_nFirstInstance; // 0x0
    uint32_t m_nLastInstance; // 0x4
    AABB_t m_BoundsWs; // 0x8
}; // size: 0x20

class __declspec(align(8)) ExtraVertexStreamOverride_t {
public:
    char pad_00[4];
    uint32_t m_nSubSceneObject; // 0x4
    uint32_t m_nDrawCallIndex; // 0x8
    MeshDrawPrimitiveFlags_t m_nAdditionalMeshDrawPrimitiveFlags; // 0xc
    CRenderBufferBinding m_extraBufferBinding; // 0x10
}; // size: 0x30

class __declspec(align(8)) AggregateLODSetup_t {
public:
    // Vector m_vLODOrigin;
    char pad_00[12];
    float m_fMaxObjectScale; // 0xc
    // CUtlVector< float32 > m_fSwitchDistances;
    char pad_01[24];
}; // size: 0x28

class __declspec(align(8)) SceneObject_t {
public:
    uint32_t m_nObjectID; // 0x0
    // Vector4D[3] m_vTransform;
    char pad_00[48];
    float m_flFadeStartDistance; // 0x34
    float m_flFadeEndDistance; // 0x38
    // Vector4D m_vTintColor;
    // CUtlString m_skin;
    char pad_01[28];
    ObjectTypeFlags_t m_nObjectTypeFlags; // 0x58
    // Vector m_vLightingOrigin;
    char pad_02[12];
    int16_t m_nOverlayRenderOrder; // 0x68
    int16_t m_nLODOverride; // 0x6a
    int32_t m_nCubeMapPrecomputedHandshake; // 0x6c
    int32_t m_nLightProbeVolumePrecomputedHandshake; // 0x70
    // CStrongHandle< InfoForResourceTypeCModel > m_renderableModel;
    // CStrongHandle< InfoForResourceTypeCRenderMesh > m_renderable;
    char pad_03[20];
}; // size: 0x88

class __declspec(align(8)) AggregateVertexAlbedoStreamOnDiskData_t {
public:
    // CUtlBinaryBlock m_BufferData;
    char pad_00[16];
}; // size: 0x10

class __declspec(align(4)) RTProxyInstanceInfo_t {
public:
    RTProxyInstanceFlags_t m_nFlags; // 0x0
    VertexAlbedoFormat_t m_albedoFormat; // 0x1
    uint16_t m_nBLASCount; // 0x2
    uint32_t m_nBLASIndex; // 0x4
    uint32_t m_nVertexAlbedoByteOffset; // 0x8
    // matrix3x4_t m_mWorldFromLocal;
    char pad_00[48];
}; // size: 0x3c

class __declspec(align(8)) C_OP_LerpEndCapScalar {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    float m_flOutput; // 0x1d4
    float m_flLerpTime; // 0x1d8
    char pad_01[4];
}; // size: 0x1e0

class __declspec(align(8)) C_OP_CPOffsetToPercentageBetweenCPs {
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
    // Vector m_vecOffset;
    char pad_01[14];
}; // size: 0x200

class __declspec(align(8)) C_INIT_SequenceFromCP {
public:
    char pad_00[472];
    bool m_bKillUnused; // 0x1d8
    bool m_bRadiusScale; // 0x1d9
    int32_t m_nCP; // 0x1dc
    // Vector m_vecOffset;
    char pad_01[16];
}; // size: 0x1f0

class __declspec(align(8)) C_INIT_RemapParticleCountToNamedModelMeshGroupScalar {
public:
    char pad_00[552];
}; // size: 0x228

class __declspec(align(8)) C_INIT_InitVecCollection {
public:
    char pad_00[472];
    CParticleCollectionVecInput m_InputValue; // 0x1d8
    ParticleAttributeIndex_t m_nOutputField; // 0x890
    char pad_01[4];
}; // size: 0x898

class __declspec(align(8)) C_OP_RotateVector {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    // Vector m_vecRotAxisMin;
    // Vector m_vecRotAxisMax;
    char pad_01[24];
    float m_flRotRateMin; // 0x1ec
    float m_flRotRateMax; // 0x1f0
    bool m_bNormalize; // 0x1f4
    CPerParticleFloatInput m_flScale; // 0x1f8
}; // size: 0x368

class __declspec(align(16)) C_OP_RampScalarLinear {
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

class __declspec(align(8)) FloatInputMaterialVariable_t {
public:
    // CUtlString m_strVariable;
    char pad_00[8];
    CParticleCollectionFloatInput m_flInput; // 0x8
}; // size: 0x178

class __declspec(align(8)) C_OP_RenderMaterialProxy {
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

class __declspec(align(8)) C_OP_CycleScalar {
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

class __declspec(align(16)) C_OP_SetAttributeToScalarExpression {
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

class __declspec(align(8)) C_OP_WorldCollideConstraint {
public:
    char pad_00[464];
}; // size: 0x1d0

class __declspec(align(8)) C_OP_RenderTreeShake {
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

class __declspec(align(8)) C_OP_SetPerChildControlPoint {
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

class __declspec(align(8)) C_OP_PercentageBetweenTransformLerpCPs {
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

class __declspec(align(8)) C_OP_RenderSprites {
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
    // CReplicationParameters m_replicationParameters;
    char pad_02[4560];
}; // size: 0x5240

class __declspec(align(8)) C_INIT_ModelCull {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber; // 0x1d8
    bool m_bBoundBox; // 0x1dc
    bool m_bCullOutside; // 0x1dd
    bool m_bUseBones; // 0x1de
    char m_HitboxSetName[128]; // 0x1df
    char pad_01[1];
}; // size: 0x260

class __declspec(align(8)) C_OP_ExternalWindForce {
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

class __declspec(align(8)) C_INIT_SetFloatAttributeToVectorExpression {
public:
    char pad_00[472];
    VectorFloatExpressionType_t m_nExpression; // 0x1d8
    CPerParticleVecInput m_vInput1; // 0x1e0
    CPerParticleVecInput m_vInput2; // 0x898
    CParticleRemapFloatInput m_flOutputRemap; // 0xf50
    ParticleAttributeIndex_t m_nOutputField; // 0x10c0
    ParticleSetMethod_t m_nSetMethod; // 0x10c4
}; // size: 0x10c8

class __declspec(align(8)) RenderProjectedMaterial_t {
public:
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial;
    char pad_00[8];
}; // size: 0x8

class __declspec(align(4)) PointDefinitionWithTimeValues_t {
public:
    char pad_00[20];
    float m_flTimeDuration; // 0x14
}; // size: 0x18

class __declspec(align(8)) C_OP_SpinYaw {
public:
    char pad_00[488];
}; // size: 0x1e8

class __declspec(align(8)) C_OP_ClientPhysics {
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

class __declspec(align(8)) C_OP_SetControlPointToCPVelocity {
public:
    char pad_00[472];
    int32_t m_nCPInput; // 0x1d8
    int32_t m_nCPOutputVel; // 0x1dc
    bool m_bNormalize; // 0x1e0
    int32_t m_nCPOutputMag; // 0x1e4
    int32_t m_nCPField; // 0x1e8
    CParticleCollectionVecInput m_vecComparisonVelocity; // 0x1f0
}; // size: 0x8a8

class __declspec(align(8)) C_OP_ParentVortices {
public:
    char pad_00[480];
    float m_flForceScale; // 0x1e0
    // Vector m_vecTwistAxis;
    char pad_01[12];
    bool m_bFlipBasedOnYaw; // 0x1f0
    char pad_02[7];
}; // size: 0x1f8

class __declspec(align(8)) ParticleControlPointDriver_t {
public:
    // ParticleParamID_t m_iControlPoint;
    char pad_00[16];
    ParticleAttachment_t m_iAttachType; // 0x10
    // CUtlString m_attachmentName;
    // Vector m_vecOffset;
    // QAngle m_angOffset;
    // CUtlString m_entityName;
    char pad_01[44];
}; // size: 0x40

class __declspec(align(8)) C_OP_SetToCP {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber; // 0x1d0
    // Vector m_vecOffset;
    char pad_01[12];
    bool m_bOffsetLocal; // 0x1e0
    char pad_02[7];
}; // size: 0x1e8

class __declspec(align(8)) C_OP_RemapModelVolumetoCP {
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

class __declspec(align(8)) C_INIT_QuantizeFloat {
public:
    char pad_00[472];
    CPerParticleFloatInput m_InputValue; // 0x1d8
    ParticleAttributeIndex_t m_nOutputField; // 0x348
    char pad_01[4];
}; // size: 0x350

class __declspec(align(8)) C_OP_RemapParticleCountToScalar {
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

class __declspec(align(8)) C_OP_VectorNoise {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    // Vector m_vecOutputMin;
    // Vector m_vecOutputMax;
    char pad_01[24];
    float m_fl4NoiseScale; // 0x1ec
    bool m_bAdditive; // 0x1f0
    bool m_bOffset; // 0x1f1
    float m_flNoiseAnimationTimeScale; // 0x1f4
}; // size: 0x1f8

class __declspec(align(8)) C_OP_ForceControlPointStub {
public:
    char pad_00[472];
    int32_t m_ControlPoint; // 0x1d8
    char pad_01[4];
}; // size: 0x1e0

class __declspec(align(8)) C_INIT_PositionWarpScalar {
public:
    // Vector m_vecWarpMin;
    // Vector m_vecWarpMax;
    char pad_00[496];
    CPerParticleFloatInput m_InputValue; // 0x1f0
    float m_flPrevPosScale; // 0x360
    int32_t m_nScaleControlPointNumber; // 0x364
    int32_t m_nControlPointNumber; // 0x368
    char pad_01[4];
}; // size: 0x370

class __declspec(align(8)) C_OP_RopeSpringConstraint {
public:
    char pad_00[464];
    CParticleCollectionFloatInput m_flRestLength; // 0x1d0
    CParticleCollectionFloatInput m_flMinDistance; // 0x340
    CParticleCollectionFloatInput m_flMaxDistance; // 0x4b0
    float m_flAdjustmentScale; // 0x620
    CParticleCollectionFloatInput m_flInitialRestingLength; // 0x628
}; // size: 0x798

class __declspec(align(8)) C_OP_SetControlPointOrientationToCPVelocity {
public:
    char pad_00[472];
    int32_t m_nCPInput; // 0x1d8
    int32_t m_nCPOutput; // 0x1dc
}; // size: 0x1e0

class __declspec(align(8)) C_INIT_RemapNamedModelMeshGroupToScalar {
public:
    char pad_00[544];
}; // size: 0x220

class __declspec(align(4)) CParticleFunctionEmitter {
public:
    char pad_00[464];
    int32_t m_nEmitterIndex; // 0x1d0
    char pad_01[4];
}; // size: 0x1d8

class __declspec(align(8)) C_OP_RenderClientPhysicsImpulse {
public:
    char pad_00[544];
    CPerParticleFloatInput m_flRadius; // 0x220
    CPerParticleFloatInput m_flMagnitude; // 0x390
    int32_t m_nSimIdFilter; // 0x500
    char pad_01[4];
}; // size: 0x508

class __declspec(align(8)) C_OP_RenderModels {
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

class __declspec(align(8)) C_OP_RemapSpeed {
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

class __declspec(align(1)) CParticleFunctionConstraint {
public:
    char pad_00[464];
}; // size: 0x1d0

class __declspec(align(8)) MaterialVariable_t {
public:
    // CUtlString m_strVariable;
    char pad_00[8];
    ParticleAttributeIndex_t m_nVariableField; // 0x8
    float m_flScale; // 0xc
}; // size: 0x10

class __declspec(align(8)) C_INIT_SetRigidAttachment {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber; // 0x1d8
    ParticleAttributeIndex_t m_nFieldInput; // 0x1dc
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1e0
    bool m_bLocalSpace; // 0x1e4
    char pad_01[3];
}; // size: 0x1e8

class __declspec(align(8)) ParticleControlPointConfiguration_t {
public:
    // CUtlString m_name;
    // CUtlVector< ParticleControlPointDriver_t > m_drivers;
    // ParticlePreviewState_t m_previewState;
    char pad_00[136];
}; // size: 0x88

class __declspec(align(8)) C_OP_RemapDensityToVector {
public:
    char pad_00[464];
    float m_flRadiusScale; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
    float m_flDensityMin; // 0x1d8
    float m_flDensityMax; // 0x1dc
    // Vector m_vecOutputMin;
    // Vector m_vecOutputMax;
    char pad_01[24];
    bool m_bUseParentDensity; // 0x1f8
    int32_t m_nVoxelGridResolution; // 0x1fc
}; // size: 0x200

class __declspec(align(8)) C_OP_ForceBasedOnDistanceToPlane {
public:
    char pad_00[480];
    float m_flMinDist; // 0x1e0
    // Vector m_vecForceAtMinDist;
    char pad_01[12];
    float m_flMaxDist; // 0x1f0
    // Vector m_vecForceAtMaxDist;
    // Vector m_vecPlaneNormal;
    char pad_02[24];
    int32_t m_nControlPointNumber; // 0x20c
    float m_flExponent; // 0x210
    char pad_03[4];
}; // size: 0x218

class __declspec(align(8)) C_OP_EndCapDecay {
public:
    char pad_00[464];
}; // size: 0x1d0

class __declspec(align(8)) CReplicationParameters {
public:
    ParticleReplicationMode_t m_nReplicationMode; // 0x0
    bool m_bScaleChildParticleRadii; // 0x4
    CParticleCollectionFloatInput m_flMinRandomRadiusScale; // 0x8
    CParticleCollectionFloatInput m_flMaxRandomRadiusScale; // 0x178
    CParticleCollectionVecInput m_vMinRandomDisplacement; // 0x2e8
    CParticleCollectionVecInput m_vMaxRandomDisplacement; // 0x9a0
    CParticleCollectionFloatInput m_flModellingScale; // 0x1058
}; // size: 0x11c8

class __declspec(align(8)) C_INIT_DistanceToCPInit {
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
    // Vector m_vecDistanceScale;
    char pad_01[12];
    float m_flRemapBias; // 0x9b8
    char pad_02[4];
}; // size: 0x9c0

class __declspec(align(8)) C_OP_EnableChildrenFromParentParticleCount {
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

class __declspec(align(8)) C_OP_RenderLightBeam {
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

class __declspec(align(8)) C_OP_RenderFlattenGrass {
public:
    char pad_00[544];
    float m_flFlattenStrength; // 0x220
    ParticleAttributeIndex_t m_nStrengthFieldOverride; // 0x224
    float m_flRadiusScale; // 0x228
    char pad_01[4];
}; // size: 0x230

class __declspec(align(8)) C_OP_MovementRigidAttachToCP {
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

class __declspec(align(8)) C_INIT_ChaoticAttractor {
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

class __declspec(align(16)) C_OP_RampScalarLinearSimple {
public:
    char pad_00[464];
    float m_Rate; // 0x1d0
    float m_flStartTime; // 0x1d4
    float m_flEndTime; // 0x1d8
    char pad_01[36];
    ParticleAttributeIndex_t m_nField; // 0x200
    char pad_02[12];
}; // size: 0x210

class __declspec(align(8)) C_INIT_InheritFromParentParticles {
public:
    char pad_00[472];
    float m_flScale; // 0x1d8
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1dc
    int32_t m_nIncrement; // 0x1e0
    bool m_bRandomDistribution; // 0x1e4
    int32_t m_nRandomSeed; // 0x1e8
    char pad_01[4];
}; // size: 0x1f0

class __declspec(align(8)) C_INIT_RemapParticleCountToScalar {
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

class __declspec(align(8)) C_OP_SetGravityToCP {
public:
    char pad_00[472];
    int32_t m_nCPInput; // 0x1d8
    int32_t m_nCPOutput; // 0x1dc
    CParticleCollectionFloatInput m_flScale; // 0x1e0
    bool m_bSetOrientation; // 0x350
    bool m_bSetZDown; // 0x351
    char pad_01[6];
}; // size: 0x358

class __declspec(align(8)) C_INIT_RandomColor {
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

class __declspec(align(16)) C_OP_LerpToOtherAttribute {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flInterpolation; // 0x1d0
    ParticleAttributeIndex_t m_nFieldInputFrom; // 0x340
    ParticleAttributeIndex_t m_nFieldInput; // 0x344
    ParticleAttributeIndex_t m_nFieldOutput; // 0x348
    char pad_01[36];
}; // size: 0x370

class __declspec(align(8)) C_INIT_PointList {
public:
    char pad_00[472];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8
    // CUtlVector< PointDefinition_t > m_pointList;
    char pad_01[28];
    bool m_bPlaceAlongPath; // 0x1f8
    bool m_bClosedLoop; // 0x1f9
    int32_t m_nNumPointsAlongPath; // 0x1fc
}; // size: 0x200

class __declspec(align(8)) C_OP_PinRopeSegmentParticleToParent {
public:
    char pad_00[464];
    ParticleSelection_t m_nParticleSelection; // 0x1d0
    CParticleCollectionFloatInput m_nParticleNumber; // 0x1d8
    CPerParticleFloatInput m_flInterpolation; // 0x348
}; // size: 0x4b8

class __declspec(align(8)) C_OP_MoveToHitbox {
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

class __declspec(align(8)) C_INIT_ScaleVelocity {
public:
    char pad_00[472];
    CParticleCollectionVecInput m_vecScale; // 0x1d8
}; // size: 0x890

class __declspec(align(4)) C_OP_RemapNamedModelElementEndCap {
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

class __declspec(align(8)) C_OP_CPVelocityForce {
public:
    char pad_00[480];
    int32_t m_nControlPointNumber; // 0x1e0
    CPerParticleFloatInput m_flScale; // 0x1e8
}; // size: 0x358

class __declspec(align(8)) C_INIT_CreateSpiralSphere {
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

class __declspec(align(8)) C_OP_LockPoints {
public:
    char pad_00[464];
    int32_t m_nMinCol; // 0x1d0
    int32_t m_nMaxCol; // 0x1d4
    int32_t m_nMinRow; // 0x1d8
    int32_t m_nMaxRow; // 0x1dc
    int32_t m_nControlPoint; // 0x1e0
    float m_flBlendValue; // 0x1e4
}; // size: 0x1e8

class __declspec(align(8)) C_INIT_CreateFromCPs {
public:
    char pad_00[472];
    int32_t m_nIncrement; // 0x1d8
    int32_t m_nMinCP; // 0x1dc
    int32_t m_nMaxCP; // 0x1e0
    CParticleCollectionFloatInput m_nDynamicCPCount; // 0x1e8
}; // size: 0x358

class __declspec(align(8)) C_OP_PlanarConstraint {
public:
    // Vector m_PointOnPlane;
    // Vector m_PlaneNormal;
    char pad_00[488];
    int32_t m_nControlPointNumber; // 0x1e8
    bool m_bGlobalOrigin; // 0x1ec
    bool m_bGlobalNormal; // 0x1ed
    CPerParticleFloatInput m_flRadiusScale; // 0x1f0
    CParticleCollectionFloatInput m_flMaximumDistanceToCP; // 0x360
    bool m_bUseOldCode; // 0x4d0
    char pad_01[7];
}; // size: 0x4d8

class __declspec(align(8)) ModelReference_t {
public:
    // CStrongHandle< InfoForResourceTypeCModel > m_model;
    char pad_00[8];
    float m_flRelativeProbabilityOfSpawn; // 0x8
    char pad_01[4];
}; // size: 0x10

class __declspec(align(8)) C_OP_SelectivelyEnableChildren {
public:
    char pad_00[472];
    CParticleCollectionFloatInput m_nChildGroupID; // 0x1d8
    CParticleCollectionFloatInput m_nFirstChild; // 0x348
    CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x4b8
    bool m_bPlayEndcapOnStop; // 0x628
    bool m_bDestroyImmediately; // 0x629
    char pad_01[6];
}; // size: 0x630

class __declspec(align(4)) CParticleFunctionInitializer {
public:
    char pad_00[464];
    int32_t m_nAssociatedEmitterIndex; // 0x1d0
    char pad_01[4];
}; // size: 0x1d8

class __declspec(align(8)) C_OP_NoiseEmitter {
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
    // Vector m_vecOffsetLoc;
    char pad_01[12];
    float m_flWorldTimeScale; // 0x214
}; // size: 0x218

class __declspec(align(8)) C_INIT_InitialSequenceFromModel {
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

class __declspec(align(8)) C_INIT_RemapScalarToVector {
public:
    char pad_00[472];
    ParticleAttributeIndex_t m_nFieldInput; // 0x1d8
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1dc
    float m_flInputMin; // 0x1e0
    float m_flInputMax; // 0x1e4
    // Vector m_vecOutputMin;
    // Vector m_vecOutputMax;
    char pad_01[24];
    float m_flStartTime; // 0x200
    float m_flEndTime; // 0x204
    ParticleSetMethod_t m_nSetMethod; // 0x208
    int32_t m_nControlPointNumber; // 0x20c
    bool m_bLocalCoords; // 0x210
    float m_flRemapBias; // 0x214
    char pad_02[8];
}; // size: 0x220

class __declspec(align(8)) C_INIT_RemapNamedModelBodyPartToScalar {
public:
    char pad_00[544];
}; // size: 0x220

class __declspec(align(8)) C_OP_RadiusDecay {
public:
    char pad_00[464];
    float m_flMinRadius; // 0x1d0
    char pad_01[4];
}; // size: 0x1d8

class __declspec(align(8)) C_INIT_CreateWithinSphereTransform {
public:
    char pad_00[472];
    CPerParticleFloatInput m_fRadiusMin; // 0x1d8
    CPerParticleFloatInput m_fRadiusMax; // 0x348
    CPerParticleVecInput m_vecDistanceBias; // 0x4b8
    // Vector m_vecDistanceBiasAbs;
    char pad_01[16];
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

class __declspec(align(8)) C_OP_SnapshotSkinToBones {
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

class __declspec(align(8)) C_OP_SetCPOrientationToGroundNormal {
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

class __declspec(align(8)) C_OP_TimeVaryingForce {
public:
    char pad_00[480];
    float m_flStartLerpTime; // 0x1e0
    // Vector m_StartingForce;
    char pad_01[12];
    float m_flEndLerpTime; // 0x1f0
    // Vector m_EndingForce;
    char pad_02[12];
}; // size: 0x200

class __declspec(align(8)) TextureGroup_t {
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
    // TextureControls_t m_TextureControls;
    char pad_01[2608];
}; // size: 0xbd8

class __declspec(align(8)) C_OP_SetControlPointFieldToWater {
public:
    char pad_00[472];
    int32_t m_nSourceCP; // 0x1d8
    int32_t m_nDestCP; // 0x1dc
    int32_t m_nCPField; // 0x1e0
    char pad_01[4];
}; // size: 0x1e8

class __declspec(align(8)) C_OP_LerpVector {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    // Vector m_vecOutput;
    char pad_01[12];
    float m_flStartTime; // 0x1e0
    float m_flEndTime; // 0x1e4
    ParticleSetMethod_t m_nSetMethod; // 0x1e8
    char pad_02[4];
}; // size: 0x1f0

class __declspec(align(8)) C_INIT_InitialVelocityFromHitbox {
public:
    char pad_00[472];
    float m_flVelocityMin; // 0x1d8
    float m_flVelocityMax; // 0x1dc
    int32_t m_nControlPointNumber; // 0x1e0
    char m_HitboxSetName[128]; // 0x1e4
    bool m_bUseBones; // 0x264
    char pad_01[3];
}; // size: 0x268

class __declspec(align(8)) C_INIT_RadiusFromCPObject {
public:
    char pad_00[472];
    int32_t m_nControlPoint; // 0x1d8
    char pad_01[4];
}; // size: 0x1e0

class __declspec(align(8)) C_INIT_GlobalScale {
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

class __declspec(align(8)) C_OP_HSVShiftToCP {
public:
    char pad_00[472];
    int32_t m_nColorCP; // 0x1d8
    int32_t m_nColorGemEnableCP; // 0x1dc
    int32_t m_nOutputCP; // 0x1e0
    // Color m_DefaultHSVColor;
    char pad_01[20];
}; // size: 0x1f8

class __declspec(align(8)) C_OP_RemapBoundingVolumetoCP {
public:
    char pad_00[472];
    int32_t m_nOutControlPointNumber; // 0x1d8
    float m_flInputMin; // 0x1dc
    float m_flInputMax; // 0x1e0
    float m_flOutputMin; // 0x1e4
    float m_flOutputMax; // 0x1e8
    char pad_01[4];
}; // size: 0x1f0

class __declspec(align(8)) C_OP_RenderScreenShake {
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

class __declspec(align(8)) C_OP_FadeIn {
public:
    char pad_00[464];
    float m_flFadeInTimeMin; // 0x1d0
    float m_flFadeInTimeMax; // 0x1d4
    float m_flFadeInTimeExp; // 0x1d8
    bool m_bProportional; // 0x1dc
    char pad_01[3];
}; // size: 0x1e0

class __declspec(align(8)) C_OP_SetSimulationRate {
public:
    char pad_00[472];
    CParticleCollectionFloatInput m_flSimulationScale; // 0x1d8
}; // size: 0x348

class __declspec(align(8)) C_INIT_Orient2DRelToCP {
public:
    char pad_00[472];
    int32_t m_nCP; // 0x1d8
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1dc
    float m_flRotOffset; // 0x1e0
    char pad_01[4];
}; // size: 0x1e8

class __declspec(align(8)) C_OP_CurlNoiseForce {
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

class __declspec(align(8)) C_OP_SetControlPointRotation {
public:
    char pad_00[472];
    CParticleCollectionVecInput m_vecRotAxis; // 0x1d8
    CParticleCollectionFloatInput m_flRotRate; // 0x890
    int32_t m_nCP; // 0xa00
    int32_t m_nLocalCP; // 0xa04
}; // size: 0xa08

class __declspec(align(8)) C_OP_RemapCPtoCP {
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

class __declspec(align(8)) C_OP_RemapDotProductToScalar {
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

class __declspec(align(8)) C_OP_RemapAverageScalarValuetoCP {
public:
    char pad_00[472];
    SetStatisticExpressionType_t m_nExpression; // 0x1d8
    CParticleCollectionFloatInput m_flDecimalPlaces; // 0x1e0
    int32_t m_nOutControlPointNumber; // 0x350
    int32_t m_nOutVectorField; // 0x354
    ParticleAttributeIndex_t m_nField; // 0x358
    CParticleRemapFloatInput m_flOutputRemap; // 0x360
}; // size: 0x4d0

class __declspec(align(8)) C_OP_SetControlPointToCenter {
public:
    char pad_00[472];
    int32_t m_nCP1; // 0x1d8
    // Vector m_vecCP1Pos;
    char pad_01[12];
    bool m_bUseAvgParticlePos; // 0x1e8
    ParticleParentSetMode_t m_nSetParent; // 0x1ec
}; // size: 0x1f0

class __declspec(align(8)) C_OP_RemapControlPointOrientationToRotation {
public:
    char pad_00[464];
    int32_t m_nCP; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
    float m_flOffsetRot; // 0x1d8
    int32_t m_nComponent; // 0x1dc
}; // size: 0x1e0

class __declspec(align(8)) C_OP_DistanceToTransform {
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

class __declspec(align(8)) C_OP_RenderStandardLight {
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

class __declspec(align(8)) C_OP_SetVariable {
public:
    char pad_00[472];
    CParticleVariableRef m_variableReference; // 0x1d8
    CParticleTransformInput m_transformInput; // 0x228
    // Vector m_positionOffset;
    // QAngle m_rotationOffset;
    char pad_01[24];
    CParticleCollectionVecInput m_vecInput; // 0x2a8
    CParticleCollectionFloatInput m_floatInput; // 0x960
}; // size: 0xad0

class __declspec(align(8)) C_OP_WindForce {
public:
    // Vector m_vForce;
    char pad_00[496];
}; // size: 0x1f0

class __declspec(align(1)) IParticleSystemDefinition {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(8)) C_OP_RenderStatusEffectCitadel {
public:
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureColorWarp;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureNormal;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureMetalness;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureRoughness;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureSelfIllum;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDetail;
    char pad_00[592];
}; // size: 0x250

class __declspec(align(8)) C_OP_ClampVector {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    CPerParticleVecInput m_vecOutputMin; // 0x1d8
    CPerParticleVecInput m_vecOutputMax; // 0x890
}; // size: 0xf48

class __declspec(align(4)) C_INIT_RemapNamedModelElementToScalar {
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

class __declspec(align(16)) C_OP_LockToSavedSequentialPath {
public:
    char pad_00[468];
    float m_flFadeStart; // 0x1d4
    float m_flFadeEnd; // 0x1d8
    bool m_bCPPairs; // 0x1dc
    // CPathParameters m_PathParams;
    char pad_01[67];
}; // size: 0x220

class __declspec(align(4)) CGeneralSpin {
public:
    char pad_00[464];
    int32_t m_nSpinRateDegrees; // 0x1d0
    int32_t m_nSpinRateMinDegrees; // 0x1d4
    char pad_01[4];
    float m_fSpinRateStopTime; // 0x1dc
    char pad_02[8];
}; // size: 0x1e8

class __declspec(align(8)) C_OP_StopAfterCPDuration {
public:
    char pad_00[472];
    CParticleCollectionFloatInput m_flDuration; // 0x1d8
    bool m_bDestroyImmediately; // 0x348
    bool m_bPlayEndCap; // 0x349
    char pad_01[6];
}; // size: 0x350

class __declspec(align(8)) C_OP_RemapNamedModelBodyPartEndCap {
public:
    char pad_00[560];
}; // size: 0x230

class __declspec(align(16)) C_OP_MaintainSequentialPath {
public:
    char pad_00[464];
    float m_fMaxDistance; // 0x1d0
    float m_flNumToAssign; // 0x1d4
    float m_flCohesionStrength; // 0x1d8
    float m_flTolerance; // 0x1dc
    bool m_bLoop; // 0x1e0
    bool m_bUseParticleCount; // 0x1e1
    // CPathParameters m_PathParams;
    char pad_01[78];
}; // size: 0x230

class __declspec(align(8)) C_OP_SetControlPointFromObjectScale {
public:
    char pad_00[472];
    int32_t m_nCPInput; // 0x1d8
    int32_t m_nCPOutput; // 0x1dc
}; // size: 0x1e0

class __declspec(align(8)) C_OP_RemapNamedModelSequenceOnceTimed {
public:
    char pad_00[560];
}; // size: 0x230

class __declspec(align(16)) C_OP_RampScalarSpline {
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

class __declspec(align(8)) C_OP_ColorInterpolate {
public:
    // Color m_ColorFade;
    char pad_00[480];
    float m_flFadeStartTime; // 0x1e0
    float m_flFadeEndTime; // 0x1e4
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1e8
    bool m_bEaseInOut; // 0x1ec
    char pad_01[3];
}; // size: 0x1f0

class __declspec(align(8)) C_OP_FadeAndKill {
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

class __declspec(align(8)) C_INIT_RemapInitialTransformDirectionToRotation {
public:
    char pad_00[472];
    CParticleTransformInput m_TransformInput; // 0x1d8
    ParticleAttributeIndex_t m_nFieldOutput; // 0x240
    float m_flOffsetRot; // 0x244
    int32_t m_nComponent; // 0x248
    char pad_01[4];
}; // size: 0x250

class __declspec(align(8)) C_INIT_PositionOffsetToCP {
public:
    char pad_00[472];
    int32_t m_nControlPointNumberStart; // 0x1d8
    int32_t m_nControlPointNumberEnd; // 0x1dc
    bool m_bLocalCoords; // 0x1e0
    char pad_01[7];
}; // size: 0x1e8

class __declspec(align(8)) C_OP_MaintainEmitter {
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

class __declspec(align(8)) C_INIT_VelocityFromNormal {
public:
    char pad_00[472];
    float m_fSpeedMin; // 0x1d8
    float m_fSpeedMax; // 0x1dc
    bool m_bIgnoreDt; // 0x1e0
    char pad_01[7];
}; // size: 0x1e8

class __declspec(align(8)) C_OP_MaxVelocity {
public:
    char pad_00[464];
    float m_flMaxVelocity; // 0x1d0
    float m_flMinVelocity; // 0x1d4
    int32_t m_nOverrideCP; // 0x1d8
    int32_t m_nOverrideCPField; // 0x1dc
}; // size: 0x1e0

class __declspec(align(8)) C_OP_RenderProjected {
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

class __declspec(align(8)) C_INIT_RandomNamedModelMeshGroup {
public:
    char pad_00[512];
}; // size: 0x200

class __declspec(align(8)) C_OP_PerParticleForce {
public:
    char pad_00[480];
    CPerParticleFloatInput m_flForceScale; // 0x1e0
    CPerParticleVecInput m_vForce; // 0x350
    int32_t m_nCP; // 0xa08
    char pad_01[4];
}; // size: 0xa10

class __declspec(align(8)) C_OP_InheritFromPeerSystem {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    ParticleAttributeIndex_t m_nFieldInput; // 0x1d4
    int32_t m_nIncrement; // 0x1d8
    int32_t m_nGroupID; // 0x1dc
}; // size: 0x1e0

class __declspec(align(8)) C_INIT_CreateOnModel {
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

class __declspec(align(8)) C_INIT_InitFloat {
public:
    char pad_00[472];
    CPerParticleFloatInput m_InputValue; // 0x1d8
    ParticleAttributeIndex_t m_nOutputField; // 0x348
    ParticleSetMethod_t m_nSetMethod; // 0x34c
    CPerParticleFloatInput m_InputStrength; // 0x350
}; // size: 0x4c0

class __declspec(align(8)) C_OP_IntraParticleForce {
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

class __declspec(align(8)) C_OP_MovementRotateParticleAroundAxis {
public:
    char pad_00[464];
    CParticleCollectionVecInput m_vecRotAxis; // 0x1d0
    CParticleCollectionFloatInput m_flRotRate; // 0x888
    CParticleTransformInput m_TransformInput; // 0x9f8
    bool m_bLocalSpace; // 0xa60
    char pad_01[7];
}; // size: 0xa68

class __declspec(align(8)) C_OP_SetFloatAttributeToVectorExpression {
public:
    char pad_00[464];
    VectorFloatExpressionType_t m_nExpression; // 0x1d0
    CPerParticleVecInput m_vInput1; // 0x1d8
    CPerParticleVecInput m_vInput2; // 0x890
    CParticleRemapFloatInput m_flOutputRemap; // 0xf48
    ParticleAttributeIndex_t m_nOutputField; // 0x10b8
    ParticleSetMethod_t m_nSetMethod; // 0x10bc
}; // size: 0x10c0

class __declspec(align(8)) C_OP_SetControlPointPositions {
public:
    char pad_00[472];
    bool m_bUseWorldLocation; // 0x1d8
    bool m_bOrient; // 0x1d9
    bool m_bSetOnce; // 0x1da
    int32_t m_nCP1; // 0x1dc
    int32_t m_nCP2; // 0x1e0
    int32_t m_nCP3; // 0x1e4
    int32_t m_nCP4; // 0x1e8
    // Vector m_vecCP1Pos;
    // Vector m_vecCP2Pos;
    // Vector m_vecCP3Pos;
    // Vector m_vecCP4Pos;
    char pad_01[48];
    int32_t m_nHeadLocation; // 0x21c
}; // size: 0x220

class __declspec(align(8)) C_OP_ConstrainDistanceToUserSpecifiedPath {
public:
    char pad_00[464];
    float m_fMinDistance; // 0x1d0
    float m_flMaxDistance; // 0x1d4
    float m_flTimeScale; // 0x1d8
    bool m_bLoopedPath; // 0x1dc
    // CUtlVector< PointDefinitionWithTimeValues_t > m_pointList;
    char pad_01[27];
}; // size: 0x1f8

class __declspec(align(8)) C_INIT_CreateInEpitrochoid {
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

class __declspec(align(8)) C_OP_DensityForce {
public:
    char pad_00[480];
    float m_flRadiusScale; // 0x1e0
    float m_flForceScale; // 0x1e4
    float m_flTargetDensity; // 0x1e8
    char pad_01[4];
}; // size: 0x1f0

class __declspec(align(8)) C_INIT_CreateParticleImpulse {
public:
    char pad_00[472];
    CPerParticleFloatInput m_InputRadius; // 0x1d8
    CPerParticleFloatInput m_InputMagnitude; // 0x348
    ParticleFalloffFunction_t m_nFalloffFunction; // 0x4b8
    CPerParticleFloatInput m_InputFalloffExp; // 0x4c0
    ParticleImpulseType_t m_nImpulseType; // 0x630
    char pad_01[4];
}; // size: 0x638

class __declspec(align(8)) C_OP_RemapCPtoVector {
public:
    char pad_00[464];
    int32_t m_nCPInput; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
    int32_t m_nLocalSpaceCP; // 0x1d8
    // Vector m_vInputMin;
    // Vector m_vInputMax;
    // Vector m_vOutputMin;
    // Vector m_vOutputMax;
    char pad_01[48];
    float m_flStartTime; // 0x20c
    float m_flEndTime; // 0x210
    float m_flInterpRate; // 0x214
    ParticleSetMethod_t m_nSetMethod; // 0x218
    bool m_bOffset; // 0x21c
    bool m_bAccelerate; // 0x21d
    char pad_02[2];
}; // size: 0x220

class __declspec(align(8)) C_OP_PinParticleToCP {
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

class __declspec(align(8)) C_OP_RtEnvCull {
public:
    // Vector m_vecTestDir;
    // Vector m_vecTestNormal;
    char pad_00[488];
    bool m_bCullOnMiss; // 0x1e8
    bool m_bStickInsteadOfCull; // 0x1e9
    char m_RtEnvName[128]; // 0x1ea
    int32_t m_nRTEnvCP; // 0x26c
    int32_t m_nComponent; // 0x270
    char pad_01[4];
}; // size: 0x278

class __declspec(align(8)) C_INIT_ScreenSpacePositionOfTarget {
public:
    char pad_00[472];
    CPerParticleVecInput m_vecTargetPosition; // 0x1d8
    bool m_bOututBehindness; // 0x890
    ParticleAttributeIndex_t m_nBehindFieldOutput; // 0x894
    CParticleRemapFloatInput m_flBehindOutputRemap; // 0x898
}; // size: 0xa08

class __declspec(align(8)) C_OP_DriveCPFromGlobalSoundFloat {
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

class __declspec(align(8)) C_OP_RemapDirectionToCPToVector {
public:
    char pad_00[464];
    int32_t m_nCP; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
    float m_flScale; // 0x1d8
    float m_flOffsetRot; // 0x1dc
    // Vector m_vecOffsetAxis;
    char pad_01[12];
    bool m_bNormalize; // 0x1ec
    ParticleAttributeIndex_t m_nFieldStrength; // 0x1f0
    char pad_02[4];
}; // size: 0x1f8

class __declspec(align(8)) C_OP_ChladniWave {
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

class __declspec(align(8)) C_OP_SetChildControlPoints {
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

class __declspec(align(8)) C_OP_ShapeMatchingConstraint {
public:
    char pad_00[464];
    float m_flShapeRestorationTime; // 0x1d0
    char pad_01[4];
}; // size: 0x1d8

class __declspec(align(8)) C_INIT_NormalAlignToCP {
public:
    char pad_00[472];
    CParticleTransformInput m_transformInput; // 0x1d8
    ParticleControlPointAxis_t m_nControlPointAxis; // 0x240
    char pad_01[4];
}; // size: 0x248

class __declspec(align(8)) C_INIT_PositionOffset {
public:
    char pad_00[472];
    CPerParticleVecInput m_OffsetMin; // 0x1d8
    CPerParticleVecInput m_OffsetMax; // 0x890
    CParticleTransformInput m_TransformInput; // 0xf48
    bool m_bLocalCoords; // 0xfb0
    bool m_bProportional; // 0xfb1
    // CRandomNumberGeneratorParameters m_randomnessParameters;
    char pad_01[14];
}; // size: 0xfc0

class __declspec(align(8)) C_OP_SetControlPointToWaterSurface {
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

class __declspec(align(8)) C_INIT_InheritVelocity {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber; // 0x1d8
    float m_flVelocityScale; // 0x1dc
}; // size: 0x1e0

class __declspec(align(8)) C_OP_RenderCables {
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

class __declspec(align(8)) C_INIT_InitFromCPSnapshot {
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

class __declspec(align(8)) C_OP_RemapNamedModelSequenceEndCap {
public:
    char pad_00[560];
}; // size: 0x230

class __declspec(align(8)) C_INIT_PlaneCull {
public:
    char pad_00[472];
    int32_t m_nControlPoint; // 0x1d8
    CParticleCollectionFloatInput m_flDistance; // 0x1e0
    bool m_bCullInside; // 0x350
    char pad_01[7];
}; // size: 0x358

class __declspec(align(8)) C_OP_PercentageBetweenTransforms {
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

class __declspec(align(8)) C_OP_SetControlPointFieldFromVectorExpression {
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

class __declspec(align(8)) C_OP_DifferencePreviousParticle {
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

class __declspec(align(8)) C_OP_SetControlPointToHMD {
public:
    char pad_00[472];
    int32_t m_nCP1; // 0x1d8
    // Vector m_vecCP1Pos;
    char pad_01[12];
    bool m_bOrientToHMD; // 0x1e8
    char pad_02[7];
}; // size: 0x1f0

class __declspec(align(8)) C_OP_ClampScalar {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    CPerParticleFloatInput m_flOutputMin; // 0x1d8
    CPerParticleFloatInput m_flOutputMax; // 0x348
}; // size: 0x4b8

class __declspec(align(8)) C_INIT_InitialRepulsionVelocity {
public:
    char pad_00[472];
    char m_CollisionGroupName[128]; // 0x1d8
    ParticleTraceSet_t m_nTraceSet; // 0x258
    // Vector m_vecOutputMin;
    // Vector m_vecOutputMax;
    char pad_01[24];
    int32_t m_nControlPointNumber; // 0x274
    bool m_bPerParticle; // 0x278
    bool m_bTranslate; // 0x279
    bool m_bProportional; // 0x27a
    float m_flTraceLength; // 0x27c
    bool m_bPerParticleTR; // 0x280
    bool m_bInherit; // 0x281
    int32_t m_nChildCP; // 0x284
    int32_t m_nChildGroupID; // 0x288
    char pad_02[4];
}; // size: 0x290

class __declspec(align(8)) C_OP_LerpScalar {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    CPerParticleFloatInput m_flOutput; // 0x1d8
    float m_flStartTime; // 0x348
    float m_flEndTime; // 0x34c
}; // size: 0x350

class __declspec(align(8)) C_OP_MovementMoveAlongSkinnedCPSnapshot {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber; // 0x1d0
    int32_t m_nSnapshotControlPointNumber; // 0x1d4
    bool m_bSetNormal; // 0x1d8
    bool m_bSetRadius; // 0x1d9
    CPerParticleFloatInput m_flInterpolation; // 0x1e0
    CPerParticleFloatInput m_flTValue; // 0x350
}; // size: 0x4c0

class __declspec(align(8)) C_INIT_SetHitboxToModel {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber; // 0x1d8
    int32_t m_nForceInModel; // 0x1dc
    bool m_bEvenDistribution; // 0x1e0
    int32_t m_nDesiredHitbox; // 0x1e4
    CParticleCollectionVecInput m_vecHitBoxScale; // 0x1e8
    // Vector m_vecDirectionBias;
    char pad_01[12];
    bool m_bMaintainHitbox; // 0x8ac
    bool m_bUseBones; // 0x8ad
    char m_HitboxSetName[128]; // 0x8ae
    CParticleCollectionFloatInput m_flShellSize; // 0x930
}; // size: 0xaa0

class __declspec(align(8)) C_INIT_InitVec {
public:
    char pad_00[472];
    CPerParticleVecInput m_InputValue; // 0x1d8
    ParticleAttributeIndex_t m_nOutputField; // 0x890
    ParticleSetMethod_t m_nSetMethod; // 0x894
    bool m_bNormalizedOutput; // 0x898
    bool m_bWritePreviousPosition; // 0x899
    char pad_01[6];
}; // size: 0x8a0

class __declspec(align(8)) C_OP_RemapDensityGradientToVectorAttribute {
public:
    char pad_00[464];
    float m_flRadiusScale; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
}; // size: 0x1d8

class __declspec(align(8)) C_OP_AlphaDecay {
public:
    char pad_00[464];
    float m_flMinAlpha; // 0x1d0
    char pad_01[4];
}; // size: 0x1d8

class __declspec(align(8)) C_OP_SequenceFromModel {
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

class __declspec(align(8)) CParticleMassCalculationParameters {
public:
    ParticleMassMode_t m_nMassMode; // 0x0
    CPerParticleFloatInput m_flRadius; // 0x8
    CPerParticleFloatInput m_flNominalRadius; // 0x178
    CPerParticleFloatInput m_flScale; // 0x2e8
}; // size: 0x458

class __declspec(align(8)) C_OP_ColorAdjustHSL {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flHueAdjust; // 0x1d0
    CPerParticleFloatInput m_flSaturationAdjust; // 0x340
    CPerParticleFloatInput m_flLightnessAdjust; // 0x4b0
}; // size: 0x620

class __declspec(align(8)) C_OP_FadeAndKillForTracers {
public:
    char pad_00[464];
    float m_flStartFadeInTime; // 0x1d0
    float m_flEndFadeInTime; // 0x1d4
    float m_flStartFadeOutTime; // 0x1d8
    float m_flEndFadeOutTime; // 0x1dc
    float m_flStartAlpha; // 0x1e0
    float m_flEndAlpha; // 0x1e4
}; // size: 0x1e8

class __declspec(align(8)) C_OP_Noise {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    float m_flOutputMin; // 0x1d4
    float m_flOutputMax; // 0x1d8
    float m_fl4NoiseScale; // 0x1dc
    bool m_bAdditive; // 0x1e0
    float m_flNoiseAnimationTimeScale; // 0x1e4
}; // size: 0x1e8

class __declspec(align(8)) C_OP_CollideWithSelf {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flRadiusScale; // 0x1d0
    CPerParticleFloatInput m_flMinimumSpeed; // 0x340
}; // size: 0x4b0

class __declspec(align(8)) C_OP_LagCompensation {
public:
    char pad_00[464];
    int32_t m_nDesiredVelocityCP; // 0x1d0
    int32_t m_nLatencyCP; // 0x1d4
    int32_t m_nLatencyCPField; // 0x1d8
    int32_t m_nDesiredVelocityCPField; // 0x1dc
}; // size: 0x1e0

class __declspec(align(8)) C_INIT_InitSkinnedPositionFromCPSnapshot {
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

class __declspec(align(8)) C_INIT_RemapParticleCountToNamedModelBodyPartScalar {
public:
    char pad_00[552];
}; // size: 0x228

class __declspec(align(8)) CPAssignment_t {
public:
    int32_t m_nCPNumber; // 0x0
    CPerParticleVecInput m_Pos; // 0x8
    ParticleOrientationSetMode_t m_nOrientationMode; // 0x6c0
    char pad_00[4];
}; // size: 0x6c8

class __declspec(align(8)) C_OP_ConnectParentParticleToNearest {
public:
    char pad_00[464];
    int32_t m_nFirstControlPoint; // 0x1d0
    int32_t m_nSecondControlPoint; // 0x1d4
    bool m_bUseRadius; // 0x1d8
    CParticleCollectionFloatInput m_flRadiusScale; // 0x1e0
    CParticleCollectionFloatInput m_flParentRadiusScale; // 0x350
}; // size: 0x4c0

class __declspec(align(8)) C_OP_RenderOmni2Light {
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

class __declspec(align(8)) C_INIT_RandomNamedModelBodyPart {
public:
    char pad_00[512];
}; // size: 0x200

class __declspec(align(8)) C_INIT_CheckParticleForWater {
public:
    char pad_00[472];
    CPerParticleFloatInput m_flRadius; // 0x1d8
    ParticleAttributeIndex_t m_nFieldOutput; // 0x348
    CParticleRemapFloatInput m_flOutputRemap; // 0x350
    ParticleSetMethod_t m_nSetMethod; // 0x4c0
    char pad_01[4];
}; // size: 0x4c8

class __declspec(align(8)) C_INIT_CreateFromParentParticles {
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

class __declspec(align(8)) C_OP_SetVec {
public:
    char pad_00[464];
    CPerParticleVecInput m_InputValue; // 0x1d0
    ParticleAttributeIndex_t m_nOutputField; // 0x888
    ParticleSetMethod_t m_nSetMethod; // 0x88c
    CPerParticleFloatInput m_Lerp; // 0x890
    bool m_bNormalizedOutput; // 0xa00
    char pad_01[7];
}; // size: 0xa08

class __declspec(align(8)) C_INIT_CreateWithinCapsuleTransform {
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

class __declspec(align(8)) C_OP_MovementMaintainOffset {
public:
    // Vector m_vecOffset;
    char pad_00[476];
    int32_t m_nCP; // 0x1dc
    bool m_bRadiusScale; // 0x1e0
    char pad_01[7];
}; // size: 0x1e8

class __declspec(align(8)) C_OP_ScreenSpaceRotateTowardTarget {
public:
    char pad_00[464];
    CPerParticleVecInput m_vecTargetPosition; // 0x1d0
    CParticleRemapFloatInput m_flOutputRemap; // 0x888
    ParticleSetMethod_t m_nSetMethod; // 0x9f8
    CPerParticleFloatInput m_flScreenEdgeAlignmentDistance; // 0xa00
}; // size: 0xb70

class __declspec(align(8)) C_OP_RemapNamedModelBodyPartOnceTimed {
public:
    char pad_00[560];
}; // size: 0x230

class __declspec(align(8)) C_OP_LockToBone {
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

class __declspec(align(8)) C_OP_CalculateVectorAttribute {
public:
    // Vector m_vStartValue;
    char pad_00[476];
    ParticleAttributeIndex_t m_nFieldInput1; // 0x1dc
    float m_flInputScale1; // 0x1e0
    ParticleAttributeIndex_t m_nFieldInput2; // 0x1e4
    float m_flInputScale2; // 0x1e8
    // ControlPointReference_t m_nControlPointInput1;
    char pad_01[20];
    float m_flControlPointScale1; // 0x200
    // ControlPointReference_t m_nControlPointInput2;
    char pad_02[20];
    float m_flControlPointScale2; // 0x218
    ParticleAttributeIndex_t m_nFieldOutput; // 0x21c
    // Vector m_vFinalOutputScale;
    char pad_03[16];
}; // size: 0x230

class __declspec(align(8)) C_OP_DampenToCP {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber; // 0x1d0
    float m_flRange; // 0x1d4
    float m_flScale; // 0x1d8
    char pad_01[4];
}; // size: 0x1e0

class __declspec(align(8)) C_OP_DistanceBetweenVecs {
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

class __declspec(align(4)) CGeneralRandomRotation {
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

class __declspec(align(8)) C_OP_RemapVectorComponentToScalar {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldInput; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
    int32_t m_nComponent; // 0x1d8
    char pad_01[4];
}; // size: 0x1e0

class __declspec(align(8)) C_INIT_AgeNoise {
public:
    char pad_00[472];
    bool m_bAbsVal; // 0x1d8
    bool m_bAbsValInv; // 0x1d9
    float m_flOffset; // 0x1dc
    float m_flAgeMin; // 0x1e0
    float m_flAgeMax; // 0x1e4
    float m_flNoiseScale; // 0x1e8
    float m_flNoiseScaleLoc; // 0x1ec
    // Vector m_vecOffsetLoc;
    char pad_01[16];
}; // size: 0x200

class __declspec(align(8)) C_OP_Diffusion {
public:
    char pad_00[464];
    float m_flRadiusScale; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
    int32_t m_nVoxelGridResolution; // 0x1d8
    char pad_01[4];
}; // size: 0x1e0

class __declspec(align(8)) C_OP_SetControlPointPositionToRandomActiveCP {
public:
    char pad_00[472];
    int32_t m_nCP1; // 0x1d8
    int32_t m_nHeadLocationMin; // 0x1dc
    int32_t m_nHeadLocationMax; // 0x1e0
    CParticleCollectionFloatInput m_flResetRate; // 0x1e8
}; // size: 0x358

class __declspec(align(4)) PointDefinition_t {
public:
    int32_t m_nControlPoint; // 0x0
    bool m_bLocalCoords; // 0x4
    // Vector m_vOffset;
    char pad_00[15];
}; // size: 0x14

class __declspec(align(16)) C_OP_SetFloatCollection {
public:
    char pad_00[464];
    CParticleCollectionFloatInput m_InputValue; // 0x1d0
    ParticleAttributeIndex_t m_nOutputField; // 0x340
    ParticleSetMethod_t m_nSetMethod; // 0x344
    CParticleCollectionFloatInput m_Lerp; // 0x348
    char pad_01[40];
}; // size: 0x4e0

class __declspec(align(8)) C_INIT_RandomSecondSequence {
public:
    char pad_00[472];
    int32_t m_nSequenceMin; // 0x1d8
    int32_t m_nSequenceMax; // 0x1dc
}; // size: 0x1e0

class __declspec(align(8)) C_OP_InheritFromParentParticlesV2 {
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

class __declspec(align(8)) C_INIT_RandomRotationSpeed {
public:
    char pad_00[504];
}; // size: 0x1f8

class __declspec(align(8)) C_OP_RemapTransformOrientationToRotations {
public:
    char pad_00[464];
    CParticleTransformInput m_TransformInput; // 0x1d0
    // Vector m_vecRotation;
    char pad_01[12];
    bool m_bUseQuat; // 0x244
    bool m_bWriteNormal; // 0x245
    char pad_02[2];
}; // size: 0x248

class __declspec(align(8)) C_OP_RemapCrossProductOfTwoVectorsToVector {
public:
    char pad_00[464];
    CPerParticleVecInput m_InputVec1; // 0x1d0
    CPerParticleVecInput m_InputVec2; // 0x888
    ParticleAttributeIndex_t m_nFieldOutput; // 0xf40
    bool m_bNormalize; // 0xf44
    char pad_01[3];
}; // size: 0xf48

class __declspec(align(8)) C_OP_SetCPOrientationToDirection {
public:
    char pad_00[464];
    int32_t m_nInputControlPoint; // 0x1d0
    int32_t m_nOutputControlPoint; // 0x1d4
}; // size: 0x1d8

class __declspec(align(8)) C_OP_MovementPlaceOnGround {
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

class __declspec(align(8)) C_OP_LockToPointList {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    // CUtlVector< PointDefinition_t > m_pointList;
    char pad_01[28];
    bool m_bPlaceAlongPath; // 0x1f0
    bool m_bClosedLoop; // 0x1f1
    int32_t m_nNumPointsAlongPath; // 0x1f4
}; // size: 0x1f8

class __declspec(align(8)) C_OP_SetCPOrientationToPointAtCP {
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

class __declspec(align(8)) C_OP_VelocityDecay {
public:
    char pad_00[464];
    float m_flMinVelocity; // 0x1d0
    char pad_01[4];
}; // size: 0x1d8

class __declspec(align(8)) C_OP_LerpEndCapVector {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    // Vector m_vecOutput;
    char pad_01[12];
    float m_flLerpTime; // 0x1e0
    char pad_02[4];
}; // size: 0x1e8

class __declspec(align(8)) C_INIT_RandomRotation {
public:
    char pad_00[504];
}; // size: 0x1f8

class __declspec(align(8)) C_OP_LerpToInitialPosition {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber; // 0x1d0
    CPerParticleFloatInput m_flInterpolation; // 0x1d8
    ParticleAttributeIndex_t m_nCacheField; // 0x348
    CParticleCollectionFloatInput m_flScale; // 0x350
    CParticleCollectionVecInput m_vecScale; // 0x4c0
}; // size: 0xb78

class __declspec(align(8)) C_OP_RenderText {
public:
    // Color m_OutlineColor;
    // CUtlString m_DefaultText;
    char pad_00[560];
}; // size: 0x230

class __declspec(align(8)) C_OP_ReadFromNeighboringParticle {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldInput; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
    int32_t m_nIncrement; // 0x1d8
    CPerParticleFloatInput m_DistanceCheck; // 0x1e0
    CPerParticleFloatInput m_flInterpolation; // 0x350
}; // size: 0x4c0

class __declspec(align(4)) SequenceWeightedList_t {
public:
    int32_t m_nSequence; // 0x0
    float m_flRelativeWeight; // 0x4
}; // size: 0x8

class __declspec(align(8)) C_INIT_RandomYawFlip {
public:
    char pad_00[472];
    float m_flPercent; // 0x1d8
    char pad_01[4];
}; // size: 0x1e0

class __declspec(align(8)) C_OP_Cull {
public:
    char pad_00[464];
    float m_flCullPerc; // 0x1d0
    float m_flCullStart; // 0x1d4
    float m_flCullEnd; // 0x1d8
    float m_flCullExp; // 0x1dc
}; // size: 0x1e0

class __declspec(align(8)) C_INIT_RemapTransformOrientationToRotations {
public:
    char pad_00[472];
    CParticleTransformInput m_TransformInput; // 0x1d8
    // Vector m_vecRotation;
    char pad_01[12];
    bool m_bUseQuat; // 0x24c
    bool m_bWriteNormal; // 0x24d
    char pad_02[2];
}; // size: 0x250

class __declspec(align(8)) C_OP_NormalLock {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber; // 0x1d0
    char pad_01[4];
}; // size: 0x1d8

class __declspec(align(16)) C_OP_LockToSavedSequentialPathV2 {
public:
    char pad_00[464];
    float m_flFadeStart; // 0x1d0
    float m_flFadeEnd; // 0x1d4
    bool m_bCPPairs; // 0x1d8
    // CPathParameters m_PathParams;
    char pad_01[71];
}; // size: 0x220

class __declspec(align(8)) C_INIT_RemapInitialDirectionToTransformToVector {
public:
    char pad_00[472];
    CParticleTransformInput m_TransformInput; // 0x1d8
    ParticleAttributeIndex_t m_nFieldOutput; // 0x240
    float m_flScale; // 0x244
    float m_flOffsetRot; // 0x248
    // Vector m_vecOffsetAxis;
    char pad_01[12];
    bool m_bNormalize; // 0x258
    char pad_02[7];
}; // size: 0x260

class __declspec(align(8)) VecInputMaterialVariable_t {
public:
    // CUtlString m_strVariable;
    char pad_00[8];
    CParticleCollectionVecInput m_vecInput; // 0x8
}; // size: 0x6c0

class __declspec(align(16)) C_INIT_CreateSequentialPathV2 {
public:
    char pad_00[472];
    CPerParticleFloatInput m_fMaxDistance; // 0x1d8
    CParticleCollectionFloatInput m_flNumToAssign; // 0x348
    bool m_bLoop; // 0x4b8
    bool m_bCPPairs; // 0x4b9
    bool m_bSaveOffset; // 0x4ba
    // CPathParameters m_PathParams;
    char pad_01[85];
}; // size: 0x510

class __declspec(align(8)) C_OP_RemapVisibilityScalar {
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

class __declspec(align(8)) C_OP_RenderClothForce {
public:
    char pad_00[544];
}; // size: 0x220

class __declspec(align(8)) C_OP_RestartAfterDuration {
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

class __declspec(align(8)) C_OP_ModelSurfaceSnapshotGenerator {
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

class __declspec(align(8)) C_INIT_CreateOnModelAtHeight {
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

class __declspec(align(8)) C_INIT_RandomAlphaWindowThreshold {
public:
    char pad_00[472];
    float m_flMin; // 0x1d8
    float m_flMax; // 0x1dc
    float m_flExponent; // 0x1e0
    char pad_01[4];
}; // size: 0x1e8

class __declspec(align(8)) C_OP_VelocityMatchingForce {
public:
    char pad_00[464];
    float m_flDirScale; // 0x1d0
    float m_flSpdScale; // 0x1d4
    float m_flNeighborDistance; // 0x1d8
    float m_flFacingStrength; // 0x1dc
    bool m_bUseAABB; // 0x1e0
    int32_t m_nCPBroadcast; // 0x1e4
}; // size: 0x1e8

class __declspec(align(8)) C_OP_RampCPLinearRandom {
public:
    char pad_00[472];
    int32_t m_nOutControlPointNumber; // 0x1d8
    // Vector m_vecRateMin;
    // Vector m_vecRateMax;
    char pad_01[28];
}; // size: 0x1f8

class __declspec(align(8)) C_INIT_CreateOnGrid {
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

class __declspec(align(16)) C_INIT_SetAttributeToScalarExpression {
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

class __declspec(align(8)) C_OP_RenderPoints {
public:
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial;
    char pad_00[552];
}; // size: 0x228

class __declspec(align(8)) C_INIT_ColorLitPerParticle {
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

class __declspec(align(4)) CRandomNumberGeneratorParameters {
public:
    bool m_bDistributeEvenly; // 0x0
    int32_t m_nSeed; // 0x4
}; // size: 0x8

class __declspec(align(8)) C_OP_DecayClampCount {
public:
    char pad_00[464];
    CParticleCollectionFloatInput m_nCount; // 0x1d0
}; // size: 0x340

class __declspec(align(8)) C_OP_RenderLights {
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

class __declspec(align(8)) C_INIT_RemapNamedModelSequenceToScalar {
public:
    char pad_00[544];
}; // size: 0x220

class __declspec(align(8)) C_OP_ColorInterpolateRandom {
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

class __declspec(align(8)) C_OP_SetControlPointsToModelParticles {
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

class __declspec(align(8)) C_OP_GameDecalRenderer {
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

class __declspec(align(16)) C_INIT_CreateAlongPath {
public:
    char pad_00[472];
    float m_fMaxDistance; // 0x1d8
    // CPathParameters m_PathParams;
    char pad_01[68];
    bool m_bUseRandomCPs; // 0x220
    // Vector m_vEndOffset;
    char pad_02[15];
    bool m_bSaveOffset; // 0x230
    char pad_03[15];
}; // size: 0x240

class __declspec(align(8)) C_OP_DistanceCull {
public:
    char pad_00[464];
    int32_t m_nControlPoint; // 0x1d0
    // Vector m_vecPointOffset;
    char pad_01[8];
    CParticleCollectionFloatInput m_flDistance; // 0x1e0
    bool m_bCullInside; // 0x350
    ParticleAttributeIndex_t m_nAttribute; // 0x354
}; // size: 0x358

class __declspec(align(16)) C_OP_ConstrainDistanceToPath {
public:
    char pad_00[464];
    float m_fMinDistance; // 0x1d0
    float m_flMaxDistance0; // 0x1d4
    float m_flMaxDistanceMid; // 0x1d8
    float m_flMaxDistance1; // 0x1dc
    // CPathParameters m_PathParameters;
    char pad_01[64];
    float m_flTravelTime; // 0x220
    ParticleAttributeIndex_t m_nFieldScale; // 0x224
    ParticleAttributeIndex_t m_nManualTField; // 0x228
    char pad_02[4];
}; // size: 0x230

class __declspec(align(8)) C_OP_SetControlPointToHand {
public:
    char pad_00[472];
    int32_t m_nCP1; // 0x1d8
    int32_t m_nHand; // 0x1dc
    // Vector m_vecCP1Pos;
    char pad_01[12];
    bool m_bOrientToHand; // 0x1ec
    char pad_02[3];
}; // size: 0x1f0

class __declspec(align(8)) C_OP_DistanceBetweenCPsToCP {
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

class __declspec(align(8)) C_OP_SetFromCPSnapshot {
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

class __declspec(align(8)) C_OP_RemapVectortoCP {
public:
    char pad_00[464];
    int32_t m_nOutControlPointNumber; // 0x1d0
    ParticleAttributeIndex_t m_nFieldInput; // 0x1d4
    int32_t m_nParticleNumber; // 0x1d8
    char pad_01[4];
}; // size: 0x1e0

class __declspec(align(8)) C_OP_RemapDistanceToLineSegmentToScalar {
public:
    char pad_00[488];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1e8
    float m_flMinOutputValue; // 0x1ec
    float m_flMaxOutputValue; // 0x1f0
    char pad_01[4];
}; // size: 0x1f8

class __declspec(align(16)) C_OP_ScreenSpaceDistanceToEdge {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    CPerParticleFloatInput m_flMaxDistFromEdge; // 0x1d8
    CParticleRemapFloatInput m_flOutputRemap; // 0x348
    ParticleSetMethod_t m_nSetMethod; // 0x4b8
    char pad_01[36];
}; // size: 0x4e0

class __declspec(align(8)) C_INIT_RemapTransformToVector {
public:
    char pad_00[472];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8
    // Vector m_vInputMin;
    // Vector m_vInputMax;
    // Vector m_vOutputMin;
    // Vector m_vOutputMax;
    char pad_01[48];
    CParticleTransformInput m_TransformInput; // 0x210
    CParticleTransformInput m_LocalSpaceTransform; // 0x278
    float m_flStartTime; // 0x2e0
    float m_flEndTime; // 0x2e4
    ParticleSetMethod_t m_nSetMethod; // 0x2e8
    bool m_bOffset; // 0x2ec
    bool m_bAccelerate; // 0x2ed
    float m_flRemapBias; // 0x2f0
    char pad_02[4];
}; // size: 0x2f8

class __declspec(align(16)) C_OP_SetFloat {
public:
    char pad_00[464];
    CPerParticleFloatInput m_InputValue; // 0x1d0
    ParticleAttributeIndex_t m_nOutputField; // 0x340
    ParticleSetMethod_t m_nSetMethod; // 0x344
    CPerParticleFloatInput m_Lerp; // 0x348
    char pad_01[40];
}; // size: 0x4e0

class __declspec(align(8)) C_OP_ModelCull {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber; // 0x1d0
    bool m_bBoundBox; // 0x1d4
    bool m_bCullOutside; // 0x1d5
    bool m_bUseBones; // 0x1d6
    char m_HitboxSetName[128]; // 0x1d7
    char pad_01[1];
}; // size: 0x258

class __declspec(align(8)) C_OP_LocalAccelerationForce {
public:
    char pad_00[480];
    int32_t m_nCP; // 0x1e0
    int32_t m_nScaleCP; // 0x1e4
    CParticleCollectionVecInput m_vecAccel; // 0x1e8
}; // size: 0x8a0

class __declspec(align(8)) ParticlePreviewState_t {
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
    // Vector m_vecPreviewGravity;
    char pad_03[18];
}; // size: 0x68

class __declspec(align(8)) C_OP_RemapParticleCountOnScalarEndCap {
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

class __declspec(align(8)) C_OP_RandomForce {
public:
    // Vector m_MinForce;
    // Vector m_MaxForce;
    char pad_00[504];
}; // size: 0x1f8

class __declspec(align(8)) C_OP_RenderStatusEffect {
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

class __declspec(align(8)) C_OP_RemapTransformOrientationToYaw {
public:
    char pad_00[464];
    CParticleTransformInput m_TransformInput; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x238
    float m_flRotOffset; // 0x23c
    float m_flSpinStrength; // 0x240
    char pad_01[4];
}; // size: 0x248

class __declspec(align(8)) C_INIT_RemapInitialVisibilityScalar {
public:
    char pad_00[476];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1dc
    float m_flInputMin; // 0x1e0
    float m_flInputMax; // 0x1e4
    float m_flOutputMin; // 0x1e8
    float m_flOutputMax; // 0x1ec
}; // size: 0x1f0

class __declspec(align(8)) C_INIT_AddVectorToVector {
public:
    // Vector m_vecScale;
    char pad_00[484];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1e4
    ParticleAttributeIndex_t m_nFieldInput; // 0x1e8
    // Vector m_vOffsetMin;
    // Vector m_vOffsetMax;
    char pad_01[24];
    CRandomNumberGeneratorParameters m_randomnessParameters; // 0x204
    char pad_02[4];
}; // size: 0x210

class __declspec(align(16)) C_OP_SetVectorAttributeToVectorExpression {
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

class __declspec(align(8)) C_INIT_InitFromVectorFieldSnapshot {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber; // 0x1d8
    int32_t m_nLocalSpaceCP; // 0x1dc
    int32_t m_nWeightUpdateCP; // 0x1e0
    bool m_bUseVerticalVelocity; // 0x1e4
    CPerParticleVecInput m_vecScale; // 0x1e8
}; // size: 0x8a0

class __declspec(align(8)) C_OP_CollideWithParentParticles {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flParentRadiusScale; // 0x1d0
    CPerParticleFloatInput m_flRadiusScale; // 0x340
}; // size: 0x4b0

class __declspec(align(8)) C_INIT_DistanceCull {
public:
    char pad_00[472];
    int32_t m_nControlPoint; // 0x1d8
    CParticleCollectionFloatInput m_flDistance; // 0x1e0
    bool m_bCullInside; // 0x350
    char pad_01[7];
}; // size: 0x358

class __declspec(align(16)) C_OP_RampScalarSplineSimple {
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

class __declspec(align(8)) C_INIT_RandomSequence {
public:
    char pad_00[472];
    int32_t m_nSequenceMin; // 0x1d8
    int32_t m_nSequenceMax; // 0x1dc
    bool m_bShuffle; // 0x1e0
    bool m_bLinear; // 0x1e1
    // CUtlVector< SequenceWeightedList_t > m_WeightedList;
    char pad_01[38];
}; // size: 0x208

class __declspec(align(8)) C_OP_WaterImpulseRenderer {
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

class __declspec(align(16)) C_OP_FadeOut {
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

class __declspec(align(8)) C_OP_OscillateScalar {
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

class __declspec(align(8)) C_OP_RenderBlobs {
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

class __declspec(align(8)) C_OP_WorldTraceConstraint {
public:
    char pad_00[464];
    int32_t m_nCP; // 0x1d0
    // Vector m_vecCpOffset;
    char pad_01[12];
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

class __declspec(align(8)) C_OP_RenderPostProcessing {
public:
    char pad_00[544];
    CPerParticleFloatInput m_flPostProcessStrength; // 0x220
    // CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostTexture;
    char pad_01[8];
    ParticlePostProcessPriorityGroup_t m_nPriority; // 0x398
    char pad_02[4];
}; // size: 0x3a0

class __declspec(align(8)) C_INIT_RandomScalar {
public:
    char pad_00[472];
    float m_flMin; // 0x1d8
    float m_flMax; // 0x1dc
    float m_flExponent; // 0x1e0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1e4
}; // size: 0x1e8

class __declspec(align(8)) C_INIT_PositionPlaceOnGround {
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

class __declspec(align(8)) C_OP_CylindricalDistanceToTransform {
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

class __declspec(align(8)) C_OP_VectorFieldSnapshot {
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

class __declspec(align(16)) C_OP_ControlpointLight {
public:
    char pad_00[464];
    float m_flScale; // 0x1d0
    char pad_01[1164];
    int32_t m_nControlPoint1; // 0x660
    int32_t m_nControlPoint2; // 0x664
    int32_t m_nControlPoint3; // 0x668
    int32_t m_nControlPoint4; // 0x66c
    // Vector m_vecCPOffset1;
    // Vector m_vecCPOffset2;
    // Vector m_vecCPOffset3;
    // Vector m_vecCPOffset4;
    char pad_02[48];
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
    char pad_03[16];
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
    char pad_04[4];
    bool m_bClampLowerRange; // 0x6de
    bool m_bClampUpperRange; // 0x6df
}; // size: 0x6e0

class __declspec(align(8)) C_OP_ChooseRandomChildrenInGroup {
public:
    char pad_00[472];
    int32_t m_nChildGroupID; // 0x1d8
    CParticleCollectionFloatInput m_flNumberOfChildren; // 0x1e0
}; // size: 0x350

class __declspec(align(8)) C_INIT_CreateWithinBox {
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

class __declspec(align(8)) C_OP_UpdateLightSource {
public:
    // Color m_vColorTint;
    char pad_00[468];
    float m_flBrightnessScale; // 0x1d4
    float m_flRadiusScale; // 0x1d8
    float m_flMinimumLightingRadius; // 0x1dc
    float m_flMaximumLightingRadius; // 0x1e0
    float m_flPositionDampingConstant; // 0x1e4
}; // size: 0x1e8

class __declspec(align(8)) C_OP_RenderScreenVelocityRotate {
public:
    char pad_00[544];
    float m_flRotateRateDegrees; // 0x220
    float m_flForwardDegrees; // 0x224
}; // size: 0x228

class __declspec(align(8)) C_OP_PercentageBetweenTransformsVector {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    float m_flInputMin; // 0x1d4
    float m_flInputMax; // 0x1d8
    // Vector m_vecOutputMin;
    // Vector m_vecOutputMax;
    char pad_01[24];
    CParticleTransformInput m_TransformStart; // 0x1f8
    CParticleTransformInput m_TransformEnd; // 0x260
    ParticleSetMethod_t m_nSetMethod; // 0x2c8
    bool m_bActiveRange; // 0x2cc
    bool m_bRadialCheck; // 0x2cd
    char pad_02[2];
}; // size: 0x2d0

class __declspec(align(8)) C_OP_RemapNamedModelMeshGroupEndCap {
public:
    char pad_00[560];
}; // size: 0x230

class __declspec(align(16)) CParticleSystemDefinition {
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
    // Vector m_BoundingBoxMin;
    // Vector m_BoundingBoxMax;
    char pad_03[24];
    float m_flDepthSortBias; // 0x27c
    int32_t m_nSortOverridePositionCP; // 0x280
    bool m_bInfiniteBounds; // 0x284
    bool m_bEnableNamedValues; // 0x285
    // CUtlString m_NamedValueDomain;
    // CUtlVector< ParticleNamedValueSource_t* > m_NamedValueLocals;
    // Color m_ConstantColor;
    // Vector m_ConstantNormal;
    char pad_04[48];
    float m_flConstantRadius; // 0x2b8
    float m_flConstantRotation; // 0x2bc
    float m_flConstantRotationSpeed; // 0x2c0
    float m_flConstantLifespan; // 0x2c4
    int32_t m_nConstantSequenceNumber; // 0x2c8
    int32_t m_nConstantSequenceNumber1; // 0x2cc
    int32_t m_nSnapshotControlPoint; // 0x2d0
    // CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hSnapshot;
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_pszCullReplacementName;
    char pad_05[20];
    float m_flCullRadius; // 0x2e8
    float m_flCullFillCost; // 0x2ec
    int32_t m_nCullControlPoint; // 0x2f0
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hFallback;
    char pad_06[12];
    int32_t m_nFallbackMaxCount; // 0x300
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hLowViolenceDef;
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hReferenceReplacement;
    char pad_07[20];
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
    char pad_08[8];
    int32_t m_nSkipRenderControlPoint; // 0x368
    int32_t m_nAllowRenderControlPoint; // 0x36c
    bool m_bShouldSort; // 0x370
    // CUtlVector< ParticleControlPointConfiguration_t > m_controlPointConfigurations;
    char pad_09[207];
}; // size: 0x440

class __declspec(align(1)) CParticleFunctionRenderer {
public:
    // CParticleVisibilityInputs VisibilityInputs;
    char pad_00[536];
    bool m_bCannotBeRefracted; // 0x218
    bool m_bSkipRenderingOnMobile; // 0x219
    char pad_01[6];
}; // size: 0x220

class __declspec(align(8)) C_OP_RemapCPtoScalar {
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

class __declspec(align(8)) C_INIT_DistanceToNeighborCull {
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

class __declspec(align(8)) C_OP_SetSingleControlPointPosition {
public:
    char pad_00[472];
    bool m_bSetOnce; // 0x1d8
    int32_t m_nCP1; // 0x1dc
    CParticleCollectionVecInput m_vecCP1Pos; // 0x1e0
    CParticleTransformInput m_transformInput; // 0x898
}; // size: 0x900

class __declspec(align(8)) C_OP_SnapshotRigidSkinToBones {
public:
    char pad_00[464];
    bool m_bTransformNormals; // 0x1d0
    bool m_bTransformRadii; // 0x1d1
    int32_t m_nControlPointNumber; // 0x1d4
}; // size: 0x1d8

class __declspec(align(8)) C_INIT_RandomYaw {
public:
    char pad_00[504];
}; // size: 0x1f8

class __declspec(align(8)) C_OP_SetCPtoVector {
public:
    char pad_00[464];
    int32_t m_nCPInput; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
}; // size: 0x1d8

class __declspec(align(8)) C_OP_DragRelativeToPlane {
public:
    char pad_00[464];
    CParticleCollectionFloatInput m_flDragAtPlane; // 0x1d0
    CParticleCollectionFloatInput m_flFalloff; // 0x340
    bool m_bDirectional; // 0x4b0
    CParticleCollectionVecInput m_vecPlaneNormal; // 0x4b8
    int32_t m_nControlPointNumber; // 0xb70
    char pad_01[4];
}; // size: 0xb78

class __declspec(align(1)) CParticleFunctionOperator {
public:
    char pad_00[464];
}; // size: 0x1d0

class __declspec(align(8)) C_OP_ScreenSpacePositionOfTarget {
public:
    char pad_00[464];
    CPerParticleVecInput m_vecTargetPosition; // 0x1d0
    bool m_bOututBehindness; // 0x888
    ParticleAttributeIndex_t m_nBehindFieldOutput; // 0x88c
    CParticleRemapFloatInput m_flBehindOutputRemap; // 0x890
    ParticleSetMethod_t m_nBehindSetMethod; // 0xa00
    char pad_01[4];
}; // size: 0xa08

class __declspec(align(8)) C_OP_RemapControlPointDirectionToVector {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    float m_flScale; // 0x1d4
    int32_t m_nControlPointNumber; // 0x1d8
    char pad_01[4];
}; // size: 0x1e0

class __declspec(align(8)) C_OP_RemapTransformVisibilityToScalar {
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

class __declspec(align(8)) C_OP_SetRandomControlPointPosition {
public:
    char pad_00[472];
    bool m_bUseWorldLocation; // 0x1d8
    bool m_bOrient; // 0x1d9
    int32_t m_nCP1; // 0x1dc
    int32_t m_nHeadLocation; // 0x1e0
    CParticleCollectionFloatInput m_flReRandomRate; // 0x1e8
    // Vector m_vecCPMinPos;
    // Vector m_vecCPMaxPos;
    char pad_01[24];
    CParticleCollectionFloatInput m_flInterpolation; // 0x370
}; // size: 0x4e0

class __declspec(align(8)) C_OP_RenderGpuImplicit {
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

class __declspec(align(8)) C_OP_EndCapTimedFreeze {
public:
    char pad_00[464];
    CParticleCollectionFloatInput m_flFreezeTime; // 0x1d0
}; // size: 0x340

class __declspec(align(8)) C_OP_SetControlPointToPlayer {
public:
    char pad_00[472];
    int32_t m_nCP1; // 0x1d8
    // Vector m_vecCP1Pos;
    char pad_01[12];
    bool m_bOrientToEyes; // 0x1e8
    ParticleEntityPos_t m_nPosition; // 0x1ec
}; // size: 0x1f0

class __declspec(align(4)) C_OP_RemapNamedModelElementOnceTimed {
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

class __declspec(align(8)) C_OP_TurbulenceForce {
public:
    char pad_00[480];
    float m_flNoiseCoordScale0; // 0x1e0
    float m_flNoiseCoordScale1; // 0x1e4
    float m_flNoiseCoordScale2; // 0x1e8
    float m_flNoiseCoordScale3; // 0x1ec
    // Vector m_vecNoiseAmount0;
    // Vector m_vecNoiseAmount1;
    // Vector m_vecNoiseAmount2;
    // Vector m_vecNoiseAmount3;
    char pad_01[48];
}; // size: 0x220

class __declspec(align(8)) C_OP_ReinitializeScalarEndCap {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    float m_flOutputMin; // 0x1d4
    float m_flOutputMax; // 0x1d8
    char pad_01[4];
}; // size: 0x1e0

class __declspec(align(16)) C_OP_InterpolateRadius {
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

class __declspec(align(8)) C_OP_SetControlPointToImpactPoint {
public:
    char pad_00[472];
    int32_t m_nCPOut; // 0x1d8
    int32_t m_nCPIn; // 0x1dc
    float m_flUpdateRate; // 0x1e0
    CParticleCollectionFloatInput m_flTraceLength; // 0x1e8
    float m_flStartOffset; // 0x358
    float m_flOffset; // 0x35c
    // Vector m_vecTraceDir;
    char pad_01[12];
    char m_CollisionGroupName[128]; // 0x36c
    ParticleTraceSet_t m_nTraceSet; // 0x3ec
    bool m_bSetToEndpoint; // 0x3f0
    bool m_bTraceToClosestSurface; // 0x3f1
    bool m_bIncludeWater; // 0x3f2
    char pad_02[5];
}; // size: 0x3f8

class __declspec(align(8)) C_OP_RenderVRHapticEvent {
public:
    char pad_00[544];
    ParticleVRHandChoiceList_t m_nHand; // 0x220
    int32_t m_nOutputHandCP; // 0x224
    int32_t m_nOutputField; // 0x228
    CPerParticleFloatInput m_flAmplitude; // 0x230
}; // size: 0x3a0

class __declspec(align(8)) C_OP_PositionLock {
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

class __declspec(align(8)) C_OP_OscillateVector {
public:
    // Vector m_RateMin;
    // Vector m_RateMax;
    // Vector m_FrequencyMin;
    // Vector m_FrequencyMax;
    char pad_00[512];
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

class __declspec(align(8)) C_OP_MovementSkinnedPositionFromCPSnapshot {
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

class __declspec(align(8)) C_OP_SetControlPointOrientation {
public:
    char pad_00[472];
    bool m_bUseWorldLocation; // 0x1d8
    char pad_01[1];
    bool m_bRandomize; // 0x1da
    bool m_bSetOnce; // 0x1db
    int32_t m_nCP; // 0x1dc
    int32_t m_nHeadLocation; // 0x1e0
    // QAngle m_vecRotation;
    // QAngle m_vecRotationB;
    char pad_02[24];
    CParticleCollectionFloatInput m_flInterpolation; // 0x200
}; // size: 0x370

class __declspec(align(8)) C_INIT_VelocityFromCP {
public:
    char pad_00[472];
    CParticleCollectionVecInput m_velocityInput; // 0x1d8
    CParticleTransformInput m_transformInput; // 0x890
    float m_flVelocityScale; // 0x8f8
    bool m_bDirectionOnly; // 0x8fc
    char pad_01[3];
}; // size: 0x900

class __declspec(align(8)) CBaseTrailRenderer {
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

class __declspec(align(8)) C_INIT_LifespanFromVelocity {
public:
    // Vector m_vecComponentScale;
    char pad_00[484];
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

class __declspec(align(8)) C_OP_ConstrainLineLength {
public:
    char pad_00[464];
    float m_flMinDistance; // 0x1d0
    float m_flMaxDistance; // 0x1d4
}; // size: 0x1d8

class __declspec(align(8)) C_OP_InstantaneousEmitter {
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

class __declspec(align(8)) C_OP_GameLiquidSpill {
public:
    char pad_00[544];
    CParticleCollectionFloatInput m_flLiquidContentsField; // 0x220
    CParticleCollectionFloatInput m_flExpirationTime; // 0x390
    ParticleAttributeIndex_t m_nAmountAttribute; // 0x500
    char pad_01[4];
}; // size: 0x508

class __declspec(align(8)) C_OP_Spin {
public:
    char pad_00[488];
}; // size: 0x1e8

class __declspec(align(8)) C_INIT_CreationNoise {
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
    // Vector m_vecOffsetLoc;
    char pad_01[12];
    float m_flWorldTimeScale; // 0x200
    char pad_02[4];
}; // size: 0x208

class __declspec(align(8)) C_OP_RenderAsModels {
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

class __declspec(align(8)) C_OP_RemapDistanceToLineSegmentToVector {
public:
    char pad_00[488];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1e8
    // Vector m_vMinOutputValue;
    // Vector m_vMaxOutputValue;
    char pad_01[28];
}; // size: 0x208

class __declspec(align(8)) C_INIT_NormalOffset {
public:
    // Vector m_OffsetMin;
    // Vector m_OffsetMax;
    char pad_00[496];
    int32_t m_nControlPointNumber; // 0x1f0
    bool m_bLocalCoords; // 0x1f4
    bool m_bNormalize; // 0x1f5
    char pad_01[2];
}; // size: 0x1f8

class __declspec(align(8)) C_OP_SpinUpdate {
public:
    char pad_00[464];
}; // size: 0x1d0

class __declspec(align(8)) C_OP_ControlPointToRadialScreenSpace {
public:
    char pad_00[472];
    int32_t m_nCPIn; // 0x1d8
    // Vector m_vecCP1Pos;
    char pad_01[12];
    int32_t m_nCPOut; // 0x1e8
    int32_t m_nCPOutField; // 0x1ec
    int32_t m_nCPSSPosOut; // 0x1f0
    char pad_02[4];
}; // size: 0x1f8

class __declspec(align(8)) C_OP_LazyCullCompareFloat {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flComparsion1; // 0x1d0
    CPerParticleFloatInput m_flComparsion2; // 0x340
    CPerParticleFloatInput m_flCullTime; // 0x4b0
}; // size: 0x620

class __declspec(align(8)) C_INIT_CreateFromPlaneCache {
public:
    // Vector m_vecOffsetMin;
    // Vector m_vecOffsetMax;
    char pad_00[497];
    bool m_bUseNormal; // 0x1f1
    char pad_01[6];
}; // size: 0x1f8

class __declspec(align(8)) C_OP_RemapScalarEndCap {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldInput; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
    float m_flInputMin; // 0x1d8
    float m_flInputMax; // 0x1dc
    float m_flOutputMin; // 0x1e0
    float m_flOutputMax; // 0x1e4
}; // size: 0x1e8

class __declspec(align(16)) CPathParameters {
public:
    int32_t m_nStartControlPointNumber; // 0x0
    int32_t m_nEndControlPointNumber; // 0x4
    int32_t m_nBulgeControl; // 0x8
    float m_flBulge; // 0xc
    float m_flMidPoint; // 0x10
    // Vector m_vStartPointOffset;
    // Vector m_vMidPointOffset;
    // Vector m_vEndOffset;
    char pad_00[44];
}; // size: 0x40

class __declspec(align(8)) C_INIT_InitFloatCollection {
public:
    char pad_00[472];
    CParticleCollectionFloatInput m_InputValue; // 0x1d8
    ParticleAttributeIndex_t m_nOutputField; // 0x348
    char pad_01[4];
}; // size: 0x350

class __declspec(align(8)) C_OP_PlayEndCapWhenFinished {
public:
    char pad_00[472];
    bool m_bFireOnEmissionEnd; // 0x1d8
    bool m_bIncludeChildren; // 0x1d9
    char pad_01[6];
}; // size: 0x1e0

class __declspec(align(8)) C_OP_QuantizeCPComponent {
public:
    char pad_00[472];
    CParticleCollectionFloatInput m_flInputValue; // 0x1d8
    int32_t m_nCPOutput; // 0x348
    int32_t m_nOutVectorField; // 0x34c
    CParticleCollectionFloatInput m_flQuantizeValue; // 0x350
}; // size: 0x4c0

class __declspec(align(8)) C_OP_RenderSimpleModelCollection {
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

class __declspec(align(8)) C_OP_MovementLoopInsideSphere {
public:
    char pad_00[464];
    int32_t m_nCP; // 0x1d0
    CParticleCollectionFloatInput m_flDistance; // 0x1d8
    CParticleCollectionVecInput m_vecScale; // 0x348
    ParticleAttributeIndex_t m_nDistSqrAttr; // 0xa00
    char pad_01[4];
}; // size: 0xa08

class __declspec(align(8)) C_OP_DirectionBetweenVecsToVec {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    CPerParticleVecInput m_vecPoint1; // 0x1d8
    CPerParticleVecInput m_vecPoint2; // 0x890
}; // size: 0xf48

class __declspec(align(8)) C_OP_RemapTransformVisibilityToVector {
public:
    char pad_00[464];
    ParticleSetMethod_t m_nSetMethod; // 0x1d0
    CParticleTransformInput m_TransformInput; // 0x1d8
    ParticleAttributeIndex_t m_nFieldOutput; // 0x240
    float m_flInputMin; // 0x244
    float m_flInputMax; // 0x248
    // Vector m_vecOutputMin;
    // Vector m_vecOutputMax;
    char pad_01[24];
    float m_flRadius; // 0x264
}; // size: 0x268

class __declspec(align(16)) C_INIT_SetVectorAttributeToVectorExpression {
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

class __declspec(align(8)) C_OP_InheritFromParentParticles {
public:
    char pad_00[464];
    float m_flScale; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
    int32_t m_nIncrement; // 0x1d8
    bool m_bRandomDistribution; // 0x1dc
    char pad_01[3];
}; // size: 0x1e0

class __declspec(align(8)) C_INIT_RandomVectorComponent {
public:
    char pad_00[472];
    float m_flMin; // 0x1d8
    float m_flMax; // 0x1dc
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1e0
    int32_t m_nComponent; // 0x1e4
}; // size: 0x1e8

class __declspec(align(1)) CParticleFunctionForce {
public:
    char pad_00[480];
}; // size: 0x1e0

class __declspec(align(8)) C_OP_CreateParticleSystemRenderer {
public:
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hEffect;
    char pad_00[552];
    EventTypeSelection_t m_nEventType; // 0x228
    // CUtlLeanVector< CPAssignment_t > m_vecCPs;
    // CUtlString m_szParticleConfig;
    char pad_01[24];
    CPerParticleVecInput m_AggregationPos; // 0x248
}; // size: 0x900

class __declspec(align(8)) C_OP_SetControlPointFieldToScalarExpression {
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

class __declspec(align(8)) C_INIT_PositionWarp {
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

class __declspec(align(8)) C_INIT_RemapQAnglesToRotation {
public:
    char pad_00[472];
    CParticleTransformInput m_TransformInput; // 0x1d8
}; // size: 0x240

class __declspec(align(8)) C_OP_RemapNamedModelMeshGroupOnceTimed {
public:
    char pad_00[560];
}; // size: 0x230

class __declspec(align(8)) C_OP_LightningSnapshotGenerator {
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

class __declspec(align(8)) C_OP_SetControlPointToVectorExpression {
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

class __declspec(align(4)) ControlPointReference_t {
public:
    int32_t m_controlPointNameString; // 0x0
    // Vector m_vOffsetFromControlPoint;
    char pad_00[12];
    bool m_bOffsetInLocalSpace; // 0x10
    char pad_01[3];
}; // size: 0x14

class __declspec(align(8)) TextureControls_t {
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

class __declspec(align(8)) C_OP_Orient2DRelToCP {
public:
    char pad_00[464];
    float m_flRotOffset; // 0x1d0
    float m_flSpinStrength; // 0x1d4
    int32_t m_nCP; // 0x1d8
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1dc
}; // size: 0x1e0

class __declspec(align(8)) C_INIT_RandomRadius {
public:
    char pad_00[472];
    float m_flRadiusMin; // 0x1d8
    float m_flRadiusMax; // 0x1dc
    float m_flRadiusRandExponent; // 0x1e0
    char pad_01[4];
}; // size: 0x1e8

class __declspec(align(8)) C_INIT_VelocityRadialRandom {
public:
    char pad_00[472];
    bool m_bPerParticleCenter; // 0x1d8
    int32_t m_nControlPointNumber; // 0x1dc
    CPerParticleVecInput m_vecPosition; // 0x1e0
    CPerParticleVecInput m_vecFwd; // 0x898
    CPerParticleFloatInput m_fSpeedMin; // 0xf50
    CPerParticleFloatInput m_fSpeedMax; // 0x10c0
    // Vector m_vecLocalCoordinateSystemSpeedScale;
    char pad_01[13];
    bool m_bIgnoreDelta; // 0x123d
    char pad_02[2];
}; // size: 0x1240

class __declspec(align(8)) C_INIT_RemapParticleCountToNamedModelSequenceScalar {
public:
    char pad_00[552];
}; // size: 0x228

class __declspec(align(8)) C_INIT_RandomLifeTime {
public:
    char pad_00[472];
    float m_fLifetimeMin; // 0x1d8
    float m_fLifetimeMax; // 0x1dc
    float m_fLifetimeRandExponent; // 0x1e0
    char pad_01[4];
}; // size: 0x1e8

class __declspec(align(8)) C_OP_AttractToControlPoint {
public:
    // Vector m_vecComponentScale;
    char pad_00[496];
    CPerParticleFloatInput m_fForceAmount; // 0x1f0
    float m_fFalloffPower; // 0x360
    CParticleTransformInput m_TransformInput; // 0x368
    CPerParticleFloatInput m_fForceAmountMin; // 0x3d0
    bool m_bApplyMinForce; // 0x540
    char pad_01[7];
}; // size: 0x548

class __declspec(align(8)) C_INIT_CreatePhyllotaxis {
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

class __declspec(align(8)) C_OP_BoxConstraint {
public:
    char pad_00[464];
    CParticleCollectionVecInput m_vecMin; // 0x1d0
    CParticleCollectionVecInput m_vecMax; // 0x888
    int32_t m_nCP; // 0xf40
    bool m_bLocalSpace; // 0xf44
    bool m_bAccountForRadius; // 0xf45
    char pad_01[2];
}; // size: 0xf48

class __declspec(align(8)) C_OP_SetParentControlPointsToChildCP {
public:
    char pad_00[472];
    int32_t m_nChildGroupID; // 0x1d8
    int32_t m_nChildControlPoint; // 0x1dc
    int32_t m_nNumControlPoints; // 0x1e0
    int32_t m_nFirstSourcePoint; // 0x1e4
    bool m_bSetOrientation; // 0x1e8
    char pad_01[7];
}; // size: 0x1f0

class __declspec(align(8)) C_OP_SetPerChildControlPointFromAttribute {
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

class __declspec(align(8)) C_INIT_OffsetVectorToVector {
public:
    char pad_00[472];
    ParticleAttributeIndex_t m_nFieldInput; // 0x1d8
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1dc
    // Vector m_vecOutputMin;
    // Vector m_vecOutputMax;
    char pad_01[24];
    CRandomNumberGeneratorParameters m_randomnessParameters; // 0x1f8
}; // size: 0x200

class __declspec(align(8)) C_OP_GlobalLight {
public:
    char pad_00[464];
    float m_flScale; // 0x1d0
    bool m_bClampLowerRange; // 0x1d4
    bool m_bClampUpperRange; // 0x1d5
    char pad_01[2];
}; // size: 0x1d8

class __declspec(align(8)) CParticleFunction {
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

class __declspec(align(8)) C_OP_Callback {
public:
    char pad_00[544];
}; // size: 0x220

class __declspec(align(8)) C_INIT_InitFromParentKilled {
public:
    char pad_00[472];
    ParticleAttributeIndex_t m_nAttributeToCopy; // 0x1d8
    EventTypeSelection_t m_nEventType; // 0x1dc
    char pad_01[128];
}; // size: 0x260

class __declspec(align(4)) C_INIT_RandomNamedModelElement {
public:
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    // CUtlVector< CUtlString > m_names;
    char pad_00[504];
    bool m_bShuffle; // 0x1f8
    bool m_bLinear; // 0x1f9
    bool m_bModelFromRenderer; // 0x1fa
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1fc
}; // size: 0x200

class __declspec(align(8)) C_OP_BasicMovement {
public:
    char pad_00[464];
    CParticleCollectionVecInput m_Gravity; // 0x1d0
    CParticleCollectionFloatInput m_fDrag; // 0x888
    CParticleMassCalculationParameters m_massControls; // 0x9f8
    int32_t m_nMaxConstraintPasses; // 0xe50
    bool m_bUseNewCode; // 0xe54
    char pad_01[3];
}; // size: 0xe58

class __declspec(align(16)) C_OP_QuantizeFloat {
public:
    char pad_00[464];
    CPerParticleFloatInput m_InputValue; // 0x1d0
    ParticleAttributeIndex_t m_nOutputField; // 0x340
    char pad_01[44];
}; // size: 0x370

class __declspec(align(8)) C_OP_SetUserEvent {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flInput; // 0x1d0
    CPerParticleFloatInput m_flRisingEdge; // 0x340
    EventTypeSelection_t m_nRisingEventType; // 0x4b0
    CPerParticleFloatInput m_flFallingEdge; // 0x4b8
    EventTypeSelection_t m_nFallingEventType; // 0x628
    char pad_01[4];
}; // size: 0x630

class __declspec(align(8)) C_INIT_MoveBetweenPoints {
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

class __declspec(align(8)) C_INIT_SequenceLifeTime {
public:
    char pad_00[472];
    float m_flFramerate; // 0x1d8
    char pad_01[4];
}; // size: 0x1e0

class __declspec(align(8)) C_OP_OscillateVectorSimple {
public:
    // Vector m_Rate;
    // Vector m_Frequency;
    char pad_00[488];
    ParticleAttributeIndex_t m_nField; // 0x1e8
    float m_flOscMult; // 0x1ec
    float m_flOscAdd; // 0x1f0
    bool m_bOffset; // 0x1f4
    char pad_01[3];
}; // size: 0x1f8

class __declspec(align(8)) C_OP_ContinuousEmitter {
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

class __declspec(align(4)) C_OP_RemapDistanceToLineSegmentBase {
public:
    char pad_00[464];
    int32_t m_nCP0; // 0x1d0
    int32_t m_nCP1; // 0x1d4
    float m_flMinInputValue; // 0x1d8
    float m_flMaxInputValue; // 0x1dc
    bool m_bInfiniteLine; // 0x1e0
    char pad_01[7];
}; // size: 0x1e8

class __declspec(align(8)) C_OP_EndCapTimedDecay {
public:
    char pad_00[464];
    float m_flDecayTime; // 0x1d0
    char pad_01[4];
}; // size: 0x1d8

class __declspec(align(16)) C_INIT_CreateSequentialPath {
public:
    char pad_00[472];
    float m_fMaxDistance; // 0x1d8
    float m_flNumToAssign; // 0x1dc
    bool m_bLoop; // 0x1e0
    bool m_bCPPairs; // 0x1e1
    bool m_bSaveOffset; // 0x1e2
    CPathParameters m_PathParams; // 0x1f0
}; // size: 0x230

class __declspec(align(8)) C_OP_DecayOffscreen {
public:
    char pad_00[464];
    CParticleCollectionFloatInput m_flOffscreenTime; // 0x1d0
}; // size: 0x340

class __declspec(align(8)) C_OP_DistanceBetweenTransforms {
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

class __declspec(align(8)) C_OP_RemapScalar {
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

class __declspec(align(8)) C_INIT_RandomTrailLength {
public:
    char pad_00[472];
    float m_flMinLength; // 0x1d8
    float m_flMaxLength; // 0x1dc
    float m_flLengthRandExponent; // 0x1e0
    char pad_01[4];
}; // size: 0x1e8

class __declspec(align(8)) C_INIT_RingWave {
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

class __declspec(align(8)) C_INIT_SetHitboxToClosest {
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

class __declspec(align(8)) C_OP_RemapVelocityToVector {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    float m_flScale; // 0x1d4
    bool m_bNormalize; // 0x1d8
    char pad_01[7];
}; // size: 0x1e0

class __declspec(align(8)) C_OP_RepeatedTriggerChildGroup {
public:
    char pad_00[472];
    int32_t m_nChildGroupID; // 0x1d8
    CParticleCollectionFloatInput m_flClusterRefireTime; // 0x1e0
    CParticleCollectionFloatInput m_flClusterSize; // 0x350
    CParticleCollectionFloatInput m_flClusterCooldown; // 0x4c0
    bool m_bLimitChildCount; // 0x630
    char pad_01[7];
}; // size: 0x638

class __declspec(align(8)) C_OP_FadeInSimple {
public:
    char pad_00[464];
    float m_flFadeInTime; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
}; // size: 0x1d8

class __declspec(align(8)) C_OP_NormalizeVector {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    float m_flScale; // 0x1d4
}; // size: 0x1d8

class __declspec(align(8)) C_INIT_RandomAlpha {
public:
    char pad_00[472];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8
    int32_t m_nAlphaMin; // 0x1dc
    int32_t m_nAlphaMax; // 0x1e0
    char pad_01[8];
    float m_flAlphaRandExponent; // 0x1ec
}; // size: 0x1f0

class __declspec(align(8)) C_OP_RemapAverageHitboxSpeedtoCP {
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

class __declspec(align(8)) C_OP_ExternalGameImpulseForce {
public:
    char pad_00[480];
    CPerParticleFloatInput m_flForceScale; // 0x1e0
    bool m_bRopes; // 0x350
    bool m_bRopesZOnly; // 0x351
    bool m_bExplosions; // 0x352
    bool m_bParticles; // 0x353
    char pad_01[4];
}; // size: 0x358

class __declspec(align(8)) C_INIT_RandomModelSequence {
public:
    char pad_00[472];
    char m_ActivityName[256]; // 0x1d8
    char m_SequenceName[256]; // 0x2d8
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    char pad_01[8];
}; // size: 0x3e0

class __declspec(align(8)) C_OP_DecayMaintainCount {
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

class __declspec(align(8)) C_OP_SetControlPointPositionToTimeOfDayValue {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber; // 0x1d8
    char m_pszTimeOfDayParameter[128]; // 0x1dc
    // Vector m_vecDefaultValue;
    char pad_01[20];
}; // size: 0x270

class __declspec(align(8)) C_OP_RenderTrails {
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

class __declspec(align(8)) C_INIT_RemapParticleCountToNamedModelElementScalar {
public:
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    // CUtlString m_outputMinName;
    // CUtlString m_outputMaxName;
    char pad_00[544];
    bool m_bModelFromRenderer; // 0x220
    char pad_01[7];
}; // size: 0x228

class __declspec(align(8)) C_OP_RemapDotProductToCP {
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

class __declspec(align(8)) C_OP_OrientTo2dDirection {
public:
    char pad_00[464];
    float m_flRotOffset; // 0x1d0
    float m_flSpinStrength; // 0x1d4
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8
    char pad_01[4];
}; // size: 0x1e0

class __declspec(align(1)) CSpinUpdateBase {
public:
    char pad_00[464];
}; // size: 0x1d0

class __declspec(align(8)) CBaseRendererSource2 {
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

class __declspec(align(8)) C_OP_RemapExternalWindToCP {
public:
    char pad_00[472];
    int32_t m_nCP; // 0x1d8
    int32_t m_nCPOutput; // 0x1dc
    CParticleCollectionVecInput m_vecScale; // 0x1e0
    bool m_bSetMagnitude; // 0x898
    int32_t m_nOutVectorField; // 0x89c
}; // size: 0x8a0

class __declspec(align(8)) C_OP_TeleportBeam {
public:
    char pad_00[464];
    int32_t m_nCPPosition; // 0x1d0
    int32_t m_nCPVelocity; // 0x1d4
    int32_t m_nCPMisc; // 0x1d8
    int32_t m_nCPColor; // 0x1dc
    int32_t m_nCPInvalidColor; // 0x1e0
    int32_t m_nCPExtraArcData; // 0x1e4
    // Vector m_vGravity;
    char pad_01[12];
    float m_flArcMaxDuration; // 0x1f4
    float m_flSegmentBreak; // 0x1f8
    float m_flArcSpeed; // 0x1fc
    float m_flAlpha; // 0x200
    char pad_02[4];
}; // size: 0x208

class __declspec(align(8)) C_OP_TwistAroundAxis {
public:
    char pad_00[480];
    float m_fForceAmount; // 0x1e0
    // Vector m_TwistAxis;
    char pad_01[12];
    bool m_bLocalSpace; // 0x1f0
    int32_t m_nControlPointNumber; // 0x1f4
}; // size: 0x1f8

class __declspec(align(8)) C_OP_ModelDampenMovement {
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

class __declspec(align(8)) C_INIT_VelocityRandom {
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

class __declspec(align(8)) C_OP_PlaneCull {
public:
    char pad_00[464];
    int32_t m_nPlaneControlPoint; // 0x1d0
    CParticleCollectionVecInput m_vecPlaneDirection; // 0x1d8
    bool m_bLocalSpace; // 0x890
    float m_flPlaneOffset; // 0x894
}; // size: 0x898

class __declspec(align(8)) C_INIT_RandomNamedModelSequence {
public:
    char pad_00[512];
}; // size: 0x200

class __declspec(align(8)) C_OP_RemapScalarOnceTimed {
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

class __declspec(align(16)) ParticleChildrenInfo_t {
public:
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_ChildRef;
    char pad_00[8];
    float m_flDelay; // 0x8
    bool m_bEndCap; // 0xc
    bool m_bDisableChild; // 0xd
    ParticleDetailLevel_t m_nDetailLevel; // 0x10
    char pad_01[12];
}; // size: 0x20

class __declspec(align(8)) C_INIT_InitialVelocityNoise {
public:
    // Vector m_vecAbsVal;
    // Vector m_vecAbsValInv;
    char pad_00[496];
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

class __declspec(align(8)) C_INIT_RandomVector {
public:
    // Vector m_vecMin;
    // Vector m_vecMax;
    char pad_00[496];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1f0
    CRandomNumberGeneratorParameters m_randomnessParameters; // 0x1f4
    char pad_01[4];
}; // size: 0x200

class __declspec(align(8)) C_OP_ConstrainDistance {
public:
    char pad_00[464];
    CParticleCollectionFloatInput m_fMinDistance; // 0x1d0
    CParticleCollectionFloatInput m_fMaxDistance; // 0x340
    int32_t m_nControlPointNumber; // 0x4b0
    // Vector m_CenterOffset;
    char pad_01[12];
    bool m_bGlobalCenter; // 0x4c0
    char pad_02[7];
}; // size: 0x4c8

class __declspec(align(8)) C_INIT_RtEnvCull {
public:
    // Vector m_vecTestDir;
    // Vector m_vecTestNormal;
    char pad_00[496];
    bool m_bUseVelocity; // 0x1f0
    bool m_bCullOnMiss; // 0x1f1
    bool m_bLifeAdjust; // 0x1f2
    char m_RtEnvName[128]; // 0x1f3
    int32_t m_nRTEnvCP; // 0x274
    int32_t m_nComponent; // 0x278
    char pad_01[4];
}; // size: 0x280

class __declspec(align(8)) C_INIT_StatusEffect {
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

class __declspec(align(16)) C_OP_OscillateScalarSimple {
public:
    char pad_00[464];
    float m_Rate; // 0x1d0
    float m_Frequency; // 0x1d4
    ParticleAttributeIndex_t m_nField; // 0x1d8
    float m_flOscMult; // 0x1dc
    float m_flOscAdd; // 0x1e0
    char pad_01[44];
}; // size: 0x210

class __declspec(align(8)) ParticlePreviewBodyGroup_t {
public:
    // CUtlString m_bodyGroupName;
    char pad_00[8];
    int32_t m_nValue; // 0x8
    char pad_01[4];
}; // size: 0x10

class __declspec(align(8)) C_OP_PointVectorAtNextParticle {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0
    CPerParticleFloatInput m_flInterpolation; // 0x1d8
}; // size: 0x348

class __declspec(align(8)) C_OP_RemapCPVelocityToVector {
public:
    char pad_00[464];
    int32_t m_nControlPoint; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
    float m_flScale; // 0x1d8
    bool m_bNormalize; // 0x1dc
    char pad_01[3];
}; // size: 0x1e0

class __declspec(align(8)) C_OP_SetControlPointsToParticle {
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

class __declspec(align(4)) CParticleVisibilityInputs {
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

class __declspec(align(8)) C_OP_RenderSound {
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

class __declspec(align(8)) C_INIT_StatusEffectCitadel {
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

class __declspec(align(8)) C_OP_RenderRopes {
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

class __declspec(align(8)) C_OP_SpringToVectorConstraint {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flRestLength; // 0x1d0
    CPerParticleFloatInput m_flMinDistance; // 0x340
    CPerParticleFloatInput m_flMaxDistance; // 0x4b0
    CPerParticleFloatInput m_flRestingLength; // 0x620
    CPerParticleVecInput m_vecAnchorVector; // 0x790
}; // size: 0xe48

class __declspec(align(8)) C_OP_FadeOutSimple {
public:
    char pad_00[464];
    float m_flFadeOutTime; // 0x1d0
    ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4
}; // size: 0x1d8

class __declspec(align(1)) CParticleFunctionPreEmission {
public:
    char pad_00[464];
    bool m_bRunOnce; // 0x1d0
    char pad_01[7];
}; // size: 0x1d8

class __declspec(align(4)) CollisionGroupContext_t {
public:
    int32_t m_nCollisionGroupNumber; // 0x0
}; // size: 0x4

class __declspec(align(8)) C_OP_RemapTransformToVelocity {
public:
    char pad_00[464];
    CParticleTransformInput m_TransformInput; // 0x1d0
}; // size: 0x238

class __declspec(align(8)) C_OP_RemapSpeedtoCP {
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

class __declspec(align(8)) C_OP_RenderDeferredLight {
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

class __declspec(align(8)) C_OP_Decay {
public:
    char pad_00[464];
    bool m_bRopeDecay; // 0x1d0
    bool m_bForcePreserveParticleOrder; // 0x1d1
    char pad_01[6];
}; // size: 0x1d8

class __declspec(align(16)) C_OP_RemapGravityToVector {
public:
    char pad_00[464];
    CPerParticleVecInput m_vInput1; // 0x1d0
    ParticleAttributeIndex_t m_nOutputField; // 0x888
    ParticleSetMethod_t m_nSetMethod; // 0x88c
    bool m_bNormalizedOutput; // 0x890
    char pad_01[111];
}; // size: 0x900

class __declspec(align(4)) Relationship_t {
public:
    Disposition_t disposition; // 0x0
    int32_t priority; // 0x4
}; // size: 0x8

class __declspec(align(4)) CNavVolumeSphere {
public:
    // Vector m_vCenter;
    char pad_00[132];
    float m_flRadius; // 0x84
}; // size: 0x88

class __declspec(align(1)) CNavVolumeAll {
public:
    char pad_00[160];
}; // size: 0xa0

class __declspec(align(8)) CDestructiblePart_DamageLevel {
public:
    // CUtlString m_sName;
    // CGlobalSymbol m_sBreakablePieceName;
    char pad_00[16];
    int32_t m_nBodyGroupValue; // 0x10
    // CSkillInt m_nHealth;
    char pad_01[16];
    float m_flCriticalDamagePercent; // 0x24
    EDestructiblePartDamagePassThroughType m_nDamagePassthroughType; // 0x28
    DestructiblePartDestructionDeathBehavior_t m_nDestructionDeathBehavior; // 0x2c
    // CGlobalSymbol m_sCustomDeathHandshake;
    char pad_02[8];
    bool m_bShouldDestroyOnDeath; // 0x38
    CRangeFloat m_flDeathDestroyTime; // 0x3c
    char pad_03[4];
}; // size: 0x48

class __declspec(align(1)) CNetworkVelocityVector {
public:
    // CNetworkedQuantizedFloat m_vecX;
    // CNetworkedQuantizedFloat m_vecY;
    // CNetworkedQuantizedFloat m_vecZ;
    char pad_00[40];
}; // size: 0x28

class __declspec(align(1)) CAnimGraphControllerBase {
public:
    // ExternalAnimGraphHandle_t m_hExternalGraph;
    char pad_00[144];
}; // size: 0x90

class __declspec(align(4)) hudtextparms_t {
public:
    // Color color1;
    // Color color2;
    char pad_00[8];
    uint8_t effect; // 0x8
    uint8_t channel; // 0x9
    float x; // 0xc
    float y; // 0x10
}; // size: 0x14

class __declspec(align(1)) IRagdoll {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(4)) CSAdditionalMatchStats_t {
public:
    char pad_00[240];
    int32_t m_numRoundsSurvivedStreak; // 0xf0
    int32_t m_maxNumRoundsSurvivedStreak; // 0xf4
    int32_t m_numRoundsSurvivedTotal; // 0xf8
    int32_t m_iRoundsWonWithoutPurchase; // 0xfc
    int32_t m_iRoundsWonWithoutPurchaseTotal; // 0x100
    int32_t m_numFirstKills; // 0x104
    int32_t m_numClutchKills; // 0x108
    int32_t m_numPistolKills; // 0x10c
    int32_t m_numSniperKills; // 0x110
    int32_t m_iNumSuicides; // 0x114
    int32_t m_iNumTeamKills; // 0x118
    float m_flTeamDamage; // 0x11c
}; // size: 0x120

class __declspec(align(4)) dynpitchvol_base_t {
public:
    int32_t preset; // 0x0
    int32_t pitchrun; // 0x4
    int32_t pitchstart; // 0x8
    int32_t spinup; // 0xc
    int32_t spindown; // 0x10
    int32_t volrun; // 0x14
    int32_t volstart; // 0x18
    int32_t fadein; // 0x1c
    int32_t fadeout; // 0x20
    int32_t lfotype; // 0x24
    int32_t lforate; // 0x28
    int32_t lfomodpitch; // 0x2c
    int32_t lfomodvol; // 0x30
    int32_t cspinup; // 0x34
    int32_t cspincount; // 0x38
    int32_t pitch; // 0x3c
    int32_t spinupsav; // 0x40
    int32_t spindownsav; // 0x44
    int32_t pitchfrac; // 0x48
    int32_t vol; // 0x4c
    int32_t fadeinsav; // 0x50
    int32_t fadeoutsav; // 0x54
    int32_t volfrac; // 0x58
    int32_t lfofrac; // 0x5c
    int32_t lfomult; // 0x60
}; // size: 0x64

class __declspec(align(4)) dynpitchvol_t : public dynpitchvol_base_t {
public:
}; // size: 0x64

class __declspec(align(4)) CNavVolumeBreadthFirstSearch {
public:
    // Vector m_vStartPos;
    char pad_00[180];
    float m_flSearchDist; // 0xb4
    char pad_01[8];
}; // size: 0xc0

class __declspec(align(4)) CBreakableStageHelper {
public:
    char pad_00[8];
    int32_t m_nCurrentStage; // 0x8
    int32_t m_nStageCount; // 0xc
    char pad_01[8];
}; // size: 0x18

class __declspec(align(8)) CEntitySubclassVDataBase {
public:
    char pad_00[40];
}; // size: 0x28

class __declspec(align(4)) ModelConfigHandle_t {
public:
    uint32_t m_Value; // 0x0
}; // size: 0x4

class __declspec(align(8)) CEmptyGraphController {
public:
    char pad_00[144];
}; // size: 0x90

class __declspec(align(4)) CSAdditionalPerRoundStats_t {
public:
    int32_t m_numChickensKilled; // 0x0
    int32_t m_killsWhileBlind; // 0x4
    int32_t m_bombCarrierkills; // 0x8
    float m_flBurnDamageInflicted; // 0xc
    float m_flBlastDamageInflicted; // 0x10
    int32_t m_iDinks; // 0x14
    bool m_bFreshStartThisRound; // 0x18
    bool m_bBombPlantedAndAlive; // 0x19
    int32_t m_nDefuseStarts; // 0x1c
    int32_t m_nHostagePickUps; // 0x20
    int32_t m_numTeammatesFlashed; // 0x24
    char pad_00[200];
}; // size: 0xf0

class __declspec(align(1)) CBtNodeDecorator {
public:
    char pad_00[88];
}; // size: 0x58

class __declspec(align(4)) CFiringModeInt {
public:
    int32_t m_nValues[2]; // 0x0
}; // size: 0x8

class __declspec(align(1)) CNavVolumeCalculatedVector {
public:
    char pad_00[160];
}; // size: 0xa0

class __declspec(align(1)) CAnimEventListener {
public:
    char pad_00[32];
}; // size: 0x20

class __declspec(align(4)) SoundOpvarTraceResult_t {
public:
    // Vector vPos;
    char pad_00[12];
    bool bDidHit; // 0xc
    float flDistSqrToCenter; // 0x10
}; // size: 0x14

/// CNmSnapWeaponNode::CDefinition
class __declspec(align(8)) CNmSnapWeaponNode__CDefinition {
public:
    char pad_00[24];
    int16_t m_nEnabledNodeIdx; // 0x18
    int16_t m_nLockLeftHandNodeIdx; // 0x1a
    float m_flBlendTimeSeconds; // 0x1c
}; // size: 0x20

class __declspec(align(4)) CNavHullVData {
public:
    bool m_bAgentEnabled; // 0x0
    float m_agentRadius; // 0x4
    float m_agentHeight; // 0x8
    bool m_agentShortHeightEnabled; // 0xc
    float m_agentShortHeight; // 0x10
    bool m_agentCrawlEnabled; // 0x14
    float m_agentCrawlHeight; // 0x18
    float m_agentMaxClimb; // 0x1c
    int32_t m_agentMaxSlope; // 0x20
    float m_agentMaxJumpDownDist; // 0x24
    float m_agentMaxJumpHorizDistBase; // 0x28
    float m_agentMaxJumpUpDist; // 0x2c
    int32_t m_agentBorderErosion; // 0x30
    bool m_flowMapGenerationEnabled; // 0x34
    float m_flowMapNodeMaxRadius; // 0x38
}; // size: 0x3c

class __declspec(align(8)) CNmEventConsumerParticle {
public:
    char pad_00[48];
}; // size: 0x30

class __declspec(align(8)) CInButtonState {
public:
    char pad_00[8];
    uint64_t m_pButtonStates[3]; // 0x8
}; // size: 0x20

class __declspec(align(8)) CNmEventConsumerLegacy {
public:
    char pad_00[32];
}; // size: 0x20

class __declspec(align(8)) CNmEventConsumerSound {
public:
    char pad_00[48];
}; // size: 0x30

class __declspec(align(4)) CIronSightController {
public:
    char pad_00[8];
    bool m_bIronSightAvailable; // 0x8
    float m_flIronSightAmount; // 0xc
    float m_flIronSightAmountGained; // 0x10
    float m_flIronSightAmountBiased; // 0x14
}; // size: 0x18

class __declspec(align(1)) CTakeDamageSummaryScopeGuard {
public:
    // CUtlVector< SummaryTakeDamageInfo_t* > m_vecSummaries;
    char pad_00[32];
}; // size: 0x20

class __declspec(align(1)) CAI_ExpresserWithFollowup {
public:
    char pad_00[160];
}; // size: 0xa0

class __declspec(align(4)) ParticleIndex_t {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

class __declspec(align(16)) CNmAimCSTask {
public:
    char pad_00[256];
}; // size: 0x100

class __declspec(align(1)) QuestProgress {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) CNavVolume {
public:
    char pad_00[120];
}; // size: 0x78

class __declspec(align(1)) CMultiplayer_Expresser {
public:
    char pad_00[160];
    bool m_bAllowMultipleScenes; // 0xa0
    char pad_01[7];
}; // size: 0xa8

class __declspec(align(1)) IEconItemInterface {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(4)) sndopvarlatchdata_t {
public:
    // CUtlSymbolLarge m_iszStack;
    // CUtlSymbolLarge m_iszOperator;
    // CUtlSymbolLarge m_iszOpvar;
    char pad_00[32];
    float m_flVal; // 0x20
    // Vector m_vPos;
    char pad_01[12];
}; // size: 0x30

class __declspec(align(1)) Extent {
public:
    // VectorWS lo;
    // VectorWS hi;
    char pad_00[24];
}; // size: 0x18

class __declspec(align(1)) CRelativeLocation {
public:
    char pad_00[24];
    RelativeLocationType_t m_Type; // 0x18
    // Vector m_vRelativeOffset;
    // VectorWS m_vWorldSpacePos;
    // CHandle< CBaseEntity > m_hEntity;
    char pad_01[31];
}; // size: 0x38

class __declspec(align(1)) CBtNodeComposite {
public:
    char pad_00[88];
}; // size: 0x58

class __declspec(align(4)) CSimpleSimTimer {
public:
    GameTime_t m_flNext; // 0x0
    // WorldGroupId_t m_nWorldGroupId;
    char pad_00[4];
}; // size: 0x8

class __declspec(align(4)) CRandSimTimer : public CSimpleSimTimer {
public:
    float m_flMinInterval; // 0x8
    float m_flMaxInterval; // 0xc
}; // size: 0x10

class __declspec(align(8)) CTakeDamageInfo {
public:
    // Vector m_vecDamageForce;
    // VectorWS m_vecDamagePosition;
    // VectorWS m_vecReportedPosition;
    // Vector m_vecDamageDirection;
    // CHandle< CBaseEntity > m_hInflictor;
    // CHandle< CBaseEntity > m_hAttacker;
    // CHandle< CBaseEntity > m_hAbility;
    char pad_00[68];
    float m_flDamage; // 0x44
    float m_flTotalledDamage; // 0x48
    DamageTypes_t m_bitsDamageType; // 0x4c
    int32_t m_iDamageCustom; // 0x50
    // AmmoIndex_t m_iAmmoType;
    char pad_01[12];
    float m_flOriginalDamage; // 0x60
    bool m_bShouldBleed; // 0x64
    bool m_bShouldSpark; // 0x65
    char pad_02[8];
    TakeDamageFlags_t m_nDamageFlags; // 0x70
    HitGroup_t m_iHitGroupId; // 0x78
    int32_t m_nNumObjectsPenetrated; // 0x7c
    float m_flFriendlyFireDamageReductionRatio; // 0x80
    bool m_bStoppedBullet; // 0x84
    // CUtlVector< DestructibleHitGroupToDestroy_t > m_nDestructibleHitGroupsToForceDestroy;
    char pad_03[147];
    bool m_bInTakeDamageFlow; // 0x118
    char pad_04[7];
}; // size: 0x120

class __declspec(align(4)) WaterWheelDrag_t {
public:
    float m_flFractionOfWheelSubmerged; // 0x0
    float m_flWheelDrag; // 0x4
}; // size: 0x8

class __declspec(align(1)) CConstantForceController {
public:
    // Vector m_linear;
    // RotationVector m_angular;
    // Vector m_linearSave;
    // RotationVector m_angularSave;
    char pad_00[64];
}; // size: 0x40

/// CNmAimCSNode::CDefinition
class __declspec(align(8)) CNmAimCSNode__CDefinition {
public:
    char pad_00[24];
    int16_t m_nVerticalAngleNodeIdx; // 0x18
    int16_t m_nHorizontalAngleNodeIdx; // 0x1a
    int16_t m_nWeaponCategoryNodeIdx; // 0x1c
    int16_t m_nWeaponTypeNodeIdx; // 0x1e
    int16_t m_nIsWeaponActionActiveNodeIdx; // 0x20
    int16_t m_nWeaponDropNodeIdx; // 0x22
    int16_t m_nEnabledNodeIdx; // 0x24
    float m_flBlendTimeSeconds; // 0x28
    float m_flReduceRangeTimeSeconds; // 0x2c
}; // size: 0x30

class __declspec(align(1)) CVectorExponentialMovingAverage {
public:
    char pad_00[44];
}; // size: 0x2c

class __declspec(align(8)) CRR_Response {
public:
    uint8_t m_Type; // 0x0
    char m_szResponseName[192]; // 0x1
    char m_szMatchingRule[128]; // 0xc1
    // ResponseParams m_Params;
    char pad_00[60];
    float m_fMatchScore; // 0x180
    bool m_bAnyMatchingRulesInCooldown; // 0x184
    char* m_szSpeakerContext; // 0x188
    char* m_szWorldContext; // 0x190
    // ResponseFollowup m_Followup;
    // CUtlSymbol m_recipientFilter;
    char pad_01[56];
}; // size: 0x1d0

class __declspec(align(4)) DestructibleHitGroupToDestroy_t {
public:
    HitGroup_t m_nHitGroup; // 0x0
    int32_t m_nMaxDamageLevel; // 0x4
}; // size: 0x8

class __declspec(align(4)) DestructiblePartDestructionRequest_t {
public:
    EDestructibleParts_DestroyParameterFlags m_nDestroyFlags; // 0x0
    DamageTypes_t m_nDamageType; // 0x4
    float m_flPartDamage; // 0x8
    float m_flPartDamageRadius; // 0xc
    // VectorWS m_vWsPartDamageOrigin;
    // Vector m_vWsPartDamageForce;
    char pad_00[24];
}; // size: 0x28

class __declspec(align(4)) CSceneRequest {
public:
    // CUtlSymbolLarge m_szPayloadTypeName;
    // SceneRequestHandle_t m_uHandle;
    char pad_00[12];
    ESceneRequestState_t m_state; // 0xc
    char pad_01[16];
}; // size: 0x20

class __declspec(align(8)) SummaryTakeDamageInfo_t {
public:
    int32_t nSummarisedCount; // 0x0
    CTakeDamageInfo info; // 0x8
    // CTakeDamageResult result;
    // CHandle< CBaseEntity > hTarget;
    char pad_00[56];
}; // size: 0x160

class __declspec(align(4)) CBaseIssue {
public:
    char pad_00[32];
    char m_szTypeString[64]; // 0x20
    char m_szDetailsString[260]; // 0x60
    int32_t m_iNumYesVotes; // 0x164
    int32_t m_iNumNoVotes; // 0x168
    int32_t m_iNumPotentialVotes; // 0x16c
    // CVoteController* m_pVoteController;
    char pad_01[8];
}; // size: 0x178

class __declspec(align(4)) CSimTimer : public CSimpleSimTimer {
public:
    float m_flInterval; // 0x8
}; // size: 0xc

class __declspec(align(4)) CMotorController {
public:
    char pad_00[8];
    float m_speed; // 0x8
    float m_maxTorque; // 0xc
    // VectorWS m_axis;
    char pad_01[12];
    float m_inertiaFactor; // 0x1c
}; // size: 0x20

class __declspec(align(8)) GameAmmoTypeInfo_t {
public:
    char pad_00[56];
    int32_t m_nBuySize; // 0x38
    int32_t m_nCost; // 0x3c
    char pad_01[16];
}; // size: 0x50

class __declspec(align(4)) RotatorHistoryEntry_t {
public:
    // Quaternion qInvChange;
    char pad_00[16];
    GameTime_t flTimeRotationStart; // 0x10
    char pad_01[12];
}; // size: 0x20

class __declspec(align(1)) ISkeletonAnimationController {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(1)) HullFlags_t {
public:
    bool m_bHull_Human; // 0x0
    bool m_bHull_SmallCentered; // 0x1
    bool m_bHull_WideHuman; // 0x2
    bool m_bHull_Tiny; // 0x3
    bool m_bHull_Medium; // 0x4
    bool m_bHull_TinyCentered; // 0x5
    bool m_bHull_Large; // 0x6
    bool m_bHull_LargeCentered; // 0x7
    bool m_bHull_MediumTall; // 0x8
    bool m_bHull_Small; // 0x9
}; // size: 0xa

class __declspec(align(1)) ragdoll_t {
public:
    // CUtlVector< ragdollelement_t > list;
    // CUtlVector< ragdollhierarchyjoint_t > hierarchyJoints;
    // CUtlVector< int32 > boneIndex;
    char pad_00[72];
    bool allowStretch; // 0x48
    bool unused; // 0x49
    char pad_01[6];
}; // size: 0x50

class __declspec(align(1)) IHasAttributes {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(4)) CSmoothFunc {
public:
    char pad_00[8];
    float m_flSmoothAmplitude; // 0x8
    float m_flSmoothBias; // 0xc
    float m_flSmoothDuration; // 0x10
    float m_flSmoothRemainingTime; // 0x14
    int32_t m_nSmoothDir; // 0x18
    char pad_01[4];
}; // size: 0x20

class __declspec(align(1)) CFloatMovingAverage {
public:
    char pad_00[32];
}; // size: 0x20

class __declspec(align(4)) CCopyRecipientFilter {
public:
    char pad_00[8];
    int32_t m_Flags; // 0x8
    // CUtlVector< CPlayerSlot > m_Recipients;
    // CPlayerSlot m_slotPlayerExcludedDueToPrediction;
    char pad_01[44];
}; // size: 0x38

class __declspec(align(4)) CFiringModeFloat {
public:
    float m_flValues[2]; // 0x0
}; // size: 0x8

class __declspec(align(1)) CAnimGraphControllerManager {
public:
    // CUtlVector< CAnimGraphControllerBase* > m_controllers;
    char pad_00[168];
    bool m_bGraphBindingsCreated; // 0xa8
    char pad_01[7];
}; // size: 0xb0

class __declspec(align(1)) CBtNode {
public:
    char pad_00[88];
}; // size: 0x58

class __declspec(align(8)) DecalGroupOption_t {
public:
    // CStrongHandleCopyable< InfoForResourceTypeIMaterial2 > m_hMaterial;
    // CGlobalSymbol m_sSequenceName;
    char pad_00[16];
    float m_flProbability; // 0x10
    bool m_bEnableAngleBetweenNormalAndGravityRange; // 0x14
    float m_flMinAngleBetweenNormalAndGravity; // 0x18
    float m_flMaxAngleBetweenNormalAndGravity; // 0x1c
}; // size: 0x20

class __declspec(align(4)) locksound_t {
public:
    // CUtlSymbolLarge sLockedSound;
    // CUtlSymbolLarge sUnlockedSound;
    char pad_00[24];
    GameTime_t flwaitSound; // 0x18
    char pad_01[4];
}; // size: 0x20

class __declspec(align(8)) CCS2ChickenGraphController {
public:
    // CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_action;
    // CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_actionSubtype;
    // CAnimGraph2ParamAutoResetOptionalRef m_bActionReset;
    // CAnimGraph2ParamOptionalRef< float32 > m_idleVariation;
    // CAnimGraph2ParamOptionalRef< float32 > m_runVariation;
    // CAnimGraph2ParamOptionalRef< float32 > m_panicVariation;
    // CAnimGraph2ParamOptionalRef< float32 > m_squatVariation;
    // CAnimGraph2ParamOptionalRef< bool > m_bInWater;
    char pad_00[344];
    bool m_bHasActionCompletedEvent; // 0x158
    bool m_bWaitingForCompletedEvent; // 0x159
    char pad_01[6];
}; // size: 0x160

class __declspec(align(4)) CSoundPatch {
public:
    // CSoundEnvelope m_pitch;
    // CSoundEnvelope m_volume;
    char pad_00[60];
    float m_shutdownTime; // 0x3c
    float m_flLastTime; // 0x40
    // CUtlSymbolLarge m_iszSoundScriptName;
    // CHandle< CBaseEntity > m_hEnt;
    // CEntityIndex m_soundEntityIndex;
    // Vector m_soundOrigin;
    char pad_01[32];
    int32_t m_isPlaying; // 0x64
    CCopyRecipientFilter m_Filter; // 0x68
    float m_flCloseCaptionDuration; // 0xa0
    bool m_bUpdatedSoundOrigin; // 0xa4
    // CUtlSymbolLarge m_iszClassName;
    char pad_02[11];
}; // size: 0xb0

class __declspec(align(4)) SoundeventPathCornerPairNetworked_t {
public:
    // Vector vP1;
    // Vector vP2;
    char pad_00[24];
    float flPathLengthSqr; // 0x18
    float flP1Pct; // 0x1c
    float flP2Pct; // 0x20
}; // size: 0x24

class __declspec(align(4)) CSceneEventInfo {
public:
    int32_t m_iLayer; // 0x0
    int32_t m_iPriority; // 0x4
    HSequence m_hSequence; // 0x8
    float m_flWeight; // 0xc
    // CStrongHandle< InfoForResourceTypeCNmClip > m_hAnimClip;
    // CGlobalSymbol m_sAnimClipSlot;
    // CGlobalSymbol m_sAnimClipSlotWeight;
    char pad_00[24];
    bool m_bHasArrived; // 0x28
    int32_t m_nType; // 0x2c
    GameTime_t m_flNext; // 0x30
    bool m_bIsGesture; // 0x34
    bool m_bShouldRemove; // 0x35
    // CHandle< CBaseEntity > m_hTarget;
    // SceneEventId_t m_nSceneEventId;
    char pad_01[46];
    bool m_bClientSide; // 0x64
    bool m_bStarted; // 0x65
    char pad_02[2];
}; // size: 0x68

class __declspec(align(4)) ragdollhierarchyjoint_t {
public:
    int32_t parentIndex; // 0x0
    int32_t childIndex; // 0x4
    char pad_00[8];
}; // size: 0x10

class __declspec(align(4)) WaterWheelFrictionScale_t {
public:
    float m_flFractionOfWheelSubmerged; // 0x0
    float m_flFrictionScale; // 0x4
}; // size: 0x8

class __declspec(align(4)) CSkillFloat {
public:
    float m_pValue[4]; // 0x0
}; // size: 0x10

class __declspec(align(8)) CNavHullPresetVData {
public:
    // CUtlVector< CUtlString > m_vecNavHulls;
    char pad_00[24];
}; // size: 0x18

class __declspec(align(4)) thinkfunc_t {
public:
    // HSCRIPT m_hFn;
    // CUtlStringToken m_nContext;
    char pad_00[20];
    GameTick_t m_nNextThinkTick; // 0x14
    GameTick_t m_nLastThinkTick; // 0x18
    char pad_01[4];
}; // size: 0x20

class __declspec(align(4)) CSkillInt {
public:
    int32_t m_pValue[4]; // 0x0
}; // size: 0x10

class __declspec(align(4)) CHintMessageQueue {
public:
    float m_tmMessageEnd; // 0x0
    // CUtlVector< CHintMessage* > m_messages;
    // CBasePlayerController* m_pPlayerController;
    char pad_00[36];
}; // size: 0x28

class __declspec(align(1)) magnetted_objects_t {
public:
    // CHandle< CBaseEntity > hEntity;
    char pad_00[16];
}; // size: 0x10

class __declspec(align(1)) CNetworkOriginQuantizedVector {
public:
    // CNetworkedQuantizedFloat m_vecX;
    // CNetworkedQuantizedFloat m_vecY;
    // CNetworkedQuantizedFloat m_vecZ;
    char pad_00[40];
}; // size: 0x28

class __declspec(align(4)) DynamicVolumeDef_t {
public:
    // CHandle< CBaseEntity > m_source;
    // CHandle< CBaseEntity > m_target;
    char pad_00[8];
    int32_t m_nHullIdx; // 0x8
    // Vector m_vSourceAnchorPos;
    // Vector m_vTargetAnchorPos;
    char pad_01[24];
    uint32_t m_nAreaSrc; // 0x24
    uint32_t m_nAreaDst; // 0x28
    bool m_bAttached; // 0x2c
    char pad_02[3];
}; // size: 0x30

class __declspec(align(8)) CBaseAnimGraphVariationUserData {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(2)) CNetworkOriginCellCoordQuantizedVector {
public:
    char pad_00[16];
    uint16_t m_cellX; // 0x10
    uint16_t m_cellY; // 0x12
    uint16_t m_cellZ; // 0x14
    uint16_t m_nOutsideWorld; // 0x16
    // CNetworkedQuantizedFloat m_vecX;
    // CNetworkedQuantizedFloat m_vecY;
    // CNetworkedQuantizedFloat m_vecZ;
    char pad_01[24];
}; // size: 0x30

class __declspec(align(4)) CGameScriptedMoveDef_t {
public:
    // Vector m_vDestOffset;
    // CHandle< CBaseEntity > m_hDestEntity;
    // QAngle m_angDest;
    char pad_00[28];
    float m_flDuration; // 0x1c
    float m_flAngRate; // 0x20
    float m_flMoveSpeed; // 0x24
    bool m_bAimDisabled; // 0x28
    bool m_bIgnoreRotation; // 0x29
    ForcedCrouchState_t m_nForcedCrouchState; // 0x2c
}; // size: 0x30

class __declspec(align(4)) ragdollelement_t {
public:
    // Vector originParentSpace;
    char pad_00[32];
    int32_t parentIndex; // 0x20
    float m_flRadius; // 0x24
    int32_t m_nHeight; // 0x28
    char pad_01[4];
}; // size: 0x30

class __declspec(align(4)) CShatterGlassShard {
public:
    char pad_00[8];
    uint32_t m_hShardHandle; // 0x8
    // CUtlVector< Vector2D > m_vecPanelVertices;
    // Vector2D m_vLocalPanelSpaceOrigin;
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    // CHandle< CShatterGlassShardPhysics > m_hPhysicsEntity;
    // CHandle< CFuncShatterglass > m_hParentPanel;
    char pad_01[52];
    uint32_t m_hParentShard; // 0x40
    ShatterGlassStressType m_ShatterStressType; // 0x44
    // Vector m_vecStressVelocity;
    char pad_02[15];
    bool m_bCreatedModel; // 0x54
    float m_flLongestEdge; // 0x58
    float m_flShortestEdge; // 0x5c
    float m_flLongestAcross; // 0x60
    float m_flShortestAcross; // 0x64
    float m_flSumOfAllEdges; // 0x68
    float m_flArea; // 0x6c
    OnFrame m_nOnFrameEdge; // 0x70
    int32_t m_nSubShardGeneration; // 0x74
    // Vector2D m_vecAverageVertPosition;
    char pad_03[8];
    bool m_bAverageVertPositionIsValid; // 0x80
    // Vector2D m_vecPanelSpaceStressPositionA;
    // Vector2D m_vecPanelSpaceStressPositionB;
    char pad_04[19];
    bool m_bStressPositionAIsValid; // 0x94
    bool m_bStressPositionBIsValid; // 0x95
    bool m_bFlaggedForRemoval; // 0x96
    GameTime_t m_flPhysicsEntitySpawnedAtTime; // 0x98
    // CHandle< CBaseEntity > m_hEntityHittingMe;
    // CUtlVector< uint32 > m_vecNeighbors;
    char pad_05[28];
}; // size: 0xb8

class __declspec(align(1)) CSimpleStopwatch {
public:
    char pad_00[12];
}; // size: 0xc

class __declspec(align(1)) IChoreoServices {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(4)) CGameChoreoServices : public IChoreoServices {
public:
    // CHandle< CBaseAnimGraph > m_hOwner;
    // CHandle< CScriptedSequence > m_hScriptedSequence;
    // IChoreoServices::ScriptState_t m_scriptState;
    // IChoreoServices::ChoreoState_t m_choreoState;
    char pad_01[16];
    GameTime_t m_flTimeStartedState; // 0x18
    char pad_02[4];
}; // size: 0x20

class __declspec(align(4)) CMovementStatsProperty {
public:
    char pad_00[16];
    int32_t m_nUseCounter; // 0x10
    CVectorExponentialMovingAverage m_emaMovementDirection; // 0x14
}; // size: 0x40

class __declspec(align(4)) CStopwatchBase : public CSimpleSimTimer {
public:
    bool m_fIsRunning; // 0x8
    char pad_01[3];
}; // size: 0xc

class __declspec(align(4)) CRandStopwatch : public CStopwatchBase {
public:
    float m_flMinInterval; // 0xc
    float m_flMaxInterval; // 0x10
}; // size: 0x14

class __declspec(align(1)) CWorldCompositionChunkReferenceElement_t {
public:
    // CUtlString m_strMapToLoad;
    // CUtlString m_strLandmarkName;
    char pad_00[16];
}; // size: 0x10

class __declspec(align(4)) CRangeInt {
public:
    int32_t m_pValue[2]; // 0x0
}; // size: 0x8

class __declspec(align(4)) RagdollCreationParams_t {
public:
    // Vector m_vForce;
    char pad_00[12];
    int32_t m_nForceBone; // 0xc
    bool m_bForceCurrentWorldTransform; // 0x10
    bool m_bUseLRURetirement; // 0x11
    int32_t m_nHealthToGrant; // 0x14
}; // size: 0x18

class __declspec(align(1)) CPathQueryUtil {
public:
    // CTransform m_PathToEntityTransform;
    // CUtlVector< Vector > m_vecPathSamplePositions;
    // CUtlVector< float32 > m_vecPathSampleParameters;
    // CUtlVector< float32 > m_vecPathSampleDistances;
    char pad_00[120];
    bool m_bIsClosedLoop; // 0x78
    char pad_01[7];
}; // size: 0x80

class __declspec(align(1)) CNetworkTransmitComponent {
public:
    char pad_00[388];
    uint8_t m_nTransmitStateOwnedCounter; // 0x184
    char pad_01[75];
}; // size: 0x1d0

class __declspec(align(8)) AmmoTypeInfo_t {
public:
    char pad_00[16];
    int32_t m_nMaxCarry; // 0x10
    char pad_01[8];
    CRangeInt m_nSplashSize; // 0x1c
    AmmoFlags_t m_nFlags; // 0x24
    float m_flMass; // 0x28
    CRangeFloat m_flSpeed; // 0x2c
    char pad_02[4];
}; // size: 0x38

class __declspec(align(8)) ResponseFollowup {
public:
    char* followup_concept; // 0x0
    char* followup_contexts; // 0x8
    float followup_delay; // 0x10
    /* !!Invalid padding!! */ // char* followup_target; // 0x14
    char pad_00[8];
    /* !!Invalid padding!! */ // char* followup_entityiotarget; // 0x1c
    char pad_01[8];
    /* !!Invalid padding!! */ // char* followup_entityioinput; // 0x24
    char pad_02[8];
    float followup_entityiodelay; // 0x2c
    bool bFired; // 0x30
}; // size: 0x38

class __declspec(align(4)) CCommentarySystem {
public:
    char pad_00[17];
    bool m_bCommentaryConvarsChanging; // 0x11
    bool m_bCommentaryEnabledMidGame; // 0x12
    GameTime_t m_flNextTeleportTime; // 0x14
    int32_t m_iTeleportStage; // 0x18
    bool m_bCheatState; // 0x1c
    bool m_bIsFirstSpawnGroupToLoad; // 0x1d
    // CHandle< CPointCommentaryNode > m_hCurrentNode;
    // CHandle< CPointCommentaryNode > m_hActiveCommentaryNode;
    // CHandle< CPointCommentaryNode > m_hLastCommentaryNode;
    // CUtlVector< CHandle< CPointCommentaryNode > > m_vecNodes;
    char pad_01[66];
}; // size: 0x60

class __declspec(align(1)) ExternalAnimGraph_t {
public:
    // ExternalAnimGraphHandle_t m_hExtGraphHandle;
    // CGlobalSymbol m_sExternalGraphSlotID;
    // CStrongHandleCopyable< InfoForResourceTypeCNmGraphDefinition > m_hGraphDefinition;
    // CHandle< CBaseAnimGraph > m_hExternalGraphOwner;
    char pad_00[48];
    ExternalAnimGraphInactiveBehavior_t m_nInactiveBehavior; // 0x30
    char pad_01[7];
}; // size: 0x38

class __declspec(align(4)) SceneEventId_t {
public:
    uint32_t m_Value; // 0x0
}; // size: 0x4

class __declspec(align(8)) CTakeDamageResult {
public:
    CTakeDamageInfo* m_pOriginatingInfo; // 0x0
    int32_t m_nHealthLost; // 0x8
    int32_t m_nHealthBefore; // 0xc
    int32_t m_nDamageDealt; // 0x10
    float m_flPreModifiedDamage; // 0x14
    int32_t m_nTotalledHealthLost; // 0x18
    int32_t m_nTotalledDamageDealt; // 0x1c
    float m_flTotalledPreModifiedDamage; // 0x20
    bool m_bWasDamageSuppressed; // 0x24
    bool m_bSuppressFlinch; // 0x25
    HitGroup_t m_nOverrideFlinchHitGroup; // 0x28
    char pad_00[4];
}; // size: 0x30

class __declspec(align(4)) VelocitySampler {
public:
    // Vector m_prevSample;
    char pad_00[12];
    GameTime_t m_fPrevSampleTime; // 0xc
    float m_fIdealSampleRate; // 0x10
}; // size: 0x14

class __declspec(align(1)) CPhysicsShake {
public:
    // Vector m_force;
    char pad_00[24];
}; // size: 0x18

class __declspec(align(4)) ExternalAnimGraphHandle_t {
public:
    uint32_t m_Value; // 0x0
}; // size: 0x4

class __declspec(align(8)) CBaseAnimGraphDestructibleParts_GraphController {
public:
    char pad_00[144];
}; // size: 0x90

class __declspec(align(4)) RotatorQueueEntry_t {
public:
    // Quaternion qTarget;
    char pad_00[16];
    RotatorTargetSpace_t eSpace; // 0x10
    char pad_01[12];
}; // size: 0x20

class __declspec(align(8)) PulseScriptedSequenceData_t {
public:
    int32_t m_nActorID; // 0x0
    // CUtlString m_szPreIdleSequence;
    // CUtlString m_szEntrySequence;
    // CUtlString m_szSequence;
    // CUtlString m_szExitSequence;
    char pad_00[36];
    ScriptedMoveTo_t m_nMoveTo; // 0x28
    SharedMovementGait_t m_nMoveToGait; // 0x2c
    ScriptedHeldWeaponBehavior_t m_nHeldWeaponBehavior; // 0x30
    bool m_bLoopPreIdleSequence; // 0x34
    bool m_bLoopActionSequence; // 0x35
    bool m_bLoopPostIdleSequence; // 0x36
    bool m_bIgnoreLookAt; // 0x37
}; // size: 0x38

class __declspec(align(1)) NavGravity_t {
public:
    // Vector m_vGravity;
    char pad_00[12];
    bool m_bDefault; // 0xc
    char pad_01[3];
}; // size: 0x10

class __declspec(align(1)) CNavVolumeVector {
public:
    char pad_00[128];
    bool m_bHasBeenPreFiltered; // 0x80
    char pad_01[31];
}; // size: 0xa0

class __declspec(align(4)) SceneRequestHandle_t {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

class __declspec(align(4)) CSoundEnvelope {
public:
    float m_current; // 0x0
    float m_target; // 0x4
    float m_rate; // 0x8
    bool m_forceupdate; // 0xc
    char pad_00[3];
}; // size: 0x10

class __declspec(align(1)) CVectorMovingAverage {
public:
    char pad_00[32];
}; // size: 0x20

class __declspec(align(4)) PointCameraSettings_t {
public:
    float m_flNearBlurryDistance; // 0x0
    float m_flNearCrispDistance; // 0x4
    float m_flFarCrispDistance; // 0x8
    float m_flFarBlurryDistance; // 0xc
}; // size: 0x10

class __declspec(align(8)) CPhysicsBodyGameMarkup {
public:
    // CUtlString m_TargetBody;
    // CGlobalSymbol m_Tag;
    char pad_00[16];
}; // size: 0x10

class __declspec(align(4)) ConstraintSoundInfo {
public:
    char pad_00[8];
    VelocitySampler m_vSampler; // 0x8
    // SimpleConstraintSoundProfile m_soundProfile;
    // Vector m_forwardAxis;
    // CUtlSymbolLarge m_iszTravelSoundFwd;
    // CUtlSymbolLarge m_iszTravelSoundBack;
    // CUtlSymbolLarge m_iszReversalSoundSmall;
    // CUtlSymbolLarge m_iszReversalSoundMedium;
    // CUtlSymbolLarge m_iszReversalSoundLarge;
    char pad_01[116];
    bool m_bPlayTravelSound; // 0x90
    bool m_bPlayReversalSound; // 0x91
    char pad_02[6];
}; // size: 0x98

class __declspec(align(8)) ResponseParams {
public:
    char pad_00[16];
    int16_t odds; // 0x10
    int16_t flags; // 0x12
    ResponseFollowup* m_pFollowup; // 0x18
}; // size: 0x20

class __declspec(align(4)) CStopwatch : public CStopwatchBase {
public:
    float m_flInterval; // 0xc
}; // size: 0x10

class __declspec(align(8)) CNmEventConsumerAttributes {
public:
    char pad_00[80];
}; // size: 0x50

class __declspec(align(4)) CAI_Expresser {
public:
    char pad_00[96];
    GameTime_t m_flStopTalkTime; // 0x60
    GameTime_t m_flStopTalkTimeWithoutDelay; // 0x64
    GameTime_t m_flQueuedSpeechTime; // 0x68
    GameTime_t m_flBlockedTalkTime; // 0x6c
    int32_t m_voicePitch; // 0x70
    GameTime_t m_flLastTimeAcceptedSpeak; // 0x74
    bool m_bAllowSpeakingInterrupts; // 0x78
    bool m_bConsiderSceneInvolvementAsSpeech; // 0x79
    bool m_bSceneEntityDisabled; // 0x7a
    int32_t m_nLastSpokenPriority; // 0x7c
    // CBaseFlex* m_pOuter;
    char pad_01[32];
}; // size: 0xa0

class __declspec(align(4)) CResponseCriteriaSet {
public:
    char pad_00[48];
    int32_t m_nNumPrefixedContexts; // 0x30
    bool m_bOverrideOnAppend; // 0x34
    char pad_01[3];
}; // size: 0x38

class __declspec(align(1)) CPathMoverEntitySpawn {
public:
    // CHandle< CFuncMover > hMover;
    // CUtlVector< CHandle< CBaseEntity > > vecOtherEntities;
    char pad_00[32];
}; // size: 0x20

class __declspec(align(1)) CNavVolumeMarkupVolume {
public:
    char pad_00[224];
}; // size: 0xe0

class __declspec(align(1)) CSkeletonAnimationController : public ISkeletonAnimationController {
public:
    // CSkeletonInstance* m_pSkeletonInstance;
    char pad_01[8];
}; // size: 0x10

class __declspec(align(4)) CGameScriptedMoveData {
public:
    // Vector m_vAccumulatedRootMotion;
    // QAngle m_angAccumulatedRootMotionRotation;
    // VectorWS m_vSrc;
    // QAngle m_angSrc;
    // QAngle m_angCurrent;
    char pad_00[60];
    float m_flLockedSpeed; // 0x3c
    float m_flAngRate; // 0x40
    float m_flDuration; // 0x44
    GameTime_t m_flStartTime; // 0x48
    bool m_bActive; // 0x4c
    bool m_bTeleportOnEnd; // 0x4d
    bool m_bIgnoreRotation; // 0x4e
    bool m_bSuccess; // 0x4f
    ForcedCrouchState_t m_nForcedCrouchState; // 0x50
    bool m_bIgnoreCollisions; // 0x54
    // Vector m_vDest;
    // QAngle m_angDst;
    // CHandle< CBaseEntity > m_hDestEntity;
    char pad_01[31];
}; // size: 0x74

class __declspec(align(4)) CDecalInstance {
public:
    // CGlobalSymbol m_sDecalGroup;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial;
    // CUtlStringToken m_sSequenceName;
    // CHandle< CBaseEntity > m_hEntity;
    char pad_00[24];
    int32_t m_nBoneIndex; // 0x18
    int32_t m_nTriangleIndex; // 0x1c
    // Vector m_vPositionLS;
    // Vector m_vNormalLS;
    // Vector m_vSAxisLS;
    char pad_01[36];
    DecalFlags_t m_nFlags; // 0x44
    // Color m_Color;
    char pad_02[4];
    float m_flWidth; // 0x4c
    float m_flHeight; // 0x50
    float m_flDepth; // 0x54
    // CTransformWS m_transform;
    char pad_03[40];
    float m_flAnimationScale; // 0x80
    float m_flAnimationStartTime; // 0x84
    GameTime_t m_flPlaceTime; // 0x88
    float m_flFadeStartTime; // 0x8c
    float m_flFadeDuration; // 0x90
    float m_flLightingOriginOffset; // 0x94
    char pad_04[8];
    float m_flBoundingRadiusSqr; // 0xa0
    int16_t m_nSequenceIndex; // 0xa4
    bool m_bIsAdjacent; // 0xa6
    bool m_bDoDecalLightmapping; // 0xa7
    DecalRtEncoding_t m_nDecalRtEncoding; // 0xa8
    bool m_bProjectToBackfaces; // 0xa9
    char pad_05[6];
}; // size: 0xb0

class __declspec(align(4)) CPlayerPawnComponent {
public:
    char pad_00[8];
    CNetworkVarChainer __m_pChainEntity; // 0x8
    char pad_01[24];
}; // size: 0x48

class __declspec(align(4)) CNavVolumeSphericalShell {
public:
    char pad_00[136];
    float m_flRadiusInner; // 0x88
    char pad_01[4];
}; // size: 0x90

class __declspec(align(4)) ResponseContext_t {
public:
    // CUtlSymbolLarge m_iszName;
    // CUtlSymbolLarge m_iszValue;
    char pad_00[16];
    GameTime_t m_fExpirationTime; // 0x10
    char pad_01[4];
}; // size: 0x18

class __declspec(align(1)) CRopeOverlapHit {
public:
    // CHandle< CBaseEntity > m_hEntity;
    // CUtlVector< int32 > m_vecOverlappingLinks;
    char pad_00[32];
}; // size: 0x20

class __declspec(align(8)) CDestructiblePartsSystemData {
public:
    // CUtlOrderedMap< HitGroup_t, CDestructiblePart > m_PartsDataByHitGroup;
    char pad_00[40];
    CRangeInt m_nMinMaxNumberHitGroupsToDestroyWhenGibbing; // 0x28
}; // size: 0x30

class __declspec(align(1)) AmmoIndex_t {
public:
    int8_t m_Value; // 0x0
}; // size: 0x1

class __declspec(align(1)) CNetworkViewOffsetVector {
public:
    // CNetworkedQuantizedFloat m_vecX;
    // CNetworkedQuantizedFloat m_vecY;
    // CNetworkedQuantizedFloat m_vecZ;
    char pad_00[40];
}; // size: 0x28

class __declspec(align(1)) CNmEventConsumer {
public:
    char pad_00[16];
}; // size: 0x10

class __declspec(align(1)) CAnimEventListenerBase {
public:
    char pad_00[24];
}; // size: 0x18

class __declspec(align(1)) CFloatExponentialMovingAverage {
public:
    char pad_00[20];
}; // size: 0x14

class __declspec(align(4)) CSkillDamage {
public:
    CSkillFloat m_flDamage; // 0x0
    float m_flNPCDamageScalarVsNPC; // 0x10
    float m_flPhysicsForceDamage; // 0x14
}; // size: 0x18

class __declspec(align(8)) CPhysicsBodyGameMarkupData {
public:
    // CUtlOrderedMap< CUtlString, CPhysicsBodyGameMarkup > m_PhysicsBodyMarkupByBoneName;
    char pad_00[40];
}; // size: 0x28

class __declspec(align(4)) SimpleConstraintSoundProfile {
public:
    char pad_00[8];
    float m_flKeyPointMinSoundThreshold; // 0x8
    float m_flKeyPointMaxSoundThreshold; // 0xc
    float m_reversalSoundThresholdSmall; // 0x10
    float m_reversalSoundThresholdMedium; // 0x14
    float m_reversalSoundThresholdLarge; // 0x18
    char pad_01[4];
}; // size: 0x20

class __declspec(align(1)) WrappedPhysicsJoint_t {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(4)) lerpdata_t {
public:
    // CHandle< CBaseEntity > m_hEnt;
    char pad_00[4];
    MoveType_t m_MoveType; // 0x4
    GameTime_t m_flStartTime; // 0x8
    // Vector m_vecStartOrigin;
    // Quaternion m_qStartRot;
    char pad_01[36];
    ParticleIndex_t m_nFXIndex; // 0x30
    char pad_02[28];
}; // size: 0x50

class __declspec(align(4)) CScriptUniformRandomStream {
public:
    // HSCRIPT m_hScriptScope;
    char pad_00[156];
    int32_t m_nInitialSeed; // 0x9c
}; // size: 0xa0

class __declspec(align(1)) CodeGenAABB_t {
public:
    // Vector m_vMinBounds;
    // Vector m_vMaxBounds;
    char pad_00[24];
}; // size: 0x18

class __declspec(align(1)) CResponseQueue {
public:
    // CUtlVector< CAI_Expresser* > m_ExpresserTargets;
    char pad_00[80];
}; // size: 0x50

class __declspec(align(4)) CPlayerControllerComponent {
public:
    char pad_00[8];
    CNetworkVarChainer __m_pChainEntity; // 0x8
    char pad_01[16];
}; // size: 0x40

class __declspec(align(8)) CNmSnapWeaponTask {
public:
    char pad_00[96];
}; // size: 0x60

class __declspec(align(8)) CDecalGroupVData {
public:
    // CUtlVector< DecalGroupOption_t > m_vecOptions;
    char pad_00[24];
    float m_flTotalProbability; // 0x18
    char pad_01[4];
}; // size: 0x20

class __declspec(align(1)) CFootstepTableHandle {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(4)) ParticleNode_t {
public:
    // CHandle< CBaseEntity > m_hEntity;
    char pad_00[4];
    ParticleIndex_t m_iIndex; // 0x4
    GameTime_t m_flStartTime; // 0x8
    float m_flGrowthDuration; // 0xc
    // Vector m_vecGrowthOrigin;
    char pad_01[12];
    float m_flEndcapTime; // 0x1c
    bool m_bMarkedForDelete; // 0x20
    char pad_02[3];
}; // size: 0x24

class __declspec(align(8)) CHintMessage {
public:
    char* m_hintString; // 0x0
    // CUtlVector< char* > m_args;
    char pad_00[24];
    float m_duration; // 0x20
    char pad_01[4];
}; // size: 0x28

class __declspec(align(4)) CRemapFloat {
public:
    float m_pValue[4]; // 0x0
}; // size: 0x10

class __declspec(align(1)) AutoRoomDoorwayPairs_t {
public:
    // Vector vP1;
    // Vector vP2;
    char pad_00[24];
}; // size: 0x18

class __declspec(align(4)) RelationshipOverride_t : public Relationship_t {
public:
    // CHandle< CBaseEntity > entity;
    char pad_00[4];
    Class_T classType; // 0xc
}; // size: 0x10

class __declspec(align(1)) CAnimEventQueueListener {
public:
    char pad_00[32];
}; // size: 0x20

class __declspec(align(8)) CDestructiblePart {
public:
    // CGlobalSymbol m_DebugName;
    char pad_00[8];
    HitGroup_t m_nHitGroup; // 0x8
    bool m_bDisableHitGroupWhenDestroyed; // 0xc
    // CUtlVector< HitGroup_t > m_nOtherHitgroupsToDestroyWhenFullyDestructed;
    char pad_01[27];
    bool m_bOnlyDestroyWhenGibbing; // 0x28
    // CGlobalSymbol m_sBodyGroupName;
    // CUtlVector< CDestructiblePart_DamageLevel > m_DamageLevels;
    char pad_02[39];
}; // size: 0x50

class __declspec(align(1)) CompositeMaterial_t {
public:
    // KeyValues3 m_TargetKVs;
    // KeyValues3 m_PreGenerationKVs;
    // KeyValues3 m_FinalKVs;
    // CUtlVector< GeneratedTextureHandle_t > m_vecGeneratedTextures;
    char pad_00[160];
}; // size: 0xa0

class __declspec(align(8)) CompositeMaterialMatchFilter_t {
public:
    CompositeMaterialMatchFilterType_t m_nCompositeMaterialMatchFilterType; // 0x0
    // CUtlString m_strMatchFilter;
    // CUtlString m_strMatchValue;
    char pad_00[20];
    bool m_bPassWhenTrue; // 0x18
    char pad_01[7];
}; // size: 0x20

class __declspec(align(4)) inv_image_light_sun_t {
public:
    // Vector color;
    // QAngle angle;
    char pad_00[24];
    float brightness; // 0x18
}; // size: 0x1c

class __declspec(align(1)) IClientAlphaProperty {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(4)) CGlobalLightBase {
public:
    char pad_00[16];
    bool m_bSpotLight; // 0x10
    // Vector m_SpotLightOrigin;
    // QAngle m_SpotLightAngles;
    // Vector m_ShadowDirection;
    // Vector m_AmbientDirection;
    // Vector m_SpecularDirection;
    // Vector m_InspectorSpecularDirection;
    char pad_01[72];
    float m_flSpecularPower; // 0x5c
    float m_flSpecularIndependence; // 0x60
    // Color m_SpecularColor;
    char pad_02[4];
    bool m_bStartDisabled; // 0x68
    bool m_bEnabled; // 0x69
    // Color m_LightColor;
    // Color m_AmbientColor1;
    // Color m_AmbientColor2;
    // Color m_AmbientColor3;
    char pad_03[16];
    float m_flSunDistance; // 0x7c
    float m_flFOV; // 0x80
    float m_flNearZ; // 0x84
    float m_flFarZ; // 0x88
    bool m_bEnableShadows; // 0x8c
    bool m_bOldEnableShadows; // 0x8d
    bool m_bBackgroundClearNotRequired; // 0x8e
    float m_flCloudScale; // 0x90
    float m_flCloud1Speed; // 0x94
    float m_flCloud1Direction; // 0x98
    float m_flCloud2Speed; // 0x9c
    float m_flCloud2Direction; // 0xa0
    char pad_04[12];
    float m_flAmbientScale1; // 0xb0
    float m_flAmbientScale2; // 0xb4
    float m_flGroundScale; // 0xb8
    float m_flLightScale; // 0xbc
    float m_flFoWDarkness; // 0xc0
    bool m_bEnableSeparateSkyboxFog; // 0xc4
    // Vector m_vFowColor;
    // Vector m_ViewOrigin;
    // QAngle m_ViewAngles;
    char pad_05[36];
    float m_flViewFoV; // 0xec
    // Vector[8] m_WorldPoints;
    // Vector2D m_vFogOffsetLayer0;
    // Vector2D m_vFogOffsetLayer1;
    // CHandle< C_BaseEntity > m_hEnvWind;
    // CHandle< C_BaseEntity > m_hEnvSky;
    char pad_06[976];
}; // size: 0x4c0

class __declspec(align(4)) CClientAlphaProperty {
public:
    char pad_00[16];
    uint16_t m_nDistFadeStart; // 0x10
    uint16_t m_nDistFadeEnd; // 0x12
    // bitfield:14 m_nDesyncOffset;
    // bitfield:1 m_bAlphaOverride;
    // bitfield:1 m_bShadowAlphaOverride;
    // bitfield:3 m_nRenderMode;
    // bitfield:5 m_nRenderFX;
    char pad_01[3];
    uint8_t m_nAlpha; // 0x17
    float m_flFadeScale; // 0x18
    GameTime_t m_flRenderFxStartTime; // 0x1c
    float m_flRenderFxDuration; // 0x20
    char pad_02[12];
}; // size: 0x30

class __declspec(align(8)) CCompositeMaterialEditorDoc {
public:
    char pad_00[8];
    int32_t m_nVersion; // 0x8
    // CUtlVector< CompositeMaterialEditorPoint_t > m_Points;
    // KeyValues3 m_KVthumbnail;
    char pad_01[44];
}; // size: 0x38

class __declspec(align(8)) CompMatPropertyMutator_t {
public:
    bool m_bEnabled; // 0x0
    CompMatPropertyMutatorType_t m_nMutatorCommandType; // 0x4
    // CUtlString m_strInitWith_Container;
    // CUtlString m_strCopyProperty_InputContainerSrc;
    // CUtlString m_strCopyProperty_InputContainerProperty;
    // CUtlString m_strCopyProperty_TargetProperty;
    // CUtlString m_strRandomRollInputVars_SeedInputVar;
    // CUtlVector< CUtlString > m_vecRandomRollInputVars_InputVarsToRoll;
    // CUtlString m_strCopyMatchingKeys_InputContainerSrc;
    // CUtlString m_strCopyKeysWithSuffix_InputContainerSrc;
    // CUtlString m_strCopyKeysWithSuffix_FindSuffix;
    // CUtlString m_strCopyKeysWithSuffix_ReplaceSuffix;
    // CompositeMaterialInputLooseVariable_t m_nSetValue_Value;
    // CUtlString m_strGenerateTexture_TargetParam;
    // CUtlString m_strGenerateTexture_InitialContainer;
    char pad_00[760];
    int32_t m_nResolution; // 0x300
    bool m_bIsScratchTarget; // 0x304
    // CUtlString m_strCompressionFormat;
    char pad_01[11];
    bool m_bSplatDebugInfo; // 0x310
    bool m_bCaptureInRenderDoc; // 0x311
    // CUtlVector< CompMatPropertyMutator_t > m_vecTexGenInstructions;
    // CUtlVector< CompMatPropertyMutator_t > m_vecConditionalMutators;
    // CUtlString m_strPopInputQueue_Container;
    // CUtlString m_strDrawText_InputContainerSrc;
    // CUtlString m_strDrawText_InputContainerProperty;
    // Vector2D m_vecDrawText_Position;
    // Color m_colDrawText_Color;
    // CUtlString m_strDrawText_Font;
    // CUtlVector< CompMatMutatorCondition_t > m_vecConditions;
    char pad_02[126];
}; // size: 0x390

class __declspec(align(8)) inv_image_data_t {
public:
    // inv_image_map_t map;
    // inv_image_item_t item;
    // inv_image_camera_t camera;
    char pad_00[100];
    inv_image_light_sun_t lightsun; // 0x64
    // inv_image_light_fill_t lightfill;
    // inv_image_light_barn_t light0;
    // inv_image_light_barn_t light1;
    // inv_image_clearcolor_t clearcolor;
    char pad_01[104];
}; // size: 0xe8

class __declspec(align(8)) CompMatMutatorCondition_t {
public:
    CompMatPropertyMutatorConditionType_t m_nMutatorCondition; // 0x0
    // CUtlString m_strMutatorConditionContainerName;
    // CUtlString m_strMutatorConditionContainerVarName;
    // CUtlString m_strMutatorConditionContainerVarValue;
    char pad_00[28];
    bool m_bPassWhenTrue; // 0x20
    char pad_01[7];
}; // size: 0x28

class __declspec(align(4)) C_IronSightController {
public:
    char pad_00[16];
    bool m_bIronSightAvailable; // 0x10
    float m_flIronSightAmount; // 0x14
    float m_flIronSightAmountGained; // 0x18
    float m_flIronSightAmountBiased; // 0x1c
    float m_flIronSightAmount_Interpolated; // 0x20
    float m_flIronSightAmountGained_Interpolated; // 0x24
    float m_flIronSightAmountBiased_Interpolated; // 0x28
    float m_flInterpolationLastUpdated; // 0x2c
    // QAngle[8] m_angDeltaAverage;
    // QAngle m_angViewLast;
    // Vector2D m_vecDotCoords;
    char pad_01[116];
    float m_flFiringInaccuracyExtraWidthMultiplier; // 0xa4
    float m_flSpeedRatio; // 0xa8
    char pad_02[4];
}; // size: 0xb0

class __declspec(align(1)) CPlayerSprayDecalRenderHelper {
public:
    char pad_00[48];
}; // size: 0x30

class __declspec(align(8)) CompositeMaterialEditorPoint_t {
public:
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ModelName;
    char pad_00[224];
    int32_t m_nSequenceIndex; // 0xe0
    float m_flCycle; // 0xe4
    // KeyValues3 m_KVModelStateChoices;
    char pad_01[16];
    bool m_bEnableChildModel; // 0xf8
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ChildModelName;
    // CUtlVector< CompositeMaterialAssemblyProcedure_t > m_vecCompositeMaterialAssemblyProcedures;
    // CUtlVector< CompositeMaterial_t > m_vecCompositeMaterials;
    char pad_02[287];
}; // size: 0x218

class __declspec(align(4)) C_CommandContext {
public:
    bool needsprocessing; // 0x0
    char pad_00[156];
    int32_t command_number; // 0xa0
    char pad_01[4];
}; // size: 0xa8

class __declspec(align(4)) inv_image_clearcolor_t {
public:
    // Vector color;
    char pad_00[12];
}; // size: 0xc

class __declspec(align(8)) C_CSGO_PreviewPlayer_GraphController {
public:
    // CAnimGraphParamRef< char* > m_pszCharacterMode;
    // CAnimGraphParamRef< char* > m_pszTeamPreviewVariant;
    // CAnimGraphParamRef< char* > m_pszTeamPreviewPosition;
    // CAnimGraphParamRef< char* > m_pszEndOfMatchCelebration;
    // CAnimGraphParamRef< int32 > m_nTeamPreviewRandom;
    // CAnimGraphParamRef< char* > m_pszWeaponState;
    // CAnimGraphParamRef< char* > m_pszWeaponType;
    // CAnimGraphParamRef< bool > m_bCT;
    char pad_00[512];
}; // size: 0x200

class __declspec(align(8)) CInventoryImageData {
public:
    InventoryNodeType_t m_nNodeType; // 0x0
    // CUtlString name;
    char pad_00[8];
    inv_image_data_t inventory_image_data; // 0x10
}; // size: 0xf8

class __declspec(align(4)) inv_image_camera_t {
public:
    // QAngle angle;
    char pad_00[12];
    float fov; // 0xc
    float znear; // 0x10
    float zfar; // 0x14
    // Vector target;
    // Vector target_nudge;
    char pad_01[24];
    float orbit_distance; // 0x30
}; // size: 0x34

class __declspec(align(4)) CFlashlightEffect {
public:
    char pad_00[16];
    bool m_bIsOn; // 0x10
    char pad_01[15];
    bool m_bMuzzleFlashEnabled; // 0x20
    float m_flMuzzleFlashBrightness; // 0x24
    // Quaternion m_quatMuzzleFlashOrientation;
    // Vector m_vecMuzzleFlashOrigin;
    char pad_02[36];
    float m_flFov; // 0x4c
    float m_flFarZ; // 0x50
    float m_flLinearAtten; // 0x54
    bool m_bCastsShadows; // 0x58
    float m_flCurrentPullBackDist; // 0x5c
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_FlashlightTexture;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_MuzzleFlashTexture;
    char pad_03[16];
    char m_textureName[64]; // 0x70
    char pad_04[560];
}; // size: 0x2e0

class __declspec(align(4)) TimedEvent {
public:
    float m_TimeBetweenEvents; // 0x0
    float m_fNextEvent; // 0x4
}; // size: 0x8

class __declspec(align(8)) inv_image_item_t {
public:
    // Vector position;
    // QAngle angle;
    // CUtlString pose_sequence;
    char pad_00[32];
}; // size: 0x20

class __declspec(align(4)) CInterpolatedValue {
public:
    float m_flStartTime; // 0x0
    float m_flEndTime; // 0x4
    float m_flStartValue; // 0x8
    float m_flEndValue; // 0xc
    int32_t m_nInterpType; // 0x10
}; // size: 0x14

class __declspec(align(4)) inv_image_light_fill_t {
public:
    // Vector color;
    // QAngle angle;
    char pad_00[24];
    float brightness; // 0x18
}; // size: 0x1c

class __declspec(align(8)) inv_image_map_t {
public:
    // CUtlString map_name;
    char pad_00[8];
    float map_rotation; // 0x8
    char pad_01[4];
}; // size: 0x10

class __declspec(align(4)) inv_image_light_barn_t {
public:
    // Vector color;
    // QAngle angle;
    char pad_00[24];
    float brightness; // 0x18
    float orbit_distance; // 0x1c
}; // size: 0x20

class __declspec(align(8)) CNmEventConsumerHudModelArmsAttributes {
public:
    char pad_00[88];
}; // size: 0x58

class __declspec(align(8)) CompositeMaterialInputLooseVariable_t {
public:
    // CUtlString m_strName;
    char pad_00[8];
    bool m_bExposeExternally; // 0x8
    // CUtlString m_strExposedFriendlyName;
    // CUtlString m_strExposedFriendlyGroupName;
    char pad_01[23];
    bool m_bExposedVariableIsFixedRange; // 0x20
    // CUtlString m_strExposedVisibleWhenTrue;
    // CUtlString m_strExposedHiddenWhenTrue;
    // CUtlString m_strExposedValueList;
    char pad_02[28];
    CompositeMaterialInputLooseVariableType_t m_nVariableType; // 0x40
    bool m_bValueBoolean; // 0x44
    int32_t m_nValueIntX; // 0x48
    int32_t m_nValueIntY; // 0x4c
    int32_t m_nValueIntZ; // 0x50
    int32_t m_nValueIntW; // 0x54
    bool m_bHasFloatBounds; // 0x58
    float m_flValueFloatX; // 0x5c
    float m_flValueFloatX_Min; // 0x60
    float m_flValueFloatX_Max; // 0x64
    float m_flValueFloatY; // 0x68
    float m_flValueFloatY_Min; // 0x6c
    float m_flValueFloatY_Max; // 0x70
    float m_flValueFloatZ; // 0x74
    float m_flValueFloatZ_Min; // 0x78
    float m_flValueFloatZ_Max; // 0x7c
    float m_flValueFloatW; // 0x80
    float m_flValueFloatW_Min; // 0x84
    float m_flValueFloatW_Max; // 0x88
    // Color m_cValueColor4;
    char pad_03[4];
    CompositeMaterialVarSystemVar_t m_nValueSystemVar; // 0x90
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_strResourceMaterial;
    // CUtlString m_strTextureContentAssetPath;
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCTextureBase > > m_strTextureRuntimeResourcePath;
    // CUtlString m_strTextureCompilationVtexTemplate;
    char pad_04[468];
    CompositeMaterialInputTextureType_t m_nTextureType; // 0x268
    // CUtlString m_strString;
    // CUtlString m_strPanoramaPanelPath;
    char pad_05[20];
    int32_t m_nPanoramaRenderRes; // 0x280
    char pad_06[4];
}; // size: 0x288

class __declspec(align(8)) CompositeMaterialAssemblyProcedure_t {
public:
    // CUtlVector< CResourceNameTyped< CWeakHandle< InfoForResourceTypeCCompositeMaterialKit > > > m_vecCompMatIncludes;
    // CUtlVector< CompositeMaterialMatchFilter_t > m_vecMatchFilters;
    // CUtlVector< CompositeMaterialInputContainer_t > m_vecCompositeInputContainers;
    // CUtlVector< CompMatPropertyMutator_t > m_vecPropertyMutators;
    char pad_00[96];
}; // size: 0x60

class __declspec(align(8)) CompositeMaterialInputContainer_t {
public:
    bool m_bEnabled; // 0x0
    CompositeMaterialInputContainerSourceType_t m_nCompositeMaterialInputContainerSourceType; // 0x4
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_strSpecificContainerMaterial;
    // CUtlString m_strAttrName;
    // CUtlString m_strAlias;
    // CUtlVector< CompositeMaterialInputLooseVariable_t > m_vecLooseVariables;
    // CUtlString m_strAttrNameForVar;
    char pad_00[272];
    bool m_bExposeExternally; // 0x118
    char pad_01[31];
}; // size: 0x138

class __declspec(align(1)) GeneratedTextureHandle_t {
public:
    // CUtlString m_strBitmapName;
    char pad_00[96];
}; // size: 0x60

class __declspec(align(1)) CAnimScriptBase {
public:
    char pad_00[8];
    bool m_bIsValid; // 0x8
    char pad_01[7];
}; // size: 0x10

class __declspec(align(1)) EmptyTestScript {
public:
    // CAnimScriptParam< float32 > m_hTest;
    char pad_00[32];
}; // size: 0x20

class __declspec(align(4)) Vector {
public:
    float x; // 0x0
    float y; // 0x4
    float z; // 0x8
}; // size: 0xc

class __declspec(align(4)) Vector4D {
public:
    float x; // 0x0
    float y; // 0x4
    float z; // 0x8
    float w; // 0xc
}; // size: 0x10

class __declspec(align(4)) Vector2D {
public:
    float x; // 0x0
    float y; // 0x4
}; // size: 0x8

class __declspec(align(4)) QAngle {
public:
    float pitch; // 0x0
    float yaw; // 0x4
    float roll; // 0x8
}; // size: 0xc

#ifdef __cplusplus
#pragma warning(pop)
#endif // __cplusplus