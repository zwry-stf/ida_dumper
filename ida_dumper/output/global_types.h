enum ThreeState_t : uint32_t {
    TRS_FALSE = 0,
    TRS_TRUE = 1,
    TRS_NONE = 2,
};

enum fieldtype_t : uint8_t {
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

enum FuseVariableAccess_t : uint8_t {
    WRITABLE = 0,
    READ_ONLY = 1,
};

enum FuseVariableType_t : uint8_t {
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

enum RenderSlotType_t : uint8_t {
    RENDER_SLOT_INVALID = 255,
    RENDER_SLOT_PER_VERTEX = 0,
    RENDER_SLOT_PER_INSTANCE = 1,
};

enum InputLayoutVariation_t : uint8_t {
    INPUT_LAYOUT_VARIATION_DEFAULT = 0,
    INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID = 1,
    INPUT_LAYOUT_VARIATION_STREAM1_INSTANCEID_MORPH_VERT_ID = 2,
    INPUT_LAYOUT_VARIATION_MAX = 3,
};

enum RenderMultisampleType_t : uint8_t {
    RENDER_MULTISAMPLE_INVALID = 255,
    RENDER_MULTISAMPLE_NONE = 0,
    RENDER_MULTISAMPLE_2X = 1,
    RENDER_MULTISAMPLE_4X = 2,
    RENDER_MULTISAMPLE_6X = 3,
    RENDER_MULTISAMPLE_8X = 4,
    RENDER_MULTISAMPLE_16X = 5,
    RENDER_MULTISAMPLE_TYPE_COUNT = 6,
};

enum RsFillMode_t : uint8_t {
    RS_FILL_SOLID = 0,
    RS_FILL_WIREFRAME = 1,
};

enum RsComparison_t : uint8_t {
    RS_CMP_NEVER = 0,
    RS_CMP_LESS = 1,
    RS_CMP_EQUAL = 2,
    RS_CMP_LESS_EQUAL = 3,
    RS_CMP_GREATER = 4,
    RS_CMP_NOT_EQUAL = 5,
    RS_CMP_GREATER_EQUAL = 6,
    RS_CMP_ALWAYS = 7,
};

enum RsCullMode_t : uint8_t {
    RS_CULL_NONE = 0,
    RS_CULL_BACK = 1,
    RS_CULL_FRONT = 2,
};

enum RenderBufferFlags_t : uint32_t {
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

enum RenderPrimitiveType_t : uint32_t {
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

enum EntityIOTargetType_t : uint32_t {
    ENTITY_IO_TARGET_INVALID = 4294967295,
    ENTITY_IO_TARGET_ENTITYNAME = 2,
    ENTITY_IO_TARGET_EHANDLE = 6,
    ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME = 7,
};

enum EntityDormancyType_t : uint32_t {
    ENTITY_NOT_DORMANT = 0,
    ENTITY_DORMANT = 1,
    ENTITY_SUSPENDED = 2,
};

enum HorizJustification_e : uint32_t {
    HORIZ_JUSTIFICATION_LEFT = 0,
    HORIZ_JUSTIFICATION_CENTER = 1,
    HORIZ_JUSTIFICATION_RIGHT = 2,
    HORIZ_JUSTIFICATION_NONE = 3,
};

enum BloomBlendMode_t : uint32_t {
    BLOOM_BLEND_ADD = 0,
    BLOOM_BLEND_SCREEN = 1,
    BLOOM_BLEND_BLUR = 2,
};

enum ViewFadeMode_t : uint32_t {
    VIEW_FADE_CONSTANT_COLOR = 0,
    VIEW_FADE_MODULATE = 1,
    VIEW_FADE_MOD2X = 2,
};

enum LayoutPositionType_e : uint32_t {
    LAYOUTPOSITIONTYPE_VIEWPORT_RELATIVE = 0,
    LAYOUTPOSITIONTYPE_FRACTIONAL = 1,
    LAYOUTPOSITIONTYPE_NONE = 2,
};

enum VertJustification_e : uint32_t {
    VERT_JUSTIFICATION_TOP = 0,
    VERT_JUSTIFICATION_CENTER = 1,
    VERT_JUSTIFICATION_BOTTOM = 2,
    VERT_JUSTIFICATION_NONE = 3,
};

enum OutOfPVSUpdates_t : uint32_t {
    OOPVSUpdates_OptOut = 0,
    OOPVSUpdates_OptIn = 1,
    OOPVSUpdates_Default = 2,
    OOPVSUpdates_Count = 3,
};

enum MoodType_t : uint32_t {
    eMoodType_Head = 0,
    eMoodType_Body = 1,
};

enum JumpCorrectionMethod : uint32_t {
    ScaleMotion = 0,
    AddCorrectionDelta = 1,
};

enum PulseDomainValueType_t : uint32_t {
    INVALID = 4294967295,
    ENTITY_NAME = 0,
    PANEL_ID = 1,
    COUNT = 2,
};

enum NPCPhysicsHullType_t : uint32_t {
    eInvalid = 0,
    eGroundCapsule = 1,
    eCenteredCapsule = 2,
    eGenericCapsule = 3,
    eGroundBox = 4,
};

enum BinaryNodeChildOption : uint32_t {
    Child1 = 0,
    Child2 = 1,
};

enum ModelConfigAttachmentType_t : uint32_t {
    MODEL_CONFIG_ATTACHMENT_INVALID = 4294967295,
    MODEL_CONFIG_ATTACHMENT_BONE_OR_ATTACHMENT = 0,
    MODEL_CONFIG_ATTACHMENT_ROOT_RELATIVE = 1,
    MODEL_CONFIG_ATTACHMENT_BONEMERGE = 2,
    MODEL_CONFIG_ATTACHMENT_COUNT = 3,
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

enum BoneMaskBlendSpace : uint32_t {
    BlendSpace_Parent = 0,
    BlendSpace_Model = 1,
    BlendSpace_Model_RotationOnly = 2,
    BlendSpace_Model_TranslationOnly = 3,
};

enum RenderMeshSlotType_t : uint8_t {
    RENDERMESH_SLOT_INVALID = 255,
    RENDERMESH_SLOT_PER_VERTEX = 0,
    RENDERMESH_SLOT_PER_INSTANCE = 1,
};

enum IkTargetType : uint32_t {
    IkTarget_Attachment = 0,
    IkTarget_Bone = 1,
    IkTarget_Parameter_ModelSpace = 2,
    IkTarget_Parameter_WorldSpace = 3,
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

enum ChoiceMethod : uint32_t {
    WeightedRandom = 0,
    WeightedRandomNoRepeat = 1,
    Iterate = 2,
    IterateRandom = 3,
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

enum NmTargetWarpRule_t : uint8_t {
    WarpXY = 0,
    WarpZ = 1,
    WarpXYZ = 2,
    RotationOnly = 3,
    FixedSection = 4,
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

enum AimMatrixBlendMode : uint32_t {
    AimMatrixBlendMode_None = 0,
    AimMatrixBlendMode_Additive = 1,
    AimMatrixBlendMode_ModelSpaceAdditive = 2,
    AimMatrixBlendMode_BoneMask = 3,
};

enum VertexAlbedoFormat_t : uint8_t {
    VERTEX_ALBEDO_NONE = 0,
    VERTEX_ALBEDO_8888 = 1,
    VERTEX_ALBEDO_565 = 2,
};

enum FacingMode : uint8_t {
    FacingMode_Invalid = 0,
    FacingMode_Manual = 1,
    FacingMode_Path = 2,
    FacingMode_LookTarget = 3,
    FacingMode_ManualPosition = 4,
};

enum VelocityMetricMode : uint8_t {
    DirectionOnly = 0,
    MagnitudeOnly = 1,
    DirectionAndMagnitude = 2,
};

enum ScriptedHeldWeaponBehavior_t : uint32_t {
    eInvalid = 4294967295,
    eHolster = 0,
    eDeploy = 1,
    eDrop = 2,
};

enum VPhysXJoint_t::Flags_t : uint32_t {
    JOINT_FLAGS_NONE = 0,
    JOINT_FLAGS_BODY1_FIXED = 1,
    JOINT_FLAGS_USE_BLOCK_SOLVER = 2,
};

enum CNmFloatComparisonNode::Comparison_t : uint8_t {
    GreaterThanEqual = 0,
    LessThanEqual = 1,
    NearEqual = 2,
    GreaterThan = 3,
    LessThan = 4,
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

enum NmGraphEventTypeCondition_t : uint8_t {
    Entry = 0,
    FullyInState = 1,
    Exit = 2,
    Timed = 3,
    Generic = 4,
    Any = 5,
};

enum FieldNetworkOption : uint32_t {
    Auto = 0,
    ForceEnable = 1,
    ForceDisable = 2,
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

enum ParticleTransformType_t : uint32_t {
    PT_TYPE_INVALID = 0,
    PT_TYPE_NAMED_VALUE = 1,
    PT_TYPE_CONTROL_POINT = 2,
    PT_TYPE_CONTROL_POINT_RANGE = 3,
    PT_TYPE_COUNT = 4,
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

enum OrientationWarpMode_t : uint32_t {
    eInvalid = 0,
    eAngle = 1,
    eWorldPosition = 2,
};

enum OrientationWarpTargetOffsetMode_t : uint32_t {
    eLiteralValue = 0,
    eParameter = 1,
    eAnimationMovementHeading = 2,
    eAnimationMovementHeadingAtEnd = 3,
};

enum HandshakeTagType_t : uint32_t {
    eInvalid = 4294967295,
    eTask = 0,
    eMovement = 1,
    eCount = 2,
};

enum SelectorTagBehavior_t : uint32_t {
    SelectorTagBehavior_OnWhileCurrent = 0,
    SelectorTagBehavior_OffWhenFinished = 1,
    SelectorTagBehavior_OffBeforeFinished = 2,
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

enum SeqPoseSetting_t : uint32_t {
    SEQ_POSE_SETTING_CONSTANT = 0,
    SEQ_POSE_SETTING_ROTATION = 1,
    SEQ_POSE_SETTING_POSITION = 2,
    SEQ_POSE_SETTING_VELOCITY = 3,
};

enum CNmTimeConditionNode::ComparisonType_t : uint8_t {
    PercentageThroughState = 0,
    PercentageThroughSyncEvent = 1,
    ElapsedTime = 2,
};

enum AnimScriptType : uint16_t {
    ANIMSCRIPT_TYPE_INVALID = 65535,
    ANIMSCRIPT_FUSE_GENERAL = 0,
    ANIMSCRIPT_FUSE_STATEMACHINE = 1,
};

enum IkEndEffectorType : uint32_t {
    IkEndEffector_Attachment = 0,
    IkEndEffector_Bone = 1,
};

enum StanceOverrideMode : uint32_t {
    Sequence = 0,
    Node = 1,
};

enum JiggleBoneSimSpace : uint32_t {
    SimSpace_Local = 0,
    SimSpace_Model = 1,
    SimSpace_World = 2,
};

enum AnimationProcessingType_t : uint32_t {
    ANIMATION_PROCESSING_SERVER_SIMULATION = 0,
    ANIMATION_PROCESSING_CLIENT_SIMULATION = 1,
    ANIMATION_PROCESSING_CLIENT_PREDICTION = 2,
    ANIMATION_PROCESSING_CLIENT_INTERPOLATION = 3,
    ANIMATION_PROCESSING_CLIENT_RENDER = 4,
    ANIMATION_PROCESSING_MAX = 5,
};

enum PulseApiFeature_t : uint32_t {
    AF_NONE = 0,
    AF_ENTITIES = 1,
    AF_PANORAMA = 2,
    AF_PARTICLES = 8,
    AF_FAKE_ENTITIES = 16,
    AF_SELECTORS_WITHOUT_REQUIREMENTS = 32,
};

enum DampingSpeedFunction : uint32_t {
    NoDamping = 0,
    Constant = 1,
    Spring = 2,
    AsymmetricSpring = 3,
};

enum FootPinningTimingSource : uint32_t {
    FootMotion = 0,
    Tag = 1,
    Parameter = 2,
};

enum NmFrameSnapEventMode_t : uint32_t {
    Floor = 0,
    Round = 1,
};

enum FootstepJumpPhase_t : uint8_t {
    Unknown = 0,
    NotJumping = 1,
    Jumping = 2,
    Landing = 4,
};

enum CNmSoundEvent::Position_t : uint32_t {
    None = 0,
    World = 1,
    EntityPos = 2,
    EntityEyePos = 3,
    EntityAttachment = 4,
};

enum FootLockSubVisualization : uint32_t {
    FOOTLOCKSUBVISUALIZATION_ReachabilityAnalysis = 0,
    FOOTLOCKSUBVISUALIZATION_IKSolve = 1,
};

enum FootstepLandedFootSoundType_t : uint32_t {
    FOOTSOUND_Left = 0,
    FOOTSOUND_Right = 1,
    FOOTSOUND_UseOverrideSound = 2,
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

enum NmFootPhase_t : uint8_t {
    LeftFootDown = 0,
    RightFootPassing = 1,
    RightFootDown = 2,
    LeftFootPassing = 3,
    None = 4,
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

enum PFNoiseModifier_t : uint32_t {
    PF_NOISE_MODIFIER_NONE = 0,
    PF_NOISE_MODIFIER_LINES = 1,
    PF_NOISE_MODIFIER_CLUMPS = 2,
    PF_NOISE_MODIFIER_RINGS = 3,
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

enum ParticleFloatRandomMode_t : uint32_t {
    PF_RANDOM_MODE_INVALID = 4294967295,
    PF_RANDOM_MODE_CONSTANT = 0,
    PF_RANDOM_MODE_VARYING = 1,
    PF_RANDOM_MODE_COUNT = 2,
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

enum IKChannelMode : uint32_t {
    TwoBone = 0,
    TwoBone_Translate = 1,
    OneBone = 2,
    OneBone_Translate = 3,
};

enum CNmVectorInfoNode::Info_t : uint8_t {
    X = 0,
    Y = 1,
    Z = 2,
    Length = 3,
    AngleHorizontal = 4,
    AngleVertical = 5,
};

enum ResetCycleOption : uint32_t {
    Beginning = 0,
    SameCycleAsSource = 1,
    InverseSourceCycle = 2,
    FixedValue = 3,
    SameTimeAsSource = 4,
};

enum ParticleFloatInputMode_t : uint32_t {
    PF_INPUT_MODE_INVALID = 4294967295,
    PF_INPUT_MODE_CLAMPED = 0,
    PF_INPUT_MODE_LOOPED = 1,
    PF_INPUT_MODE_COUNT = 2,
};

enum NmPoseBlendMode_t : uint8_t {
    Overlay = 0,
    Additive = 1,
    ModelSpace = 2,
};

enum CNmIDComparisonNode::Comparison_t : uint8_t {
    Matches = 0,
    DoesntMatch = 1,
};

enum MorphBundleType_t : uint32_t {
    MORPH_BUNDLE_TYPE_NONE = 0,
    MORPH_BUNDLE_TYPE_POSITION_SPEED = 1,
    MORPH_BUNDLE_TYPE_NORMAL_WRINKLE = 2,
    MORPH_BUNDLE_TYPE_COUNT = 3,
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

enum NmFootPhaseCondition_t : uint8_t {
    LeftFootDown = 0,
    LeftFootPassing = 1,
    LeftPhase = 4,
    RightFootDown = 2,
    RightFootPassing = 3,
    RightPhase = 5,
    None = 6,
};

enum NmRootMotionBlendMode_t : uint8_t {
    Blend = 0,
    Additive = 1,
    IgnoreSource = 2,
    IgnoreTarget = 3,
};

enum StateActionBehavior : uint32_t {
    STATETAGBEHAVIOR_ACTIVE_WHILE_CURRENT = 0,
    STATETAGBEHAVIOR_FIRE_ON_ENTER = 1,
    STATETAGBEHAVIOR_FIRE_ON_EXIT = 2,
    STATETAGBEHAVIOR_FIRE_ON_ENTER_AND_EXIT = 3,
    STATETAGBEHAVIOR_ACTIVE_WHILE_FULLY_BLENDED = 4,
};

enum BlendKeyType : uint32_t {
    BlendKey_UserValue = 0,
    BlendKey_Velocity = 1,
    BlendKey_Distance = 2,
    BlendKey_RemainingDistance = 3,
};

enum CNmCurrentSyncEventNode::InfoType_t : uint8_t {
    IndexAndPercentage = 0,
    IndexOnly = 1,
    PercentageOnly = 2,
};

enum AnimParamVectorType_t : uint32_t {
    ANIMPARAM_VECTOR_TYPE_NONE = 0,
    ANIMPARAM_VECTOR_TYPE_POSITION_WS = 1,
    ANIMPARAM_VECTOR_TYPE_POSITION_LS = 2,
    ANIMPARAM_VECTOR_TYPE_DIRECTION_WS = 3,
    ANIMPARAM_VECTOR_TYPE_DIRECTION_LS = 4,
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

enum VPhysXConstraintParams_t::EnumFlags0_t : uint32_t {
    FLAG0_SHIFT_INTERPENETRATE = 0,
    FLAG0_SHIFT_CONSTRAIN = 1,
    FLAG0_SHIFT_BREAKABLE_FORCE = 2,
    FLAG0_SHIFT_BREAKABLE_TORQUE = 3,
};

enum ChoiceBlendMethod : uint32_t {
    SingleBlendTime = 0,
    PerChoiceBlendTimes = 1,
};

enum ChoiceChangeMethod : uint32_t {
    OnReset = 0,
    OnCycleEnd = 1,
    OnResetOrCycleEnd = 2,
};

enum HandshakeTagState_t : uint8_t {
    eInactive = 0,
    eActive = 1,
    eMomentarilyInactive = 2,
};

enum PulseCursorExecResult_t : uint32_t {
    Succeeded = 0,
    Canceled = 1,
    Failed = 2,
    OngoingNotify = 3,
};

enum Blend2DMode : uint32_t {
    Blend2DMode_General = 0,
    Blend2DMode_Directional = 1,
};

enum TargetSelectorAngleMode_t : uint32_t {
    eFacingHeading = 0,
    eMoveHeading = 1,
};

enum TargetWarpCorrectionMethod : uint32_t {
    ScaleMotion = 0,
    AddCorrectionDelta = 1,
};

enum IKSolverType : uint32_t {
    IKSOLVER_Perlin = 0,
    IKSOLVER_TwoBone = 1,
    IKSOLVER_Fabrik = 2,
    IKSOLVER_DogLeg3Bone = 3,
    IKSOLVER_CCD = 4,
    IKSOLVER_COUNT = 5,
};

enum RagdollPoseControl : uint32_t {
    Absolute = 0,
};

enum LinearRootMotionBlendMode_t : uint32_t {
    LERP = 0,
    NLERP = 1,
    SLERP = 2,
};

enum CNmTimeConditionNode::Operator_t : uint8_t {
    LessThan = 0,
    LessThanEqual = 1,
    GreaterThan = 2,
    GreaterThanEqual = 3,
};

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

enum CNmRootMotionData::SamplingMode_t : uint8_t {
    Delta = 0,
    WorldSpace = 1,
};

enum PoseType_t : uint8_t {
    POSETYPE_STATIC = 0,
    POSETYPE_DYNAMIC = 1,
    POSETYPE_INVALID = 255,
};

enum CNmStateNode::TimedEvent_t::Comparison_t : uint8_t {
    LessThanEqual = 0,
    GreaterThanEqual = 1,
};

enum ModelBoneFlexComponent_t : uint32_t {
    MODEL_BONE_FLEX_INVALID = 4294967295,
    MODEL_BONE_FLEX_TX = 0,
    MODEL_BONE_FLEX_TY = 1,
    MODEL_BONE_FLEX_TZ = 2,
};

enum NmIKBlendMode_t : uint8_t {
    Effector = 0,
    Pose = 1,
};

enum TargetWarpAngleMode_t : uint32_t {
    eFacingHeading = 0,
    eMoveHeading = 1,
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

enum MorphFlexControllerRemapType_t : uint32_t {
    MORPH_FLEXCONTROLLER_REMAP_PASSTHRU = 0,
    MORPH_FLEXCONTROLLER_REMAP_2WAY = 1,
    MORPH_FLEXCONTROLLER_REMAP_NWAY = 2,
    MORPH_FLEXCONTROLLER_REMAP_EYELID = 3,
};

enum AnimParamNetworkSetting : uint32_t {
    Auto = 0,
    AlwaysNetwork = 1,
    NeverNetwork = 2,
};

enum PFNoiseType_t : uint32_t {
    PF_NOISE_TYPE_PERLIN = 0,
    PF_NOISE_TYPE_SIMPLEX = 1,
    PF_NOISE_TYPE_WORLEY = 2,
    PF_NOISE_TYPE_CURL = 3,
};

enum ParticleFloatRoundType_t : uint32_t {
    PF_ROUND_TYPE_INVALID = 4294967295,
    PF_ROUND_TYPE_NEAREST = 0,
    PF_ROUND_TYPE_FLOOR = 1,
    PF_ROUND_TYPE_CEIL = 2,
    PF_ROUND_TYPE_COUNT = 3,
};

enum CNmSyncEventIndexConditionNode::TriggerMode_t : uint8_t {
    ExactlyAtEventIndex = 0,
    GreaterThanEqualToEventIndex = 1,
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

enum IKTargetSource : uint32_t {
    IKTARGETSOURCE_Bone = 0,
    IKTARGETSOURCE_AnimgraphParameter = 1,
    IKTARGETSOURCE_COUNT = 2,
};

enum ParticleModelType_t : uint32_t {
    PM_TYPE_INVALID = 0,
    PM_TYPE_NAMED_VALUE_MODEL = 1,
    PM_TYPE_NAMED_VALUE_EHANDLE = 2,
    PM_TYPE_CONTROL_POINT = 3,
    PM_TYPE_COUNT = 4,
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

enum VPhysXBodyPart_t::VPhysXFlagEnum_t : uint32_t {
    FLAG_STATIC = 1,
    FLAG_KINEMATIC = 2,
    FLAG_JOINT = 4,
    FLAG_MASS = 8,
    FLAG_ALWAYS_DYNAMIC_ON_CLIENT = 16,
    FLAG_DISABLE_CCD = 32,
};

enum AnimNodeNetworkMode : uint32_t {
    ServerAuthoritative = 0,
    ClientSimulate = 1,
};

enum NmCachedValueMode_t : uint32_t {
    OnEntry = 0,
    OnExit = 1,
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

enum StepPhase : uint32_t {
    StepPhase_OnGround = 0,
    StepPhase_InAir = 1,
};

enum EPulseGraphExecutionHistoryFlag : uint32_t {
    NO_FLAGS = 0,
    CURSOR_ADD_TAG = 1,
    CURSOR_REMOVE_TAG = 2,
    CURSOR_RETIRED = 4,
    REQUIREMENT_PASS = 8,
    REQUIREMENT_FAIL = 16,
};

enum EDemoBoneSelectionMode : uint32_t {
    CaptureAllBones = 0,
    CaptureSelectedBones = 1,
};

enum ScriptedMoveTo_t : uint32_t {
    eWait = 0,
    eMoveWithGait = 3,
    eTeleport = 4,
    eWaitFacing = 5,
    eObsoleteBackCompat1 = 1,
    eObsoleteBackCompat2 = 2,
};

enum TargetWarpTimingMethod : uint32_t {
    ReachDestinationOnRootMotionEnd = 0,
    ReachDestinationOnWarpTagEnd = 1,
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

enum NmTransitionRuleCondition_t : uint8_t {
    AnyAllowed = 0,
    FullyAllowed = 1,
    ConditionallyAllowed = 2,
    Blocked = 3,
};

enum NmTargetWarpAlgorithm_t : uint8_t {
    Lerp = 0,
    Hermite = 1,
    HermiteFeaturePreserving = 2,
    Bezier = 3,
};

enum PFNoiseTurbulence_t : uint32_t {
    PF_NOISE_TURB_NONE = 0,
    PF_NOISE_TURB_HIGHLIGHT = 1,
    PF_NOISE_TURB_FEEDBACK = 2,
    PF_NOISE_TURB_LOOPY = 3,
    PF_NOISE_TURB_CONTRAST = 4,
    PF_NOISE_TURB_ALTERNATE = 5,
};

enum MatterialAttributeTagType_t : uint32_t {
    MATERIAL_ATTRIBUTE_TAG_VALUE = 0,
    MATERIAL_ATTRIBUTE_TAG_COLOR = 1,
};

enum EIKEndEffectorRotationFixUpMode : uint32_t {
    None = 0,
    MatchTargetOrientation = 1,
    LookAtTargetForward = 2,
    MaintainParentOrientation = 3,
    Count = 4,
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

enum CNmRootMotionOverrideNode::OverrideFlags_t : uint8_t {
    AllowMoveX = 0,
    AllowMoveY = 1,
    AllowMoveZ = 2,
    AllowFacingPitch = 3,
    ListenForEvents = 4,
};

enum VPhysXAggregateData_t::VPhysXFlagEnum_t : uint32_t {
    FLAG_IS_POLYSOUP_GEOMETRY = 1,
    FLAG_LEVEL_COLLISION = 16,
    FLAG_IGNORE_SCALE_OBSOLETE_DO_NOT_USE = 32,
};

enum CNmFloatAngleMathNode::Operation_t : uint8_t {
    ClampTo180 = 0,
    ClampTo360 = 1,
    FlipHemisphere = 2,
    FlipHemisphereNegate = 3,
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

enum IKTargetCoordinateSystem : uint32_t {
    IKTARGETCOORDINATESYSTEM_WorldSpace = 0,
    IKTARGETCOORDINATESYSTEM_ModelSpace = 1,
    IKTARGETCOORDINATESYSTEM_COUNT = 2,
};

enum PulseVariableKeysSource_t : uint32_t {
    PRIVATE = 0,
    CPP = 1,
    VMAP = 2,
    VMDL = 3,
    XML = 4,
    COUNT = 5,
};

enum OrientationWarpRootMotionSource_t : uint32_t {
    eAnimationOrProcedural = 0,
    eAnimationOnly = 1,
    eProceduralOnly = 2,
};

enum SharedMovementGait_t : uint8_t {
    eInvalid = 255,
    eSlow = 0,
    eMedium = 1,
    eFast = 2,
    eVeryFast = 3,
    eCount = 4,
};

enum ParticleFloatBiasType_t : uint32_t {
    PF_BIAS_TYPE_INVALID = 4294967295,
    PF_BIAS_TYPE_STANDARD = 0,
    PF_BIAS_TYPE_GAIN = 1,
    PF_BIAS_TYPE_EXPONENTIAL = 2,
    PF_BIAS_TYPE_COUNT = 3,
};

enum CNmParticleEvent::Type_t : uint32_t {
    Create = 0,
    Create_CFG = 1,
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

enum NmFollowBoneMode_t : uint8_t {
    RotationAndTranslation = 0,
    RotationOnly = 1,
    TranslationOnly = 2,
};

enum BinaryNodeTiming : uint32_t {
    UseChild1 = 0,
    UseChild2 = 1,
    SyncChildren = 2,
};

enum NmTransitionRule_t : uint8_t {
    AllowTransition = 0,
    ConditionallyAllowTransition = 1,
    BlockTransition = 2,
};

enum CAnimationGraphVisualizerPrimitiveType : uint32_t {
    ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Text = 0,
    ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Sphere = 1,
    ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Line = 2,
    ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Pie = 3,
    ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Axis = 4,
};

enum BoneTransformSpace_t : uint32_t {
    BoneTransformSpace_Invalid = 4294967295,
    BoneTransformSpace_Parent = 0,
    BoneTransformSpace_Model = 1,
    BoneTransformSpace_World = 2,
};

enum CNmEventRelevance_t : uint32_t {
    ClientOnly = 0,
    ServerOnly = 1,
    ClientAndServer = 2,
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

enum DynamicContinuousContactBehavior_t : uint8_t {
    DYNAMIC_CONTINUOUS_ALLOW_IF_REQUESTED_BY_OTHER_BODY = 0,
    DYNAMIC_CONTINUOUS_ALWAYS = 1,
    DYNAMIC_CONTINUOUS_NEVER = 2,
};

enum JointAxis_t : uint32_t {
    JOINT_AXIS_X = 0,
    JOINT_AXIS_Y = 1,
    JOINT_AXIS_Z = 2,
    JOINT_AXIS_COUNT = 3,
};

enum JointMotion_t : uint32_t {
    JOINT_MOTION_FREE = 0,
    JOINT_MOTION_LOCKED = 1,
    JOINT_MOTION_COUNT = 2,
};

enum SosActionSetParamSortType_t : uint32_t {
    SOS_SETPARAM_SORTTYPE_HIGHEST = 0,
    SOS_SETPARAM_SORTTYPE_LOWEST = 1,
};

enum SosGroupType_t : uint32_t {
    SOS_GROUPTYPE_DYNAMIC = 0,
    SOS_GROUPTYPE_STATIC = 1,
};

enum VMixSubgraphSwitchInterpolationType_t : uint32_t {
    SUBGRAPH_INTERPOLATION_TEMPORAL_CROSSFADE = 0,
    SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT = 1,
    SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING = 2,
};

enum SosActionLimitSortType_t : uint32_t {
    SOS_LIMIT_SORTTYPE_HIGHEST = 0,
    SOS_LIMIT_SORTTYPE_LOWEST = 1,
};

enum VMixFilterSlope_t : uint8_t {
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

enum CVSoundFormat_t : uint8_t {
    PCM16 = 0,
    PCM8 = 1,
    MP3 = 2,
    ADPCM = 3,
};

enum EMidiNote : uint8_t {
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

enum VMixChannelOperation_t : uint32_t {
    VMIX_CHAN_STEREO = 0,
    VMIX_CHAN_LEFT = 1,
    VMIX_CHAN_RIGHT = 2,
    VMIX_CHAN_SWAP = 3,
    VMIX_CHAN_MONO = 4,
    VMIX_CHAN_MID_SIDE = 5,
};

enum VMixPannerType_t : uint32_t {
    PANNER_TYPE_LINEAR = 0,
    PANNER_TYPE_EQUAL_POWER = 1,
};

enum soundlevel_t : uint32_t {
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

enum SosGroupFieldBehavior_t : uint32_t {
    kIgnore = 0,
    kBranch = 1,
    kMatch = 2,
};

enum PlayBackMode_t : uint32_t {
    Random = 0,
    RandomNoRepeats = 1,
    RandomAvoidLast = 2,
    Sequential = 3,
    RandomWeights = 4,
};

enum SosEditItemType_t : uint32_t {
    SOS_EDIT_ITEM_TYPE_SOUNDEVENTS = 0,
    SOS_EDIT_ITEM_TYPE_SOUNDEVENT = 1,
    SOS_EDIT_ITEM_TYPE_LIBRARYSTACKS = 2,
    SOS_EDIT_ITEM_TYPE_STACK = 3,
    SOS_EDIT_ITEM_TYPE_OPERATOR = 4,
    SOS_EDIT_ITEM_TYPE_FIELD = 5,
};

enum SosActionStopType_t : uint32_t {
    SOS_STOPTYPE_NONE = 0,
    SOS_STOPTYPE_TIME = 1,
    SOS_STOPTYPE_OPVAR = 2,
};

enum VMixFilterType_t : uint16_t {
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

enum VMixLFOShape_t : uint32_t {
    LFO_SHAPE_SINE = 0,
    LFO_SHAPE_SQUARE = 1,
    LFO_SHAPE_TRI = 2,
    LFO_SHAPE_SAW = 3,
    LFO_SHAPE_NOISE = 4,
};

enum EWaveform : uint8_t {
    Sine = 0,
    Square = 1,
    Saw = 2,
    Triangle = 3,
    Noise = 4,
};

enum VMixGraphCommandID_t : uint32_t {
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

enum EMode_t : uint32_t {
    Peak = 0,
    RMS = 1,
};

enum ESceneObjectVisualization : uint32_t {
    SCENEOBJECT_VIS_NONE = 0,
    SCENEOBJECT_VIS_OBJECT = 1,
    SCENEOBJECT_VIS_MATERIAL = 2,
    SCENEOBJECT_VIS_TEXTURE_SIZE = 3,
    SCENEOBJECT_VIS_LOD = 4,
    SCENEOBJECT_VIS_INSTANCING = 5,
};

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

enum AggregateInstanceStream_t : uint8_t {
    AGGREGATE_INSTANCE_STREAM_NONE = 0,
    AGGREGATE_INSTANCE_STREAM_LIGHTMAPUV_UNORM16 = 1,
    AGGREGATE_INSTANCE_STREAM_VERTEXTINT_UNORM8 = 2,
    AGGREGATE_INSTANCE_STREAM_VERTEXBLEND_UNORM8 = 4,
};

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

enum RTProxyInstanceFlags_t : uint8_t {
    RTPROXY_INSTANCE_FLAG_NONE = 0,
    RTPROXY_INSTANCE_UNIQUE_MESH = 1,
};

enum TextureRepetitionMode_t : uint32_t {
    TEXTURE_REPETITION_PARTICLE = 0,
    TEXTURE_REPETITION_PATH = 1,
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

enum ParticleOrientationSetMode_t : uint32_t {
    PARTICLE_ORIENTATION_SET_NONE = 4294967295,
    PARTICLE_ORIENTATION_SET_FROM_VELOCITY = 0,
    PARTICLE_ORIENTATION_SET_FROM_NORMAL = 1,
    PARTICLE_ORIENTATION_SET_FROM_ROTATIONS = 2,
};

enum ParticleLightTypeChoiceList_t : uint32_t {
    PARTICLE_LIGHT_TYPE_POINT = 0,
    PARTICLE_LIGHT_TYPE_SPOT = 1,
    PARTICLE_LIGHT_TYPE_FX = 2,
    PARTICLE_LIGHT_TYPE_CAPSULE = 3,
};

enum ParticleLightFogLightingMode_t : uint32_t {
    PARTICLE_LIGHT_FOG_LIGHTING_MODE_NONE = 0,
    PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC = 2,
    PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC_NOSHADOWS = 4,
};

enum ParticleOmni2LightTypeChoiceList_t : uint32_t {
    PARTICLE_OMNI2_LIGHT_TYPE_POINT = 0,
    PARTICLE_OMNI2_LIGHT_TYPE_SPHERE = 1,
};

enum SpriteCardShaderType_t : uint32_t {
    SPRITECARD_SHADER_BASE = 0,
    SPRITECARD_SHADER_CUSTOM = 1,
};

enum ParticleLiquidContents_t : uint32_t {
    PARTICLE_LIQUID_NONE = 0,
    PARTICLE_LIQUID_OIL = 1,
    PARTICLE_LIQUID_WATER = 2,
};

enum ParticleImpulseType_t : uint32_t {
    IMPULSE_TYPE_NONE = 0,
    IMPULSE_TYPE_GENERIC = 1,
    IMPULSE_TYPE_ROPE = 2,
    IMPULSE_TYPE_EXPLOSION = 4,
    IMPULSE_TYPE_EXPLOSION_UNDERWATER = 8,
    IMPULSE_TYPE_PARTICLE_SYSTEM = 16,
};

enum ClosestPointTestType_t : uint32_t {
    PARTICLE_CLOSEST_TYPE_BOX = 0,
    PARTICLE_CLOSEST_TYPE_CAPSULE = 1,
    PARTICLE_CLOSEST_TYPE_HYBRID = 2,
};

enum ParticleEndcapMode_t : uint32_t {
    PARTICLE_ENDCAP_ALWAYS_ON = 4294967295,
    PARTICLE_ENDCAP_ENDCAP_OFF = 0,
    PARTICLE_ENDCAP_ENDCAP_ON = 1,
};

enum ParticleSortingChoiceList_t : uint32_t {
    PARTICLE_SORTING_NEAREST = 0,
    PARTICLE_SORTING_CREATION_TIME = 1,
};

enum ParticleCollisionMode_t : uint32_t {
    COLLISION_MODE_PER_PARTICLE_TRACE = 3,
    COLLISION_MODE_USE_NEAREST_TRACE = 2,
    COLLISION_MODE_PER_FRAME_PLANESET = 1,
    COLLISION_MODE_INITIAL_TRACE_DOWN = 0,
    COLLISION_MODE_DISABLED = 4294967295,
};

enum ParticleOrientationChoiceList_t : uint32_t {
    PARTICLE_ORIENTATION_SCREEN_ALIGNED = 0,
    PARTICLE_ORIENTATION_SCREEN_Z_ALIGNED = 1,
    PARTICLE_ORIENTATION_WORLD_Z_ALIGNED = 2,
    PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL = 3,
    PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL = 4,
    PARTICLE_ORIENTATION_FULL_3AXIS_ROTATION = 5,
};

enum ParticleHitboxDataSelection_t : uint32_t {
    PARTICLE_HITBOX_AVERAGE_SPEED = 0,
    PARTICLE_HITBOX_COUNT = 1,
};

enum RenderModelSubModelFieldType_t : uint32_t {
    SUBMODEL_AS_BODYGROUP_SUBMODEL = 0,
    SUBMODEL_AS_MESHGROUP_INDEX = 1,
    SUBMODEL_AS_MESHGROUP_MASK = 2,
    SUBMODEL_IGNORED_USE_MODEL_DEFAULT_MESHGROUP_MASK = 3,
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

enum ParticleAlphaReferenceType_t : uint32_t {
    PARTICLE_ALPHA_REFERENCE_ALPHA_ALPHA = 0,
    PARTICLE_ALPHA_REFERENCE_OPAQUE_ALPHA = 1,
    PARTICLE_ALPHA_REFERENCE_ALPHA_OPAQUE = 2,
    PARTICLE_ALPHA_REFERENCE_OPAQUE_OPAQUE = 3,
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

enum BBoxVolumeType_t : uint32_t {
    BBOX_VOLUME = 0,
    BBOX_DIMENSIONS = 1,
    BBOX_MINS_MAXS = 2,
    BBOX_RADIUS = 3,
};

enum ParticleDetailLevel_t : uint32_t {
    PARTICLEDETAIL_LOW = 0,
    PARTICLEDETAIL_MEDIUM = 1,
    PARTICLEDETAIL_HIGH = 2,
    PARTICLEDETAIL_ULTRA = 3,
};

enum ParticleSequenceCropOverride_t : uint32_t {
    PARTICLE_SEQUENCE_CROP_OVERRIDE_DEFAULT = 4294967295,
    PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_OFF = 0,
    PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_ON = 1,
};

enum ParticleFalloffFunction_t : uint32_t {
    PARTICLE_FALLOFF_CONSTANT = 0,
    PARTICLE_FALLOFF_LINEAR = 1,
    PARTICLE_FALLOFF_EXPONENTIAL = 2,
};

enum ParticleLightUnitChoiceList_t : uint32_t {
    PARTICLE_LIGHT_UNIT_CANDELAS = 0,
    PARTICLE_LIGHT_UNIT_LUMENS = 1,
};

enum ParticleDepthFeatheringMode_t : uint32_t {
    PARTICLE_DEPTH_FEATHERING_OFF = 0,
    PARTICLE_DEPTH_FEATHERING_ON_OPTIONAL = 1,
    PARTICLE_DEPTH_FEATHERING_ON_REQUIRED = 2,
};

enum MaterialProxyType_t : uint32_t {
    MATERIAL_PROXY_STATUS_EFFECT = 0,
    MATERIAL_PROXY_TINT = 1,
};

enum ParticleLightnintBranchBehavior_t : uint32_t {
    PARTICLE_LIGHTNING_BRANCH_CURRENT_DIR = 0,
    PARTICLE_LIGHTNING_BRANCH_ENDPOINT_DIR = 1,
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

enum SnapshotIndexType_t : uint32_t {
    SNAPSHOT_INDEX_INCREMENT = 0,
    SNAPSHOT_INDEX_DIRECT = 1,
};

enum ParticleSelection_t : uint32_t {
    PARTICLE_SELECTION_FIRST = 0,
    PARTICLE_SELECTION_LAST = 1,
    PARTICLE_SELECTION_NUMBER = 2,
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

enum ParticleTraceSet_t : uint32_t {
    PARTICLE_TRACE_SET_ALL = 0,
    PARTICLE_TRACE_SET_STATIC = 1,
    PARTICLE_TRACE_SET_STATIC_AND_KEYFRAMED = 2,
    PARTICLE_TRACE_SET_DYNAMIC = 3,
};

enum ParticleOrientationType_t : uint32_t {
    PARTICLE_ORIENTATION_NONE = 0,
    PARTICLE_ORIENTATION_VELOCITY = 1,
    PARTICLE_ORIENTATION_NORMAL = 2,
    PARTICLE_ORIENTATION_ROTATION = 4,
};

enum ModelHitboxType_t : uint32_t {
    MODEL_HITBOX_TYPE_STANDARD = 0,
    MODEL_HITBOX_TYPE_RAW_BONES = 1,
    MODEL_HITBOX_TYPE_RENDERBOUNDS = 2,
    MODEL_HITBOX_TYPE_SNAPSHOT = 3,
};

enum ParticleLightBehaviorChoiceList_t : uint32_t {
    PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION = 0,
    PARTICLE_LIGHT_BEHAVIOR_ROPE = 1,
    PARTICLE_LIGHT_BEHAVIOR_TRAILS = 2,
};

enum ParticleTopology_t : uint32_t {
    PARTICLE_TOPOLOGY_POINTS = 0,
    PARTICLE_TOPOLOGY_LINES = 1,
    PARTICLE_TOPOLOGY_TRIS = 2,
    PARTICLE_TOPOLOGY_QUADS = 3,
    PARTICLE_TOPOLOGY_CUBES = 4,
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

enum AnimationType_t : uint32_t {
    ANIMATION_TYPE_FIXED_RATE = 0,
    ANIMATION_TYPE_FIT_LIFETIME = 1,
    ANIMATION_TYPE_MANUAL_FRAMES = 2,
};

enum HitboxLerpType_t : uint32_t {
    HITBOX_LERP_LIFETIME = 0,
    HITBOX_LERP_CONSTANT = 1,
};

enum ParticleRotationLockType_t : uint32_t {
    PARTICLE_ROTATION_LOCK_NONE = 0,
    PARTICLE_ROTATION_LOCK_ROTATIONS = 1,
    PARTICLE_ROTATION_LOCK_NORMAL = 2,
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

enum ParticleFogType_t : uint32_t {
    PARTICLE_FOG_GAME_DEFAULT = 0,
    PARTICLE_FOG_ENABLED = 1,
    PARTICLE_FOG_DISABLED = 2,
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

enum ParticleControlPointAxis_t : uint32_t {
    PARTICLE_CP_AXIS_X = 0,
    PARTICLE_CP_AXIS_Y = 1,
    PARTICLE_CP_AXIS_Z = 2,
    PARTICLE_CP_AXIS_NEGATIVE_X = 3,
    PARTICLE_CP_AXIS_NEGATIVE_Y = 4,
    PARTICLE_CP_AXIS_NEGATIVE_Z = 5,
};

enum ParticleHitboxBiasType_t : uint32_t {
    PARTICLE_HITBOX_BIAS_ENTITY = 0,
    PARTICLE_HITBOX_BIAS_HITBOX = 1,
};

enum ParticleDirectionNoiseType_t : uint32_t {
    PARTICLE_DIR_NOISE_PERLIN = 0,
    PARTICLE_DIR_NOISE_CURL = 1,
    PARTICLE_DIR_NOISE_WORLEY_BASIC = 2,
};

enum ParticleMassMode_t : uint32_t {
    PARTICLE_MASSMODE_RADIUS_CUBED = 0,
    PARTICLE_MASSMODE_RADIUS_SQUARED = 2,
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

enum ParticleLightingQuality_t : uint32_t {
    PARTICLE_LIGHTING_PER_PARTICLE = 0,
    PARTICLE_LIGHTING_PER_VERTEX = 1,
    PARTICLE_LIGHTING_PER_PIXEL = 4294967295,
    PARTICLE_LIGHTING_OVERRIDE_POSITION = 2,
    PARTICLE_LIGHTING_OVERRIDE_COLOR = 3,
    PARTICLE_LIGHTING_ADD_EXTRA_LIGHT = 4,
};

enum ParticleParentSetMode_t : uint32_t {
    PARTICLE_SET_PARENT_NO = 0,
    PARTICLE_SET_PARENT_IMMEDIATE = 1,
    PARTICLE_SET_PARENT_ROOT = 2,
};

enum StandardLightingAttenuationStyle_t : uint32_t {
    LIGHT_STYLE_OLD = 0,
    LIGHT_STYLE_NEW = 1,
};

enum BlurFilterType_t : uint32_t {
    BLURFILTER_GAUSSIAN = 0,
    BLURFILTER_BOX = 1,
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

enum DetailCombo_t : uint32_t {
    DETAIL_COMBO_OFF = 0,
    DETAIL_COMBO_ADD = 1,
    DETAIL_COMBO_ADD_SELF_ILLUM = 2,
    DETAIL_COMBO_MOD2X = 3,
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

enum ParticleColorBlendMode_t : uint32_t {
    PARTICLEBLEND_DEFAULT = 0,
    PARTICLEBLEND_OVERLAY = 1,
    PARTICLEBLEND_DARKEN = 2,
    PARTICLEBLEND_LIGHTEN = 3,
    PARTICLEBLEND_MULTIPLY = 4,
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

enum ParticlePostProcessPriorityGroup_t : uint32_t {
    PARTICLE_POST_PROCESS_PRIORITY_LEVEL_VOLUME = 0,
    PARTICLE_POST_PROCESS_PRIORITY_LEVEL_OVERRIDE = 1,
    PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_EFFECT = 2,
    PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_LOW = 3,
    PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_HIGH = 4,
    PARTICLE_POST_PROCESS_PRIORITY_GLOBAL_UI = 5,
};

enum InheritableBoolType_t : uint32_t {
    INHERITABLE_BOOL_INHERIT = 0,
    INHERITABLE_BOOL_FALSE = 1,
    INHERITABLE_BOOL_TRUE = 2,
};

enum PetGroundType_t : uint32_t {
    PET_GROUND_NONE = 0,
    PET_GROUND_GRID = 1,
    PET_GROUND_PLANE = 2,
};

enum ParticleFanType_t : uint32_t {
    PARTICLE_FAN_TYPE_FAN = 0,
    PARTICLE_FAN_TYPE_ROTOR_WASH = 1,
    PARTICLE_FAN_TYPE_RADIAL = 2,
};

enum ParticleEntityPos_t : uint32_t {
    PARTICLE_ABS_ORIGIN = 0,
    PARTICLE_WORLDSPACE_CENTER = 1,
    PARTICLE_EYES = 2,
};

enum ParticleReplicationMode_t : uint32_t {
    PARTICLE_REPLICATIONMODE_NONE = 0,
    PARTICLE_REPLICATIONMODE_REPLICATE_FOR_EACH_PARENT_PARTICLE = 1,
};

enum ParticleVRHandChoiceList_t : uint32_t {
    PARTICLE_VRHAND_LEFT = 0,
    PARTICLE_VRHAND_RIGHT = 1,
    PARTICLE_VRHAND_CP = 2,
    PARTICLE_VRHAND_CP_OBJECT = 3,
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

enum ParticleTraceMissBehavior_t : uint32_t {
    PARTICLE_TRACE_MISS_BEHAVIOR_NONE = 0,
    PARTICLE_TRACE_MISS_BEHAVIOR_KILL = 1,
    PARTICLE_TRACE_MISS_BEHAVIOR_TRACE_END = 2,
};

enum MissingParentInheritBehavior_t : uint32_t {
    MISSING_PARENT_DO_NOTHING = 4294967295,
    MISSING_PARENT_KILL = 0,
    MISSING_PARENT_FIND_NEW = 1,
    MISSING_PARENT_SAME_INDEX = 2,
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

enum ParticleSetMethod_t : uint32_t {
    PARTICLE_SET_REPLACE_VALUE = 0,
    PARTICLE_SET_SCALE_INITIAL_VALUE = 1,
    PARTICLE_SET_ADD_TO_INITIAL_VALUE = 2,
    PARTICLE_SET_RAMP_CURRENT_VALUE = 3,
    PARTICLE_SET_SCALE_CURRENT_VALUE = 4,
    PARTICLE_SET_ADD_TO_CURRENT_VALUE = 5,
};

enum EStyleNodeType : uint32_t {
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

enum ELayoutNodeType : uint32_t {
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

enum MoveType_t : uint8_t {
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

enum EntityAttachmentType_t : uint32_t {
    eAbsOrigin = 0,
    eCenter = 1,
    eEyes = 2,
    eAttachment = 3,
};

enum EOverrideBlockLOS_t : uint32_t {
    BLOCK_LOS_DEFAULT = 0,
    BLOCK_LOS_FORCE_FALSE = 1,
    BLOCK_LOS_FORCE_TRUE = 2,
};

enum FuncDoorSpawnPos_t : uint32_t {
    FUNC_DOOR_SPAWN_CLOSED = 0,
    FUNC_DOOR_SPAWN_OPEN = 1,
};

enum ObserverMode_t : uint32_t {
    OBS_MODE_NONE = 0,
    OBS_MODE_FIXED = 1,
    OBS_MODE_IN_EYE = 2,
    OBS_MODE_CHASE = 3,
    OBS_MODE_ROAMING = 4,
    NUM_OBSERVER_MODES = 5,
};

enum MedalRank_t : uint32_t {
    MEDAL_RANK_NONE = 0,
    MEDAL_RANK_BRONZE = 1,
    MEDAL_RANK_SILVER = 2,
    MEDAL_RANK_GOLD = 3,
    MEDAL_RANK_COUNT = 4,
};

enum CanPlaySequence_t : uint32_t {
    CANNOT_PLAY = 0,
    CAN_PLAY_NOW = 1,
    CAN_PLAY_ENQUEUED = 2,
};

enum RotatorTargetSpace_t : uint32_t {
    ROTATOR_TARGET_WORLDSPACE = 0,
    ROTATOR_TARGET_LOCALSPACE = 1,
};

enum Disposition_t : uint32_t {
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

enum ValueRemapperHapticsType_t : uint32_t {
    HaticsType_Default = 0,
    HaticsType_None = 1,
};

enum TakeDamageFlags_t : uint64_t {
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

enum WeaponSound_t : uint32_t {
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

enum EKillTypes_t : uint8_t {
    KILL_NONE = 0,
    KILL_DEFAULT = 1,
    KILL_HEADSHOT = 2,
    KILL_BLAST = 3,
    KILL_BURN = 4,
    KILL_SLASH = 5,
    KILL_SHOCK = 6,
    KILLTYPE_COUNT = 7,
};

enum ValueRemapperInputType_t : uint32_t {
    InputType_PlayerShootPosition = 0,
    InputType_PlayerShootPositionAroundAxis = 1,
};

enum GrenadeType_t : uint32_t {
    GRENADE_TYPE_EXPLOSIVE = 0,
    GRENADE_TYPE_FLASH = 1,
    GRENADE_TYPE_FIRE = 2,
    GRENADE_TYPE_DECOY = 3,
    GRENADE_TYPE_SMOKE = 4,
    GRENADE_TYPE_TOTAL = 5,
};

enum ShadowType_t : uint32_t {
    SHADOWS_NONE = 0,
    SHADOWS_SIMPLE = 1,
};

enum ModifyDamageReturn_t : uint32_t {
    CONTINUE_TO_APPLY_DAMAGE = 0,
    ABORT_DO_NOT_APPLY_DAMAGE = 1,
};

enum QuestProgress::Reason : uint32_t {
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

enum BrushSolidities_e : uint32_t {
    BRUSHSOLID_TOGGLE = 0,
    BRUSHSOLID_NEVER = 1,
    BRUSHSOLID_ALWAYS = 2,
};

enum DestructiblePartDestructionDeathBehavior_t : uint32_t {
    eDoNotKill = 0,
    eKill = 1,
    eGib = 2,
    eRemove = 3,
};

enum TRAIN_CODE : uint32_t {
    TRAIN_SAFE = 0,
    TRAIN_BLOCKING = 1,
    TRAIN_FOLLOWING = 2,
};

enum Flags_t : uint32_t {
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

enum ShakeCommand_t : uint32_t {
    SHAKE_START = 0,
    SHAKE_STOP = 1,
    SHAKE_AMPLITUDE = 2,
    SHAKE_FREQUENCY = 3,
    SHAKE_START_RUMBLEONLY = 4,
    SHAKE_START_NORUMBLE = 5,
};

enum PointWorldTextJustifyHorizontal_t : uint32_t {
    POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_LEFT = 0,
    POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_CENTER = 1,
    POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_RIGHT = 2,
};

enum PulseTraceContents_t : uint32_t {
    STATIC_LEVEL = 0,
    SOLID = 1,
};

enum EntityDistanceMode_t : uint32_t {
    eOriginToOrigin = 0,
    eCenterToCenter = 1,
    eAxisToAxis = 2,
};

enum EDestructiblePartRadiusDamageApplyType : uint32_t {
    ScaleByExplosionRadius = 0,
    PrioritizeClosestPart = 1,
};

enum WeaponGameplayAnimState : uint16_t {
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

enum eSplinePushType : uint32_t {
    k_eSplinePushAlong = 0,
    k_eSplinePushAway = 1,
    k_eSplinePushTowards = 2,
};

enum EContributionScoreFlag_t : uint8_t {
    k_EContributionScoreFlag_Default = 0,
    k_EContributionScoreFlag_Objective = 1,
    k_EContributionScoreFlag_Bullets = 2,
};

enum PointTemplateOwnerSpawnGroupType_t : uint32_t {
    INSERT_INTO_POINT_TEMPLATE_SPAWN_GROUP = 0,
    INSERT_INTO_CURRENTLY_ACTIVE_SPAWN_GROUP = 1,
    INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP = 2,
};

enum ValueRemapperOutputType_t : uint32_t {
    OutputType_AnimationCycle = 0,
    OutputType_RotationX = 1,
    OutputType_RotationY = 2,
    OutputType_RotationZ = 3,
};

enum IChoreoServices::ChoreoState_t : uint32_t {
    STATE_PRE_SCRIPT = 0,
    STATE_WAIT_FOR_SCRIPT = 1,
    STATE_WALK_TO_MARK = 2,
    STATE_SYNCHRONIZE_SCRIPT = 3,
    STATE_PLAY_SCRIPT = 4,
    STATE_PLAY_SCRIPT_POST_IDLE = 5,
    STATE_PLAY_SCRIPT_POST_IDLE_DONE = 6,
};

enum MoveCollide_t : uint8_t {
    MOVECOLLIDE_DEFAULT = 0,
    MOVECOLLIDE_FLY_BOUNCE = 1,
    MOVECOLLIDE_FLY_CUSTOM = 2,
    MOVECOLLIDE_FLY_SLIDE = 3,
    MOVECOLLIDE_COUNT = 4,
    MOVECOLLIDE_MAX_BITS = 3,
};

enum attributeprovidertypes_t : uint32_t {
    PROVIDER_GENERIC = 0,
    PROVIDER_WEAPON = 1,
};

enum PointWorldTextJustifyVertical_t : uint32_t {
    POINT_WORLD_TEXT_JUSTIFY_VERTICAL_BOTTOM = 0,
    POINT_WORLD_TEXT_JUSTIFY_VERTICAL_CENTER = 1,
    POINT_WORLD_TEXT_JUSTIFY_VERTICAL_TOP = 2,
};

enum DamageTypes_t : uint32_t {
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

enum SolidType_t : uint8_t {
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

enum EntityEffects_t : uint16_t {
    DEPRICATED_EF_NOINTERP = 8,
    EF_NOSHADOW = 16,
    EF_NODRAW = 32,
    EF_NORECEIVESHADOW = 64,
    EF_PARENT_ANIMATES = 512,
    EF_NODRAW_BUT_TRANSMIT = 1024,
    EF_MAX_BITS = 10,
};

enum navproperties_t : uint32_t {
    NAV_IGNORE = 1,
};

enum PlayerConnectedState : uint32_t {
    PlayerNeverConnected = 4294967295,
    PlayerConnected = 0,
    PlayerConnecting = 1,
    PlayerReconnecting = 2,
    PlayerDisconnecting = 3,
    PlayerDisconnected = 4,
    PlayerReserved = 5,
};

enum ChatIgnoreType_t : uint32_t {
    CHAT_IGNORE_NONE = 0,
    CHAT_IGNORE_ALL = 1,
    CHAT_IGNORE_TEAM = 2,
};

enum ChoreoLookAtMode_t : uint32_t {
    eInvalid = 4294967295,
    eChest = 0,
    eHead = 1,
    eEyesOnly = 2,
};

enum DoorState_t : uint32_t {
    DOOR_STATE_CLOSED = 0,
    DOOR_STATE_OPENING = 1,
    DOOR_STATE_OPEN = 2,
    DOOR_STATE_CLOSING = 3,
    DOOR_STATE_AJAR = 4,
};

enum LatchDirtyPermission_t : uint32_t {
    LATCH_DIRTY_DISALLOW = 0,
    LATCH_DIRTY_SERVER_CONTROLLED = 1,
    LATCH_DIRTY_CLIENT_SIMULATED = 2,
    LATCH_DIRTY_PREDICTION = 3,
    LATCH_DIRTY_FRAMESIMULATE = 4,
    LATCH_DIRTY_PARTICLE_SIMULATE = 5,
};

enum RumbleEffect_t : uint32_t {
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

enum vote_create_failed_t : uint32_t {
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

enum RenderFx_t : uint8_t {
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

enum HoverPoseFlags_t : uint8_t {
    eNone = 0,
    ePosition = 1,
    eAngles = 2,
};

enum MoveMountingAmount_t : uint32_t {
    MOVE_MOUNT_NONE = 0,
    MOVE_MOUNT_LOW = 1,
    MOVE_MOUNT_HIGH = 2,
    MOVE_MOUNT_MAXCOUNT = 3,
};

enum CRR_Response::ResponseEnum_t : uint32_t {
    MAX_RESPONSE_NAME = 192,
    MAX_RULE_NAME = 128,
};

enum NavDirType : uint32_t {
    NORTH = 0,
    EAST = 1,
    SOUTH = 2,
    WEST = 3,
    NUM_NAV_DIR_TYPE_DIRECTIONS = 4,
};

enum ValueRemapperRatchetType_t : uint32_t {
    RatchetType_Absolute = 0,
    RatchetType_EachEngage = 1,
};

enum WeaponSwitchReason_t : uint32_t {
    eDrawn = 0,
    eEquipped = 1,
    eUserInitiatedSwitchToLast = 2,
    eUserInitiatedUIKeyPress = 3,
    eUserInitiatedSwitchHands = 4,
};

enum TrackOrientationType_t : uint32_t {
    TrackOrientation_Fixed = 0,
    TrackOrientation_FacePath = 1,
    TrackOrientation_FacePathAngles = 2,
};

enum ShatterGlassStressType : uint8_t {
    SHATTERGLASS_BLUNT = 0,
    SHATTERGLASS_BALLISTIC = 1,
    SHATTERGLASS_PULSE = 2,
    SHATTERGLASS_EXPLOSIVE = 3,
};

enum CDebugOverlayCombinedTypes_t : uint32_t {
    ALL = 0,
    ANY = 1,
    COUNT = 2,
};

enum PointTemplateClientOnlyEntityBehavior_t : uint32_t {
    CREATE_FOR_CURRENTLY_CONNECTED_CLIENTS_ONLY = 0,
    CREATE_FOR_CLIENTS_WHO_CONNECT_LATER = 1,
};

enum EntitySubclassScope_t : uint32_t {
    SUBCLASS_SCOPE_NONE = 4294967295,
    SUBCLASS_SCOPE_PRECIPITATION = 0,
    SUBCLASS_SCOPE_PLAYER_WEAPONS = 1,
    SUBCLASS_SCOPE_COUNT = 2,
};

enum BeamType_t : uint32_t {
    BEAM_INVALID = 0,
    BEAM_POINTS = 1,
    BEAM_ENTPOINT = 2,
    BEAM_ENTS = 3,
    BEAM_HOSE = 4,
    BEAM_SPLINE = 5,
    BEAM_LASER = 6,
};

enum doorCheck_e : uint32_t {
    DOOR_CHECK_FORWARD = 0,
    DOOR_CHECK_BACKWARD = 1,
    DOOR_CHECK_FULL = 2,
};

enum HierarchyType_t : uint32_t {
    HIERARCHY_NONE = 0,
    HIERARCHY_BONE_MERGE = 1,
    HIERARCHY_ATTACHMENT = 2,
    HIERARCHY_ABSORIGIN = 3,
    HIERARCHY_BONE = 4,
    HIERARCHY_TYPE_COUNT = 5,
};

enum DecalFlags_t : uint32_t {
    eNone = 0,
    eCannotClear = 1,
    eDecalProjectToBackfaces = 2,
    eAll = 4294967295,
    eAllButCannotClear = 4294967294,
};

enum AmmoFlags_t : uint32_t {
    AMMO_FORCE_DROP_IF_CARRIED = 1,
    AMMO_RESERVE_STAYS_WITH_WEAPON = 2,
    AMMO_FLAG_MAX = 2,
};

enum DebugOverlayBits_t : uint64_t {
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

enum PointWorldTextReorientMode_t : uint32_t {
    POINT_WORLD_TEXT_REORIENT_NONE = 0,
    POINT_WORLD_TEXT_REORIENT_AROUND_UP = 1,
};

enum ChickenActivity : uint32_t {
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

enum HitGroup_t : uint32_t {
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

enum InputBitMask_t : uint64_t {
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

enum EntityDisolveType_t : uint32_t {
    ENTITY_DISSOLVE_INVALID = 4294967295,
    ENTITY_DISSOLVE_NORMAL = 0,
    ENTITY_DISSOLVE_ELECTRICAL = 1,
    ENTITY_DISSOLVE_ELECTRICAL_LIGHT = 2,
    ENTITY_DISSOLVE_CORE = 3,
};

enum PreviewEOMCelebration : uint32_t {
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

enum CDebugOverlayFilterType_t : uint32_t {
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

enum AmmoPosition_t : uint32_t {
    AMMO_POSITION_INVALID = 4294967295,
    AMMO_POSITION_PRIMARY = 0,
    AMMO_POSITION_SECONDARY = 1,
    AMMO_POSITION_COUNT = 2,
};

enum RelativeLocationType_t : uint8_t {
    WORLD_SPACE_POSITION = 0,
    RELATIVE_TO_ENTITY_IN_LOCAL_SPACE = 1,
    RELATIVE_TO_ENTITY_YAW_ONLY = 2,
    RELATIVE_TO_ENTITY_IN_WORLD_SPACE = 3,
};

enum WorldTextPanelVerticalAlign_t : uint32_t {
    WORLDTEXT_VERTICAL_ALIGN_TOP = 0,
    WORLDTEXT_VERTICAL_ALIGN_CENTER = 1,
    WORLDTEXT_VERTICAL_ALIGN_BOTTOM = 2,
};

enum WaterLevel_t : uint8_t {
    WL_NotInWater = 0,
    WL_Feet = 1,
    WL_Knees = 2,
    WL_Waist = 3,
    WL_Chest = 4,
    WL_FullyUnderwater = 5,
    WL_Count = 6,
};

enum ScriptedConflictResponse_t : uint32_t {
    SS_CONFLICT_ENQUEUE = 0,
    SS_CONFLICT_INTERRUPT = 1,
};

enum CSPlayerState : uint32_t {
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

enum gear_slot_t : uint32_t {
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

enum ChoreoLookAtSpeed_t : uint32_t {
    eInvalid = 4294967295,
    eSlow = 0,
    eMedium = 1,
    eFast = 2,
};

enum CSWeaponNameID : uint32_t {
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

enum ScriptedOnDeath_t : uint32_t {
    SS_ONDEATH_NOT_APPLICABLE = 4294967295,
    SS_ONDEATH_UNDEFINED = 0,
    SS_ONDEATH_RAGDOLL = 1,
    SS_ONDEATH_ANIMATED_DEATH = 2,
};

enum ShatterDamageCause : uint8_t {
    SHATTERDAMAGE_BULLET = 0,
    SHATTERDAMAGE_MELEE = 1,
    SHATTERDAMAGE_THROWN = 2,
    SHATTERDAMAGE_SCRIPT = 3,
    SHATTERDAMAGE_EXPLOSIVE = 4,
};

enum CSPlayerBlockingUseAction_t : uint32_t {
    k_CSPlayerBlockingUseAction_None = 0,
    k_CSPlayerBlockingUseAction_DefusingDefault = 1,
    k_CSPlayerBlockingUseAction_DefusingWithKit = 2,
    k_CSPlayerBlockingUseAction_HostageGrabbing = 3,
    k_CSPlayerBlockingUseAction_HostageDropping = 4,
    k_CSPlayerBlockingUseAction_MapLongUseEntity_Pickup = 5,
    k_CSPlayerBlockingUseAction_MapLongUseEntity_Place = 6,
    k_CSPlayerBlockingUseAction_MaxCount = 7,
};

enum CDebugOverlayFilterTextType_t : uint32_t {
    FILTER_TEXT_NONE = 0,
    MATCH = 1,
    HIERARCHY = 2,
    COUNT = 3,
};

enum WeaponAttackType_t : uint32_t {
    eInvalid = 4294967295,
    ePrimary = 0,
    eSecondary = 1,
    eCount = 2,
};

enum BeamClipStyle_t : uint32_t {
    kNOCLIP = 0,
    kGEOCLIP = 1,
    kMODELCLIP = 2,
    kBEAMCLIPSTYLE_NUMBITS = 2,
};

enum EInButtonState : uint32_t {
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

enum PreviewWeaponState : uint32_t {
    DROPPED = 0,
    HOLSTERED = 1,
    DEPLOYED = 2,
    PLANTED = 3,
    INSPECT = 4,
    ICON = 5,
};

enum ESceneRequestState_t : uint32_t {
    INACTIVE = 0,
    ACTIVE = 1,
};

enum BodySectionAuthority_t : uint32_t {
    eNone = 0,
    eLowerBody = 1,
    eUpperBody = 2,
    eFullBody = 3,
};

enum ExternalAnimGraphInactiveBehavior_t : uint8_t {
    eNone = 0,
    eUnbind = 1,
    eUnbindAndDelete = 2,
};

enum Hull_t : uint32_t {
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

enum ValueRemapperMomentumType_t : uint32_t {
    MomentumType_None = 0,
    MomentumType_Friction = 1,
    MomentumType_SpringTowardSnapValue = 2,
    MomentumType_SpringAwayFromSnapValue = 3,
};

enum MoveLinearAuthoredPos_t : uint32_t {
    MOVELINEAR_AUTHORED_AT_START_POSITION = 0,
    MOVELINEAR_AUTHORED_AT_OPEN_POSITION = 1,
    MOVELINEAR_AUTHORED_AT_CLOSED_POSITION = 2,
};

enum NavAttributeEnum : uint64_t {
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

enum EDestructiblePartDamagePassThroughType : uint32_t {
    Normal = 0,
    Absorb = 1,
    InvincibleAbsorb = 2,
    InvinciblePassthrough = 3,
};

enum loadout_slot_t : uint32_t {
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

enum TOGGLE_STATE : uint32_t {
    TS_AT_TOP = 0,
    TS_AT_BOTTOM = 1,
    TS_GOING_UP = 2,
    TS_GOING_DOWN = 3,
    DOOR_OPEN = 0,
    DOOR_CLOSED = 1,
    DOOR_OPENING = 2,
    DOOR_CLOSING = 3,
};

enum PerformanceMode_t : uint32_t {
    PM_NORMAL = 0,
    PM_NO_GIBS = 1,
};

enum ForcedCrouchState_t : uint32_t {
    FORCEDCROUCH_NONE = 0,
    FORCEDCROUCH_CROUCHED = 1,
    FORCEDCROUCH_UNCROUCHED = 2,
};

enum RenderMode_t : uint8_t {
    kRenderNormal = 0,
    kRenderTransAlpha = 1,
    kRenderNone = 2,
    kRenderModeCount = 3,
};

enum PulseNPCCondition_t : uint32_t {
    COND_SEE_PLAYER = 1,
    COND_LOST_PLAYER = 2,
    COND_HEAR_PLAYER = 3,
    COND_PLAYER_PUSHING = 4,
    COND_NO_PRIMARY_AMMO = 5,
};

enum EntityPlatformTypes_t : uint8_t {
    ENTITY_NOT_PLATFORM = 0,
    ENTITY_PLATFORM_PLAYER_FOLLOWS_YAW = 1,
    ENTITY_PLATFORM_PLAYER_IGNORES_YAW = 2,
};

enum ShardSolid_t : uint8_t {
    SHARD_SOLID = 0,
    SHARD_DEBRIS = 1,
};

enum PropDoorRotatingSpawnPos_t : uint32_t {
    DOOR_SPAWN_CLOSED = 0,
    DOOR_SPAWN_OPEN_FORWARD = 1,
    DOOR_SPAWN_OPEN_BACK = 2,
    DOOR_SPAWN_AJAR = 3,
};

enum TestInputOutputCombinationsEnum_t : uint32_t {
    ZERO = 0,
    ONE = 1,
    TWO = 2,
};

enum EntFinderMethod_t : uint32_t {
    ENT_FIND_METHOD_NEAREST = 0,
    ENT_FIND_METHOD_FARTHEST = 1,
    ENT_FIND_METHOD_RANDOM = 2,
};

enum NavScopeFlags_t : uint8_t {
    eGround = 1,
    eAir = 2,
    eAll = 3,
    eNone = 0,
};

enum CSWeaponType : uint32_t {
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

enum TrainVelocityType_t : uint32_t {
    TrainVelocity_Instantaneous = 0,
    TrainVelocity_LinearBlend = 1,
    TrainVelocity_EaseInEaseOut = 2,
};

enum Touch_t : uint32_t {
    touch_none = 0,
    touch_player_only = 1,
    touch_npc_only = 2,
    touch_player_or_npc = 3,
    touch_player_or_npc_or_physicsprop = 4,
};

enum IChoreoServices::ScriptState_t : uint32_t {
    SCRIPT_PLAYING = 0,
    SCRIPT_WAIT = 1,
    SCRIPT_POST_IDLE = 2,
    SCRIPT_CLEANUP = 3,
    SCRIPT_MOVE_TO_MARK = 4,
};

enum FixAngleSet_t : uint8_t {
    None = 0,
    Absolute = 1,
    Relative = 2,
};

enum GameAnimEventIndex_t : uint32_t {
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

enum BaseExplosionTypes_t : uint32_t {
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

enum EProceduralRagdollWeightIndexPropagationMethod : uint32_t {
    Bone = 0,
    BoneAndChildren = 1,
};

enum CSWeaponSilencerType : uint32_t {
    WEAPONSILENCER_NONE = 0,
    WEAPONSILENCER_DETACHABLE = 1,
    WEAPONSILENCER_INTEGRATED = 2,
};

enum filter_t : uint32_t {
    FILTER_AND = 0,
    FILTER_OR = 1,
};

enum Class_T : uint32_t {
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

enum AnimLoopMode_t : uint32_t {
    ANIM_LOOP_MODE_INVALID = 4294967295,
    ANIM_LOOP_MODE_NOT_LOOPING = 0,
    ANIM_LOOP_MODE_LOOPING = 1,
    ANIM_LOOP_MODE_USE_SEQUENCE_SETTINGS = 2,
    ANIM_LOOP_MODE_COUNT = 3,
};

enum BreakableContentsType_t : uint32_t {
    BC_DEFAULT = 0,
    BC_EMPTY = 1,
    BC_PROP_GROUP_OVERRIDE = 2,
    BC_PARTICLE_SYSTEM_OVERRIDE = 3,
};

enum NavScope_t : uint8_t {
    eGround = 0,
    eAir = 1,
    eCount = 2,
    eFirst = 0,
    eInvalid = 255,
};

enum BloodType : uint32_t {
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

enum Materials : uint32_t {
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

enum OnFrame : uint8_t {
    ONFRAME_UNKNOWN = 0,
    ONFRAME_TRUE = 1,
    ONFRAME_FALSE = 2,
};

enum CSWeaponMode : uint32_t {
    Primary_Mode = 0,
    Secondary_Mode = 1,
    WeaponMode_MAX = 2,
};

enum AnimationAlgorithm_t : uint8_t {
    eInvalid = 255,
    eNone = 0,
    eSequence = 1,
    eAnimGraph2 = 2,
    eAnimGraph2Secondary = 3,
    eAnimGraph1 = 4,
    eCount = 5,
};

enum NPCFollowFormation_t : uint32_t {
    Default = 4294967295,
    CloseCircle = 0,
    WideCircle = 1,
    MediumCircle = 5,
    Sidekick = 6,
};

enum PointOrientConstraint_t : uint32_t {
    eNone = 0,
    ePreserveUpAxis = 1,
};

enum LifeState_t : uint32_t {
    LIFE_ALIVE = 0,
    LIFE_DYING = 1,
    LIFE_DEAD = 2,
    LIFE_RESPAWNABLE = 3,
    LIFE_RESPAWNING = 4,
    NUM_LIFESTATES = 5,
};

enum SurroundingBoundsType_t : uint8_t {
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

enum ItemFlagTypes_t : uint8_t {
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

enum PointOrientGoalDirectionType_t : uint32_t {
    eAbsOrigin = 0,
    eCenter = 1,
    eHead = 2,
    eForward = 3,
    eEyesForward = 4,
};

enum BeginDeathLifeStateTransition_t : uint8_t {
    TRANSITION_TO_LIFESTATE_DYING = 0,
    TRANSITION_TO_LIFESTATE_DEAD = 1,
};

enum CSWeaponCategory : uint32_t {
    WEAPONCATEGORY_OTHER = 0,
    WEAPONCATEGORY_MELEE = 1,
    WEAPONCATEGORY_SECONDARY = 2,
    WEAPONCATEGORY_SMG = 3,
    WEAPONCATEGORY_RIFLE = 4,
    WEAPONCATEGORY_HEAVY = 5,
    WEAPONCATEGORY_COUNT = 6,
};

enum TrainOrientationType_t : uint32_t {
    TrainOrientation_Fixed = 0,
    TrainOrientation_AtPathTracks = 1,
    TrainOrientation_LinearBlend = 2,
    TrainOrientation_EaseInEaseOut = 3,
};

enum AnimGraphDebugDrawType_t : uint32_t {
    None = 0,
    WsPosition = 1,
    MsPosition = 2,
    WsDirection = 3,
    MsDirection = 4,
};

enum SoundEventStartType_t : uint32_t {
    SOUNDEVENT_START_PLAYER = 0,
    SOUNDEVENT_START_WORLD = 1,
    SOUNDEVENT_START_ENTITY = 2,
};

enum SequenceFinishNotifyState_t : uint8_t {
    eDoNotNotify = 0,
    eNotifyWhenFinished = 1,
    eNotifyTriggered = 2,
};

enum WorldTextPanelHorizontalAlign_t : uint32_t {
    WORLDTEXT_HORIZONTAL_ALIGN_LEFT = 0,
    WORLDTEXT_HORIZONTAL_ALIGN_CENTER = 1,
    WORLDTEXT_HORIZONTAL_ALIGN_RIGHT = 2,
};

enum EDestructibleParts_DestroyParameterFlags : uint32_t {
    None = 0,
    GenerateBreakpieces = 1,
    SetBodyGroupAndCollisionState = 2,
    EnableFlinches = 4,
    ForceDamageApply = 8,
    IgnoreKillEntityFlag = 16,
    IgnoreHealthCheck = 32,
    Default = 7,
};

enum WorldTextPanelOrientation_t : uint32_t {
    WORLDTEXT_ORIENTATION_DEFAULT = 0,
    WORLDTEXT_ORIENTATION_FACEUSER = 1,
    WORLDTEXT_ORIENTATION_FACEUSER_UPRIGHT = 2,
};

enum ObserverInterpState_t : uint32_t {
    OBSERVER_INTERP_NONE = 0,
    OBSERVER_INTERP_STARTING = 1,
    OBSERVER_INTERP_TRAVELING = 2,
    OBSERVER_INTERP_SETTLING = 3,
};

enum PreviewCharacterMode : uint32_t {
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

enum Explosions : uint32_t {
    expRandom = 0,
    expDirected = 1,
    expUsePrecise = 2,
};

enum StanceType_t : uint32_t {
    STANCE_CURRENT = 4294967295,
    STANCE_DEFAULT = 0,
    STANCE_CROUCHING = 1,
    STANCE_PRONE = 2,
    NUM_STANCES = 3,
};

enum C4LightEffect_t : uint32_t {
    eLightEffectNone = 0,
    eLightEffectDropped = 1,
    eLightEffectThirdPersonHeld = 2,
};

enum SubclassVDataChangeType_t : uint32_t {
    SUBCLASS_VDATA_CREATED = 0,
    SUBCLASS_VDATA_SUBCLASS_CHANGED = 1,
    SUBCLASS_VDATA_RELOADED = 2,
};

enum TimelineCompression_t : uint32_t {
    TIMELINE_COMPRESSION_SUM = 0,
    TIMELINE_COMPRESSION_COUNT_PER_INTERVAL = 1,
    TIMELINE_COMPRESSION_AVERAGE = 2,
    TIMELINE_COMPRESSION_AVERAGE_BLEND = 3,
    TIMELINE_COMPRESSION_TOTAL = 4,
};

enum LessonPanelLayoutFileTypes_t : uint32_t {
    LAYOUT_HAND_DEFAULT = 0,
    LAYOUT_WORLD_DEFAULT = 1,
    LAYOUT_CUSTOM = 2,
};

enum SceneOnPlayerDeath_t : uint32_t {
    SCENE_ONPLAYERDEATH_DO_NOTHING = 0,
    SCENE_ONPLAYERDEATH_CANCEL = 1,
};

enum PulseCollisionGroup_t : uint32_t {
    DEFAULT = 0,
};

enum PropDoorRotatingOpenDirection_e : uint32_t {
    DOOR_ROTATING_OPEN_BOTH_WAYS = 0,
    DOOR_ROTATING_OPEN_FORWARD = 1,
    DOOR_ROTATING_OPEN_BACKWARD = 2,
};

enum CompMatPropertyMutatorConditionType_t : uint32_t {
    COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0,
    COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 1,
    COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 2,
};

enum CompositeMaterialMatchFilterType_t : uint32_t {
    MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0,
    MATCH_FILTER_MATERIAL_SHADER = 1,
    MATCH_FILTER_MATERIAL_NAME_SUBSTR = 2,
    MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 3,
    MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 4,
    MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 5,
};

enum CompositeMaterialVarSystemVar_t : uint32_t {
    COMPMATSYSVAR_COMPOSITETIME = 0,
    COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 1,
};

enum CompMatPropertyMutatorType_t : uint32_t {
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

enum CompositeMaterialInputContainerSourceType_t : uint32_t {
    CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0,
    CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 1,
    CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 2,
    CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 3,
    CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 4,
    CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 5,
};

enum InventoryNodeType_t : uint32_t {
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

enum CompositeMaterialInputTextureType_t : uint32_t {
    INPUT_TEXTURE_TYPE_DEFAULT = 0,
    INPUT_TEXTURE_TYPE_NORMALMAP = 1,
    INPUT_TEXTURE_TYPE_COLOR = 2,
    INPUT_TEXTURE_TYPE_MASKS = 3,
    INPUT_TEXTURE_TYPE_ROUGHNESS = 4,
    INPUT_TEXTURE_TYPE_PEARLESCENCE_MASK = 5,
    INPUT_TEXTURE_TYPE_AO = 6,
    INPUT_TEXTURE_TYPE_POSITION = 7,
};

enum CompositeMaterialInputLooseVariableType_t : uint32_t {
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


class CExampleSchemaVData_Monomorphic {
public:
    int32_t m_nExample1;
    int32_t m_nExample2;
};

class ResourceId_t {
public:
    uint64_t m_Value;
};

class CExampleSchemaVData_PolymorphicDerivedB {
public:
    char pad_00[16];
    int32_t m_nDerivedB;
    char pad_01[4];
};

class CExampleSchemaVData_PolymorphicBase {
public:
    char pad_00[8];
    int32_t m_nBase;
    char pad_01[4];
};

class CExampleSchemaVData_PolymorphicDerivedA {
public:
    char pad_00[16];
    int32_t m_nDerivedA;
    char pad_01[4];
};

class CSchemaSystemInternalRegistration {
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
};

class InfoForResourceTypeCResourceManifestInternal {
public:
    char pad_00[1];
};

class InfoForResourceTypeCDOTAPatchNotesList {
public:
    char pad_00[1];
};

class InfoForResourceTypeCEntityLump {
public:
    char pad_00[1];
};

class ManifestTestResource_t {
public:
    // CUtlString m_name;
    // CStrongHandle< InfoForResourceTypeManifestTestResource_t > m_child;
    char pad_00[16];
};

class InfoForResourceTypeCSequenceGroupData {
public:
    char pad_00[1];
};

class InfoForResourceTypeIParticleSystemDefinition {
public:
    char pad_00[1];
};

class FuseVariableIndex_t {
public:
    uint16_t m_Value;
};

class InfoForResourceTypeCTextureBase {
public:
    char pad_00[1];
};

class InfoForResourceTypeCDOTANovelsList {
public:
    char pad_00[1];
};

class InfoForResourceTypeCModel {
public:
    char pad_00[1];
};

class InfoForResourceTypeCVDataResource {
public:
    char pad_00[1];
};

class FunctionInfo_t {
public:
    // CUtlString m_name;
    // CUtlStringToken m_nameToken;
    char pad_00[20];
    int32_t m_nParamCount;
    // FuseFunctionIndex_t m_nIndex;
    char pad_01[2];
    bool m_bIsPure;
    char pad_02[5];
};

class InfoForResourceTypeIPulseGraphDef {
public:
    char pad_00[1];
};

class InfoForResourceTypeCPanoramaDynamicImages {
public:
    char pad_00[1];
};

class InfoForResourceTypeIVectorGraphic {
public:
    char pad_00[1];
};

class InfoForResourceTypeIMaterial2 {
public:
    char pad_00[1];
};

class InfoForResourceTypeCAnimData {
public:
    char pad_00[1];
};

class InfoForResourceTypeCVMixListResource {
public:
    char pad_00[1];
};

class InfoForResourceTypeCCompositeMaterialKit {
public:
    char pad_00[1];
};

class CFuseProgram {
public:
    // CUtlVector< uint8 > m_programBuffer;
    // CUtlVector< FuseVariableIndex_t > m_variablesRead;
    // CUtlVector< FuseVariableIndex_t > m_variablesWritten;
    char pad_00[72];
    int32_t m_nMaxTempVarsUsed;
    char pad_01[4];
};

class InfoForResourceTypeCSmartProp {
public:
    char pad_00[1];
};

class InfoForResourceTypeCNmGraphDefinition {
public:
    char pad_00[1];
};

class InfoForResourceTypeCCSGOEconItem {
public:
    char pad_00[1];
};

class InfoForResourceTypeCSurfaceGraph {
public:
    char pad_00[1];
};

class InfoForResourceTypeCWorldNode {
public:
    char pad_00[1];
};

class InfoForResourceTypeCPanoramaStyle {
public:
    char pad_00[1];
};

class InfoForResourceTypeCVoiceContainerBase {
public:
    char pad_00[1];
};

class InfoForResourceTypeCVSoundEventScriptList {
public:
    char pad_00[1];
};

class InfoForResourceTypeCAnimationGroup {
public:
    char pad_00[1];
};

class InfoForResourceTypeCTestResourceData {
public:
    char pad_00[1];
};

class InfoForResourceTypeCNmSkeleton {
public:
    char pad_00[1];
};

class InfoForResourceTypeCChoreoSceneResource {
public:
    char pad_00[1];
};

class InfoForResourceTypeCTypeScriptResource {
public:
    char pad_00[1];
};

class InfoForResourceTypeCPanoramaLayout {
public:
    char pad_00[1];
};

class FourQuaternions {
public:
    // fltx4 x;
    // fltx4 y;
    // fltx4 z;
    // fltx4 w;
    char pad_00[64];
};

class InfoForResourceTypeIParticleSnapshot {
public:
    char pad_00[1];
};

class VariableInfo_t {
public:
    // CUtlString m_name;
    // CUtlStringToken m_nameToken;
    char pad_00[12];
    FuseVariableIndex_t m_nIndex;
    uint8_t m_nNumComponents;
    FuseVariableType_t m_eVarType;
    FuseVariableAccess_t m_eAccess;
    char pad_01[7];
};

class InfoForResourceTypeCPostProcessingResource {
public:
    char pad_00[1];
};

class AABB_t {
public:
    // Vector m_vMinBounds;
    // Vector m_vMaxBounds;
    char pad_00[24];
};

class InfoForResourceTypeProceduralTestResource_t {
public:
    char pad_00[1];
};

class InfoForResourceTypeWorld_t {
public:
    char pad_00[1];
};

class InfoForResourceTypeCNmClip {
public:
    char pad_00[1];
};

class InfoForResourceTypeCPhysAggregateData {
public:
    char pad_00[1];
};

class InfoForResourceTypeCVoxelVisibility {
public:
    char pad_00[1];
};

class InfoForResourceTypeCRenderMesh {
public:
    char pad_00[1];
};

class CFuseSymbolTable {
public:
    // CUtlVector< ConstantInfo_t > m_constants;
    // CUtlVector< VariableInfo_t > m_variables;
    // CUtlVector< FunctionInfo_t > m_functions;
    // CUtlHashtable< CUtlStringToken, int32 > m_constantMap;
    // CUtlHashtable< CUtlStringToken, int32 > m_variableMap;
    // CUtlHashtable< CUtlStringToken, int32 > m_functionMap;
    char pad_00[176];
};

class InfoForResourceTypeCJavaScriptResource {
public:
    char pad_00[1];
};

class InfoForResourceTypeIAnimGraphModelBinding {
public:
    char pad_00[1];
};

class InfoForResourceTypeCGcExportableExternalData {
public:
    char pad_00[1];
};

class FuseFunctionIndex_t {
public:
    uint16_t m_Value;
};

class ConstantInfo_t {
public:
    // CUtlString m_name;
    // CUtlStringToken m_nameToken;
    char pad_00[12];
    float m_flValue;
};

class InfoForResourceTypeManifestTestResource_t {
public:
    char pad_00[1];
};

class InfoForResourceTypeCVPhysXSurfacePropertiesList {
public:
    char pad_00[1];
};

class PackedAABB_t {
public:
    uint32_t m_nPackedMin;
    uint32_t m_nPackedMax;
};

class InfoForResourceTypeCVSoundStackScriptList {
public:
    char pad_00[1];
};

class InfoForResourceTypeCMorphSetData {
public:
    char pad_00[1];
};

class InfoForResourceTypeCDotaItemDefinitionResource {
public:
    char pad_00[1];
};

class InfoForResourceTypeCResponseRulesList {
public:
    char pad_00[1];
};

class InfoForResourceTypeCNmIKRig {
public:
    char pad_00[1];
};

class RenderInputLayoutField_t {
public:
    char m_pSemanticName[32];
    int8_t m_nSemanticIndex;
    char pad_00[6];
    int16_t m_nOffset;
    int8_t m_nSlot;
    RenderSlotType_t m_nSlotType;
    char m_szShaderSemantic[32];
};

class VsInputSignature_t {
public:
    // CUtlVector< VsInputSignatureElement_t > m_elems;
    // CUtlVector< VsInputSignatureElement_t > m_depth_elems;
    char pad_00[48];
};

class RsStencilStateDesc_t {
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
    uint8_t m_nStencilReadMask;
    uint8_t m_nStencilWriteMask;
};

class RsRasterizerStateDesc_t {
public:
    RsFillMode_t m_nFillMode;
    RsCullMode_t m_nCullMode;
    bool m_bDepthClipEnable;
    bool m_bMultisampleEnable;
    int32_t m_nDepthBias;
    float m_flDepthBiasClamp;
    float m_flSlopeScaledDepthBias;
};

class VsInputSignatureElement_t {
public:
    char m_pName[64];
    char m_pSemantic[64];
    char m_pD3DSemanticName[64];
    int32_t m_nD3DSemanticIndex;
};

class RsBlendStateDesc_t {
public:
    uint32_t m_srcBlendBits;
    uint32_t m_destBlendBits;
    uint32_t m_srcBlendAlphaBits;
    uint32_t m_destBlendAlphaBits;
    uint32_t m_renderTargetWriteMaskBits;
    // bitfield:30 m_blendOpBits;
    // bitfield:1 m_bAlphaToCoverageEnable;
    // bitfield:1 m_bIndependentBlendEnable;
    char pad_00[4];
    uint32_t m_blendOpAlphaBits;
    uint8_t m_blendEnableBits;
    uint8_t m_srgbWriteEnableBits;
    char pad_01[2];
};

class SheetSequenceIntegerId_t {
public:
    uint32_t m_Value;
};

class RsDepthStencilStateDesc_t {
public:
    // bitfield:1 m_bDepthTestEnable;
    // bitfield:1 m_bDepthWriteEnable;
    char pad_00[1];
    RsComparison_t m_depthFunc;
    RsStencilStateDesc_t m_stencilState;
};

class EventServerPollNetworking_t {
public:
    char pad_00[48];
};

class EventServerEndSimulate_t {
public:
    bool m_bLastTick;
};

class EventClientProcessInput_t {
public:
    // EngineLoopState_t m_LoopState;
    char pad_00[40];
    float m_flRealTime;
    float m_flTickInterval;
    // float64 m_flTickStartTime;
    char pad_01[8];
};

class EventServerBeginAsyncPostTickWork_t {
public:
    bool m_bIsOncePerFrameAsyncWorkPhase;
};

class EventClientPollNetworking_t {
public:
    int32_t m_nTickCount;
};

class EngineLoopState_t {
public:
    char pad_00[24];
    int32_t m_nPlatWindowWidth;
    int32_t m_nPlatWindowHeight;
    int32_t m_nRenderWidth;
    int32_t m_nRenderHeight;
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

class CEmptyEntityInstance {
public:
    char pad_00[1];
};

class EventServerProcessNetworking_t {
public:
    char pad_00[48];
};

class EventClientAdvanceNonRenderedFrame_t {
public:
    char pad_00[1];
};

class EventSimulate_t {
public:
    EngineLoopState_t m_LoopState;
    bool m_bFirstTick;
    bool m_bLastTick;
    char pad_00[6];
};

class EntOutput_t {
public:
    char pad_00[16];
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

class EventServerAdvanceTick_t {
public:
    char pad_00[64];
};

class EventClientFrameSimulate_t {
public:
    EngineLoopState_t m_LoopState;
    float m_flRealTime;
    float m_flFrameTime;
    bool m_bScheduleSendTickPacket;
    char pad_00[7];
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

class EventModInitialized_t {
public:
    char pad_00[1];
};

class CVariantDefaultAllocator {
public:
    char pad_00[1];
};

class EventClientPostAdvanceTick_t {
public:
    char pad_00[64];
};

class EventSplitScreenStateChanged_t {
public:
    char pad_00[1];
};

class EventAdvanceTick_t {
public:
    char pad_00[48];
    int32_t m_nCurrentTick;
    int32_t m_nCurrentTickThisFrame;
    int32_t m_nTotalTicksThisFrame;
    int32_t m_nTotalTicks;
};

class EventClientPreOutputParallelWithServer_t {
public:
    char pad_00[72];
};

class CEntityAttributeTable {
public:
    // CUtlOrderedMap< CUtlStringToken, Attribute_t > m_Attributes;
    // CUtlOrderedMap< CUtlStringToken, CUtlString > m_Names;
    char pad_00[80];
};

class EventClientProcessNetworking_t {
public:
    int32_t m_nTickCount;
};

class ChangeAccessorFieldPathIndex_t {
public:
    int32_t m_Value;
};

class EventClientPauseSimulate_t {
public:
    char pad_00[48];
};

class EventClientPreSimulate_t {
public:
    char pad_00[48];
};

class EventPostDataUpdate_t {
public:
    int32_t m_nCount;
    char pad_00[12];
};

class EventProfileStorageAvailable_t {
public:
    // CSplitScreenSlot m_nSplitScreenSlot;
    char pad_00[4];
};

class EventServerPostAdvanceTick_t {
public:
    char pad_00[64];
    bool m_bLastTickBeforeClientUpdate;
    char pad_01[7];
};

class EventAppShutdown_t {
public:
    int32_t m_nDummy0;
};

class EventFrameBoundary_t {
public:
    float m_flFrameTime;
};

class EventClientProcessGameInput_t {
public:
    EngineLoopState_t m_LoopState;
    float m_flRealTime;
    float m_flFrameTime;
};

class EventPreDataUpdate_t {
public:
    int32_t m_nCount;
    char pad_00[12];
};

class EventClientPollInput_t {
public:
    EngineLoopState_t m_LoopState;
    float m_flRealTime;
    char pad_00[4];
};

class GameTick_t {
public:
    int32_t m_Value;
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

class EventClientSimulate_t {
public:
    char pad_00[48];
};

class CNetworkVarChainer {
public:
    char pad_00[32];
    ChangeAccessorFieldPathIndex_t m_PathIndex;
    char pad_01[4];
};

class EntInput_t {
public:
    char pad_00[48];
};

class EventClientAdvanceTick_t {
public:
    char pad_00[64];
};

class EventServerEndAsyncPostTickWork_t {
public:
    char pad_00[1];
};

class EventServerBeginSimulate_t {
public:
    char pad_00[48];
};

class GameTime_t {
public:
    float m_Value;
};

class CEntityComponentHelper {
public:
    char pad_00[8];
    uint32_t m_flags;
    EntComponentInfo_t* m_pInfo;
    int32_t m_nPriority;
    CEntityComponentHelper* m_pNext;
};

class EventServerPostSimulate_t {
public:
    char pad_00[48];
    bool m_bLastTickBeforeClientUpdate;
    char pad_01[7];
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

class EventClientSceneSystemThreadStateChange_t {
public:
    bool m_bThreadsActive;
};

class CEntityIOOutput {
public:
    char pad_00[24];
};

class EventPostAdvanceTick_t {
public:
    char pad_00[48];
    int32_t m_nCurrentTick;
    int32_t m_nCurrentTickThisFrame;
    int32_t m_nTotalTicksThisFrame;
    int32_t m_nTotalTicks;
};

class EventSimpleLoopFrameUpdate_t {
public:
    EngineLoopState_t m_LoopState;
    float m_flRealTime;
    float m_flFrameTime;
};

class EventClientPostSimulate_t {
public:
    char pad_00[48];
};

class MaterialParamTexture_t {
public:
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_pValue;
    char pad_00[16];
};

class MaterialParamFloat_t {
public:
    char pad_00[8];
    float m_flValue;
    char pad_01[4];
};

class PostProcessingBloomParameters_t {
public:
    BloomBlendMode_t m_blendMode;
    float m_flBloomStrength;
    float m_flScreenBloomStrength;
    float m_flBlurBloomStrength;
    float m_flBloomThreshold;
    float m_flBloomThresholdWidth;
    float m_flSkyboxBloomStrength;
    float m_flBloomStartValue;
    float m_flComputeBloomStrength;
    float m_flComputeBloomThreshold;
    float m_flComputeBloomRadius;
    float m_flComputeBloomEffectsScale;
    float m_flComputeBloomLensDirtStrength;
    float m_flComputeBloomLensDirtBlackLevel;
    float m_flBlurWeight[5];
    // Vector[5] m_vBlurTint;
    char pad_00[60];
};

class MaterialResourceData_t {
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
};

class MaterialParamBuffer_t {
public:
    // CUtlBinaryBlock m_value;
    char pad_00[24];
};

class PostProcessingFogScatteringParameters_t {
public:
    float m_fRadius;
    float m_fScale;
    float m_fCubemapScale;
    float m_fVolumetricScale;
    float m_fGradientScale;
};

class PostProcessingTonemapParameters_t {
public:
    float m_flExposureBias;
    float m_flShoulderStrength;
    float m_flLinearStrength;
    float m_flLinearAngle;
    float m_flToeStrength;
    float m_flToeNum;
    float m_flToeDenom;
    float m_flWhitePoint;
    float m_flLuminanceSource;
    float m_flExposureBiasShadows;
    float m_flExposureBiasHighlights;
    float m_flMinShadowLum;
    float m_flMaxShadowLum;
    float m_flMinHighlightLum;
    float m_flMaxHighlightLum;
};

class PostProcessingLocalContrastParameters_t {
public:
    float m_flLocalContrastStrength;
    float m_flLocalContrastEdgeStrength;
    float m_flLocalContrastVignetteStart;
    float m_flLocalContrastVignetteEnd;
    float m_flLocalContrastVignetteBlur;
};

class PostProcessingVignetteParameters_t {
public:
    float m_flVignetteStrength;
    // Vector2D m_vCenter;
    char pad_00[8];
    float m_flRadius;
    float m_flRoundness;
    float m_flFeather;
    // Vector m_vColorTint;
    char pad_01[12];
};

class MaterialParamInt_t {
public:
    char pad_00[8];
    int32_t m_nValue;
    char pad_01[4];
};

class PostProcessingResource_t {
public:
    bool m_bHasTonemapParams;
    PostProcessingTonemapParameters_t m_toneMapParams;
    bool m_bHasBloomParams;
    PostProcessingBloomParameters_t m_bloomParams;
    bool m_bHasVignetteParams;
    PostProcessingVignetteParameters_t m_vignetteParams;
    bool m_bHasLocalContrastParams;
    PostProcessingLocalContrastParameters_t m_localConstrastParams;
    int32_t m_nColorCorrectionVolumeDim;
    // CUtlBinaryBlock m_colorCorrectionVolumeData;
    char pad_00[16];
    bool m_bHasColorCorrection;
    bool m_bHasFogScatteringParams;
    PostProcessingFogScatteringParameters_t m_fogScatteringParams;
};

class MaterialParamString_t {
public:
    // CUtlString m_value;
    char pad_00[16];
};

class MaterialParamVector_t {
public:
    // Vector4D m_value;
    char pad_00[24];
};

class MaterialParam_t {
public:
    // CUtlString m_name;
    char pad_00[8];
};

class CParticleProperty {
public:
    char pad_00[40];
};

class CAnimTagManagerUpdater {
public:
    // CUtlVector< CSmartPtr< CAnimTagBase > > m_tags;
    char pad_00[120];
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

class CMoodVData {
public:
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName;
    char pad_00[224];
    MoodType_t m_nMoodType;
    // CUtlVector< MoodAnimationLayer_t > m_animationLayers;
    char pad_01[28];
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

class CNmBodyGroupEvent {
public:
    // CUtlString m_groupName;
    char pad_00[40];
    int32_t m_nGroupValue;
    char pad_01[4];
};

class CNmControlParameterIDNode::CDefinition {
public:
    char pad_00[16];
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

class CParticleCollectionRendererVecInput {
public:
    char pad_00[1720];
};

class CNmSyncTrack::Event_t {
public:
    // CGlobalSymbol m_ID;
    // NmPercent_t m_startTime;
    // NmPercent_t m_duration;
    char pad_00[16];
};

class CNmVectorNegateNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    char pad_01[6];
};

class CPulse_InstructionDebug {
public:
    // PulseDocNodeID_t m_nFlowNodeID;
    // PulseDocNodeID_t m_nValueNodeID;
    // CGlobalSymbol m_SequencePointName;
    char pad_00[16];
};

class CMotionGraphGroup {
public:
    // CMotionSearchDB m_searchDB;
    // CUtlVector< CSmartPtr< CMotionGraph > > m_motionGraphs;
    // CUtlVector< CMotionGraphConfig > m_motionGraphConfigs;
    // CUtlVector< int32 > m_sampleToConfig;
    // AnimScriptHandle m_hIsActiveScript;
    char pad_00[264];
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

class CAnimMorphDifference {
public:
    // CBufferString m_name;
    char pad_00[16];
};

class AttachmentHandle_t {
public:
    uint8_t m_Value;
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

class CNmParameterizedBlendNode::BlendRange_t {
public:
    int16_t m_nInputIdx0;
    int16_t m_nInputIdx1;
    // Range_t m_parameterValueRange;
    char pad_00[8];
};

class CBinaryUpdateNode {
public:
    // CAnimUpdateNodeRef m_pChild1;
    // CAnimUpdateNodeRef m_pChild2;
    char pad_00[128];
    BinaryNodeTiming m_timingBehavior;
    float m_flTimingBlend;
    bool m_bResetChild1;
    bool m_bResetChild2;
    char pad_01[6];
};

class IKSolverSettings_t {
public:
    IKSolverType m_SolverType;
    int32_t m_nNumIterations;
    EIKEndEffectorRotationFixUpMode m_EndEffectorRotationFixUpMode;
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

class CCPPScriptComponentUpdater {
public:
    // CUtlVector< CGlobalSymbol > m_scriptsToRun;
    char pad_00[96];
};

class PulseRuntimeStateOffset_t {
public:
    uint16_t m_Value;
};

class CFollowTargetUpdateNode {
public:
    // FollowTargetOpFixedSettings_t m_opFixedData;
    // CAnimParamHandle m_hParameterPosition;
    // CAnimParamHandle m_hParameterOrientation;
    char pad_00[144];
};

class CNmVirtualParameterBoolNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx;
    char pad_01[6];
};

class CTargetWarpUpdateNode {
public:
    char pad_00[116];
    TargetWarpAngleMode_t m_eAngleMode;
    // CAnimParamHandle m_hTargetPositionParameter;
    // CAnimParamHandle m_hTargetUpVectorParameter;
    // CAnimParamHandle m_hTargetFacePositionParameter;
    // CAnimParamHandle m_hMoveHeadingParameter;
    // CAnimParamHandle m_hDesiredMoveHeadingParameter;
    char pad_01[12];
    TargetWarpCorrectionMethod m_eCorrectionMethod;
    TargetWarpTimingMethod m_eTargetWarpTimingMethod;
    bool m_bTargetFacePositionIsWorldSpace;
    bool m_bTargetPositionIsWorldSpace;
    bool m_bOnlyWarpWhenTagIsFound;
    bool m_bWarpOrientationDuringTranslation;
    bool m_bWarpAroundCenter;
    float m_flMaxAngle;
};

class CAnimSequenceParams {
public:
    float m_flFadeInTime;
    float m_flFadeOutTime;
};

class CPulseRuntimeMethodArg {
public:
    // CKV3MemberNameWithStorage m_Name;
    // CUtlString m_Description;
    // CPulseValueFullType m_Type;
    char pad_00[128];
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

class CSeqAutoLayer {
public:
    int16_t m_nLocalReference;
    int16_t m_nLocalPose;
    // CSeqAutoLayerFlag m_flags;
    char pad_00[8];
    float m_start;
    float m_peak;
    float m_tail;
    float m_end;
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

class CNmFootEvent {
public:
    char pad_00[32];
    NmFootPhase_t m_phase;
    char pad_01[7];
};

class CNmFootEventConditionNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx;
    NmFootPhaseCondition_t m_phaseCondition;
    // CNmBitFlags m_eventConditionRules;
    char pad_01[5];
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

class CPathAnimMotorUpdater {
public:
    char pad_00[40];
};

class CBoneConstraintBase {
public:
    char pad_00[32];
};

class CRagdollUpdateNode {
public:
    char pad_00[112];
    int32_t m_nWeightListIndex;
    RagdollPoseControl m_poseControlMethod;
};

class CAnimScriptComponentUpdater {
public:
    // AnimScriptHandle m_hScript;
    char pad_00[56];
};

class AimMatrixOpFixedSettings_t {
public:
    // CAnimAttachment m_attachment;
    // CAnimInputDamping m_damping;
    // CPoseHandle[10] m_poseCacheHandles;
    char pad_00[192];
    AimMatrixBlendMode m_eBlendMode;
    float m_flMaxYawAngle;
    float m_flMaxPitchAngle;
    int32_t m_nSequenceMaxFrame;
    int32_t m_nBoneMaskIndex;
    bool m_bTargetIsPosition;
    bool m_bUseBiasAndClamp;
    float m_flBiasAndClampYawOffset;
    float m_flBiasAndClampPitchOffset;
    // CBlendCurve m_biasAndClampBlendCurve;
    char pad_01[16];
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
    // CAnimInputDamping m_turnDamping;
    char pad_01[28];
    AnimValueSource m_facingTarget;
    // CAnimParamHandle m_hParam;
    char pad_02[4];
    float m_flTurnToFaceOffset;
    bool m_bTurnToFace;
    char pad_03[3];
};

class CTaskHandshakeAnimTag {
public:
    char pad_00[88];
};

class PulseRuntimeChunkIndex_t {
public:
    int32_t m_Value;
};

class VPhysXBodyPart_t {
public:
    uint32_t m_nFlags;
    float m_flMass;
    // VPhysics2ShapeDef_t m_rnShape;
    char pad_00[120];
    uint16_t m_nCollisionAttributeIndex;
    uint16_t m_nReserved;
    float m_flInertiaScale;
    float m_flLinearDamping;
    float m_flAngularDamping;
    float m_flLinearDrag;
    float m_flAngularDrag;
    bool m_bOverrideMassCenter;
    // Vector m_vMassCenterOverride;
    char pad_01[15];
};

class IParticleCollection {
public:
    char pad_00[16];
};

class CTwoBoneIKUpdateNode {
public:
    // TwoBoneIKSettings_t m_opFixedData;
    char pad_00[480];
};

class SkeletonBoneBounds_t {
public:
    // Vector m_vecCenter;
    // Vector m_vecSize;
    char pad_00[24];
};

class CNmControlParameterTargetNode::CDefinition {
public:
    char pad_00[16];
};

class CNmCurrentSyncEventNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx;
    CNmCurrentSyncEventNode::InfoType_t m_infoType;
    char pad_01[5];
};

class CMotionNodeBlend1D {
public:
    // CUtlVector< MotionBlendItem > m_blendItems;
    char pad_00[64];
    int32_t m_nParamIndex;
    char pad_01[4];
};

class CMotionSearchDB {
public:
    // CMotionSearchNode m_rootNode;
    // CProductQuantizer m_residualQuantizer;
    // CUtlVector< MotionDBIndex > m_codeIndices;
    char pad_00[184];
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

class CNmAdditiveBlendTask {
public:
    char pad_00[224];
};

class CModelConfigElement_SetRenderColor {
public:
    // Color m_Color;
    char pad_00[80];
};

class IKTargetSettings_t {
public:
    IKTargetSource m_TargetSource;
    // IKBoneNameAndIndex_t m_Bone;
    // AnimParamID m_AnimgraphParameterNamePosition;
    // AnimParamID m_AnimgraphParameterNameOrientation;
    char pad_00[28];
    IKTargetCoordinateSystem m_TargetCoordSystem;
    char pad_01[4];
};

class CRangeFloat {
public:
    float m_pValue[2];
};

class CFootStepTriggerUpdateNode {
public:
    // CUtlVector< FootStepTrigger > m_triggers;
    char pad_00[140];
    float m_flTolerance;
};

class ParamSpan_t {
public:
    // CUtlVector< ParamSpanSample_t > m_samples;
    // CAnimParamHandle m_hParam;
    char pad_00[26];
    AnimParamType_t m_eParamType;
    float m_flStartCycle;
    float m_flEndCycle;
    char pad_01[4];
};

class CNmGraphDefinition::ReferencedGraphSlot_t {
public:
    int16_t m_nNodeIdx;
    int16_t m_dataSlotIdx;
};

class CDirectionalBlendUpdateNode {
public:
    // HSequence[8] m_hSequences;
    // CAnimInputDamping m_damping;
    char pad_00[152];
    AnimValueSource m_blendValueSource;
    // CAnimParamHandle m_paramIndex;
    char pad_01[4];
    float m_playbackSpeed;
    float m_duration;
    bool m_bLoop;
    bool m_bLockBlendOnReset;
    char pad_02[6];
};

class PulseRuntimeCallInfoIndex_t {
public:
    int32_t m_Value;
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

class CNmVirtualParameterIDNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx;
    char pad_01[6];
};

class AnimationDecodeDebugDump_t {
public:
    AnimationProcessingType_t m_processingType;
    // CUtlVector< AnimationDecodeDebugDumpElement_t > m_elems;
    char pad_00[28];
};

class ModelAnimGraph2Ref_t {
public:
    // CUtlString m_sIdentifier;
    // CStrongHandle< InfoForResourceTypeCNmGraphDefinition > m_hGraph;
    char pad_00[16];
};

class CNmBoneMaskNode::CDefinition {
public:
    // CGlobalSymbol m_boneMaskID;
    char pad_00[24];
};

class AnimParamID {
public:
    uint32_t m_id;
};

class RnCapsuleDesc_t {
public:
    // RnCapsule_t m_Capsule;
    char pad_00[56];
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

class CNmZeroPoseNode::CDefinition {
public:
    char pad_00[16];
};

class CNmModelSpaceBlendTask {
public:
    char pad_00[224];
};

class CBodyGroupAnimTag {
public:
    char pad_00[88];
    int32_t m_nPriority;
    // CUtlVector< CBodyGroupSetting > m_bodyGroupSettings;
    char pad_01[28];
};

class CNmStateMachineNode::CDefinition {
public:
    // CUtlLeanVectorFixedGrowable< CNmStateMachineNode::StateDefinition_t, 5 > m_stateDefinitions;
    char pad_00[304];
    int16_t m_nDefaultStateIndex;
    char pad_01[6];
};

class CMotionNode {
public:
    // CUtlString m_name;
    // AnimNodeID m_id;
    char pad_00[40];
};

class CRagdollAnimTag {
public:
    // CGlobalSymbol m_profileName;
    char pad_00[96];
};

class CBoolAnimParameter {
public:
    char pad_00[128];
    bool m_bDefaultValue;
    char pad_01[7];
};

class CStringAnimTag {
public:
    char pad_00[80];
};

class CNmConstFloatNode::CDefinition {
public:
    char pad_00[16];
    float m_flValue;
    char pad_01[4];
};

class CEditableMotionGraph {
public:
    char pad_00[88];
};

class CNmIDComparisonNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    CNmIDComparisonNode::Comparison_t m_comparison;
    // CUtlLeanVectorFixedGrowable< CGlobalSymbol, 4 > m_comparisionIDs;
    char pad_01[45];
};

class CFootTrajectories {
public:
    // CUtlVector< CFootTrajectory > m_trajectories;
    char pad_00[24];
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

class CAnimUpdateSharedData {
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
};

class CNmCachedPoseWriteTask {
public:
    char pad_00[96];
};

class TwoBoneIKSettings_t {
public:
    IkEndEffectorType m_endEffectorType;
    CAnimAttachment m_endEffectorAttachment;
    IkTargetType m_targetType;
    CAnimAttachment m_targetAttachment;
    int32_t m_targetBoneIndex;
    // CAnimParamHandle m_hPositionParam;
    // CAnimParamHandle m_hRotationParam;
    char pad_00[4];
    bool m_bAlwaysUseFallbackHinge;
    // VectorAligned m_vLsFallbackHingeAxis;
    char pad_01[20];
    int32_t m_nFixedBoneIndex;
    int32_t m_nMiddleBoneIndex;
    int32_t m_nEndBoneIndex;
    bool m_bMatchTargetOrientation;
    bool m_bConstrainTwist;
    float m_flMaxTwist;
    char pad_02[12];
};

class CNmIDSelectorNode::CDefinition {
public:
    // CUtlVectorFixedGrowable< int16, 5 > m_conditionNodeIndices;
    // CUtlVectorFixedGrowable< CGlobalSymbol, 5 > m_values;
    // CGlobalSymbol m_defaultValue;
    char pad_00[128];
};

class CNmEntityAttributeFloatEvent {
public:
    // CPiecewiseCurve m_FloatValue;
    char pad_00[120];
};

class SolveIKChainPoseOpFixedSettings_t {
public:
    // CUtlVector< ChainToSolveData_t > m_ChainsToSolveData;
    char pad_00[24];
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
    // ParticleAttributeIndex_t m_nScalarAttribute;
    // ParticleAttributeIndex_t m_nVectorAttribute;
    char pad_02[8];
    int32_t m_nVectorComponent;
    bool m_bReverseOrder;
    float m_flRandomMin;
    float m_flRandomMax;
    bool m_bHasRandomSignFlip;
    int32_t m_nRandomSeed;
    ParticleFloatRandomMode_t m_nRandomMode;
    // CUtlString m_strSnapshotSubset;
    char pad_03[16];
    float m_flLOD0;
    float m_flLOD1;
    float m_flLOD2;
    float m_flLOD3;
    // ParticleAttributeIndex_t m_nNoiseInputVectorAttribute;
    char pad_04[4];
    float m_flNoiseOutputMin;
    float m_flNoiseOutputMax;
    float m_flNoiseScale;
    // Vector m_vecNoiseOffsetRate;
    char pad_05[12];
    float m_flNoiseOffset;
    int32_t m_nNoiseOctaves;
    PFNoiseTurbulence_t m_nNoiseTurbulence;
    PFNoiseType_t m_nNoiseType;
    PFNoiseModifier_t m_nNoiseModifier;
    float m_flNoiseTurbulenceScale;
    float m_flNoiseTurbulenceMix;
    float m_flNoiseImgPreviewScale;
    bool m_bNoiseImgPreviewLive;
    char pad_06[8];
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
    char pad_07[68];
};

class CPulse_Constant {
public:
    // CPulseValueFullType m_Type;
    // KeyValues3 m_Value;
    char pad_00[48];
};

class CLeafUpdateNode {
public:
    char pad_00[88];
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
    // CAnimParamHandle m_hBlendParameter;
    char pad_01[4];
};

class CSeqCmdSeqDesc {
public:
    // CBufferString m_sName;
    // CSeqSeqDescFlag m_flags;
    // CSeqTransition m_transition;
    char pad_00[36];
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

class CNmOrNode::CDefinition {
public:
    // CUtlLeanVectorFixedGrowable< int16, 4 > m_conditionNodeIndices;
    char pad_00[32];
};

class CSolveIKChainUpdateNode {
public:
    // CUtlVector< CSolveIKTargetHandle_t > m_targetHandles;
    char pad_00[136];
    SolveIKChainPoseOpFixedSettings_t m_opFixedData;
    char pad_01[8];
};

class CNmFootstepEventIDNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx;
    // CNmBitFlags m_eventConditionRules;
    char pad_01[6];
};

class CPoseHandle {
public:
    uint16_t m_nIndex;
    PoseType_t m_eType;
    char pad_00[1];
};

class CNmFloatRemapNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    // CNmFloatRemapNode::RemapRange_t m_inputRange;
    // CNmFloatRemapNode::RemapRange_t m_outputRange;
    char pad_01[22];
};

class PulseGraphInstanceID_t {
public:
    uint32_t m_Value;
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

class JiggleBoneSettingsList_t {
public:
    // CUtlVector< JiggleBoneSettings_t > m_boneSettings;
    char pad_00[24];
};

class CAnimMotorUpdaterBase {
public:
    // CUtlString m_name;
    char pad_00[24];
    bool m_bDefault;
    char pad_01[7];
};

class CNmLayerBlendNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nBaseNodeIdx;
    bool m_bOnlySampleBaseRootMotion;
    // CUtlLeanVectorFixedGrowable< CNmLayerBlendNode::LayerDefinition_t, 3 > m_layerDefinition;
    char pad_01[53];
};

class CMoverUpdateNode {
public:
    // CAnimInputDamping m_damping;
    char pad_00[144];
    AnimValueSource m_facingTarget;
    // CAnimParamHandle m_hMoveVecParam;
    // CAnimParamHandle m_hMoveHeadingParam;
    // CAnimParamHandle m_hTurnToFaceParam;
    char pad_01[8];
    float m_flTurnToFaceOffset;
    float m_flTurnToFaceLimit;
    bool m_bAdditive;
    bool m_bApplyMovement;
    bool m_bOrientMovement;
    bool m_bApplyRotation;
    bool m_bLimitOnly;
    char pad_02[7];
};

class COrientConstraint {
public:
    char pad_00[96];
};

class CNmTargetValueNode::CDefinition {
public:
    char pad_00[16];
};

class CStateUpdateData {
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

class CNmFloatComparisonNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    int16_t m_nComparandValueNodeIdx;
    CNmFloatComparisonNode::Comparison_t m_comparison;
    float m_flEpsilon;
    float m_flComparisonValue;
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

class CNmFollowBoneTask {
public:
    char pad_00[120];
};

class ParamSpanSample_t {
public:
    // CAnimVariant m_value;
    char pad_00[20];
    float m_flCycle;
};

class TraceSettings_t {
public:
    float m_flTraceHeight;
    float m_flTraceRadius;
};

class CCurrentRotationVelocityMetricEvaluator {
public:
    char pad_00[80];
};

class CPointConstraint {
public:
    char pad_00[96];
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

class NmFloatCurveCompressionSettings_t {
public:
    // NmCompressionSettings_t::QuantizationRange_t m_range;
    char pad_00[8];
    bool m_bIsStatic;
    char pad_01[3];
};

class CAnimationGraphVisualizerPie {
public:
    // VectorAligned m_vWsCenter;
    // VectorAligned m_vWsStart;
    // VectorAligned m_vWsEnd;
    // Color m_Color;
    char pad_00[128];
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

class CNmRootMotionOverrideNode::CDefinition {
public:
    char pad_00[24];
    int16_t m_desiredMovingVelocityNodeIdx;
    int16_t m_desiredFacingDirectionNodeIdx;
    int16_t m_linearVelocityLimitNodeIdx;
    int16_t m_angularVelocityLimitNodeIdx;
    float m_maxLinearVelocity;
    float m_maxAngularVelocityRadians;
    // CNmBitFlags m_overrideFlags;
    char pad_01[8];
};

class CAnimDesc {
public:
    // CBufferString m_name;
    // CAnimDesc_Flag m_flags;
    char pad_00[24];
    float fps;
    // CAnimEncodedFrames m_Data;
    // CUtlVector< CAnimMovement > m_movementArray;
    // CTransform m_xInitialOffset;
    // CUtlVector< CAnimEventDefinition > m_eventArray;
    // CUtlVector< CAnimActivity > m_activityArray;
    // CUtlVector< CAnimLocalHierarchy > m_hierarchyArray;
    char pad_01[348];
    float framestalltime;
    // Vector m_vecRootMin;
    // Vector m_vecRootMax;
    // CUtlVector< Vector > m_vecBoneWorldMin;
    // CUtlVector< Vector > m_vecBoneWorldMax;
    char pad_02[76];
    CAnimSequenceParams m_sequenceParams;
};

class CNmExternalPoseNode::CDefinition {
public:
    char pad_00[16];
    bool m_bShouldSampleRootMotion;
    char pad_01[7];
};

class PulseRuntimeCellIndex_t {
public:
    int32_t m_Value;
};

class CNmFloatClampNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    // Range_t m_clampRange;
    char pad_01[14];
};

class CAnimParamHandleMap {
public:
    // CUtlHashtable< uint16, int16 > m_list;
    char pad_00[32];
};

class CSeqIKLock {
public:
    float m_flPosWeight;
    float m_flAngleWeight;
    int16_t m_nLocalBone;
    bool m_bBonesOrientedAlongPositiveX;
    char pad_00[1];
};

class CRenderSkeleton {
public:
    // CUtlVector< RenderSkeletonBone_t > m_bones;
    // CUtlVector< int32 > m_boneParents;
    char pad_00[72];
    int32_t m_nBoneWeightCount;
    char pad_01[4];
};

class CPlayerInputAnimMotorUpdater {
public:
    // CUtlVector< float32 > m_sampleTimes;
    char pad_00[60];
    float m_flSpringConstant;
    float m_flAnticipationDistance;
    // CAnimParamHandle m_hAnticipationPosParam;
    // CAnimParamHandle m_hAnticipationHeadingParam;
    char pad_01[4];
    bool m_bUseAcceleration;
    char pad_02[7];
};

class CStateActionUpdater {
public:
    // CSmartPtr< CAnimActionUpdater > m_pAction;
    char pad_00[8];
    StateActionBehavior m_eBehavior;
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

class MotionBlendItem {
public:
    // CSmartPtr< CMotionNode > m_pChild;
    char pad_00[8];
    float m_flKeyValue;
    char pad_01[4];
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

class CBoneConstraintPoseSpaceBone {
public:
    // CUtlVector< CBoneConstraintPoseSpaceBone::Input_t > m_inputList;
    char pad_00[136];
};

class CAnimGraphModelBinding {
public:
    // CUtlString m_modelName;
    // CSmartPtr< CAnimUpdateSharedData > m_pSharedData;
    char pad_00[40];
};

class CAnimGraphSettingsManager {
public:
    // CUtlVector< CSmartPtr< CAnimGraphSettingsGroup > > m_settingsGroups;
    char pad_00[48];
};

class LookAtOpFixedSettings_t {
public:
    CAnimAttachment m_attachment;
    // CAnimInputDamping m_damping;
    // CUtlVector< LookAtBone_t > m_bones;
    char pad_00[48];
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

class CStaticPoseCache {
public:
    // CUtlVector< CCachedPose > m_poses;
    char pad_00[40];
    int32_t m_nBoneCount;
    int32_t m_nMorphCount;
};

class CNmGraphVariationUserData {
public:
    char pad_00[8];
};

class CWarpSectionAnimTagBase {
public:
    char pad_00[80];
};

class CNmFloatValueNode::CDefinition {
public:
    char pad_00[16];
};

class CPulse_RegisterInfo {
public:
    // PulseRuntimeRegisterIndex_t m_nReg;
    // CPulseValueFullType m_Type;
    // CKV3MemberNameWithStorage m_OriginName;
    char pad_00[88];
    int32_t m_nWrittenByInstruction;
    int32_t m_nLastReadByInstruction;
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

class CNmTargetPointNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    bool m_bIsWorldSpaceTarget;
    char pad_01[5];
};

class CCycleControlClipUpdateNode {
public:
    // CUtlVector< TagSpan_t > m_tags;
    // HSequence m_hSequence;
    char pad_00[128];
    float m_duration;
    AnimValueSource m_valueSource;
    // CAnimParamHandle m_paramIndex;
    char pad_01[2];
    bool m_bLockWhenWaning;
    char pad_02[5];
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

class CVPhysXSurfacePropertiesList {
public:
    // CUtlVector< CPhysSurfaceProperties* > m_surfacePropertiesList;
    char pad_00[24];
};

class CNmSpeedScaleNode::CDefinition {
public:
    char pad_00[32];
};

class CTiltTwistConstraint {
public:
    char pad_00[96];
    int32_t m_nTargetAxis;
    int32_t m_nSlaveAxis;
    char pad_01[40];
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

class RnHullDesc_t {
public:
    // RnHull_t m_Hull;
    char pad_00[272];
};

class CBoneConstraintRbf {
public:
    // CUtlVector< std::pair< CUtlString, uint32 > > m_inputBones;
    // CUtlVector< std::pair< CUtlString, uint32 > > m_outputBones;
    char pad_00[200];
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

class CFlexRule {
public:
    int32_t m_nFlex;
    // CUtlVector< CFlexOp > m_FlexOps;
    char pad_00[28];
};

class CNmIDEvent {
public:
    // CGlobalSymbol m_ID;
    // CGlobalSymbol m_secondaryID;
    char pad_00[48];
};

class CDirectPlaybackUpdateNode {
public:
    char pad_00[116];
    bool m_bFinishEarly;
    bool m_bResetOnFinish;
    // CUtlVector< CDirectPlaybackTagData > m_allTags;
    char pad_01[26];
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

class CParticleCollectionFloatInput {
public:
    char pad_00[368];
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

class PulseDocNodeID_t {
public:
    int32_t m_Value;
};

class CTwistConstraint {
public:
    char pad_00[96];
    bool m_bInverse;
    // Quaternion m_qParentBindRotation;
    // Quaternion m_qChildBindRotation;
    char pad_01[47];
};

class CAnimationGraphVisualizerAxis {
public:
    // CTransform m_xWsTransform;
    char pad_00[96];
    float m_flAxisSize;
    char pad_01[12];
};

class CNmFloatCurveNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    // CPiecewiseCurve m_curve;
    char pad_01[70];
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

class PulseRuntimeConstantIndex_t {
public:
    int16_t m_Value;
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

class CRenderMesh {
public:
    // CUtlLeanVectorFixedGrowable< CSceneObjectData, 1 > m_sceneObjects;
    // CUtlLeanVector< CBaseConstraint* > m_constraints;
    char pad_00[200];
    CRenderSkeleton m_skeleton;
    char pad_01[188];
    bool m_bUseUV2ForCharting;
    bool m_bEmbeddedMapMesh;
    // DynamicMeshDeformParams_t m_meshDeformParams;
    char pad_02[48];
    CRenderGroom* m_pGroomData;
};

class CFlexDesc {
public:
    // CUtlString m_szFacs;
    char pad_00[8];
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

class CMotionNodeSequence {
public:
    // CUtlVector< TagSpan_t > m_tags;
    // HSequence m_hSequence;
    char pad_00[68];
    float m_flPlaybackSpeed;
};

class CNmFloatRangeComparisonNode::CDefinition {
public:
    // Range_t m_range;
    char pad_00[24];
    int16_t m_nInputValueNodeIdx;
    bool m_bIsInclusiveCheck;
    char pad_01[5];
};

class SkeletonDemoDb_t {
public:
    // CUtlVector< SkeletonAnimCapture_t* > m_AnimCaptures;
    // CUtlVector< SkeletonAnimCapture_t::Camera_t > m_CameraTrack;
    char pad_00[48];
    float m_flRecordingTime;
    char pad_01[4];
};

class CFlexController {
public:
    // CUtlString m_szName;
    // CUtlString m_szType;
    char pad_00[16];
    float min;
    float max;
};

class CSeqS1SeqDesc {
public:
    // CBufferString m_sName;
    // CSeqSeqDescFlag m_flags;
    // CSeqMultiFetch m_fetch;
    char pad_00[144];
    int32_t m_nLocalWeightlist;
    // CUtlVector< CSeqAutoLayer > m_autoLayerArray;
    // CUtlVector< CSeqIKLock > m_IKLockArray;
    // CSeqTransition m_transition;
    // KeyValues3 m_SequenceKeys;
    // CBufferString m_LegacyKeyValueText;
    // CUtlVector< CAnimActivity > m_activityArray;
    // CUtlVector< CFootMotion > m_footMotion;
    char pad_01[140];
};

class CNmReferencePoseNode::CDefinition {
public:
    char pad_00[16];
};

class CMotionMatchingUpdateNode {
public:
    // CMotionDataSet m_dataSet;
    // CUtlVector< CSmartPtr< CMotionMetricEvaluator > > m_metrics;
    // CUtlVector< float32 > m_weights;
    char pad_00[224];
    bool m_bSearchEveryTick;
    float m_flSearchInterval;
    bool m_bSearchWhenClipEnds;
    bool m_bSearchWhenGoalChanges;
    // CBlendCurve m_blendCurve;
    char pad_01[8];
    float m_flSampleRate;
    float m_flBlendTime;
    bool m_bLockClipWhenWaning;
    float m_flSelectionThreshold;
    float m_flReselectionTimeWindow;
    bool m_bEnableRotationCorrection;
    bool m_bGoalAssist;
    float m_flGoalAssistDistance;
    float m_flGoalAssistTolerance;
    // CAnimInputDamping m_distanceScale_Damping;
    char pad_02[28];
    float m_flDistanceScale_OuterRadius;
    float m_flDistanceScale_InnerRadius;
    float m_flDistanceScale_MaxScale;
    float m_flDistanceScale_MinScale;
    bool m_bEnableDistanceScaling;
    char pad_03[7];
};

class CFootTrajectory {
public:
    // Vector m_vOffset;
    char pad_00[20];
    float m_flRotationOffset;
    float m_flProgression;
    char pad_01[4];
};

class CAnimationGraphVisualizerText {
public:
    // VectorAligned m_vWsPosition;
    // Color m_Color;
    // CUtlString m_Text;
    char pad_00[96];
};

class NmSyncTrackTimeRange_t {
public:
    // NmSyncTrackTime_t m_startTime;
    // NmSyncTrackTime_t m_endTime;
    char pad_00[16];
};

class CBindPoseUpdateNode {
public:
    char pad_00[96];
};

class CAnimationGraphVisualizerPrimitiveBase {
public:
    char pad_00[8];
    CAnimationGraphVisualizerPrimitiveType m_Type;
    // AnimNodeID[11] m_OwningAnimNodePaths;
    char pad_01[44];
    int32_t m_nOwningAnimNodePathCount;
    char pad_02[4];
};

class CNmValueNode::CDefinition {
public:
    char pad_00[16];
};

class CNmSpeedScaleBaseNode::CDefinition {
public:
    char pad_00[24];
    int16_t m_nInputValueNodeIdx;
    float m_flDefaultInputValue;
};

class CNmOverlayBlendTask {
public:
    char pad_00[224];
};

class CToggleComponentActionUpdater {
public:
    // AnimComponentID m_componentID;
    char pad_00[28];
    bool m_bSetEnabled;
    char pad_01[3];
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
    // CNmSyncTrack m_syncTrack;
    // CNmRootMotionData m_rootMotion;
    char pad_01[496];
    bool m_bIsAdditive;
    // CUtlVector< CNmClip::ModelSpaceSamplingChainLink_t > m_modelSpaceSamplingChain;
    // CUtlVector< int32 > m_modelSpaceBoneSamplingIndices;
    char pad_02[63];
};

class NmSyncTrackTime_t {
public:
    int32_t m_nEventIdx;
    // NmPercent_t m_percentageThrough;
    char pad_00[4];
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

class NmBoneMaskSetDefinition_t {
public:
    // CGlobalSymbol m_ID;
    // CNmBoneWeightList m_primaryWeightList;
    // CUtlLeanVector< CNmBoneWeightList > m_secondaryWeightLists;
    char pad_00[296];
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

class CSeqMultiFetch {
public:
    // CSeqMultiFetchFlag m_flags;
    // CUtlVector< int16 > m_localReferenceArray;
    char pad_00[32];
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

class CBoneConstraintPoseSpaceBone::Input_t {
public:
    // Vector m_inputValue;
    // CUtlVector< CTransform > m_outputTransformList;
    char pad_00[40];
};

class CMovementHandshakeAnimTag {
public:
    char pad_00[88];
};

class PulseRuntimeBlackboardReferenceIndex_t {
public:
    int16_t m_Value;
};

class CTransitionUpdateData {
public:
    uint8_t m_srcStateIndex;
    uint8_t m_destStateIndex;
    // bitfield:7 m_nHandshakeMaskToDisableFirst;
    // bitfield:1 m_bDisabled;
    char pad_00[1];
};

class CNmDurationScaleNode::CDefinition {
public:
    char pad_00[32];
};

class CAnimUserDifference {
public:
    // CBufferString m_name;
    char pad_00[16];
    int32_t m_nType;
    char pad_01[4];
};

class CNmClip::ModelSpaceSamplingChainLink_t {
public:
    int32_t m_nBoneIdx;
    int32_t m_nParentBoneIdx;
    int32_t m_nParentChainLinkIdx;
};

class CAnimationGraphVisualizerSphere {
public:
    // VectorAligned m_vWsPosition;
    char pad_00[80];
    float m_flRadius;
    // Color m_Color;
    char pad_01[12];
};

class CNmGraphNode::CDefinition {
public:
    char pad_00[8];
    int16_t m_nNodeIdx;
    char pad_01[6];
};

class RnSoftbodyCapsule_t {
public:
    // Vector[2] m_vCenter;
    char pad_00[24];
    float m_flRadius;
    uint16_t m_nParticle[2];
};

class CBlendCurve {
public:
    float m_flControlPoint1;
    float m_flControlPoint2;
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

class CClothSettingsAnimTag {
public:
    char pad_00[88];
    float m_flStiffness;
    float m_flEaseIn;
    float m_flEaseOut;
    // CUtlString m_nVertexSet;
    char pad_01[12];
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

class CNmAndNode::CDefinition {
public:
    // CUtlLeanVectorFixedGrowable< int16, 4 > m_conditionNodeIndices;
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

class CMeshletDescriptor {
public:
    PackedAABB_t m_PackedAABB;
    // CDrawCullingData m_CullingData;
    char pad_00[4];
    uint32_t m_nVertexOffset;
    uint32_t m_nTriangleOffset;
    uint8_t m_nVertexCount;
    uint8_t m_nTriangleCount;
    char pad_01[2];
};

class CNmNotNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    char pad_01[6];
};

class CNmEntityAttributeIntEvent {
public:
    char pad_00[56];
    int32_t m_nIntValue;
    char pad_01[4];
};

class CNmParameterizedBlendNode::Parameterization_t {
public:
    // CUtlLeanVectorFixedGrowable< CNmParameterizedBlendNode::BlendRange_t, 5 > m_blendRanges;
    // Range_t m_parameterRange;
    char pad_00[80];
};

class CParticleCollectionRendererFloatInput {
public:
    char pad_00[368];
};

class CRenderBufferBinding {
public:
    uint64_t m_hBuffer;
    char pad_00[8];
    uint32_t m_nBindOffsetBytes;
    char pad_01[12];
};

class CBonePositionMetricEvaluator {
public:
    char pad_00[80];
    int32_t m_nBoneIndex;
    char pad_01[4];
};

class CPulse_DomainValue {
public:
    PulseDomainValueType_t m_nType;
    // CGlobalSymbolCaseSensitive m_Value;
    // CPulseValueFullType m_RequiredRuntimeType;
    char pad_00[44];
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

class CNmFixedWeightBoneMaskNode::CDefinition {
public:
    char pad_00[16];
    float m_flBoneWeight;
    char pad_01[4];
};

class CSetParameterActionUpdater {
public:
    // CAnimParamHandle m_hParam;
    // CAnimVariant m_value;
    char pad_00[48];
};

class CAnimUpdateNodeBase {
public:
    // CAnimNodePath m_nodePath;
    char pad_00[72];
    AnimNodeNetworkMode m_networkMode;
    // CUtlString m_name;
    char pad_01[12];
};

class CNmSkeleton::SecondarySkeleton_t {
public:
    // CGlobalSymbol m_attachToBoneID;
    // CStrongHandle< InfoForResourceTypeCNmSkeleton > m_skeleton;
    char pad_00[16];
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

class CMotionMetricEvaluator {
public:
    // CUtlVector< float32 > m_means;
    // CUtlVector< float32 > m_standardDeviations;
    char pad_00[72];
    float m_flWeight;
    int32_t m_nDimensionStartIndex;
};

class CVirtualAnimParameter {
public:
    // CUtlString m_expressionString;
    char pad_00[120];
    AnimParamType_t m_eParamType;
    char pad_01[7];
};

class CFootCycleDefinition {
public:
    // Vector m_vStancePositionMS;
    // Vector m_vMidpointPositionMS;
    char pad_00[24];
    float m_flStanceDirectionMS;
    // Vector m_vToStrideStartPos;
    // CAnimCycle m_stanceCycle;
    // CFootCycle m_footLiftCycle;
    // CFootCycle m_footOffCycle;
    // CFootCycle m_footStrikeCycle;
    // CFootCycle m_footLandCycle;
    char pad_01[32];
};

class PulseRuntimeOutputIndex_t {
public:
    int32_t m_Value;
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

class RnSoftbodyParticle_t {
public:
    float m_flMassInv;
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

class CHitBoxSet {
public:
    // CUtlString m_name;
    char pad_00[8];
    uint32_t m_nNameHash;
    // CUtlVector< CHitBox > m_HitBoxes;
    // CUtlString m_SourceFilename;
    char pad_01[36];
};

class CNmIKBody {
public:
    float m_flMass;
    // Vector m_vLocalMassCenter;
    // Vector m_vRadius;
    char pad_00[24];
    float m_flResistance;
};

class CAnimInputDamping {
public:
    char pad_00[8];
    DampingSpeedFunction m_speedFunction;
    float m_fSpeedScale;
    float m_fFallingSpeedScale;
    char pad_01[4];
};

class CSlopeComponentUpdater {
public:
    char pad_00[52];
    float m_flTraceDistance;
    // CAnimParamHandle m_hSlopeAngle;
    // CAnimParamHandle m_hSlopeAngleFront;
    // CAnimParamHandle m_hSlopeAngleSide;
    // CAnimParamHandle m_hSlopeHeading;
    // CAnimParamHandle m_hSlopeNormal;
    // CAnimParamHandle m_hSlopeNormal_WorldSpace;
    char pad_01[16];
};

class CAnimFrameSegment {
public:
    int32_t m_nUniqueFrameIndex;
    uint32_t m_nLocalElementMasks;
    int32_t m_nLocalChannel;
    // CUtlBinaryBlock m_container;
    char pad_00[20];
};

class AnimTagID {
public:
    uint32_t m_id;
};

class CHandshakeAnimTagBase {
public:
    char pad_00[80];
    bool m_bIsDisableTag;
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

class CStateNodeStateData {
public:
    // CAnimUpdateNodeRef m_pChild;
    // bitfield:1 m_bExclusiveRootMotion;
    // bitfield:1 m_bExclusiveRootMotionFirstFrame;
    char pad_00[24];
};

class CNmLegacyEvent {
public:
    // CUtlString m_animEventClassName;
    // KeyValues3 m_KV;
    char pad_00[88];
};

class CSceneObjectData::RTProxyDrawDescriptor_t {
public:
    // CMaterialDrawDescriptor m_drawDesc;
    // matrix3x4_t m_mWorldFromLocal;
    char pad_00[312];
    VertexAlbedoFormat_t m_nVertexAlbedoFormat;
    int8_t m_nVertexAlbedoVB;
    uint16_t m_nVertexAlbedoOffset;
    uint16_t m_nVertexAlbedoStride;
    char pad_01[2];
};

class CFootStride {
public:
    CFootCycleDefinition m_definition;
    CFootTrajectories m_trajectories;
};

class CNmBitFlags {
public:
    uint32_t m_flags;
};

class CNmConstBoolNode::CDefinition {
public:
    char pad_00[16];
    bool m_bValue;
    char pad_01[7];
};

class CPerParticleFloatInput {
public:
    char pad_00[368];
};

class CNmCachedTargetNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    NmCachedValueMode_t m_mode;
};

class CAnimDecoder {
public:
    // CBufferString m_szName;
    char pad_00[16];
    int32_t m_nVersion;
    int32_t m_nType;
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

class CDemoSettingsComponentUpdater {
public:
    // CAnimDemoCaptureSettings m_settings;
    char pad_00[176];
};

class CAnimEnum {
public:
    uint8_t m_value;
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

class PARTICLE_EHANDLE__ {
public:
    int32_t unused;
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

class NmCompressionSettings_t {
public:
    // NmCompressionSettings_t::QuantizationRange_t m_translationRangeX;
    // NmCompressionSettings_t::QuantizationRange_t m_translationRangeY;
    // NmCompressionSettings_t::QuantizationRange_t m_translationRangeZ;
    // NmCompressionSettings_t::QuantizationRange_t m_scaleRange;
    // Quaternion m_constantRotation;
    char pad_00[48];
    bool m_bIsRotationStatic;
    bool m_bIsTranslationStatic;
    bool m_bIsScaleStatic;
    char pad_01[13];
};

class CFutureFacingMetricEvaluator {
public:
    char pad_00[80];
    float m_flDistance;
    float m_flTime;
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

class IParticleEffect {
public:
    char pad_00[8];
};

class CModelConfigElement_SetMaterialGroup {
public:
    // CUtlString m_MaterialGroupName;
    char pad_00[80];
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
    // CAnimParamHandle[34] m_paramHandles;
    char pad_02[69];
};

class CFollowAttachmentUpdateNode {
public:
    // FollowAttachmentSettings_t m_opFixedData;
    char pad_00[272];
};

class CNmGraphEventConditionNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx;
    CNmBitFlags m_eventConditionRules;
    // CUtlVectorFixedGrowable< CNmGraphEventConditionNode::Condition_t, 5 > m_conditions;
    char pad_01[104];
};

class SkeletonAnimCapture_t::Camera_t {
public:
    // CTransform m_tmCamera;
    char pad_00[32];
    float m_flTime;
    char pad_01[12];
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

class CNmFootstepEventPercentageThroughNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx;
    NmFootPhaseCondition_t m_phaseCondition;
    CNmBitFlags m_eventConditionRules;
};

class PGDInstruction_t {
public:
    PulseInstructionCode_t m_nCode;
    // PulseRuntimeVarIndex_t m_nVar;
    // PulseRuntimeRegisterIndex_t m_nReg0;
    // PulseRuntimeRegisterIndex_t m_nReg1;
    // PulseRuntimeRegisterIndex_t m_nReg2;
    // PulseRuntimeInvokeIndex_t m_nInvokeBindingIndex;
    PulseRuntimeChunkIndex_t m_nChunk;
    int32_t m_nDestInstruction;
    PulseRuntimeCallInfoIndex_t m_nCallInfoIndex;
    PulseRuntimeConstantIndex_t m_nConstIdx;
    // PulseRuntimeDomainValueIndex_t m_nDomainValueIdx;
    PulseRuntimeBlackboardReferenceIndex_t m_nBlackboardReferenceIdx;
    char pad_00[18];
};

class CPathAnimMotorUpdaterBase {
public:
    char pad_00[32];
    bool m_bLockToPath;
    char pad_01[7];
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

class RnSphereDesc_t {
public:
    // SphereBase_t< float32 > m_Sphere;
    char pad_00[40];
};

class CNmFloatCurveEvent {
public:
    // CGlobalSymbol m_ID;
    // CPiecewiseCurve m_curve;
    char pad_00[104];
};

class CNmIKRig {
public:
    // CStrongHandle< InfoForResourceTypeCNmSkeleton > m_skeleton;
    // CUtlVector< CNmIKBody > m_vecBodies;
    // CUtlVector< CNmIKJoint > m_vecJoints;
    char pad_00[56];
};

class CNmTransitionEvent {
public:
    char pad_00[32];
    NmTransitionRule_t m_rule;
    // CGlobalSymbol m_ID;
    char pad_01[15];
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

class CNmBoolValueNode::CDefinition {
public:
    char pad_00[16];
};

class CCurrentVelocityMetricEvaluator {
public:
    char pad_00[80];
};

class CModelConfigElement_SetBodygroupOnAttachedModels {
public:
    // CUtlString m_GroupName;
    char pad_00[80];
    int32_t m_nChoice;
    char pad_01[4];
};

class CSequenceTagSpans {
public:
    // CGlobalSymbol m_sSequenceName;
    // CUtlVector< TagSpan_t > m_tags;
    char pad_00[32];
};

class CSpeedScaleUpdateNode {
public:
    // CAnimParamHandle m_paramIndex;
    char pad_00[120];
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

class CBoneConstraintPoseSpaceMorph::Input_t {
public:
    // Vector m_inputValue;
    // CUtlVector< float32 > m_outputWeightList;
    char pad_00[40];
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

class CLookAtUpdateNode {
public:
    char pad_00[112];
    LookAtOpFixedSettings_t m_opFixedSettings;
    char pad_01[8];
    AnimVectorSource m_target;
    // CAnimParamHandle m_paramIndex;
    // CAnimParamHandle m_weightParamIndex;
    char pad_02[4];
    bool m_bResetChild;
    bool m_bLockWhenWaning;
    char pad_03[14];
};

class CHitReactUpdateNode {
public:
    // HitReactFixedSettings_t m_opFixedSettings;
    // CAnimParamHandle m_triggerParam;
    // CAnimParamHandle m_hitBoneParam;
    // CAnimParamHandle m_hitOffsetParam;
    // CAnimParamHandle m_hitDirectionParam;
    // CAnimParamHandle m_hitStrengthParam;
    char pad_00[200];
    float m_flMinDelayBetweenHits;
    bool m_bResetChild;
    char pad_01[3];
};

class CFlexOp {
public:
    FlexOpCode_t m_OpCode;
    int32_t m_Data;
};

class AnimScriptHandle {
public:
    uint32_t m_id;
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

class CModelConfigElement_Command {
public:
    // CUtlString m_Command;
    // KeyValues3 m_Args;
    char pad_00[96];
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

class CAimMatrixUpdateNode {
public:
    char pad_00[112];
    AimMatrixOpFixedSettings_t m_opFixedSettings;
    char pad_01[8];
    AnimVectorSource m_target;
    // CAnimParamHandle m_paramIndex;
    // HSequence m_hSequence;
    char pad_02[8];
    bool m_bResetChild;
    bool m_bLockWhenWaning;
    char pad_03[10];
};

class CStateMachineUpdateNode {
public:
    // CAnimStateMachineUpdater m_stateMachine;
    // CUtlVector< CStateNodeStateData > m_stateData;
    // CUtlVector< CStateNodeTransitionData > m_transitionData;
    char pad_00[252];
    bool m_bBlockWaningTags;
    bool m_bLockStateWhenWaning;
    bool m_bResetWhenActivated;
    char pad_01[1];
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

class CStaticPoseCacheBuilder {
public:
    char pad_00[56];
};

class CNmSampleTask {
public:
    char pad_00[104];
};

class PulseCursorYieldToken_t {
public:
    int32_t m_Value;
};

class PermModelData_t {
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
    uint64_t m_nDefaultMeshGroupMask;
    // ModelSkeletonData_t m_modelSkeleton;
    // CUtlVector< int16 > m_remappingTable;
    // CUtlVector< uint16 > m_remappingTableStarts;
    // CUtlVector< ModelBoneFlexDriver_t > m_boneFlexDrivers;
    char pad_01[240];
    CModelConfigList* m_pModelConfigList;
    // CUtlVector< CUtlString > m_BodyGroupsHiddenInTools;
    // CUtlVector< CStrongHandle< InfoForResourceTypeCModel > > m_refAnimIncludeModels;
    // CUtlVector< PermModelDataAnimatedMaterialAttribute_t > m_AnimatedMaterialAttributes;
    // CUtlVector< ModelAnimGraph2Ref_t > m_animGraph2Refs;
    // CUtlVector< CStrongHandle< InfoForResourceTypeCNmSkeleton > > m_vecNmSkeletonRefs;
    char pad_02[120];
};

class CQuaternionAnimParameter {
public:
    // Quaternion m_defaultValue;
    char pad_00[144];
    bool m_bInterpolate;
    char pad_01[15];
};

class PulseGraphExecutionHistoryEntry_t {
public:
    // PulseCursorID_t nCursorID;
    char pad_00[4];
    PulseDocNodeID_t nEditorID;
    float flExecTime;
    uint32_t unFlags;
    // PulseSymbol_t tagName;
    char pad_01[16];
};

class CBlendUpdateNode {
public:
    // CUtlVector< CAnimUpdateNodeRef > m_children;
    // CUtlVector< uint8 > m_sortedOrder;
    // CUtlVector< float32 > m_targetValues;
    char pad_00[172];
    AnimValueSource m_blendValueSource;
    LinearRootMotionBlendMode_t m_eLinearRootMotionBlendMode;
    // CAnimParamHandle m_paramIndex;
    CAnimInputDamping m_damping;
    BlendKeyType m_blendKeyType;
    bool m_bLockBlendOnReset;
    bool m_bSyncCycles;
    bool m_bLoop;
    bool m_bLockWhenWaning;
    bool m_bIsAngle;
    char pad_01[7];
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

class CDampedValueUpdateItem {
public:
    CAnimInputDamping m_damping;
    // CAnimParamHandle m_hParamIn;
    // CAnimParamHandle m_hParamOut;
    char pad_00[16];
};

class HSequence {
public:
    int32_t m_Value;
};

class CParticleVariableRef {
public:
    // CKV3MemberNameWithStorage m_variableName;
    // CPulseValueFullType m_variableType;
    char pad_00[80];
};

class CFootPositionMetricEvaluator {
public:
    // CUtlVector< int32 > m_footIndices;
    char pad_00[104];
    bool m_bIgnoreSlope;
    char pad_01[7];
};

class CNmStateNode::TimedEvent_t {
public:
    // CGlobalSymbol m_ID;
    char pad_00[8];
    float m_flTimeValueSeconds;
    CNmStateNode::TimedEvent_t::Comparison_t m_comparisionOperator;
    char pad_01[3];
};

class CNmCachedVectorNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    NmCachedValueMode_t m_mode;
};

class CParentConstraint {
public:
    char pad_00[96];
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

class CMorphRectData {
public:
    int16_t m_nXLeftDst;
    int16_t m_nYTopDst;
    float m_flUWidthSrc;
    float m_flVHeightSrc;
    // CUtlVector< CMorphBundleData > m_bundleDatas;
    char pad_00[28];
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

class CPairedSequenceComponentUpdater {
public:
    char pad_00[56];
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

class CPhysSurfacePropertiesVehicle {
public:
    float m_wheelDrag;
    float m_wheelFrictionScale;
};

class CNmIsTargetSetNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    char pad_01[6];
};

class CLODComponentUpdater {
public:
    char pad_00[48];
    int32_t m_nServerLOD;
    char pad_01[4];
};

class MoodAnimation_t {
public:
    // CModelAnimNameWithDeltas m_sName;
    char pad_00[8];
    float m_flWeight;
    char pad_01[4];
};

class CNmConstVectorNode::CDefinition {
public:
    // Vector m_value;
    char pad_00[32];
};

class CJiggleBoneUpdateNode {
public:
    char pad_00[112];
    JiggleBoneSettingsList_t m_opFixedData;
    char pad_01[8];
};

class CFootMotion {
public:
    // CUtlVector< CFootStride > m_strides;
    // CUtlString m_name;
    char pad_00[32];
    bool m_bAdditive;
    char pad_01[7];
};

class CModelConfigElement_RandomColor {
public:
    // CColorGradient m_Gradient;
    char pad_00[96];
};

class CWarpSectionAnimTag {
public:
    char pad_00[80];
    bool m_bWarpPosition;
    bool m_bWarpOrientation;
    char pad_01[6];
};

class CBoneVelocityMetricEvaluator {
public:
    char pad_00[80];
    int32_t m_nBoneIndex;
    char pad_01[4];
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

class CNmControlParameterBoolNode::CDefinition {
public:
    char pad_00[16];
};

class CJumpHelperUpdateNode {
public:
    // CAnimParamHandle m_hTargetParam;
    // Vector m_flOriginalJumpMovement;
    char pad_00[192];
    float m_flOriginalJumpDuration;
    float m_flJumpStartCycle;
    float m_flJumpEndCycle;
    JumpCorrectionMethod m_eCorrectionMethod;
    bool m_bTranslationAxis[3];
    bool m_bScaleSpeed;
    char pad_01[4];
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

class PulseGraphExecutionHistoryNodeDesc_t {
public:
    // CBufferString strCellDesc;
    // PulseSymbol_t strBindingName;
    char pad_00[32];
};

class CNmIDValueNode::CDefinition {
public:
    char pad_00[16];
};

class CNmOrientationWarpEvent {
public:
    char pad_00[32];
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

class CPathMetricEvaluator {
public:
    // CUtlVector< float32 > m_pathTimeSamples;
    char pad_00[104];
    float m_flDistance;
    bool m_bExtrapolateMovement;
    float m_flMinExtrapolationSpeed;
    char pad_01[4];
};

class CNmSyncTrack::EventMarker_t {
public:
    // NmPercent_t m_startTime;
    // CGlobalSymbol m_ID;
    char pad_00[16];
};

class FootStepTrigger {
public:
    // CUtlVector< int32 > m_tags;
    char pad_00[24];
    int32_t m_nFootIndex;
    StepPhase m_triggerPhase;
};

class FollowAttachmentData {
public:
    int32_t m_boneIndex;
    AttachmentHandle_t m_attachmentHandle;
    char pad_00[3];
};

class CParticleRemapFloatInput {
public:
    char pad_00[368];
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

class CModelConfigElement_SetBodygroup {
public:
    // CGlobalSymbol m_GroupName;
    char pad_00[80];
    int32_t m_nChoice;
    char pad_01[4];
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

class CNmBoneMaskValueNode::CDefinition {
public:
    char pad_00[16];
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

class CPulse_OutputConnection {
public:
    // PulseSymbol_t m_SourceOutput;
    // PulseSymbol_t m_TargetEntity;
    // PulseSymbol_t m_TargetInput;
    // PulseSymbol_t m_Param;
    char pad_00[64];
};

class CAnimUpdateNodeRef {
public:
    char pad_00[8];
    int32_t m_nodeIndex;
    char pad_01[4];
};

class CStateMachineComponentUpdater {
public:
    // CAnimStateMachineUpdater m_stateMachine;
    char pad_00[136];
};

class NmPercent_t {
public:
    float m_flValue;
};

class CSelectorUpdateNode {
public:
    // CUtlVector< CAnimUpdateNodeRef > m_children;
    // CUtlVector< int8 > m_tags;
    char pad_00[148];
    CBlendCurve m_blendCurve;
    // CAnimValue< float32 > m_flBlendTime;
    // CAnimParamHandle m_hParameter;
    char pad_01[12];
    int32_t m_nTagIndex;
    SelectorTagBehavior_t m_eTagBehavior;
    bool m_bResetOnChange;
    bool m_bLockWhenWaning;
    bool m_bSyncCyclesOnChange;
    char pad_02[5];
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

class CNmIDToFloatNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    float m_defaultValue;
    // CUtlLeanVectorFixedGrowable< CGlobalSymbol, 5 > m_IDs;
    // CUtlLeanVectorFixedGrowable< float32, 5 > m_values;
    char pad_01[80];
};

class CUnaryUpdateNode {
public:
    char pad_00[96];
    CAnimUpdateNodeRef m_pChildNode;
};

class CAnimStateMachineUpdater {
public:
    // CUtlVector< CStateUpdateData > m_states;
    // CUtlVector< CTransitionUpdateData > m_transitions;
    char pad_00[80];
    int32_t m_startStateIndex;
    char pad_01[4];
};

class CNmSyncEventIndexConditionNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx;
    CNmSyncEventIndexConditionNode::TriggerMode_t m_triggerMode;
    int32_t m_syncEventIdx;
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

class DynamicMeshDeformParams_t {
public:
    float m_flTensionCompressScale;
    float m_flTensionStretchScale;
    bool m_bRecomputeSmoothNormalsAfterAnimation;
    bool m_bComputeDynamicMeshTensionAfterAnimation;
    bool m_bSmoothNormalsAcrossUvSeams;
    bool m_bEnableEyeBulgeDeformation;
};

class CEmitTagActionUpdater {
public:
    char pad_00[24];
    int32_t m_nTagIndex;
    bool m_bIsZeroDuration;
    char pad_01[3];
};

class RnMeshDesc_t {
public:
    // RnMesh_t m_Mesh;
    char pad_00[216];
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
    // AnimationDecodeDebugDumpElement_t m_DecodeDump;
    char pad_02[123];
};

class CPulse_PublicOutput {
public:
    // PulseSymbol_t m_Name;
    // CUtlString m_Description;
    // CUtlLeanVector< CPulseRuntimeMethodArg > m_Args;
    char pad_00[40];
};

class CNmRootMotionEvent {
public:
    char pad_00[32];
    float m_flBlendTimeSeconds;
    char pad_01[4];
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

class FollowTargetOpFixedSettings_t {
public:
    int32_t m_boneIndex;
    bool m_bBoneTarget;
    int32_t m_boneTargetIndex;
    bool m_bWorldCoodinateTarget;
    bool m_bMatchTargetOrientation;
    char pad_00[2];
};

class CCycleBase {
public:
    float m_flCycle;
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

class CAnimActionUpdater {
public:
    char pad_00[24];
};

class CParamSpanUpdater {
public:
    // CUtlVector< ParamSpan_t > m_spans;
    char pad_00[24];
};

class CNmTargetWarpEvent {
public:
    char pad_00[32];
    NmTargetWarpRule_t m_rule;
    NmTargetWarpAlgorithm_t m_algorithm;
    char pad_01[6];
};

class CNmStateCompletedConditionNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx;
    int16_t m_nTransitionDurationOverrideNodeIdx;
    float m_flTransitionDurationSeconds;
};

class CNmCurrentSyncEventIDNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx;
    char pad_01[6];
};

class CNmFloatRemapNode::RemapRange_t {
public:
    float m_flBegin;
    float m_flEnd;
};

class CNmGraphEventConditionNode::Condition_t {
public:
    // CGlobalSymbol m_eventID;
    char pad_00[8];
    NmGraphEventTypeCondition_t m_eventTypeCondition;
    char pad_01[7];
};

class CParticleCollectionVecInput {
public:
    char pad_00[1720];
};

class CDirectPlaybackTagData {
public:
    // CUtlString m_sequenceName;
    // CUtlVector< TagSpan_t > m_tags;
    char pad_00[32];
};

class MotionDBIndex {
public:
    uint32_t m_nIndex;
};

class CNmIsInactiveBranchConditionNode::CDefinition {
public:
    char pad_00[16];
};

class CHitBoxSetList {
public:
    // CUtlVector< CHitBoxSet > m_HitBoxSets;
    char pad_00[24];
};

class CTargetSelectorUpdateNode {
public:
    char pad_00[96];
    TargetSelectorAngleMode_t m_eAngleMode;
    // CUtlVector< CAnimUpdateNodeRef > m_children;
    // CAnimParamHandle m_hTargetPosition;
    // CAnimParamHandle m_hTargetFacePositionParameter;
    // CAnimParamHandle m_hMoveHeadingParameter;
    // CAnimParamHandle m_hDesiredMoveHeadingParameter;
    char pad_01[40];
    bool m_bTargetPositionIsWorldSpace;
    bool m_bTargetFacePositionIsWorldSpace;
    bool m_bEnablePhaseMatching;
    float m_flPhaseMatchingMaxRootMotionSkip;
    char pad_02[12];
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

class CNmStateMachineNode::TransitionDefinition_t {
public:
    int16_t m_nTargetStateIdx;
    int16_t m_nConditionNodeIdx;
    int16_t m_nTransitionNodeIdx;
    bool m_bCanBeForced;
    char pad_00[1];
};

class IAnimationGraphInstance {
public:
    char pad_00[24];
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

class CSymbolAnimParameter {
public:
    // CGlobalSymbol m_defaultValue;
    char pad_00[136];
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
    // CAnimParamHandle m_paramIndex;
    // Vector m_verticalAxis;
    // Vector m_horizontalAxis;
    HSequence m_hSequence;
    float m_flMaxValue;
    int32_t m_nSequenceMaxFrame;
    char pad_03[4];
};

class CNmCachedIDNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    NmCachedValueMode_t m_mode;
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

class CNmVelocityBasedSpeedScaleNode::CDefinition {
public:
    char pad_00[32];
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
    // CAnimParamHandle m_paramX;
    char pad_02[4];
    AnimValueSource m_blendSourceY;
    // CAnimParamHandle m_paramY;
    char pad_03[4];
    Blend2DMode m_eBlendMode;
    float m_playbackSpeed;
    bool m_bLoop;
    bool m_bLockBlendOnReset;
    bool m_bLockWhenWaning;
    bool m_bAnimEventsAndTagsOnMostWeightedOnly;
    char pad_04[4];
};

class CAnimComponentUpdater {
public:
    // CUtlString m_name;
    // AnimComponentID m_id;
    char pad_00[36];
    AnimNodeNetworkMode m_networkMode;
    bool m_bStartEnabled;
    char pad_01[7];
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

class CSeqSynthAnimDesc {
public:
    // CBufferString m_sName;
    // CSeqSeqDescFlag m_flags;
    // CSeqTransition m_transition;
    char pad_00[36];
    int16_t m_nLocalBaseReference;
    int16_t m_nLocalBoneMask;
    // CUtlVector< CAnimActivity > m_activityArray;
    char pad_01[24];
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

class ParticleNamedValueSource_t {
public:
    // CUtlString m_Name;
    char pad_00[8];
    bool m_IsPublic;
    // CPulseValueFullType m_ValueType;
    // ParticleNamedValueConfiguration_t m_DefaultConfig;
    char pad_01[87];
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

class CAnimUser {
public:
    // CBufferString m_name;
    char pad_00[16];
    int32_t m_nType;
    char pad_01[4];
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

class VPhysXConstraint2_t {
public:
    uint32_t m_nFlags;
    uint16_t m_nParent;
    uint16_t m_nChild;
    VPhysXConstraintParams_t m_params;
};

class CNmScaleNode::CDefinition {
public:
    char pad_00[24];
    int16_t m_nMaskNodeIdx;
    int16_t m_nEnableNodeIdx;
    char pad_01[4];
};

class CNmReferencePoseTask {
public:
    char pad_00[88];
};

class CModelConfigElement_RandomPick {
public:
    // CUtlVector< CUtlString > m_Choices;
    // CUtlVector< float32 > m_ChoiceWeights;
    char pad_00[128];
};

class CPairedSequenceUpdateNode {
public:
    // CGlobalSymbol m_sPairedSequenceRole;
    char pad_00[136];
};

class CNmBoneWeightList {
public:
    // CResourceName m_skeletonName;
    // CUtlVector< CGlobalSymbol > m_boneIDs;
    // CUtlVector< float32 > m_weights;
    char pad_00[272];
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

class CNmBlend1DNode::CDefinition {
public:
    char pad_00[64];
    CNmParameterizedBlendNode::Parameterization_t m_parameterization;
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

class CNmIsExternalGraphSlotFilledNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nExternalGraphNodeIdx;
    char pad_01[6];
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

class CNmControlParameterFloatNode::CDefinition {
public:
    char pad_00[16];
};

class CBaseConstraint {
public:
    // CUtlString m_name;
    // Vector m_vUpVector;
    // CUtlLeanVector< CConstraintSlave > m_slaves;
    // CUtlVector< CConstraintTarget > m_targets;
    char pad_00[96];
};

class CDampedValueComponentUpdater {
public:
    // CUtlVector< CDampedValueUpdateItem > m_items;
    char pad_00[72];
};

class CNmTargetInfoNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    CNmTargetInfoNode::Info_t m_infoType;
    bool m_bIsWorldSpaceTarget;
    char pad_01[7];
};

class CCycleControlUpdateNode {
public:
    char pad_00[112];
    AnimValueSource m_valueSource;
    // CAnimParamHandle m_paramIndex;
    char pad_01[2];
    bool m_bLockWhenWaning;
    char pad_02[1];
};

class CAnimationGraphVisualizerLine {
public:
    // VectorAligned m_vWsPositionStart;
    // VectorAligned m_vWsPositionEnd;
    // Color m_Color;
    char pad_00[112];
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

class CExpressionActionUpdater {
public:
    // CAnimParamHandle m_hParam;
    char pad_00[26];
    AnimParamType_t m_eParamType;
    AnimScriptHandle m_hScript;
};

class SkeletonAnimCapture_t::Bone_t {
public:
    // CUtlString m_Name;
    // CTransform m_BindPose;
    char pad_00[48];
    int32_t m_nParent;
    char pad_01[12];
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

class CProductQuantizer {
public:
    // CUtlVector< CVectorQuantizer > m_subQuantizers;
    char pad_00[24];
    int32_t m_nDimensions;
    char pad_01[4];
};

class ParticleAttributeIndex_t {
public:
    int32_t m_Value;
};

class CMotionDataSet {
public:
    // CUtlVector< CMotionGraphGroup > m_groups;
    char pad_00[24];
    int32_t m_nDimensionCount;
    char pad_01[4];
};

class PermModelDataAnimatedMaterialAttribute_t {
public:
    // CUtlString m_AttributeName;
    char pad_00[8];
    int32_t m_nNumChannels;
    char pad_01[4];
};

class CRemapValueUpdateItem {
public:
    // CAnimParamHandle m_hParamIn;
    // CAnimParamHandle m_hParamOut;
    char pad_00[4];
    float m_flMinInputValue;
    float m_flMaxInputValue;
    float m_flMinOutputValue;
    float m_flMaxOutputValue;
};

class CNmConstTargetNode::CDefinition {
public:
    char pad_00[16];
    CNmTarget m_value;
};

class TagSpan_t {
public:
    int32_t m_tagIndex;
    float m_startCycle;
    float m_endCycle;
};

class CNmBlendTaskBase {
public:
    char pad_00[224];
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

class RnSoftbodySpring_t {
public:
    uint16_t m_nParticle[2];
    float m_flLength;
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

class CNmConstIDNode::CDefinition {
public:
    // CGlobalSymbol m_value;
    char pad_00[24];
};

class CFootCycleMetricEvaluator {
public:
    // CUtlVector< int32 > m_footIndices;
    char pad_00[104];
};

class CNmVirtualParameterVectorNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx;
    char pad_01[6];
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

class CNmVectorCreateNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_inputVectorValueNodeIdx;
    int16_t m_inputValueXNodeIdx;
    int16_t m_inputValueYNodeIdx;
    int16_t m_inputValueZNodeIdx;
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

class CVectorQuantizer {
public:
    // CUtlVector< float32 > m_centroidVectors;
    char pad_00[24];
    int32_t m_nCentroids;
    int32_t m_nDimensions;
};

class CBodyGroupSetting {
public:
    // CUtlString m_BodyGroupName;
    char pad_00[8];
    int32_t m_nBodyGroupOption;
    char pad_01[4];
};

class CNmZeroPoseTask {
public:
    char pad_00[88];
};

class CNmVelocityBlendNode::CDefinition {
public:
    char pad_00[64];
};

class CStepsRemainingMetricEvaluator {
public:
    // CUtlVector< int32 > m_footIndices;
    char pad_00[104];
    float m_flMinStepsRemaining;
    char pad_01[4];
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

class CFootFallAnimTag {
public:
    char pad_00[88];
    FootFallTagFoot_t m_foot;
    char pad_01[4];
};

class CMaterialDrawDescriptor::RigidMeshPart_t {
public:
    uint16_t m_nRigidBLASIndex;
    int16_t m_nBoneIndex;
    uint32_t m_nStartIndexOffset;
    uint32_t m_nPrimitiveCount;
};

class CAimConstraint {
public:
    // Quaternion m_qAimOffset;
    char pad_00[112];
    uint32_t m_nUpType;
    char pad_01[12];
};

class CChoreoUpdateNode {
public:
    char pad_00[120];
};

class CFootAdjustmentUpdateNode {
public:
    // CUtlVector< HSequence > m_clips;
    char pad_00[144];
    CPoseHandle m_hBasePoseCacheHandle;
    // CAnimParamHandle m_facingTarget;
    char pad_01[4];
    float m_flTurnTimeMin;
    float m_flTurnTimeMax;
    float m_flStepHeightMax;
    float m_flStepHeightMaxAngle;
    bool m_bResetChild;
    bool m_bAnimationDriven;
    char pad_02[6];
};

class CSolveIKTargetHandle_t {
public:
    // CAnimParamHandle m_positionHandle;
    // CAnimParamHandle m_orientationHandle;
    char pad_00[4];
};

class CModelConfigElement_UserPick {
public:
    // CUtlVector< CUtlString > m_Choices;
    char pad_00[96];
};

class CMorphBundleData {
public:
    float m_flULeftSrc;
    float m_flVTopSrc;
    // CUtlVector< float32 > m_offsets;
    // CUtlVector< float32 > m_ranges;
    char pad_00[48];
};

class MaterialGroup_t {
public:
    // CUtlString m_name;
    // CUtlVector< CStrongHandle< InfoForResourceTypeIMaterial2 > > m_materials;
    char pad_00[32];
};

class CPathHelperUpdateNode {
public:
    char pad_00[112];
    float m_flStoppingRadius;
    float m_flStoppingSpeedScale;
};

class CNmVirtualParameterBoneMaskNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx;
    char pad_01[6];
};

class CNmEntityAttributeEventBase {
public:
    // CUtlString m_attributeName;
    char pad_00[56];
};

class CModelConfigElement_SetMaterialGroupOnAttachedModels {
public:
    // CUtlString m_MaterialGroupName;
    char pad_00[80];
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

class CNmCachedFloatNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    NmCachedValueMode_t m_mode;
};

class CDampedPathAnimMotorUpdater {
public:
    char pad_00[44];
    float m_flAnticipationTime;
    float m_flMinSpeedScale;
    // CAnimParamHandle m_hAnticipationPosParam;
    // CAnimParamHandle m_hAnticipationHeadingParam;
    char pad_01[4];
    float m_flSpringConstant;
    float m_flMinSpringTension;
    float m_flMaxSpringTension;
    char pad_02[4];
};

class CActionComponentUpdater {
public:
    // CUtlVector< CSmartPtr< CAnimActionUpdater > > m_actions;
    char pad_00[72];
};

class CAnimCycle {
public:
    char pad_00[4];
};

class CNmCachedBoolNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    NmCachedValueMode_t m_mode;
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

class CNmIDEventPercentageThroughNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx;
    CNmBitFlags m_eventConditionRules;
    // CGlobalSymbol m_eventID;
    char pad_01[8];
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

class VPhysXRange_t {
public:
    float m_flMin;
    float m_flMax;
};

class PulseRegisterMap_t {
public:
    // KeyValues3 m_Inparams;
    // CKV3MemberNameSet m_InparamsWhichCanBeMoved;
    // KeyValues3 m_Outparams;
    char pad_00[48];
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

class CNmSelectorNode::CDefinition {
public:
    // CUtlLeanVectorFixedGrowable< int16, 5 > m_optionNodeIndices;
    // CUtlLeanVectorFixedGrowable< int16, 5 > m_conditionNodeIndices;
    char pad_00[64];
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

class AnimComponentID {
public:
    uint32_t m_id;
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

class CNmControlParameterVectorNode::CDefinition {
public:
    char pad_00[16];
};

class CModelConfigElement {
public:
    // CUtlString m_ElementName;
    // CUtlVector< CModelConfigElement* > m_NestedElements;
    char pad_00[72];
};

class CParticleInput {
public:
    char pad_00[16];
};

class CTimeRemainingMetricEvaluator {
public:
    char pad_00[80];
    bool m_bMatchByTimeRemaining;
    float m_flMaxTimeRemaining;
    bool m_bFilterByTimeRemaining;
    float m_flMinTimeRemaining;
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

class CDrawCullingData {
public:
    int8_t m_ConeAxis[3];
    int8_t m_ConeCutoff;
};

class CSequenceUpdateNodeBase {
public:
    char pad_00[108];
    float m_playbackSpeed;
    bool m_bLoop;
    char pad_01[7];
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

class CNmVirtualParameterFloatNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx;
    char pad_01[6];
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

class CMorphData {
public:
    // CUtlString m_name;
    // CUtlVector< CMorphRectData > m_morphRectDatas;
    char pad_00[32];
};

class ModelBoneFlexDriver_t {
public:
    // CUtlString m_boneName;
    char pad_00[8];
    uint32_t m_boneNameToken;
    // CUtlVector< ModelBoneFlexDriverControl_t > m_controls;
    char pad_01[28];
};

class CNmIDEventConditionNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx;
    CNmBitFlags m_eventConditionRules;
    // CUtlVectorFixedGrowable< CGlobalSymbol, 5 > m_eventIDs;
    char pad_01[64];
};

class AnimStateID {
public:
    uint32_t m_id;
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

class CModelConfigList {
public:
    bool m_bHideMaterialGroupInTools;
    bool m_bHideRenderColorInTools;
    // CUtlVector< CModelConfig* > m_Configs;
    char pad_00[30];
};

class CRemapValueComponentUpdater {
public:
    // CUtlVector< CRemapValueUpdateItem > m_items;
    char pad_00[72];
};

class CBlockSelectionMetricEvaluator {
public:
    char pad_00[80];
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

class CSingleFrameUpdateNode {
public:
    // CUtlVector< CSmartPtr< CAnimActionUpdater > > m_actions;
    char pad_00[112];
    CPoseHandle m_hPoseCacheHandle;
    HSequence m_hSequence;
    float m_flCycle;
    char pad_01[4];
};

class CAnimGraphNetworkSettings {
public:
    char pad_00[32];
    bool m_bNetworkingEnabled;
    char pad_01[7];
};

class CNmIsExternalPoseSetNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nExternalPoseNodeIdx;
    char pad_01[6];
};

class CLookComponentUpdater {
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
    bool m_bNetworkLookTarget;
    char pad_01[3];
};

class CNmClipSelectorNode::CDefinition {
public:
    // CUtlLeanVectorFixedGrowable< int16, 5 > m_optionNodeIndices;
    // CUtlLeanVectorFixedGrowable< int16, 5 > m_conditionNodeIndices;
    char pad_00[64];
};

class AnimNodeID {
public:
    uint32_t m_id;
};

class CNmReferencedGraphNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nReferencedGraphIdx;
    int16_t m_nFallbackNodeIdx;
    char pad_01[4];
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

class MotionIndex {
public:
    uint16_t m_nGroup;
    uint16_t m_nMotion;
};

class WeightList {
public:
    // CUtlString m_name;
    // CUtlVector< float32 > m_weights;
    char pad_00[32];
};

class CAnimParamHandle {
public:
    AnimParamType_t m_type;
    uint8_t m_index;
};

class PulseCursorID_t {
public:
    int32_t m_Value;
};

class CNmFloatAngleMathNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    CNmFloatAngleMathNode::Operation_t m_operation;
    char pad_01[5];
};

class CMotionGraphUpdateNode {
public:
    // CSmartPtr< CMotionGraph > m_pMotionGraph;
    char pad_00[104];
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

class CRootUpdateNode {
public:
    char pad_00[112];
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

class PulseRuntimeRegisterIndex_t {
public:
    int16_t m_Value;
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

class LookAtBone_t {
public:
    int32_t m_index;
    float m_weight;
};

class PhysShapeMarkup_t {
public:
    int32_t m_nBodyInAggregate;
    int32_t m_nShapeInBody;
    // CGlobalSymbol m_sHitGroup;
    char pad_00[8];
};

class CNmGraphDefinition::ExternalPoseSlot_t {
public:
    int16_t m_nNodeIdx;
    // CGlobalSymbol m_slotID;
    char pad_00[14];
};

class CStanceOverrideUpdateNode {
public:
    // CUtlVector< StanceInfo_t > m_footStanceInfo;
    char pad_00[136];
    CAnimUpdateNodeRef m_pStanceSourceNode;
    CAnimParamHandle m_hParameter;
    StanceOverrideMode m_eMode;
};

class CNmStateMachineNode::StateDefinition_t {
public:
    int16_t m_nStateNodeIdx;
    int16_t m_nEntryConditionNodeIdx;
    // CUtlLeanVectorFixedGrowable< CNmStateMachineNode::TransitionDefinition_t, 5 > m_transitionDefinitions;
    char pad_00[52];
};

class CNmCachedPoseReadTask {
public:
    char pad_00[96];
};

class CVectorAnimParameter {
public:
    // Vector m_defaultValue;
    char pad_00[140];
    bool m_bInterpolate;
    AnimParamVectorType_t m_vectorType;
    char pad_01[4];
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

class CNmVirtualParameterTargetNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx;
    char pad_01[6];
};

class CAnimGraphSettingsGroup {
public:
    char pad_00[32];
};

class CNmPoseTask {
public:
    char pad_00[88];
};

class CSeqTransition {
public:
    float m_flFadeInTime;
    float m_flFadeOutTime;
};

class CNmVectorValueNode::CDefinition {
public:
    char pad_00[16];
};

class CNmBlendTask {
public:
    char pad_00[224];
};

class AnimationSnapshot_t {
public:
    char pad_00[272];
    int32_t m_nEntIndex;
    // CUtlString m_modelName;
    char pad_01[12];
};

class CNmVectorInfoNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nInputValueNodeIdx;
    CNmVectorInfoNode::Info_t m_desiredInfo;
    char pad_01[5];
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

class CPerParticleVecInput {
public:
    char pad_00[1720];
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

class CNmPoseNode::CDefinition {
public:
    char pad_00[16];
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

class CNmIDEventNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceStateNodeIdx;
    CNmBitFlags m_eventConditionRules;
    // CGlobalSymbol m_defaultValue;
    char pad_01[8];
};

class CNmBoneMaskBlendNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nSourceMaskNodeIdx;
    int16_t m_nTargetMaskNodeIdx;
    int16_t m_nBlendWeightValueNodeIdx;
    char pad_01[2];
};

class PulseRuntimeInvokeIndex_t {
public:
    int32_t m_Value;
};

class CStanceScaleUpdateNode {
public:
    char pad_00[112];
    CAnimParamHandle m_hParam;
    char pad_01[6];
};

class CPulse_Chunk {
public:
    // CUtlLeanVector< PGDInstruction_t > m_Instructions;
    // CUtlLeanVector< CPulse_RegisterInfo > m_Registers;
    // CUtlLeanVector< CPulse_InstructionDebug > m_InstructionDebugInfos;
    char pad_00[88];
};

class IKBoneNameAndIndex_t {
public:
    // CUtlString m_Name;
    char pad_00[16];
};

class StanceInfo_t {
public:
    // Vector m_vPosition;
    char pad_00[12];
    float m_flDirection;
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

class PulseRuntimeDomainValueIndex_t {
public:
    int16_t m_Value;
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

class PulseRuntimeEntrypointIndex_t {
public:
    int32_t m_Value;
};

class CNmGraphDefinition::ExternalGraphSlot_t {
public:
    int16_t m_nNodeIdx;
    // CGlobalSymbol m_slotID;
    char pad_00[14];
};

class CNmClipReferenceNode::CDefinition {
public:
    char pad_00[16];
};

class CNmPassthroughNode::CDefinition {
public:
    char pad_00[16];
    int16_t m_nChildNodeIdx;
    char pad_01[6];
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

class ConfigIndex {
public:
    uint16_t m_nGroup;
    uint16_t m_nConfig;
};

class PulseRuntimeVarIndex_t {
public:
    int32_t m_Value;
};

class MovementGaitId_t {
public:
    // CGlobalSymbol m_sId;
    char pad_00[8];
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

class CAnimScriptManager {
public:
    // CUtlVector< ScriptInfo_t > m_scriptInfo;
    char pad_00[416];
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

class CMotionGraphConfig {
public:
    float m_paramValues[4];
    float m_flDuration;
    MotionIndex m_nMotionIndex;
    int32_t m_nSampleStart;
    int32_t m_nSampleCount;
};

class CTaskStatusAnimTag {
public:
    char pad_00[88];
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

class CCachedPose {
public:
    // CUtlVector< CTransform > m_transforms;
    // CUtlVector< float32 > m_morphWeights;
    char pad_00[56];
    HSequence m_hSequence;
    float m_flCycle;
};

class SampleCode {
public:
    uint8_t m_subCode[8];
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

class CNmSyncTrack {
public:
    // CUtlLeanVectorFixedGrowable< CNmSyncTrack::Event_t, 10 > m_syncEvents;
    char pad_00[168];
    int32_t m_nStartEventOffset;
    char pad_01[4];
};

class AnimNodeOutputID {
public:
    uint32_t m_id;
};

class CAnimNodePath {
public:
    AnimNodeID m_path;
    char pad_00[40];
    int32_t m_nCount;
};

class CNmFrameSnapEvent {
public:
    char pad_00[32];
    NmFrameSnapEventMode_t m_frameSnapMode;
    char pad_01[4];
};

class CNmScaleTask {
public:
    char pad_00[176];
};

class CNmParameterizedBlendNode::CDefinition {
public:
    // CUtlVectorFixedGrowable< int16, 5 > m_sourceNodeIndices;
    char pad_00[56];
    int16_t m_nInputParameterValueNodeIdx;
    bool m_bAllowLooping;
    char pad_01[5];
};

class CIntAnimParameter {
public:
    char pad_00[128];
    int32_t m_defaultValue;
    int32_t m_minValue;
    int32_t m_maxValue;
    char pad_01[4];
};

class CInputStreamUpdateNode {
public:
    char pad_00[96];
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

class CFootCycle {
public:
    char pad_00[4];
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

class CSequenceFinishedAnimTag {
public:
    // CUtlString m_sequenceName;
    char pad_00[96];
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

class CSlowDownOnSlopesUpdateNode {
public:
    char pad_00[112];
    float m_flSlowDownStrength;
    char pad_01[4];
};

class CZeroPoseUpdateNode {
public:
    char pad_00[96];
};

class CAnimFrameBlockAnim {
public:
    int32_t m_nStartFrame;
    int32_t m_nEndFrame;
    // CUtlVector< int32 > m_segmentIndexArray;
    char pad_00[24];
};

class FeHingeLimitBuild_t {
public:
    uint16_t nNode[6];
    uint32_t nFlags;
    float flLimitCW;
    float flLimitCCW;
};

class FeFitInfluence_t {
public:
    uint32_t nVertexNode;
    float flWeight;
    uint32_t nMatrixNode;
};

class VertexPositionColor_t {
public:
    // Vector m_vPosition;
    char pad_00[16];
};

class FeSimdTri_t {
public:
    uint32_t nNode[4];
    // fltx4 w1;
    // fltx4 w2;
    // fltx4 v1x;
    // FourVectors2D v2;
    char pad_00[112];
};

class RnHalfEdge_t {
public:
    uint8_t m_nNext;
    uint8_t m_nTwin;
    uint8_t m_nOrigin;
    uint8_t m_nFace;
};

class FeFitWeight_t {
public:
    float flWeight;
    uint16_t nNode;
    uint16_t nDummy;
};

class FeRodConstraint_t {
public:
    uint16_t nNode[2];
    float flMaxDist;
    float flMinDist;
    float flWeight0;
    float flRelaxationFactor;
};

class FeTreeChildren_t {
public:
    uint16_t nChild[2];
};

class RnShapeDesc_t {
public:
    uint32_t m_nCollisionAttributeIndex;
    uint32_t m_nSurfacePropertyIndex;
    // CUtlString m_UserFriendlyName;
    char pad_00[8];
    bool m_bUserFriendlyNameSealed;
    bool m_bUserFriendlyNameLong;
    uint32_t m_nToolMaterialHash;
};

class FeSoftParent_t {
public:
    int32_t nParent;
    float flAlpha;
};

class FeBuildTaperedCapsuleRigid_t {
public:
    char pad_00[48];
    int32_t m_nPriority;
    uint32_t m_nVertexMapHash;
    uint32_t m_nAntitunnelGroupBits;
    char pad_01[4];
};

class CollisionDetailLayerInfo_t::Name_t {
public:
    // CUtlStringToken m_nNameToken;
    // CUtlString m_sNameString;
    char pad_00[16];
};

class FeSphereRigid_t {
public:
    // fltx4 vSphere;
    char pad_00[16];
    uint16_t nNode;
    uint16_t nCollisionMask;
    uint16_t nVertexMapIndex;
    uint16_t nFlags;
    char pad_01[8];
};

class constraint_breakableparams_t {
public:
    float strength;
    float forceLimit;
    float torqueLimit;
    float bodyMassScale[2];
    bool isActive;
    char pad_00[3];
};

class FourCovMatrices3 {
public:
    // FourVectors m_vDiag;
    // fltx4 m_flXY;
    // fltx4 m_flXZ;
    // fltx4 m_flYZ;
    char pad_00[96];
};

class FeAxialEdgeBend_t {
public:
    float te;
    float tv;
    float flDist;
    float flWeight[4];
    uint16_t nNode[6];
};

class FeNodeWindBase_t {
public:
    uint16_t nNodeX0;
    uint16_t nNodeX1;
    uint16_t nNodeY0;
    uint16_t nNodeY1;
};

class FeTwistConstraint_t {
public:
    uint16_t nNodeOrient;
    uint16_t nNodeEnd;
    float flTwistRelax;
    float flSwingRelax;
};

class FeSourceEdge_t {
public:
    uint16_t nNode[2];
};

class FeAntiTunnelProbe_t {
public:
    float flWeight;
    uint32_t nFlags;
    uint16_t nProbeNode;
    uint16_t nCount;
    uint32_t nBegin;
    float flActivationDistance;
    float flCurvatureRadius;
    float flBias;
};

class FeCtrlOsOffset_t {
public:
    uint16_t nCtrlParent;
    uint16_t nCtrlChild;
};

class RnFace_t {
public:
    uint8_t m_nEdge;
};

class FeDynKinLink_t {
public:
    uint16_t m_nParent;
    uint16_t m_nChild;
};

class Dop26_t {
public:
    float m_flSupport[26];
};

class RnVertex_t {
public:
    uint8_t m_nEdge;
};

class PhysicsParticleId_t {
public:
    uint32_t m_Value;
};

class CovMatrix3 {
public:
    // Vector m_vDiag;
    char pad_00[12];
    float m_flXY;
    float m_flXZ;
    float m_flYZ;
};

class FeAntiTunnelGroupBuild_t {
public:
    uint32_t m_nVertexMapHash;
    uint32_t m_nCollisionMask;
};

class FeModelSelfCollisionLayer_t {
public:
    // CUtlString m_Name;
    // CUtlVector< uint16 > m_Nodes;
    char pad_00[32];
    float m_flParentReaction;
    uint32_t m_nFlags;
    uint32_t m_nEndIdx[4];
};

class RnHull_t {
public:
    // Vector m_vCentroid;
    char pad_00[12];
    float m_flMaxAngularRadius;
    AABB_t m_Bounds;
    // Vector m_vOrthographicAreas;
    // matrix3x4_t m_MassProperties;
    char pad_01[60];
    float m_flVolume;
    float m_flSurfaceArea;
    // CUtlVector< RnVertex_t > m_Vertices;
    // CUtlVector< Vector > m_VertexPositions;
    // CUtlVector< RnHalfEdge_t > m_Edges;
    // CUtlVector< RnFace_t > m_Faces;
    // CUtlVector< RnPlane_t > m_FacePlanes;
    char pad_02[124];
    uint32_t m_nFlags;
    CRegionSVM* m_pRegionSVM;
};

class FeTri_t {
public:
    uint16_t nNode[3];
    float w1;
    float w2;
    float v1x;
    // Vector2D v2;
    char pad_00[8];
};

class CFeVertexMapBuildArray {
public:
    // CUtlVector< FeVertexMapBuild_t* > m_Array;
    char pad_00[24];
};

class FeVertexMapBuild_t {
public:
    // CUtlString m_VertexMapName;
    char pad_00[8];
    uint32_t m_nNameHash;
    // Color m_Color;
    char pad_01[4];
    float m_flVolumetricSolveStrength;
    int32_t m_nScaleSourceNode;
    // CUtlVector< float32 > m_Weights;
    char pad_02[24];
};

class FeNodeBase_t {
public:
    uint16_t nNode;
    uint16_t nDummy[3];
    uint16_t nNodeX0;
    uint16_t nNodeX1;
    uint16_t nNodeY0;
    uint16_t nNodeY1;
    // QuaternionStorage qAdjust;
    char pad_00[16];
};

class IPhysicsPlayerController {
public:
    char pad_00[8];
};

class FeCtrlOffset_t {
public:
    // Vector vOffset;
    char pad_00[12];
    uint16_t nCtrlParent;
    uint16_t nCtrlChild;
};

class FeMorphLayerDepr_t {
public:
    // CUtlString m_Name;
    char pad_00[8];
    uint32_t m_nNameHash;
    // CUtlVector< uint16 > m_Nodes;
    // CUtlVector< Vector > m_InitPos;
    // CUtlVector< float32 > m_Gravity;
    // CUtlVector< float32 > m_GoalStrength;
    // CUtlVector< float32 > m_GoalDamping;
    char pad_01[124];
    uint32_t m_nFlags;
    char pad_02[4];
};

class FeBoxRigid_t {
public:
    // CTransform tmFrame2;
    char pad_00[32];
    uint16_t nNode;
    uint16_t nCollisionMask;
    // Vector vSize;
    char pad_01[12];
    uint16_t nVertexMapIndex;
    uint16_t nFlags;
    char pad_02[12];
};

class FeStiffHingeBuild_t {
public:
    float flMaxAngle;
    float flStrength;
    float flMotionBias[3];
    uint16_t nNode[3];
    char pad_00[2];
};

class FeCollisionPlane_t {
public:
    uint16_t nCtrlParent;
    uint16_t nChildNode;
    // RnPlane_t m_Plane;
    char pad_00[16];
    float flStrength;
};

class FeRigidColliderIndices_t {
public:
    uint16_t m_nTaperedCapsuleRigidIndex;
    uint16_t m_nSphereRigidIndex;
    uint16_t m_nBoxRigidIndex;
    uint16_t m_nSDFRigidIndex;
    uint16_t m_nCollisionPlaneIndex;
};

class CastSphereSATParams_t {
public:
    // Vector m_vRayStart;
    // Vector m_vRayDelta;
    char pad_00[24];
    float m_flRadius;
    float m_flMaxFraction;
    float m_flScale;
    RnHull_t* m_pHull;
};

class FeKelagerBend2_t {
public:
    float flWeight[3];
    float flHeight0;
    uint16_t nNode[3];
    uint16_t nReserved;
};

class FourVectors2D {
public:
    // fltx4 x;
    // fltx4 y;
    char pad_00[32];
};

class FeSpringIntegrator_t {
public:
    uint16_t nNode[2];
    float flSpringRestLength;
    float flSpringConstant;
    float flSpringDamping;
    float flNodeWeight0;
};

class FeEffectDesc_t {
public:
    // CUtlString sName;
    char pad_00[8];
    uint32_t nNameHash;
    int32_t nType;
    // KeyValues3 m_Params;
    char pad_01[16];
};

class CollisionDetailLayerInfo_t {
public:
    // CUtlString m_sDescription;
    // CUtlString m_sFriendlyName;
    char pad_00[16];
    bool m_bIsQueryOnly;
    // CUtlString m_sParentDetailLayer;
    // CUtlVector< CollisionDetailLayerInfo_t::Name_t > m_vecSubtreeDetailLayers;
    char pad_01[39];
    bool m_bNotPickable;
    char pad_02[7];
};

class FeWeightedNode_t {
public:
    uint16_t nNode;
    uint16_t nWeight;
};

class RnWing_t {
public:
    int32_t m_nIndex[3];
};

class FeHingeLimit_t {
public:
    uint16_t nNode[6];
    uint32_t nFlags;
    float flWeight4;
    float flWeight5;
    float flAngleCenter;
    float flAngleExtents;
};

class FeQuad_t {
public:
    uint16_t nNode[4];
    float flSlack;
    // Vector4D[4] vShape;
    char pad_00[64];
};

class FeSimdNodeBase_t {
public:
    uint16_t nNode[4];
    uint16_t nNodeX0[4];
    uint16_t nNodeX1[4];
    uint16_t nNodeY0[4];
    uint16_t nNodeY1[4];
    uint16_t nDummy[4];
    FourQuaternions qAdjust;
};

class FeSimdSpringIntegrator_t {
public:
    uint16_t nNode[4];
    // fltx4 flSpringRestLength;
    // fltx4 flSpringConstant;
    // fltx4 flSpringDamping;
    // fltx4 flNodeWeight0;
    char pad_00[72];
};

class FeSimdQuad_t {
public:
    uint16_t nNode[4];
    // fltx4 f4Slack;
    // FourVectors[4] vShape;
    // fltx4[4] f4Weights;
    char pad_00[296];
};

class FeFitMatrix_t {
public:
    // CTransform bone;
    // Vector vCenter;
    char pad_00[44];
    uint16_t nEnd;
    uint16_t nNode;
    uint16_t nBeginDynamic;
    char pad_01[14];
};

class RnNode_t {
public:
    // Vector m_vMin;
    char pad_00[12];
    uint32_t m_nChildren;
    // Vector m_vMax;
    char pad_01[12];
    uint32_t m_nTriangleOffset;
};

class FeWorldCollisionParams_t {
public:
    float flWorldFriction;
    float flGroundFriction;
    uint16_t nListBegin;
    uint16_t nListEnd;
};

class CRegionSVM {
public:
    // CUtlVector< RnPlane_t > m_Planes;
    // CUtlVector< uint32 > m_Nodes;
    char pad_00[48];
};

class CFeJiggleBone {
public:
    uint32_t m_nFlags;
    float m_flLength;
    float m_flTipMass;
    float m_flYawStiffness;
    float m_flYawDamping;
    float m_flPitchStiffness;
    float m_flPitchDamping;
    float m_flAlongStiffness;
    float m_flAlongDamping;
    float m_flAngleLimit;
    float m_flMinYaw;
    float m_flMaxYaw;
    float m_flYawFriction;
    float m_flYawBounce;
    float m_flMinPitch;
    float m_flMaxPitch;
    float m_flPitchFriction;
    float m_flPitchBounce;
    float m_flBaseMass;
    float m_flBaseStiffness;
    float m_flBaseDamping;
    float m_flBaseMinLeft;
    float m_flBaseMaxLeft;
    float m_flBaseLeftFriction;
    float m_flBaseMinUp;
    float m_flBaseMaxUp;
    float m_flBaseUpFriction;
    float m_flBaseMinForward;
    float m_flBaseMaxForward;
    float m_flBaseForwardFriction;
    float m_flRadius0;
    float m_flRadius1;
    // Vector m_vPoint0;
    // Vector m_vPoint1;
    char pad_00[24];
    uint16_t m_nCollisionMask;
    char pad_01[2];
};

class FeSDFRigid_t {
public:
    // Vector vLocalMin;
    // Vector vLocalMax;
    char pad_00[24];
    float flBounciness;
    uint16_t nNode;
    uint16_t nCollisionMask;
    uint16_t nVertexMapIndex;
    uint16_t nFlags;
    // CUtlVector< float32 > m_Distances;
    char pad_01[28];
    int32_t m_nWidth;
    int32_t m_nHeight;
    int32_t m_nDepth;
    char pad_02[4];
};

class RnPlane_t {
public:
    // Vector m_vNormal;
    char pad_00[12];
    float m_flOffset;
};

class FeNodeReverseOffset_t {
public:
    // Vector vOffset;
    char pad_00[12];
    uint16_t nBoneCtrl;
    uint16_t nTargetNode;
};

class FeNodeStrayBox_t {
public:
    // Vector vMin;
    char pad_00[12];
    uint32_t nFlags;
    // Vector vMax;
    char pad_01[12];
    uint16_t nNode[2];
};

class FeEdgeDesc_t {
public:
    uint16_t nEdge[2];
    uint16_t nSide[2];
    char pad_00[4];
    uint16_t nVirtElem[2];
};

class FeAnimStrayRadius_t {
public:
    uint16_t nNode[2];
    float flMaxDist;
    float flRelaxationFactor;
};

class FeTaperedCapsuleRigid_t {
public:
    // fltx4[2] vSphere;
    char pad_00[32];
    uint16_t nNode;
    uint16_t nCollisionMask;
    uint16_t nVertexMapIndex;
    uint16_t nFlags;
    char pad_01[8];
};

class FeVertexMapDesc_t {
public:
    // CUtlString sName;
    char pad_00[8];
    uint32_t nNameHash;
    uint32_t nColor;
    uint32_t nFlags;
    uint16_t nVertexBase;
    uint16_t nVertexCount;
    uint32_t nMapOffset;
    uint32_t nNodeListOffset;
    // Vector vCenterOfMass;
    char pad_01[12];
    float flVolumetricSolveStrength;
    int16_t nScaleSourceNode;
    uint16_t nNodeListCount;
    char pad_02[4];
};

class FeCtrlSoftOffset_t {
public:
    uint16_t nCtrlParent;
    uint16_t nCtrlChild;
    // Vector vOffset;
    char pad_00[12];
    float flAlpha;
};

class CFeMorphLayer {
public:
    // CUtlString m_Name;
    char pad_00[8];
    uint32_t m_nNameHash;
    // CUtlVector< uint16 > m_Nodes;
    // CUtlVector< Vector > m_InitPos;
    // CUtlVector< float32 > m_Gravity;
    // CUtlVector< float32 > m_GoalStrength;
    // CUtlVector< float32 > m_GoalDamping;
    char pad_01[124];
};

class RnBlendVertex_t {
public:
    uint16_t m_nWeight0;
    uint16_t m_nIndex0;
    uint16_t m_nWeight1;
    uint16_t m_nIndex1;
    uint16_t m_nWeight2;
    uint16_t m_nIndex2;
    uint16_t m_nFlags;
    uint16_t m_nTargetIndex;
};

class FeBuildSDFRigid_t {
public:
    char pad_00[80];
    int32_t m_nPriority;
    uint32_t m_nVertexMapHash;
    uint32_t m_nAntitunnelGroupBits;
    char pad_01[4];
};

class VertexPositionNormal_t {
public:
    // Vector m_vPosition;
    // Vector m_vNormal;
    char pad_00[24];
};

class RnMesh_t {
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
    uint32_t m_nFlags;
    uint32_t m_nDebugFlags;
    char pad_01[4];
};

class FeFollowNode_t {
public:
    uint16_t nParentNode;
    uint16_t nChildNode;
    float flWeight;
};

class OldFeEdge_t {
public:
    float m_flK[3];
    float invA;
    float t;
    float flThetaRelaxed;
    float flThetaFactor;
    float c01;
    float c02;
    float c03;
    float c04;
    float flAxialModelDist;
    float flAxialModelWeights[4];
    uint16_t m_nNode[4];
};

class RnBodyDesc_t {
public:
    // CUtlString m_sDebugName;
    // Vector m_vPosition;
    // QuaternionStorage m_qOrientation;
    // Vector m_vLinearVelocity;
    // Vector m_vAngularVelocity;
    // Vector m_vLocalMassCenter;
    // Vector[3] m_LocalInertiaInv;
    char pad_00[108];
    float m_flMassInv;
    float m_flGameMass;
    float m_flMassScaleInv;
    float m_flInertiaScaleInv;
    float m_flLinearDamping;
    float m_flAngularDamping;
    float m_flLinearDragScale;
    float m_flAngularDragScale;
    float m_flLinearFluidDragScale;
    float m_flAngularFluidDragScale;
    // Vector m_vLastAwakeForceAccum;
    // Vector m_vLastAwakeTorqueAccum;
    char pad_01[24];
    float m_flBuoyancyScale;
    float m_flGravityScale;
    float m_flTimeScale;
    int32_t m_nBodyType;
    uint32_t m_nGameIndex;
    uint32_t m_nGameFlags;
    int8_t m_nMinVelocityIterations;
    int8_t m_nMinPositionIterations;
    int8_t m_nMassPriority;
    bool m_bEnabled;
    bool m_bSleeping;
    bool m_bIsContinuousEnabled;
    bool m_bDragEnabled;
    // Vector m_vGravity;
    char pad_02[13];
    bool m_bSpeculativeEnabled;
    bool m_bHasShadowController;
    DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior;
    char pad_03[5];
};

class FeAntiTunnelProbeBuild_t {
public:
    float flWeight;
    float flActivationDistance;
    float flBias;
    float flCurvature;
    uint32_t nFlags;
    uint16_t nProbeNode;
    // CUtlVector< uint16 > targetNodes;
    char pad_00[26];
};

class CFeNamedJiggleBone {
public:
    // CUtlString m_strParentBone;
    // CTransform m_transform;
    char pad_00[48];
    uint32_t m_nJiggleParent;
    CFeJiggleBone m_jiggleBone;
};

class RnCapsule_t {
public:
    // Vector[2] m_vCenter;
    char pad_00[24];
    float m_flRadius;
};

class FeNodeIntegrator_t {
public:
    float flPointDamping;
    float flAnimationForceAttraction;
    float flAnimationVertexAttraction;
    float flGravity;
};

class FeProxyVertexMap_t {
public:
    // CUtlString m_Name;
    char pad_00[8];
    float m_flWeight;
    char pad_01[4];
};

class RnTriangle_t {
public:
    int32_t m_nIndex[3];
};

class FeSimdAnimStrayRadius_t {
public:
    uint16_t nNode[4];
    // fltx4 flMaxDist;
    // fltx4 flRelaxationFactor;
    char pad_00[40];
};

class FeBuildSphereRigid_t {
public:
    char pad_00[32];
    int32_t m_nPriority;
    uint32_t m_nVertexMapHash;
    uint32_t m_nAntitunnelGroupBits;
    char pad_01[4];
};

class constraint_hingeparams_t {
public:
    // Vector worldPosition;
    // Vector worldAxisDirection;
    // constraint_axislimit_t hingeAxis;
    char pad_00[40];
    constraint_breakableparams_t constraint;
};

class FeSimdRodConstraint_t {
public:
    uint16_t nNode[4];
    // fltx4 f4MaxDist;
    // fltx4 f4MinDist;
    // fltx4 f4Weight0;
    // fltx4 f4RelaxationFactor;
    char pad_00[72];
};

class FeSimdRodConstraintAnim_t {
public:
    uint16_t nNode[4];
    // fltx4 f4Weight0;
    // fltx4 f4RelaxationFactor;
    char pad_00[40];
};

class constraint_axislimit_t {
public:
    float flMinRotation;
    float flMaxRotation;
    float flMotorTargetAngSpeed;
    float flMotorMaxTorque;
};

class FeTaperedCapsuleStretch_t {
public:
    uint16_t nNode[2];
    uint16_t nCollisionMask;
    uint16_t nDummy;
    float flRadius[2];
};

class FeBandBendLimit_t {
public:
    float flDistMin;
    float flDistMax;
    uint16_t nNode[6];
};

class CFeIndexedJiggleBone {
public:
    uint32_t m_nNode;
    uint32_t m_nJiggleParent;
    CFeJiggleBone m_jiggleBone;
};

class FeBuildBoxRigid_t {
public:
    char pad_00[64];
    int32_t m_nPriority;
    uint32_t m_nVertexMapHash;
    uint32_t m_nAntitunnelGroupBits;
    char pad_01[4];
};

class vphysics_save_cphysicsbody_t {
public:
    char pad_00[224];
    uint64_t m_nOldPointer;
};

class VMixDynamicsDesc_t {
public:
    float m_fldbGain;
    float m_fldbNoiseGateThreshold;
    float m_fldbCompressionThreshold;
    float m_fldbLimiterThreshold;
    float m_fldbKneeWidth;
    float m_flRatio;
    float m_flLimiterRatio;
    float m_flAttackTimeMS;
    float m_flReleaseTimeMS;
    float m_flRMSTimeMS;
    float m_flWetMix;
    bool m_bPeakMode;
    char pad_00[3];
};

class VMixFlangerDesc_t {
public:
    bool m_bPhaseInvert;
    float m_flGlideTime;
    float m_flDelay;
    float m_flOutputGain;
    float m_flFeedbackGain;
    float m_flFeedforwardGain;
    float m_flModRate;
    float m_flModDepth;
    bool m_bApplyAntialiasing;
    char pad_00[3];
};

class CVMixAutoFilterProcessorDesc {
public:
    // VMixAutoFilterDesc_t m_desc;
    char pad_00[80];
};

class VMixOscDesc_t {
public:
    VMixLFOShape_t oscType;
    float m_freq;
    float m_flPhase;
};

class VMixFilterDesc_t {
public:
    VMixFilterType_t m_nFilterType;
    VMixFilterSlope_t m_nFilterSlope;
    bool m_bEnabled;
    float m_fldbGain;
    float m_flCutoffFreq;
    float m_flQ;
};

class CVMixBoxverb2ProcessorDesc {
public:
    // VMixBoxverbDesc_t m_desc;
    char pad_00[112];
};

class CVMixDelayProcessorDesc {
public:
    // VMixDelayDesc_t m_desc;
    char pad_00[72];
};

class CVoiceContainerDecayingSineWave {
public:
    char pad_00[168];
    float m_flFrequency;
    float m_flDecayTime;
};

class CVoiceContainerLoopTrigger {
public:
    // CSoundContainerReference m_sound;
    char pad_00[192];
    float m_flRetriggerTimeMin;
    float m_flRetriggerTimeMax;
    float m_flFadeTime;
    bool m_bCrossFade;
    char pad_01[3];
};

class VMixUtilityDesc_t {
public:
    VMixChannelOperation_t m_nOp;
    float m_flInputPan;
    float m_flOutputBalance;
    float m_fldbOutputGain;
    bool m_bBassMono;
    float m_flBassFreq;
};

class VMixVocoderDesc_t {
public:
    int32_t m_nBandCount;
    float m_flBandwidth;
    float m_fldBModGain;
    float m_flFreqRangeStart;
    float m_flFreqRangeEnd;
    float m_fldBUnvoicedGain;
    float m_flAttackTimeMS;
    float m_flReleaseTimeMS;
    int32_t m_nDebugBand;
    bool m_bPeakMode;
    char pad_00[3];
};

class CSosGroupActionTimeLimitSchema {
public:
    char pad_00[8];
    float m_flMaxDuration;
    char pad_01[4];
};

class CVoiceContainerEnum {
public:
    // CSoundContainerReferenceArray m_soundsToPlay;
    char pad_00[224];
    int32_t m_iSelection;
    float m_flCrossfadeTime;
};

class CVMixControlMeter {
public:
    char pad_00[16];
    int32_t m_nValueIndex;
    char pad_01[4];
};

class CVoiceContainerSwitch {
public:
    // CUtlVector< CSoundContainerReference > m_soundsToPlay;
    char pad_00[192];
};

class CVMixDualCompressorProcessorDesc {
public:
    // VMixDualCompressorDesc_t m_desc;
    char pad_00[88];
};

class CSosGroupActionMemberCountEnvelopeSchema {
public:
    char pad_00[8];
    int32_t m_nBaseCount;
    int32_t m_nTargetCount;
    float m_flBaseValue;
    float m_flTargetValue;
    float m_flAttack;
    float m_flDecay;
    // CUtlString m_resultVarName;
    char pad_01[8];
    bool m_bSaveToGroup;
    char pad_02[7];
};

class CSosGroupActionTimeBlockLimitSchema {
public:
    char pad_00[8];
    int32_t m_nMaxCount;
    float m_flMaxDuration;
};

class CVoiceContainerSelector {
public:
    char pad_00[168];
    PlayBackMode_t m_mode;
    // CSoundContainerReferenceArray m_soundsToPlay;
    // CUtlVector< float32 > m_fProbabilityWeights;
    char pad_01[116];
};

class CVoiceContainerStaticAdditiveSynth::CGainScalePerInstance {
public:
    float m_flMinVolume;
    int32_t m_nInstancesAtMinVolume;
    float m_flMaxVolume;
    int32_t m_nInstancesAtMaxVolume;
};

class CVMixVsndInput {
public:
    // CUtlString m_defaultValue;
    char pad_00[24];
    int32_t m_nProcessor;
    char pad_01[4];
};

class CVoiceContainerMultiBlender {
public:
    // CSoundContainerReferenceArray m_soundsToPlay;
    char pad_00[224];
    float m_flBlendFactor;
    float m_flCrossover;
};

class CVMixPlateReverbProcessorDesc {
public:
    // VMixPlateverbDesc_t m_desc;
    char pad_00[64];
};

class VMixEffectChainDesc_t {
public:
    // CUtlString m_effectName;
    char pad_00[8];
};

class VMixDynamicsBand_t {
public:
    float m_fldbGainInput;
    float m_fldbGainOutput;
    float m_fldbThresholdBelow;
    float m_fldbThresholdAbove;
    float m_flRatioBelow;
    float m_flRatioAbove;
    float m_flAttackTimeMS;
    float m_flReleaseTimeMS;
    bool m_bEnable;
    bool m_bSolo;
    char pad_00[2];
};

class VMixAutoFilterDesc_t {
public:
    float m_flEnvelopeAmount;
    float m_flAttackTimeMS;
    float m_flReleaseTimeMS;
    VMixFilterDesc_t m_filter;
    float m_flLFOAmount;
    float m_flLFORate;
    float m_flPhase;
    VMixLFOShape_t m_nLFOShape;
};

class CVoiceContainerEnvelope {
public:
    // CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sound;
    char pad_00[176];
    CVoiceContainerAnalysisBase* m_analysisContainer;
};

class CVoiceContainerAmpedDecayingSineWave {
public:
    char pad_00[176];
    float m_flGainAmount;
    char pad_01[4];
};

class CSosGroupActionLimitSchema {
public:
    char pad_00[8];
    int32_t m_nMaxCount;
    SosActionStopType_t m_nStopType;
    SosActionLimitSortType_t m_nSortType;
    bool m_bStopImmediate;
    bool m_bCountStopped;
    char pad_01[2];
};

class CVMixVocoderProcessorDesc {
public:
    char pad_00[32];
    VMixVocoderDesc_t m_desc;
};

class CVMixAudioMeter {
public:
    // CUtlString m_name;
    // CUtlString m_displayName;
    char pad_00[24];
};

class CVoiceContainerParameterBlender {
public:
    // CSoundContainerReference m_firstSound;
    // CSoundContainerReference m_secondSound;
    char pad_00[216];
    bool m_bEnableOcclusionBlend;
    // CPiecewiseCurve m_curve1;
    // CPiecewiseCurve m_curve2;
    char pad_01[135];
    bool m_bEnableDistanceBlend;
    // CPiecewiseCurve m_curve3;
    // CPiecewiseCurve m_curve4;
    char pad_02[135];
};

class CAudioSentence {
public:
    bool m_bShouldVoiceDuck;
    // CUtlVector< CAudioPhonemeTag > m_RunTimePhonemes;
    // CUtlVector< CAudioEmphasisSample > m_EmphasisSamples;
    // CAudioMorphData m_morphData;
    char pad_00[159];
};

class VMixEnvelopeDesc_t {
public:
    float m_flAttackTimeMS;
    float m_flHoldTimeMS;
    float m_flReleaseTimeMS;
};

class VMixShaperDesc_t {
public:
    int32_t m_nShape;
    float m_fldbDrive;
    float m_fldbOutputGain;
    float m_flWetMix;
    int32_t m_nOversampleFactor;
};

class CVMixStereoDelayProcessorDesc {
public:
    char pad_00[32];
};

class VMixDynamicsCompressorDesc_t {
public:
    float m_fldbOutputGain;
    float m_fldbCompressionThreshold;
    float m_fldbKneeWidth;
    float m_flCompressionRatio;
    float m_flAttackTimeMS;
    float m_flReleaseTimeMS;
    float m_flRMSTimeMS;
    float m_flWetMix;
    bool m_bPeakMode;
    char pad_00[3];
};

class CVMixPannerProcessorDesc {
public:
    // VMixPannerDesc_t m_desc;
    char pad_00[40];
};

class CVMixSteamAudioPathingProcessorDesc {
public:
    char pad_00[32];
};

class VMixDiffusorDesc_t {
public:
    float m_flSize;
    float m_flComplexity;
    float m_flFeedback;
    float m_flOutputGain;
};

class CVMixSubgraphSwitchProcessorDesc {
public:
    // VMixSubgraphSwitchDesc_t m_desc;
    char pad_00[88];
};

class CVoiceContainerTapePlayer {
public:
    char pad_00[184];
    bool m_bShouldWraparound;
    // CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sourceAudio;
    char pad_01[12];
    float m_flTapeSpeedAttackTime;
    float m_flTapeSpeedReleaseTime;
    char pad_02[40];
};

class CVMixAdditionalOutput {
public:
    // CUtlString m_name;
    char pad_00[16];
};

class CVMixFilterProcessorDesc {
public:
    char pad_00[32];
    VMixFilterDesc_t m_desc;
};

class CSoundContainerReferenceArray {
public:
    bool m_bUseReference;
    // CUtlVector< CStrongHandle< InfoForResourceTypeCVoiceContainerBase > > m_sounds;
    // CUtlVector< CVoiceContainerBase* > m_pSounds;
    char pad_00[55];
};

class CVMixConvolutionProcessorDesc {
public:
    // VMixConvolutionDesc_t m_desc;
    char pad_00[64];
};

class VMixPlateverbDesc_t {
public:
    float m_flPrefilter;
    float m_flInputDiffusion1;
    float m_flInputDiffusion2;
    float m_flDecay;
    float m_flDamp;
    float m_flFeedbackDiffusion1;
    float m_flFeedbackDiffusion2;
};

class CVMixFreeverbProcessorDesc {
public:
    // VMixFreeverbDesc_t m_desc;
    char pad_00[48];
};

class CVMixEffectChainProcessorDesc {
public:
    char pad_00[32];
    VMixEffectChainDesc_t m_desc;
};

class CVMixFlangerProcessorDesc {
public:
    char pad_00[32];
    VMixFlangerDesc_t m_desc;
    char pad_01[4];
};

class SosEditItemInfo_t {
public:
    SosEditItemType_t itemType;
    // CUtlString itemName;
    // CUtlString itemTypeName;
    // CUtlString itemKVString;
    // Vector2D itemPos;
    char pad_00[44];
};

class CSoundInfoHeader {
public:
    char pad_00[1];
};

class CVoiceContainerAsyncGenerator {
public:
    char pad_00[184];
};

class CVoiceContainerSetElement {
public:
    // CSoundContainerReference m_sound;
    char pad_00[24];
    float m_flVolumeDB;
    char pad_01[4];
};

class VMixConvolutionDesc_t {
public:
    float m_fldbGain;
    float m_flPreDelayMS;
    float m_flWetMix;
    float m_fldbLow;
    float m_fldbMid;
    float m_fldbHigh;
    float m_flLowCutoffFreq;
    float m_flHighCutoffFreq;
};

class CVoiceContainerSet {
public:
    // CUtlVector< CVoiceContainerSetElement > m_soundsToPlay;
    char pad_00[192];
};

class CVoiceContainerGenerator {
public:
    char pad_00[168];
};

class CVMixCurveHeader {
public:
    uint32_t m_nControlPointCount;
    uint32_t m_nControlPointStart;
};

class CVMixOscProcessorDesc {
public:
    char pad_00[32];
    VMixOscDesc_t m_desc;
    char pad_01[4];
};

class CAudioEmphasisSample {
public:
    float m_flTime;
    float m_flValue;
};

class CVMixAutomaticControlInput {
public:
    // CUtlString m_name;
    char pad_00[8];
    int32_t m_nControlInputIndex;
    bool m_bIsTrackSend;
    bool m_bIsStackVar;
    char pad_01[2];
};

class CVMixShaperProcessorDesc {
public:
    char pad_00[32];
    VMixShaperDesc_t m_desc;
    char pad_01[4];
};

class CVMixModDelayProcessorDesc {
public:
    // VMixModDelayDesc_t m_desc;
    char pad_00[80];
};

class CVMixControlOutput {
public:
    char pad_00[16];
    float m_flDefaultValue;
    char pad_01[4];
};

class VMixPitchShiftDesc_t {
public:
    int32_t m_nGrainSampleCount;
    float m_flPitchShift;
    int32_t m_nQuality;
    int32_t m_nProcType;
};

class CSoundEventMetaData {
public:
    // CStrongHandle< InfoForResourceTypeCVMixListResource > m_soundEventVMix;
    char pad_00[8];
};

class CVMixSteamAudioHybridReverbProcessorDesc {
public:
    char pad_00[32];
};

class CVMixImpulseResponseInput {
public:
    char pad_00[16];
};

class CVMixBaseProcessorDesc {
public:
    // CUtlString m_name;
    char pad_00[20];
    int32_t m_nChannels;
    float m_flxfade;
    char pad_01[4];
};

class CVoiceContainerEnvelopeAnalyzer {
public:
    char pad_00[80];
    EMode_t m_mode;
    float m_fAnalysisWindowMs;
    float m_flThreshold;
    char pad_01[4];
};

class CSosGroupActionSoundeventCountSchema {
public:
    char pad_00[8];
    bool m_bExcludeStoppedSounds;
    // CUtlString m_strCountKeyName;
    char pad_01[15];
};

class CVMixNameInput {
public:
    // CUtlString m_defaultValue;
    char pad_00[32];
};

class CVMixControlInputArray {
public:
    char pad_00[16];
    int32_t m_nArrayIndex;
    char pad_01[4];
};

class CAudioPhonemeTag {
public:
    float m_flStartTime;
    float m_flEndTime;
    int32_t m_nPhonemeCode;
};

class VMixPresetDSPDesc_t {
public:
    // CUtlString m_effectName;
    char pad_00[16];
};

class CVoiceContainerLoopXFade {
public:
    // CSoundContainerReference m_sound;
    char pad_00[192];
    float m_flLoopEnd;
    float m_flLoopStart;
    float m_flFadeOut;
    float m_flFadeIn;
    bool m_bPlayHead;
    bool m_bPlayTail;
    bool m_bEqualPow;
    char pad_01[5];
};

class CVMixGraphDescData {
public:
    // CUtlString m_name;
    char pad_00[8];
    int32_t m_nGraphOutputChannels;
    bool m_bIsMainGraph;
    char pad_01[3];
};

class CVMixDynamicsProcessorDesc {
public:
    char pad_00[32];
    VMixDynamicsDesc_t m_desc;
};

class VMixEQ8Desc_t {
public:
    VMixFilterDesc_t m_stages;
    char pad_00[112];
};

class VMixDelayDesc_t {
public:
    VMixFilterDesc_t m_feedbackFilter;
    bool m_bEnableFilter;
    float m_flDelay;
    float m_flDirectGain;
    float m_flDelayGain;
    float m_flFeedbackGain;
    float m_flWidth;
};

class CVMixPresetDSPProcessorDesc {
public:
    char pad_00[32];
    VMixPresetDSPDesc_t m_desc;
};

class CVoiceContainerGranulator {
public:
    char pad_00[184];
    float m_flGrainLength;
    float m_flGrainCrossfadeAmount;
    float m_flStartJitter;
    float m_flPlaybackJitter;
    bool m_bShouldWraparound;
    // CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sourceAudio;
    char pad_01[199];
};

class CVMixUtilityProcessorDesc {
public:
    char pad_00[32];
    VMixUtilityDesc_t m_desc;
};

class CVMixDiffusorProcessorDesc {
public:
    char pad_00[32];
    VMixDiffusorDesc_t m_desc;
};

class CVoiceContainerBase {
public:
    // CVSound m_vSound;
    char pad_00[160];
    CVoiceContainerAnalysisBase* m_pEnvelopeAnalyzer;
};

class CDspPresetModifierList {
public:
    // CUtlString m_dspName;
    // CUtlVector< CDSPMixgroupModifier > m_modifiers;
    char pad_00[32];
};

class CVoiceContainerShapedNoise {
public:
    char pad_00[168];
    bool m_bUseCurveForFrequency;
    float m_flFrequency;
    // CPiecewiseCurve m_frequencySweep;
    char pad_01[64];
    bool m_bUseCurveForResonance;
    float m_flResonance;
    // CPiecewiseCurve m_resonanceSweep;
    char pad_02[64];
    bool m_bUseCurveForAmplitude;
    float m_flGainInDecibels;
    // CPiecewiseCurve m_gainSweep;
    char pad_03[64];
};

class CVoiceContainerStaticAdditiveSynth {
public:
    // CUtlVector< CVoiceContainerStaticAdditiveSynth::CTone > m_tones;
    char pad_00[232];
};

class VMixDualCompressorDesc_t {
public:
    float m_flRMSTimeMS;
    float m_fldbKneeWidth;
    float m_flWetMix;
    bool m_bPeakMode;
    VMixDynamicsBand_t m_bandDesc;
};

class CAudioMorphData {
public:
    // CUtlVector< float32 > m_times;
    // CUtlVector< uint32 > m_nameHashCodes;
    // CUtlVector< CUtlString > m_nameStrings;
    // CUtlVector< CUtlVector< float32 > > m_samples;
    char pad_00[96];
    float m_flEaseIn;
    float m_flEaseOut;
};

class CDSPMixgroupModifier {
public:
    // CUtlString m_mixgroup;
    char pad_00[8];
    float m_flModifier;
    float m_flModifierMin;
    float m_flSourceModifier;
    float m_flSourceModifierMin;
    float m_flListenerReverbModifierWhenSourceReverbIsActive;
    char pad_01[4];
};

class CVMixEQ8ProcessorDesc {
public:
    char pad_00[32];
    VMixEQ8Desc_t m_desc;
};

class VMixDynamics3BandDesc_t {
public:
    float m_fldbGainOutput;
    float m_flRMSTimeMS;
    float m_fldbKneeWidth;
    float m_flDepth;
    float m_flWetMix;
    float m_flTimeScale;
    float m_flLowCutoffFreq;
    float m_flHighCutoffFreq;
    bool m_bPeakMode;
    VMixDynamicsBand_t m_bandDesc;
    char pad_00[72];
};

class CSosSoundEventGroupSchema {
public:
    char pad_00[8];
    SosGroupType_t m_nGroupType;
    bool m_bBlocksEvents;
    int32_t m_nBlockMaxCount;
    float m_flMemberLifespanTime;
    bool m_bInvertMatch;
    SosGroupFieldBehavior_t m_Behavior_EventName;
    // CUtlString m_matchSoundEventName;
    char pad_01[8];
    bool m_bMatchEventSubString;
    // CUtlString m_matchSoundEventSubString;
    char pad_02[12];
    SosGroupFieldBehavior_t m_Behavior_EntIndex;
    float m_flEntIndex;
    SosGroupFieldBehavior_t m_Behavior_Opvar;
    float m_flOpvar;
    SosGroupFieldBehavior_t m_Behavior_String;
    // CUtlString m_opvarString;
    // CUtlVector< CSosGroupActionSchema* > m_vActions;
    char pad_03[36];
};

class CSosGroupActionSchema {
public:
    char pad_00[8];
};

class VMixBoxverbDesc_t {
public:
    float m_flSizeMax;
    float m_flSizeMin;
    float m_flComplexity;
    float m_flDiffusion;
    float m_flModDepth;
    float m_flModRate;
    bool m_bParallel;
    VMixFilterDesc_t m_filterType;
    float m_flWidth;
    float m_flHeight;
    float m_flDepth;
    float m_flFeedbackScale;
    float m_flFeedbackWidth;
    float m_flFeedbackHeight;
    float m_flFeedbackDepth;
    float m_flOutputGain;
    float m_flTaps;
};

class CVMixDynamics3BandProcessorDesc {
public:
    char pad_00[32];
    VMixDynamics3BandDesc_t m_desc;
};

class CVMixNameInputMeter {
public:
    char pad_00[16];
    int32_t m_nValueIndex;
    char pad_01[4];
};

class VMixModDelayDesc_t {
public:
    VMixFilterDesc_t m_feedbackFilter;
    bool m_bPhaseInvert;
    float m_flGlideTime;
    float m_flDelay;
    float m_flOutputGain;
    float m_flFeedbackGain;
    float m_flModRate;
    float m_flModDepth;
    bool m_bApplyAntialiasing;
    char pad_00[3];
};

class SelectedEditItemInfo_t {
public:
    // CUtlVector< SosEditItemInfo_t > m_EditItems;
    char pad_00[24];
};

class CVoiceContainerRealtimeFMSineWave {
public:
    char pad_00[168];
    float m_flCarrierFrequency;
    float m_flModulatorFrequency;
    float m_flModulatorAmount;
    char pad_01[4];
};

class CSosGroupActionSoundeventPrioritySchema {
public:
    // CUtlString m_priorityValue;
    // CUtlString m_priorityVolumeScalar;
    // CUtlString m_priorityContributeButDontRead;
    // CUtlString m_bPriorityReadButDontContribute;
    char pad_00[56];
};

class VMixPannerDesc_t {
public:
    VMixPannerType_t m_type;
    float m_flStrength;
};

class CVMixDynamicsCompressorProcessorDesc {
public:
    char pad_00[32];
    VMixDynamicsCompressorDesc_t m_desc;
    char pad_01[4];
};

class CVMixBoxverbProcessorDesc {
public:
    char pad_00[32];
    VMixBoxverbDesc_t m_desc;
};

class CVMixControlInput {
public:
    char pad_00[16];
    float m_flDefaultValue;
    char pad_01[4];
};

class CVMixCommand {
public:
    VMixGraphCommandID_t m_nCommand;
    uint32_t m_nParameterNameHash;
    int32_t m_nOutputSubmix;
    int32_t m_nInputSubmix0;
    int32_t m_nInputSubmix1;
    int32_t m_nProcessor;
    int32_t m_nInputValue0;
    int32_t m_nInputValue1;
};

class CVMixEnvelopeProcessorDesc {
public:
    char pad_00[32];
    VMixEnvelopeDesc_t m_desc;
    char pad_01[4];
};

class CSosGroupActionSoundeventMinMaxValuesSchema {
public:
    // CUtlString m_strQueryPublicFieldName;
    // CUtlString m_strDelayPublicFieldName;
    char pad_00[24];
    bool m_bExcludeStoppedSounds;
    bool m_bExcludeDelayedSounds;
    bool m_bExcludeSoundsBelowThreshold;
    float m_flExcludeSoundsMinThresholdValue;
    bool m_bExcludSoundsAboveThreshold;
    float m_flExcludeSoundsMaxThresholdValue;
    // CUtlString m_strMinValueName;
    // CUtlString m_strMaxValueName;
    char pad_01[24];
};

class CVoiceContainerAnalysisBase {
public:
    char pad_00[8];
    bool m_bRegenerateCurveOnCompile;
    // CPiecewiseCurve m_curve;
    char pad_01[71];
};

class VMixSubgraphSwitchDesc_t {
public:
    // CUtlString m_name;
    // CUtlString m_effectName;
    // CUtlVector< CUtlString > m_subgraphs;
    char pad_00[40];
    VMixSubgraphSwitchInterpolationType_t m_interpolationMode;
    bool m_bOnlyTailsOnFadeOut;
    float m_flInterpolationTime;
    char pad_01[4];
};

class CVoiceContainerNull {
public:
    char pad_00[168];
};

class CSoundContainerReference {
public:
    bool m_bUseReference;
    // CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sound;
    char pad_00[8];
    CVoiceContainerBase* m_pSound;
};

class CSosGroupActionSetSoundeventParameterSchema {
public:
    char pad_00[8];
    int32_t m_nMaxCount;
    float m_flMinValue;
    float m_flMaxValue;
    // CUtlString m_opvarName;
    char pad_01[12];
    SosActionSetParamSortType_t m_nSortType;
    char pad_02[4];
};

class CSosGroupActionSoundeventClusterSchema {
public:
    char pad_00[8];
    int32_t m_nMinNearby;
    float m_flClusterEpsilon;
    // CUtlString m_shouldPlayOpvar;
    // CUtlString m_shouldPlayClusterChild;
    // CUtlString m_clusterSizeOpvar;
    // CUtlString m_groupBoundingBoxMinsOpvar;
    // CUtlString m_groupBoundingBoxMaxsOpvar;
    char pad_01[64];
};

class CDSPPresetMixgroupModifierTable {
public:
    // CUtlVector< CDspPresetModifierList > m_table;
    char pad_00[24];
};

class CVSound {
public:
    int32_t m_nRate;
    CVSoundFormat_t m_nFormat;
    uint32_t m_nChannels;
    int32_t m_nLoopStart;
    uint32_t m_nSampleCount;
    float m_flDuration;
    // CUtlVector< CAudioSentence > m_Sentences;
    char pad_00[24];
    uint32_t m_nStreamingSize;
    // CUtlVector< int32 > m_nSeekTable;
    char pad_01[28];
    int32_t m_nLoopEnd;
    // CUtlBinaryBlock m_encodedHeader;
    char pad_02[36];
};

class CVoiceContainerDefault {
public:
    char pad_00[168];
};

class CVMixSteamAudioHRTFProcessorDesc {
public:
    char pad_00[32];
};

class CVMixSteamAudioDirectProcessorDesc {
public:
    char pad_00[32];
};

class CVoiceContainerRandomSampler {
public:
    char pad_00[184];
    float m_flAmplitude;
    float m_flAmplitudeJitter;
    float m_flTimeJitter;
    float m_flMaxLength;
    int32_t m_nNumDelayVariations;
    // CUtlVector< CStrongHandle< InfoForResourceTypeCVoiceContainerBase > > m_grainResources;
    char pad_01[276];
};

class CVoiceContainerStaticAdditiveSynth::CTone {
public:
    // CUtlVector< CVoiceContainerStaticAdditiveSynth::CHarmonic > m_harmonics;
    // CPiecewiseCurve m_curve;
    char pad_00[88];
    bool m_bSyncInstances;
    char pad_01[7];
};

class CVoiceContainerStaticAdditiveSynth::CHarmonic {
public:
    EWaveform m_nWaveform;
    EMidiNote m_nFundamental;
    int32_t m_nOctave;
    float m_flCents;
    float m_flPhase;
    // CPiecewiseCurve m_curve;
    char pad_00[64];
    CVoiceContainerStaticAdditiveSynth::CGainScalePerInstance m_volumeScaling;
    char pad_01[8];
};

class VMixFreeverbDesc_t {
public:
    float m_flRoomSize;
    float m_flDamp;
    float m_flWidth;
    float m_flLateReflections;
};

class CVMixPitchShiftProcessorDesc {
public:
    char pad_00[32];
    VMixPitchShiftDesc_t m_desc;
};

class CVoiceContainerBlender {
public:
    char pad_00[168];
    CSoundContainerReference m_firstSound;
    CSoundContainerReference m_secondSound;
    float m_flBlendFactor;
    char pad_01[4];
};

class CVMixInputBase {
public:
    // CUtlString m_name;
    char pad_00[16];
};

class CSteamAudioCompressedReverb {
public:
    int32_t m_nChannels;
    int32_t m_nBands;
    int32_t m_nBins;
    int32_t m_nProbes;
    // CUtlVector< int32 > m_vecNumSingularValues;
    // CUtlVector< float32 > m_vecDictionary;
    // CUtlVector< float32 > m_vecCompressedData;
    // IPLCompressedEnergyFields m_pCompressedData;
    char pad_00[80];
};

class CSteamAudioProbeGrid {
public:
    AABB_t m_aabb;
    float m_flSpacing;
    int32_t m_nx;
    int32_t m_ny;
    int32_t m_nz;
    // CUtlVector< CSteamAudioProbeLineSegment > m_vecLineSegments;
    // CUtlVector< Vector > m_vecProbes;
    char pad_00[48];
};

class CSteamAudioBakedDimensionsData {
public:
    // SteamAudioCustomDataDimensionsSettings_t m_settings;
    // CSteamAudioProbeData m_probes;
    // CUtlVector< float32 > m_vecInOut;
    // CUtlVector< float32 > m_vecSize;
    // CUtlVector< CSteamAudioAmbisonicsField > m_vecOutsideField;
    // CUtlVector< CSteamAudioAmbisonicsField > m_vecInsideSmallSizeField;
    // CSteamAudioMovableBakedData< CSteamAudioBakedDimensionsData > m_movables;
    char pad_00[296];
};

class SteamAudioCustomDataOcclusionSettings_t {
public:
    bool m_bEnablePathing;
    bool m_bEnableReflections;
    int32_t m_nReflectionRays;
    int32_t m_nReflectionBounces;
};

class CSteamAudioProbeLineSegment {
public:
    // Vector m_vStart;
    // Vector m_vEnd;
    // CUtlVector< float32 > m_vecIntervals;
    // CUtlVector< int32 > m_vecProbeIndices;
    char pad_00[72];
};

class CSteamAudioBakedReverbData {
public:
    int32_t m_nBands;
    // CSteamAudioProbeData m_probes;
    CSteamAudioProbeGrid m_grid;
    // SteamAudioReverbSettings_t m_reverbSettings;
    // SteamAudioReverbClusteringSettings_t m_reverbClusteringSettings;
    // SteamAudioReverbCompressionSettings_t m_reverbCompressionSettings;
    // CSteamAudioProbeData m_clusteredProbes;
    // CUtlVector< int16 > m_vecClusterForProbe;
    char pad_00[72];
    CSteamAudioCompressedReverb m_compressedData;
    CSteamAudioCompressedReverb m_compressedClusteredData;
    // CSteamAudioMovableBakedData< CSteamAudioBakedReverbData > m_movables;
    char pad_01[168];
};

class CSteamAudioBakedOcclusionData {
public:
    SteamAudioCustomDataOcclusionSettings_t m_settings;
    // CSteamAudioProbeData m_probes;
    // CUtlVector< float32 > m_vecPathingRatio;
    // CUtlVector< float32 > m_vecPathingDeviation;
    // CUtlVector< float32 > m_vecReflectionRatio;
    char pad_00[84];
};

class CSteamAudioBakedMaterialsData {
public:
    // CSteamAudioProbeData m_probes;
    // CUtlVector< uint32 > m_vecMaterialTokens;
    // CUtlVector< float32 > m_vecMaterialWeights;
    char pad_00[56];
};

class SteamAudioReverbCompressionSettings_t {
public:
    bool m_bEnableCompression;
    float m_flQuality;
};

class CSteamAudioProbeData {
public:
    // IPLProbeBatch m_pProbeBatch;
    char pad_00[8];
};

class SteamAudioReverbSettings_t {
public:
    int32_t m_nNumRays;
    int32_t m_nNumBounces;
    float m_flIRDuration;
    int32_t m_nAmbisonicsOrder;
};

class CSteamAudioBakedPathingData {
public:
    int32_t m_nBands;
    CSteamAudioProbeData m_probes;
    // CSteamAudioMovableBakedData< CSteamAudioBakedPathingData > m_movables;
    char pad_00[168];
};

class CSteamAudioAmbisonicsField {
public:
    // CUtlVector< float32 > m_field;
    char pad_00[24];
};

class SteamAudioPathSettings_t {
public:
    int32_t m_nNumVisSamples;
    float m_flProbeVisRadius;
    float m_flProbeVisThreshold;
    float m_flProbePathRange;
};

class SteamAudioCustomDataDimensionsSettings_t {
public:
    int32_t m_nAmbisonicsOrderOutsideField;
    int32_t m_nAmbisonicsOrderInsideSizeField;
    float m_flOutsideThreshold;
    float m_flSizeThreshold;
    float m_flInsideThreshold;
};

class SteamAudioReverbClusteringSettings_t {
public:
    bool m_bEnableClustering;
    int32_t m_nCubeMapResolution;
    float m_flDepthThreshold;
};

class CSSDSMsg_EndFrame {
public:
    // CUtlVector< CSSDSEndFrameViewInfo > m_Views;
    char pad_00[24];
};

class CSSDSMsg_ViewRender {
public:
    // SceneViewId_t m_viewId;
    // CUtlString m_ViewName;
    char pad_00[24];
};

class CSSDSMsg_ViewTargetList {
public:
    // SceneViewId_t m_viewId;
    // CUtlString m_ViewName;
    // CUtlVector< CSSDSMsg_ViewTarget > m_Targets;
    char pad_00[48];
};

class CSSDSMsg_PreLayer {
public:
    char pad_00[48];
};

class CSSDSMsg_LayerBase {
public:
    // SceneViewId_t m_viewId;
    // CUtlString m_ViewName;
    char pad_00[24];
    uint64_t m_nLayerId;
    // CUtlString m_LayerName;
    // CUtlString m_displayText;
    char pad_01[16];
};

class CSSDSMsg_PostLayer {
public:
    char pad_00[48];
};

class CSSDSEndFrameViewInfo {
public:
    uint64_t m_nViewId;
    // CUtlString m_ViewName;
    char pad_00[8];
};

class SceneViewId_t {
public:
    uint64_t m_nViewId;
    uint64_t m_nFrameCount;
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
    // VoxelVisBlockOffset_t m_NodeBlock;
    // VoxelVisBlockOffset_t m_RegionBlock;
    // VoxelVisBlockOffset_t m_EnclosedClusterListBlock;
    // VoxelVisBlockOffset_t m_EnclosedClustersBlock;
    // VoxelVisBlockOffset_t m_MasksBlock;
    // VoxelVisBlockOffset_t m_nVisBlocks;
    char pad_02[52];
};

class EntityKeyValueData_t {
public:
    // CUtlVector< EntityIOConnectionData_t > m_connections;
    // CUtlBinaryBlock m_keyValuesData;
    char pad_00[56];
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

class MaterialOverride_t {
public:
    char pad_00[4];
    uint32_t m_nSubSceneObject;
    uint32_t m_nDrawCallIndex;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_pMaterial;
    // Vector m_vLinearTintColor;
    char pad_01[28];
};

class BakedLightingInfo_t::BakedShadowAssignment_t {
public:
    uint32_t m_nLightHash;
    uint32_t m_nMapHash;
    int8_t m_nShadowChannel;
    char pad_00[3];
};

class World_t {
public:
    // WorldBuilderParams_t m_builderParams;
    // CUtlVector< NodeData_t > m_worldNodes;
    // BakedLightingInfo_t m_worldLightingInfo;
    // CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_entityLumps;
    char pad_00[216];
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

class WorldNodeOnDiskBufferData_t {
public:
    int32_t m_nElementCount;
    int32_t m_nElementSizeInBytes;
    // CUtlVector< RenderInputLayoutField_t > m_inputLayoutFields;
    // CUtlVector< uint8 > m_pData;
    char pad_00[48];
};

class InfoForResourceTypeVMapResourceData_t {
public:
    char pad_00[1];
};

class VoxelVisBlockOffset_t {
public:
    uint32_t m_nOffset;
    uint32_t m_nElementCount;
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

class BaseSceneObjectOverride_t {
public:
    uint32_t m_nSceneObjectIndex;
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

class PermEntityLumpData_t {
public:
    // CUtlString m_name;
    // CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_childLumps;
    // CUtlLeanVector< EntityKeyValueData_t > m_entityKeyValues;
    char pad_00[56];
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

class AggregateInstanceStreamOnDiskData_t {
public:
    uint32_t m_DecodedSize;
    // CUtlBinaryBlock m_BufferData;
    char pad_00[20];
};

class VMapResourceData_t {
public:
    char pad_00[1];
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

class ClutterTile_t {
public:
    uint32_t m_nFirstInstance;
    uint32_t m_nLastInstance;
    AABB_t m_BoundsWs;
};

class ExtraVertexStreamOverride_t {
public:
    char pad_00[4];
    uint32_t m_nSubSceneObject;
    uint32_t m_nDrawCallIndex;
    MeshDrawPrimitiveFlags_t m_nAdditionalMeshDrawPrimitiveFlags;
    CRenderBufferBinding m_extraBufferBinding;
};

class AggregateLODSetup_t {
public:
    // Vector m_vLODOrigin;
    char pad_00[12];
    float m_fMaxObjectScale;
    // CUtlVector< float32 > m_fSwitchDistances;
    char pad_01[24];
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

class AggregateVertexAlbedoStreamOnDiskData_t {
public:
    // CUtlBinaryBlock m_BufferData;
    char pad_00[16];
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

class C_OP_LerpEndCapScalar {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flOutput;
    float m_flLerpTime;
    char pad_01[4];
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

class C_INIT_SequenceFromCP {
public:
    char pad_00[472];
    bool m_bKillUnused;
    bool m_bRadiusScale;
    int32_t m_nCP;
    // Vector m_vecOffset;
    char pad_01[16];
};

class C_INIT_RemapParticleCountToNamedModelMeshGroupScalar {
public:
    char pad_00[552];
};

class C_INIT_InitVecCollection {
public:
    char pad_00[472];
    CParticleCollectionVecInput m_InputValue;
    ParticleAttributeIndex_t m_nOutputField;
    char pad_01[4];
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

class FloatInputMaterialVariable_t {
public:
    // CUtlString m_strVariable;
    char pad_00[8];
    CParticleCollectionFloatInput m_flInput;
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

class C_OP_WorldCollideConstraint {
public:
    char pad_00[464];
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
    // CReplicationParameters m_replicationParameters;
    char pad_02[4560];
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

class RenderProjectedMaterial_t {
public:
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial;
    char pad_00[8];
};

class PointDefinitionWithTimeValues_t {
public:
    char pad_00[20];
    float m_flTimeDuration;
};

class C_OP_SpinYaw {
public:
    char pad_00[488];
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

class C_OP_ParentVortices {
public:
    char pad_00[480];
    float m_flForceScale;
    // Vector m_vecTwistAxis;
    char pad_01[12];
    bool m_bFlipBasedOnYaw;
    char pad_02[7];
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

class C_OP_SetToCP {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber;
    // Vector m_vecOffset;
    char pad_01[12];
    bool m_bOffsetLocal;
    char pad_02[7];
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

class C_INIT_QuantizeFloat {
public:
    char pad_00[472];
    CPerParticleFloatInput m_InputValue;
    ParticleAttributeIndex_t m_nOutputField;
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

class C_OP_ForceControlPointStub {
public:
    char pad_00[472];
    int32_t m_ControlPoint;
    char pad_01[4];
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

class C_OP_RopeSpringConstraint {
public:
    char pad_00[464];
    CParticleCollectionFloatInput m_flRestLength;
    CParticleCollectionFloatInput m_flMinDistance;
    CParticleCollectionFloatInput m_flMaxDistance;
    float m_flAdjustmentScale;
    CParticleCollectionFloatInput m_flInitialRestingLength;
};

class C_OP_SetControlPointOrientationToCPVelocity {
public:
    char pad_00[472];
    int32_t m_nCPInput;
    int32_t m_nCPOutput;
};

class C_INIT_RemapNamedModelMeshGroupToScalar {
public:
    char pad_00[544];
};

class CParticleFunctionEmitter {
public:
    char pad_00[464];
    int32_t m_nEmitterIndex;
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

class CParticleFunctionConstraint {
public:
    char pad_00[464];
};

class MaterialVariable_t {
public:
    // CUtlString m_strVariable;
    char pad_00[8];
    ParticleAttributeIndex_t m_nVariableField;
    float m_flScale;
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

class ParticleControlPointConfiguration_t {
public:
    // CUtlString m_name;
    // CUtlVector< ParticleControlPointDriver_t > m_drivers;
    // ParticlePreviewState_t m_previewState;
    char pad_00[136];
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

class C_OP_EndCapDecay {
public:
    char pad_00[464];
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

class C_OP_RenderFlattenGrass {
public:
    char pad_00[544];
    float m_flFlattenStrength;
    ParticleAttributeIndex_t m_nStrengthFieldOverride;
    float m_flRadiusScale;
    char pad_01[4];
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

class C_OP_LerpToOtherAttribute {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flInterpolation;
    ParticleAttributeIndex_t m_nFieldInputFrom;
    ParticleAttributeIndex_t m_nFieldInput;
    ParticleAttributeIndex_t m_nFieldOutput;
    char pad_01[36];
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

class C_OP_PinRopeSegmentParticleToParent {
public:
    char pad_00[464];
    ParticleSelection_t m_nParticleSelection;
    CParticleCollectionFloatInput m_nParticleNumber;
    CPerParticleFloatInput m_flInterpolation;
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

class C_INIT_ScaleVelocity {
public:
    char pad_00[472];
    CParticleCollectionVecInput m_vecScale;
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

class C_OP_CPVelocityForce {
public:
    char pad_00[480];
    int32_t m_nControlPointNumber;
    CPerParticleFloatInput m_flScale;
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

class C_INIT_CreateFromCPs {
public:
    char pad_00[472];
    int32_t m_nIncrement;
    int32_t m_nMinCP;
    int32_t m_nMaxCP;
    CParticleCollectionFloatInput m_nDynamicCPCount;
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

class ModelReference_t {
public:
    // CStrongHandle< InfoForResourceTypeCModel > m_model;
    char pad_00[8];
    float m_flRelativeProbabilityOfSpawn;
    char pad_01[4];
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

class CParticleFunctionInitializer {
public:
    char pad_00[464];
    int32_t m_nAssociatedEmitterIndex;
    char pad_01[4];
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

class C_INIT_RemapNamedModelBodyPartToScalar {
public:
    char pad_00[544];
};

class C_OP_RadiusDecay {
public:
    char pad_00[464];
    float m_flMinRadius;
    char pad_01[4];
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
    // TextureControls_t m_TextureControls;
    char pad_01[2608];
};

class C_OP_SetControlPointFieldToWater {
public:
    char pad_00[472];
    int32_t m_nSourceCP;
    int32_t m_nDestCP;
    int32_t m_nCPField;
    char pad_01[4];
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

class C_INIT_RadiusFromCPObject {
public:
    char pad_00[472];
    int32_t m_nControlPoint;
    char pad_01[4];
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

class C_OP_HSVShiftToCP {
public:
    char pad_00[472];
    int32_t m_nColorCP;
    int32_t m_nColorGemEnableCP;
    int32_t m_nOutputCP;
    // Color m_DefaultHSVColor;
    char pad_01[20];
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

class C_OP_FadeIn {
public:
    char pad_00[464];
    float m_flFadeInTimeMin;
    float m_flFadeInTimeMax;
    float m_flFadeInTimeExp;
    bool m_bProportional;
    char pad_01[3];
};

class C_OP_SetSimulationRate {
public:
    char pad_00[472];
    CParticleCollectionFloatInput m_flSimulationScale;
};

class C_INIT_Orient2DRelToCP {
public:
    char pad_00[472];
    int32_t m_nCP;
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flRotOffset;
    char pad_01[4];
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

class C_OP_SetControlPointToCenter {
public:
    char pad_00[472];
    int32_t m_nCP1;
    // Vector m_vecCP1Pos;
    char pad_01[12];
    bool m_bUseAvgParticlePos;
    ParticleParentSetMode_t m_nSetParent;
};

class C_OP_RemapControlPointOrientationToRotation {
public:
    char pad_00[464];
    int32_t m_nCP;
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flOffsetRot;
    int32_t m_nComponent;
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

class C_OP_WindForce {
public:
    // Vector m_vForce;
    char pad_00[496];
};

class IParticleSystemDefinition {
public:
    char pad_00[8];
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

class C_OP_ClampVector {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    CPerParticleVecInput m_vecOutputMin;
    CPerParticleVecInput m_vecOutputMax;
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

class C_OP_LockToSavedSequentialPath {
public:
    char pad_00[468];
    float m_flFadeStart;
    float m_flFadeEnd;
    bool m_bCPPairs;
    // CPathParameters m_PathParams;
    char pad_01[67];
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

class C_OP_StopAfterCPDuration {
public:
    char pad_00[472];
    CParticleCollectionFloatInput m_flDuration;
    bool m_bDestroyImmediately;
    bool m_bPlayEndCap;
    char pad_01[6];
};

class C_OP_RemapNamedModelBodyPartEndCap {
public:
    char pad_00[560];
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
    // CPathParameters m_PathParams;
    char pad_01[78];
};

class C_OP_SetControlPointFromObjectScale {
public:
    char pad_00[472];
    int32_t m_nCPInput;
    int32_t m_nCPOutput;
};

class C_OP_RemapNamedModelSequenceOnceTimed {
public:
    char pad_00[560];
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

class C_INIT_RemapInitialTransformDirectionToRotation {
public:
    char pad_00[472];
    CParticleTransformInput m_TransformInput;
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flOffsetRot;
    int32_t m_nComponent;
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

class C_INIT_VelocityFromNormal {
public:
    char pad_00[472];
    float m_fSpeedMin;
    float m_fSpeedMax;
    bool m_bIgnoreDt;
    char pad_01[7];
};

class C_OP_MaxVelocity {
public:
    char pad_00[464];
    float m_flMaxVelocity;
    float m_flMinVelocity;
    int32_t m_nOverrideCP;
    int32_t m_nOverrideCPField;
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

class C_INIT_RandomNamedModelMeshGroup {
public:
    char pad_00[512];
};

class C_OP_PerParticleForce {
public:
    char pad_00[480];
    CPerParticleFloatInput m_flForceScale;
    CPerParticleVecInput m_vForce;
    int32_t m_nCP;
    char pad_01[4];
};

class C_OP_InheritFromPeerSystem {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    ParticleAttributeIndex_t m_nFieldInput;
    int32_t m_nIncrement;
    int32_t m_nGroupID;
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

class C_INIT_InitFloat {
public:
    char pad_00[472];
    CPerParticleFloatInput m_InputValue;
    ParticleAttributeIndex_t m_nOutputField;
    ParticleSetMethod_t m_nSetMethod;
    CPerParticleFloatInput m_InputStrength;
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

class C_OP_MovementRotateParticleAroundAxis {
public:
    char pad_00[464];
    CParticleCollectionVecInput m_vecRotAxis;
    CParticleCollectionFloatInput m_flRotRate;
    CParticleTransformInput m_TransformInput;
    bool m_bLocalSpace;
    char pad_01[7];
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

class C_OP_DensityForce {
public:
    char pad_00[480];
    float m_flRadiusScale;
    float m_flForceScale;
    float m_flTargetDensity;
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

class C_INIT_ScreenSpacePositionOfTarget {
public:
    char pad_00[472];
    CPerParticleVecInput m_vecTargetPosition;
    bool m_bOututBehindness;
    ParticleAttributeIndex_t m_nBehindFieldOutput;
    CParticleRemapFloatInput m_flBehindOutputRemap;
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

class C_OP_ShapeMatchingConstraint {
public:
    char pad_00[464];
    float m_flShapeRestorationTime;
    char pad_01[4];
};

class C_INIT_NormalAlignToCP {
public:
    char pad_00[472];
    CParticleTransformInput m_transformInput;
    ParticleControlPointAxis_t m_nControlPointAxis;
    char pad_01[4];
};

class C_INIT_PositionOffset {
public:
    char pad_00[472];
    CPerParticleVecInput m_OffsetMin;
    CPerParticleVecInput m_OffsetMax;
    CParticleTransformInput m_TransformInput;
    bool m_bLocalCoords;
    bool m_bProportional;
    // CRandomNumberGeneratorParameters m_randomnessParameters;
    char pad_01[14];
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

class C_INIT_InheritVelocity {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber;
    float m_flVelocityScale;
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

class C_OP_RemapNamedModelSequenceEndCap {
public:
    char pad_00[560];
};

class C_INIT_PlaneCull {
public:
    char pad_00[472];
    int32_t m_nControlPoint;
    CParticleCollectionFloatInput m_flDistance;
    bool m_bCullInside;
    char pad_01[7];
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

class C_OP_SetControlPointToHMD {
public:
    char pad_00[472];
    int32_t m_nCP1;
    // Vector m_vecCP1Pos;
    char pad_01[12];
    bool m_bOrientToHMD;
    char pad_02[7];
};

class C_OP_ClampScalar {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    CPerParticleFloatInput m_flOutputMin;
    CPerParticleFloatInput m_flOutputMax;
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

class C_OP_LerpScalar {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    CPerParticleFloatInput m_flOutput;
    float m_flStartTime;
    float m_flEndTime;
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

class C_OP_RemapDensityGradientToVectorAttribute {
public:
    char pad_00[464];
    float m_flRadiusScale;
    ParticleAttributeIndex_t m_nFieldOutput;
};

class C_OP_AlphaDecay {
public:
    char pad_00[464];
    float m_flMinAlpha;
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

class CParticleMassCalculationParameters {
public:
    ParticleMassMode_t m_nMassMode;
    CPerParticleFloatInput m_flRadius;
    CPerParticleFloatInput m_flNominalRadius;
    CPerParticleFloatInput m_flScale;
};

class C_OP_ColorAdjustHSL {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flHueAdjust;
    CPerParticleFloatInput m_flSaturationAdjust;
    CPerParticleFloatInput m_flLightnessAdjust;
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

class C_OP_CollideWithSelf {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flRadiusScale;
    CPerParticleFloatInput m_flMinimumSpeed;
};

class C_OP_LagCompensation {
public:
    char pad_00[464];
    int32_t m_nDesiredVelocityCP;
    int32_t m_nLatencyCP;
    int32_t m_nLatencyCPField;
    int32_t m_nDesiredVelocityCPField;
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

class C_INIT_RemapParticleCountToNamedModelBodyPartScalar {
public:
    char pad_00[552];
};

class CPAssignment_t {
public:
    int32_t m_nCPNumber;
    CPerParticleVecInput m_Pos;
    ParticleOrientationSetMode_t m_nOrientationMode;
    char pad_00[4];
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

class C_INIT_RandomNamedModelBodyPart {
public:
    char pad_00[512];
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

class C_OP_MovementMaintainOffset {
public:
    // Vector m_vecOffset;
    char pad_00[476];
    int32_t m_nCP;
    bool m_bRadiusScale;
    char pad_01[7];
};

class C_OP_ScreenSpaceRotateTowardTarget {
public:
    char pad_00[464];
    CPerParticleVecInput m_vecTargetPosition;
    CParticleRemapFloatInput m_flOutputRemap;
    ParticleSetMethod_t m_nSetMethod;
    CPerParticleFloatInput m_flScreenEdgeAlignmentDistance;
};

class C_OP_RemapNamedModelBodyPartOnceTimed {
public:
    char pad_00[560];
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

class C_OP_CalculateVectorAttribute {
public:
    // Vector m_vStartValue;
    char pad_00[476];
    ParticleAttributeIndex_t m_nFieldInput1;
    float m_flInputScale1;
    ParticleAttributeIndex_t m_nFieldInput2;
    float m_flInputScale2;
    // ControlPointReference_t m_nControlPointInput1;
    char pad_01[20];
    float m_flControlPointScale1;
    // ControlPointReference_t m_nControlPointInput2;
    char pad_02[20];
    float m_flControlPointScale2;
    ParticleAttributeIndex_t m_nFieldOutput;
    // Vector m_vFinalOutputScale;
    char pad_03[16];
};

class C_OP_DampenToCP {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber;
    float m_flRange;
    float m_flScale;
    char pad_01[4];
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

class C_OP_RemapVectorComponentToScalar {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldInput;
    ParticleAttributeIndex_t m_nFieldOutput;
    int32_t m_nComponent;
    char pad_01[4];
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

class C_OP_Diffusion {
public:
    char pad_00[464];
    float m_flRadiusScale;
    ParticleAttributeIndex_t m_nFieldOutput;
    int32_t m_nVoxelGridResolution;
    char pad_01[4];
};

class C_OP_SetControlPointPositionToRandomActiveCP {
public:
    char pad_00[472];
    int32_t m_nCP1;
    int32_t m_nHeadLocationMin;
    int32_t m_nHeadLocationMax;
    CParticleCollectionFloatInput m_flResetRate;
};

class PointDefinition_t {
public:
    int32_t m_nControlPoint;
    bool m_bLocalCoords;
    // Vector m_vOffset;
    char pad_00[15];
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

class C_INIT_RandomSecondSequence {
public:
    char pad_00[472];
    int32_t m_nSequenceMin;
    int32_t m_nSequenceMax;
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

class C_INIT_RandomRotationSpeed {
public:
    char pad_00[504];
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

class C_OP_RemapCrossProductOfTwoVectorsToVector {
public:
    char pad_00[464];
    CPerParticleVecInput m_InputVec1;
    CPerParticleVecInput m_InputVec2;
    ParticleAttributeIndex_t m_nFieldOutput;
    bool m_bNormalize;
    char pad_01[3];
};

class C_OP_SetCPOrientationToDirection {
public:
    char pad_00[464];
    int32_t m_nInputControlPoint;
    int32_t m_nOutputControlPoint;
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

class C_OP_VelocityDecay {
public:
    char pad_00[464];
    float m_flMinVelocity;
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

class C_INIT_RandomRotation {
public:
    char pad_00[504];
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

class C_OP_RenderText {
public:
    // Color m_OutlineColor;
    // CUtlString m_DefaultText;
    char pad_00[560];
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

class SequenceWeightedList_t {
public:
    int32_t m_nSequence;
    float m_flRelativeWeight;
};

class C_INIT_RandomYawFlip {
public:
    char pad_00[472];
    float m_flPercent;
    char pad_01[4];
};

class C_OP_Cull {
public:
    char pad_00[464];
    float m_flCullPerc;
    float m_flCullStart;
    float m_flCullEnd;
    float m_flCullExp;
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

class C_OP_NormalLock {
public:
    char pad_00[464];
    int32_t m_nControlPointNumber;
    char pad_01[4];
};

class C_OP_LockToSavedSequentialPathV2 {
public:
    char pad_00[464];
    float m_flFadeStart;
    float m_flFadeEnd;
    bool m_bCPPairs;
    // CPathParameters m_PathParams;
    char pad_01[71];
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

class VecInputMaterialVariable_t {
public:
    // CUtlString m_strVariable;
    char pad_00[8];
    CParticleCollectionVecInput m_vecInput;
};

class C_INIT_CreateSequentialPathV2 {
public:
    char pad_00[472];
    CPerParticleFloatInput m_fMaxDistance;
    CParticleCollectionFloatInput m_flNumToAssign;
    bool m_bLoop;
    bool m_bCPPairs;
    bool m_bSaveOffset;
    // CPathParameters m_PathParams;
    char pad_01[85];
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

class C_OP_RenderClothForce {
public:
    char pad_00[544];
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

class C_INIT_RandomAlphaWindowThreshold {
public:
    char pad_00[472];
    float m_flMin;
    float m_flMax;
    float m_flExponent;
    char pad_01[4];
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

class C_OP_RampCPLinearRandom {
public:
    char pad_00[472];
    int32_t m_nOutControlPointNumber;
    // Vector m_vecRateMin;
    // Vector m_vecRateMax;
    char pad_01[28];
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

class C_OP_RenderPoints {
public:
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial;
    char pad_00[552];
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

class CRandomNumberGeneratorParameters {
public:
    bool m_bDistributeEvenly;
    int32_t m_nSeed;
};

class C_OP_DecayClampCount {
public:
    char pad_00[464];
    CParticleCollectionFloatInput m_nCount;
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

class C_INIT_RemapNamedModelSequenceToScalar {
public:
    char pad_00[544];
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

class C_INIT_CreateAlongPath {
public:
    char pad_00[472];
    float m_fMaxDistance;
    // CPathParameters m_PathParams;
    char pad_01[68];
    bool m_bUseRandomCPs;
    // Vector m_vEndOffset;
    char pad_02[15];
    bool m_bSaveOffset;
    char pad_03[15];
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

class C_OP_ConstrainDistanceToPath {
public:
    char pad_00[464];
    float m_fMinDistance;
    float m_flMaxDistance0;
    float m_flMaxDistanceMid;
    float m_flMaxDistance1;
    // CPathParameters m_PathParameters;
    char pad_01[64];
    float m_flTravelTime;
    ParticleAttributeIndex_t m_nFieldScale;
    ParticleAttributeIndex_t m_nManualTField;
    char pad_02[4];
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

class C_OP_RemapVectortoCP {
public:
    char pad_00[464];
    int32_t m_nOutControlPointNumber;
    ParticleAttributeIndex_t m_nFieldInput;
    int32_t m_nParticleNumber;
    char pad_01[4];
};

class C_OP_RemapDistanceToLineSegmentToScalar {
public:
    char pad_00[488];
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flMinOutputValue;
    float m_flMaxOutputValue;
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

class C_OP_SetFloat {
public:
    char pad_00[464];
    CPerParticleFloatInput m_InputValue;
    ParticleAttributeIndex_t m_nOutputField;
    ParticleSetMethod_t m_nSetMethod;
    CPerParticleFloatInput m_Lerp;
    char pad_01[40];
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

class C_OP_LocalAccelerationForce {
public:
    char pad_00[480];
    int32_t m_nCP;
    int32_t m_nScaleCP;
    CParticleCollectionVecInput m_vecAccel;
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

class C_OP_RandomForce {
public:
    // Vector m_MinForce;
    // Vector m_MaxForce;
    char pad_00[504];
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

class C_OP_RemapTransformOrientationToYaw {
public:
    char pad_00[464];
    CParticleTransformInput m_TransformInput;
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flRotOffset;
    float m_flSpinStrength;
    char pad_01[4];
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

class C_INIT_InitFromVectorFieldSnapshot {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber;
    int32_t m_nLocalSpaceCP;
    int32_t m_nWeightUpdateCP;
    bool m_bUseVerticalVelocity;
    CPerParticleVecInput m_vecScale;
};

class C_OP_CollideWithParentParticles {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flParentRadiusScale;
    CPerParticleFloatInput m_flRadiusScale;
};

class C_INIT_DistanceCull {
public:
    char pad_00[472];
    int32_t m_nControlPoint;
    CParticleCollectionFloatInput m_flDistance;
    bool m_bCullInside;
    char pad_01[7];
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

class C_OP_RenderPostProcessing {
public:
    char pad_00[544];
    CPerParticleFloatInput m_flPostProcessStrength;
    // CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostTexture;
    char pad_01[8];
    ParticlePostProcessPriorityGroup_t m_nPriority;
    char pad_02[4];
};

class C_INIT_RandomScalar {
public:
    char pad_00[472];
    float m_flMin;
    float m_flMax;
    float m_flExponent;
    ParticleAttributeIndex_t m_nFieldOutput;
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

class C_OP_ChooseRandomChildrenInGroup {
public:
    char pad_00[472];
    int32_t m_nChildGroupID;
    CParticleCollectionFloatInput m_flNumberOfChildren;
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

class C_OP_RenderScreenVelocityRotate {
public:
    char pad_00[544];
    float m_flRotateRateDegrees;
    float m_flForwardDegrees;
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

class C_OP_RemapNamedModelMeshGroupEndCap {
public:
    char pad_00[560];
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

class CParticleFunctionRenderer {
public:
    // CParticleVisibilityInputs VisibilityInputs;
    char pad_00[536];
    bool m_bCannotBeRefracted;
    bool m_bSkipRenderingOnMobile;
    char pad_01[6];
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

class C_OP_SetSingleControlPointPosition {
public:
    char pad_00[472];
    bool m_bSetOnce;
    int32_t m_nCP1;
    CParticleCollectionVecInput m_vecCP1Pos;
    CParticleTransformInput m_transformInput;
};

class C_OP_SnapshotRigidSkinToBones {
public:
    char pad_00[464];
    bool m_bTransformNormals;
    bool m_bTransformRadii;
    int32_t m_nControlPointNumber;
};

class C_INIT_RandomYaw {
public:
    char pad_00[504];
};

class C_OP_SetCPtoVector {
public:
    char pad_00[464];
    int32_t m_nCPInput;
    ParticleAttributeIndex_t m_nFieldOutput;
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

class CParticleFunctionOperator {
public:
    char pad_00[464];
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

class C_OP_RemapControlPointDirectionToVector {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flScale;
    int32_t m_nControlPointNumber;
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

class C_OP_EndCapTimedFreeze {
public:
    char pad_00[464];
    CParticleCollectionFloatInput m_flFreezeTime;
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

class C_OP_ReinitializeScalarEndCap {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flOutputMin;
    float m_flOutputMax;
    char pad_01[4];
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

class C_OP_RenderVRHapticEvent {
public:
    char pad_00[544];
    ParticleVRHandChoiceList_t m_nHand;
    int32_t m_nOutputHandCP;
    int32_t m_nOutputField;
    CPerParticleFloatInput m_flAmplitude;
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

class C_INIT_VelocityFromCP {
public:
    char pad_00[472];
    CParticleCollectionVecInput m_velocityInput;
    CParticleTransformInput m_transformInput;
    float m_flVelocityScale;
    bool m_bDirectionOnly;
    char pad_01[3];
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

class C_OP_ConstrainLineLength {
public:
    char pad_00[464];
    float m_flMinDistance;
    float m_flMaxDistance;
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

class C_OP_GameLiquidSpill {
public:
    char pad_00[544];
    CParticleCollectionFloatInput m_flLiquidContentsField;
    CParticleCollectionFloatInput m_flExpirationTime;
    ParticleAttributeIndex_t m_nAmountAttribute;
    char pad_01[4];
};

class C_OP_Spin {
public:
    char pad_00[488];
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

class C_OP_RemapDistanceToLineSegmentToVector {
public:
    char pad_00[488];
    ParticleAttributeIndex_t m_nFieldOutput;
    // Vector m_vMinOutputValue;
    // Vector m_vMaxOutputValue;
    char pad_01[28];
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

class C_OP_SpinUpdate {
public:
    char pad_00[464];
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

class C_OP_LazyCullCompareFloat {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flComparsion1;
    CPerParticleFloatInput m_flComparsion2;
    CPerParticleFloatInput m_flCullTime;
};

class C_INIT_CreateFromPlaneCache {
public:
    // Vector m_vecOffsetMin;
    // Vector m_vecOffsetMax;
    char pad_00[497];
    bool m_bUseNormal;
    char pad_01[6];
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

class C_INIT_InitFloatCollection {
public:
    char pad_00[472];
    CParticleCollectionFloatInput m_InputValue;
    ParticleAttributeIndex_t m_nOutputField;
    char pad_01[4];
};

class C_OP_PlayEndCapWhenFinished {
public:
    char pad_00[472];
    bool m_bFireOnEmissionEnd;
    bool m_bIncludeChildren;
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

class C_OP_MovementLoopInsideSphere {
public:
    char pad_00[464];
    int32_t m_nCP;
    CParticleCollectionFloatInput m_flDistance;
    CParticleCollectionVecInput m_vecScale;
    ParticleAttributeIndex_t m_nDistSqrAttr;
    char pad_01[4];
};

class C_OP_DirectionBetweenVecsToVec {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    CPerParticleVecInput m_vecPoint1;
    CPerParticleVecInput m_vecPoint2;
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

class C_OP_InheritFromParentParticles {
public:
    char pad_00[464];
    float m_flScale;
    ParticleAttributeIndex_t m_nFieldOutput;
    int32_t m_nIncrement;
    bool m_bRandomDistribution;
    char pad_01[3];
};

class C_INIT_RandomVectorComponent {
public:
    char pad_00[472];
    float m_flMin;
    float m_flMax;
    ParticleAttributeIndex_t m_nFieldOutput;
    int32_t m_nComponent;
};

class CParticleFunctionForce {
public:
    char pad_00[480];
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

class C_INIT_RemapQAnglesToRotation {
public:
    char pad_00[472];
    CParticleTransformInput m_TransformInput;
};

class C_OP_RemapNamedModelMeshGroupOnceTimed {
public:
    char pad_00[560];
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

class ControlPointReference_t {
public:
    int32_t m_controlPointNameString;
    // Vector m_vOffsetFromControlPoint;
    char pad_00[12];
    bool m_bOffsetInLocalSpace;
    char pad_01[3];
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

class C_OP_Orient2DRelToCP {
public:
    char pad_00[464];
    float m_flRotOffset;
    float m_flSpinStrength;
    int32_t m_nCP;
    ParticleAttributeIndex_t m_nFieldOutput;
};

class C_INIT_RandomRadius {
public:
    char pad_00[472];
    float m_flRadiusMin;
    float m_flRadiusMax;
    float m_flRadiusRandExponent;
    char pad_01[4];
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

class C_INIT_RemapParticleCountToNamedModelSequenceScalar {
public:
    char pad_00[552];
};

class C_INIT_RandomLifeTime {
public:
    char pad_00[472];
    float m_fLifetimeMin;
    float m_fLifetimeMax;
    float m_fLifetimeRandExponent;
    char pad_01[4];
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

class C_OP_GlobalLight {
public:
    char pad_00[464];
    float m_flScale;
    bool m_bClampLowerRange;
    bool m_bClampUpperRange;
    char pad_01[2];
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

class C_OP_Callback {
public:
    char pad_00[544];
};

class C_INIT_InitFromParentKilled {
public:
    char pad_00[472];
    ParticleAttributeIndex_t m_nAttributeToCopy;
    EventTypeSelection_t m_nEventType;
    char pad_01[128];
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

class C_INIT_SequenceLifeTime {
public:
    char pad_00[472];
    float m_flFramerate;
    char pad_01[4];
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

class C_OP_EndCapTimedDecay {
public:
    char pad_00[464];
    float m_flDecayTime;
    char pad_01[4];
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

class C_OP_DecayOffscreen {
public:
    char pad_00[464];
    CParticleCollectionFloatInput m_flOffscreenTime;
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

class C_INIT_RandomTrailLength {
public:
    char pad_00[472];
    float m_flMinLength;
    float m_flMaxLength;
    float m_flLengthRandExponent;
    char pad_01[4];
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

class C_OP_RemapVelocityToVector {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flScale;
    bool m_bNormalize;
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

class C_OP_FadeInSimple {
public:
    char pad_00[464];
    float m_flFadeInTime;
    ParticleAttributeIndex_t m_nFieldOutput;
};

class C_OP_NormalizeVector {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    float m_flScale;
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

class C_INIT_RandomModelSequence {
public:
    char pad_00[472];
    char m_ActivityName[256];
    char m_SequenceName[256];
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    char pad_01[8];
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

class C_OP_SetControlPointPositionToTimeOfDayValue {
public:
    char pad_00[472];
    int32_t m_nControlPointNumber;
    char m_pszTimeOfDayParameter[128];
    // Vector m_vecDefaultValue;
    char pad_01[20];
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

class C_INIT_RemapParticleCountToNamedModelElementScalar {
public:
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    // CUtlString m_outputMinName;
    // CUtlString m_outputMaxName;
    char pad_00[544];
    bool m_bModelFromRenderer;
    char pad_01[7];
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

class C_OP_OrientTo2dDirection {
public:
    char pad_00[464];
    float m_flRotOffset;
    float m_flSpinStrength;
    ParticleAttributeIndex_t m_nFieldOutput;
    char pad_01[4];
};

class CSpinUpdateBase {
public:
    char pad_00[464];
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

class C_OP_RemapExternalWindToCP {
public:
    char pad_00[472];
    int32_t m_nCP;
    int32_t m_nCPOutput;
    CParticleCollectionVecInput m_vecScale;
    bool m_bSetMagnitude;
    int32_t m_nOutVectorField;
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

class C_OP_TwistAroundAxis {
public:
    char pad_00[480];
    float m_fForceAmount;
    // Vector m_TwistAxis;
    char pad_01[12];
    bool m_bLocalSpace;
    int32_t m_nControlPointNumber;
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

class C_OP_PlaneCull {
public:
    char pad_00[464];
    int32_t m_nPlaneControlPoint;
    CParticleCollectionVecInput m_vecPlaneDirection;
    bool m_bLocalSpace;
    float m_flPlaneOffset;
};

class C_INIT_RandomNamedModelSequence {
public:
    char pad_00[512];
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

class C_INIT_RandomVector {
public:
    // Vector m_vecMin;
    // Vector m_vecMax;
    char pad_00[496];
    ParticleAttributeIndex_t m_nFieldOutput;
    CRandomNumberGeneratorParameters m_randomnessParameters;
    char pad_01[4];
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

class ParticlePreviewBodyGroup_t {
public:
    // CUtlString m_bodyGroupName;
    char pad_00[8];
    int32_t m_nValue;
    char pad_01[4];
};

class C_OP_PointVectorAtNextParticle {
public:
    char pad_00[464];
    ParticleAttributeIndex_t m_nFieldOutput;
    CPerParticleFloatInput m_flInterpolation;
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

class C_OP_SpringToVectorConstraint {
public:
    char pad_00[464];
    CPerParticleFloatInput m_flRestLength;
    CPerParticleFloatInput m_flMinDistance;
    CPerParticleFloatInput m_flMaxDistance;
    CPerParticleFloatInput m_flRestingLength;
    CPerParticleVecInput m_vecAnchorVector;
};

class C_OP_FadeOutSimple {
public:
    char pad_00[464];
    float m_flFadeOutTime;
    ParticleAttributeIndex_t m_nFieldOutput;
};

class CParticleFunctionPreEmission {
public:
    char pad_00[464];
    bool m_bRunOnce;
    char pad_01[7];
};

class CollisionGroupContext_t {
public:
    int32_t m_nCollisionGroupNumber;
};

class C_OP_RemapTransformToVelocity {
public:
    char pad_00[464];
    CParticleTransformInput m_TransformInput;
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

class C_OP_Decay {
public:
    char pad_00[464];
    bool m_bRopeDecay;
    bool m_bForcePreserveParticleOrder;
    char pad_01[6];
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

class Relationship_t {
public:
    Disposition_t disposition;
    int32_t priority;
};

class CNavVolumeSphere {
public:
    // Vector m_vCenter;
    char pad_00[132];
    float m_flRadius;
};

class CNavVolumeAll {
public:
    char pad_00[160];
};

class CDestructiblePart_DamageLevel {
public:
    // CUtlString m_sName;
    // CGlobalSymbol m_sBreakablePieceName;
    char pad_00[16];
    int32_t m_nBodyGroupValue;
    // CSkillInt m_nHealth;
    char pad_01[16];
    float m_flCriticalDamagePercent;
    EDestructiblePartDamagePassThroughType m_nDamagePassthroughType;
    DestructiblePartDestructionDeathBehavior_t m_nDestructionDeathBehavior;
    // CGlobalSymbol m_sCustomDeathHandshake;
    char pad_02[8];
    bool m_bShouldDestroyOnDeath;
    CRangeFloat m_flDeathDestroyTime;
    char pad_03[4];
};

class CNetworkVelocityVector {
public:
    // CNetworkedQuantizedFloat m_vecX;
    // CNetworkedQuantizedFloat m_vecY;
    // CNetworkedQuantizedFloat m_vecZ;
    char pad_00[40];
};

class CAnimGraphControllerBase {
public:
    // ExternalAnimGraphHandle_t m_hExternalGraph;
    char pad_00[144];
};

class hudtextparms_t {
public:
    // Color color1;
    // Color color2;
    char pad_00[8];
    uint8_t effect;
    uint8_t channel;
    float x;
    float y;
};

class IRagdoll {
public:
    char pad_00[8];
};

class CSAdditionalMatchStats_t {
public:
    char pad_00[240];
    int32_t m_numRoundsSurvivedStreak;
    int32_t m_maxNumRoundsSurvivedStreak;
    int32_t m_numRoundsSurvivedTotal;
    int32_t m_iRoundsWonWithoutPurchase;
    int32_t m_iRoundsWonWithoutPurchaseTotal;
    int32_t m_numFirstKills;
    int32_t m_numClutchKills;
    int32_t m_numPistolKills;
    int32_t m_numSniperKills;
    int32_t m_iNumSuicides;
    int32_t m_iNumTeamKills;
    float m_flTeamDamage;
};

class dynpitchvol_base_t {
public:
    int32_t preset;
    int32_t pitchrun;
    int32_t pitchstart;
    int32_t spinup;
    int32_t spindown;
    int32_t volrun;
    int32_t volstart;
    int32_t fadein;
    int32_t fadeout;
    int32_t lfotype;
    int32_t lforate;
    int32_t lfomodpitch;
    int32_t lfomodvol;
    int32_t cspinup;
    int32_t cspincount;
    int32_t pitch;
    int32_t spinupsav;
    int32_t spindownsav;
    int32_t pitchfrac;
    int32_t vol;
    int32_t fadeinsav;
    int32_t fadeoutsav;
    int32_t volfrac;
    int32_t lfofrac;
    int32_t lfomult;
};

class dynpitchvol_t : public dynpitchvol_base_t {
public:
    char pad_00[100];
};

class CNavVolumeBreadthFirstSearch {
public:
    // Vector m_vStartPos;
    char pad_00[180];
    float m_flSearchDist;
    char pad_01[8];
};

class CBreakableStageHelper {
public:
    char pad_00[8];
    int32_t m_nCurrentStage;
    int32_t m_nStageCount;
    char pad_01[8];
};

class CEntitySubclassVDataBase {
public:
    char pad_00[40];
};

class ModelConfigHandle_t {
public:
    uint32_t m_Value;
};

class CEmptyGraphController {
public:
    char pad_00[144];
};

class CSAdditionalPerRoundStats_t {
public:
    int32_t m_numChickensKilled;
    int32_t m_killsWhileBlind;
    int32_t m_bombCarrierkills;
    float m_flBurnDamageInflicted;
    float m_flBlastDamageInflicted;
    int32_t m_iDinks;
    bool m_bFreshStartThisRound;
    bool m_bBombPlantedAndAlive;
    int32_t m_nDefuseStarts;
    int32_t m_nHostagePickUps;
    int32_t m_numTeammatesFlashed;
    char pad_00[200];
};

class CBtNodeDecorator {
public:
    char pad_00[88];
};

class CFiringModeInt {
public:
    int32_t m_nValues[2];
};

class CNavVolumeCalculatedVector {
public:
    char pad_00[160];
};

class CAnimEventListener {
public:
    char pad_00[32];
};

class SoundOpvarTraceResult_t {
public:
    // Vector vPos;
    char pad_00[12];
    bool bDidHit;
    float flDistSqrToCenter;
};

class CNmSnapWeaponNode::CDefinition {
public:
    char pad_00[24];
    int16_t m_nEnabledNodeIdx;
    int16_t m_nLockLeftHandNodeIdx;
    float m_flBlendTimeSeconds;
};

class CNavHullVData {
public:
    bool m_bAgentEnabled;
    float m_agentRadius;
    float m_agentHeight;
    bool m_agentShortHeightEnabled;
    float m_agentShortHeight;
    bool m_agentCrawlEnabled;
    float m_agentCrawlHeight;
    float m_agentMaxClimb;
    int32_t m_agentMaxSlope;
    float m_agentMaxJumpDownDist;
    float m_agentMaxJumpHorizDistBase;
    float m_agentMaxJumpUpDist;
    int32_t m_agentBorderErosion;
    bool m_flowMapGenerationEnabled;
    float m_flowMapNodeMaxRadius;
};

class CNmEventConsumerParticle {
public:
    char pad_00[48];
};

class CInButtonState {
public:
    char pad_00[8];
    uint64_t m_pButtonStates[3];
};

class CNmEventConsumerLegacy {
public:
    char pad_00[32];
};

class CNmEventConsumerSound {
public:
    char pad_00[48];
};

class CIronSightController {
public:
    char pad_00[8];
    bool m_bIronSightAvailable;
    float m_flIronSightAmount;
    float m_flIronSightAmountGained;
    float m_flIronSightAmountBiased;
};

class CTakeDamageSummaryScopeGuard {
public:
    // CUtlVector< SummaryTakeDamageInfo_t* > m_vecSummaries;
    char pad_00[32];
};

class CAI_ExpresserWithFollowup {
public:
    char pad_00[160];
};

class ParticleIndex_t {
public:
    int32_t m_Value;
};

class CNmAimCSTask {
public:
    char pad_00[256];
};

class QuestProgress {
public:
    char pad_00[1];
};

class CNavVolume {
public:
    char pad_00[120];
};

class CMultiplayer_Expresser {
public:
    char pad_00[160];
    bool m_bAllowMultipleScenes;
    char pad_01[7];
};

class IEconItemInterface {
public:
    char pad_00[8];
};

class sndopvarlatchdata_t {
public:
    // CUtlSymbolLarge m_iszStack;
    // CUtlSymbolLarge m_iszOperator;
    // CUtlSymbolLarge m_iszOpvar;
    char pad_00[32];
    float m_flVal;
    // Vector m_vPos;
    char pad_01[12];
};

class Extent {
public:
    // VectorWS lo;
    // VectorWS hi;
    char pad_00[24];
};

class CRelativeLocation {
public:
    char pad_00[24];
    RelativeLocationType_t m_Type;
    // Vector m_vRelativeOffset;
    // VectorWS m_vWorldSpacePos;
    // CHandle< CBaseEntity > m_hEntity;
    char pad_01[31];
};

class CBtNodeComposite {
public:
    char pad_00[88];
};

class CSimpleSimTimer {
public:
    GameTime_t m_flNext;
    // WorldGroupId_t m_nWorldGroupId;
    char pad_00[4];
};

class CRandSimTimer : public CSimpleSimTimer {
public:
    float m_flMinInterval;
    float m_flMaxInterval;
};

class CTakeDamageInfo {
public:
    // Vector m_vecDamageForce;
    // VectorWS m_vecDamagePosition;
    // VectorWS m_vecReportedPosition;
    // Vector m_vecDamageDirection;
    // CHandle< CBaseEntity > m_hInflictor;
    // CHandle< CBaseEntity > m_hAttacker;
    // CHandle< CBaseEntity > m_hAbility;
    char pad_00[68];
    float m_flDamage;
    float m_flTotalledDamage;
    DamageTypes_t m_bitsDamageType;
    int32_t m_iDamageCustom;
    // AmmoIndex_t m_iAmmoType;
    char pad_01[12];
    float m_flOriginalDamage;
    bool m_bShouldBleed;
    bool m_bShouldSpark;
    char pad_02[8];
    TakeDamageFlags_t m_nDamageFlags;
    HitGroup_t m_iHitGroupId;
    int32_t m_nNumObjectsPenetrated;
    float m_flFriendlyFireDamageReductionRatio;
    bool m_bStoppedBullet;
    // CUtlVector< DestructibleHitGroupToDestroy_t > m_nDestructibleHitGroupsToForceDestroy;
    char pad_03[147];
    bool m_bInTakeDamageFlow;
    char pad_04[7];
};

class WaterWheelDrag_t {
public:
    float m_flFractionOfWheelSubmerged;
    float m_flWheelDrag;
};

class CConstantForceController {
public:
    // Vector m_linear;
    // RotationVector m_angular;
    // Vector m_linearSave;
    // RotationVector m_angularSave;
    char pad_00[64];
};

class CNmAimCSNode::CDefinition {
public:
    char pad_00[24];
    int16_t m_nVerticalAngleNodeIdx;
    int16_t m_nHorizontalAngleNodeIdx;
    int16_t m_nWeaponCategoryNodeIdx;
    int16_t m_nWeaponTypeNodeIdx;
    int16_t m_nIsWeaponActionActiveNodeIdx;
    int16_t m_nWeaponDropNodeIdx;
    int16_t m_nEnabledNodeIdx;
    float m_flBlendTimeSeconds;
    float m_flReduceRangeTimeSeconds;
};

class CVectorExponentialMovingAverage {
public:
    char pad_00[44];
};

class CRR_Response {
public:
    uint8_t m_Type;
    char m_szResponseName[192];
    char m_szMatchingRule[128];
    // ResponseParams m_Params;
    char pad_00[60];
    float m_fMatchScore;
    bool m_bAnyMatchingRulesInCooldown;
    char* m_szSpeakerContext;
    char* m_szWorldContext;
    // ResponseFollowup m_Followup;
    // CUtlSymbol m_recipientFilter;
    char pad_01[56];
};

class DestructibleHitGroupToDestroy_t {
public:
    HitGroup_t m_nHitGroup;
    int32_t m_nMaxDamageLevel;
};

class DestructiblePartDestructionRequest_t {
public:
    EDestructibleParts_DestroyParameterFlags m_nDestroyFlags;
    DamageTypes_t m_nDamageType;
    float m_flPartDamage;
    float m_flPartDamageRadius;
    // VectorWS m_vWsPartDamageOrigin;
    // Vector m_vWsPartDamageForce;
    char pad_00[24];
};

class CSceneRequest {
public:
    // CUtlSymbolLarge m_szPayloadTypeName;
    // SceneRequestHandle_t m_uHandle;
    char pad_00[12];
    ESceneRequestState_t m_state;
    char pad_01[16];
};

class SummaryTakeDamageInfo_t {
public:
    int32_t nSummarisedCount;
    CTakeDamageInfo info;
    // CTakeDamageResult result;
    // CHandle< CBaseEntity > hTarget;
    char pad_00[56];
};

class CBaseIssue {
public:
    char pad_00[32];
    char m_szTypeString[64];
    char m_szDetailsString[260];
    int32_t m_iNumYesVotes;
    int32_t m_iNumNoVotes;
    int32_t m_iNumPotentialVotes;
    // CVoteController* m_pVoteController;
    char pad_01[8];
};

class CSimTimer : public CSimpleSimTimer {
public:
    float m_flInterval;
};

class CMotorController {
public:
    char pad_00[8];
    float m_speed;
    float m_maxTorque;
    // VectorWS m_axis;
    char pad_01[12];
    float m_inertiaFactor;
};

class GameAmmoTypeInfo_t {
public:
    char pad_00[56];
    int32_t m_nBuySize;
    int32_t m_nCost;
    char pad_01[16];
};

class RotatorHistoryEntry_t {
public:
    // Quaternion qInvChange;
    char pad_00[16];
    GameTime_t flTimeRotationStart;
    char pad_01[12];
};

class ISkeletonAnimationController {
public:
    char pad_00[8];
};

class HullFlags_t {
public:
    bool m_bHull_Human;
    bool m_bHull_SmallCentered;
    bool m_bHull_WideHuman;
    bool m_bHull_Tiny;
    bool m_bHull_Medium;
    bool m_bHull_TinyCentered;
    bool m_bHull_Large;
    bool m_bHull_LargeCentered;
    bool m_bHull_MediumTall;
    bool m_bHull_Small;
};

class ragdoll_t {
public:
    // CUtlVector< ragdollelement_t > list;
    // CUtlVector< ragdollhierarchyjoint_t > hierarchyJoints;
    // CUtlVector< int32 > boneIndex;
    char pad_00[72];
    bool allowStretch;
    bool unused;
    char pad_01[6];
};

class IHasAttributes {
public:
    char pad_00[8];
};

class CSmoothFunc {
public:
    char pad_00[8];
    float m_flSmoothAmplitude;
    float m_flSmoothBias;
    float m_flSmoothDuration;
    float m_flSmoothRemainingTime;
    int32_t m_nSmoothDir;
    char pad_01[4];
};

class CFloatMovingAverage {
public:
    char pad_00[32];
};

class CCopyRecipientFilter {
public:
    char pad_00[8];
    int32_t m_Flags;
    // CUtlVector< CPlayerSlot > m_Recipients;
    // CPlayerSlot m_slotPlayerExcludedDueToPrediction;
    char pad_01[44];
};

class CFiringModeFloat {
public:
    float m_flValues[2];
};

class CAnimGraphControllerManager {
public:
    // CUtlVector< CAnimGraphControllerBase* > m_controllers;
    char pad_00[168];
    bool m_bGraphBindingsCreated;
    char pad_01[7];
};

class CBtNode {
public:
    char pad_00[88];
};

class DecalGroupOption_t {
public:
    // CStrongHandleCopyable< InfoForResourceTypeIMaterial2 > m_hMaterial;
    // CGlobalSymbol m_sSequenceName;
    char pad_00[16];
    float m_flProbability;
    bool m_bEnableAngleBetweenNormalAndGravityRange;
    float m_flMinAngleBetweenNormalAndGravity;
    float m_flMaxAngleBetweenNormalAndGravity;
};

class locksound_t {
public:
    // CUtlSymbolLarge sLockedSound;
    // CUtlSymbolLarge sUnlockedSound;
    char pad_00[24];
    GameTime_t flwaitSound;
    char pad_01[4];
};

class CCS2ChickenGraphController {
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
    bool m_bHasActionCompletedEvent;
    bool m_bWaitingForCompletedEvent;
    char pad_01[6];
};

class CSoundPatch {
public:
    // CSoundEnvelope m_pitch;
    // CSoundEnvelope m_volume;
    char pad_00[60];
    float m_shutdownTime;
    float m_flLastTime;
    // CUtlSymbolLarge m_iszSoundScriptName;
    // CHandle< CBaseEntity > m_hEnt;
    // CEntityIndex m_soundEntityIndex;
    // Vector m_soundOrigin;
    char pad_01[32];
    int32_t m_isPlaying;
    CCopyRecipientFilter m_Filter;
    float m_flCloseCaptionDuration;
    bool m_bUpdatedSoundOrigin;
    // CUtlSymbolLarge m_iszClassName;
    char pad_02[11];
};

class SoundeventPathCornerPairNetworked_t {
public:
    // Vector vP1;
    // Vector vP2;
    char pad_00[24];
    float flPathLengthSqr;
    float flP1Pct;
    float flP2Pct;
};

class CSceneEventInfo {
public:
    int32_t m_iLayer;
    int32_t m_iPriority;
    HSequence m_hSequence;
    float m_flWeight;
    // CStrongHandle< InfoForResourceTypeCNmClip > m_hAnimClip;
    // CGlobalSymbol m_sAnimClipSlot;
    // CGlobalSymbol m_sAnimClipSlotWeight;
    char pad_00[24];
    bool m_bHasArrived;
    int32_t m_nType;
    GameTime_t m_flNext;
    bool m_bIsGesture;
    bool m_bShouldRemove;
    // CHandle< CBaseEntity > m_hTarget;
    // SceneEventId_t m_nSceneEventId;
    char pad_01[46];
    bool m_bClientSide;
    bool m_bStarted;
    char pad_02[2];
};

class ragdollhierarchyjoint_t {
public:
    int32_t parentIndex;
    int32_t childIndex;
    char pad_00[8];
};

class WaterWheelFrictionScale_t {
public:
    float m_flFractionOfWheelSubmerged;
    float m_flFrictionScale;
};

class CSkillFloat {
public:
    float m_pValue[4];
};

class CNavHullPresetVData {
public:
    // CUtlVector< CUtlString > m_vecNavHulls;
    char pad_00[24];
};

class thinkfunc_t {
public:
    // HSCRIPT m_hFn;
    // CUtlStringToken m_nContext;
    char pad_00[20];
    GameTick_t m_nNextThinkTick;
    GameTick_t m_nLastThinkTick;
    char pad_01[4];
};

class CSkillInt {
public:
    int32_t m_pValue[4];
};

class CHintMessageQueue {
public:
    float m_tmMessageEnd;
    // CUtlVector< CHintMessage* > m_messages;
    // CBasePlayerController* m_pPlayerController;
    char pad_00[36];
};

class magnetted_objects_t {
public:
    // CHandle< CBaseEntity > hEntity;
    char pad_00[16];
};

class CNetworkOriginQuantizedVector {
public:
    // CNetworkedQuantizedFloat m_vecX;
    // CNetworkedQuantizedFloat m_vecY;
    // CNetworkedQuantizedFloat m_vecZ;
    char pad_00[40];
};

class DynamicVolumeDef_t {
public:
    // CHandle< CBaseEntity > m_source;
    // CHandle< CBaseEntity > m_target;
    char pad_00[8];
    int32_t m_nHullIdx;
    // Vector m_vSourceAnchorPos;
    // Vector m_vTargetAnchorPos;
    char pad_01[24];
    uint32_t m_nAreaSrc;
    uint32_t m_nAreaDst;
    bool m_bAttached;
    char pad_02[3];
};

class CBaseAnimGraphVariationUserData {
public:
    char pad_00[8];
};

class CNetworkOriginCellCoordQuantizedVector {
public:
    char pad_00[16];
    uint16_t m_cellX;
    uint16_t m_cellY;
    uint16_t m_cellZ;
    uint16_t m_nOutsideWorld;
    // CNetworkedQuantizedFloat m_vecX;
    // CNetworkedQuantizedFloat m_vecY;
    // CNetworkedQuantizedFloat m_vecZ;
    char pad_01[24];
};

class CGameScriptedMoveDef_t {
public:
    // Vector m_vDestOffset;
    // CHandle< CBaseEntity > m_hDestEntity;
    // QAngle m_angDest;
    char pad_00[28];
    float m_flDuration;
    float m_flAngRate;
    float m_flMoveSpeed;
    bool m_bAimDisabled;
    bool m_bIgnoreRotation;
    ForcedCrouchState_t m_nForcedCrouchState;
};

class ragdollelement_t {
public:
    // Vector originParentSpace;
    char pad_00[32];
    int32_t parentIndex;
    float m_flRadius;
    int32_t m_nHeight;
    char pad_01[4];
};

class CShatterGlassShard {
public:
    char pad_00[8];
    uint32_t m_hShardHandle;
    // CUtlVector< Vector2D > m_vecPanelVertices;
    // Vector2D m_vLocalPanelSpaceOrigin;
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    // CHandle< CShatterGlassShardPhysics > m_hPhysicsEntity;
    // CHandle< CFuncShatterglass > m_hParentPanel;
    char pad_01[52];
    uint32_t m_hParentShard;
    ShatterGlassStressType m_ShatterStressType;
    // Vector m_vecStressVelocity;
    char pad_02[15];
    bool m_bCreatedModel;
    float m_flLongestEdge;
    float m_flShortestEdge;
    float m_flLongestAcross;
    float m_flShortestAcross;
    float m_flSumOfAllEdges;
    float m_flArea;
    OnFrame m_nOnFrameEdge;
    int32_t m_nSubShardGeneration;
    // Vector2D m_vecAverageVertPosition;
    char pad_03[8];
    bool m_bAverageVertPositionIsValid;
    // Vector2D m_vecPanelSpaceStressPositionA;
    // Vector2D m_vecPanelSpaceStressPositionB;
    char pad_04[19];
    bool m_bStressPositionAIsValid;
    bool m_bStressPositionBIsValid;
    bool m_bFlaggedForRemoval;
    GameTime_t m_flPhysicsEntitySpawnedAtTime;
    // CHandle< CBaseEntity > m_hEntityHittingMe;
    // CUtlVector< uint32 > m_vecNeighbors;
    char pad_05[28];
};

class CSimpleStopwatch {
public:
    char pad_00[12];
};

class IChoreoServices {
public:
    char pad_00[8];
};

class CGameChoreoServices : public IChoreoServices {
public:
    // CHandle< CBaseAnimGraph > m_hOwner;
    // CHandle< CScriptedSequence > m_hScriptedSequence;
    char pad_01[8];
    IChoreoServices::ScriptState_t m_scriptState;
    IChoreoServices::ChoreoState_t m_choreoState;
    GameTime_t m_flTimeStartedState;
    char pad_02[4];
};

class CMovementStatsProperty {
public:
    char pad_00[16];
    int32_t m_nUseCounter;
    CVectorExponentialMovingAverage m_emaMovementDirection;
};

class CStopwatchBase : public CSimpleSimTimer {
public:
    bool m_fIsRunning;
    char pad_01[3];
};

class CRandStopwatch : public CStopwatchBase {
public:
    float m_flMinInterval;
    float m_flMaxInterval;
};

class CWorldCompositionChunkReferenceElement_t {
public:
    // CUtlString m_strMapToLoad;
    // CUtlString m_strLandmarkName;
    char pad_00[16];
};

class CRangeInt {
public:
    int32_t m_pValue[2];
};

class RagdollCreationParams_t {
public:
    // Vector m_vForce;
    char pad_00[12];
    int32_t m_nForceBone;
    bool m_bForceCurrentWorldTransform;
    bool m_bUseLRURetirement;
    int32_t m_nHealthToGrant;
};

class CPathQueryUtil {
public:
    // CTransform m_PathToEntityTransform;
    // CUtlVector< Vector > m_vecPathSamplePositions;
    // CUtlVector< float32 > m_vecPathSampleParameters;
    // CUtlVector< float32 > m_vecPathSampleDistances;
    char pad_00[120];
    bool m_bIsClosedLoop;
    char pad_01[7];
};

class CNetworkTransmitComponent {
public:
    char pad_00[388];
    uint8_t m_nTransmitStateOwnedCounter;
    char pad_01[75];
};

class AmmoTypeInfo_t {
public:
    char pad_00[16];
    int32_t m_nMaxCarry;
    CRangeInt m_nSplashSize;
    AmmoFlags_t m_nFlags;
    float m_flMass;
    CRangeFloat m_flSpeed;
    char pad_01[4];
};

class ResponseFollowup {
public:
    char* followup_concept;
    char* followup_contexts;
    float followup_delay;
    char* followup_target;
    char* followup_entityiotarget;
    char* followup_entityioinput;
    float followup_entityiodelay;
    bool bFired;
};

class CCommentarySystem {
public:
    char pad_00[17];
    bool m_bCommentaryConvarsChanging;
    bool m_bCommentaryEnabledMidGame;
    GameTime_t m_flNextTeleportTime;
    int32_t m_iTeleportStage;
    bool m_bCheatState;
    bool m_bIsFirstSpawnGroupToLoad;
    // CHandle< CPointCommentaryNode > m_hCurrentNode;
    // CHandle< CPointCommentaryNode > m_hActiveCommentaryNode;
    // CHandle< CPointCommentaryNode > m_hLastCommentaryNode;
    // CUtlVector< CHandle< CPointCommentaryNode > > m_vecNodes;
    char pad_01[66];
};

class ExternalAnimGraph_t {
public:
    // ExternalAnimGraphHandle_t m_hExtGraphHandle;
    // CGlobalSymbol m_sExternalGraphSlotID;
    // CStrongHandleCopyable< InfoForResourceTypeCNmGraphDefinition > m_hGraphDefinition;
    // CHandle< CBaseAnimGraph > m_hExternalGraphOwner;
    char pad_00[48];
    ExternalAnimGraphInactiveBehavior_t m_nInactiveBehavior;
    char pad_01[7];
};

class SceneEventId_t {
public:
    uint32_t m_Value;
};

class CTakeDamageResult {
public:
    CTakeDamageInfo* m_pOriginatingInfo;
    int32_t m_nHealthLost;
    int32_t m_nHealthBefore;
    int32_t m_nDamageDealt;
    float m_flPreModifiedDamage;
    int32_t m_nTotalledHealthLost;
    int32_t m_nTotalledDamageDealt;
    float m_flTotalledPreModifiedDamage;
    bool m_bWasDamageSuppressed;
    bool m_bSuppressFlinch;
    HitGroup_t m_nOverrideFlinchHitGroup;
    char pad_00[4];
};

class VelocitySampler {
public:
    // Vector m_prevSample;
    char pad_00[12];
    GameTime_t m_fPrevSampleTime;
    float m_fIdealSampleRate;
};

class CPhysicsShake {
public:
    // Vector m_force;
    char pad_00[24];
};

class ExternalAnimGraphHandle_t {
public:
    uint32_t m_Value;
};

class CBaseAnimGraphDestructibleParts_GraphController {
public:
    char pad_00[144];
};

class RotatorQueueEntry_t {
public:
    // Quaternion qTarget;
    char pad_00[16];
    RotatorTargetSpace_t eSpace;
    char pad_01[12];
};

class PulseScriptedSequenceData_t {
public:
    int32_t m_nActorID;
    // CUtlString m_szPreIdleSequence;
    // CUtlString m_szEntrySequence;
    // CUtlString m_szSequence;
    // CUtlString m_szExitSequence;
    char pad_00[36];
    ScriptedMoveTo_t m_nMoveTo;
    SharedMovementGait_t m_nMoveToGait;
    ScriptedHeldWeaponBehavior_t m_nHeldWeaponBehavior;
    bool m_bLoopPreIdleSequence;
    bool m_bLoopActionSequence;
    bool m_bLoopPostIdleSequence;
    bool m_bIgnoreLookAt;
};

class NavGravity_t {
public:
    // Vector m_vGravity;
    char pad_00[12];
    bool m_bDefault;
    char pad_01[3];
};

class CNavVolumeVector {
public:
    char pad_00[128];
    bool m_bHasBeenPreFiltered;
    char pad_01[31];
};

class SceneRequestHandle_t {
public:
    int32_t m_Value;
};

class CSoundEnvelope {
public:
    float m_current;
    float m_target;
    float m_rate;
    bool m_forceupdate;
    char pad_00[3];
};

class CVectorMovingAverage {
public:
    char pad_00[32];
};

class PointCameraSettings_t {
public:
    float m_flNearBlurryDistance;
    float m_flNearCrispDistance;
    float m_flFarCrispDistance;
    float m_flFarBlurryDistance;
};

class CPhysicsBodyGameMarkup {
public:
    // CUtlString m_TargetBody;
    // CGlobalSymbol m_Tag;
    char pad_00[16];
};

class ConstraintSoundInfo {
public:
    char pad_00[8];
    VelocitySampler m_vSampler;
    // SimpleConstraintSoundProfile m_soundProfile;
    // Vector m_forwardAxis;
    // CUtlSymbolLarge m_iszTravelSoundFwd;
    // CUtlSymbolLarge m_iszTravelSoundBack;
    // CUtlSymbolLarge m_iszReversalSoundSmall;
    // CUtlSymbolLarge m_iszReversalSoundMedium;
    // CUtlSymbolLarge m_iszReversalSoundLarge;
    char pad_01[116];
    bool m_bPlayTravelSound;
    bool m_bPlayReversalSound;
    char pad_02[6];
};

class ResponseParams {
public:
    char pad_00[16];
    int16_t odds;
    int16_t flags;
    ResponseFollowup* m_pFollowup;
};

class CStopwatch : public CStopwatchBase {
public:
    float m_flInterval;
};

class CNmEventConsumerAttributes {
public:
    char pad_00[80];
};

class CAI_Expresser {
public:
    char pad_00[96];
    GameTime_t m_flStopTalkTime;
    GameTime_t m_flStopTalkTimeWithoutDelay;
    GameTime_t m_flQueuedSpeechTime;
    GameTime_t m_flBlockedTalkTime;
    int32_t m_voicePitch;
    GameTime_t m_flLastTimeAcceptedSpeak;
    bool m_bAllowSpeakingInterrupts;
    bool m_bConsiderSceneInvolvementAsSpeech;
    bool m_bSceneEntityDisabled;
    int32_t m_nLastSpokenPriority;
    // CBaseFlex* m_pOuter;
    char pad_01[32];
};

class CResponseCriteriaSet {
public:
    char pad_00[48];
    int32_t m_nNumPrefixedContexts;
    bool m_bOverrideOnAppend;
    char pad_01[3];
};

class CPathMoverEntitySpawn {
public:
    // CHandle< CFuncMover > hMover;
    // CUtlVector< CHandle< CBaseEntity > > vecOtherEntities;
    char pad_00[32];
};

class CNavVolumeMarkupVolume {
public:
    char pad_00[224];
};

class CSkeletonAnimationController : public ISkeletonAnimationController {
public:
    // CSkeletonInstance* m_pSkeletonInstance;
    char pad_01[16];
};

class CGameScriptedMoveData {
public:
    // Vector m_vAccumulatedRootMotion;
    // QAngle m_angAccumulatedRootMotionRotation;
    // VectorWS m_vSrc;
    // QAngle m_angSrc;
    // QAngle m_angCurrent;
    char pad_00[60];
    float m_flLockedSpeed;
    float m_flAngRate;
    float m_flDuration;
    GameTime_t m_flStartTime;
    bool m_bActive;
    bool m_bTeleportOnEnd;
    bool m_bIgnoreRotation;
    bool m_bSuccess;
    ForcedCrouchState_t m_nForcedCrouchState;
    bool m_bIgnoreCollisions;
    // Vector m_vDest;
    // QAngle m_angDst;
    // CHandle< CBaseEntity > m_hDestEntity;
    char pad_01[31];
};

class CDecalInstance {
public:
    // CGlobalSymbol m_sDecalGroup;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial;
    // CUtlStringToken m_sSequenceName;
    // CHandle< CBaseEntity > m_hEntity;
    char pad_00[24];
    int32_t m_nBoneIndex;
    int32_t m_nTriangleIndex;
    // Vector m_vPositionLS;
    // Vector m_vNormalLS;
    // Vector m_vSAxisLS;
    char pad_01[36];
    DecalFlags_t m_nFlags;
    // Color m_Color;
    char pad_02[4];
    float m_flWidth;
    float m_flHeight;
    float m_flDepth;
    // CTransformWS m_transform;
    char pad_03[40];
    float m_flAnimationScale;
    float m_flAnimationStartTime;
    GameTime_t m_flPlaceTime;
    float m_flFadeStartTime;
    float m_flFadeDuration;
    float m_flLightingOriginOffset;
    char pad_04[8];
    float m_flBoundingRadiusSqr;
    int16_t m_nSequenceIndex;
    bool m_bIsAdjacent;
    bool m_bDoDecalLightmapping;
    DecalRtEncoding_t m_nDecalRtEncoding;
    bool m_bProjectToBackfaces;
    char pad_05[6];
};

class CPlayerPawnComponent {
public:
    char pad_00[8];
    CNetworkVarChainer __m_pChainEntity;
    char pad_01[24];
};

class CNavVolumeSphericalShell {
public:
    char pad_00[136];
    float m_flRadiusInner;
    char pad_01[4];
};

class ResponseContext_t {
public:
    // CUtlSymbolLarge m_iszName;
    // CUtlSymbolLarge m_iszValue;
    char pad_00[16];
    GameTime_t m_fExpirationTime;
    char pad_01[4];
};

class CRopeOverlapHit {
public:
    // CHandle< CBaseEntity > m_hEntity;
    // CUtlVector< int32 > m_vecOverlappingLinks;
    char pad_00[32];
};

class CDestructiblePartsSystemData {
public:
    // CUtlOrderedMap< HitGroup_t, CDestructiblePart > m_PartsDataByHitGroup;
    char pad_00[40];
    CRangeInt m_nMinMaxNumberHitGroupsToDestroyWhenGibbing;
};

class AmmoIndex_t {
public:
    int8_t m_Value;
};

class CNetworkViewOffsetVector {
public:
    // CNetworkedQuantizedFloat m_vecX;
    // CNetworkedQuantizedFloat m_vecY;
    // CNetworkedQuantizedFloat m_vecZ;
    char pad_00[40];
};

class CNmEventConsumer {
public:
    char pad_00[16];
};

class CAnimEventListenerBase {
public:
    char pad_00[24];
};

class CFloatExponentialMovingAverage {
public:
    char pad_00[20];
};

class CSkillDamage {
public:
    CSkillFloat m_flDamage;
    float m_flNPCDamageScalarVsNPC;
    float m_flPhysicsForceDamage;
};

class CPhysicsBodyGameMarkupData {
public:
    // CUtlOrderedMap< CUtlString, CPhysicsBodyGameMarkup > m_PhysicsBodyMarkupByBoneName;
    char pad_00[40];
};

class SimpleConstraintSoundProfile {
public:
    char pad_00[8];
    float m_flKeyPointMinSoundThreshold;
    float m_flKeyPointMaxSoundThreshold;
    float m_reversalSoundThresholdSmall;
    float m_reversalSoundThresholdMedium;
    float m_reversalSoundThresholdLarge;
    char pad_01[4];
};

class WrappedPhysicsJoint_t {
public:
    char pad_00[8];
};

class lerpdata_t {
public:
    // CHandle< CBaseEntity > m_hEnt;
    char pad_00[4];
    MoveType_t m_MoveType;
    GameTime_t m_flStartTime;
    // Vector m_vecStartOrigin;
    // Quaternion m_qStartRot;
    ParticleIndex_t m_nFXIndex;
    char pad_01[28];
};

class CScriptUniformRandomStream {
public:
    // HSCRIPT m_hScriptScope;
    char pad_00[156];
    int32_t m_nInitialSeed;
};

class CodeGenAABB_t {
public:
    // Vector m_vMinBounds;
    // Vector m_vMaxBounds;
    char pad_00[24];
};

class CResponseQueue {
public:
    // CUtlVector< CAI_Expresser* > m_ExpresserTargets;
    char pad_00[80];
};

class CPlayerControllerComponent {
public:
    char pad_00[8];
    CNetworkVarChainer __m_pChainEntity;
    char pad_01[16];
};

class CNmSnapWeaponTask {
public:
    char pad_00[96];
};

class CDecalGroupVData {
public:
    // CUtlVector< DecalGroupOption_t > m_vecOptions;
    char pad_00[24];
    float m_flTotalProbability;
    char pad_01[4];
};

class CFootstepTableHandle {
public:
    char pad_00[8];
};

class ParticleNode_t {
public:
    // CHandle< CBaseEntity > m_hEntity;
    char pad_00[4];
    ParticleIndex_t m_iIndex;
    GameTime_t m_flStartTime;
    float m_flGrowthDuration;
    // Vector m_vecGrowthOrigin;
    char pad_01[12];
    float m_flEndcapTime;
    bool m_bMarkedForDelete;
    char pad_02[3];
};

class CHintMessage {
public:
    char* m_hintString;
    // CUtlVector< char* > m_args;
    char pad_00[24];
    float m_duration;
    char pad_01[4];
};

class CRemapFloat {
public:
    float m_pValue[4];
};

class AutoRoomDoorwayPairs_t {
public:
    // Vector vP1;
    // Vector vP2;
    char pad_00[24];
};

class RelationshipOverride_t : public Relationship_t {
public:
    // CHandle< CBaseEntity > entity;
    char pad_00[4];
    Class_T classType;
};

class CAnimEventQueueListener {
public:
    char pad_00[32];
};

class CDestructiblePart {
public:
    // CGlobalSymbol m_DebugName;
    char pad_00[8];
    HitGroup_t m_nHitGroup;
    bool m_bDisableHitGroupWhenDestroyed;
    // CUtlVector< HitGroup_t > m_nOtherHitgroupsToDestroyWhenFullyDestructed;
    char pad_01[27];
    bool m_bOnlyDestroyWhenGibbing;
    // CGlobalSymbol m_sBodyGroupName;
    // CUtlVector< CDestructiblePart_DamageLevel > m_DamageLevels;
    char pad_02[39];
};

class CompositeMaterial_t {
public:
    // KeyValues3 m_TargetKVs;
    // KeyValues3 m_PreGenerationKVs;
    // KeyValues3 m_FinalKVs;
    // CUtlVector< GeneratedTextureHandle_t > m_vecGeneratedTextures;
    char pad_00[160];
};

class CompositeMaterialMatchFilter_t {
public:
    CompositeMaterialMatchFilterType_t m_nCompositeMaterialMatchFilterType;
    // CUtlString m_strMatchFilter;
    // CUtlString m_strMatchValue;
    char pad_00[20];
    bool m_bPassWhenTrue;
    char pad_01[7];
};

class inv_image_light_sun_t {
public:
    // Vector color;
    // QAngle angle;
    char pad_00[24];
    float brightness;
};

class IClientAlphaProperty {
public:
    char pad_00[8];
};

class CGlobalLightBase {
public:
    char pad_00[16];
    bool m_bSpotLight;
    // Vector m_SpotLightOrigin;
    // QAngle m_SpotLightAngles;
    // Vector m_ShadowDirection;
    // Vector m_AmbientDirection;
    // Vector m_SpecularDirection;
    // Vector m_InspectorSpecularDirection;
    char pad_01[72];
    float m_flSpecularPower;
    float m_flSpecularIndependence;
    // Color m_SpecularColor;
    char pad_02[4];
    bool m_bStartDisabled;
    bool m_bEnabled;
    // Color m_LightColor;
    // Color m_AmbientColor1;
    // Color m_AmbientColor2;
    // Color m_AmbientColor3;
    char pad_03[16];
    float m_flSunDistance;
    float m_flFOV;
    float m_flNearZ;
    float m_flFarZ;
    bool m_bEnableShadows;
    bool m_bOldEnableShadows;
    bool m_bBackgroundClearNotRequired;
    float m_flCloudScale;
    float m_flCloud1Speed;
    float m_flCloud1Direction;
    float m_flCloud2Speed;
    float m_flCloud2Direction;
    char pad_04[12];
    float m_flAmbientScale1;
    float m_flAmbientScale2;
    float m_flGroundScale;
    float m_flLightScale;
    float m_flFoWDarkness;
    bool m_bEnableSeparateSkyboxFog;
    // Vector m_vFowColor;
    // Vector m_ViewOrigin;
    // QAngle m_ViewAngles;
    char pad_05[36];
    float m_flViewFoV;
    // Vector[8] m_WorldPoints;
    // Vector2D m_vFogOffsetLayer0;
    // Vector2D m_vFogOffsetLayer1;
    // CHandle< C_BaseEntity > m_hEnvWind;
    // CHandle< C_BaseEntity > m_hEnvSky;
    char pad_06[976];
};

class CClientAlphaProperty {
public:
    char pad_00[16];
    uint16_t m_nDistFadeStart;
    uint16_t m_nDistFadeEnd;
    // bitfield:14 m_nDesyncOffset;
    // bitfield:1 m_bAlphaOverride;
    // bitfield:1 m_bShadowAlphaOverride;
    // bitfield:3 m_nRenderMode;
    // bitfield:5 m_nRenderFX;
    char pad_01[3];
    uint8_t m_nAlpha;
    float m_flFadeScale;
    GameTime_t m_flRenderFxStartTime;
    float m_flRenderFxDuration;
    char pad_02[12];
};

class CCompositeMaterialEditorDoc {
public:
    char pad_00[8];
    int32_t m_nVersion;
    // CUtlVector< CompositeMaterialEditorPoint_t > m_Points;
    // KeyValues3 m_KVthumbnail;
    char pad_01[44];
};

class CompMatPropertyMutator_t {
public:
    bool m_bEnabled;
    CompMatPropertyMutatorType_t m_nMutatorCommandType;
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
    int32_t m_nResolution;
    bool m_bIsScratchTarget;
    // CUtlString m_strCompressionFormat;
    char pad_01[11];
    bool m_bSplatDebugInfo;
    bool m_bCaptureInRenderDoc;
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
};

class inv_image_data_t {
public:
    // inv_image_map_t map;
    // inv_image_item_t item;
    // inv_image_camera_t camera;
    char pad_00[100];
    inv_image_light_sun_t lightsun;
    // inv_image_light_fill_t lightfill;
    // inv_image_light_barn_t light0;
    // inv_image_light_barn_t light1;
    // inv_image_clearcolor_t clearcolor;
    char pad_01[104];
};

class CompMatMutatorCondition_t {
public:
    CompMatPropertyMutatorConditionType_t m_nMutatorCondition;
    // CUtlString m_strMutatorConditionContainerName;
    // CUtlString m_strMutatorConditionContainerVarName;
    // CUtlString m_strMutatorConditionContainerVarValue;
    char pad_00[28];
    bool m_bPassWhenTrue;
    char pad_01[7];
};

class C_IronSightController {
public:
    char pad_00[16];
    bool m_bIronSightAvailable;
    float m_flIronSightAmount;
    float m_flIronSightAmountGained;
    float m_flIronSightAmountBiased;
    float m_flIronSightAmount_Interpolated;
    float m_flIronSightAmountGained_Interpolated;
    float m_flIronSightAmountBiased_Interpolated;
    float m_flInterpolationLastUpdated;
    // QAngle[8] m_angDeltaAverage;
    // QAngle m_angViewLast;
    // Vector2D m_vecDotCoords;
    char pad_01[116];
    float m_flFiringInaccuracyExtraWidthMultiplier;
    float m_flSpeedRatio;
    char pad_02[4];
};

class CPlayerSprayDecalRenderHelper {
public:
    char pad_00[48];
};

class CompositeMaterialEditorPoint_t {
public:
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ModelName;
    char pad_00[224];
    int32_t m_nSequenceIndex;
    float m_flCycle;
    // KeyValues3 m_KVModelStateChoices;
    char pad_01[16];
    bool m_bEnableChildModel;
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ChildModelName;
    // CUtlVector< CompositeMaterialAssemblyProcedure_t > m_vecCompositeMaterialAssemblyProcedures;
    // CUtlVector< CompositeMaterial_t > m_vecCompositeMaterials;
    char pad_02[287];
};

class C_CommandContext {
public:
    bool needsprocessing;
    char pad_00[156];
    int32_t command_number;
    char pad_01[4];
};

class inv_image_clearcolor_t {
public:
    // Vector color;
    char pad_00[12];
};

class C_CSGO_PreviewPlayer_GraphController {
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
};

class CInventoryImageData {
public:
    InventoryNodeType_t m_nNodeType;
    // CUtlString name;
    char pad_00[8];
    inv_image_data_t inventory_image_data;
};

class inv_image_camera_t {
public:
    // QAngle angle;
    char pad_00[12];
    float fov;
    float znear;
    float zfar;
    // Vector target;
    // Vector target_nudge;
    char pad_01[24];
    float orbit_distance;
};

class CFlashlightEffect {
public:
    char pad_00[16];
    bool m_bIsOn;
    char pad_01[15];
    bool m_bMuzzleFlashEnabled;
    float m_flMuzzleFlashBrightness;
    // Quaternion m_quatMuzzleFlashOrientation;
    // Vector m_vecMuzzleFlashOrigin;
    char pad_02[36];
    float m_flFov;
    float m_flFarZ;
    float m_flLinearAtten;
    bool m_bCastsShadows;
    float m_flCurrentPullBackDist;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_FlashlightTexture;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_MuzzleFlashTexture;
    char pad_03[16];
    char m_textureName[64];
    char pad_04[560];
};

class TimedEvent {
public:
    float m_TimeBetweenEvents;
    float m_fNextEvent;
};

class inv_image_item_t {
public:
    // Vector position;
    // QAngle angle;
    // CUtlString pose_sequence;
    char pad_00[32];
};

class CInterpolatedValue {
public:
    float m_flStartTime;
    float m_flEndTime;
    float m_flStartValue;
    float m_flEndValue;
    int32_t m_nInterpType;
};

class inv_image_light_fill_t {
public:
    // Vector color;
    // QAngle angle;
    char pad_00[24];
    float brightness;
};

class inv_image_map_t {
public:
    // CUtlString map_name;
    char pad_00[8];
    float map_rotation;
    char pad_01[4];
};

class inv_image_light_barn_t {
public:
    // Vector color;
    // QAngle angle;
    char pad_00[24];
    float brightness;
    float orbit_distance;
};

class CNmEventConsumerHudModelArmsAttributes {
public:
    char pad_00[88];
};

class CompositeMaterialInputLooseVariable_t {
public:
    // CUtlString m_strName;
    char pad_00[8];
    bool m_bExposeExternally;
    // CUtlString m_strExposedFriendlyName;
    // CUtlString m_strExposedFriendlyGroupName;
    char pad_01[23];
    bool m_bExposedVariableIsFixedRange;
    // CUtlString m_strExposedVisibleWhenTrue;
    // CUtlString m_strExposedHiddenWhenTrue;
    // CUtlString m_strExposedValueList;
    char pad_02[28];
    CompositeMaterialInputLooseVariableType_t m_nVariableType;
    bool m_bValueBoolean;
    int32_t m_nValueIntX;
    int32_t m_nValueIntY;
    int32_t m_nValueIntZ;
    int32_t m_nValueIntW;
    bool m_bHasFloatBounds;
    float m_flValueFloatX;
    float m_flValueFloatX_Min;
    float m_flValueFloatX_Max;
    float m_flValueFloatY;
    float m_flValueFloatY_Min;
    float m_flValueFloatY_Max;
    float m_flValueFloatZ;
    float m_flValueFloatZ_Min;
    float m_flValueFloatZ_Max;
    float m_flValueFloatW;
    float m_flValueFloatW_Min;
    float m_flValueFloatW_Max;
    // Color m_cValueColor4;
    char pad_03[4];
    CompositeMaterialVarSystemVar_t m_nValueSystemVar;
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_strResourceMaterial;
    // CUtlString m_strTextureContentAssetPath;
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCTextureBase > > m_strTextureRuntimeResourcePath;
    // CUtlString m_strTextureCompilationVtexTemplate;
    char pad_04[468];
    CompositeMaterialInputTextureType_t m_nTextureType;
    // CUtlString m_strString;
    // CUtlString m_strPanoramaPanelPath;
    char pad_05[20];
    int32_t m_nPanoramaRenderRes;
    char pad_06[4];
};

class CompositeMaterialAssemblyProcedure_t {
public:
    // CUtlVector< CResourceNameTyped< CWeakHandle< InfoForResourceTypeCCompositeMaterialKit > > > m_vecCompMatIncludes;
    // CUtlVector< CompositeMaterialMatchFilter_t > m_vecMatchFilters;
    // CUtlVector< CompositeMaterialInputContainer_t > m_vecCompositeInputContainers;
    // CUtlVector< CompMatPropertyMutator_t > m_vecPropertyMutators;
    char pad_00[96];
};

class CompositeMaterialInputContainer_t {
public:
    bool m_bEnabled;
    CompositeMaterialInputContainerSourceType_t m_nCompositeMaterialInputContainerSourceType;
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_strSpecificContainerMaterial;
    // CUtlString m_strAttrName;
    // CUtlString m_strAlias;
    // CUtlVector< CompositeMaterialInputLooseVariable_t > m_vecLooseVariables;
    // CUtlString m_strAttrNameForVar;
    char pad_00[272];
    bool m_bExposeExternally;
    char pad_01[31];
};

class GeneratedTextureHandle_t {
public:
    // CUtlString m_strBitmapName;
    char pad_00[96];
};

class CAnimScriptBase {
public:
    char pad_00[8];
    bool m_bIsValid;
    char pad_01[7];
};

class EmptyTestScript {
public:
    // CAnimScriptParam< float32 > m_hTest;
    char pad_00[32];
};

class Vector {
public:
    float x;
    float y;
    float z;
};

class Vector4D {
public:
    float x;
    float y;
    float z;
    float w;
};

class Vector2D {
public:
    float x;
    float y;
};

class QAngle {
public:
    float pitch;
    float yaw;
    float roll;
};

