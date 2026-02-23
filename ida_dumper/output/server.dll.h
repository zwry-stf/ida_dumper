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

enum NavDirType : uint32_t {
    NORTH = 0,
    EAST = 1,
    SOUTH = 2,
    WEST = 3,
    NUM_NAV_DIR_TYPE_DIRECTIONS = 4,
};

enum SequenceFinishNotifyState_t : uint8_t {
    eDoNotNotify = 0,
    eNotifyWhenFinished = 1,
    eNotifyTriggered = 2,
};

enum PointOrientConstraint_t : uint32_t {
    eNone = 0,
    ePreserveUpAxis = 1,
};

enum PointOrientGoalDirectionType_t : uint32_t {
    eAbsOrigin = 0,
    eCenter = 1,
    eHead = 2,
    eForward = 3,
    eEyesForward = 4,
};

enum PointTemplateOwnerSpawnGroupType_t : uint32_t {
    INSERT_INTO_POINT_TEMPLATE_SPAWN_GROUP = 0,
    INSERT_INTO_CURRENTLY_ACTIVE_SPAWN_GROUP = 1,
    INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP = 2,
};

enum PointTemplateClientOnlyEntityBehavior_t : uint32_t {
    CREATE_FOR_CURRENTLY_CONNECTED_CLIENTS_ONLY = 0,
    CREATE_FOR_CLIENTS_WHO_CONNECT_LATER = 1,
};

enum PerformanceMode_t : uint32_t {
    PM_NORMAL = 0,
    PM_NO_GIBS = 1,
};

enum BreakableContentsType_t : uint32_t {
    BC_DEFAULT = 0,
    BC_EMPTY = 1,
    BC_PROP_GROUP_OVERRIDE = 2,
    BC_PARTICLE_SYSTEM_OVERRIDE = 3,
};

enum DecalFlags_t : uint32_t {
    eNone = 0,
    eCannotClear = 1,
    eDecalProjectToBackfaces = 2,
    eAll = 4294967295,
    eAllButCannotClear = 4294967294,
};

enum AmmoPosition_t : uint32_t {
    AMMO_POSITION_INVALID = 4294967295,
    AMMO_POSITION_PRIMARY = 0,
    AMMO_POSITION_SECONDARY = 1,
    AMMO_POSITION_COUNT = 2,
};

enum ChatIgnoreType_t : uint32_t {
    CHAT_IGNORE_NONE = 0,
    CHAT_IGNORE_ALL = 1,
    CHAT_IGNORE_TEAM = 2,
};

enum FixAngleSet_t : uint8_t {
    None = 0,
    Absolute = 1,
    Relative = 2,
};

enum filter_t : uint32_t {
    FILTER_AND = 0,
    FILTER_OR = 1,
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

enum ObserverMode_t : uint32_t {
    OBS_MODE_NONE = 0,
    OBS_MODE_FIXED = 1,
    OBS_MODE_IN_EYE = 2,
    OBS_MODE_CHASE = 3,
    OBS_MODE_ROAMING = 4,
    NUM_OBSERVER_MODES = 5,
};

enum ObserverInterpState_t : uint32_t {
    OBSERVER_INTERP_NONE = 0,
    OBSERVER_INTERP_STARTING = 1,
    OBSERVER_INTERP_TRAVELING = 2,
    OBSERVER_INTERP_SETTLING = 3,
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

enum AmmoFlags_t : uint32_t {
    AMMO_FORCE_DROP_IF_CARRIED = 1,
    AMMO_RESERVE_STAYS_WITH_WEAPON = 2,
    AMMO_FLAG_MAX = 2,
};

enum EProceduralRagdollWeightIndexPropagationMethod : uint32_t {
    Bone = 0,
    BoneAndChildren = 1,
};

enum AnimGraphDebugDrawType_t : uint32_t {
    None = 0,
    WsPosition = 1,
    MsPosition = 2,
    WsDirection = 3,
    MsDirection = 4,
};

enum ExternalAnimGraphInactiveBehavior_t : uint8_t {
    eNone = 0,
    eUnbind = 1,
    eUnbindAndDelete = 2,
};

enum EDestructiblePartRadiusDamageApplyType : uint32_t {
    ScaleByExplosionRadius = 0,
    PrioritizeClosestPart = 1,
};

enum EDestructiblePartDamagePassThroughType : uint32_t {
    Normal = 0,
    Absorb = 1,
    InvincibleAbsorb = 2,
    InvinciblePassthrough = 3,
};

enum DestructiblePartDestructionDeathBehavior_t : uint32_t {
    eDoNotKill = 0,
    eKill = 1,
    eGib = 2,
    eRemove = 3,
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

enum CDebugOverlayFilterTextType_t : uint32_t {
    FILTER_TEXT_NONE = 0,
    MATCH = 1,
    HIERARCHY = 2,
    COUNT = 3,
};

enum CDebugOverlayCombinedTypes_t : uint32_t {
    ALL = 0,
    ANY = 1,
    COUNT = 2,
};

enum HierarchyType_t : uint32_t {
    HIERARCHY_NONE = 0,
    HIERARCHY_BONE_MERGE = 1,
    HIERARCHY_ATTACHMENT = 2,
    HIERARCHY_ABSORIGIN = 3,
    HIERARCHY_BONE = 4,
    HIERARCHY_TYPE_COUNT = 5,
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

enum CanPlaySequence_t : uint32_t {
    CANNOT_PLAY = 0,
    CAN_PLAY_NOW = 1,
    CAN_PLAY_ENQUEUED = 2,
};

enum ForcedCrouchState_t : uint32_t {
    FORCEDCROUCH_NONE = 0,
    FORCEDCROUCH_CROUCHED = 1,
    FORCEDCROUCH_UNCROUCHED = 2,
};

enum ScriptedOnDeath_t : uint32_t {
    SS_ONDEATH_NOT_APPLICABLE = 4294967295,
    SS_ONDEATH_UNDEFINED = 0,
    SS_ONDEATH_RAGDOLL = 1,
    SS_ONDEATH_ANIMATED_DEATH = 2,
};

enum IChoreoServices::ScriptState_t : uint32_t {
    SCRIPT_PLAYING = 0,
    SCRIPT_WAIT = 1,
    SCRIPT_POST_IDLE = 2,
    SCRIPT_CLEANUP = 3,
    SCRIPT_MOVE_TO_MARK = 4,
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

enum ShakeCommand_t : uint32_t {
    SHAKE_START = 0,
    SHAKE_STOP = 1,
    SHAKE_AMPLITUDE = 2,
    SHAKE_FREQUENCY = 3,
    SHAKE_START_RUMBLEONLY = 4,
    SHAKE_START_NORUMBLE = 5,
};

enum TimelineCompression_t : uint32_t {
    TIMELINE_COMPRESSION_SUM = 0,
    TIMELINE_COMPRESSION_COUNT_PER_INTERVAL = 1,
    TIMELINE_COMPRESSION_AVERAGE = 2,
    TIMELINE_COMPRESSION_AVERAGE_BLEND = 3,
    TIMELINE_COMPRESSION_TOTAL = 4,
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

enum ChoreoLookAtMode_t : uint32_t {
    eInvalid = 4294967295,
    eChest = 0,
    eHead = 1,
    eEyesOnly = 2,
};

enum ChoreoLookAtSpeed_t : uint32_t {
    eInvalid = 4294967295,
    eSlow = 0,
    eMedium = 1,
    eFast = 2,
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

enum MoveCollide_t : uint8_t {
    MOVECOLLIDE_DEFAULT = 0,
    MOVECOLLIDE_FLY_BOUNCE = 1,
    MOVECOLLIDE_FLY_CUSTOM = 2,
    MOVECOLLIDE_FLY_SLIDE = 3,
    MOVECOLLIDE_COUNT = 4,
    MOVECOLLIDE_MAX_BITS = 3,
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

enum BrushSolidities_e : uint32_t {
    BRUSHSOLID_TOGGLE = 0,
    BRUSHSOLID_NEVER = 1,
    BRUSHSOLID_ALWAYS = 2,
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

enum RenderMode_t : uint8_t {
    kRenderNormal = 0,
    kRenderTransAlpha = 1,
    kRenderNone = 2,
    kRenderModeCount = 3,
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

enum CRR_Response::ResponseEnum_t : uint32_t {
    MAX_RESPONSE_NAME = 192,
    MAX_RULE_NAME = 128,
};

enum LessonPanelLayoutFileTypes_t : uint32_t {
    LAYOUT_HAND_DEFAULT = 0,
    LAYOUT_WORLD_DEFAULT = 1,
    LAYOUT_CUSTOM = 2,
};

enum Touch_t : uint32_t {
    touch_none = 0,
    touch_player_only = 1,
    touch_npc_only = 2,
    touch_player_or_npc = 3,
    touch_player_or_npc_or_physicsprop = 4,
};

enum navproperties_t : uint32_t {
    NAV_IGNORE = 1,
};

enum CLogicBranchList::LogicBranchListenerLastState_t : uint32_t {
    LOGIC_BRANCH_LISTENER_NOT_INIT = 0,
    LOGIC_BRANCH_LISTENER_ALL_TRUE = 1,
    LOGIC_BRANCH_LISTENER_ALL_FALSE = 2,
    LOGIC_BRANCH_LISTENER_MIXED = 3,
};

enum EntFinderMethod_t : uint32_t {
    ENT_FIND_METHOD_NEAREST = 0,
    ENT_FIND_METHOD_FARTHEST = 1,
    ENT_FIND_METHOD_RANDOM = 2,
};

enum ValueRemapperInputType_t : uint32_t {
    InputType_PlayerShootPosition = 0,
    InputType_PlayerShootPositionAroundAxis = 1,
};

enum ValueRemapperOutputType_t : uint32_t {
    OutputType_AnimationCycle = 0,
    OutputType_RotationX = 1,
    OutputType_RotationY = 2,
    OutputType_RotationZ = 3,
};

enum ValueRemapperHapticsType_t : uint32_t {
    HaticsType_Default = 0,
    HaticsType_None = 1,
};

enum ValueRemapperMomentumType_t : uint32_t {
    MomentumType_None = 0,
    MomentumType_Friction = 1,
    MomentumType_SpringTowardSnapValue = 2,
    MomentumType_SpringAwayFromSnapValue = 3,
};

enum ValueRemapperRatchetType_t : uint32_t {
    RatchetType_Absolute = 0,
    RatchetType_EachEngage = 1,
};

enum PointWorldTextJustifyHorizontal_t : uint32_t {
    POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_LEFT = 0,
    POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_CENTER = 1,
    POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_RIGHT = 2,
};

enum PointWorldTextJustifyVertical_t : uint32_t {
    POINT_WORLD_TEXT_JUSTIFY_VERTICAL_BOTTOM = 0,
    POINT_WORLD_TEXT_JUSTIFY_VERTICAL_CENTER = 1,
    POINT_WORLD_TEXT_JUSTIFY_VERTICAL_TOP = 2,
};

enum PointWorldTextReorientMode_t : uint32_t {
    POINT_WORLD_TEXT_REORIENT_NONE = 0,
    POINT_WORLD_TEXT_REORIENT_AROUND_UP = 1,
};

enum doorCheck_e : uint32_t {
    DOOR_CHECK_FORWARD = 0,
    DOOR_CHECK_BACKWARD = 1,
    DOOR_CHECK_FULL = 2,
};

enum PropDoorRotatingSpawnPos_t : uint32_t {
    DOOR_SPAWN_CLOSED = 0,
    DOOR_SPAWN_OPEN_FORWARD = 1,
    DOOR_SPAWN_OPEN_BACK = 2,
    DOOR_SPAWN_AJAR = 3,
};

enum PropDoorRotatingOpenDirection_e : uint32_t {
    DOOR_ROTATING_OPEN_BOTH_WAYS = 0,
    DOOR_ROTATING_OPEN_FORWARD = 1,
    DOOR_ROTATING_OPEN_BACKWARD = 2,
};

enum SceneOnPlayerDeath_t : uint32_t {
    SCENE_ONPLAYERDEATH_DO_NOTHING = 0,
    SCENE_ONPLAYERDEATH_CANCEL = 1,
};

enum ScriptedConflictResponse_t : uint32_t {
    SS_CONFLICT_ENQUEUE = 0,
    SS_CONFLICT_INTERRUPT = 1,
};

enum TRAIN_CODE : uint32_t {
    TRAIN_SAFE = 0,
    TRAIN_BLOCKING = 1,
    TRAIN_FOLLOWING = 2,
};

enum eSplinePushType : uint32_t {
    k_eSplinePushAlong = 0,
    k_eSplinePushAway = 1,
    k_eSplinePushTowards = 2,
};

enum NPCFollowFormation_t : uint32_t {
    Default = 4294967295,
    CloseCircle = 0,
    WideCircle = 1,
    MediumCircle = 5,
    Sidekick = 6,
};

enum PulseNPCCondition_t : uint32_t {
    COND_SEE_PLAYER = 1,
    COND_LOST_PLAYER = 2,
    COND_HEAR_PLAYER = 3,
    COND_PLAYER_PUSHING = 4,
    COND_NO_PRIMARY_AMMO = 5,
};

enum PulseTraceContents_t : uint32_t {
    STATIC_LEVEL = 0,
    SOLID = 1,
};

enum PulseCollisionGroup_t : uint32_t {
    DEFAULT = 0,
};

enum SoundEventStartType_t : uint32_t {
    SOUNDEVENT_START_PLAYER = 0,
    SOUNDEVENT_START_WORLD = 1,
    SOUNDEVENT_START_ENTITY = 2,
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

enum FuncDoorSpawnPos_t : uint32_t {
    FUNC_DOOR_SPAWN_CLOSED = 0,
    FUNC_DOOR_SPAWN_OPEN = 1,
};

enum Explosions : uint32_t {
    expRandom = 0,
    expDirected = 1,
    expUsePrecise = 2,
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

enum EOverrideBlockLOS_t : uint32_t {
    BLOCK_LOS_DEFAULT = 0,
    BLOCK_LOS_FORCE_FALSE = 1,
    BLOCK_LOS_FORCE_TRUE = 2,
};

enum MoveLinearAuthoredPos_t : uint32_t {
    MOVELINEAR_AUTHORED_AT_START_POSITION = 0,
    MOVELINEAR_AUTHORED_AT_OPEN_POSITION = 1,
    MOVELINEAR_AUTHORED_AT_CLOSED_POSITION = 2,
};

enum CFuncMover::Move_t : uint32_t {
    MOVE_LOOP = 0,
    MOVE_OSCILLATE = 1,
    MOVE_STOP_AT_END = 2,
};

enum CFuncMover::OrientationUpdate_t : uint32_t {
    ORIENTATION_FORWARD_PATH = 0,
    ORIENTATION_FORWARD_PATH_AND_FIXED_PITCH = 1,
    ORIENTATION_FORWARD_PATH_AND_UP_CONTROL_POINT = 2,
    ORIENTATION_MATCH_CONTROL_POINT = 3,
    ORIENTATION_FIXED = 4,
    ORIENTATION_FACE_PLAYER = 5,
    ORIENTATION_FORWARD_MOVEMENT_DIRECTION = 6,
    ORIENTATION_FORWARD_MOVEMENT_DIRECTION_AND_UP_CONTROL_POINT = 7,
    ORIENTATION_FACE_ENTITY = 8,
};

enum CFuncMover::TransitionToPathNodeAction_t : uint32_t {
    TRANSITION_TO_PATH_NODE_ACTION_NONE = 0,
    TRANSITION_TO_PATH_NODE_ACTION_START_FORWARD = 1,
    TRANSITION_TO_PATH_NODE_ACTION_START_REVERSE = 2,
    TRANSITION_TO_PATH_NODE_TRANSITIONING = 3,
};

enum CFuncMover::FollowConstraint_t : uint32_t {
    FOLLOW_CONSTRAINT_DISTANCE = 0,
    FOLLOW_CONSTRAINT_SPRING = 1,
};

enum CFuncMover::FollowEntityDirection_t : uint32_t {
    FOLLOW_ENTITY_BIDIRECTIONAL = 0,
    FOLLOW_ENTITY_FORWARD = 1,
    FOLLOW_ENTITY_REVERSE = 2,
};

enum RotatorTargetSpace_t : uint32_t {
    ROTATOR_TARGET_WORLDSPACE = 0,
    ROTATOR_TARGET_LOCALSPACE = 1,
};

enum CFuncRotator::Rotate_t : uint32_t {
    ROTATE_LOOP = 0,
    ROTATE_OSCILLATE = 1,
    ROTATE_STOP_AT_END = 2,
    ROTATE_LOOK_AT_TARGET = 3,
    ROTATE_LOOK_AT_TARGET_ONLY_YAW = 4,
    ROTATE_RETURN_TO_INITIAL_ORIENTATION = 5,
};

enum TestInputOutputCombinationsEnum_t : uint32_t {
    ZERO = 0,
    ONE = 1,
    TWO = 2,
};

enum TrackOrientationType_t : uint32_t {
    TrackOrientation_Fixed = 0,
    TrackOrientation_FacePath = 1,
    TrackOrientation_FacePathAngles = 2,
};

enum HoverPoseFlags_t : uint8_t {
    eNone = 0,
    ePosition = 1,
    eAngles = 2,
};

enum CPhysicsProp::CrateType_t : uint32_t {
    CRATE_SPECIFIC_ITEM = 0,
    CRATE_TYPE_COUNT = 1,
};

enum ESceneRequestState_t : uint32_t {
    INACTIVE = 0,
    ACTIVE = 1,
};

enum TrainVelocityType_t : uint32_t {
    TrainVelocity_Instantaneous = 0,
    TrainVelocity_LinearBlend = 1,
    TrainVelocity_EaseInEaseOut = 2,
};

enum TrainOrientationType_t : uint32_t {
    TrainOrientation_Fixed = 0,
    TrainOrientation_AtPathTracks = 1,
    TrainOrientation_LinearBlend = 2,
    TrainOrientation_EaseInEaseOut = 3,
};

enum RelativeLocationType_t : uint8_t {
    WORLD_SPACE_POSITION = 0,
    RELATIVE_TO_ENTITY_IN_LOCAL_SPACE = 1,
    RELATIVE_TO_ENTITY_YAW_ONLY = 2,
    RELATIVE_TO_ENTITY_IN_WORLD_SPACE = 3,
};

enum NavScope_t : uint8_t {
    eGround = 0,
    eAir = 1,
    eCount = 2,
    eFirst = 0,
    eInvalid = 255,
};

enum NavScopeFlags_t : uint8_t {
    eGround = 1,
    eAir = 2,
    eAll = 3,
    eNone = 0,
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

enum BeamClipStyle_t : uint32_t {
    kNOCLIP = 0,
    kGEOCLIP = 1,
    kMODELCLIP = 2,
    kBEAMCLIPSTYLE_NUMBITS = 2,
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

enum ShatterDamageCause : uint8_t {
    SHATTERDAMAGE_BULLET = 0,
    SHATTERDAMAGE_MELEE = 1,
    SHATTERDAMAGE_THROWN = 2,
    SHATTERDAMAGE_SCRIPT = 3,
    SHATTERDAMAGE_EXPLOSIVE = 4,
};

enum ShatterGlassStressType : uint8_t {
    SHATTERGLASS_BLUNT = 0,
    SHATTERGLASS_BALLISTIC = 1,
    SHATTERGLASS_PULSE = 2,
    SHATTERGLASS_EXPLOSIVE = 3,
};

enum OnFrame : uint8_t {
    ONFRAME_UNKNOWN = 0,
    ONFRAME_TRUE = 1,
    ONFRAME_FALSE = 2,
};

enum ShardSolid_t : uint8_t {
    SHARD_SOLID = 0,
    SHARD_DEBRIS = 1,
};

enum AnimLoopMode_t : uint32_t {
    ANIM_LOOP_MODE_INVALID = 4294967295,
    ANIM_LOOP_MODE_NOT_LOOPING = 0,
    ANIM_LOOP_MODE_LOOPING = 1,
    ANIM_LOOP_MODE_USE_SEQUENCE_SETTINGS = 2,
    ANIM_LOOP_MODE_COUNT = 3,
};

enum BodySectionAuthority_t : uint32_t {
    eNone = 0,
    eLowerBody = 1,
    eUpperBody = 2,
    eFullBody = 3,
};

enum EntityAttachmentType_t : uint32_t {
    eAbsOrigin = 0,
    eCenter = 1,
    eEyes = 2,
    eAttachment = 3,
};

enum EntitySubclassScope_t : uint32_t {
    SUBCLASS_SCOPE_NONE = 4294967295,
    SUBCLASS_SCOPE_PRECIPITATION = 0,
    SUBCLASS_SCOPE_PLAYER_WEAPONS = 1,
    SUBCLASS_SCOPE_COUNT = 2,
};

enum SubclassVDataChangeType_t : uint32_t {
    SUBCLASS_VDATA_CREATED = 0,
    SUBCLASS_VDATA_SUBCLASS_CHANGED = 1,
    SUBCLASS_VDATA_RELOADED = 2,
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

enum EntityDistanceMode_t : uint32_t {
    eOriginToOrigin = 0,
    eCenterToCenter = 1,
    eAxisToAxis = 2,
};

enum WeaponSwitchReason_t : uint32_t {
    eDrawn = 0,
    eEquipped = 1,
    eUserInitiatedSwitchToLast = 2,
    eUserInitiatedUIKeyPress = 3,
    eUserInitiatedSwitchHands = 4,
};

enum WeaponAttackType_t : uint32_t {
    eInvalid = 4294967295,
    ePrimary = 0,
    eSecondary = 1,
    eCount = 2,
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

enum EntityDisolveType_t : uint32_t {
    ENTITY_DISSOLVE_INVALID = 4294967295,
    ENTITY_DISSOLVE_NORMAL = 0,
    ENTITY_DISSOLVE_ELECTRICAL = 1,
    ENTITY_DISSOLVE_ELECTRICAL_LIGHT = 2,
    ENTITY_DISSOLVE_CORE = 3,
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

enum WaterLevel_t : uint8_t {
    WL_NotInWater = 0,
    WL_Feet = 1,
    WL_Knees = 2,
    WL_Waist = 3,
    WL_Chest = 4,
    WL_FullyUnderwater = 5,
    WL_Count = 6,
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

enum DoorState_t : uint32_t {
    DOOR_STATE_CLOSED = 0,
    DOOR_STATE_OPENING = 1,
    DOOR_STATE_OPEN = 2,
    DOOR_STATE_CLOSING = 3,
    DOOR_STATE_AJAR = 4,
};

enum ShadowType_t : uint32_t {
    SHADOWS_NONE = 0,
    SHADOWS_SIMPLE = 1,
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

enum LatchDirtyPermission_t : uint32_t {
    LATCH_DIRTY_DISALLOW = 0,
    LATCH_DIRTY_SERVER_CONTROLLED = 1,
    LATCH_DIRTY_CLIENT_SIMULATED = 2,
    LATCH_DIRTY_PREDICTION = 3,
    LATCH_DIRTY_FRAMESIMULATE = 4,
    LATCH_DIRTY_PARTICLE_SIMULATE = 5,
};

enum LifeState_t : uint32_t {
    LIFE_ALIVE = 0,
    LIFE_DYING = 1,
    LIFE_DEAD = 2,
    LIFE_RESPAWNABLE = 3,
    LIFE_RESPAWNING = 4,
    NUM_LIFESTATES = 5,
};

enum StanceType_t : uint32_t {
    STANCE_CURRENT = 4294967295,
    STANCE_DEFAULT = 0,
    STANCE_CROUCHING = 1,
    STANCE_PRONE = 2,
    NUM_STANCES = 3,
};

enum ModifyDamageReturn_t : uint32_t {
    CONTINUE_TO_APPLY_DAMAGE = 0,
    ABORT_DO_NOT_APPLY_DAMAGE = 1,
};

enum BeginDeathLifeStateTransition_t : uint8_t {
    TRANSITION_TO_LIFESTATE_DYING = 0,
    TRANSITION_TO_LIFESTATE_DEAD = 1,
};

enum EntityPlatformTypes_t : uint8_t {
    ENTITY_NOT_PLATFORM = 0,
    ENTITY_PLATFORM_PLAYER_FOLLOWS_YAW = 1,
    ENTITY_PLATFORM_PLAYER_IGNORES_YAW = 2,
};

enum WorldTextPanelHorizontalAlign_t : uint32_t {
    WORLDTEXT_HORIZONTAL_ALIGN_LEFT = 0,
    WORLDTEXT_HORIZONTAL_ALIGN_CENTER = 1,
    WORLDTEXT_HORIZONTAL_ALIGN_RIGHT = 2,
};

enum WorldTextPanelVerticalAlign_t : uint32_t {
    WORLDTEXT_VERTICAL_ALIGN_TOP = 0,
    WORLDTEXT_VERTICAL_ALIGN_CENTER = 1,
    WORLDTEXT_VERTICAL_ALIGN_BOTTOM = 2,
};

enum WorldTextPanelOrientation_t : uint32_t {
    WORLDTEXT_ORIENTATION_DEFAULT = 0,
    WORLDTEXT_ORIENTATION_FACEUSER = 1,
    WORLDTEXT_ORIENTATION_FACEUSER_UPRIGHT = 2,
};

enum attributeprovidertypes_t : uint32_t {
    PROVIDER_GENERIC = 0,
    PROVIDER_WEAPON = 1,
};

enum MoveMountingAmount_t : uint32_t {
    MOVE_MOUNT_NONE = 0,
    MOVE_MOUNT_LOW = 1,
    MOVE_MOUNT_HIGH = 2,
    MOVE_MOUNT_MAXCOUNT = 3,
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

enum GrenadeType_t : uint32_t {
    GRENADE_TYPE_EXPLOSIVE = 0,
    GRENADE_TYPE_FLASH = 1,
    GRENADE_TYPE_FIRE = 2,
    GRENADE_TYPE_DECOY = 3,
    GRENADE_TYPE_SMOKE = 4,
    GRENADE_TYPE_TOTAL = 5,
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

enum EContributionScoreFlag_t : uint8_t {
    k_EContributionScoreFlag_Default = 0,
    k_EContributionScoreFlag_Objective = 1,
    k_EContributionScoreFlag_Bullets = 2,
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

enum PreviewWeaponState : uint32_t {
    DROPPED = 0,
    HOLSTERED = 1,
    DEPLOYED = 2,
    PLANTED = 3,
    INSPECT = 4,
    ICON = 5,
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

enum CSWeaponCategory : uint32_t {
    WEAPONCATEGORY_OTHER = 0,
    WEAPONCATEGORY_MELEE = 1,
    WEAPONCATEGORY_SECONDARY = 2,
    WEAPONCATEGORY_SMG = 3,
    WEAPONCATEGORY_RIFLE = 4,
    WEAPONCATEGORY_HEAVY = 5,
    WEAPONCATEGORY_COUNT = 6,
};

enum CSWeaponSilencerType : uint32_t {
    WEAPONSILENCER_NONE = 0,
    WEAPONSILENCER_DETACHABLE = 1,
    WEAPONSILENCER_INTEGRATED = 2,
};

enum MedalRank_t : uint32_t {
    MEDAL_RANK_NONE = 0,
    MEDAL_RANK_BRONZE = 1,
    MEDAL_RANK_SILVER = 2,
    MEDAL_RANK_GOLD = 3,
    MEDAL_RANK_COUNT = 4,
};

enum CSWeaponMode : uint32_t {
    Primary_Mode = 0,
    Secondary_Mode = 1,
    WeaponMode_MAX = 2,
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

enum C4LightEffect_t : uint32_t {
    eLightEffectNone = 0,
    eLightEffectDropped = 1,
    eLightEffectThirdPersonHeld = 2,
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

class CEntityIdentity;
class CBodyComponent;
class CCollisionProperty;
class CPulseGraphInstance_ServerEntity;
class CGameSceneNode;
class CPointCamera;
class CDestructiblePartsComponent;
class CSkyCamera;
class CCSGameModeRules;
class CCSPlayer_PingServices;
class CCSPlayer_BulletServices;
class CCSPlayer_HostageServices;
class CCSPlayer_BuyServices;
class CCSPlayer_ActionTrackingServices;
class CCSPlayer_RadioServices;
class CCSPlayer_DamageReactServices;
class CCSBot;
class CCSPlayerController_InGameMoneyServices;
class CCSPlayerController_InventoryServices;
class CCSPlayerController_DamageServices;
class CVoteController;
class CPathKeyFrame;
class CPathTrack;


class CEntityComponent {
public:
    char pad_00[8];
};

class CScriptComponent : public CEntityComponent {
public:
    // CUtlSymbolLarge m_scriptClassName;
    char pad_01[56];
};

class CEntityInstance {
public:
    // CUtlSymbolLarge m_iszPrivateVScripts;
    char pad_00[16];
    CEntityIdentity* m_pEntity;
    char pad_01[24];
    CScriptComponent* m_CScriptComponent;
};

class CBaseEntity : public CEntityInstance {
public:
    CBodyComponent* m_CBodyComponent;
    CNetworkTransmitComponent m_NetworkTransmitComponent;
    // CUtlVector< thinkfunc_t > m_aThinkFunctions;
    char pad_02[88];
    int32_t m_iCurrentThinkContext;
    GameTick_t m_nLastThinkTick;
    bool m_bDisabledContextThinks;
    // CTypedBitVec< 64 > m_isSteadyState;
    char pad_03[20];
    float m_lastNetworkChange;
    // CUtlVector< ResponseContext_t > m_ResponseContexts;
    // CUtlSymbolLarge m_iszResponseContext;
    char pad_04[76];
    int32_t m_iHealth;
    int32_t m_iMaxHealth;
    uint8_t m_lifeState;
    float m_flDamageAccumulator;
    bool m_bTakesDamage;
    TakeDamageFlags_t m_nTakeDamageFlags;
    EntityPlatformTypes_t m_nPlatformType;
    char pad_05[1];
    MoveCollide_t m_MoveCollide;
    MoveType_t m_MoveType;
    MoveType_t m_nActualMoveType;
    uint8_t m_nWaterTouch;
    uint8_t m_nSlimeTouch;
    bool m_bRestoreInHierarchy;
    // CUtlSymbolLarge m_target;
    // CHandle< CBaseFilter > m_hDamageFilter;
    // CUtlSymbolLarge m_iszDamageFilterName;
    char pad_06[24];
    float m_flMoveDoneTime;
    // CUtlStringToken m_nSubclassID;
    char pad_07[12];
    float m_flAnimTime;
    float m_flSimulationTime;
    GameTime_t m_flCreateTime;
    bool m_bClientSideRagdoll;
    uint8_t m_ubInterpolationFrame;
    // Vector m_vPrevVPhysicsUpdatePos;
    char pad_08[14];
    uint8_t m_iTeamNum;
    // CUtlSymbolLarge m_iGlobalname;
    char pad_09[8];
    int32_t m_iSentToClients;
    float m_flSpeed;
    // CUtlString m_sUniqueHammerID;
    char pad_010[8];
    uint32_t m_spawnflags;
    GameTick_t m_nNextThinkTick;
    int32_t m_nSimulationTick;
    CEntityIOOutput m_OnKilled;
    uint32_t m_fFlags;
    // Vector m_vecAbsVelocity;
    CNetworkVelocityVector m_vecVelocity;
    // Vector m_vecBaseVelocity;
    char pad_011[20];
    int32_t m_nPushEnumCount;
    CCollisionProperty* m_pCollision;
    // CHandle< CBaseEntity > m_hEffectEntity;
    // CHandle< CBaseEntity > m_hOwnerEntity;
    char pad_012[8];
    uint32_t m_fEffects;
    // CHandle< CBaseEntity > m_hGroundEntity;
    char pad_013[4];
    int32_t m_nGroundBodyIndex;
    float m_flFriction;
    float m_flElasticity;
    float m_flGravityScale;
    float m_flTimeScale;
    float m_flWaterLevel;
    bool m_bGravityDisabled;
    bool m_bAnimatedEveryTick;
    float m_flActualGravityScale;
    bool m_bGravityActuallyDisabled;
    bool m_bDisableLowViolence;
    uint8_t m_nWaterType;
    int32_t m_iEFlags;
    CEntityIOOutput m_OnUser1;
    CEntityIOOutput m_OnUser2;
    CEntityIOOutput m_OnUser3;
    CEntityIOOutput m_OnUser4;
    int32_t m_iInitialTeamNum;
    GameTime_t m_flNavIgnoreUntilTime;
    // QAngle m_vecAngVelocity;
    char pad_014[12];
    bool m_bNetworkQuantizeOriginAndAngles;
    bool m_bLagCompensate;
    // CHandle< CBaseEntity > m_pBlocker;
    char pad_015[4];
    float m_flLocalTime;
    float m_flVPhysicsUpdateLocalTime;
    BloodType m_nBloodType;
    CPulseGraphInstance_ServerEntity* m_pPulseGraphInstance;
};

class ParticleIndex_t {
public:
    int32_t m_Value;
};

class CountdownTimer {
public:
    char pad_00[8];
    float m_duration;
    GameTime_t m_timestamp;
    float m_timescale;
    // WorldGroupId_t m_nWorldGroupId;
    char pad_01[4];
};

class CSkillFloat {
public:
    float m_pValue[4];
};

class CSkillInt {
public:
    int32_t m_pValue[4];
};

class CRangeInt {
public:
    int32_t m_pValue[2];
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

class NavGravity_t {
public:
    // Vector m_vGravity;
    char pad_00[12];
    bool m_bDefault;
    char pad_01[3];
};

class Extent {
public:
    // VectorWS lo;
    // VectorWS hi;
    char pad_00[24];
};

class CNavVolume {
public:
    char pad_00[120];
};

class CNavVolumeVector {
public:
    char pad_00[128];
    bool m_bHasBeenPreFiltered;
    char pad_01[31];
};

class CNavVolumeAll {
public:
    char pad_00[160];
};

class CNavVolumeSphere {
public:
    // Vector m_vCenter;
    char pad_00[132];
    float m_flRadius;
};

class CNavVolumeSphericalShell {
public:
    char pad_00[136];
    float m_flRadiusInner;
    char pad_01[4];
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

class CNavHullPresetVData {
public:
    // CUtlVector< CUtlString > m_vecNavHulls;
    char pad_00[24];
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

class CGameSceneNode {
public:
    // CTransformWS m_nodeToWorld;
    char pad_00[48];
    CEntityInstance* m_pOwner;
    CGameSceneNode* m_pParent;
    CGameSceneNode* m_pChild;
    CGameSceneNode* m_pNextSibling;
    // CGameSceneNodeHandle m_hParent;
    CNetworkOriginCellCoordQuantizedVector m_vecOrigin;
    // QAngle m_angRotation;
    char pad_01[20];
    float m_flScale;
    // VectorWS m_vecAbsOrigin;
    // QAngle m_angAbsRotation;
    char pad_02[24];
    float m_flAbsScale;
    int16_t m_nParentAttachmentOrBone;
    bool m_bDebugAbsOriginChanges;
    bool m_bDormant;
    bool m_bForceParentToBeNetworked;
    // bitfield:1 m_bDirtyHierarchy;
    // bitfield:1 m_bDirtyBoneMergeInfo;
    // bitfield:1 m_bNetworkedPositionChanged;
    // bitfield:1 m_bNetworkedAnglesChanged;
    // bitfield:1 m_bNetworkedScaleChanged;
    // bitfield:1 m_bWillBeCallingPostDataUpdate;
    // bitfield:1 m_bBoneMergeFlex;
    // bitfield:2 m_nLatchAbsOrigin;
    // bitfield:1 m_bDirtyBoneMergeBoneToRoot;
    char pad_03[2];
    uint8_t m_nHierarchicalDepth;
    uint8_t m_nHierarchyType;
    uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount;
    // CUtlStringToken m_name;
    // CUtlStringToken m_hierarchyAttachName;
    char pad_04[24];
    float m_flZOffset;
    float m_flClientLocalScale;
    // Vector m_vRenderOrigin;
    char pad_05[24];
};

class CBodyComponent : public CEntityComponent {
public:
    CGameSceneNode* m_pSceneNode;
    CNetworkVarChainer __m_pChainEntity;
    char pad_01[8];
};

class CBodyComponentPoint : public CBodyComponent {
public:
    CGameSceneNode m_sceneNode;
};

class CSkeletonInstance : public CGameSceneNode {
public:
    // CModelState m_modelState;
    char pad_06[608];
    bool m_bIsAnimationEnabled;
    bool m_bUseParentRenderBounds;
    bool m_bDisableSolidCollisionsForHierarchy;
    // bitfield:1 m_bDirtyMotionType;
    // bitfield:1 m_bIsGeneratingLatchedParentSpaceState;
    // CUtlStringToken m_materialGroup;
    char pad_07[5];
    uint8_t m_nHitboxSet;
    char pad_08[91];
    bool m_bForceServerConstraintsEnabled;
    char pad_09[59];
};

class CBodyComponentSkeletonInstance : public CBodyComponent {
public:
    CSkeletonInstance m_skeletonInstance;
};

class CHitboxComponent : public CEntityComponent {
public:
    char pad_01[12];
    float m_flBoundsExpandRadius;
};

class CLightComponent : public CEntityComponent {
public:
    CNetworkVarChainer __m_pChainEntity;
    // Color m_Color;
    // Color m_SecondaryColor;
    char pad_01[32];
    float m_flBrightness;
    float m_flBrightnessScale;
    float m_flBrightnessMult;
    float m_flRange;
    float m_flFalloff;
    float m_flAttenuation0;
    float m_flAttenuation1;
    float m_flAttenuation2;
    float m_flTheta;
    float m_flPhi;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie;
    char pad_02[8];
    int32_t m_nCascades;
    int32_t m_nCastShadows;
    int32_t m_nShadowWidth;
    int32_t m_nShadowHeight;
    bool m_bRenderDiffuse;
    int32_t m_nRenderSpecular;
    bool m_bRenderTransmissive;
    float m_flOrthoLightWidth;
    float m_flOrthoLightHeight;
    int32_t m_nStyle;
    // CUtlString m_Pattern;
    char pad_03[8];
    int32_t m_nCascadeRenderStaticObjects;
    float m_flShadowCascadeCrossFade;
    float m_flShadowCascadeDistanceFade;
    float m_flShadowCascadeDistance0;
    float m_flShadowCascadeDistance1;
    float m_flShadowCascadeDistance2;
    float m_flShadowCascadeDistance3;
    int32_t m_nShadowCascadeResolution0;
    int32_t m_nShadowCascadeResolution1;
    int32_t m_nShadowCascadeResolution2;
    int32_t m_nShadowCascadeResolution3;
    bool m_bUsesBakedShadowing;
    int32_t m_nShadowPriority;
    int32_t m_nBakedShadowIndex;
    int32_t m_nLightPathUniqueId;
    int32_t m_nLightMapUniqueId;
    bool m_bRenderToCubemaps;
    bool m_bAllowSSTGeneration;
    int32_t m_nDirectLight;
    int32_t m_nIndirectLight;
    bool m_bDynamicBounce;
    float m_flFadeMinDist;
    float m_flFadeMaxDist;
    float m_flShadowFadeMinDist;
    float m_flShadowFadeMaxDist;
    bool m_bEnabled;
    bool m_bFlicker;
    bool m_bPrecomputedFieldsValid;
    // Vector m_vPrecomputedBoundsMins;
    // Vector m_vPrecomputedBoundsMaxs;
    // Vector m_vPrecomputedOBBOrigin;
    // QAngle m_vPrecomputedOBBAngles;
    // Vector m_vPrecomputedOBBExtent;
    char pad_04[60];
    float m_flPrecomputedMaxRange;
    int32_t m_nFogLightingMode;
    float m_flFogContributionStength;
    float m_flNearClipPlane;
    // Color m_SkyColor;
    char pad_05[4];
    float m_flSkyIntensity;
    // Color m_SkyAmbientBounce;
    char pad_06[4];
    bool m_bUseSecondaryColor;
    bool m_bMixedShadows;
    GameTime_t m_flLightStyleStartTime;
    float m_flCapsuleLength;
    float m_flMinRoughness;
    char pad_07[12];
    bool m_bPvsModifyEntity;
    char pad_08[7];
};

class CNetworkTransmitComponent {
public:
    char pad_00[388];
    uint8_t m_nTransmitStateOwnedCounter;
    char pad_01[75];
};

class CRenderComponent : public CEntityComponent {
public:
    CNetworkVarChainer __m_pChainEntity;
    char pad_01[24];
    bool m_bIsRenderingWithViewModels;
    uint32_t m_nSplitscreenFlags;
    bool m_bEnableRendering;
    char pad_02[79];
    bool m_bInterpolationReadyToDraw;
    char pad_03[7];
};

class CAnimEventListenerBase {
public:
    char pad_00[24];
};

class CAnimEventListener {
public:
    char pad_00[32];
};

class CAnimEventQueueListener {
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

class CPulseCell_LerpCameraSettings {
public:
    char pad_00[144];
    float m_flSeconds;
    PointCameraSettings_t m_Start;
    PointCameraSettings_t m_End;
    char pad_01[4];
};

class CPointCamera : public CBaseEntity {
public:
    float m_FOV;
    float m_Resolution;
    bool m_bFogEnable;
    // Color m_FogColor;
    char pad_016[4];
    float m_flFogStart;
    float m_flFogEnd;
    float m_flFogMaxDensity;
    bool m_bActive;
    bool m_bUseScreenAspectRatio;
    float m_flAspectRatio;
    bool m_bNoSky;
    float m_fBrightness;
    float m_flZFar;
    float m_flZNear;
    bool m_bCanHLTVUse;
    bool m_bAlignWithParent;
    bool m_bDofEnabled;
    float m_flDofNearBlurry;
    float m_flDofNearCrisp;
    float m_flDofFarCrisp;
    float m_flDofFarBlurry;
    float m_flDofTiltToGround;
    float m_TargetFOV;
    float m_DegreesPerSecond;
    bool m_bIsOn;
    CPointCamera* m_pNext;
};

class CPulseCell_LerpCameraSettings::CursorState_t {
public:
    // CHandle< CPointCamera > m_hCamera;
    char pad_00[12];
    PointCameraSettings_t m_OverlaidStart;
    PointCameraSettings_t m_OverlaidEnd;
};

class CPointTemplateAPI {
public:
    char pad_00[8];
};

class CPropDataComponent : public CEntityComponent {
public:
    char pad_01[8];
    float m_flDmgModBullet;
    float m_flDmgModClub;
    float m_flDmgModExplosive;
    float m_flDmgModFire;
    // CUtlSymbolLarge m_iszPhysicsDamageTableName;
    // CUtlSymbolLarge m_iszBasePropData;
    char pad_02[16];
    int32_t m_nInteractions;
    bool m_bSpawnMotionDisabled;
    int32_t m_nDisableTakePhysicsDamageSpawnFlag;
    int32_t m_nMotionDisabledSpawnFlag;
};

class WaterWheelFrictionScale_t {
public:
    float m_flFractionOfWheelSubmerged;
    float m_flFrictionScale;
};

class WaterWheelDrag_t {
public:
    float m_flFractionOfWheelSubmerged;
    float m_flWheelDrag;
};

class CBuoyancyHelper {
public:
    // CUtlStringToken m_nFluidType;
    char pad_00[28];
    float m_flFluidDensity;
    float m_flNeutrallyBuoyantGravity;
    float m_flNeutrallyBuoyantLinearDamping;
    float m_flNeutrallyBuoyantAngularDamping;
    bool m_bNeutrallyBuoyant;
    // CUtlVector< float32 > m_vecFractionOfWheelSubmergedForWheelFriction;
    // CUtlVector< float32 > m_vecWheelFrictionScales;
    // CUtlVector< float32 > m_vecFractionOfWheelSubmergedForWheelDrag;
    // CUtlVector< float32 > m_vecWheelDrag;
    char pad_01[235];
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

class CBaseTriggerAPI {
public:
    char pad_00[8];
};

class CWorldCompositionChunkReferenceElement_t {
public:
    // CUtlString m_strMapToLoad;
    // CUtlString m_strLandmarkName;
    char pad_00[16];
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

class CSkillDamage {
public:
    CSkillFloat m_flDamage;
    float m_flNPCDamageScalarVsNPC;
    float m_flPhysicsForceDamage;
};

class CRemapFloat {
public:
    float m_pValue[4];
};

class CScriptUniformRandomStream {
public:
    // HSCRIPT m_hScriptScope;
    char pad_00[156];
    int32_t m_nInitialSeed;
};

class CPulseCell_Step_EntFire {
public:
    // CUtlString m_Input;
    char pad_00[80];
};

class CPulseCell_PlaySequence {
public:
    // CUtlString m_SequenceName;
    char pad_00[80];
    PulseNodeDynamicOutflows_t m_PulseAnimEvents;
    CPulse_ResumePoint m_OnFinished;
    CPulse_ResumePoint m_OnCanceled;
};

class CBaseModelEntity : public CBaseEntity {
public:
    CRenderComponent* m_CRenderComponent;
    CHitboxComponent m_CHitboxComponent;
    HitGroup_t m_nDestructiblePartInitialStateDestructed0;
    HitGroup_t m_nDestructiblePartInitialStateDestructed1;
    HitGroup_t m_nDestructiblePartInitialStateDestructed2;
    HitGroup_t m_nDestructiblePartInitialStateDestructed3;
    HitGroup_t m_nDestructiblePartInitialStateDestructed4;
    int32_t m_nDestructiblePartInitialStateDestructed0_PartIndex;
    int32_t m_nDestructiblePartInitialStateDestructed1_PartIndex;
    int32_t m_nDestructiblePartInitialStateDestructed2_PartIndex;
    int32_t m_nDestructiblePartInitialStateDestructed3_PartIndex;
    int32_t m_nDestructiblePartInitialStateDestructed4_PartIndex;
    CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent;
    GameTime_t m_flDissolveStartTime;
    CEntityIOOutput m_OnIgnite;
    RenderMode_t m_nRenderMode;
    RenderFx_t m_nRenderFX;
    bool m_bAllowFadeInView;
    // Color m_clrRender;
    // CUtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes;
    char pad_016[141];
    bool m_bRenderToCubemaps;
    bool m_bNoInterpolate;
    // CCollisionProperty m_Collision;
    // CGlowProperty m_Glow;
    char pad_017[268];
    float m_flGlowBackfaceMult;
    float m_fadeMinDist;
    float m_fadeMaxDist;
    float m_flFadeScale;
    float m_flShadowStrength;
    uint8_t m_nObjectCulling;
    CNetworkViewOffsetVector m_vecViewOffset;
    char pad_018[8];
    uint32_t m_bvDisabledHitGroups[1];
    char pad_019[4];
};

class CBaseAnimGraph : public CBaseModelEntity {
public:
    CAnimGraphControllerManager m_graphControllerManager;
    CAnimGraphControllerBase* m_pMainGraphController;
    bool m_bInitiallyPopulateInterpHistory;
    IChoreoServices* m_pChoreoServices;
    bool m_bAnimGraphUpdateEnabled;
    float m_flMaxSlopeDistance;
    // VectorWS m_vLastSlopeCheckPos;
    char pad_020[12];
    uint32_t m_nAnimGraphUpdateId;
    bool m_bAnimationUpdateScheduled;
    // Vector m_vecForce;
    char pad_021[12];
    int32_t m_nForceBone;
    // PhysicsRagdollPose_t m_RagdollPose;
    char pad_022[60];
    bool m_bRagdollEnabled;
    bool m_bRagdollClientSide;
    // CTransform m_xParentedRagdollRootInEntitySpace;
    char pad_023[446];
};

class CPulseCell_PlaySequence::CursorState_t {
public:
    // CHandle< CBaseAnimGraph > m_hTarget;
    char pad_00[4];
};

class CPulseAnimFuncs {
public:
    char pad_00[8];
};

class CBaseAnimGraphVariationUserData {
public:
    char pad_00[8];
};

class CBasePlayerControllerAPI {
public:
    char pad_00[8];
};

class ViewAngleServerChange_t {
public:
    char pad_00[48];
    FixAngleSet_t nType;
    // QAngle qAngle;
    char pad_01[12];
    uint32_t nIndex;
    char pad_02[4];
};

class CBreakableStageHelper {
public:
    char pad_00[8];
    int32_t m_nCurrentStage;
    int32_t m_nStageCount;
    char pad_01[8];
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

class CDecalGroupVData {
public:
    // CUtlVector< DecalGroupOption_t > m_vecOptions;
    char pad_00[24];
    float m_flTotalProbability;
    char pad_01[4];
};

class CFilterMultipleAPI {
public:
    char pad_00[8];
};

class CPlayerPawnComponent {
public:
    char pad_00[8];
    CNetworkVarChainer __m_pChainEntity;
    char pad_01[24];
};

class CPlayerControllerComponent {
public:
    char pad_00[8];
    CNetworkVarChainer __m_pChainEntity;
    char pad_01[16];
};

class CPlayer_AutoaimServices : public CPlayerPawnComponent {
public:
    char pad_02[72];
};

class audioparams_t {
public:
    // Vector[8] localSound;
    char pad_00[104];
    int32_t soundscapeIndex;
    uint8_t localBits;
    int32_t soundscapeEntityListIndex;
    uint32_t soundEventHash;
};

class fogplayerparams_t {
public:
    // CHandle< CFogController > m_hCtrl;
    char pad_00[12];
    float m_flTransitionTime;
    // Color m_OldColor;
    char pad_01[4];
    float m_flOldStart;
    float m_flOldEnd;
    float m_flOldMaxDensity;
    float m_flOldHDRColorScale;
    float m_flOldFarZ;
    // Color m_NewColor;
    char pad_02[4];
    float m_flNewStart;
    float m_flNewEnd;
    float m_flNewMaxDensity;
    float m_flNewHDRColorScale;
    float m_flNewFarZ;
};

class CColorCorrection : public CBaseEntity {
public:
    float m_flFadeInDuration;
    float m_flFadeOutDuration;
    float m_flStartFadeInWeight;
    float m_flStartFadeOutWeight;
    GameTime_t m_flTimeStartFadeIn;
    GameTime_t m_flTimeStartFadeOut;
    float m_flMaxWeight;
    bool m_bStartDisabled;
    bool m_bEnabled;
    bool m_bMaster;
    bool m_bClientSide;
    bool m_bExclusive;
    float m_MinFalloff;
    float m_MaxFalloff;
    float m_flCurWeight;
    char m_netlookupFilename[512];
    // CUtlSymbolLarge m_lookupFilename;
    char pad_016[8];
};

class CTonemapController2 : public CBaseEntity {
public:
    float m_flAutoExposureMin;
    float m_flAutoExposureMax;
    float m_flExposureAdaptationSpeedUp;
    float m_flExposureAdaptationSpeedDown;
    float m_flTonemapEVSmoothingRange;
    char pad_016[4];
};

class CBaseToggle : public CBaseModelEntity {
public:
    TOGGLE_STATE m_toggle_state;
    float m_flMoveDistance;
    float m_flWait;
    float m_flLip;
    bool m_bAlwaysFireBlockedOutputs;
    // Vector m_vecPosition1;
    // Vector m_vecPosition2;
    // QAngle m_vecMoveAng;
    // QAngle m_vecAngle1;
    // QAngle m_vecAngle2;
    char pad_020[60];
    float m_flHeight;
    // CHandle< CBaseEntity > m_hActivator;
    // Vector m_vecFinalDest;
    // QAngle m_vecFinalAngle;
    char pad_021[28];
    int32_t m_movementType;
    // CUtlSymbolLarge m_sMaster;
    char pad_022[12];
};

class CBaseTrigger : public CBaseToggle {
public:
    CEntityIOOutput m_OnStartTouch;
    CEntityIOOutput m_OnStartTouchAll;
    CEntityIOOutput m_OnEndTouch;
    CEntityIOOutput m_OnEndTouchAll;
    CEntityIOOutput m_OnTouching;
    CEntityIOOutput m_OnTouchingEachEntity;
    CEntityIOOutput m_OnNotTouching;
    // CUtlVector< CHandle< CBaseEntity > > m_hTouchingEntities;
    // CUtlSymbolLarge m_iFilterName;
    // CHandle< CBaseFilter > m_hFilter;
    char pad_023[36];
    bool m_bDisabled;
    char pad_024[11];
    bool m_bUseAsyncQueries;
    char pad_025[7];
};

class CPostProcessingVolume : public CBaseTrigger {
public:
    // CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings;
    char pad_026[24];
    float m_flFadeDuration;
    float m_flMinLogExposure;
    float m_flMaxLogExposure;
    float m_flMinExposure;
    float m_flMaxExposure;
    float m_flExposureCompensation;
    float m_flExposureFadeSpeedUp;
    float m_flExposureFadeSpeedDown;
    float m_flTonemapEVSmoothingRange;
    bool m_bMaster;
    bool m_bExposureControl;
    char pad_027[2];
};

class CEnvSoundscape : public CBaseEntity {
public:
    CEntityIOOutput m_OnPlay;
    float m_flRadius;
    // CUtlSymbolLarge m_soundEventName;
    char pad_016[12];
    bool m_bOverrideWithEvent;
    int32_t m_soundscapeIndex;
    int32_t m_soundscapeEntityListId;
    // CUtlSymbolLarge[8] m_positionNames;
    // CHandle< CEnvSoundscape > m_hProxySoundscape;
    char pad_017[72];
    bool m_bDisabled;
    // CUtlSymbolLarge m_soundscapeName;
    char pad_018[8];
    uint32_t m_soundEventHash;
    char pad_019[4];
};

class CEnvSoundscapeTriggerable : public CEnvSoundscape {
public:
    char pad_020[1336];
};

class CPlayer_CameraServices : public CPlayerPawnComponent {
public:
    // QAngle m_vecCsViewPunchAngle;
    GameTick_t m_nCsViewPunchAngleTick;
    float m_flCsViewPunchAngleTickRatio;
    fogplayerparams_t m_PlayerFog;
    // CHandle< CColorCorrection > m_hColorCorrectionCtrl;
    // CHandle< CBaseEntity > m_hViewEntity;
    // CHandle< CTonemapController2 > m_hTonemapController;
    audioparams_t m_audio;
    // CNetworkUtlVectorBase< CHandle< CPostProcessingVolume > > m_PostProcessingVolumes;
    char pad_02[24];
    float m_flOldPlayerZ;
    float m_flOldPlayerViewOffsetZ;
    // CUtlVector< CHandle< CEnvSoundscapeTriggerable > > m_hTriggerSoundscapeList;
    char pad_03[48];
};

class CPlayer_FlashlightServices : public CPlayerPawnComponent {
public:
    char pad_02[72];
};

class CPlayer_ItemServices : public CPlayerPawnComponent {
public:
    char pad_02[72];
};

class CInButtonState {
public:
    char pad_00[8];
    uint64_t m_pButtonStates[3];
};

class CPlayer_MovementServices : public CPlayerPawnComponent {
public:
    int32_t m_nImpulse;
    CInButtonState m_nButtons;
    uint64_t m_nQueuedButtonDownMask;
    uint64_t m_nQueuedButtonChangeMask;
    uint64_t m_nButtonDoublePressed;
    uint32_t m_pButtonPressedCmdNumber[64];
    uint32_t m_nLastCommandNumberProcessed;
    uint64_t m_nToggleButtonDownMask;
    char pad_02[8];
    float m_flMaxspeed;
    float m_arrForceSubtickMoveWhen[4];
    float m_flForwardMove;
    float m_flLeftMove;
    float m_flUpMove;
    // Vector m_vecLastMovementImpulses;
    // QAngle m_vecOldViewAngles;
    char pad_03[128];
};

class CPlayer_MovementServices_Humanoid : public CPlayer_MovementServices {
public:
    float m_flStepSoundTime;
    float m_flFallVelocity;
    // Vector m_groundNormal;
    char pad_04[12];
    float m_flSurfaceFriction;
    // CUtlStringToken m_surfaceProps;
    char pad_05[16];
    int32_t m_nStepside;
    // Vector m_vecSmoothedVelocity;
    char pad_06[12];
};

class CPlayer_ObserverServices : public CPlayerPawnComponent {
public:
    uint8_t m_iObserverMode;
    // CHandle< CBaseEntity > m_hObserverTarget;
    char pad_02[4];
    ObserverMode_t m_iObserverLastMode;
    bool m_bForcedObserverMode;
    char pad_03[3];
};

class CPlayer_UseServices : public CPlayerPawnComponent {
public:
    char pad_02[72];
};

class CPlayer_WaterServices : public CPlayerPawnComponent {
public:
    char pad_02[72];
};

class CBaseFlex : public CBaseAnimGraph {
public:
    // CNetworkUtlVectorBase< float32 > m_flexWeight;
    // VectorWS m_vLookTargetPosition;
    GameTime_t m_flAllowResponsesEndTime;
    GameTime_t m_flLastFlexAnimationTime;
    SceneEventId_t m_nNextSceneEventId;
    bool m_bUpdateLayerPriorities;
    char pad_024[11];
};

class CEconEntity : public CBaseFlex {
public:
    // CAttributeContainer m_AttributeManager;
    char pad_025[776];
    uint32_t m_OriginalOwnerXuidLow;
    uint32_t m_OriginalOwnerXuidHigh;
    int32_t m_nFallbackPaintKit;
    int32_t m_nFallbackSeed;
    float m_flFallbackWear;
    int32_t m_nFallbackStatTrak;
    // CHandle< CBaseEntity > m_hOldProvidee;
    char pad_026[4];
    int32_t m_iOldOwnerClass;
    char pad_027[8];
};

class CBasePlayerWeapon : public CEconEntity {
public:
    GameTick_t m_nNextPrimaryAttackTick;
    float m_flNextPrimaryAttackTickRatio;
    GameTick_t m_nNextSecondaryAttackTick;
    float m_flNextSecondaryAttackTickRatio;
    int32_t m_iClip1;
    int32_t m_iClip2;
    int32_t m_pReserveAmmo[2];
    CEntityIOOutput m_OnPlayerUse;
    char pad_028[8];
};

class CPlayer_WeaponServices : public CPlayerPawnComponent {
public:
    // CNetworkUtlVectorBase< CHandle< CBasePlayerWeapon > > m_hMyWeapons;
    // CHandle< CBasePlayerWeapon > m_hActiveWeapon;
    // CHandle< CBasePlayerWeapon > m_hLastWeapon;
    char pad_02[32];
    uint16_t m_iAmmo[32];
    bool m_bPreventWeaponPickup;
    char pad_03[7];
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

class CAnimGraphControllerBase {
public:
    char pad_00[24];
    ExternalAnimGraphHandle_t m_hExternalGraph;
    char pad_01[116];
};

class ExternalAnimGraphHandle_t {
public:
    uint32_t m_Value;
};

class CEmptyGraphController {
public:
    char pad_00[144];
};

class CAnimGraphControllerManager {
public:
    // CUtlVector< CAnimGraphControllerBase* > m_controllers;
    char pad_00[168];
    bool m_bGraphBindingsCreated;
    char pad_01[7];
};

class ExternalAnimGraph_t {
public:
    ExternalAnimGraphHandle_t m_hExtGraphHandle;
    // CGlobalSymbol m_sExternalGraphSlotID;
    // CStrongHandleCopyable< InfoForResourceTypeCNmGraphDefinition > m_hGraphDefinition;
    // CHandle< CBaseAnimGraph > m_hExternalGraphOwner;
    char pad_00[44];
    ExternalAnimGraphInactiveBehavior_t m_nInactiveBehavior;
    char pad_01[7];
};

class ISkeletonAnimationController {
public:
    char pad_00[8];
};

class CSkeletonAnimationController : public ISkeletonAnimationController {
public:
    CSkeletonInstance* m_pSkeletonInstance;
};

class CBaseAnimGraphController : public CSkeletonAnimationController {
public:
    char pad_01[8];
    AnimationAlgorithm_t m_nAnimationAlgorithm;
    // CAnimGraphNetworkedVariables m_animGraphNetworkedVars;
    // CSmartPtr< IAnimationGraphInstance > m_pAnimGraphInstance;
    char pad_02[393];
    ExternalAnimGraphHandle_t m_nNextExternalGraphHandle;
    // CUtlVector< CGlobalSymbol > m_vecSecondarySkeletonNames;
    // CNetworkUtlVectorBase< CHandle< CBaseAnimGraph > > m_vecSecondarySkeletons;
    char pad_03[52];
    int32_t m_nSecondarySkeletonMasterCount;
    float m_flSoundSyncTime;
    uint32_t m_nActiveIKChainMask;
    HSequence m_hSequence;
    GameTime_t m_flSeqStartTime;
    float m_flSeqFixedCycle;
    AnimLoopMode_t m_nAnimLoopMode;
    // CNetworkedQuantizedFloat m_flPlaybackRate;
    char pad_04[12];
    SequenceFinishNotifyState_t m_nNotifyState;
    bool m_bNetworkedAnimationInputsChanged;
    bool m_bNetworkedSequenceChanged;
    bool m_bLastUpdateSkipped;
    bool m_bSequenceFinished;
    GameTick_t m_nPrevAnimUpdateTick;
    // CStrongHandle< InfoForResourceTypeCNmGraphDefinition > m_hGraphDefinitionAG2;
    // CNetworkUtlVectorBase< uint8 > m_serializedPoseRecipeAG2;
    char pad_05[700];
    int32_t m_nSerializePoseRecipeSizeAG2;
    int32_t m_nSerializePoseRecipeVersionAG2;
    int32_t m_nServerGraphInstanceIteration;
    int32_t m_nServerSerializationContextIteration;
    ResourceId_t m_primaryGraphId;
    // CNetworkUtlVectorBase< ResourceId_t > m_vecExternalGraphIds;
    // CNetworkUtlVectorBase< ResourceId_t > m_vecExternalClipIds;
    // CGlobalSymbol m_sAnimGraph2Identifier;
    // CUtlVector< ExternalAnimGraph_t > m_vecExternalGraphs;
    char pad_06[656];
};

class CBodyComponentBaseAnimGraph : public CBodyComponentSkeletonInstance {
public:
    CBaseAnimGraphController m_animationController;
    char pad_02[8];
};

class EntityRenderAttribute_t {
public:
    // CUtlStringToken m_ID;
    // Vector4D m_Values;
    char pad_00[72];
};

class ModelConfigHandle_t {
public:
    uint32_t m_Value;
};

class ActiveModelConfig_t {
public:
    char pad_00[48];
    ModelConfigHandle_t m_Handle;
    // CUtlSymbolLarge m_Name;
    // CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_AssociatedEntities;
    // CNetworkUtlVectorBase< CUtlSymbolLarge > m_AssociatedEntityNames;
    char pad_01[60];
};

class CBodyComponentBaseModelEntity : public CBodyComponentSkeletonInstance {
public:
    char pad_02[1200];
};

class CPhysicsBodyGameMarkup {
public:
    // CUtlString m_TargetBody;
    // CGlobalSymbol m_Tag;
    char pad_00[16];
};

class CPhysicsBodyGameMarkupData {
public:
    // CUtlOrderedMap< CUtlString, CPhysicsBodyGameMarkup > m_PhysicsBodyMarkupByBoneName;
    char pad_00[40];
};

class CBaseModelEntityAPI {
public:
    char pad_00[8];
};

class CBaseAnimGraphDestructibleParts_GraphController {
public:
    char pad_00[144];
};

class CDestructiblePart_DamageLevel {
public:
    // CUtlString m_sName;
    // CGlobalSymbol m_sBreakablePieceName;
    char pad_00[16];
    int32_t m_nBodyGroupValue;
    CSkillInt m_nHealth;
    float m_flCriticalDamagePercent;
    EDestructiblePartDamagePassThroughType m_nDamagePassthroughType;
    DestructiblePartDestructionDeathBehavior_t m_nDestructionDeathBehavior;
    // CGlobalSymbol m_sCustomDeathHandshake;
    char pad_01[8];
    bool m_bShouldDestroyOnDeath;
    CRangeFloat m_flDeathDestroyTime;
    char pad_02[4];
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

class CDestructiblePartsSystemData {
public:
    // CUtlOrderedMap< HitGroup_t, CDestructiblePart > m_PartsDataByHitGroup;
    char pad_00[40];
    CRangeInt m_nMinMaxNumberHitGroupsToDestroyWhenGibbing;
};

class CDestructiblePartsComponent {
public:
    CNetworkVarChainer __m_pChainEntity;
    // CUtlVector< uint16 > m_vecDamageTakenByHitGroup;
    // CHandle< CBaseModelEntity > m_hOwner;
    char pad_00[72];
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

class CNetworkOriginQuantizedVector {
public:
    // CNetworkedQuantizedFloat m_vecX;
    // CNetworkedQuantizedFloat m_vecY;
    // CNetworkedQuantizedFloat m_vecZ;
    char pad_00[40];
};

class CNetworkVelocityVector {
public:
    // CNetworkedQuantizedFloat m_vecX;
    // CNetworkedQuantizedFloat m_vecY;
    // CNetworkedQuantizedFloat m_vecZ;
    char pad_00[40];
};

class CNetworkViewOffsetVector {
public:
    // CNetworkedQuantizedFloat m_vecX;
    // CNetworkedQuantizedFloat m_vecY;
    // CNetworkedQuantizedFloat m_vecZ;
    char pad_00[40];
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

class CPulseFuncs_GameParticleManager {
public:
    char pad_00[1];
};

class CRopeOverlapHit {
public:
    // CHandle< CBaseEntity > m_hEntity;
    // CUtlVector< int32 > m_vecOverlappingLinks;
    char pad_00[32];
};

class CGameSceneNodeHandle {
public:
    // CEntityHandle m_hOwner;
    // CUtlStringToken m_name;
    char pad_00[16];
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

class IChoreoServices {
public:
    char pad_00[8];
};

class CLogicRelayAPI {
public:
    char pad_00[8];
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

class CPathQueryComponent : public CEntityComponent {
public:
    char pad_01[160];
};

class CPathSimpleAPI {
public:
    char pad_00[8];
};

class SequenceHistory_t {
public:
    HSequence m_hSequence;
    GameTime_t m_flSeqStartTime;
    float m_flSeqFixedCycle;
    AnimLoopMode_t m_nSeqLoopMode;
    float m_flPlaybackRate;
    float m_flCyclesPerSecond;
};

class CNetworkedSequenceOperation {
public:
    char pad_00[8];
    HSequence m_hSequence;
    float m_flPrevCycle;
    float m_flCycle;
    // CNetworkedQuantizedFloat m_flWeight;
    char pad_01[8];
    bool m_bSequenceChangeNetworked;
    bool m_bDiscontinuity;
    float m_flPrevCycleFromDiscontinuity;
    float m_flPrevCycleForAnimEventDetection;
};

class CModelState {
public:
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    // CUtlSymbolLarge m_ModelName;
    char pad_00[245];
    bool m_bClientClothCreationSuppressed;
    char pad_01[168];
    uint64_t m_MeshGroupMask;
    // CNetworkUtlVectorBase< int32 > m_nBodyGroupChoices;
    char pad_02[146];
    int8_t m_nIdealMotionType;
    int8_t m_nForceLOD;
    int8_t m_nClothUpdateFlags;
    char pad_03[19];
};

class CFloatExponentialMovingAverage {
public:
    char pad_00[20];
};

class CVectorExponentialMovingAverage {
public:
    char pad_00[44];
};

class CFloatMovingAverage {
public:
    char pad_00[32];
};

class CVectorMovingAverage {
public:
    char pad_00[32];
};

class IntervalTimer {
public:
    char pad_00[8];
    GameTime_t m_timestamp;
    // WorldGroupId_t m_nWorldGroupId;
    char pad_01[4];
};

class EngineCountdownTimer {
public:
    char pad_00[8];
    float m_duration;
    float m_timestamp;
    float m_timescale;
    char pad_01[4];
};

class CTimeline : public IntervalTimer {
public:
    float m_flValues[64];
    int32_t m_nValueCounts[64];
    int32_t m_nBucketCount;
    float m_flInterval;
    float m_flFinalValue;
    TimelineCompression_t m_nCompressionType;
    bool m_bStopped;
    char pad_02[7];
};

class CNmEventConsumer {
public:
    char pad_00[16];
};

class CNmEventConsumerLegacy {
public:
    char pad_00[32];
};

class CNmEventConsumerAttributes {
public:
    char pad_00[80];
};

class CNmEventConsumerParticle {
public:
    char pad_00[48];
};

class CNmEventConsumerSound {
public:
    char pad_00[48];
};

class CAnimGraphNetworkedVariables {
public:
    // CNetworkUtlVectorBase< uint32 > m_PredNetBoolVariables;
    // CNetworkUtlVectorBase< uint8 > m_PredNetByteVariables;
    // CNetworkUtlVectorBase< uint16 > m_PredNetUInt16Variables;
    // CNetworkUtlVectorBase< int32 > m_PredNetIntVariables;
    // CNetworkUtlVectorBase< uint32 > m_PredNetUInt32Variables;
    // CNetworkUtlVectorBase< uint64 > m_PredNetUInt64Variables;
    // CNetworkUtlVectorBase< float32 > m_PredNetFloatVariables;
    // CNetworkUtlVectorBase< Vector > m_PredNetVectorVariables;
    // CNetworkUtlVectorBase< Quaternion > m_PredNetQuaternionVariables;
    // CNetworkUtlVectorBase< CGlobalSymbol > m_PredNetGlobalSymbolVariables;
    // CNetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetBoolVariables;
    // CNetworkUtlVectorBase< uint8 > m_OwnerOnlyPredNetByteVariables;
    // CNetworkUtlVectorBase< uint16 > m_OwnerOnlyPredNetUInt16Variables;
    // CNetworkUtlVectorBase< int32 > m_OwnerOnlyPredNetIntVariables;
    // CNetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetUInt32Variables;
    // CNetworkUtlVectorBase< uint64 > m_OwnerOnlyPredNetUInt64Variables;
    // CNetworkUtlVectorBase< float32 > m_OwnerOnlyPredNetFloatVariables;
    // CNetworkUtlVectorBase< Vector > m_OwnerOnlyPredNetVectorVariables;
    // CNetworkUtlVectorBase< Quaternion > m_OwnerOnlyPredNetQuaternionVariables;
    // CNetworkUtlVectorBase< CGlobalSymbol > m_OwnerOnlyPredNetGlobalSymbolVariables;
    char pad_00[488];
    int32_t m_nBoolVariablesCount;
    int32_t m_nOwnerOnlyBoolVariablesCount;
    int32_t m_nRandomSeedOffset;
    float m_flLastTeleportTime;
    char pad_01[16];
};

class CFootstepTableHandle {
public:
    char pad_00[8];
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

class ResponseParams {
public:
    char pad_00[16];
    int16_t odds;
    int16_t flags;
    ResponseFollowup* m_pFollowup;
};

class CResponseCriteriaSet {
public:
    char pad_00[48];
    int32_t m_nNumPrefixedContexts;
    bool m_bOverrideOnAppend;
    char pad_01[3];
};

class CRR_Response {
public:
    uint8_t m_Type;
    char m_szResponseName[192];
    char m_szMatchingRule[128];
    ResponseParams m_Params;
    float m_fMatchScore;
    bool m_bAnyMatchingRulesInCooldown;
    char* m_szSpeakerContext;
    char* m_szWorldContext;
    ResponseFollowup m_Followup;
    // CUtlSymbol m_recipientFilter;
    char pad_00[7];
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
    char pad_01[24];
    CBaseFlex* m_pOuter;
};

class CResponseQueue {
public:
    // CUtlVector< CAI_Expresser* > m_ExpresserTargets;
    char pad_00[80];
};

class CAI_ExpresserWithFollowup {
public:
    char pad_00[160];
};

class CMultiplayer_Expresser {
public:
    char pad_00[160];
    bool m_bAllowMultipleScenes;
    char pad_01[7];
};

class CBaseEntityAPI {
public:
    char pad_00[8];
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

class CPointCommentaryNode : public CBaseAnimGraph {
public:
    // CUtlSymbolLarge m_iszPreCommands;
    // CUtlSymbolLarge m_iszPostCommands;
    // CUtlSymbolLarge m_iszCommentaryFile;
    // CUtlSymbolLarge m_iszViewTarget;
    // CHandle< CBaseEntity > m_hViewTarget;
    // CHandle< CBaseEntity > m_hViewTargetAngles;
    // CUtlSymbolLarge m_iszViewPosition;
    // CHandle< CBaseEntity > m_hViewPosition;
    // CHandle< CBaseEntity > m_hViewPositionMover;
    char pad_024[56];
    bool m_bPreventMovement;
    bool m_bUnderCrosshair;
    bool m_bUnstoppable;
    GameTime_t m_flFinishedTime;
    // Vector m_vecFinishOrigin;
    // QAngle m_vecOriginalAngles;
    // QAngle m_vecFinishAngles;
    char pad_025[36];
    bool m_bPreventChangesWhileMoving;
    bool m_bDisabled;
    // VectorWS m_vecTeleportOrigin;
    GameTime_t m_flAbortedPlaybackAt;
    CEntityIOOutput m_pOnCommentaryStarted;
    CEntityIOOutput m_pOnCommentaryStopped;
    bool m_bActive;
    GameTime_t m_flStartTime;
    float m_flStartTimeInCommentary;
    // CUtlSymbolLarge m_iszTitle;
    // CUtlSymbolLarge m_iszSpeakers;
    char pad_026[20];
    int32_t m_iNodeNumber;
    int32_t m_iNodeNumberMax;
    bool m_bListenedTo;
    char pad_027[15];
};

class CPhysicsShake {
public:
    // Vector m_force;
    char pad_00[24];
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

class CScriptedSequence : public CBaseEntity {
public:
    // CUtlSymbolLarge m_iszEntry;
    // CUtlSymbolLarge m_iszPreIdle;
    // CUtlSymbolLarge m_iszPlay;
    // CUtlSymbolLarge m_iszPostIdle;
    // CUtlSymbolLarge m_iszModifierToAddOnPlay;
    // CUtlSymbolLarge m_iszNextScript;
    // CUtlSymbolLarge m_iszEntity;
    // CUtlSymbolLarge m_iszSyncGroup;
    char pad_016[64];
    ScriptedMoveTo_t m_nMoveTo;
    SharedMovementGait_t m_nMoveToGait;
    ScriptedHeldWeaponBehavior_t m_nHeldWeaponBehavior;
    ForcedCrouchState_t m_nForcedCrouchState;
    bool m_bIsPlayingPreIdle;
    bool m_bIsPlayingEntry;
    bool m_bIsPlayingAction;
    bool m_bIsPlayingPostIdle;
    bool m_bDontRotateOther;
    bool m_bIsRepeatable;
    bool m_bShouldLeaveCorpse;
    bool m_bStartOnSpawn;
    bool m_bDisallowInterrupts;
    bool m_bCanOverrideNPCState;
    bool m_bDontTeleportAtEnd;
    bool m_bHighPriority;
    bool m_bHideDebugComplaints;
    bool m_bContinueOnDeath;
    bool m_bLoopPreIdleSequence;
    bool m_bLoopActionSequence;
    bool m_bLoopPostIdleSequence;
    bool m_bSynchPostIdles;
    bool m_bIgnoreLookAt;
    bool m_bIgnoreGravity;
    bool m_bDisableNPCCollisions;
    bool m_bKeepAnimgraphLockedPost;
    bool m_bDontAddModifiers;
    bool m_bDisableAimingWhileMoving;
    bool m_bIgnoreRotation;
    float m_flRadius;
    float m_flRepeat;
    float m_flPlayAnimFadeInTime;
    float m_flMoveInterpTime;
    float m_flAngRate;
    float m_flMoveSpeed;
    bool m_bWaitUntilMoveCompletesToStartAnimation;
    int32_t m_nNotReadySequenceCount;
    GameTime_t m_startTime;
    bool m_bWaitForBeginSequence;
    int32_t m_saved_effects;
    int32_t m_savedFlags;
    int32_t m_savedCollisionGroup;
    bool m_bInterruptable;
    bool m_sequenceStarted;
    bool m_bPositionRelativeToOtherEntity;
    // CHandle< CBaseEntity > m_hTargetEnt;
    // CHandle< CScriptedSequence > m_hNextCine;
    char pad_017[9];
    bool m_bThinking;
    bool m_bInitiatedSelfDelete;
    bool m_bIsTeleportingDueToMoveTo;
    bool m_bAllowCustomInterruptConditions;
    // CHandle< CBaseAnimGraph > m_hForcedTarget;
    char pad_018[4];
    bool m_bDontCancelOtherSequences;
    bool m_bForceSynch;
    bool m_bPreventUpdateYawOnFinish;
    bool m_bEnsureOnNavmeshOnFinish;
    ScriptedOnDeath_t m_onDeathBehavior;
    ScriptedConflictResponse_t m_ConflictResponse;
    CEntityIOOutput m_OnBeginSequence;
    CEntityIOOutput m_OnActionStartOrLoop;
    CEntityIOOutput m_OnEndSequence;
    CEntityIOOutput m_OnPostIdleEndSequence;
    CEntityIOOutput m_OnCancelSequence;
    CEntityIOOutput m_OnCancelFailedSequence;
    CEntityIOOutput m_OnScriptEvent;
    // CTransform m_matOtherToMain;
    // CHandle< CBaseEntity > m_hInteractionMainEntity;
    char pad_019[212];
    int32_t m_iPlayerDeathBehavior;
    bool m_bSkipFadeIn;
    char pad_020[7];
};

class CConstantForceController {
public:
    // Vector m_linear;
    // RotationVector m_angular;
    // Vector m_linearSave;
    // RotationVector m_angularSave;
    char pad_00[64];
};

class CPhysMotorAPI {
public:
    char pad_00[8];
};

class CPulsePhysicsConstraintsFuncs {
public:
    char pad_00[1];
};

class CPointTeleportAPI {
public:
    char pad_00[8];
};

class CTakeDamageInfoAPI {
public:
    char pad_00[8];
};

class CPulseServerCursor {
public:
    // CHandle< CBaseEntity > m_hActivator;
    // CHandle< CBaseEntity > m_hCaller;
    char pad_00[224];
};

class CPulseGraphInstance_ServerEntity {
public:
    // CHandle< CBaseEntity > m_hOwner;
    char pad_00[404];
    bool m_bActivated;
    // CUtlSymbolLarge m_sNameFixupStaticPrefix;
    // CUtlSymbolLarge m_sNameFixupParent;
    // CUtlSymbolLarge m_sNameFixupLocal;
    // CUtlSymbolLarge m_sProceduralWorldNameForRelays;
    char pad_01[35];
};

class CPulseCell_Step_FollowEntity {
public:
    // CUtlString m_ParamBoneOrAttachName;
    // CUtlString m_ParamBoneOrAttachNameChild;
    char pad_00[88];
};

class CPulseCell_Step_SetAnimGraphParam {
public:
    // CUtlString m_ParamName;
    char pad_00[80];
};

class CPulseCell_Outflow_ListenForEntityOutput {
public:
    char pad_00[72];
    SignatureOutflow_Resume m_OnFired;
    CPulse_ResumePoint m_OnCanceled;
    // CGlobalSymbol m_strEntityOutput;
    // CUtlString m_strEntityOutputParam;
    char pad_01[16];
    bool m_bListenUntilCanceled;
    char pad_02[7];
};

class CPulseCell_Outflow_ListenForEntityOutput::CursorState_t {
public:
    // CHandle< CBaseEntity > m_entity;
    char pad_00[4];
};

class CPulseServerFuncs {
public:
    char pad_00[1];
};

class CPulseCell_SoundEventStart {
public:
    char pad_00[72];
    SoundEventStartType_t m_Type;
    char pad_01[4];
};

class CPulseServerFuncs_Sounds {
public:
    char pad_00[1];
};

class CPulseCell_Outflow_PlaySceneBase {
public:
    char pad_00[72];
    CPulse_ResumePoint m_OnFinished;
    CPulse_ResumePoint m_OnCanceled;
    // CUtlVector< CPulse_OutflowConnection > m_Triggers;
    char pad_01[24];
};

class CPulseCell_Outflow_PlaySceneBase::CursorState_t {
public:
    // CHandle< CBaseEntity > m_sceneInstance;
    // CHandle< CBaseEntity > m_mainActor;
    char pad_00[8];
};

class CPulseCell_Outflow_PlayVCD {
public:
    // CStrongHandle< InfoForResourceTypeCChoreoSceneResource > m_hChoreoScene;
    char pad_00[248];
    CPulse_OutflowConnection m_OnPaused;
    CPulse_OutflowConnection m_OnResumed;
};

class CPulseCell_Outflow_PlaySequence {
public:
    // CUtlString m_ParamSequenceName;
    char pad_00[248];
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

class CPulseCell_Outflow_ScriptedSequence {
public:
    // CUtlString m_szSyncGroup;
    char pad_00[80];
    int32_t m_nExpectedNumSequencesInSyncGroup;
    bool m_bEnsureOnNavmeshOnFinish;
    bool m_bDontTeleportAtEnd;
    bool m_bDisallowInterrupts;
    PulseScriptedSequenceData_t m_scriptedSequenceDataMain;
    // CUtlVector< PulseScriptedSequenceData_t > m_vecAdditionalActors;
    CPulse_ResumePoint m_OnFinished;
    CPulse_ResumePoint m_OnCanceled;
    // CUtlVector< CPulse_OutflowConnection > m_Triggers;
    char pad_01[24];
};

class CPulseCell_Outflow_ScriptedSequence::CursorState_t {
public:
    // CHandle< CBaseEntity > m_scriptedSequence;
    char pad_00[4];
};

class CPulseCell_Outflow_ListenForAnimgraphTag {
public:
    char pad_00[72];
    CPulse_ResumePoint m_OnStart;
    CPulse_ResumePoint m_OnEnd;
    CPulse_ResumePoint m_OnCanceled;
    // CGlobalSymbol m_TagName;
    char pad_01[8];
};

class CTouchExpansionComponent : public CEntityComponent {
public:
    char pad_01[80];
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

class ResponseContext_t {
public:
    // CUtlSymbolLarge m_iszName;
    // CUtlSymbolLarge m_iszValue;
    char pad_00[16];
    GameTime_t m_fExpirationTime;
    char pad_01[4];
};

class Relationship_t {
public:
    Disposition_t disposition;
    int32_t priority;
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

class CServerOnlyEntity : public CBaseEntity {
public:
    char pad_016[1192];
};

class CLogicalEntity : public CServerOnlyEntity {
public:
    char pad_017[1192];
};

class CBaseFilter : public CLogicalEntity {
public:
    bool m_bNegated;
    CEntityIOOutput m_OnPass;
    CEntityIOOutput m_OnFail;
};

class CCollisionProperty {
public:
    // VPhysicsCollisionAttribute_t m_collisionAttribute;
    // Vector m_vecMins;
    // Vector m_vecMaxs;
    char pad_00[90];
    uint8_t m_usSolidFlags;
    SolidType_t m_nSolidType;
    uint8_t m_triggerBloat;
    SurroundingBoundsType_t m_nSurroundType;
    uint8_t m_CollisionGroup;
    uint8_t m_nEnablePhysics;
    float m_flBoundingRadius;
    // Vector m_vecSpecifiedSurroundingMins;
    // Vector m_vecSpecifiedSurroundingMaxs;
    // Vector m_vecSurroundingMaxs;
    // Vector m_vecSurroundingMins;
    // Vector m_vCapsuleCenter1;
    // Vector m_vCapsuleCenter2;
    char pad_01[72];
    float m_flCapsuleRadius;
};

class CServerOnlyPointEntity : public CServerOnlyEntity {
public:
    char pad_017[1192];
};

class CEntityFlame : public CBaseEntity {
public:
    // CHandle< CBaseEntity > m_hEntAttached;
    char pad_016[4];
    bool m_bCheapEffect;
    float m_flSize;
    bool m_bUseHitboxes;
    int32_t m_iNumHitboxFires;
    float m_flHitboxFireScale;
    GameTime_t m_flLifetime;
    // CHandle< CBaseEntity > m_hAttacker;
    char pad_017[4];
    float m_flDirectDamagePerSecond;
    int32_t m_iCustomDamageType;
    char pad_018[24];
};

class CFish : public CBaseAnimGraph {
public:
    // CHandle< CFishPool > m_pool;
    char pad_024[4];
    uint32_t m_id;
    float m_x;
    float m_y;
    float m_z;
    float m_angle;
    float m_angleChange;
    // Vector m_forward;
    // Vector m_perp;
    // Vector m_poolOrigin;
    char pad_025[36];
    float m_waterLevel;
    float m_speed;
    float m_desiredSpeed;
    float m_calmSpeed;
    float m_panicSpeed;
    float m_avoidRange;
    CountdownTimer m_turnTimer;
    bool m_turnClockwise;
    CountdownTimer m_goTimer;
    CountdownTimer m_moveTimer;
    CountdownTimer m_panicTimer;
    CountdownTimer m_disperseTimer;
    CountdownTimer m_proximityTimer;
    // CUtlVector< CFish* > m_visible;
    char pad_026[32];
};

class CFishPool : public CBaseEntity {
public:
    char pad_016[16];
    int32_t m_fishCount;
    float m_maxRange;
    float m_swimDepth;
    float m_waterLevel;
    bool m_isDormant;
    // CUtlVector< CHandle< CFish > > m_fishes;
    CountdownTimer m_visTimer;
};

class CPathMoverEntitySpawn {
public:
    // CHandle< CFuncMover > hMover;
    // CUtlVector< CHandle< CBaseEntity > > vecOtherEntities;
    char pad_00[32];
};

class CFuncMover : public CBaseModelEntity {
public:
    // CUtlSymbolLarge m_iszPathName;
    // CHandle< CPathMover > m_hPathMover;
    // CHandle< CPathMover > m_hPrevPathMover;
    // CUtlSymbolLarge m_iszPathNodeStart;
    // CUtlSymbolLarge m_iszPathNodeEnd;
    char pad_020[32];
    CFuncMover::Move_t m_eMoveType;
    bool m_bIsReversing;
    float m_flStartSpeed;
    float m_flPathLocation;
    float m_flT;
    int32_t m_nCurrentNodeIndex;
    int32_t m_nPreviousNodeIndex;
    SolidType_t m_eSolidType;
    bool m_bIsMoving;
    float m_flTimeToReachMaxSpeed;
    float m_flDistanceToReachMaxSpeed;
    float m_flTimeToReachZeroSpeed;
    float m_flComputedDistanceToReachMaxSpeed;
    float m_flComputedDistanceToReachZeroSpeed;
    float m_flStartCurveScale;
    float m_flStopCurveScale;
    float m_flDistanceToReachZeroSpeed;
    GameTime_t m_flTimeMovementStart;
    GameTime_t m_flTimeMovementStop;
    // CHandle< CMoverPathNode > m_hStopAtNode;
    char pad_021[4];
    float m_flPathLocationToBeginStop;
    float m_flPathLocationStart;
    float m_flBeginStopT;
    // CUtlSymbolLarge m_iszStartForwardSound;
    // CUtlSymbolLarge m_iszLoopForwardSound;
    // CUtlSymbolLarge m_iszStopForwardSound;
    // CUtlSymbolLarge m_iszStartReverseSound;
    // CUtlSymbolLarge m_iszLoopReverseSound;
    // CUtlSymbolLarge m_iszStopReverseSound;
    // CUtlSymbolLarge m_iszArriveAtDestinationSound;
    CEntityIOOutput m_OnMovementEnd;
    bool m_bStartAtClosestPoint;
    bool m_bStartAtEnd;
    bool m_bStartFollowingClosestMover;
    CFuncMover::OrientationUpdate_t m_eOrientationUpdate;
    GameTime_t m_flTimeStartOrientationChange;
    float m_flTimeToBlendToNewOrientation;
    float m_flDurationBlendToNewOrientationRan;
    int32_t m_nOriginalOrientationIndex;
    bool m_bCreateMovableNavMesh;
    bool m_bAllowMovableNavMeshDockingOnEntireEntity;
    // CEntityOutputTemplate< CUtlString, char* > m_OnNodePassed;
    // CUtlSymbolLarge m_iszOrientationMatchEntityName;
    // CHandle< CBaseEntity > m_hOrientationMatchEntity;
    char pad_022[48];
    float m_flTimeToTraverseToNextNode;
    // Vector m_vLerpToNewPosStartInPathEntitySpace;
    // Vector m_vLerpToNewPosEndInPathEntitySpace;
    char pad_023[24];
    float m_flLerpToPositionT;
    float m_flLerpToPositionDeltaT;
    CEntityIOOutput m_OnLerpToPositionComplete;
    bool m_bIsPaused;
    CFuncMover::TransitionToPathNodeAction_t m_eTransitionedToPathNodeAction;
    int32_t m_nDelayedTeleportToNode;
    bool m_bIsVerboseLogging;
    // CHandle< CBaseEntity > m_hFollowEntity;
    char pad_024[4];
    float m_flFollowDistance;
    float m_flFollowMinimumSpeed;
    float m_flCurFollowEntityT;
    float m_flCurFollowSpeed;
    // CUtlSymbolLarge m_strOrientationFaceEntityName;
    // CHandle< CBaseEntity > m_hOrientationFaceEntity;
    CEntityIOOutput m_OnStart;
    CEntityIOOutput m_OnStartForward;
    CEntityIOOutput m_OnStartReverse;
    CEntityIOOutput m_OnStop;
    CEntityIOOutput m_OnStopped;
    bool m_bNextNodeReturnsCurrent;
    bool m_bStartedMoving;
    char pad_025[28];
    CFuncMover::FollowEntityDirection_t m_eFollowEntityDirection;
    // CHandle< CFuncMover > m_hFollowMover;
    // CUtlSymbolLarge m_iszFollowMoverEntityName;
    char pad_026[12];
    float m_flFollowMoverDistance;
    float m_flFollowMoverCalculatedDistance;
    float m_flFollowMoverSpringStrength;
    bool m_bFollowConstraintsInitialized;
    CFuncMover::FollowConstraint_t m_eFollowConstraint;
    float m_flFollowMoverSpeed;
    float m_flFollowMoverVelocity;
    GameTick_t m_nTickMovementRan;
};

class CPathSimple : public CBaseEntity {
public:
    CPathQueryComponent m_CPathQueryComponent;
    // CUtlString m_pathString;
    char pad_016[88];
    bool m_bClosedLoop;
    char pad_017[7];
};

class CPathWithDynamicNodes : public CPathSimple {
public:
    // CNetworkUtlVectorBase< CHandle< CPathNode > > m_vecPathNodes;
    // CTransform m_xInitialPathWorldToLocal;
    char pad_018[1520];
};

class CPathMover : public CPathWithDynamicNodes {
public:
    // CUtlVector< CHandle< CFuncMover > > m_vecMovers;
    // CHandle< CPathMoverEntitySpawner > m_hMoverSpawner;
    // CUtlSymbolLarge m_iszMoverSpawnerName;
    char pad_019[1568];
};

class CPathMoverEntitySpawner : public CLogicalEntity {
public:
    // CUtlSymbolLarge[4] m_szSpawnTemplates;
    char pad_018[32];
    int32_t m_nSpawnIndex;
    // CHandle< CPathMover > m_hPathMover;
    char pad_019[4];
    float m_flSpawnFrequencySeconds;
    float m_flSpawnFrequencyDistToNearestMover;
    // CUtlHashtable< CHandle< CFuncMover >, CPathMoverEntitySpawn > m_mapSpawnedMoverTemplates;
    char pad_020[32];
    int32_t m_nMaxActive;
    GameTime_t m_flLastSpawnTime;
    bool m_bEnabled;
    char pad_021[7];
};

class CFuncMoverAPI {
public:
    char pad_00[8];
};

class RotatorHistoryEntry_t {
public:
    // Quaternion qInvChange;
    char pad_00[16];
    GameTime_t flTimeRotationStart;
    char pad_01[12];
};

class RotatorQueueEntry_t {
public:
    // Quaternion qTarget;
    char pad_00[16];
    RotatorTargetSpace_t eSpace;
    char pad_01[12];
};

class CInfoData : public CServerOnlyEntity {
public:
    char pad_017[2112];
};

class locksound_t {
public:
    // CUtlSymbolLarge sLockedSound;
    // CUtlSymbolLarge sUnlockedSound;
    char pad_00[24];
    GameTime_t flwaitSound;
    char pad_01[4];
};

class CLogicBranch : public CLogicalEntity {
public:
    bool m_bInValue;
    // CUtlVector< CHandle< CBaseEntity > > m_Listeners;
    CEntityIOOutput m_OnTrue;
    CEntityIOOutput m_OnFalse;
};

class CLogicDistanceCheck : public CLogicalEntity {
public:
    // CUtlSymbolLarge m_iszEntityA;
    // CUtlSymbolLarge m_iszEntityB;
    char pad_018[16];
    float m_flZone1Distance;
    float m_flZone2Distance;
    CEntityIOOutput m_InZone1;
    CEntityIOOutput m_InZone2;
    CEntityIOOutput m_InZone3;
};

class CTestPulseIO : public CLogicalEntity {
public:
    CEntityIOOutput m_OnVariantVoid;
    // CEntityOutputTemplate< bool, bool > m_OnVariantBool;
    // CEntityOutputTemplate< int32, int32 > m_OnVariantInt;
    // CEntityOutputTemplate< float32, float32 > m_OnVariantFloat;
    // CEntityOutputTemplate< CUtlSymbolLarge, CUtlSymbolLarge > m_OnVariantString;
    // CEntityOutputTemplate< Color, Color > m_OnVariantColor;
    // CEntityOutputTemplate< Vector, Vector > m_OnVariantVector;
    char pad_018[200];
    bool m_bAllowEmptyInputs;
    char pad_019[7];
};

class CTestPulseIOAPI {
public:
    char pad_00[8];
};

class CMapSharedEnvironment : public CLogicalEntity {
public:
    // CUtlSymbolLarge m_targetMapName;
    char pad_018[1208];
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

class CMotorController {
public:
    char pad_00[8];
    float m_speed;
    float m_maxTorque;
    // VectorWS m_axis;
    char pad_01[12];
    float m_inertiaFactor;
};

class CPhysMotor : public CLogicalEntity {
public:
    // CUtlSymbolLarge m_nameAttach;
    // CUtlSymbolLarge m_nameAnchor;
    // CHandle< CBaseEntity > m_hAttachedObject;
    // CHandle< CBaseEntity > m_hAnchorObject;
    char pad_018[24];
    float m_spinUp;
    float m_spinDown;
    float m_flMotorFriction;
    float m_additionalAcceleration;
    float m_angularAcceleration;
    float m_flTorqueScale;
    float m_flTargetSpeed;
    float m_flSpeedWhenSpinUpOrSpinDownStarted;
    CMotorController m_motor;
};

class VelocitySampler {
public:
    // Vector m_prevSample;
    char pad_00[12];
    GameTime_t m_fPrevSampleTime;
    float m_fIdealSampleRate;
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

class ConstraintSoundInfo {
public:
    char pad_00[8];
    VelocitySampler m_vSampler;
    SimpleConstraintSoundProfile m_soundProfile;
    // Vector m_forwardAxis;
    // CUtlSymbolLarge m_iszTravelSoundFwd;
    // CUtlSymbolLarge m_iszTravelSoundBack;
    // CUtlSymbolLarge m_iszReversalSoundSmall;
    // CUtlSymbolLarge m_iszReversalSoundMedium;
    // CUtlSymbolLarge m_iszReversalSoundLarge;
    char pad_01[80];
    bool m_bPlayTravelSound;
    bool m_bPlayReversalSound;
    char pad_02[6];
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

class magnetted_objects_t {
public:
    // CHandle< CBaseEntity > hEntity;
    char pad_00[16];
};

class CPointPrefab : public CServerOnlyPointEntity {
public:
    // CUtlSymbolLarge m_targetMapName;
    // CUtlSymbolLarge m_forceWorldGroupID;
    // CUtlSymbolLarge m_associatedRelayTargetName;
    char pad_018[24];
    bool m_fixupNames;
    bool m_bLoadDynamic;
    // CHandle< CPointPrefab > m_associatedRelayEntity;
    char pad_019[78];
};

class CScenePayloadVData {
public:
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCChoreoSceneResource > > m_sSceneFile;
    char pad_00[224];
};

class SceneRequestHandle_t {
public:
    int32_t m_Value;
};

class CSceneRequest {
public:
    // CUtlSymbolLarge m_szPayloadTypeName;
    char pad_00[8];
    SceneRequestHandle_t m_uHandle;
    ESceneRequestState_t m_state;
    char pad_01[16];
};

class CSkyCamera : public CBaseEntity {
public:
    // sky3dparams_t m_skyboxData;
    // CUtlStringToken m_skyboxSlotToken;
    char pad_016[148];
    bool m_bUseAngles;
    CSkyCamera* m_pNext;
};

class CSkyboxReference : public CBaseEntity {
public:
    // WorldGroupId_t m_worldGroupId;
    // CHandle< CSkyCamera > m_hSkyCamera;
    char pad_016[1200];
};

class sky3dparams_t {
public:
    char pad_00[8];
    int16_t scale;
    // Vector origin;
    char pad_01[14];
    bool bClip3DSkyBoxNearToWorldFar;
    float flClip3DSkyBoxNearToWorldFarOffset;
    // fogparams_t fog;
    // WorldGroupId_t m_nWorldGroupID;
    char pad_02[112];
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

class CMovementStatsProperty {
public:
    char pad_00[16];
    int32_t m_nUseCounter;
    CVectorExponentialMovingAverage m_emaMovementDirection;
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

class CNavVolumeMarkupVolume {
public:
    char pad_00[224];
};

class CNavVolumeCalculatedVector {
public:
    char pad_00[160];
};

class CNavVolumeBreadthFirstSearch {
public:
    // Vector m_vStartPos;
    char pad_00[180];
    float m_flSearchDist;
    char pad_01[8];
};

class VPhysicsCollisionAttribute_t {
public:
    char pad_00[8];
    uint64_t m_nInteractsAs;
    uint64_t m_nInteractsWith;
    uint64_t m_nInteractsExclude;
    uint32_t m_nEntityId;
    uint32_t m_nOwnerId;
    uint16_t m_nHierarchyId;
    uint16_t m_nDetailLayerMask;
    uint8_t m_nDetailLayerMaskType;
    uint8_t m_nTargetDetailLayer;
    uint8_t m_nCollisionGroup;
    uint8_t m_nCollisionFunctionMask;
};

class CEffectData {
public:
    // VectorWS m_vOrigin;
    // VectorWS m_vStart;
    // Vector m_vNormal;
    // QAngle m_vAngles;
    // CEntityHandle m_hEntity;
    // CEntityHandle m_hOtherEntity;
    char pad_00[64];
    float m_flScale;
    float m_flMagnitude;
    float m_flRadius;
    // CUtlStringToken m_nSurfaceProp;
    // CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > m_nEffectIndex;
    char pad_01[12];
    uint32_t m_nDamageType;
    uint8_t m_nPenetrate;
    uint16_t m_nMaterial;
    int16_t m_nHitBox;
    uint8_t m_nColor;
    uint8_t m_fFlags;
    AttachmentHandle_t m_nAttachmentIndex;
    // CUtlStringToken m_nAttachmentName;
    char pad_02[6];
    uint16_t m_iEffectName;
    uint8_t m_nExplosionType;
    char pad_03[1];
};

class CEnvDetailController : public CBaseEntity {
public:
    float m_flFadeStartDist;
    float m_flFadeEndDist;
};

class CEnvWindShared {
public:
    char pad_00[8];
    GameTime_t m_flStartTime;
    uint32_t m_iWindSeed;
    uint16_t m_iMinWind;
    uint16_t m_iMaxWind;
    int32_t m_windRadius;
    uint16_t m_iMinGust;
    uint16_t m_iMaxGust;
    float m_flMinGustDelay;
    float m_flMaxGustDelay;
    float m_flGustDuration;
    uint16_t m_iGustDirChange;
    uint16_t m_iInitialWindDir;
    float m_flInitialWindSpeed;
    // Vector m_location;
    CEntityIOOutput m_OnGustStart;
    CEntityIOOutput m_OnGustEnd;
    // CHandle< CBaseEntity > m_hEntOwner;
    char pad_01[192];
};

class CInfoLadderDismount : public CBaseEntity {
public:
    char pad_016[1192];
};

class shard_model_desc_t {
public:
    char pad_00[8];
    int32_t m_nModelID;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterialBase;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterialDamageOverlay;
    char pad_01[20];
    ShardSolid_t m_solid;
    // Vector2D m_vecPanelSize;
    // Vector2D m_vecStressPositionA;
    // Vector2D m_vecStressPositionB;
    // CNetworkUtlVectorBase< Vector2D > m_vecPanelVertices;
    // CNetworkUtlVectorBase< Vector4D > m_vInitialPanelVertices;
    char pad_02[76];
    float m_flGlassHalfThickness;
    bool m_bHasParent;
    bool m_bParentFrozen;
    // CUtlStringToken m_SurfacePropStringToken;
    char pad_03[10];
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

class CBaseProp : public CBaseAnimGraph {
public:
    bool m_bModelOverrodeBlockLOS;
    int32_t m_iShapeType;
    bool m_bConformToCollisionBounds;
    // CTransform m_mPreferredCatchTransform;
    char pad_024[39];
};

class CBreakableProp : public CBaseProp {
public:
    CPropDataComponent m_CPropDataComponent;
    CEntityIOOutput m_OnStartDeath;
    CEntityIOOutput m_OnBreak;
    // CEntityOutputTemplate< float32, float32 > m_OnHealthChanged;
    CEntityIOOutput m_OnTakeDamage;
    float m_impactEnergyScale;
    int32_t m_iMinHealthDmg;
    // QAngle m_preferredCarryAngles;
    char pad_025[12];
    float m_flPressureDelay;
    float m_flDefBurstScale;
    // Vector m_vDefBurstOffset;
    // CHandle< CBaseEntity > m_hBreaker;
    char pad_026[16];
    PerformanceMode_t m_PerformanceMode;
    GameTime_t m_flPreventDamageBeforeTime;
    BreakableContentsType_t m_BreakableContentsType;
    // CUtlString m_strBreakableContentsPropGroupOverride;
    // CUtlString m_strBreakableContentsParticleOverride;
    char pad_027[16];
    bool m_bHasBreakPiecesOrCommands;
    float m_explodeDamage;
    float m_explodeRadius;
    BaseExplosionTypes_t m_nExplosionType;
    float m_explosionDelay;
    // CUtlSymbolLarge m_explosionBuildupSound;
    // CUtlSymbolLarge m_explosionCustomEffect;
    // CUtlSymbolLarge m_explosionCustomSound;
    // CUtlSymbolLarge m_explosionModifier;
    // CHandle< CBasePlayerPawn > m_hPhysicsAttacker;
    GameTime_t m_flLastPhysicsInfluenceTime;
    float m_flDefaultFadeScale;
    // CHandle< CBaseEntity > m_hLastAttacker;
    // CUtlSymbolLarge m_iszPuntSound;
    char pad_028[12];
    bool m_bUsePuntSound;
    bool m_bOriginalBlockLOS;
    char pad_029[6];
};

class CPhysicsProp : public CBreakableProp {
public:
    CEntityIOOutput m_MotionEnabled;
    CEntityIOOutput m_OnAwakened;
    CEntityIOOutput m_OnAwake;
    CEntityIOOutput m_OnAsleep;
    CEntityIOOutput m_OnPlayerUse;
    CEntityIOOutput m_OnOutOfWorld;
    CEntityIOOutput m_OnPlayerPickup;
    bool m_bForceNavIgnore;
    bool m_bNoNavmeshBlocker;
    bool m_bForceNpcExclude;
    float m_massScale;
    float m_buoyancyScale;
    int32_t m_damageType;
    int32_t m_damageToEnableMotion;
    float m_flForceToEnableMotion;
    bool m_bThrownByPlayer;
    bool m_bDroppedByPlayer;
    bool m_bTouchedByPlayer;
    bool m_bFirstCollisionAfterLaunch;
    bool m_bHasBeenAwakened;
    bool m_bIsOverrideProp;
    GameTime_t m_flLastBurn;
    DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior;
    GameTime_t m_fNextCheckDisableMotionContactsTime;
    int32_t m_iInitialGlowState;
    int32_t m_nGlowRange;
    int32_t m_nGlowRangeMin;
    // Color m_glowColor;
    char pad_030[4];
    bool m_bShouldAutoConvertBackFromDebris;
    bool m_bMuteImpactEffects;
    char pad_031[6];
    bool m_bUpdateNavWhenMoving;
    bool m_bForceNavObstacleCut;
    bool m_bAllowObstacleConvexHullMerging;
    bool m_bAcceptDamageFromHeldObjects;
    bool m_bEnableUseOutput;
    CPhysicsProp::CrateType_t m_CrateType;
    // CUtlSymbolLarge[4] m_strItemClass;
    char pad_032[32];
    int32_t m_nItemCount[4];
    bool m_bRemovableForAmmoBalancing;
    bool m_bAwake;
    bool m_bAttachedToReferenceFrame;
    char pad_033[5];
};

class CShatterGlassShardPhysics : public CPhysicsProp {
public:
    bool m_bDebris;
    uint32_t m_hParentShard;
    shard_model_desc_t m_ShardDesc;
    char pad_034[8];
};

class CFuncShatterglass : public CBaseModelEntity {
public:
    // matrix3x4_t m_matPanelTransform;
    // matrix3x4_t m_matPanelTransformWsTemp;
    // CUtlVector< uint32 > m_vecShatterGlassShards;
    // Vector2D m_PanelSize;
    GameTime_t m_flLastShatterSoundEmitTime;
    GameTime_t m_flLastCleanupTime;
    GameTime_t m_flInitAtTime;
    float m_flGlassThickness;
    float m_flSpawnInvulnerability;
    bool m_bBreakSilent;
    bool m_bBreakShardless;
    bool m_bBroken;
    bool m_bGlassNavIgnore;
    bool m_bGlassInFrame;
    bool m_bStartBroken;
    uint8_t m_iInitialDamageType;
    // CUtlSymbolLarge m_szDamagePositioningEntityName01;
    // CUtlSymbolLarge m_szDamagePositioningEntityName02;
    // CUtlSymbolLarge m_szDamagePositioningEntityName03;
    // CUtlSymbolLarge m_szDamagePositioningEntityName04;
    // CUtlVector< Vector > m_vInitialDamagePositions;
    // CUtlVector< Vector > m_vExtraDamagePositions;
    // CUtlVector< Vector4D > m_vInitialPanelVertices;
    char pad_020[64];
    CEntityIOOutput m_OnBroken;
    uint8_t m_iSurfaceType;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterialDamageBase;
    char pad_021[15];
};

class CGameRulesProxy : public CBaseEntity {
public:
    char pad_016[1192];
};

class CGameRules {
public:
    char pad_00[8];
    CNetworkVarChainer __m_pChainEntity;
    char m_szQuestName[128];
    int32_t m_nQuestPhase;
    uint32_t m_nLastMatchTime;
    uint64_t m_nLastMatchTime_MatchID64;
    int32_t m_nTotalPausedTicks;
    int32_t m_nPauseStartTick;
    bool m_bGamePaused;
    char pad_01[7];
};

class CGlowProperty {
public:
    // Vector m_fGlowColor;
    char pad_00[48];
    int32_t m_iGlowType;
    int32_t m_iGlowTeam;
    int32_t m_nGlowRange;
    int32_t m_nGlowRangeMin;
    // Color m_glowColorOverride;
    char pad_01[4];
    bool m_bFlashing;
    float m_flGlowTime;
    float m_flGlowStartTime;
    bool m_bEligibleForScreenHighlight;
    bool m_bGlowing;
    char pad_02[6];
};

class CMultiplayRules {
public:
    char pad_00[208];
};

class WrappedPhysicsJoint_t {
public:
    char pad_00[8];
};

class fogparams_t {
public:
    // Vector dirPrimary;
    // Color colorPrimary;
    // Color colorSecondary;
    // Color colorPrimaryLerpTo;
    // Color colorSecondaryLerpTo;
    char pad_00[36];
    float start;
    float end;
    float farz;
    float maxdensity;
    float exponent;
    float HDRColorScale;
    float skyboxFogFactor;
    float skyboxFogFactorLerpTo;
    float startLerpTo;
    float endLerpTo;
    float maxdensityLerpTo;
    GameTime_t lerptime;
    float duration;
    float blendtobackground;
    float scattering;
    float locallightscale;
    bool enable;
    bool blend;
    bool m_bPadding2;
    bool m_bPadding;
};

class CFogController : public CBaseEntity {
public:
    fogparams_t m_fog;
    bool m_bUseAngles;
    int32_t m_iChangedVariables;
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

class IRagdoll {
public:
    char pad_00[8];
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

class ragdollhierarchyjoint_t {
public:
    int32_t parentIndex;
    int32_t childIndex;
    char pad_00[8];
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

class PhysicsRagdollPose_t {
public:
    // CNetworkUtlVectorBase< CTransform > m_Transforms;
    // CHandle< CBaseEntity > m_hOwner;
    char pad_00[36];
    bool m_bSetFromDebugHistory;
    char pad_01[3];
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
    SceneEventId_t m_nSceneEventId;
    bool m_bClientSide;
    bool m_bStarted;
    char pad_01[2];
};

class SceneEventId_t {
public:
    uint32_t m_Value;
};

class AmmoIndex_t {
public:
    int8_t m_Value;
};

class CEntitySubclassVDataBase {
public:
    char pad_00[40];
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

class CodeGenAABB_t {
public:
    // Vector m_vMinBounds;
    // Vector m_vMaxBounds;
    char pad_00[24];
};

class CSimpleSimTimer {
public:
    GameTime_t m_flNext;
    // WorldGroupId_t m_nWorldGroupId;
    char pad_00[4];
};

class CSimTimer : public CSimpleSimTimer {
public:
    float m_flInterval;
};

class CRandSimTimer : public CSimpleSimTimer {
public:
    float m_flMinInterval;
    float m_flMaxInterval;
};

class CStopwatchBase : public CSimpleSimTimer {
public:
    bool m_fIsRunning;
    char pad_01[3];
};

class CSimpleStopwatch {
public:
    char pad_00[12];
};

class CStopwatch : public CStopwatchBase {
public:
    float m_flInterval;
};

class CRandStopwatch : public CStopwatchBase {
public:
    float m_flMinInterval;
    float m_flMaxInterval;
};

class CSingleplayRules {
public:
    char pad_00[208];
    bool m_bSinglePlayerGameEnding;
    char pad_01[7];
};

class CCopyRecipientFilter {
public:
    char pad_00[8];
    int32_t m_Flags;
    // CUtlVector< CPlayerSlot > m_Recipients;
    // CPlayerSlot m_slotPlayerExcludedDueToPrediction;
    char pad_01[44];
};

class CSoundEnvelope {
public:
    float m_current;
    float m_target;
    float m_rate;
    bool m_forceupdate;
    char pad_00[3];
};

class CSoundPatch {
public:
    char pad_00[8];
    CSoundEnvelope m_pitch;
    CSoundEnvelope m_volume;
    char pad_01[20];
    float m_shutdownTime;
    float m_flLastTime;
    // CUtlSymbolLarge m_iszSoundScriptName;
    // CHandle< CBaseEntity > m_hEnt;
    // CEntityIndex m_soundEntityIndex;
    // Vector m_soundOrigin;
    char pad_02[32];
    int32_t m_isPlaying;
    CCopyRecipientFilter m_Filter;
    float m_flCloseCaptionDuration;
    bool m_bUpdatedSoundOrigin;
    // CUtlSymbolLarge m_iszClassName;
    char pad_03[11];
};

class CSoundOpvarSetPointBase : public CBaseEntity {
public:
    bool m_bDisabled;
    // CEntityHandle m_hSource;
    // CUtlSymbolLarge m_iszSourceEntityName;
    // Vector m_vLastPosition;
    char pad_016[128];
    float m_flRefreshTime;
    // CUtlSymbolLarge m_iszStackName;
    // CUtlSymbolLarge m_iszOperatorName;
    // CUtlSymbolLarge m_iszOpvarName;
    char pad_017[24];
    int32_t m_iOpvarIndex;
    bool m_bUseAutoCompare;
    bool m_bFastRefresh;
    char pad_018[2];
};

class CSoundOpvarSetPointEntity : public CSoundOpvarSetPointBase {
public:
    CEntityIOOutput m_OnEnter;
    CEntityIOOutput m_OnExit;
    bool m_bAutoDisable;
    char pad_019[64];
    float m_flDistanceMin;
    float m_flDistanceMax;
    float m_flDistanceMapMin;
    float m_flDistanceMapMax;
    float m_flOcclusionRadius;
    float m_flOcclusionMin;
    float m_flOcclusionMax;
    float m_flValSetOnDisable;
    bool m_bSetValueOnDisable;
    bool m_bReloading;
    int32_t m_nSimulationMode;
    int32_t m_nVisibilitySamples;
    // Vector m_vDynamicProxyPoint;
    char pad_020[12];
    float m_flDynamicMaximumOcclusion;
    // CEntityHandle m_hDynamicEntity;
    // CUtlSymbolLarge m_iszDynamicEntityName;
    char pad_021[16];
    float m_flPathingDistanceNormFactor;
    // Vector m_vPathingSourcePos;
    // Vector m_vPathingListenerPos;
    // Vector m_vPathingDirection;
    char pad_022[36];
    int32_t m_nPathingSourceIndex;
    char pad_023[4];
};

class CSoundOpvarSetAABBEntity : public CSoundOpvarSetPointEntity {
public:
    // Vector m_vDistanceInnerMins;
    // Vector m_vDistanceInnerMaxs;
    // Vector m_vDistanceOuterMins;
    // Vector m_vDistanceOuterMaxs;
    char pad_024[48];
    int32_t m_nAABBDirection;
    // Vector m_vInnerMins;
    // Vector m_vInnerMaxs;
    // Vector m_vOuterMins;
    // Vector m_vOuterMaxs;
    char pad_025[52];
};

class CSoundOpvarSetOBBEntity : public CSoundOpvarSetAABBEntity {
public:
    char pad_026[1704];
};

class CSoundOpvarSetPathCornerEntity : public CSoundOpvarSetPointEntity {
public:
    char pad_024[24];
    bool m_bUseParentedPath;
    float m_flDistMinSqr;
    float m_flDistMaxSqr;
    // CUtlSymbolLarge m_iszPathCornerEntityName;
    char pad_025[12];
};

class SoundOpvarTraceResult_t {
public:
    // Vector vPos;
    char pad_00[12];
    bool bDidHit;
    float flDistSqrToCenter;
};

class AutoRoomDoorwayPairs_t {
public:
    // Vector vP1;
    // Vector vP2;
    char pad_00[24];
};

class CSoundOpvarSetAutoRoomEntity : public CSoundOpvarSetPointEntity {
public:
    // CUtlVector< SoundOpvarTraceResult_t > m_traceResults;
    // CUtlVector< AutoRoomDoorwayPairs_t > m_doorwayPairs;
    char pad_024[48];
    float m_flSize;
    float m_flHeightTolerance;
    float m_flSizeSqr;
    char pad_025[4];
};

class CSoundOpvarSetOBBWindEntity : public CSoundOpvarSetPointBase {
public:
    // Vector m_vMins;
    // Vector m_vMaxs;
    // Vector m_vDistanceMins;
    // Vector m_vDistanceMaxs;
    char pad_019[48];
    float m_flWindMin;
    float m_flWindMax;
    float m_flWindMapMin;
    float m_flWindMapMax;
};

class DestructibleHitGroupToDestroy_t {
public:
    HitGroup_t m_nHitGroup;
    int32_t m_nMaxDamageLevel;
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
    AmmoIndex_t m_iAmmoType;
    char pad_01[8];
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

class SummaryTakeDamageInfo_t {
public:
    int32_t nSummarisedCount;
    CTakeDamageInfo info;
    CTakeDamageResult result;
    // CHandle< CBaseEntity > hTarget;
    char pad_00[8];
};

class CTakeDamageSummaryScopeGuard {
public:
    // CUtlVector< SummaryTakeDamageInfo_t* > m_vecSummaries;
    char pad_00[32];
};

class CTeamplayRules {
public:
    char pad_00[208];
};

class CEconItemAttribute {
public:
    char pad_00[48];
    uint16_t m_iAttributeDefinitionIndex;
    float m_flValue;
    float m_flInitialValue;
    int32_t m_nRefundableCurrency;
    bool m_bSetBonus;
    char pad_01[7];
};

class CAttributeManager {
public:
    // CUtlVector< CHandle< CBaseEntity > > m_Providers;
    char pad_00[32];
    int32_t m_iReapplyProvisionParity;
    // CHandle< CBaseEntity > m_hOuter;
    char pad_01[4];
    bool m_bPreventLoopback;
    attributeprovidertypes_t m_ProviderType;
    // CUtlVector< CAttributeManager::cached_attribute_float_t > m_CachedResults;
    char pad_02[32];
};

class CAttributeList {
public:
    // CUtlVectorEmbeddedNetworkVar< CEconItemAttribute > m_Attributes;
    char pad_00[112];
    CAttributeManager* m_pManager;
};

class IEconItemInterface {
public:
    char pad_00[8];
};

class CAttributeManager::cached_attribute_float_t {
public:
    float flIn;
    // CUtlSymbolLarge iAttribHook;
    char pad_00[12];
    float flOut;
    char pad_01[4];
};

class CEconItemView : public IEconItemInterface {
public:
    char pad_01[48];
    uint16_t m_iItemDefinitionIndex;
    int32_t m_iEntityQuality;
    uint32_t m_iEntityLevel;
    uint64_t m_iItemID;
    uint32_t m_iItemIDHigh;
    uint32_t m_iItemIDLow;
    uint32_t m_iAccountID;
    uint32_t m_iInventoryPosition;
    char pad_02[8];
    bool m_bInitialized;
    CAttributeList m_AttributeList;
    CAttributeList m_NetworkedDynamicAttributes;
    char m_szCustomName[161];
    char m_szCustomNameOverride[161];
    char pad_03[6];
};

class CAttributeContainer : public CAttributeManager {
public:
    CEconItemView m_Item;
};

class IHasAttributes {
public:
    char pad_00[8];
};

class CNmAimCSTask {
public:
    char pad_00[256];
};

class CNmSnapWeaponTask {
public:
    char pad_00[96];
};

class GameAmmoTypeInfo_t {
public:
    char pad_00[56];
    int32_t m_nBuySize;
    int32_t m_nCost;
    char pad_01[16];
};

class EntitySpottedState_t {
public:
    char pad_00[8];
    bool m_bSpotted;
    uint32_t m_bSpottedByMask[2];
    char pad_01[4];
};

class SpawnPoint : public CServerOnlyPointEntity {
public:
    int32_t m_iPriority;
    bool m_bEnabled;
    int32_t m_nType;
    char pad_018[4];
};

class CCSGameRules {
public:
    char pad_00[216];
    bool m_bFreezePeriod;
    bool m_bWarmupPeriod;
    GameTime_t m_fWarmupPeriodEnd;
    GameTime_t m_fWarmupPeriodStart;
    bool m_bTerroristTimeOutActive;
    bool m_bCTTimeOutActive;
    float m_flTerroristTimeOutRemaining;
    float m_flCTTimeOutRemaining;
    int32_t m_nTerroristTimeOuts;
    int32_t m_nCTTimeOuts;
    bool m_bTechnicalTimeOut;
    bool m_bMatchWaitingForResume;
    int32_t m_iFreezeTime;
    int32_t m_iRoundTime;
    float m_fMatchStartTime;
    GameTime_t m_fRoundStartTime;
    GameTime_t m_flRestartRoundTime;
    bool m_bGameRestart;
    float m_flGameStartTime;
    float m_timeUntilNextPhaseStarts;
    int32_t m_gamePhase;
    int32_t m_totalRoundsPlayed;
    int32_t m_nRoundsPlayedThisPhase;
    int32_t m_nOvertimePlaying;
    int32_t m_iHostagesRemaining;
    bool m_bAnyHostageReached;
    bool m_bMapHasBombTarget;
    bool m_bMapHasRescueZone;
    bool m_bMapHasBuyZone;
    bool m_bIsQueuedMatchmaking;
    int32_t m_nQueuedMatchmakingMode;
    bool m_bIsValveDS;
    bool m_bLogoMap;
    bool m_bPlayAllStepSoundsOnServer;
    int32_t m_iSpectatorSlotCount;
    int32_t m_MatchDevice;
    bool m_bHasMatchStarted;
    int32_t m_nNextMapInMapgroup;
    char m_szTournamentEventName[512];
    char m_szTournamentEventStage[512];
    char m_szMatchStatTxt[512];
    char m_szTournamentPredictionsTxt[512];
    int32_t m_nTournamentPredictionsPct;
    GameTime_t m_flCMMItemDropRevealStartTime;
    GameTime_t m_flCMMItemDropRevealEndTime;
    bool m_bIsDroppingItems;
    bool m_bIsQuestEligible;
    bool m_bIsHltvActive;
    bool m_bBombPlanted;
    uint16_t m_arrProhibitedItemIndices[100];
    uint32_t m_arrTournamentActiveCasterAccounts[4];
    int32_t m_numBestOfMaps;
    int32_t m_nHalloweenMaskListSeed;
    bool m_bBombDropped;
    int32_t m_iRoundWinStatus;
    int32_t m_eRoundWinReason;
    bool m_bTCantBuy;
    bool m_bCTCantBuy;
    int32_t m_iMatchStats_RoundResults[30];
    int32_t m_iMatchStats_PlayersAlive_CT[30];
    int32_t m_iMatchStats_PlayersAlive_T[30];
    float m_TeamRespawnWaveTimes[32];
    GameTime_t m_flNextRespawnWave;
    // Vector m_vMinimapMins;
    // Vector m_vMinimapMaxs;
    char pad_01[148];
    float m_MinimapVerticalSectionHeights[8];
    uint64_t m_ullLocalMatchID;
    int32_t m_nEndMatchMapGroupVoteTypes[10];
    int32_t m_nEndMatchMapGroupVoteOptions[10];
    int32_t m_nEndMatchMapVoteWinner;
    int32_t m_iNumConsecutiveCTLoses;
    int32_t m_iNumConsecutiveTerroristLoses;
    char pad_02[28];
    bool m_bHasHostageBeenTouched;
    GameTime_t m_flIntermissionStartTime;
    GameTime_t m_flIntermissionEndTime;
    bool m_bLevelInitialized;
    int32_t m_iTotalRoundsPlayed;
    int32_t m_iUnBalancedRounds;
    bool m_endMatchOnRoundReset;
    bool m_endMatchOnThink;
    int32_t m_iNumTerrorist;
    int32_t m_iNumCT;
    int32_t m_iNumSpawnableTerrorist;
    int32_t m_iNumSpawnableCT;
    // CUtlVector< int32 > m_arrSelectedHostageSpawnIndices;
    char pad_03[28];
    int32_t m_nSpawnPointsRandomSeed;
    bool m_bFirstConnected;
    bool m_bCompleteReset;
    bool m_bPickNewTeamsOnReset;
    bool m_bScrambleTeamsOnRestart;
    bool m_bSwapTeamsOnRestart;
    // CUtlVector< int32 > m_nEndMatchTiedVotes;
    char pad_04[35];
    bool m_bNeedToAskPlayersForContinueVote;
    uint32_t m_numQueuedMatchmakingAccounts;
    float m_fAvgPlayerRank;
    char* m_pQueuedMatchmakingReservationString;
    uint32_t m_numTotalTournamentDrops;
    uint32_t m_numSpectatorsCountMax;
    uint32_t m_numSpectatorsCountMaxTV;
    uint32_t m_numSpectatorsCountMaxLnk;
    char pad_05[8];
    int32_t m_nCTsAliveAtFreezetimeEnd;
    int32_t m_nTerroristsAliveAtFreezetimeEnd;
    bool m_bForceTeamChangeSilent;
    bool m_bLoadingRoundBackupData;
    char pad_06[52];
    int32_t m_nMatchInfoShowType;
    float m_flMatchInfoDecidedTime;
    char pad_07[24];
    int32_t mTeamDMLastWinningTeamNumber;
    float mTeamDMLastThinkTime;
    float m_flTeamDMLastAnnouncementTime;
    int32_t m_iAccountTerrorist;
    int32_t m_iAccountCT;
    int32_t m_iSpawnPointCount_Terrorist;
    int32_t m_iSpawnPointCount_CT;
    int32_t m_iMaxNumTerrorists;
    int32_t m_iMaxNumCTs;
    int32_t m_iLoserBonusMostRecentTeam;
    float m_tmNextPeriodicThink;
    bool m_bVoiceWonMatchBragFired;
    float m_fWarmupNextChatNoticeTime;
    char pad_08[4];
    int32_t m_iHostagesRescued;
    int32_t m_iHostagesTouched;
    float m_flNextHostageAnnouncement;
    bool m_bNoTerroristsKilled;
    bool m_bNoCTsKilled;
    bool m_bNoEnemiesKilled;
    bool m_bCanDonateWeapons;
    char pad_09[4];
    float m_firstKillTime;
    char pad_010[4];
    float m_firstBloodTime;
    char pad_011[24];
    bool m_hostageWasInjured;
    bool m_hostageWasKilled;
    char pad_012[14];
    bool m_bVoteCalled;
    bool m_bServerVoteOnReset;
    float m_flVoteCheckThrottle;
    bool m_bBuyTimeEnded;
    int32_t m_nLastFreezeEndBeep;
    bool m_bTargetBombed;
    bool m_bBombDefused;
    bool m_bMapHasBombZone;
    // Vector m_vecMainCTSpawnPos;
    // CUtlVector< CHandle< SpawnPoint > > m_CTSpawnPointsMasterList;
    // CUtlVector< CHandle< SpawnPoint > > m_TerroristSpawnPointsMasterList;
    char pad_013[141];
    bool m_bRespawningAllRespawnablePlayers;
    int32_t m_iNextCTSpawnPoint;
    float m_flCTSpawnPointUsedTime;
    int32_t m_iNextTerroristSpawnPoint;
    float m_flTerroristSpawnPointUsedTime;
    // CUtlVector< CHandle< SpawnPoint > > m_CTSpawnPoints;
    // CUtlVector< CHandle< SpawnPoint > > m_TerroristSpawnPoints;
    char pad_014[52];
    bool m_bIsUnreservedGameServer;
    float m_fAutobalanceDisplayTime;
    char pad_015[56];
    bool m_bAllowWeaponSwitch;
    bool m_bRoundTimeWarningTriggered;
    GameTime_t m_phaseChangeAnnouncementTime;
    float m_fNextUpdateTeamClanNamesTime;
    GameTime_t m_flLastThinkTime;
    float m_fAccumulatedRoundOffDamage;
    int32_t m_nShorthandedBonusLastEvalRound;
    char pad_016[72];
    int32_t m_nMatchAbortedEarlyReason;
    bool m_bHasTriggeredRoundStartMusic;
    bool m_bSwitchingTeamsAtRoundReset;
    char pad_017[24];
    CCSGameModeRules* m_pGameModeRules;
    // KeyValues3 m_BtGlobalBlackboard;
    // CHandle< CBaseEntity > m_hPlayerResource;
    // CRetakeGameRules m_RetakeRules;
    // CUtlVector< int32 >[4] m_arrTeamUniqueKillWeaponsMatch;
    char pad_018[752];
    bool m_bTeamLastKillUsedUniqueWeaponMatch[4];
    char pad_019[36];
    uint8_t m_nMatchEndCount;
    int32_t m_nTTeamIntroVariant;
    int32_t m_nCTTeamIntroVariant;
    bool m_bTeamIntroPeriod;
    GameTime_t m_fTeamIntroPeriodEnd;
    bool m_bPlayedTeamIntroVO;
    int32_t m_iRoundEndWinnerTeam;
    int32_t m_eRoundEndReason;
    bool m_bRoundEndShowTimerDefend;
    int32_t m_iRoundEndTimerTime;
    // CUtlString m_sRoundEndFunFactToken;
    // CPlayerSlot m_iRoundEndFunFactPlayerSlot;
    char pad_020[12];
    int32_t m_iRoundEndFunFactData1;
    int32_t m_iRoundEndFunFactData2;
    int32_t m_iRoundEndFunFactData3;
    // CUtlString m_sRoundEndMessage;
    char pad_021[8];
    int32_t m_iRoundEndPlayerCount;
    bool m_bRoundEndNoMusic;
    int32_t m_iRoundEndLegacy;
    uint8_t m_nRoundEndCount;
    int32_t m_iRoundStartRoundNumber;
    uint8_t m_nRoundStartCount;
    // float64 m_flLastPerfSampleTime;
    char pad_022[65579];
};

class CCSGameRulesProxy : public CGameRulesProxy {
public:
    CCSGameRules* m_pGameRules;
};

class CCSGameModeRules {
public:
    char pad_00[8];
    CNetworkVarChainer __m_pChainEntity;
};

class CRetakeGameRules {
public:
    char pad_00[312];
    int32_t m_nMatchSeed;
    bool m_bBlockersPresent;
    bool m_bRoundInProgress;
    int32_t m_iFirstSecondHalfRound;
    int32_t m_iBombSite;
    // CHandle< CCSPlayerPawn > m_hBombPlanter;
    char pad_01[168];
};

class CCSGameModeRules_Noop {
public:
    char pad_00[48];
};

class CCSGameModeRules_ArmsRace {
public:
    // CNetworkUtlVectorBase< CUtlString > m_WeaponSequence;
    char pad_00[136];
};

class CCSGameModeRules_Deathmatch {
public:
    char pad_00[48];
    GameTime_t m_flDMBonusStartTime;
    float m_flDMBonusTimeLength;
    // CUtlString m_sDMBonusWeapon;
    char pad_01[80];
};

class CBaseCombatCharacter : public CBaseFlex {
public:
    bool m_bForceServerRagdoll;
    // CNetworkUtlVectorBase< CHandle< CEconWearable > > m_hMyWearables;
    char pad_025[28];
    float m_impactEnergyScale;
    bool m_bApplyStressDamage;
    bool m_bDeathEventsDispatched;
    // CUtlVector< RelationshipOverride_t >* m_pVecRelationships;
    // CUtlSymbolLarge m_strRelationships;
    char pad_026[80];
    Hull_t m_eHull;
    uint32_t m_nNavHullIdx;
    CMovementStatsProperty m_movementStats;
};

class CBasePlayerPawn : public CBaseCombatCharacter {
public:
    CPlayer_WeaponServices* m_pWeaponServices;
    CPlayer_ItemServices* m_pItemServices;
    CPlayer_AutoaimServices* m_pAutoaimServices;
    CPlayer_ObserverServices* m_pObserverServices;
    CPlayer_WaterServices* m_pWaterServices;
    CPlayer_UseServices* m_pUseServices;
    CPlayer_FlashlightServices* m_pFlashlightServices;
    CPlayer_CameraServices* m_pCameraServices;
    CPlayer_MovementServices* m_pMovementServices;
    // CUtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges;
    // QAngle v_angle;
    // QAngle v_anglePrevious;
    char pad_027[136];
    uint32_t m_iHideHUD;
    sky3dparams_t m_skybox3d;
    GameTime_t m_fTimeLastHurt;
    GameTime_t m_flDeathTime;
    GameTime_t m_fNextSuicideTime;
    bool m_fInitHUD;
    CAI_Expresser* m_pExpresser;
    // CHandle< CBasePlayerController > m_hController;
    // CHandle< CBasePlayerController > m_hDefaultController;
    char pad_028[12];
    float m_fHltvReplayDelay;
    float m_fHltvReplayEnd;
    // CEntityIndex m_iHltvReplayEntity;
    // CUtlVector< sndopvarlatchdata_t > m_sndOpvarLatchData;
    char pad_029[28];
};

class CCSPlayerPawnBase : public CBasePlayerPawn {
public:
    CTouchExpansionComponent m_CTouchExpansionComponent;
    CCSPlayer_PingServices* m_pPingServices;
    GameTime_t m_blindUntilTime;
    GameTime_t m_blindStartTime;
    CSPlayerState m_iPlayerState;
    char pad_030[172];
    bool m_bRespawning;
    bool m_bHasMovedSinceSpawn;
    int32_t m_iNumSpawns;
    char pad_031[4];
    float m_flIdleTimeSinceLastAction;
    float m_fNextRadarUpdateTime;
    float m_flFlashDuration;
    float m_flFlashMaxAlpha;
    float m_flProgressBarStartTime;
    int32_t m_iProgressBarDuration;
    // CHandle< CCSPlayerController > m_hOriginalController;
    char pad_032[12];
};

class CCSPlayerPawn : public CCSPlayerPawnBase {
public:
    char pad_033[8];
    CCSPlayer_BulletServices* m_pBulletServices;
    CCSPlayer_HostageServices* m_pHostageServices;
    CCSPlayer_BuyServices* m_pBuyServices;
    CCSPlayer_ActionTrackingServices* m_pActionTrackingServices;
    CCSPlayer_RadioServices* m_pRadioServices;
    CCSPlayer_DamageReactServices* m_pDamageReactServices;
    uint16_t m_nCharacterDefIndex;
    bool m_bHasFemaleVoice;
    // CUtlString m_strVOPrefix;
    char pad_034[13];
    char m_szLastPlaceName[18];
    char pad_035[222];
    bool m_bInHostageResetZone;
    bool m_bInBuyZone;
    // CUtlVector< CHandle< CBaseEntity > > m_TouchingBuyZones;
    char pad_036[30];
    bool m_bWasInBuyZone;
    bool m_bInHostageRescueZone;
    bool m_bInBombZone;
    bool m_bWasInHostageRescueZone;
    int32_t m_iRetakesOffering;
    int32_t m_iRetakesOfferingCard;
    bool m_bRetakesHasDefuseKit;
    bool m_bRetakesMVPLastRound;
    int32_t m_iRetakesMVPBoostItem;
    loadout_slot_t m_RetakesMVPBoostExtraUtility;
    GameTime_t m_flHealthShotBoostExpirationTime;
    float m_flLandingTimeSeconds;
    // QAngle m_aimPunchAngle;
    // QAngle m_aimPunchAngleVel;
    char pad_037[16];
    GameTick_t m_aimPunchTickBase;
    float m_aimPunchTickFraction;
    // CUtlVector< QAngle > m_aimPunchCache;
    char pad_038[24];
    bool m_bIsBuyMenuOpen;
    char pad_039[1489];
    GameTime_t m_lastLandTime;
    bool m_bOnGroundLastTick;
    int32_t m_iPlayerLocked;
    GameTime_t m_flTimeOfLastInjury;
    GameTime_t m_flNextSprayDecalTime;
    bool m_bNextSprayDecalTimeExpedited;
    int32_t m_nRagdollDamageBone;
    // Vector m_vRagdollDamageForce;
    // Vector m_vRagdollDamagePosition;
    char pad_040[24];
    char m_szRagdollDamageWeaponName[64];
    bool m_bRagdollDamageHeadshot;
    // Vector m_vRagdollServerOrigin;
    CEconItemView m_EconGloves;
    uint8_t m_nEconGlovesChanged;
    // QAngle m_qDeathEyeAngles;
    char pad_041[15];
    bool m_bSkipOneHeadConstraintUpdate;
    bool m_bLeftHanded;
    GameTime_t m_fSwitchedHandednessTime;
    float m_flViewmodelOffsetX;
    float m_flViewmodelOffsetY;
    float m_flViewmodelOffsetZ;
    float m_flViewmodelFOV;
    bool m_bIsWalking;
    float m_fLastGivenDefuserTime;
    float m_fLastGivenBombTime;
    float m_flDealtDamageToEnemyMostRecentTimestamp;
    uint32_t m_iDisplayHistoryBits;
    float m_flLastAttackedTeammate;
    GameTime_t m_allowAutoFollowTime;
    bool m_bResetArmorNextSpawn;
    // CEntityIndex m_nLastKillerIndex;
    EntitySpottedState_t m_entitySpottedState;
    int32_t m_nSpotRules;
    bool m_bIsScoped;
    bool m_bResumeZoom;
    bool m_bIsDefusing;
    bool m_bIsGrabbingHostage;
    CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress;
    GameTime_t m_flEmitSoundTime;
    bool m_bInNoDefuseArea;
    // CEntityIndex m_iBombSiteIndex;
    char pad_042[4];
    int32_t m_nWhichBombZone;
    bool m_bInBombZoneTrigger;
    bool m_bWasInBombZoneTrigger;
    int32_t m_iShotsFired;
    float m_flFlinchStack;
    float m_flVelocityModifier;
    float m_flHitHeading;
    int32_t m_nHitBodyPart;
    // Vector m_vecTotalBulletForce;
    char pad_043[12];
    bool m_bWaitForNoAttack;
    float m_ignoreLadderJumpTime;
    bool m_bKilledByHeadshot;
    int32_t m_LastHitBox;
    CCSBot* m_pBot;
    bool m_bBotAllowActive;
    // QAngle m_thirdPersonHeading;
    char pad_044[12];
    float m_flSlopeDropOffset;
    float m_flSlopeDropHeight;
    // Vector m_vHeadConstraintOffset;
    char pad_045[12];
    int32_t m_nLastPickupPriority;
    float m_flLastPickupPriorityTime;
    int32_t m_ArmorValue;
    uint16_t m_unCurrentEquipmentValue;
    uint16_t m_unRoundStartEquipmentValue;
    uint16_t m_unFreezetimeEndEquipmentValue;
    int32_t m_iLastWeaponFireUsercmd;
    bool m_bIsSpawning;
    char pad_046[8];
    int32_t m_iDeathFlags;
    bool m_bHasDeathInfo;
    float m_flDeathInfoTime;
    // Vector m_vecDeathInfoOrigin;
    char pad_047[12];
    uint32_t m_vecPlayerPatchEconIndices[5];
    // Color m_GunGameImmunityColor;
    GameTime_t m_grenadeParameterStashTime;
    bool m_bGrenadeParametersStashed;
    // QAngle m_angStashedShootAngles;
    // Vector m_vecStashedGrenadeThrowPosition;
    // Vector m_vecStashedVelocity;
    // QAngle[2] m_angShootAngleHistory;
    // Vector[2] m_vecThrowPositionHistory;
    // Vector[2] m_vecVelocityHistory;
    // CUtlVectorEmbeddedNetworkVar< PredictedDamageTag_t > m_PredictedDamageTags;
    char pad_048[216];
    int32_t m_nHighestAppliedDamageTagTick;
    bool m_bCommittingSuicideOnTeamChange;
    bool m_wasNotKilledNaturally;
    GameTime_t m_fImmuneToGunGameDamageTime;
    bool m_bGunGameImmunity;
    float m_fMolotovDamageTime;
    // QAngle m_angEyeAngles;
    char pad_049[20];
};

class QuestProgress {
public:
    char pad_00[1];
};

class CSPerRoundStats_t {
public:
    char pad_00[48];
    int32_t m_iKills;
    int32_t m_iDeaths;
    int32_t m_iAssists;
    int32_t m_iDamage;
    int32_t m_iEquipmentValue;
    int32_t m_iMoneySaved;
    int32_t m_iKillReward;
    int32_t m_iLiveTime;
    int32_t m_iHeadShotKills;
    int32_t m_iObjective;
    int32_t m_iCashEarned;
    int32_t m_iUtilityDamage;
    int32_t m_iEnemiesFlashed;
    char pad_01[4];
};

class CSMatchStats_t {
public:
    char pad_00[104];
    int32_t m_iEnemy5Ks;
    int32_t m_iEnemy4Ks;
    int32_t m_iEnemy3Ks;
    int32_t m_iEnemyKnifeKills;
    int32_t m_iEnemyTaserKills;
    int32_t m_iEnemy2Ks;
    int32_t m_iUtility_Count;
    int32_t m_iUtility_Successes;
    int32_t m_iUtility_Enemies;
    int32_t m_iFlash_Count;
    int32_t m_iFlash_Successes;
    float m_flHealthPointsRemovedTotal;
    float m_flHealthPointsDealtTotal;
    int32_t m_nShotsFiredTotal;
    int32_t m_nShotsOnTargetTotal;
    int32_t m_i1v1Count;
    int32_t m_i1v1Wins;
    int32_t m_i1v2Count;
    int32_t m_i1v2Wins;
    int32_t m_iEntryCount;
    int32_t m_iEntryWins;
    char pad_01[4];
};

class CCSGO_TeamPreviewCharacterPosition : public CBaseEntity {
public:
    int32_t m_nVariant;
    int32_t m_nRandom;
    int32_t m_nOrdinal;
    // CUtlString m_sWeaponName;
    char pad_016[8];
    uint64_t m_xuid;
    CEconItemView m_agentItem;
    CEconItemView m_glovesItem;
    CEconItemView m_weaponItem;
};

class CCSGO_TeamSelectCharacterPosition : public CCSGO_TeamPreviewCharacterPosition {
public:
    char pad_017[3264];
};

class CCSGO_TeamSelectTerroristPosition : public CCSGO_TeamSelectCharacterPosition {
public:
    char pad_018[3264];
};

class CCSGO_TeamSelectCounterTerroristPosition : public CCSGO_TeamSelectCharacterPosition {
public:
    char pad_018[3264];
};

class CCSGO_TeamIntroCharacterPosition : public CCSGO_TeamPreviewCharacterPosition {
public:
    char pad_017[3264];
};

class CCSGO_TeamIntroTerroristPosition : public CCSGO_TeamIntroCharacterPosition {
public:
    char pad_018[3264];
};

class CCSGO_TeamIntroCounterTerroristPosition : public CCSGO_TeamIntroCharacterPosition {
public:
    char pad_018[3264];
};

class CCSGO_WingmanIntroCharacterPosition : public CCSGO_TeamIntroCharacterPosition {
public:
    char pad_018[3264];
};

class CCSGO_WingmanIntroTerroristPosition : public CCSGO_WingmanIntroCharacterPosition {
public:
    char pad_019[3264];
};

class CCSGO_WingmanIntroCounterTerroristPosition : public CCSGO_WingmanIntroCharacterPosition {
public:
    char pad_019[3264];
};

class CCSMinimapBoundary : public CBaseEntity {
public:
    char pad_016[1192];
};

class CCSPetPlacement : public CBaseEntity {
public:
    char pad_016[1192];
};

class PredictedDamageTag_t {
public:
    char pad_00[48];
    GameTick_t nTagTick;
    float flFlinchModSmall;
    float flFlinchModLarge;
    float flFriendlyFireDamageReductionRatio;
};

class CPlayerPing : public CBaseEntity {
public:
    // CHandle< CCSPlayerPawn > m_hPlayer;
    // CHandle< CBaseEntity > m_hPingedEntity;
    char pad_016[16];
    int32_t m_iType;
    bool m_bUrgent;
    char m_szPlaceName[18];
    char pad_017[1];
};

class CCSPlayer_PingServices : public CPlayerPawnComponent {
public:
    GameTime_t m_flPlayerPingTokens;
    // CHandle< CPlayerPing > m_hPlayerPing;
    char pad_02[20];
};

class CCSPlayerResource : public CBaseEntity {
public:
    bool m_bHostageAlive[12];
    bool m_isHostageFollowingSomeone[12];
    // CEntityIndex[12] m_iHostageEntityIDs;
    // Vector m_bombsiteCenterA;
    // Vector m_bombsiteCenterB;
    char pad_016[72];
    int32_t m_hostageRescueX[4];
    int32_t m_hostageRescueY[4];
    int32_t m_hostageRescueZ[4];
    bool m_bEndMatchNextMapAllVoted;
    bool m_foundGoalPositions;
    char pad_017[6];
};

class CCSPlayer_DamageReactServices : public CPlayerPawnComponent {
public:
    char pad_02[80];
};

class CCSPlayerBase_CameraServices : public CPlayer_CameraServices {
public:
    uint32_t m_iFOV;
    uint32_t m_iFOVStart;
    GameTime_t m_flFOVTime;
    float m_flFOVRate;
    // CHandle< CBaseEntity > m_hZoomOwner;
    // CUtlVector< CHandle< CBaseEntity > > m_hTriggerFogList;
    // CHandle< CBaseEntity > m_hLastFogTrigger;
    char pad_04[40];
};

class WeaponPurchaseCount_t {
public:
    char pad_00[48];
    uint16_t m_nItemDefIndex;
    uint16_t m_nCount;
    char pad_01[4];
};

class WeaponPurchaseTracker_t {
public:
    // CUtlVectorEmbeddedNetworkVar< WeaponPurchaseCount_t > m_weaponPurchases;
    char pad_00[112];
};

class CCSPlayer_ActionTrackingServices : public CPlayerPawnComponent {
public:
    // CHandle< CBasePlayerWeapon > m_hLastWeaponBeforeC4AutoSwitch;
    char pad_02[476];
    bool m_bIsRescuing;
    WeaponPurchaseTracker_t m_weaponPurchasesThisMatch;
    WeaponPurchaseTracker_t m_weaponPurchasesThisRound;
    char pad_03[8];
};

class CCSPlayer_BulletServices : public CPlayerPawnComponent {
public:
    int32_t m_totalHitsOnServer;
    char pad_02[36];
};

class SellbackPurchaseEntry_t {
public:
    char pad_00[48];
    uint16_t m_unDefIdx;
    int32_t m_nCost;
    int32_t m_nPrevArmor;
    bool m_bPrevHelmet;
    // CEntityHandle m_hItem;
    char pad_01[11];
};

class CCSPlayer_BuyServices : public CPlayerPawnComponent {
public:
    // CUtlVectorEmbeddedNetworkVar< SellbackPurchaseEntry_t > m_vecSellbackPurchaseEntries;
    char pad_02[344];
};

class CCSPlayer_CameraServices : public CCSPlayerBase_CameraServices {
public:
    char pad_05[432];
};

class CCSPlayer_HostageServices : public CPlayerPawnComponent {
public:
    // CHandle< CBaseEntity > m_hCarriedHostage;
    // CHandle< CBaseEntity > m_hCarriedHostageProp;
    char pad_02[80];
};

class CCSPlayer_ItemServices : public CPlayer_ItemServices {
public:
    bool m_bHasDefuser;
    bool m_bHasHelmet;
    char pad_03[6];
};

class CCSPlayerLegacyJump {
public:
    char pad_00[16];
    bool m_bOldJumpPressed;
    float m_flJumpPressedTime;
};

class CCSPlayerModernJump {
public:
    char pad_00[16];
    GameTick_t m_nLastActualJumpPressTick;
    float m_flLastActualJumpPressFrac;
    GameTick_t m_nLastUsableJumpPressTick;
    float m_flLastUsableJumpPressFrac;
    GameTick_t m_nLastLandedTick;
    float m_flLastLandedFrac;
    float m_flLastLandedVelocityX;
    float m_flLastLandedVelocityY;
    float m_flLastLandedVelocityZ;
    char pad_01[4];
};

class CCSPlayer_MovementServices : public CPlayer_MovementServices_Humanoid {
public:
    // Vector m_vecLadderNormal;
    char pad_07[12];
    int32_t m_nLadderSurfacePropIndex;
    bool m_bDucked;
    float m_flDuckAmount;
    float m_flDuckSpeed;
    bool m_bDuckOverride;
    bool m_bDesiresDuck;
    bool m_bDucking;
    float m_flDuckOffset;
    uint32_t m_nDuckTimeMsecs;
    uint32_t m_nDuckJumpTimeMsecs;
    uint32_t m_nJumpTimeMsecs;
    float m_flLastDuckTime;
    // Vector2D m_vecLastPositionAtFullCrouchSpeed;
    char pad_08[20];
    bool m_duckUntilOnGround;
    bool m_bHasWalkMovedSinceLastJump;
    bool m_bInStuckTest;
    char pad_09[524];
    int32_t m_nTraceCount;
    int32_t m_StuckLast;
    bool m_bSpeedCropped;
    int32_t m_nOldWaterLevel;
    float m_flWaterEntryTime;
    // Vector m_vecForward;
    // Vector m_vecLeft;
    // Vector m_vecUp;
    char pad_010[36];
    int32_t m_nGameCodeHasMovedPlayerAfterCommand;
    bool m_bMadeFootstepNoise;
    int32_t m_iFootsteps;
    GameTime_t m_fStashGrenadeParameterWhen;
    uint64_t m_nButtonDownMaskPrev;
    float m_flOffsetTickCompleteTime;
    float m_flOffsetTickStashedSpeed;
    float m_flStamina;
    float m_flHeightAtJumpStart;
    float m_flMaxJumpHeightThisJump;
    float m_flMaxJumpHeightLastJump;
    float m_flStaminaAtJumpStart;
    float m_flVelMulAtJumpStart;
    float m_flAccumulatedJumpError;
    CCSPlayerLegacyJump m_LegacyJump;
    CCSPlayerModernJump m_ModernJump;
    GameTick_t m_nLastJumpTick;
    float m_flLastJumpFrac;
    float m_flLastJumpVelocityZ;
    bool m_bJumpApexPending;
    float m_flTicksSinceLastSurfingDetected;
    bool m_bWasSurfing;
    // Vector m_vecInputRotated;
    char pad_011[2235];
};

class CCSPlayer_UseServices : public CPlayer_UseServices {
public:
    // CHandle< CBaseEntity > m_hLastKnownUseEntity;
    GameTime_t m_flLastUseTimeStamp;
    GameTime_t m_flTimeLastUsedWindow;
    char pad_03[4];
};

class CCSPlayer_WaterServices : public CPlayer_WaterServices {
public:
    GameTime_t m_NextDrownDamageTime;
    int32_t m_nDrownDmgRate;
    GameTime_t m_AirFinishedTime;
    float m_flWaterJumpTime;
    // Vector m_vecWaterJumpVel;
    char pad_03[12];
    float m_flSwimSoundTime;
    char pad_04[24];
};

class CCSPlayer_WeaponServices : public CPlayer_WeaponServices {
public:
    GameTime_t m_flNextAttack;
    bool m_bIsLookingAtWeapon;
    bool m_bIsHoldingLookAtWeapon;
    // CHandle< CBasePlayerWeapon > m_hSavedWeapon;
    char pad_04[4];
    int32_t m_nTimeToMelee;
    int32_t m_nTimeToSecondary;
    int32_t m_nTimeToPrimary;
    int32_t m_nTimeToSniperRifle;
    bool m_bIsBeingGivenItem;
    bool m_bIsPickingUpItemWithUse;
    bool m_bPickedUpWeapon;
    bool m_bDisableAutoDeploy;
    bool m_bIsPickingUpGroundWeapon;
    // CNetworkUtlVectorBase< uint8 > m_networkAnimTiming;
    char pad_05[6127];
    bool m_bBlockInspectUntilNextGraphUpdate;
    char pad_06[7];
};

class CCS2WeaponGraphController {
public:
    // CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_action;
    // CAnimGraph2ParamOptionalRef< bool > m_bActionReset;
    // CAnimGraph2ParamOptionalRef< float32 > m_flWeaponActionSpeedScale;
    // CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_weaponCategory;
    // CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_weaponType;
    // CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_weaponExtraInfo;
    // CAnimGraph2ParamOptionalRef< float32 > m_flWeaponAmmo;
    // CAnimGraph2ParamOptionalRef< float32 > m_flWeaponAmmoMax;
    // CAnimGraph2ParamOptionalRef< float32 > m_flWeaponAmmoReserve;
    // CAnimGraph2ParamOptionalRef< bool > m_bWeaponIsSilenced;
    // CAnimGraph2ParamOptionalRef< float32 > m_flWeaponIronsightAmount;
    // CAnimGraph2ParamOptionalRef< bool > m_bIsUsingLegacyModel;
    // CAnimGraph2ParamOptionalRef< float32 > m_idleVariation;
    // CAnimGraph2ParamOptionalRef< float32 > m_deployVariation;
    // CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_attackType;
    // CAnimGraph2ParamOptionalRef< float32 > m_attackThrowStrength;
    // CAnimGraph2ParamOptionalRef< float32 > m_flAttackVariation;
    // CAnimGraph2ParamOptionalRef< float32 > m_inspectVariation;
    // CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_inspectExtraInfo;
    // CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_reloadStage;
    char pad_00[1496];
};

class CCSObserver_ObserverServices : public CPlayer_ObserverServices {
public:
    char pad_04[128];
};

class CCSObserver_CameraServices : public CCSPlayerBase_CameraServices {
public:
    char pad_05[432];
};

class CCSObserver_MovementServices : public CPlayer_MovementServices {
public:
    char pad_04[576];
};

class CCSObserver_UseServices : public CPlayer_UseServices {
public:
    char pad_03[72];
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

class CCSPlayerController_ActionTrackingServices : public CPlayerControllerComponent {
public:
    // CUtlVectorEmbeddedNetworkVar< CSPerRoundStats_t > m_perRoundStats;
    CSMatchStats_t m_matchStats;
    int32_t m_iNumRoundKills;
    int32_t m_iNumRoundKillsHeadshots;
    float m_flTotalRoundDamageDealt;
    char pad_02[652];
};

class CBasePlayerController : public CBaseEntity {
public:
    char pad_016[8];
    uint64_t m_nInButtonsWhichAreToggles;
    uint32_t m_nTickBase;
    // CHandle< CBasePlayerPawn > m_hPawn;
    char pad_017[40];
    bool m_bKnownTeamMismatch;
    // CSplitScreenSlot m_nSplitScreenSlot;
    // CHandle< CBasePlayerController > m_hSplitOwner;
    // CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers;
    char pad_018[35];
    bool m_bIsHLTV;
    PlayerConnectedState m_iConnected;
    char m_iszPlayerName[128];
    // CUtlString m_szNetworkIDString;
    char pad_019[8];
    float m_fLerpTime;
    bool m_bLagCompensation;
    bool m_bPredict;
    char pad_020[6];
    bool m_bIsLowViolence;
    bool m_bGamePaused;
    char pad_021[312];
    ChatIgnoreType_t m_iIgnoreGlobalChat;
    float m_flLastPlayerTalkTime;
    float m_flLastEntitySteadyState;
    int32_t m_nAvailableEntitySteadyState;
    bool m_bHasAnySteadyStateEnts;
    char pad_022[8];
    uint64_t m_steamID;
    bool m_bNoClipEnabled;
    uint32_t m_iDesiredFOV;
    char pad_023[184];
};

class CCSPlayerController : public CBasePlayerController {
public:
    char pad_024[16];
    CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices;
    CCSPlayerController_InventoryServices* m_pInventoryServices;
    CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices;
    CCSPlayerController_DamageServices* m_pDamageServices;
    uint32_t m_iPing;
    bool m_bHasCommunicationAbuseMute;
    uint32_t m_uiCommunicationMuteFlags;
    // CUtlSymbolLarge m_szCrosshairCodes;
    char pad_025[12];
    uint8_t m_iPendingTeamNum;
    GameTime_t m_flForceTeamTime;
    int32_t m_iCompTeammateColor;
    bool m_bEverPlayedOnTeam;
    bool m_bAttemptedToGetColor;
    int32_t m_iTeammatePreferredColor;
    bool m_bTeamChanged;
    bool m_bInSwitchTeam;
    bool m_bHasSeenJoinGame;
    bool m_bJustBecameSpectator;
    bool m_bSwitchTeamsOnNextRoundReset;
    bool m_bRemoveAllItemsOnNextRoundReset;
    GameTime_t m_flLastJoinTeamTime;
    // CUtlSymbolLarge m_szClan;
    char pad_026[8];
    int32_t m_iCoachingTeam;
    uint64_t m_nPlayerDominated;
    uint64_t m_nPlayerDominatingMe;
    int32_t m_iCompetitiveRanking;
    int32_t m_iCompetitiveWins;
    int8_t m_iCompetitiveRankType;
    int32_t m_iCompetitiveRankingPredicted_Win;
    int32_t m_iCompetitiveRankingPredicted_Loss;
    int32_t m_iCompetitiveRankingPredicted_Tie;
    int32_t m_nEndMatchNextMapVote;
    uint16_t m_unActiveQuestId;
    uint32_t m_rtActiveMissionPeriod;
    QuestProgress::Reason m_nQuestProgressReason;
    uint32_t m_unPlayerTvControlFlags;
    char pad_027[44];
    int32_t m_iDraftIndex;
    uint32_t m_msQueuedModeDisconnectionTimestamp;
    uint32_t m_uiAbandonRecordedReason;
    uint32_t m_eNetworkDisconnectionReason;
    bool m_bCannotBeKicked;
    bool m_bEverFullyConnected;
    bool m_bAbandonAllowsSurrender;
    bool m_bAbandonOffersInstantSurrender;
    bool m_bDisconnection1MinWarningPrinted;
    bool m_bScoreReported;
    int32_t m_nDisconnectionTick;
    char pad_028[12];
    bool m_bControllingBot;
    bool m_bHasControlledBotThisRound;
    bool m_bHasBeenControlledByPlayerThisRound;
    int32_t m_nBotsControlledThisRound;
    bool m_bCanControlObservedBot;
    // CHandle< CCSPlayerPawn > m_hPlayerPawn;
    // CHandle< CCSObserverPawn > m_hObserverPawn;
    char pad_029[8];
    int32_t m_DesiredObserverMode;
    // CEntityHandle m_hDesiredObserverTarget;
    char pad_030[4];
    bool m_bPawnIsAlive;
    uint32_t m_iPawnHealth;
    int32_t m_iPawnArmor;
    bool m_bPawnHasDefuser;
    bool m_bPawnHasHelmet;
    uint16_t m_nPawnCharacterDefIndex;
    int32_t m_iPawnLifetimeStart;
    int32_t m_iPawnLifetimeEnd;
    int32_t m_iPawnBotDifficulty;
    // CHandle< CCSPlayerController > m_hOriginalControllerOfCurrentPawn;
    char pad_031[4];
    int32_t m_iScore;
    int32_t m_iRoundScore;
    int32_t m_iRoundsWon;
    uint8_t m_recentKillQueue[8];
    uint8_t m_nFirstKill;
    uint8_t m_nKillCount;
    bool m_bMvpNoMusic;
    int32_t m_eMvpReason;
    int32_t m_iMusicKitID;
    int32_t m_iMusicKitMVPs;
    int32_t m_iMVPs;
    int32_t m_nUpdateCounter;
    float m_flSmoothedPing;
    IntervalTimer m_lastHeldVoteTimer;
    char pad_032[8];
    bool m_bShowHints;
    int32_t m_iNextTimeCheck;
    bool m_bJustDidTeamKill;
    bool m_bPunishForTeamKill;
    bool m_bGaveTeamDamageWarning;
    bool m_bGaveTeamDamageWarningThisRound;
    // float64 m_dblLastReceivedPacketPlatFloatTime;
    GameTime_t m_LastTeamDamageWarningTime;
    GameTime_t m_LastTimePlayerWasDisconnectedForPawnsRemove;
    uint32_t m_nSuspiciousHitCount;
    uint32_t m_nNonSuspiciousHitStreak;
    char pad_033[161];
    bool m_bFireBulletsSeedSynchronized;
    char pad_034[126];
};

class CDamageRecord {
public:
    // CHandle< CCSPlayerPawn > m_PlayerDamager;
    // CHandle< CCSPlayerPawn > m_PlayerRecipient;
    // CHandle< CCSPlayerController > m_hPlayerControllerDamager;
    // CHandle< CCSPlayerController > m_hPlayerControllerRecipient;
    // CUtlString m_szPlayerDamagerName;
    // CUtlString m_szPlayerRecipientName;
    char pad_00[80];
    uint64_t m_DamagerXuid;
    uint64_t m_RecipientXuid;
    float m_flBulletsDamage;
    float m_flDamage;
    float m_flActualHealthRemoved;
    int32_t m_iNumHits;
    int32_t m_iLastBulletUpdate;
    bool m_bIsOtherEnemy;
    EKillTypes_t m_killType;
    char pad_01[2];
};

class CCSPlayerController_DamageServices : public CPlayerControllerComponent {
public:
    int32_t m_nSendUpdate;
    // CUtlVectorEmbeddedNetworkVar< CDamageRecord > m_DamageList;
    char pad_02[140];
};

class CCSPlayerController_InGameMoneyServices : public CPlayerControllerComponent {
public:
    bool m_bReceivesMoneyNextRound;
    int32_t m_iMoneyEarnedForNextRound;
    int32_t m_iAccount;
    int32_t m_iStartAccount;
    int32_t m_iTotalCashSpent;
    int32_t m_iCashSpentThisRound;
};

class ServerAuthoritativeWeaponSlot_t {
public:
    char pad_00[48];
    uint16_t unClass;
    uint16_t unSlot;
    uint16_t unItemDefIdx;
    char pad_01[2];
};

class CCSPlayerController_InventoryServices : public CPlayerControllerComponent {
public:
    uint16_t m_unMusicID;
    MedalRank_t m_rank;
    char pad_02[20];
    int32_t m_nPersonaDataPublicLevel;
    int32_t m_nPersonaDataPublicCommendsLeader;
    int32_t m_nPersonaDataPublicCommendsTeacher;
    int32_t m_nPersonaDataPublicCommendsFriendly;
    int32_t m_nPersonaDataXpTrailLevel;
    char pad_03[3800];
    uint32_t m_unEquippedPlayerSprayIDs[1];
    uint64_t m_unCurrentLoadoutHash;
    // CUtlVectorEmbeddedNetworkVar< ServerAuthoritativeWeaponSlot_t > m_vecServerAuthoritativeWeaponSlots;
    char pad_04[136];
};

class CCSPlayerController_InventoryServices::NetworkedLoadoutSlot_t {
public:
    CEconItemView* pItem;
    uint16_t team;
    uint16_t slot;
    char pad_00[4];
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

class CFiringModeFloat {
public:
    float m_flValues[2];
};

class CFiringModeInt {
public:
    int32_t m_nValues[2];
};

class CIronSightController {
public:
    char pad_00[8];
    bool m_bIronSightAvailable;
    float m_flIronSightAmount;
    float m_flIronSightAmountGained;
    float m_flIronSightAmountBiased;
};

class CHintMessage {
public:
    char* m_hintString;
    // CUtlVector< char* > m_args;
    char pad_00[24];
    float m_duration;
    char pad_01[4];
};

class CHintMessageQueue {
public:
    float m_tmMessageEnd;
    // CUtlVector< CHintMessage* > m_messages;
    char pad_00[24];
    CBasePlayerController* m_pPlayerController;
};

class CCSPlayer_RadioServices : public CPlayerPawnComponent {
public:
    GameTime_t m_flGotHostageTalkTimer;
    GameTime_t m_flDefusingTalkTimer;
    GameTime_t m_flC4PlantTalkTimer;
    GameTime_t m_flRadioTokenSlots;
    char pad_02[8];
    bool m_bIgnoreRadio;
    char pad_03[7];
};

class CBaseIssue {
public:
    char pad_00[32];
    char m_szTypeString[64];
    char m_szDetailsString[260];
    int32_t m_iNumYesVotes;
    int32_t m_iNumNoVotes;
    int32_t m_iNumPotentialVotes;
    CVoteController* m_pVoteController;
};

class CVoteController : public CBaseEntity {
public:
    int32_t m_iActiveIssueIndex;
    int32_t m_iOnlyTeamToVote;
    int32_t m_nVoteOptionCount[5];
    int32_t m_nPotentialVotes;
    bool m_bIsYesNoVote;
    CountdownTimer m_acceptingVotesTimer;
    CountdownTimer m_executeCommandTimer;
    CountdownTimer m_resetVoteTimer;
    int32_t m_nVotesCast[64];
    // CPlayerSlot m_playerHoldingVote;
    // CPlayerSlot m_playerOverrideForVote;
    char pad_016[8];
    int32_t m_nHighestCountIndex;
    // CUtlVector< CBaseIssue* > m_potentialIssues;
    // CUtlVector< char* > m_VoteOptions;
    char pad_017[52];
};

class CMapVetoPickController : public CBaseEntity {
public:
    bool m_bPlayedIntroVcd;
    bool m_bNeedToPlayFiveSecondsRemaining;
    // float64 m_dblPreMatchDraftSequenceTime;
    char pad_016[38];
    bool m_bPreMatchDraftStateChanged;
    int32_t m_nDraftType;
    int32_t m_nTeamWinningCoinToss;
    int32_t m_nTeamWithFirstChoice[64];
    int32_t m_nVoteMapIdsList[7];
    int32_t m_nAccountIDs[64];
    int32_t m_nMapId0[64];
    int32_t m_nMapId1[64];
    int32_t m_nMapId2[64];
    int32_t m_nMapId3[64];
    int32_t m_nMapId4[64];
    int32_t m_nMapId5[64];
    int32_t m_nStartingSide0[64];
    int32_t m_nCurrentPhase;
    int32_t m_nPhaseStartTick;
    int32_t m_nPhaseDurationTicks;
    // CEntityOutputTemplate< CUtlSymbolLarge, CUtlSymbolLarge > m_OnMapVetoed;
    // CEntityOutputTemplate< CUtlSymbolLarge, CUtlSymbolLarge > m_OnMapPicked;
    // CEntityOutputTemplate< int32, int32 > m_OnSidesPicked;
    // CEntityOutputTemplate< int32, int32 > m_OnNewPhaseStarted;
    // CEntityOutputTemplate< int32, int32 > m_OnLevelTransition;
    char pad_017[164];
};

class CLogicEventListener : public CLogicalEntity {
public:
    // CUtlString m_strEventName;
    char pad_018[24];
    bool m_bIsEnabled;
    int32_t m_nTeam;
    // CEntityOutputTemplate< CUtlString, char* > m_OnEventFired;
    char pad_019[32];
};

class CCSPointPulseAPI {
public:
    char pad_00[1];
};

class CCSPointScriptEntity : public CBaseEntity {
public:
    char pad_016[1552];
};

class CBot {
public:
    char pad_00[16];
    CCSPlayerController* m_pController;
    CCSPlayerPawn* m_pPlayer;
    bool m_bHasSpawned;
    uint32_t m_id;
    char pad_01[152];
    bool m_isRunning;
    bool m_isCrouching;
    float m_forwardSpeed;
    float m_leftSpeed;
    float m_verticalSpeed;
    uint64_t m_buttonFlags;
    float m_jumpTimestamp;
    // Vector m_viewForward;
    char pad_02[28];
    int32_t m_postureStackIndex;
    char pad_03[4];
};

class CBtNode {
public:
    char pad_00[88];
};

class CBtNodeDecorator {
public:
    char pad_00[88];
};

class CBtNodeComposite {
public:
    char pad_00[88];
};

class CBtActionAim {
public:
    // CUtlString m_szSensorInputKey;
    // CUtlString m_szAimReadyKey;
    char pad_00[136];
    float m_flZoomCooldownTimestamp;
    bool m_bDoneAiming;
    float m_flLerpStartTime;
    float m_flNextLookTargetLerpTime;
    float m_flPenaltyReductionRatio;
    // QAngle m_NextLookTarget;
    CountdownTimer m_AimTimer;
    CountdownTimer m_SniperHoldTimer;
    CountdownTimer m_FocusIntervalTimer;
    bool m_bAcquired;
    char pad_01[7];
};

class CBtActionCombatPositioning {
public:
    // CUtlString m_szSensorInputKey;
    // CUtlString m_szIsAttackingKey;
    char pad_00[136];
    CountdownTimer m_ActionTimer;
    bool m_bCrouching;
    char pad_01[15];
};

class CBtActionMoveTo {
public:
    // CUtlString m_szDestinationInputKey;
    // CUtlString m_szHidingSpotInputKey;
    // CUtlString m_szThreatInputKey;
    // Vector m_vecDestination;
    char pad_00[132];
    bool m_bAutoLookAdjust;
    bool m_bComputePath;
    float m_flDamagingAreasPenaltyCost;
    CountdownTimer m_CheckApproximateCornersTimer;
    CountdownTimer m_CheckHighPriorityItem;
    CountdownTimer m_RepathTimer;
    float m_flArrivalEpsilon;
    float m_flAdditionalArrivalEpsilon2D;
    float m_flHidingSpotCheckDistanceThreshold;
    float m_flNearestAreaDistanceThreshold;
};

class CBtActionParachutePositioning {
public:
    char pad_00[88];
    CountdownTimer m_ActionTimer;
    char pad_01[8];
};

class CBtNodeCondition {
public:
    char pad_00[88];
    bool m_bNegated;
    char pad_01[7];
};

class CBtNodeConditionInactive {
public:
    char pad_00[120];
    float m_flRoundStartThresholdSeconds;
    float m_flSensorInactivityThresholdSeconds;
    CountdownTimer m_SensorInactivityTimer;
};

class CPointEntity : public CBaseEntity {
public:
    char pad_016[1192];
};

class CEnvCombinedLightProbeVolume : public CBaseEntity {
public:
    // Color m_Entity_Color;
    char pad_016[4220];
    float m_Entity_flBrightness;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture;
    char pad_017[8];
    bool m_Entity_bCustomCubemapTexture;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_AmbientCube;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SDF;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_DC;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_R;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_G;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_B;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture;
    // Vector m_Entity_vBoxMins;
    // Vector m_Entity_vBoxMaxs;
    char pad_018[103];
    bool m_Entity_bMoveable;
    int32_t m_Entity_nHandshake;
    int32_t m_Entity_nEnvCubeMapArrayIndex;
    int32_t m_Entity_nPriority;
    bool m_Entity_bStartDisabled;
    float m_Entity_flEdgeFadeDist;
    // Vector m_Entity_vEdgeFadeDists;
    char pad_019[12];
    int32_t m_Entity_nLightProbeSizeX;
    int32_t m_Entity_nLightProbeSizeY;
    int32_t m_Entity_nLightProbeSizeZ;
    int32_t m_Entity_nLightProbeAtlasX;
    int32_t m_Entity_nLightProbeAtlasY;
    int32_t m_Entity_nLightProbeAtlasZ;
    char pad_020[21];
    bool m_Entity_bEnabled;
    char pad_021[6];
};

class CEnvCubemap : public CBaseEntity {
public:
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture;
    char pad_016[136];
    bool m_Entity_bCustomCubemapTexture;
    float m_Entity_flInfluenceRadius;
    // Vector m_Entity_vBoxProjectMins;
    // Vector m_Entity_vBoxProjectMaxs;
    char pad_017[24];
    bool m_Entity_bMoveable;
    int32_t m_Entity_nHandshake;
    int32_t m_Entity_nEnvCubeMapArrayIndex;
    int32_t m_Entity_nPriority;
    float m_Entity_flEdgeFadeDist;
    // Vector m_Entity_vEdgeFadeDists;
    char pad_018[12];
    float m_Entity_flDiffuseScale;
    bool m_Entity_bStartDisabled;
    bool m_Entity_bDefaultEnvMap;
    bool m_Entity_bDefaultSpecEnvMap;
    bool m_Entity_bIndoorCubeMap;
    bool m_Entity_bCopyDiffuseFromDefaultCubemap;
    char pad_019[15];
    bool m_Entity_bEnabled;
    char pad_020[7];
};

class CEnvCubemapBox : public CEnvCubemap {
public:
    char pad_021[1424];
};

class CEnvCubemapFog : public CBaseEntity {
public:
    float m_flEndDistance;
    float m_flStartDistance;
    float m_flFogFalloffExponent;
    bool m_bHeightFogEnabled;
    float m_flFogHeightWidth;
    float m_flFogHeightEnd;
    float m_flFogHeightStart;
    float m_flFogHeightExponent;
    float m_flLODBias;
    bool m_bActive;
    bool m_bStartDisabled;
    float m_flFogMaxOpacity;
    int32_t m_nCubemapSourceType;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial;
    // CUtlSymbolLarge m_iszSkyEntity;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture;
    char pad_016[24];
    bool m_bHasHeightFogEnd;
    bool m_bFirstTime;
    char pad_017[6];
};

class CGradientFog : public CBaseEntity {
public:
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hGradientFogTexture;
    char pad_016[8];
    float m_flFogStartDistance;
    float m_flFogEndDistance;
    bool m_bHeightFogEnabled;
    float m_flFogStartHeight;
    float m_flFogEndHeight;
    float m_flFarZ;
    float m_flFogMaxOpacity;
    float m_flFogFalloffExponent;
    float m_flFogVerticalExponent;
    // Color m_fogColor;
    char pad_017[4];
    float m_flFogStrength;
    float m_flFadeTime;
    bool m_bStartDisabled;
    bool m_bIsEnabled;
    bool m_bGradientFogNeedsTextures;
    char pad_018[5];
};

class CEnvLightProbeVolume : public CBaseEntity {
public:
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_AmbientCube;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SDF;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_DC;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_R;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_G;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_B;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture;
    // Vector m_Entity_vBoxMins;
    // Vector m_Entity_vBoxMaxs;
    char pad_016[4184];
    bool m_Entity_bMoveable;
    int32_t m_Entity_nHandshake;
    int32_t m_Entity_nPriority;
    bool m_Entity_bStartDisabled;
    int32_t m_Entity_nLightProbeSizeX;
    int32_t m_Entity_nLightProbeSizeY;
    int32_t m_Entity_nLightProbeSizeZ;
    int32_t m_Entity_nLightProbeAtlasX;
    int32_t m_Entity_nLightProbeAtlasY;
    int32_t m_Entity_nLightProbeAtlasZ;
    char pad_017[9];
    bool m_Entity_bEnabled;
    char pad_018[6];
};

class CPlayerVisibility : public CBaseEntity {
public:
    float m_flVisibilityStrength;
    float m_flFogDistanceMultiplier;
    float m_flFogMaxDensityMultiplier;
    float m_flFadeTime;
    bool m_bStartDisabled;
    bool m_bIsEnabled;
    char pad_016[6];
};

class CEnvVolumetricFogController : public CBaseEntity {
public:
    float m_flScattering;
    // Color m_TintColor;
    char pad_016[4];
    float m_flAnisotropy;
    float m_flFadeSpeed;
    float m_flDrawDistance;
    float m_flFadeInStart;
    float m_flFadeInEnd;
    float m_flIndirectStrength;
    int32_t m_nVolumeDepth;
    float m_fFirstVolumeSliceThickness;
    int32_t m_nIndirectTextureDimX;
    int32_t m_nIndirectTextureDimY;
    int32_t m_nIndirectTextureDimZ;
    // Vector m_vBoxMins;
    // Vector m_vBoxMaxs;
    char pad_017[24];
    bool m_bActive;
    GameTime_t m_flStartAnisoTime;
    GameTime_t m_flStartScatterTime;
    GameTime_t m_flStartDrawDistanceTime;
    float m_flStartAnisotropy;
    float m_flStartScattering;
    float m_flStartDrawDistance;
    float m_flDefaultAnisotropy;
    float m_flDefaultScattering;
    float m_flDefaultDrawDistance;
    bool m_bStartDisabled;
    bool m_bEnableIndirect;
    bool m_bIsMaster;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogIndirectTexture;
    char pad_018[8];
    int32_t m_nForceRefreshCount;
    float m_fNoiseSpeed;
    float m_fNoiseStrength;
    // Vector m_vNoiseScale;
    char pad_019[12];
    float m_fWindSpeed;
    // Vector m_vWindDirection;
    char pad_020[12];
    bool m_bFirstTime;
    char pad_021[7];
};

class CEnvVolumetricFogVolume : public CBaseEntity {
public:
    bool m_bActive;
    // Vector m_vBoxMins;
    // Vector m_vBoxMaxs;
    char pad_016[27];
    bool m_bStartDisabled;
    bool m_bIndirectUseLPVs;
    float m_flStrength;
    int32_t m_nFalloffShape;
    float m_flFalloffExponent;
    float m_flHeightFogDepth;
    float m_fHeightFogEdgeWidth;
    float m_fIndirectLightStrength;
    float m_fSunLightStrength;
    float m_fNoiseStrength;
    // Color m_TintColor;
    char pad_017[4];
    bool m_bOverrideTintColor;
    bool m_bOverrideIndirectLightStrength;
    bool m_bOverrideSunLightStrength;
    bool m_bOverrideNoiseStrength;
};

class CEnvWindController : public CBaseEntity {
public:
    CEnvWindShared m_EnvWindShared;
    float m_fDirectionVariation;
    float m_fSpeedVariation;
    float m_fTurbulence;
    float m_fVolumeHalfExtentXY;
    float m_fVolumeHalfExtentZ;
    int32_t m_nVolumeResolutionXY;
    int32_t m_nVolumeResolutionZ;
    int32_t m_nClipmapLevels;
    bool m_bIsMaster;
    bool m_bFirstTime;
    char pad_016[6];
};

class CEnvWindVolume : public CBaseEntity {
public:
    bool m_bActive;
    // Vector m_vBoxMins;
    // Vector m_vBoxMaxs;
    char pad_016[27];
    bool m_bStartDisabled;
    int32_t m_nShape;
    float m_fWindSpeedMultiplier;
    float m_fWindTurbulenceMultiplier;
    float m_fWindSpeedVariationMultiplier;
    float m_fWindDirectionVariationMultiplier;
    char pad_017[4];
};

class CInfoTarget : public CPointEntity {
public:
    char pad_017[1192];
};

class CInfoTargetServerOnly : public CServerOnlyPointEntity {
public:
    char pad_018[1192];
};

class CInfoParticleTarget : public CPointEntity {
public:
    char pad_017[1192];
};

class CChoreoInfoTarget : public CPointEntity {
public:
    char pad_017[1192];
};

class CInfoVisibilityBox : public CBaseEntity {
public:
    char pad_016[4];
    int32_t m_nMode;
    // Vector m_vBoxSize;
    char pad_017[12];
    bool m_bEnabled;
    char pad_018[3];
};

class CInfoWorldLayer : public CBaseEntity {
public:
    CEntityIOOutput m_pOutputOnEntitiesSpawned;
    // CUtlSymbolLarge m_worldName;
    // CUtlSymbolLarge m_layerName;
    char pad_016[16];
    bool m_bWorldLayerVisible;
    bool m_bEntitiesSpawned;
    bool m_bCreateAsChildSpawnGroup;
    uint32_t m_hLayerSpawnGroup;
};

class CLightEntity : public CBaseModelEntity {
public:
    CLightComponent* m_CLightComponent;
};

class CMultiLightProxy : public CLogicalEntity {
public:
    // CUtlSymbolLarge m_iszLightNameFilter;
    // CUtlSymbolLarge m_iszLightClassFilter;
    char pad_018[16];
    float m_flLightRadiusFilter;
    float m_flBrightnessDelta;
    bool m_bPerformScreenFade;
    float m_flTargetBrightnessMultiplier;
    float m_flCurrentBrightnessMultiplier;
    // CUtlVector< CHandle< CLightEntity > > m_vecLights;
    char pad_019[28];
};

class CPointChildModifier : public CPointEntity {
public:
    bool m_bOrphanInsteadOfDeletingChildrenOnRemove;
    char pad_017[7];
};

class CPointCameraVFOV : public CPointCamera {
public:
    float m_flVerticalFOV;
    char pad_017[4];
};

class CPointOrient : public CBaseEntity {
public:
    // CUtlSymbolLarge m_iszSpawnTargetName;
    // CHandle< CBaseEntity > m_hTarget;
    char pad_016[12];
    bool m_bActive;
    PointOrientGoalDirectionType_t m_nGoalDirection;
    PointOrientConstraint_t m_nConstraint;
    float m_flMaxTurnRate;
    GameTime_t m_flLastGameTime;
};

class CPointTemplate : public CLogicalEntity {
public:
    // CUtlSymbolLarge m_iszWorldName;
    // CUtlSymbolLarge m_iszSource2EntityLumpName;
    // CUtlSymbolLarge m_iszEntityFilterName;
    char pad_018[24];
    float m_flTimeoutInterval;
    bool m_bAsynchronouslySpawnEntities;
    PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior;
    PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType;
    // CUtlVector< uint32 > m_createdSpawnGroupHandles;
    // CUtlVector< CEntityHandle > m_SpawnedEntityHandles;
    // HSCRIPT m_ScriptSpawnCallback;
    // HSCRIPT m_ScriptCallbackScope;
    char pad_019[64];
};

class CGameGibManager : public CBaseEntity {
public:
    char pad_016[24];
    bool m_bAllowNewGibs;
    int32_t m_iCurrentMaxPieces;
    int32_t m_iMaxPieces;
    int32_t m_iLastFrame;
};

class CRagdollManager : public CBaseEntity {
public:
    int8_t m_iCurrentMaxRagdollCount;
    int32_t m_iMaxRagdollCount;
    bool m_bSaveImportant;
    bool m_bCanTakeDamage;
    char pad_016[6];
};

class CSoundAreaEntityBase : public CBaseEntity {
public:
    bool m_bDisabled;
    // CUtlSymbolLarge m_iszSoundAreaType;
    // Vector m_vPos;
    char pad_016[31];
};

class CSoundAreaEntitySphere : public CSoundAreaEntityBase {
public:
    float m_flRadius;
    char pad_017[4];
};

class CSoundAreaEntityOrientedBox : public CSoundAreaEntityBase {
public:
    // Vector m_vMin;
    // Vector m_vMax;
    char pad_017[1248];
};

class CSoundStackSave : public CLogicalEntity {
public:
    // CUtlSymbolLarge m_iszStackName;
    char pad_018[1200];
};

class CSoundEventEntity : public CBaseEntity {
public:
    bool m_bStartOnSpawn;
    bool m_bToLocalPlayer;
    bool m_bStopOnNew;
    bool m_bSaveRestore;
    bool m_bSavedIsPlaying;
    float m_flSavedElapsedTime;
    // CUtlSymbolLarge m_iszSourceEntityName;
    // CUtlSymbolLarge m_iszAttachmentName;
    // CEntityOutputTemplate< uint64, uint64 > m_onGUIDChanged;
    CEntityIOOutput m_onSoundFinished;
    float m_flClientCullRadius;
    // CUtlSymbolLarge m_iszSoundName;
    // CEntityHandle m_hSource;
    char pad_016[76];
    int32_t m_nEntityIndexSelection;
    char pad_017[4];
};

class CSoundEventEntityAlias_snd_event_point : public CSoundEventEntity {
public:
    char pad_018[1368];
};

class CSoundEventAABBEntity : public CSoundEventEntity {
public:
    // Vector m_vMins;
    // Vector m_vMaxs;
    char pad_018[1392];
};

class CSoundEventOBBEntity : public CSoundEventEntity {
public:
    // Vector m_vMins;
    // Vector m_vMaxs;
    char pad_018[1408];
};

class CSoundEventSphereEntity : public CSoundEventEntity {
public:
    float m_flRadius;
    char pad_018[4];
};

class CSoundEventConeEntity : public CSoundEventEntity {
public:
    float m_flEmitterAngle;
    float m_flSweetSpotAngle;
    float m_flAttenMin;
    float m_flAttenMax;
    // CUtlSymbolLarge m_iszParameterName;
    char pad_018[8];
};

class CSoundEventPathCornerEntity : public CSoundEventEntity {
public:
    // CUtlSymbolLarge m_iszPathCorner;
    char pad_018[8];
    int32_t m_iCountMax;
    float m_flDistanceMax;
    float m_flDistMaxSqr;
    float m_flDotProductMax;
    bool m_bPlaying;
    // CNetworkUtlVectorBase< SoundeventPathCornerPairNetworked_t > m_vecCornerPairsNetworked;
    char pad_019[135];
};

class CSoundEventParameter : public CBaseEntity {
public:
    // CUtlSymbolLarge m_iszParamName;
    char pad_016[32];
    float m_flFloatValue;
    char pad_017[4];
};

class CTeam : public CBaseEntity {
public:
    // CNetworkUtlVectorBase< CHandle< CBasePlayerController > > m_aPlayerControllers;
    // CNetworkUtlVectorBase< CHandle< CBasePlayerPawn > > m_aPlayers;
    char pad_016[48];
    int32_t m_iScore;
    char m_szTeamname[129];
    char pad_017[3];
};

class CInfoFan : public CPointEntity {
public:
    char pad_017[64];
    float m_fFanForceMaxRadius;
    float m_fFanForceMinRadius;
    float m_flCurveDistRange;
    // CUtlSymbolLarge m_FanForceCurveString;
    char pad_018[12];
};

class CPulseGraphInstance_GameBlackboard {
public:
    char pad_00[456];
};

class CPulseGameBlackboard : public CBaseEntity {
public:
    // CUtlString m_strGraphName;
    // CUtlString m_strStateBlob;
    char pad_016[1216];
};

class CBasePlayerVData {
public:
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName;
    char pad_00[264];
    CSkillFloat m_flHeadDamageMultiplier;
    CSkillFloat m_flChestDamageMultiplier;
    CSkillFloat m_flStomachDamageMultiplier;
    CSkillFloat m_flArmDamageMultiplier;
    CSkillFloat m_flLegDamageMultiplier;
    float m_flHoldBreathTime;
    float m_flDrowningDamageInterval;
    int32_t m_nDrowningDamageInitial;
    int32_t m_nDrowningDamageMax;
    int32_t m_nWaterSpeed;
    float m_flUseRange;
    float m_flUseAngleTolerance;
    float m_flCrouchTime;
};

class CFilterMultiple : public CBaseFilter {
public:
    filter_t m_nFilterType;
    // CUtlSymbolLarge[10] m_iFilterName;
    // CHandle< CBaseEntity >[10] m_hFilter;
    char pad_018[124];
};

class CFilterProximity : public CBaseFilter {
public:
    float m_flRadius;
    char pad_018[4];
};

class CFilterLOS : public CBaseFilter {
public:
    char pad_018[1248];
};

class CFilterClass : public CBaseFilter {
public:
    // CUtlSymbolLarge m_iFilterClass;
    char pad_018[1256];
};

class CBasePlayerWeaponVData {
public:
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldModel;
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sToolsOnlyOwnerModelName;
    char pad_00[488];
    bool m_bBuiltRightHanded;
    bool m_bAllowFlipping;
    // CAttachmentNameSymbolWithStorage m_sMuzzleAttachment;
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashParticle;
    // CUtlString m_szMuzzleFlashParticleConfig;
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szBarrelSmokeParticle;
    char pad_01[494];
    uint8_t m_nMuzzleSmokeShotThreshold;
    float m_flMuzzleSmokeTimeout;
    float m_flMuzzleSmokeDecrementRate;
    bool m_bGenerateMuzzleLight;
    bool m_bLinkedCooldowns;
    ItemFlagTypes_t m_iFlags;
    int32_t m_iWeight;
    bool m_bAutoSwitchTo;
    bool m_bAutoSwitchFrom;
    AmmoIndex_t m_nPrimaryAmmoType;
    AmmoIndex_t m_nSecondaryAmmoType;
    int32_t m_iMaxClip1;
    int32_t m_iMaxClip2;
    int32_t m_iDefaultClip1;
    int32_t m_iDefaultClip2;
    bool m_bReserveAmmoAsClips;
    bool m_bTreatAsSingleClip;
    bool m_bKeepLoadedAmmo;
    RumbleEffect_t m_iRumbleEffect;
    float m_flDropSpeed;
    int32_t m_iSlot;
    int32_t m_iPosition;
    // CUtlOrderedMap< WeaponSound_t, CSoundEventName > m_aShootSounds;
    char pad_02[44];
};

class CInfoGameEventProxy : public CPointEntity {
public:
    // CUtlSymbolLarge m_iszEventName;
    char pad_017[8];
    float m_flRange;
    char pad_018[4];
};

class CServerOnlyModelEntity : public CBaseModelEntity {
public:
    char pad_020[1840];
};

class CModelPointEntity : public CBaseModelEntity {
public:
    char pad_020[1840];
};

class CInfoInteraction : public CPointEntity {
public:
    // CUtlSymbolLarge[8] m_strSlotEntityName;
    // CUtlSymbolLarge m_strInteractVData;
    char pad_017[72];
    float m_flInteractRadius;
    char pad_018[4];
};

class CLogicRelay : public CLogicalEntity {
public:
    bool m_bDisabled;
    bool m_bWaitForRefire;
    bool m_bTriggerOnce;
    bool m_bFastRetrigger;
    bool m_bPassthoughCaller;
    char pad_018[3];
};

class CPathParticleRope : public CBaseEntity {
public:
    char pad_016[8];
    bool m_bStartActive;
    float m_flMaxSimulationTime;
    // CUtlSymbolLarge m_iszEffectName;
    // CUtlVector< CUtlSymbolLarge > m_PathNodes_Name;
    char pad_017[32];
    float m_flParticleSpacing;
    float m_flSlack;
    float m_flRadius;
    // Color m_ColorTint;
    char pad_018[4];
    int32_t m_nEffectState;
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex;
    // CNetworkUtlVectorBase< Vector > m_PathNodes_Position;
    // CNetworkUtlVectorBase< Vector > m_PathNodes_TangentIn;
    // CNetworkUtlVectorBase< Vector > m_PathNodes_TangentOut;
    // CNetworkUtlVectorBase< Vector > m_PathNodes_Color;
    // CNetworkUtlVectorBase< bool > m_PathNodes_PinEnabled;
    // CNetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale;
    char pad_019[164];
};

class CPathParticleRopeAlias_path_particle_rope_clientside : public CPathParticleRope {
public:
    char pad_020[1424];
};

class CPathNode : public CPointEntity {
public:
    // Vector m_vInTangentLocal;
    // Vector m_vOutTangentLocal;
    // CUtlString m_strParentPathUniqueID;
    // CUtlString m_strPathNodeParameter;
    // CTransform m_xWSPrevParent;
    // CHandle< CPathWithDynamicNodes > m_hPath;
    char pad_017[1280];
};

class CEnvSoundscapeProxy : public CEnvSoundscape {
public:
    // CUtlSymbolLarge m_MainSoundscapeName;
    char pad_020[1344];
};

class CFuncWall : public CBaseModelEntity {
public:
    int32_t m_nState;
    char pad_020[4];
};

class CFuncWallToggle : public CFuncWall {
public:
    char pad_021[1848];
};

class CFuncVehicleClip : public CBaseModelEntity {
public:
    char pad_020[1840];
};

class CFuncIllusionary : public CBaseModelEntity {
public:
    char pad_020[1840];
};

class CFuncVPhysicsClip : public CBaseModelEntity {
public:
    bool m_bDisabled;
    char pad_020[7];
};

class CFuncInteractionLayerClip : public CBaseModelEntity {
public:
    bool m_bDisabled;
    // CUtlSymbolLarge m_iszInteractsAs;
    // CUtlSymbolLarge m_iszInteractsWith;
    char pad_020[23];
};

class CPointClientCommand : public CPointEntity {
public:
    char pad_017[1192];
};

class CPointServerCommand : public CPointEntity {
public:
    char pad_017[1192];
};

class CPointBroadcastClientCommand : public CPointEntity {
public:
    char pad_017[1192];
};

class CCommentaryAuto : public CBaseEntity {
public:
    CEntityIOOutput m_OnCommentaryNewGame;
    CEntityIOOutput m_OnCommentaryMidGame;
    CEntityIOOutput m_OnCommentaryMultiplayerSpawn;
};

class CDynamicLight : public CBaseModelEntity {
public:
    uint8_t m_ActualFlags;
    uint8_t m_Flags;
    uint8_t m_LightStyle;
    bool m_On;
    float m_Radius;
    int32_t m_Exponent;
    float m_InnerAngle;
    float m_OuterAngle;
    float m_SpotRadius;
};

class CBeam : public CBaseModelEntity {
public:
    float m_flFrameRate;
    float m_flHDRColorScale;
    GameTime_t m_flFireTime;
    float m_flDamage;
    uint8_t m_nNumBeamEnts;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex;
    char pad_020[20];
    BeamType_t m_nBeamType;
    uint32_t m_nBeamFlags;
    // CHandle< CBaseEntity >[10] m_hAttachEntity;
    AttachmentHandle_t m_nAttachIndex;
    char pad_021[8];
    float m_fWidth;
    float m_fEndWidth;
    float m_fFadeLength;
    float m_fHaloScale;
    float m_fAmplitude;
    float m_fStartFrame;
    float m_fSpeed;
    float m_flFrame;
    BeamClipStyle_t m_nClipStyle;
    bool m_bTurnedOff;
    // VectorWS m_vecEndPos;
    // CHandle< CBaseEntity > m_hEndEntity;
    char pad_022[16];
    int32_t m_nDissolveType;
};

class CTestEffect : public CBaseEntity {
public:
    int32_t m_iLoop;
    int32_t m_iBeam;
    // CHandle< CBeam >[24] m_pBeam;
    char pad_016[21];
    GameTime_t m_flBeamTime;
    GameTime_t m_flStartTime;
    char pad_017[4];
};

class CBlood : public CPointEntity {
public:
    // QAngle m_vecSprayAngles;
    // Vector m_vecSprayDir;
    char pad_017[24];
    float m_flAmount;
    BloodType m_Color;
};

class CEnvBeverage : public CBaseEntity {
public:
    bool m_CanInDispenser;
    int32_t m_nBeverageType;
};

class CPrecipitationBlocker : public CBaseModelEntity {
public:
    char pad_020[1840];
};

class CEnvWind : public CBaseEntity {
public:
    CEnvWindShared m_EnvWindShared;
};

class CPhysicsWire : public CBaseEntity {
public:
    int32_t m_nDensity;
    char pad_016[4];
};

class CEnvMuzzleFlash : public CPointEntity {
public:
    float m_flScale;
    // CUtlSymbolLarge m_iszParentAttachment;
    char pad_017[12];
};

class CEnvSplash : public CPointEntity {
public:
    float m_flScale;
    char pad_017[4];
};

class CEnvViewPunch : public CPointEntity {
public:
    float m_flRadius;
    // QAngle m_angViewPunch;
    char pad_017[12];
};

class CEnvEntityIgniter : public CBaseEntity {
public:
    float m_flLifetime;
    char pad_016[4];
};

class CDebugHistory : public CBaseEntity {
public:
    char pad_016[4096064];
    int32_t m_nNpcEvents;
    char pad_017[4004];
};

class CEnvEntityMaker : public CPointEntity {
public:
    // Vector m_vecEntityMins;
    // Vector m_vecEntityMaxs;
    // CHandle< CBaseEntity > m_hCurrentInstance;
    // CHandle< CBaseEntity > m_hCurrentBlocker;
    // Vector m_vecBlockerOrigin;
    // QAngle m_angPostSpawnDirection;
    char pad_017[56];
    float m_flPostSpawnDirectionVariance;
    float m_flPostSpawnSpeed;
    bool m_bPostSpawnUseAngles;
    // CUtlSymbolLarge m_iszTemplate;
    CEntityIOOutput m_pOutputOnSpawned;
    CEntityIOOutput m_pOutputOnFailedSpawn;
};

class CInfoInstructorHintTarget : public CPointEntity {
public:
    char pad_017[1192];
};

class CEnvInstructorHint : public CPointEntity {
public:
    // CUtlSymbolLarge m_iszName;
    // CUtlSymbolLarge m_iszReplace_Key;
    // CUtlSymbolLarge m_iszHintTargetEntity;
    char pad_017[24];
    int32_t m_iTimeout;
    int32_t m_iDisplayLimit;
    // CUtlSymbolLarge m_iszIcon_Onscreen;
    // CUtlSymbolLarge m_iszIcon_Offscreen;
    // CUtlSymbolLarge m_iszCaption;
    // CUtlSymbolLarge m_iszActivatorCaption;
    // Color m_Color;
    char pad_018[36];
    float m_fIconOffset;
    float m_fRange;
    uint8_t m_iPulseOption;
    uint8_t m_iAlphaOption;
    uint8_t m_iShakeOption;
    bool m_bStatic;
    bool m_bNoOffscreen;
    bool m_bForceCaption;
    int32_t m_iInstanceType;
    bool m_bSuppressRest;
    // CUtlSymbolLarge m_iszBinding;
    char pad_019[15];
    bool m_bAllowNoDrawTarget;
    bool m_bAutoStart;
    bool m_bLocalPlayerOnly;
    char pad_020[5];
};

class CEnvInstructorVRHint : public CPointEntity {
public:
    // CUtlSymbolLarge m_iszName;
    // CUtlSymbolLarge m_iszHintTargetEntity;
    char pad_017[16];
    int32_t m_iTimeout;
    // CUtlSymbolLarge m_iszCaption;
    // CUtlSymbolLarge m_iszStartSound;
    char pad_018[20];
    int32_t m_iLayoutFileType;
    // CUtlSymbolLarge m_iszCustomLayoutFile;
    char pad_019[12];
    int32_t m_iAttachType;
    float m_flHeightOffset;
};

class CInstructorEventEntity : public CPointEntity {
public:
    // CUtlSymbolLarge m_iszName;
    // CUtlSymbolLarge m_iszHintTargetEntity;
    // CHandle< CBasePlayerPawn > m_hTargetPlayer;
    char pad_017[1216];
};

class CEnvFade : public CLogicalEntity {
public:
    // Color m_fadeColor;
    char pad_018[4];
    float m_Duration;
    float m_HoldDuration;
    CEntityIOOutput m_OnBeginFade;
};

class CCredits : public CPointEntity {
public:
    CEntityIOOutput m_OnCreditsDone;
    bool m_bRolledOutroCredits;
    float m_flLogoLength;
};

class CEnvShake : public CPointEntity {
public:
    // CUtlSymbolLarge m_limitToEntity;
    char pad_017[8];
    float m_Amplitude;
    float m_Frequency;
    float m_Duration;
    float m_Radius;
    GameTime_t m_stopTime;
    GameTime_t m_nextShake;
    float m_currentAmp;
    // Vector m_maxForce;
    CPhysicsShake m_shakeCallback;
};

class CEnvTilt : public CPointEntity {
public:
    float m_Duration;
    float m_Radius;
    float m_TiltTime;
    GameTime_t m_stopTime;
};

class CEnvSpark : public CPointEntity {
public:
    float m_flDelay;
    int32_t m_nMagnitude;
    int32_t m_nTrailLength;
    int32_t m_nType;
    CEntityIOOutput m_OnSpark;
};

class CShower : public CModelPointEntity {
public:
    char pad_021[1840];
};

class CEnvExplosion : public CModelPointEntity {
public:
    int32_t m_iMagnitude;
    float m_flPlayerDamage;
    int32_t m_iRadiusOverride;
    float m_flInnerRadius;
    float m_flDamageForce;
    // CHandle< CBaseEntity > m_hInflictor;
    char pad_021[4];
    DamageTypes_t m_iCustomDamageType;
    bool m_bCreateDebris;
    // CUtlSymbolLarge m_iszCustomEffectName;
    // CUtlSymbolLarge m_iszCustomSoundName;
    char pad_022[27];
    bool m_bSuppressParticleImpulse;
    Class_T m_iClassIgnore;
    Class_T m_iClassIgnore2;
    // CUtlSymbolLarge m_iszEntityIgnoreName;
    // CHandle< CBaseEntity > m_hEntityIgnore;
    char pad_023[20];
};

class CFuncTimescale : public CBaseEntity {
public:
    float m_flDesiredTimescale;
    float m_flAcceleration;
    float m_flMinBlendRate;
    float m_flBlendDeltaMultiplier;
    bool m_isStarted;
    char pad_016[7];
};

class CLogicAchievement : public CLogicalEntity {
public:
    bool m_bDisabled;
    // CUtlSymbolLarge m_iszAchievementEventID;
    CEntityIOOutput m_OnFired;
};

class CLogicGameEventListener : public CLogicalEntity {
public:
    CEntityIOOutput m_OnEventFired;
    // CUtlSymbolLarge m_iszGameEventName;
    // CUtlSymbolLarge m_iszGameEventItem;
    char pad_018[16];
    bool m_bEnabled;
    bool m_bStartDisabled;
    char pad_019[6];
};

class CLogicMeasureMovement : public CLogicalEntity {
public:
    // CUtlSymbolLarge m_strMeasureTarget;
    // CUtlSymbolLarge m_strMeasureReference;
    // CUtlSymbolLarge m_strTargetReference;
    // CHandle< CBaseEntity > m_hMeasureTarget;
    // CHandle< CBaseEntity > m_hMeasureReference;
    // CHandle< CBaseEntity > m_hTarget;
    // CHandle< CBaseEntity > m_hTargetReference;
    char pad_018[40];
    float m_flScale;
    int32_t m_nMeasureType;
};

class CLogicNavigation : public CLogicalEntity {
public:
    char pad_018[8];
    bool m_isOn;
    navproperties_t m_navProperty;
};

class CLogicNPCCounter : public CBaseEntity {
public:
    CEntityIOOutput m_OnMinCountAll;
    CEntityIOOutput m_OnMaxCountAll;
    // CEntityOutputTemplate< float32, float32 > m_OnFactorAll;
    // CEntityOutputTemplate< float32, float32 > m_OnMinPlayerDistAll;
    char pad_016[29];
    CEntityIOOutput m_OnMinCount_1;
    CEntityIOOutput m_OnMaxCount_1;
    // CEntityOutputTemplate< float32, float32 > m_OnFactor_1;
    // CEntityOutputTemplate< float32, float32 > m_OnMinPlayerDist_1;
    CEntityIOOutput m_OnMinCount_2;
    CEntityIOOutput m_OnMaxCount_2;
    // CEntityOutputTemplate< float32, float32 > m_OnFactor_2;
    // CEntityOutputTemplate< float32, float32 > m_OnMinPlayerDist_2;
    CEntityIOOutput m_OnMinCount_3;
    CEntityIOOutput m_OnMaxCount_3;
    // CEntityOutputTemplate< float32, float32 > m_OnFactor_3;
    // CEntityOutputTemplate< float32, float32 > m_OnMinPlayerDist_3;
    // CEntityHandle m_hSource;
    // CUtlSymbolLarge m_iszSourceEntityName;
    char pad_017[80];
    float m_flDistanceMax;
    bool m_bDisabled;
    int32_t m_nMinCountAll;
    int32_t m_nMaxCountAll;
    int32_t m_nMinFactorAll;
    int32_t m_nMaxFactorAll;
    // CUtlSymbolLarge m_iszNPCClassname_1;
    char pad_018[16];
    int32_t m_nNPCState_1;
    bool m_bInvertState_1;
    int32_t m_nMinCount_1;
    int32_t m_nMaxCount_1;
    int32_t m_nMinFactor_1;
    int32_t m_nMaxFactor_1;
    char pad_019[4];
    float m_flDefaultDist_1;
    // CUtlSymbolLarge m_iszNPCClassname_2;
    char pad_020[8];
    int32_t m_nNPCState_2;
    bool m_bInvertState_2;
    int32_t m_nMinCount_2;
    int32_t m_nMaxCount_2;
    int32_t m_nMinFactor_2;
    int32_t m_nMaxFactor_2;
    char pad_021[4];
    float m_flDefaultDist_2;
    // CUtlSymbolLarge m_iszNPCClassname_3;
    char pad_022[8];
    int32_t m_nNPCState_3;
    bool m_bInvertState_3;
    int32_t m_nMinCount_3;
    int32_t m_nMaxCount_3;
    int32_t m_nMinFactor_3;
    int32_t m_nMaxFactor_3;
    char pad_023[4];
    float m_flDefaultDist_3;
    char pad_024[24];
};

class CLogicNPCCounterAABB : public CLogicNPCCounter {
public:
    // Vector m_vDistanceOuterMins;
    // Vector m_vDistanceOuterMaxs;
    // Vector m_vOuterMins;
    // Vector m_vOuterMaxs;
    char pad_025[1880];
};

class CLogicNPCCounterOBB : public CLogicNPCCounterAABB {
public:
    char pad_026[1880];
};

class CLogicPlayerProxy : public CLogicalEntity {
public:
    CEntityIOOutput m_PlayerHasAmmo;
    CEntityIOOutput m_PlayerHasNoAmmo;
    CEntityIOOutput m_PlayerDied;
    // CEntityOutputTemplate< int32, int32 > m_RequestedPlayerHealth;
    // CHandle< CBaseEntity > m_hPlayer;
    char pad_018[40];
};

class CLogicAuto : public CBaseEntity {
public:
    CEntityIOOutput m_OnMapSpawn;
    CEntityIOOutput m_OnDemoMapSpawn;
    CEntityIOOutput m_OnNewGame;
    CEntityIOOutput m_OnLoadGame;
    CEntityIOOutput m_OnMapTransition;
    CEntityIOOutput m_OnBackgroundMap;
    CEntityIOOutput m_OnMultiNewMap;
    CEntityIOOutput m_OnMultiNewRound;
    CEntityIOOutput m_OnVREnabled;
    CEntityIOOutput m_OnVRNotEnabled;
    // CUtlSymbolLarge m_globalstate;
    char pad_016[8];
};

class CLogicScript : public CPointEntity {
public:
    char pad_017[1192];
};

class CTimerEntity : public CLogicalEntity {
public:
    CEntityIOOutput m_OnTimer;
    CEntityIOOutput m_OnTimerHigh;
    CEntityIOOutput m_OnTimerLow;
    int32_t m_iDisabled;
    float m_flInitialDelay;
    float m_flRefireTime;
    bool m_bUpDownState;
    int32_t m_iUseRandomTime;
    bool m_bPauseAfterFiring;
    float m_flLowerRandomBound;
    float m_flUpperRandomBound;
    float m_flRemainingTime;
    bool m_bPaused;
    char pad_018[3];
};

class CLogicLineToEntity : public CLogicalEntity {
public:
    // CEntityOutputTemplate< Vector, Vector > m_Line;
    // CUtlSymbolLarge m_SourceName;
    // CHandle< CBaseEntity > m_StartEntity;
    // CHandle< CBaseEntity > m_EndEntity;
    char pad_018[1248];
};

class CMathRemap : public CLogicalEntity {
public:
    float m_flInMin;
    float m_flInMax;
    float m_flOut1;
    float m_flOut2;
    float m_flOldInValue;
    bool m_bEnabled;
    // CEntityOutputTemplate< float32, float32 > m_OutValue;
    CEntityIOOutput m_OnRoseAboveMin;
    CEntityIOOutput m_OnRoseAboveMax;
    CEntityIOOutput m_OnFellBelowMin;
    CEntityIOOutput m_OnFellBelowMax;
};

class CMathColorBlend : public CLogicalEntity {
public:
    float m_flInMin;
    float m_flInMax;
    // Color m_OutColor1;
    // Color m_OutColor2;
    // CEntityOutputTemplate< Color, Color > m_OutValue;
    char pad_018[40];
};

class CEnvGlobal : public CLogicalEntity {
public:
    // CEntityOutputTemplate< int32, int32 > m_outCounter;
    // CUtlSymbolLarge m_globalstate;
    char pad_018[40];
    int32_t m_triggermode;
    int32_t m_initialstate;
    int32_t m_counter;
    char pad_019[4];
};

class CMultiSource : public CLogicalEntity {
public:
    // CHandle< CBaseEntity >[32] m_rgEntities;
    char pad_018[128];
    int32_t m_rgTriggered[32];
    CEntityIOOutput m_OnTrigger;
    int32_t m_iTotal;
    // CUtlSymbolLarge m_globalstate;
    char pad_019[12];
};

class CMathCounter : public CLogicalEntity {
public:
    float m_flMin;
    float m_flMax;
    bool m_bHitMin;
    bool m_bHitMax;
    bool m_bDisabled;
    // CEntityOutputTemplate< float32, float32 > m_OutValue;
    // CEntityOutputTemplate< float32, float32 > m_OnGetValue;
    CEntityIOOutput m_OnHitMin;
    CEntityIOOutput m_OnHitMax;
    CEntityIOOutput m_OnChangedFromMin;
    CEntityIOOutput m_OnChangedFromMax;
};

class CLogicCase : public CLogicalEntity {
public:
    // CUtlSymbolLarge[32] m_nCase;
    char pad_018[256];
    int32_t m_nShuffleCases;
    int32_t m_nLastShuffleCase;
    uint8_t m_uchShuffleCaseMap[32];
    CEntityIOOutput m_OnCase;
    // CEntityOutputTemplate< CUtlString, char* > m_OnDefault;
    char pad_019[776];
};

class CLogicCompare : public CLogicalEntity {
public:
    float m_flInValue;
    float m_flCompareValue;
    // CEntityOutputTemplate< float32, float32 > m_OnLessThan;
    // CEntityOutputTemplate< float32, float32 > m_OnEqualTo;
    // CEntityOutputTemplate< float32, float32 > m_OnNotEqualTo;
    // CEntityOutputTemplate< float32, float32 > m_OnGreaterThan;
    char pad_018[128];
};

class CLogicAutosave : public CLogicalEntity {
public:
    bool m_bForceNewLevelUnit;
    int32_t m_minHitPoints;
    int32_t m_minHitPointsToCommit;
    char pad_018[4];
};

class CLogicActiveAutosave : public CLogicAutosave {
public:
    int32_t m_TriggerHitPoints;
    float m_flTimeToTrigger;
    GameTime_t m_flStartTime;
    float m_flDangerousTime;
};

class CLogicDistanceAutosave : public CLogicalEntity {
public:
    // CUtlSymbolLarge m_iszTargetEntity;
    char pad_018[8];
    float m_flDistanceToPlayer;
    bool m_bForceNewLevelUnit;
    bool m_bCheckCough;
    bool m_bThinkDangerous;
    float m_flDangerousTime;
    char pad_019[4];
};

class CLogicCollisionPair : public CLogicalEntity {
public:
    // CUtlSymbolLarge m_nameAttach1;
    // CUtlSymbolLarge m_nameAttach2;
    char pad_018[16];
    bool m_includeHierarchy;
    bool m_supportMultipleEntitiesWithSameName;
    bool m_disabled;
    bool m_succeeded;
    char pad_019[4];
};

class CLogicBranchList : public CLogicalEntity {
public:
    // CUtlSymbolLarge[16] m_nLogicBranchNames;
    // CUtlVector< CHandle< CBaseEntity > > m_LogicBranchList;
    char pad_018[152];
    CLogicBranchList::LogicBranchListenerLastState_t m_eLastState;
    CEntityIOOutput m_OnAllTrue;
    CEntityIOOutput m_OnAllFalse;
    CEntityIOOutput m_OnMixed;
};

class CLogicGameEvent : public CLogicalEntity {
public:
    // CUtlSymbolLarge m_iszEventName;
    char pad_018[1200];
};

class CMessageEntity : public CPointEntity {
public:
    int32_t m_radius;
    // CUtlSymbolLarge m_messageText;
    char pad_017[12];
    bool m_drawText;
    bool m_bDeveloperOnly;
    bool m_bEnabled;
    char pad_018[5];
};

class CTriggerBrush : public CBaseModelEntity {
public:
    CEntityIOOutput m_OnStartTouch;
    CEntityIOOutput m_OnEndTouch;
    CEntityIOOutput m_OnUse;
    int32_t m_iInputFilter;
    int32_t m_iDontMessageParent;
};

class CPathKeyFrame : public CLogicalEntity {
public:
    // Vector m_Origin;
    // QAngle m_Angles;
    // Quaternion m_qAngle;
    // CUtlSymbolLarge m_iNextKey;
    char pad_018[48];
    float m_flNextTime;
    CPathKeyFrame* m_pNextKey;
    CPathKeyFrame* m_pPrevKey;
    float m_flMoveSpeed;
    char pad_019[12];
};

class CBaseMoveBehavior : public CPathKeyFrame {
public:
    int32_t m_iPositionInterpolator;
    int32_t m_iRotationInterpolator;
    float m_flAnimStartTime;
    float m_flAnimEndTime;
    float m_flAverageSpeedAcrossFrame;
    CPathKeyFrame* m_pCurrentKeyFrame;
    CPathKeyFrame* m_pTargetKeyFrame;
    CPathKeyFrame* m_pPreKeyFrame;
    CPathKeyFrame* m_pPostKeyFrame;
    float m_flTimeIntoFrame;
    int32_t m_iDirection;
};

class CPathCorner : public CPointEntity {
public:
    float m_flWait;
    float m_flRadius;
    CEntityIOOutput m_OnPass;
};

class CPhysForce : public CPointEntity {
public:
    // CUtlSymbolLarge m_nameAttach;
    char pad_017[16];
    float m_force;
    float m_forceTime;
    // CHandle< CBaseEntity > m_attachedObject;
    char pad_018[4];
    bool m_wasRestored;
    CConstantForceController m_integrator;
};

class CPhysThruster : public CPhysForce {
public:
    // Vector m_localOrigin;
    char pad_019[1304];
};

class CPhysTorque : public CPhysForce {
public:
    // VectorWS m_axis;
    char pad_019[1304];
};

class CKeepUpright : public CPointEntity {
public:
    // Vector m_worldGoalAxis;
    // Vector m_localTestAxis;
    // CUtlSymbolLarge m_nameAttach;
    // CHandle< CBaseEntity > m_attachedObject;
    char pad_017[52];
    float m_angularLimit;
    bool m_bActive;
    bool m_bDampAllRotation;
    char pad_018[6];
};

class CPhysConstraint : public CLogicalEntity {
public:
    // CUtlSymbolLarge m_nameAttach1;
    // CUtlSymbolLarge m_nameAttach2;
    // CHandle< CBaseEntity > m_hAttach1;
    // CHandle< CBaseEntity > m_hAttach2;
    // CUtlSymbolLarge m_nameAttachment1;
    // CUtlSymbolLarge m_nameAttachment2;
    // CUtlSymbolLarge m_breakSound;
    char pad_018[56];
    float m_forceLimit;
    float m_torqueLimit;
    float m_minTeleportDistance;
    bool m_bSnapObjectPositions;
    bool m_bTreatEntity1AsInfiniteMass;
    CEntityIOOutput m_OnBreak;
};

class CPhysHinge : public CPhysConstraint {
public:
    ConstraintSoundInfo m_soundInfo;
    CEntityIOOutput m_NotifyMinLimitReached;
    CEntityIOOutput m_NotifyMaxLimitReached;
    bool m_bAtMinLimit;
    bool m_bAtMaxLimit;
    constraint_hingeparams_t m_hinge;
    float m_hingeFriction;
    float m_systemLoadScale;
    bool m_bIsAxisLocal;
    float m_flMinRotation;
    float m_flMaxRotation;
    float m_flInitialRotation;
    float m_flMotorFrequency;
    float m_flMotorDampingRatio;
    float m_flAngleSpeed;
    float m_flAngleSpeedThreshold;
    float m_flLimitsDebugVisRotation;
    CEntityIOOutput m_OnStartMoving;
    CEntityIOOutput m_OnStopMoving;
};

class CPhysHingeAlias_phys_hinge_local : public CPhysHinge {
public:
    char pad_019[1656];
};

class CPhysBallSocket : public CPhysConstraint {
public:
    float m_flJointFriction;
    bool m_bEnableSwingLimit;
    float m_flSwingLimit;
    bool m_bEnableTwistLimit;
    float m_flMinTwistAngle;
    float m_flMaxTwistAngle;
};

class CPhysSlideConstraint : public CPhysConstraint {
public:
    // VectorWS m_axisEnd;
    char pad_019[20];
    float m_slideFriction;
    float m_systemLoadScale;
    float m_initialOffset;
    bool m_bEnableLinearConstraint;
    bool m_bEnableAngularConstraint;
    float m_flMotorFrequency;
    float m_flMotorDampingRatio;
    bool m_bUseEntityPivot;
    ConstraintSoundInfo m_soundInfo;
};

class CPhysFixed : public CPhysConstraint {
public:
    float m_flLinearFrequency;
    float m_flLinearDampingRatio;
    float m_flAngularFrequency;
    float m_flAngularDampingRatio;
    bool m_bEnableLinearConstraint;
    bool m_bEnableAngularConstraint;
    // CUtlSymbolLarge m_sBoneName1;
    // CUtlSymbolLarge m_sBoneName2;
    char pad_019[22];
};

class CPhysPulley : public CPhysConstraint {
public:
    // VectorWS m_position2;
    // Vector[2] m_offset;
    char pad_019[36];
    float m_addLength;
    float m_gearRatio;
    char pad_020[4];
};

class CPhysLength : public CPhysConstraint {
public:
    // Vector[2] m_offset;
    // VectorWS m_vecAttach;
    char pad_019[36];
    float m_addLength;
    float m_minLength;
    float m_totalLength;
};

class CRagdollConstraint : public CPhysConstraint {
public:
    float m_xmin;
    float m_xmax;
    float m_ymin;
    float m_ymax;
    float m_zmin;
    float m_zmax;
    float m_xfriction;
    float m_yfriction;
    float m_zfriction;
    char pad_019[4];
};

class CGenericConstraint : public CPhysConstraint {
public:
    char pad_019[8];
    JointMotion_t m_nLinearMotionX;
    JointMotion_t m_nLinearMotionY;
    JointMotion_t m_nLinearMotionZ;
    float m_flLinearFrequencyX;
    float m_flLinearFrequencyY;
    float m_flLinearFrequencyZ;
    float m_flLinearDampingRatioX;
    float m_flLinearDampingRatioY;
    float m_flLinearDampingRatioZ;
    float m_flMaxLinearImpulseX;
    float m_flMaxLinearImpulseY;
    float m_flMaxLinearImpulseZ;
    float m_flBreakAfterTimeX;
    float m_flBreakAfterTimeY;
    float m_flBreakAfterTimeZ;
    GameTime_t m_flBreakAfterTimeStartTimeX;
    GameTime_t m_flBreakAfterTimeStartTimeY;
    GameTime_t m_flBreakAfterTimeStartTimeZ;
    float m_flBreakAfterTimeThresholdX;
    float m_flBreakAfterTimeThresholdY;
    float m_flBreakAfterTimeThresholdZ;
    float m_flNotifyForceX;
    float m_flNotifyForceY;
    float m_flNotifyForceZ;
    float m_flNotifyForceMinTimeX;
    float m_flNotifyForceMinTimeY;
    float m_flNotifyForceMinTimeZ;
    GameTime_t m_flNotifyForceLastTimeX;
    GameTime_t m_flNotifyForceLastTimeY;
    GameTime_t m_flNotifyForceLastTimeZ;
    bool m_bAxisNotifiedX;
    bool m_bAxisNotifiedY;
    bool m_bAxisNotifiedZ;
    JointMotion_t m_nAngularMotionX;
    JointMotion_t m_nAngularMotionY;
    JointMotion_t m_nAngularMotionZ;
    float m_flAngularFrequencyX;
    float m_flAngularFrequencyY;
    float m_flAngularFrequencyZ;
    float m_flAngularDampingRatioX;
    float m_flAngularDampingRatioY;
    float m_flAngularDampingRatioZ;
    float m_flMaxAngularImpulseX;
    float m_flMaxAngularImpulseY;
    float m_flMaxAngularImpulseZ;
    CEntityIOOutput m_NotifyForceReachedX;
    CEntityIOOutput m_NotifyForceReachedY;
    CEntityIOOutput m_NotifyForceReachedZ;
};

class CSplineConstraint : public CPhysConstraint {
public:
    // Vector m_vAnchorOffsetRestore;
    // CHandle< CBaseEntity > m_hSplineEntity;
    char pad_019[104];
    bool m_bEnableLateralConstraint;
    bool m_bEnableVerticalConstraint;
    bool m_bEnableAngularConstraint;
    bool m_bEnableLimit;
    bool m_bFireEventsOnPath;
    float m_flLinearFrequency;
    float m_flLinarDampingRatio;
    float m_flJointFriction;
    float m_flTransitionTime;
    // VectorWS m_vPreSolveAnchorPos;
    GameTime_t m_StartTransitionTime;
    // Vector m_vTangentSpaceAnchorAtTransitionStart;
    char pad_020[16];
};

class CPhysWheelConstraint : public CPhysConstraint {
public:
    float m_flSuspensionFrequency;
    float m_flSuspensionDampingRatio;
    float m_flSuspensionHeightOffset;
    bool m_bEnableSuspensionLimit;
    float m_flMinSuspensionOffset;
    float m_flMaxSuspensionOffset;
    bool m_bEnableSteeringLimit;
    float m_flMinSteeringAngle;
    float m_flMaxSteeringAngle;
    float m_flSteeringAxisFriction;
    float m_flSpinAxisFriction;
    // CHandle< CBaseEntity > m_hSteeringMimicsEntity;
    char pad_019[12];
};

class CPhysicsEntitySolver : public CLogicalEntity {
public:
    // CHandle< CBaseEntity > m_hMovingEntity;
    // CHandle< CBaseEntity > m_hPhysicsBlocker;
    char pad_018[32];
    float m_separationDuration;
    GameTime_t m_cancelTime;
};

class CPhysicsSpring : public CBaseEntity {
public:
    char pad_016[8];
    float m_flFrequency;
    float m_flDampingRatio;
    float m_flRestLength;
    // CUtlSymbolLarge m_nameAttachStart;
    // CUtlSymbolLarge m_nameAttachEnd;
    // VectorWS m_start;
    // VectorWS m_end;
    char pad_017[44];
    uint32_t m_teleportTick;
    char pad_018[4];
};

class CPointPush : public CPointEntity {
public:
    bool m_bEnabled;
    float m_flMagnitude;
    float m_flRadius;
    float m_flInnerRadius;
    float m_flConeOfInfluence;
    // CUtlSymbolLarge m_iszFilterName;
    // CHandle< CBaseFilter > m_hFilter;
    char pad_017[20];
};

class CInfoPlayerStart : public CPointEntity {
public:
    bool m_bDisabled;
    bool m_bIsMaster;
    // CGlobalSymbol m_pPawnSubclass;
    char pad_017[14];
};

class CPointEntityFinder : public CBaseEntity {
public:
    // CHandle< CBaseEntity > m_hEntity;
    // CUtlSymbolLarge m_iFilterName;
    // CHandle< CBaseFilter > m_hFilter;
    // CUtlSymbolLarge m_iRefName;
    // CHandle< CBaseEntity > m_hReference;
    char pad_016[36];
    EntFinderMethod_t m_FindMethod;
    CEntityIOOutput m_OnFoundEntity;
};

class CPointValueRemapper : public CBaseEntity {
public:
    bool m_bDisabled;
    bool m_bUpdateOnClient;
    ValueRemapperInputType_t m_nInputType;
    // CUtlSymbolLarge m_iszRemapLineStartName;
    // CUtlSymbolLarge m_iszRemapLineEndName;
    // CHandle< CBaseEntity > m_hRemapLineStart;
    // CHandle< CBaseEntity > m_hRemapLineEnd;
    char pad_016[24];
    float m_flMaximumChangePerSecond;
    float m_flDisengageDistance;
    float m_flEngageDistance;
    bool m_bRequiresUseKey;
    ValueRemapperOutputType_t m_nOutputType;
    // CUtlSymbolLarge m_iszOutputEntityName;
    // CUtlSymbolLarge m_iszOutputEntity2Name;
    // CUtlSymbolLarge m_iszOutputEntity3Name;
    // CUtlSymbolLarge m_iszOutputEntity4Name;
    // CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hOutputEntities;
    char pad_017[60];
    ValueRemapperHapticsType_t m_nHapticsType;
    ValueRemapperMomentumType_t m_nMomentumType;
    float m_flMomentumModifier;
    float m_flSnapValue;
    float m_flCurrentMomentum;
    ValueRemapperRatchetType_t m_nRatchetType;
    float m_flRatchetOffset;
    float m_flInputOffset;
    bool m_bEngaged;
    bool m_bFirstUpdate;
    float m_flPreviousValue;
    GameTime_t m_flPreviousUpdateTickTime;
    // Vector m_vecPreviousTestPoint;
    // CHandle< CBasePlayerPawn > m_hUsingPlayer;
    char pad_018[16];
    float m_flCustomOutputValue;
    // CUtlSymbolLarge m_iszSoundEngage;
    // CUtlSymbolLarge m_iszSoundDisengage;
    // CUtlSymbolLarge m_iszSoundReachedValueZero;
    // CUtlSymbolLarge m_iszSoundReachedValueOne;
    // CUtlSymbolLarge m_iszSoundMovingLoop;
    // CEntityOutputTemplate< float32, float32 > m_Position;
    // CEntityOutputTemplate< float32, float32 > m_PositionDelta;
    CEntityIOOutput m_OnReachedValueZero;
    CEntityIOOutput m_OnReachedValueOne;
    CEntityIOOutput m_OnReachedValueCustom;
    CEntityIOOutput m_OnEngage;
    CEntityIOOutput m_OnDisengage;
};

class CPointWorldText : public CModelPointEntity {
public:
    char m_messageText[512];
    char m_FontName[64];
    char m_BackgroundMaterialName[64];
    bool m_bEnabled;
    bool m_bFullbright;
    float m_flWorldUnitsPerPx;
    float m_flFontSize;
    float m_flDepthOffset;
    bool m_bDrawBackground;
    float m_flBackgroundBorderWidth;
    float m_flBackgroundBorderHeight;
    float m_flBackgroundWorldToUV;
    // Color m_Color;
    char pad_021[4];
    PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal;
    PointWorldTextJustifyVertical_t m_nJustifyVertical;
    PointWorldTextReorientMode_t m_nReorientMode;
};

class CPointAngleSensor : public CPointEntity {
public:
    bool m_bDisabled;
    // CUtlSymbolLarge m_nLookAtName;
    // CHandle< CBaseEntity > m_hTargetEntity;
    // CHandle< CBaseEntity > m_hLookAtEntity;
    char pad_017[20];
    float m_flDuration;
    float m_flDotTolerance;
    GameTime_t m_flFacingTime;
    bool m_bFired;
    CEntityIOOutput m_OnFacingLookat;
    CEntityIOOutput m_OnNotFacingLookat;
    // CEntityOutputTemplate< Vector, Vector > m_TargetDir;
    // CEntityOutputTemplate< float32, float32 > m_FacingPercentage;
    char pad_018[72];
};

class CPointProximitySensor : public CPointEntity {
public:
    bool m_bDisabled;
    // CHandle< CBaseEntity > m_hTargetEntity;
    // CEntityOutputTemplate< float32, float32 > m_Distance;
    char pad_017[39];
};

class CPointAngularVelocitySensor : public CPointEntity {
public:
    // CHandle< CBaseEntity > m_hTargetEntity;
    char pad_017[4];
    float m_flThreshold;
    int32_t m_nLastCompareResult;
    int32_t m_nLastFireResult;
    GameTime_t m_flFireTime;
    float m_flFireInterval;
    float m_flLastAngVelocity;
    // QAngle m_lastOrientation;
    // VectorWS m_vecAxis;
    char pad_018[24];
    bool m_bUseHelper;
    // CEntityOutputTemplate< float32, float32 > m_AngularVelocity;
    char pad_019[5];
    CEntityIOOutput m_OnLessThan;
    CEntityIOOutput m_OnLessThanOrEqualTo;
    CEntityIOOutput m_OnGreaterThan;
    CEntityIOOutput m_OnGreaterThanOrEqualTo;
    CEntityIOOutput m_OnEqualTo;
};

class CPointVelocitySensor : public CPointEntity {
public:
    // CHandle< CBaseEntity > m_hTargetEntity;
    // Vector m_vecAxis;
    char pad_017[16];
    bool m_bEnabled;
    float m_fPrevVelocity;
    float m_flAvgInterval;
    // CEntityOutputTemplate< float32, float32 > m_Velocity;
    char pad_018[36];
};

class CPointHurt : public CPointEntity {
public:
    int32_t m_nDamage;
    DamageTypes_t m_bitsDamageType;
    float m_flRadius;
    float m_flDelay;
    // CUtlSymbolLarge m_strTarget;
    // CHandle< CBaseEntity > m_pActivator;
    char pad_017[16];
};

class CPointTeleport : public CServerOnlyPointEntity {
public:
    // Vector m_vSaveOrigin;
    // QAngle m_vSaveAngles;
    char pad_018[24];
    bool m_bTeleportParentedEntities;
    bool m_bTeleportUseCurrentAngle;
    char pad_019[6];
};

class CEnableMotionFixup : public CBaseEntity {
public:
    char pad_016[1192];
};

class CFuncPropRespawnZone : public CBaseEntity {
public:
    char pad_016[1192];
};

class CRevertSaved : public CModelPointEntity {
public:
    float m_loadTime;
    float m_Duration;
    float m_HoldTime;
    char pad_021[4];
};

class CSceneListManager : public CLogicalEntity {
public:
    // CUtlVector< CHandle< CSceneListManager > > m_hListManagers;
    // CUtlSymbolLarge[16] m_iszScenes;
    // CHandle< CBaseEntity >[16] m_hScenes;
    char pad_018[1408];
};

class CSceneEntity : public CPointEntity {
public:
    // CUtlSymbolLarge m_iszSceneFile;
    // CUtlSymbolLarge m_iszTarget1;
    // CUtlSymbolLarge m_iszTarget2;
    // CUtlSymbolLarge m_iszTarget3;
    // CUtlSymbolLarge m_iszTarget4;
    // CUtlSymbolLarge m_iszTarget5;
    // CUtlSymbolLarge m_iszTarget6;
    // CUtlSymbolLarge m_iszTarget7;
    // CUtlSymbolLarge m_iszTarget8;
    // CHandle< CBaseEntity > m_hTarget1;
    // CHandle< CBaseEntity > m_hTarget2;
    // CHandle< CBaseEntity > m_hTarget3;
    // CHandle< CBaseEntity > m_hTarget4;
    // CHandle< CBaseEntity > m_hTarget5;
    // CHandle< CBaseEntity > m_hTarget6;
    // CHandle< CBaseEntity > m_hTarget7;
    // CHandle< CBaseEntity > m_hTarget8;
    // CUtlSymbolLarge m_sTargetAttachment;
    char pad_017[120];
    bool m_bIsPlayingBack;
    bool m_bPaused;
    bool m_bMultiplayer;
    bool m_bAutogenerated;
    float m_flForceClientTime;
    float m_flCurrentTime;
    float m_flFrameTime;
    bool m_bCancelAtNextInterrupt;
    float m_fPitch;
    bool m_bAutomated;
    int32_t m_nAutomatedAction;
    float m_flAutomationDelay;
    float m_flAutomationTime;
    int32_t m_nSpeechPriority;
    bool m_bPausedViaInput;
    bool m_bPauseAtNextInterrupt;
    bool m_bWaitingForActor;
    bool m_bWaitingForInterrupt;
    bool m_bInterruptedActorsScenes;
    bool m_bBreakOnNonIdle;
    bool m_bSceneFinished;
    // CNetworkUtlVectorBase< CHandle< CBaseFlex > > m_hActorList;
    // CUtlVector< CHandle< CBaseEntity > > m_hRemoveActorList;
    char pad_018[100];
    uint16_t m_nSceneStringIndex;
    CEntityIOOutput m_OnStart;
    CEntityIOOutput m_OnCompletion;
    CEntityIOOutput m_OnCanceled;
    CEntityIOOutput m_OnPaused;
    CEntityIOOutput m_OnResumed;
    // CHandle< CSceneEntity > m_hInterruptScene;
    char pad_019[148];
    int32_t m_nInterruptCount;
    bool m_bSceneMissing;
    bool m_bInterrupted;
    bool m_bCompletedEarly;
    bool m_bInterruptSceneFinished;
    bool m_bRestoring;
    // CUtlVector< CHandle< CSceneEntity > > m_hNotifySceneCompletion;
    // CUtlVector< CHandle< CSceneListManager > > m_hListManagers;
    // CUtlSymbolLarge m_iszSoundName;
    // CUtlSymbolLarge m_iszSequenceName;
    // CHandle< CBaseFlex > m_hActor;
    // CHandle< CBaseEntity > m_hActivator;
    char pad_020[72];
    int32_t m_BusyActor;
    SceneOnPlayerDeath_t m_iPlayerDeathBehavior;
    char pad_021[8];
};

class CSoundOpvarSetEntity : public CBaseEntity {
public:
    // CUtlSymbolLarge m_iszStackName;
    // CUtlSymbolLarge m_iszOperatorName;
    // CUtlSymbolLarge m_iszOpvarName;
    char pad_016[48];
    int32_t m_nOpvarType;
    int32_t m_nOpvarIndex;
    float m_flOpvarValue;
    // CUtlSymbolLarge m_OpvarValueString;
    char pad_017[12];
    bool m_bSetOnSpawn;
    char pad_018[15];
};

class CCitadelSoundOpvarSetOBB : public CBaseEntity {
public:
    // CUtlSymbolLarge m_iszStackName;
    // CUtlSymbolLarge m_iszOperatorName;
    // CUtlSymbolLarge m_iszOpvarName;
    // Vector m_vDistanceInnerMins;
    // Vector m_vDistanceInnerMaxs;
    // Vector m_vDistanceOuterMins;
    // Vector m_vDistanceOuterMaxs;
    char pad_016[72];
    int32_t m_nAABBDirection;
    char pad_017[4];
};

class CNullEntity : public CBaseEntity {
public:
    char pad_016[1192];
};

class CBaseDMStart : public CPointEntity {
public:
    // CUtlSymbolLarge m_Master;
    char pad_017[1200];
};

class CInfoLandmark : public CPointEntity {
public:
    char pad_017[1192];
};

class CTankTargetChange : public CPointEntity {
public:
    // CVariantBase< CVariantDefaultAllocator > m_newTarget;
    // CUtlSymbolLarge m_newTargetName;
    char pad_017[1216];
};

class CFuncTrackTrain : public CBaseModelEntity {
public:
    // CHandle< CPathTrack > m_ppath;
    char pad_020[4];
    float m_length;
    // Vector m_vPosPrev;
    // QAngle m_angPrev;
    // Vector m_controlMins;
    // Vector m_controlMaxs;
    // Vector m_lastBlockPos;
    char pad_021[60];
    int32_t m_lastBlockTick;
    float m_flVolume;
    float m_flBank;
    float m_oldSpeed;
    float m_flBlockDamage;
    float m_height;
    float m_maxSpeed;
    float m_dir;
    // CUtlSymbolLarge m_iszSoundMove;
    // CUtlSymbolLarge m_iszSoundMovePing;
    // CUtlSymbolLarge m_iszSoundStart;
    // CUtlSymbolLarge m_iszSoundStop;
    // CUtlSymbolLarge m_strPathTarget;
    char pad_022[44];
    float m_flMoveSoundMinDuration;
    float m_flMoveSoundMaxDuration;
    GameTime_t m_flNextMoveSoundTime;
    float m_flMoveSoundMinPitch;
    float m_flMoveSoundMaxPitch;
    TrainOrientationType_t m_eOrientationType;
    TrainVelocityType_t m_eVelocityType;
    CEntityIOOutput m_OnStart;
    CEntityIOOutput m_OnNext;
    CEntityIOOutput m_OnArrivedAtDestinationNode;
    bool m_bManualSpeedChanges;
    float m_flDesiredSpeed;
    GameTime_t m_flSpeedChangeTime;
    float m_flAccelSpeed;
    float m_flDecelSpeed;
    bool m_bAccelToSpeed;
    GameTime_t m_flNextMPSoundTime;
    char pad_023[4];
};

class CTankTrainAI : public CPointEntity {
public:
    // CHandle< CFuncTrackTrain > m_hTrain;
    // CHandle< CBaseEntity > m_hTargetEntity;
    char pad_017[8];
    int32_t m_soundPlaying;
    // CUtlSymbolLarge m_startSoundName;
    // CUtlSymbolLarge m_engineSoundName;
    // CUtlSymbolLarge m_movementSoundName;
    // CUtlSymbolLarge m_targetEntityName;
    char pad_018[52];
};

class CHandleTest : public CBaseEntity {
public:
    // CHandle< CBaseEntity > m_Handle;
    char pad_016[4];
    bool m_bSendHandle;
    char pad_017[3];
};

class CHandleDummy : public CBaseEntity {
public:
    char pad_016[1192];
};

class CBasePlatTrain : public CBaseToggle {
public:
    // CUtlSymbolLarge m_NoiseMoving;
    // CUtlSymbolLarge m_NoiseArrived;
    char pad_023[24];
    float m_volume;
    float m_flTWidth;
    float m_flTLength;
    char pad_024[4];
};

class CFuncPlat : public CBasePlatTrain {
public:
    // CUtlSymbolLarge m_sNoise;
    char pad_025[2016];
};

class CPlatTrigger : public CBaseModelEntity {
public:
    // CHandle< CFuncPlat > m_pPlatform;
    char pad_020[1848];
};

class CFuncTrainControls : public CBaseModelEntity {
public:
    char pad_020[1840];
};

class CTriggerVolume : public CBaseModelEntity {
public:
    // CUtlSymbolLarge m_iFilterName;
    // CHandle< CBaseFilter > m_hFilter;
    char pad_020[1856];
};

class CInfoTeleportDestination : public CPointEntity {
public:
    char pad_017[1192];
};

class CAI_ChangeHintGroup : public CBaseEntity {
public:
    int32_t m_iSearchType;
    // CUtlSymbolLarge m_strSearchName;
    // CUtlSymbolLarge m_strNewHintGroup;
    char pad_016[20];
    float m_flRadius;
    char pad_017[4];
};

class CLogicProximity : public CPointEntity {
public:
    char pad_017[1192];
};

class CInfoSpawnGroupLandmark : public CPointEntity {
public:
    char pad_017[1192];
};

class CInfoSpawnGroupLoadUnload : public CLogicalEntity {
public:
    CEntityIOOutput m_OnSpawnGroupLoadStarted;
    CEntityIOOutput m_OnSpawnGroupLoadFinished;
    CEntityIOOutput m_OnSpawnGroupUnloadStarted;
    CEntityIOOutput m_OnSpawnGroupUnloadFinished;
    // CUtlSymbolLarge m_iszSpawnGroupName;
    // CUtlSymbolLarge m_iszSpawnGroupFilterName;
    // CUtlSymbolLarge m_iszLandmarkName;
    // CUtlString m_sFixedSpawnGroupName;
    char pad_018[32];
    float m_flTimeoutInterval;
    bool m_bAutoActivate;
    bool m_bUnloadingStarted;
    bool m_bQueueActiveSpawnGroupChange;
    bool m_bQueueFinishLoading;
    char pad_019[80];
};

class CPointPulse : public CBaseEntity {
public:
    char pad_016[1192];
};

class CFuncNavObstruction : public CBaseModelEntity {
public:
    char pad_020[24];
    bool m_bDisabled;
    bool m_bUseAsyncObstacleUpdate;
    char pad_021[6];
};

class CAmbientGeneric : public CPointEntity {
public:
    float m_radius;
    float m_flMaxRadius;
    soundlevel_t m_iSoundLevel;
    dynpitchvol_t m_dpv;
    bool m_fActive;
    bool m_fLooping;
    // CUtlSymbolLarge m_iszSound;
    // CUtlSymbolLarge m_sSourceEntName;
    // CHandle< CBaseEntity > m_hSoundSource;
    // CEntityIndex m_nSoundSourceEntIndex;
    char pad_017[54];
};

class RelationshipOverride_t : public Relationship_t {
public:
    // CHandle< CBaseEntity > entity;
    char pad_00[4];
    Class_T classType;
};

class CBaseButton : public CBaseToggle {
public:
    // QAngle m_angMoveEntitySpace;
    char pad_023[12];
    bool m_fStayPushed;
    bool m_fRotating;
    locksound_t m_ls;
    // CUtlSymbolLarge m_sUseSound;
    // CUtlSymbolLarge m_sLockedSound;
    // CUtlSymbolLarge m_sUnlockedSound;
    // CUtlSymbolLarge m_sOverrideAnticipationName;
    char pad_024[32];
    bool m_bLocked;
    bool m_bDisabled;
    GameTime_t m_flUseLockedTime;
    bool m_bSolidBsp;
    CEntityIOOutput m_OnDamaged;
    CEntityIOOutput m_OnPressed;
    CEntityIOOutput m_OnUseLocked;
    CEntityIOOutput m_OnIn;
    CEntityIOOutput m_OnOut;
    int32_t m_nState;
    // CEntityHandle m_hConstraint;
    // CEntityHandle m_hConstraintParent;
    char pad_025[8];
    bool m_bForceNpcExclude;
    // CUtlSymbolLarge m_sGlowEntity;
    // CHandle< CBaseModelEntity > m_glowEntity;
    char pad_026[15];
    bool m_usable;
    // CUtlSymbolLarge m_szDisplayText;
    char pad_027[11];
};

class CPhysicalButton : public CBaseButton {
public:
    char pad_028[2224];
};

class CRotButton : public CBaseButton {
public:
    char pad_028[2224];
};

class CMomentaryRotButton : public CRotButton {
public:
    // CEntityOutputTemplate< float32, float32 > m_Position;
    CEntityIOOutput m_OnUnpressed;
    CEntityIOOutput m_OnFullyOpen;
    CEntityIOOutput m_OnFullyClosed;
    CEntityIOOutput m_OnReachedPosition;
    int32_t m_lastUsed;
    // QAngle m_start;
    // QAngle m_end;
    char pad_029[24];
    float m_IdealYaw;
    // CUtlSymbolLarge m_sNoise;
    char pad_030[8];
    bool m_bUpdateTarget;
    int32_t m_direction;
    float m_returnSpeed;
    float m_flStartPosition;
};

class CRagdollMagnet : public CPointEntity {
public:
    bool m_bDisabled;
    float m_radius;
    float m_force;
    // VectorWS m_axis;
    char pad_017[12];
};

class CBaseDoor : public CBaseToggle {
public:
    // QAngle m_angMoveEntitySpace;
    // Vector m_vecMoveDirParentSpace;
    locksound_t m_ls;
    bool m_bForceClosed;
    bool m_bDoorGroup;
    bool m_bLocked;
    bool m_bIgnoreDebris;
    bool m_bNoNPCs;
    FuncDoorSpawnPos_t m_eSpawnPosition;
    float m_flBlockDamage;
    // CUtlSymbolLarge m_NoiseMoving;
    // CUtlSymbolLarge m_NoiseArrived;
    // CUtlSymbolLarge m_NoiseMovingClosed;
    // CUtlSymbolLarge m_NoiseArrivedClosed;
    // CUtlSymbolLarge m_ChainTarget;
    CEntityIOOutput m_OnBlockedClosing;
    CEntityIOOutput m_OnBlockedOpening;
    CEntityIOOutput m_OnUnblockedClosing;
    CEntityIOOutput m_OnUnblockedOpening;
    CEntityIOOutput m_OnFullyClosed;
    CEntityIOOutput m_OnFullyOpen;
    CEntityIOOutput m_OnClose;
    CEntityIOOutput m_OnOpen;
    CEntityIOOutput m_OnLockedUse;
    bool m_bLoopMoveSound;
    char pad_023[31];
    bool m_bCreateNavObstacle;
    bool m_isChaining;
    bool m_bIsUsable;
    char pad_024[5];
};

class CEntityBlocker : public CBaseModelEntity {
public:
    char pad_020[1840];
};

class CEntityDissolve : public CBaseModelEntity {
public:
    float m_flFadeInStart;
    float m_flFadeInLength;
    float m_flFadeOutModelStart;
    float m_flFadeOutModelLength;
    float m_flFadeOutStart;
    float m_flFadeOutLength;
    GameTime_t m_flStartTime;
    EntityDisolveType_t m_nDissolveType;
    // Vector m_vDissolverOrigin;
    char pad_020[12];
    uint32_t m_nMagnitude;
};

class CEnvDecal : public CBaseModelEntity {
public:
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial;
    char pad_020[8];
    float m_flWidth;
    float m_flHeight;
    float m_flDepth;
    uint32_t m_nRenderOrder;
    bool m_bProjectOnWorld;
    bool m_bProjectOnCharacters;
    bool m_bProjectOnWater;
    float m_flDepthSortBias;
};

class CMessage : public CPointEntity {
public:
    // CUtlSymbolLarge m_iszMessage;
    char pad_017[8];
    float m_MessageVolume;
    int32_t m_MessageAttenuation;
    float m_Radius;
    // CUtlSymbolLarge m_sNoise;
    CEntityIOOutput m_OnShowMessage;
};

class CBreakable : public CBaseModelEntity {
public:
    CPropDataComponent m_CPropDataComponent;
    Materials m_Material;
    // CHandle< CBaseEntity > m_hBreaker;
    char pad_020[4];
    Explosions m_Explosion;
    // CUtlSymbolLarge m_iszSpawnObject;
    char pad_021[12];
    float m_flPressureDelay;
    int32_t m_iMinHealthDmg;
    // CUtlSymbolLarge m_iszPropData;
    char pad_022[8];
    float m_impactEnergyScale;
    EOverrideBlockLOS_t m_nOverrideBlockLOS;
    CEntityIOOutput m_OnStartDeath;
    CEntityIOOutput m_OnBreak;
    // CEntityOutputTemplate< float32, float32 > m_OnHealthChanged;
    char pad_023[32];
    PerformanceMode_t m_PerformanceMode;
    // CHandle< CBasePlayerPawn > m_hPhysicsAttacker;
    GameTime_t m_flLastPhysicsInfluenceTime;
    char pad_024[4];
};

class CFuncMoveLinear : public CBaseToggle {
public:
    MoveLinearAuthoredPos_t m_authoredPosition;
    // QAngle m_angMoveEntitySpace;
    // Vector m_vecMoveDirParentSpace;
    // CUtlSymbolLarge m_soundStart;
    // CUtlSymbolLarge m_soundStop;
    // CUtlSymbolLarge m_currentSound;
    char pad_023[52];
    float m_flBlockDamage;
    float m_flStartPosition;
    CEntityIOOutput m_OnFullyOpen;
    CEntityIOOutput m_OnFullyClosed;
    bool m_bCreateMovableNavMesh;
    bool m_bAllowMovableNavMeshDockingOnEntireEntity;
    bool m_bCreateNavObstacle;
    char pad_024[13];
};

class CMoverPathNode : public CPathNode {
public:
    // CEntityOutputTemplate< CUtlString, char* > m_OnStartFromOrInSegment;
    // CEntityOutputTemplate< CUtlString, char* > m_OnStoppedAtOrInSegment;
    // CEntityOutputTemplate< CUtlString, char* > m_OnPassThrough;
    // CEntityOutputTemplate< CUtlString, char* > m_OnPassThroughForward;
    // CEntityOutputTemplate< CUtlString, char* > m_OnPassThroughReverse;
    char pad_018[1440];
};

class CRotatorTarget : public CPointEntity {
public:
    CEntityIOOutput m_OnArrivedAt;
    RotatorTargetSpace_t m_eSpace;
    char pad_017[4];
};

class CFuncRotator : public CBaseModelEntity {
public:
    // CHandle< CBaseEntity > m_hRotatorTarget;
    char pad_020[4];
    bool m_bIsRotating;
    bool m_bIsReversing;
    float m_flTimeToReachMaxSpeed;
    float m_flTimeToReachZeroSpeed;
    float m_flDistanceAlongArcTraveled;
    float m_flTimeToWaitOscillate;
    GameTime_t m_flTimeRotationStart;
    // Quaternion m_qLSPrevChange;
    // Quaternion m_qWSPrev;
    // Quaternion m_qWSInit;
    // Quaternion m_qLSInit;
    // Quaternion m_qLSOrientation;
    CEntityIOOutput m_OnRotationStarted;
    CEntityIOOutput m_OnRotationCompleted;
    CEntityIOOutput m_OnOscillate;
    CEntityIOOutput m_OnOscillateStartArrive;
    CEntityIOOutput m_OnOscillateStartDepart;
    CEntityIOOutput m_OnOscillateEndArrive;
    CEntityIOOutput m_OnOscillateEndDepart;
    bool m_bOscillateDepart;
    int32_t m_nOscillateCount;
    CFuncRotator::Rotate_t m_eRotateType;
    CFuncRotator::Rotate_t m_ePrevRotateType;
    bool m_bHasTargetOverride;
    // Quaternion m_qOrientationOverride;
    char pad_021[20];
    RotatorTargetSpace_t m_eSpaceOverride;
    // QAngle m_qAngularVelocity;
    // Vector m_vLookAtForcedUp;
    // CUtlSymbolLarge m_strRotatorTarget;
    char pad_022[36];
    bool m_bRecordHistory;
    // CUtlVector< RotatorHistoryEntry_t > m_vecRotatorHistory;
    char pad_023[31];
    bool m_bReturningToPreviousOrientation;
    // CUtlVector< RotatorQueueEntry_t > m_vecRotatorQueue;
    // CUtlVector< RotatorHistoryEntry_t > m_vecRotatorQueueHistory;
    char pad_024[55];
    SolidType_t m_eSolidType;
    // CHandle< CFuncMover > m_hSpeedFromMover;
    // CUtlSymbolLarge m_iszSpeedFromMover;
    char pad_025[12];
    float m_flSpeedScale;
    float m_flMinYawRotation;
    float m_flMaxYawRotation;
    char pad_026[4];
};

class CFuncRotating : public CBaseModelEntity {
public:
    CEntityIOOutput m_OnStopped;
    CEntityIOOutput m_OnStarted;
    CEntityIOOutput m_OnReachedStart;
    // RotationVector m_localRotationVector;
    char pad_020[12];
    float m_flFanFriction;
    float m_flAttenuation;
    float m_flVolume;
    float m_flTargetSpeed;
    float m_flMaxSpeed;
    float m_flBlockDamage;
    // CUtlSymbolLarge m_NoiseRunning;
    char pad_021[12];
    bool m_bReversed;
    bool m_bAccelDecel;
    // QAngle m_prevLocalAngles;
    // QAngle m_angStart;
    char pad_022[46];
    bool m_bStopAtStartPos;
    // Vector m_vecClientOrigin;
    // QAngle m_vecClientAngles;
    char pad_023[31];
};

class CItem : public CBaseAnimGraph {
public:
    CEntityIOOutput m_OnPlayerTouch;
    CEntityIOOutput m_OnPlayerPickup;
    bool m_bActivateWhenAtRest;
    CEntityIOOutput m_OnCacheInteraction;
    CEntityIOOutput m_OnGlovePulled;
    // VectorWS m_vOriginalSpawnOrigin;
    // QAngle m_vOriginalSpawnAngles;
    char pad_024[24];
    bool m_bPhysStartAsleep;
    char pad_025[23];
};

class CItemGeneric : public CItem {
public:
    char pad_026[20];
    bool m_bHasTriggerRadius;
    bool m_bHasPickupRadius;
    float m_flPickupRadiusSqr;
    float m_flTriggerRadiusSqr;
    GameTime_t m_flLastPickupCheck;
    bool m_bPlayerCounterListenerAdded;
    bool m_bPlayerInTriggerRadius;
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hSpawnParticleEffect;
    // CUtlSymbolLarge m_pAmbientSoundEffect;
    char pad_027[18];
    bool m_bAutoStartAmbientSound;
    // CUtlSymbolLarge m_pSpawnScriptFunction;
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hPickupParticleEffect;
    // CUtlSymbolLarge m_pPickupSoundEffect;
    // CUtlSymbolLarge m_pPickupScriptFunction;
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hTimeoutParticleEffect;
    // CUtlSymbolLarge m_pTimeoutSoundEffect;
    // CUtlSymbolLarge m_pTimeoutScriptFunction;
    // CUtlSymbolLarge m_pPickupFilterName;
    // CHandle< CBaseFilter > m_hPickupFilter;
    CEntityIOOutput m_OnPickup;
    CEntityIOOutput m_OnTimeout;
    CEntityIOOutput m_OnTriggerStartTouch;
    CEntityIOOutput m_OnTriggerTouch;
    CEntityIOOutput m_OnTriggerEndTouch;
    // CUtlSymbolLarge m_pAllowPickupScriptFunction;
    char pad_028[8];
    float m_flPickupRadius;
    float m_flTriggerRadius;
    // CUtlSymbolLarge m_pTriggerSoundEffect;
    char pad_029[8];
    bool m_bGlowWhenInTrigger;
    // Color m_glowColor;
    char pad_030[4];
    bool m_bUseable;
    // CHandle< CItemGenericTriggerHelper > m_hTriggerHelper;
    char pad_031[18];
};

class CItemGenericTriggerHelper : public CBaseModelEntity {
public:
    // CHandle< CItemGeneric > m_hParentItem;
    char pad_020[1848];
};

class CRuleEntity : public CBaseModelEntity {
public:
    // CUtlSymbolLarge m_iszMaster;
    char pad_020[1848];
};

class CRulePointEntity : public CRuleEntity {
public:
    int32_t m_Score;
    char pad_021[4];
};

class CGamePlayerEquip : public CRulePointEntity {
public:
    char pad_022[1880];
};

class CMarkupVolume : public CBaseModelEntity {
public:
    bool m_bDisabled;
    char pad_020[7];
};

class CMarkupVolumeTagged : public CMarkupVolume {
public:
    // CUtlVector< CGlobalSymbol > m_GroupNames;
    // CUtlVector< CGlobalSymbol > m_Tags;
    char pad_021[48];
    bool m_bIsGroup;
    bool m_bGroupByPrefab;
    bool m_bGroupByVolume;
    bool m_bGroupOtherGroups;
    bool m_bIsInGroup;
    char pad_022[3];
};

class CMarkupVolumeWithRef : public CMarkupVolumeTagged {
public:
    char pad_023[8];
    bool m_bUseRef;
    // Vector m_vRefPosEntitySpace;
    // VectorWS m_vRefPosWorldSpace;
    char pad_024[24];
    float m_flRefDot;
};

class CFuncBrush : public CBaseModelEntity {
public:
    BrushSolidities_e m_iSolidity;
    int32_t m_iDisabled;
    bool m_bSolidBsp;
    // CUtlSymbolLarge m_iszExcludedClass;
    char pad_020[15];
    bool m_bInvertExclusion;
    bool m_bScriptedMovement;
    char pad_021[6];
};

class CPathTrack : public CPointEntity {
public:
    CPathTrack* m_pnext;
    CPathTrack* m_pprevious;
    CPathTrack* m_paltpath;
    float m_flRadius;
    float m_length;
    // CUtlSymbolLarge m_altName;
    char pad_017[8];
    int32_t m_nIterVal;
    TrackOrientationType_t m_eOrientationType;
    CEntityIOOutput m_OnPass;
};

class CPhysBox : public CBreakable {
public:
    int32_t m_damageType;
    int32_t m_damageToEnableMotion;
    float m_flForceToEnableMotion;
    // Vector m_vHoverPosePosition;
    // QAngle m_angHoverPoseAngles;
    char pad_025[24];
    bool m_bNotSolidToWorld;
    bool m_bEnableUseOutput;
    HoverPoseFlags_t m_nHoverPoseFlags;
    float m_flTouchOutputPerEntityDelay;
    CEntityIOOutput m_OnDamaged;
    CEntityIOOutput m_OnAwakened;
    CEntityIOOutput m_OnMotionEnabled;
    CEntityIOOutput m_OnPlayerUse;
    CEntityIOOutput m_OnStartTouch;
    // CHandle< CBasePlayerPawn > m_hCarryingPlayer;
    char pad_026[32];
};

class CPhysExplosion : public CPointEntity {
public:
    bool m_bExplodeOnSpawn;
    float m_flMagnitude;
    float m_flDamage;
    float m_radius;
    // CUtlSymbolLarge m_targetEntityName;
    char pad_017[8];
    float m_flInnerRadius;
    float m_flPushScale;
    bool m_bConvertToDebrisWhenPossible;
    bool m_bAffectInvulnerableEnts;
    CEntityIOOutput m_OnPushedPlayer;
};

class CPhysImpact : public CPointEntity {
public:
    float m_damage;
    float m_distance;
    // CUtlSymbolLarge m_directionEntityName;
    char pad_017[8];
};

class CRopeKeyframe : public CBaseModelEntity {
public:
    char pad_020[8];
    uint16_t m_RopeFlags;
    // CUtlSymbolLarge m_iNextLinkName;
    char pad_021[14];
    int16_t m_Slack;
    float m_Width;
    float m_TextureScale;
    uint8_t m_nSegments;
    bool m_bConstrainBetweenEndpoints;
    // CUtlSymbolLarge m_strRopeMaterialModel;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex;
    char pad_022[18];
    uint8_t m_Subdiv;
    uint8_t m_nChangeCount;
    int16_t m_RopeLength;
    uint8_t m_fLockedPoints;
    bool m_bCreatedFromMapFile;
    float m_flScrollSpeed;
    bool m_bStartPointValid;
    bool m_bEndPointValid;
    // CHandle< CBaseEntity > m_hStartPoint;
    // CHandle< CBaseEntity > m_hEndPoint;
    AttachmentHandle_t m_iStartAttachment;
    AttachmentHandle_t m_iEndAttachment;
    char pad_023[6];
};

class CSpotlightEnd : public CBaseModelEntity {
public:
    float m_flLightScale;
    float m_Radius;
    // Vector m_vSpotlightDir;
    // VectorWS m_vSpotlightOrg;
    char pad_020[24];
};

class CNavWalkable : public CPointEntity {
public:
    char pad_017[1192];
};

class CFuncNavBlocker : public CBaseModelEntity {
public:
    char pad_020[8];
    bool m_bDisabled;
    int32_t m_nBlockedTeamNumber;
    char pad_021[8];
};

class CNavSpaceInfo : public CPointEntity {
public:
    char pad_017[1192];
};

class CFuncLadder : public CBaseModelEntity {
public:
    // Vector m_vecLadderDir;
    // CUtlVector< CHandle< CInfoLadderDismount > > m_Dismounts;
    // Vector m_vecLocalTop;
    // VectorWS m_vecPlayerMountPositionTop;
    // VectorWS m_vecPlayerMountPositionBottom;
    char pad_020[76];
    float m_flAutoRideSpeed;
    bool m_bDisabled;
    bool m_bFakeLadder;
    bool m_bHasSlack;
    // CUtlSymbolLarge m_surfacePropName;
    CEntityIOOutput m_OnPlayerGotOnLadder;
    CEntityIOOutput m_OnPlayerGotOffLadder;
};

class CPrecipitationVData {
public:
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szParticlePrecipitationEffect;
    char pad_00[264];
    float m_flInnerDistance;
    ParticleAttachment_t m_nAttachType;
    bool m_bBatchSameVolumeType;
    int32_t m_nRTEnvCP;
    int32_t m_nRTEnvCPComponent;
    // CUtlString m_szModifier;
    char pad_01[12];
};

class CSprite : public CBaseModelEntity {
public:
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial;
    // CHandle< CBaseEntity > m_hAttachedToEntity;
    AttachmentHandle_t m_nAttachment;
    float m_flSpriteFramerate;
    float m_flFrame;
    GameTime_t m_flDieTime;
    char pad_020[12];
    uint32_t m_nBrightness;
    float m_flBrightnessDuration;
    float m_flSpriteScale;
    float m_flScaleDuration;
    bool m_bWorldSpaceScale;
    float m_flGlowProxySize;
    float m_flHDRColorScale;
    GameTime_t m_flLastTime;
    float m_flMaxFrame;
    float m_flStartScale;
    float m_flDestScale;
    GameTime_t m_flScaleTimeStart;
    int32_t m_nStartBrightness;
    int32_t m_nDestBrightness;
    GameTime_t m_flBrightnessTimeStart;
    int32_t m_nSpriteWidth;
    int32_t m_nSpriteHeight;
    char pad_021[4];
};

class CSpriteOriented : public CSprite {
public:
    char pad_022[1952];
};

class CBaseClientUIEntity : public CBaseModelEntity {
public:
    bool m_bEnabled;
    // CUtlSymbolLarge m_DialogXMLName;
    // CUtlSymbolLarge m_PanelClassName;
    // CUtlSymbolLarge m_PanelID;
    // CEntityOutputTemplate< CUtlString, char* > m_CustomOutput0;
    // CEntityOutputTemplate< CUtlString, char* > m_CustomOutput1;
    // CEntityOutputTemplate< CUtlString, char* > m_CustomOutput2;
    // CEntityOutputTemplate< CUtlString, char* > m_CustomOutput3;
    // CEntityOutputTemplate< CUtlString, char* > m_CustomOutput4;
    // CEntityOutputTemplate< CUtlString, char* > m_CustomOutput5;
    // CEntityOutputTemplate< CUtlString, char* > m_CustomOutput6;
    // CEntityOutputTemplate< CUtlString, char* > m_CustomOutput7;
    // CEntityOutputTemplate< CUtlString, char* > m_CustomOutput8;
    // CEntityOutputTemplate< CUtlString, char* > m_CustomOutput9;
    char pad_020[351];
};

class CPointClientUIDialog : public CBaseClientUIEntity {
public:
    // CHandle< CBaseEntity > m_hActivator;
    char pad_021[4];
    bool m_bStartEnabled;
    char pad_022[3];
};

class CPointClientUIWorldPanel : public CBaseClientUIEntity {
public:
    bool m_bIgnoreInput;
    bool m_bLit;
    bool m_bFollowPlayerAcrossTeleport;
    float m_flWidth;
    float m_flHeight;
    float m_flDPI;
    float m_flInteractDistance;
    float m_flDepthOffset;
    uint32_t m_unOwnerContext;
    uint32_t m_unHorizontalAlign;
    uint32_t m_unVerticalAlign;
    uint32_t m_unOrientation;
    bool m_bAllowInteractionFromAllSceneWorlds;
    // CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses;
    char pad_021[31];
    bool m_bOpaque;
    bool m_bNoDepth;
    bool m_bVisibleWhenParentNoDraw;
    bool m_bRenderBackface;
    bool m_bUseOffScreenIndicator;
    bool m_bExcludeFromSaveGames;
    bool m_bGrabbable;
    bool m_bOnlyRenderToTexture;
    bool m_bDisableMipGen;
    int32_t m_nExplicitImageLayout;
};

class CPointClientUIWorldTextPanel : public CPointClientUIWorldPanel {
public:
    char m_messageText[512];
};

class CInfoOffscreenPanoramaTexture : public CPointEntity {
public:
    bool m_bDisabled;
    int32_t m_nResolutionX;
    int32_t m_nResolutionY;
    // CUtlSymbolLarge m_szPanelType;
    // CUtlSymbolLarge m_szLayoutFileName;
    // CUtlSymbolLarge m_RenderAttrName;
    // CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_TargetEntities;
    char pad_017[52];
    int32_t m_nTargetChangeCount;
    // CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses;
    // CUtlSymbolLarge m_szTargetsName;
    // CUtlVector< CHandle< CBaseModelEntity > > m_AdditionalTargetEntities;
    char pad_018[60];
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

class CNmSnapWeaponNode::CDefinition {
public:
    char pad_00[24];
    int16_t m_nEnabledNodeIdx;
    int16_t m_nLockLeftHandNodeIdx;
    float m_flBlendTimeSeconds;
};

class CInfoPlayerTerrorist : public SpawnPoint {
public:
    char pad_019[1208];
};

class CInfoPlayerCounterterrorist : public SpawnPoint {
public:
    char pad_019[1208];
};

class CInfoDeathmatchSpawn : public SpawnPoint {
public:
    char pad_019[1208];
};

class CPointGiveAmmo : public CPointEntity {
public:
    // CHandle< CBaseEntity > m_pActivator;
    char pad_017[1200];
};

class CInfoInstructorHintBombTargetA : public CPointEntity {
public:
    char pad_017[1192];
};

class CInfoInstructorHintBombTargetB : public CPointEntity {
public:
    char pad_017[1192];
};

class CInfoInstructorHintHostageRescueZone : public CPointEntity {
public:
    char pad_017[1192];
};

class CFuncWater : public CBaseModelEntity {
public:
    CBuoyancyHelper m_BuoyancyHelper;
};

class CCSSprite : public CSprite {
public:
    char pad_022[1952];
};

class CCSObserverPawn : public CCSPlayerPawnBase {
public:
    char pad_033[3744];
};

class CCSWeaponBaseVData {
public:
    char pad_00[1088];
    CSWeaponType m_WeaponType;
    CSWeaponCategory m_WeaponCategory;
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCNmSkeleton > > m_szAnimSkeleton;
    // Vector m_vecMuzzlePos0;
    // Vector m_vecMuzzlePos1;
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szTracerParticle;
    char pad_01[472];
    gear_slot_t m_GearSlot;
    int32_t m_GearSlotPosition;
    loadout_slot_t m_DefaultLoadoutSlot;
    int32_t m_nPrice;
    int32_t m_nKillAward;
    int32_t m_nPrimaryReserveAmmoMax;
    int32_t m_nSecondaryReserveAmmoMax;
    bool m_bMeleeWeapon;
    bool m_bHasBurstMode;
    bool m_bIsRevolver;
    bool m_bCannotShootUnderwater;
    // CGlobalSymbol m_szName;
    char pad_02[8];
    CSWeaponSilencerType m_eSilencerType;
    int32_t m_nCrosshairMinDistance;
    int32_t m_nCrosshairDeltaDistance;
    bool m_bIsFullAuto;
    int32_t m_nNumBullets;
    bool m_bReloadsSingleShells;
    CFiringModeFloat m_flCycleTime;
    CFiringModeFloat m_flMaxSpeed;
    CFiringModeFloat m_flSpread;
    CFiringModeFloat m_flInaccuracyCrouch;
    CFiringModeFloat m_flInaccuracyStand;
    CFiringModeFloat m_flInaccuracyJump;
    CFiringModeFloat m_flInaccuracyLand;
    CFiringModeFloat m_flInaccuracyLadder;
    CFiringModeFloat m_flInaccuracyFire;
    CFiringModeFloat m_flInaccuracyMove;
    CFiringModeFloat m_flRecoilAngle;
    CFiringModeFloat m_flRecoilAngleVariance;
    CFiringModeFloat m_flRecoilMagnitude;
    CFiringModeFloat m_flRecoilMagnitudeVariance;
    CFiringModeInt m_nTracerFrequency;
    float m_flInaccuracyJumpInitial;
    float m_flInaccuracyJumpApex;
    float m_flInaccuracyReload;
    float m_flDeployDuration;
    float m_flDisallowAttackAfterReloadStartDuration;
    int32_t m_nBurstShotCount;
    bool m_bAllowBurstHolster;
    int32_t m_nRecoilSeed;
    int32_t m_nSpreadSeed;
    float m_flAttackMovespeedFactor;
    float m_flInaccuracyPitchShift;
    float m_flInaccuracyAltSoundThreshold;
    // CUtlString m_szUseRadioSubtitle;
    char pad_03[8];
    bool m_bUnzoomsAfterShot;
    bool m_bHideViewModelWhenZoomed;
    int32_t m_nZoomLevels;
    int32_t m_nZoomFOV1;
    int32_t m_nZoomFOV2;
    float m_flZoomTime0;
    float m_flZoomTime1;
    float m_flZoomTime2;
    float m_flIronSightPullUpSpeed;
    float m_flIronSightPutDownSpeed;
    float m_flIronSightFOV;
    float m_flIronSightPivotForward;
    float m_flIronSightLooseness;
    int32_t m_nDamage;
    float m_flHeadshotMultiplier;
    float m_flArmorRatio;
    float m_flPenetration;
    float m_flRange;
    float m_flRangeModifier;
    float m_flFlinchVelocityModifierLarge;
    float m_flFlinchVelocityModifierSmall;
    float m_flRecoveryTimeCrouch;
    float m_flRecoveryTimeStand;
    float m_flRecoveryTimeCrouchFinal;
    float m_flRecoveryTimeStandFinal;
    int32_t m_nRecoveryTransitionStartBullet;
    int32_t m_nRecoveryTransitionEndBullet;
    float m_flThrowVelocity;
    // Vector m_vSmokeColor;
    // CGlobalSymbol m_szAnimClass;
    char pad_04[68];
};

class CPointGamestatsCounter : public CPointEntity {
public:
    // CUtlSymbolLarge m_strStatisticName;
    char pad_017[8];
    bool m_bDisabled;
    char pad_018[7];
};

class CEnvHudHint : public CPointEntity {
public:
    // CUtlSymbolLarge m_iszMessage;
    char pad_017[1200];
};

class CFuncConveyor : public CBaseModelEntity {
public:
    // CUtlSymbolLarge m_szConveyorModels;
    char pad_020[8];
    float m_flTransitionDurationSeconds;
    // QAngle m_angMoveEntitySpace;
    // Vector m_vecMoveDirEntitySpace;
    char pad_021[24];
    float m_flTargetSpeed;
    GameTick_t m_nTransitionStartTick;
    int32_t m_nTransitionDurationTicks;
    float m_flTransitionStartSpeed;
    // CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hConveyorModels;
    char pad_022[28];
};

class CCSPlace : public CServerOnlyModelEntity {
public:
    // CUtlSymbolLarge m_name;
    char pad_021[1872];
};

class CGameMoney : public CRulePointEntity {
public:
    CEntityIOOutput m_OnMoneySpent;
    CEntityIOOutput m_OnMoneySpentFail;
    int32_t m_nMoney;
    // CUtlString m_strAwardText;
    char pad_022[12];
};

class CPlayerSprayDecal : public CModelPointEntity {
public:
    int32_t m_nUniqueID;
    uint32_t m_unAccountID;
    uint32_t m_unTraceID;
    uint32_t m_rtGcTime;
    // Vector m_vecEndPos;
    // Vector m_vecStart;
    // Vector m_vecLeft;
    // Vector m_vecNormal;
    char pad_021[48];
    int32_t m_nPlayer;
    int32_t m_nEntity;
    int32_t m_nHitbox;
    float m_flCreationTime;
    int32_t m_nTintID;
    uint8_t m_nVersion;
    uint8_t m_ubSignature[128];
    char pad_022[3];
};

class CInferno : public CBaseModelEntity {
public:
    // Vector[64] m_firePositions;
    // Vector[64] m_fireParentPositions;
    char pad_020[1536];
    bool m_bFireIsBurning[64];
    // Vector[64] m_BurnNormal;
    char pad_021[768];
    int32_t m_fireCount;
    int32_t m_nInfernoType;
    int32_t m_nFireEffectTickBegin;
    float m_nFireLifetime;
    bool m_bInPostEffectTime;
    bool m_bWasCreatedInSmoke;
    char pad_022[409];
    Extent m_extent;
    CountdownTimer m_damageTimer;
    CountdownTimer m_damageRampTimer;
    // Vector m_splashVelocity;
    // Vector m_InitialSplashVelocity;
    // Vector m_startPos;
    // Vector m_vecOriginalSpawnLocation;
    char pad_023[19];
    IntervalTimer m_activeTimer;
    int32_t m_fireSpawnOffset;
    int32_t m_nMaxFlames;
    int32_t m_nSpreadCount;
    CountdownTimer m_BookkeepingTimer;
    CountdownTimer m_NextSpreadTimer;
    uint16_t m_nSourceItemDefIndex;
    char pad_024[102];
};

class CFireCrackerBlast : public CInferno {
public:
    char pad_025[5048];
};

class CBarnLight : public CBaseModelEntity {
public:
    bool m_bEnabled;
    int32_t m_nColorMode;
    // Color m_Color;
    char pad_020[4];
    float m_flColorTemperature;
    float m_flBrightness;
    float m_flBrightnessScale;
    int32_t m_nDirectLight;
    int32_t m_nBakedShadowIndex;
    int32_t m_nLightPathUniqueId;
    int32_t m_nLightMapUniqueId;
    int32_t m_nLuminaireShape;
    float m_flLuminaireSize;
    float m_flLuminaireAnisotropy;
    // CUtlString m_LightStyleString;
    GameTime_t m_flLightStyleStartTime;
    // CNetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings;
    // CNetworkUtlVectorBase< CUtlString > m_LightStyleEvents;
    // CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_LightStyleTargets;
    CEntityIOOutput m_StyleEvent;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie;
    char pad_021[112];
    float m_flShape;
    float m_flSoftX;
    float m_flSoftY;
    float m_flSkirt;
    float m_flSkirtNear;
    // Vector m_vSizeParams;
    char pad_022[12];
    float m_flRange;
    // Vector m_vShear;
    char pad_023[12];
    int32_t m_nBakeSpecularToCubemaps;
    // Vector m_vBakeSpecularToCubemapsSize;
    char pad_024[12];
    int32_t m_nCastShadows;
    int32_t m_nShadowMapSize;
    int32_t m_nShadowPriority;
    bool m_bContactShadow;
    bool m_bForceShadowsEnabled;
    int32_t m_nBounceLight;
    float m_flBounceScale;
    bool m_bDynamicBounce;
    float m_flMinRoughness;
    // Vector m_vAlternateColor;
    char pad_025[12];
    float m_fAlternateColorBrightness;
    int32_t m_nFog;
    float m_flFogStrength;
    int32_t m_nFogShadows;
    float m_flFogScale;
    bool m_bFogMixedShadows;
    float m_flFadeSizeStart;
    float m_flFadeSizeEnd;
    float m_flShadowFadeSizeStart;
    float m_flShadowFadeSizeEnd;
    bool m_bPrecomputedFieldsValid;
    // Vector m_vPrecomputedBoundsMins;
    // Vector m_vPrecomputedBoundsMaxs;
    // Vector m_vPrecomputedOBBOrigin;
    // QAngle m_vPrecomputedOBBAngles;
    // Vector m_vPrecomputedOBBExtent;
    char pad_026[60];
    int32_t m_nPrecomputedSubFrusta;
    // Vector m_vPrecomputedOBBOrigin0;
    // QAngle m_vPrecomputedOBBAngles0;
    // Vector m_vPrecomputedOBBExtent0;
    // Vector m_vPrecomputedOBBOrigin1;
    // QAngle m_vPrecomputedOBBAngles1;
    // Vector m_vPrecomputedOBBExtent1;
    // Vector m_vPrecomputedOBBOrigin2;
    // QAngle m_vPrecomputedOBBAngles2;
    // Vector m_vPrecomputedOBBExtent2;
    // Vector m_vPrecomputedOBBOrigin3;
    // QAngle m_vPrecomputedOBBAngles3;
    // Vector m_vPrecomputedOBBExtent3;
    // Vector m_vPrecomputedOBBOrigin4;
    // QAngle m_vPrecomputedOBBAngles4;
    // Vector m_vPrecomputedOBBExtent4;
    // Vector m_vPrecomputedOBBOrigin5;
    // QAngle m_vPrecomputedOBBAngles5;
    // Vector m_vPrecomputedOBBExtent5;
    char pad_027[216];
    bool m_bPvsModifyEntity;
    // CNetworkUtlVectorBase< uint16 > m_VisClusters;
    char pad_028[39];
};

class CRectLight : public CBarnLight {
public:
    bool m_bShowLight;
    char pad_029[7];
};

class COmniLight : public CBarnLight {
public:
    float m_flInnerAngle;
    float m_flOuterAngle;
    bool m_bShowLight;
    char pad_029[7];
};

class CCSTeam : public CTeam {
public:
    int32_t m_nLastRecievedShorthandedRoundBonus;
    int32_t m_nShorthandedRoundBonusStartRound;
    bool m_bSurrendered;
    char m_szTeamMatchStat[512];
    int32_t m_numMapVictories;
    int32_t m_scoreFirstHalf;
    int32_t m_scoreSecondHalf;
    int32_t m_scoreOvertime;
    char m_szClanTeamname[129];
    uint32_t m_iClanID;
    char m_szTeamFlagImage[8];
    char m_szTeamLogoImage[8];
    float m_flNextResourceTime;
    int32_t m_iLastUpdateSentAt;
    char pad_018[4];
};

class CMapInfo : public CPointEntity {
public:
    int32_t m_iBuyingStatus;
    float m_flBombRadius;
    int32_t m_iPetPopulation;
    bool m_bUseNormalSpawnsForDM;
    bool m_bDisableAutoGeneratedDMSpawns;
    float m_flBotMaxVisionDistance;
    int32_t m_iHostageCount;
    bool m_bFadePlayerVisibilityFarZ;
    bool m_bRainTraceToSkyEnabled;
    float m_flEnvRainStrength;
    float m_flEnvPuddleRippleStrength;
    float m_flEnvPuddleRippleDirection;
    float m_flEnvWetnessCoverage;
    float m_flEnvWetnessDryingAmount;
};

class CCSBot : public CBot {
public:
    // VectorWS m_eyePosition;
    char pad_04[20];
    char m_name[64];
    float m_combatRange;
    bool m_isRogue;
    CountdownTimer m_rogueTimer;
    char pad_05[4];
    bool m_diedLastRound;
    float m_safeTime;
    bool m_wasSafe;
    char pad_06[7];
    bool m_blindFire;
    CountdownTimer m_surpriseTimer;
    bool m_bAllowActive;
    bool m_isFollowing;
    // CHandle< CCSPlayerPawn > m_leader;
    char pad_07[4];
    float m_followTimestamp;
    float m_allowAutoFollowTime;
    CountdownTimer m_hurryTimer;
    CountdownTimer m_alertTimer;
    CountdownTimer m_sneakTimer;
    CountdownTimer m_panicTimer;
    char pad_08[864];
    float m_stateTimestamp;
    bool m_isAttacking;
    bool m_isOpeningDoor;
    // CHandle< CBaseEntity > m_taskEntity;
    // VectorWS m_goalPosition;
    // CHandle< CBaseEntity > m_goalEntity;
    // CHandle< CBaseEntity > m_avoid;
    char pad_09[40];
    float m_avoidTimestamp;
    bool m_isStopping;
    bool m_hasVisitedEnemySpawn;
    IntervalTimer m_stillTimer;
    bool m_bEyeAnglesUnderPathFinderControl;
    char pad_010[22780];
    int32_t m_pathIndex;
    GameTime_t m_areaEnteredTimestamp;
    CountdownTimer m_repathTimer;
    CountdownTimer m_avoidFriendTimer;
    bool m_isFriendInTheWay;
    CountdownTimer m_politeTimer;
    bool m_isWaitingBehindFriend;
    char pad_011[40];
    float m_pathLadderEnd;
    CountdownTimer m_mustRunTimer;
    CountdownTimer m_waitTimer;
    CountdownTimer m_updateTravelDistanceTimer;
    float m_playerTravelDistance[64];
    uint8_t m_travelDistancePhase;
    char pad_012[407];
    uint8_t m_hostageEscortCount;
    float m_hostageEscortCountTimestamp;
    int32_t m_desiredTeam;
    bool m_hasJoined;
    bool m_isWaitingForHostage;
    CountdownTimer m_inhibitWaitingForHostageTimer;
    CountdownTimer m_waitForHostageTimer;
    // Vector m_noisePosition;
    char pad_013[12];
    float m_noiseTravelDistance;
    float m_noiseTimestamp;
    CCSPlayerPawn* m_noiseSource;
    CountdownTimer m_noiseBendTimer;
    // Vector m_bentNoisePosition;
    char pad_014[12];
    bool m_bendNoisePositionValid;
    float m_lookAroundStateTimestamp;
    float m_lookAheadAngle;
    float m_forwardAngle;
    float m_inhibitLookAroundTimestamp;
    // Vector m_lookAtSpot;
    char pad_015[20];
    float m_lookAtSpotDuration;
    float m_lookAtSpotTimestamp;
    float m_lookAtSpotAngleTolerance;
    bool m_lookAtSpotClearIfClose;
    bool m_lookAtSpotAttack;
    char* m_lookAtDesc;
    float m_peripheralTimestamp;
    char pad_016[388];
    uint8_t m_approachPointCount;
    // Vector m_approachPointViewPosition;
    IntervalTimer m_viewSteadyTimer;
    CountdownTimer m_tossGrenadeTimer;
    CountdownTimer m_isAvoidingGrenade;
    char pad_017[8];
    float m_spotCheckTimestamp;
    char pad_018[1028];
    int32_t m_checkedHidingSpotCount;
    float m_lookPitch;
    float m_lookPitchVel;
    float m_lookYaw;
    float m_lookYawVel;
    // Vector m_targetSpot;
    // Vector m_targetSpotVelocity;
    // Vector m_targetSpotPredicted;
    // QAngle m_aimError;
    // QAngle m_aimGoal;
    GameTime_t m_targetSpotTime;
    float m_aimFocus;
    float m_aimFocusInterval;
    GameTime_t m_aimFocusNextUpdate;
    CountdownTimer m_ignoreEnemiesTimer;
    // CHandle< CCSPlayerPawn > m_enemy;
    char pad_019[4];
    bool m_isEnemyVisible;
    uint8_t m_visibleEnemyParts;
    // Vector m_lastEnemyPosition;
    char pad_020[12];
    float m_lastSawEnemyTimestamp;
    float m_firstSawEnemyTimestamp;
    float m_currentEnemyAcquireTimestamp;
    float m_enemyDeathTimestamp;
    float m_friendDeathTimestamp;
    bool m_isLastEnemyDead;
    int32_t m_nearbyEnemyCount;
    // CHandle< CCSPlayerPawn > m_bomber;
    char pad_021[524];
    int32_t m_nearbyFriendCount;
    // CHandle< CCSPlayerPawn > m_closestVisibleFriend;
    // CHandle< CCSPlayerPawn > m_closestVisibleHumanFriend;
    IntervalTimer m_attentionInterval;
    // CHandle< CCSPlayerPawn > m_attacker;
    char pad_022[4];
    float m_attackedTimestamp;
    IntervalTimer m_burnedByFlamesTimer;
    int32_t m_lastVictimID;
    bool m_isAimingAtEnemy;
    bool m_isRapidFiring;
    IntervalTimer m_equipTimer;
    CountdownTimer m_zoomTimer;
    GameTime_t m_fireWeaponTimestamp;
    CountdownTimer m_lookForWeaponsOnGroundTimer;
    bool m_bIsSleeping;
    bool m_isEnemySniperVisible;
    CountdownTimer m_sawEnemySniperTimer;
    char pad_023[160];
    uint8_t m_enemyQueueIndex;
    uint8_t m_enemyQueueCount;
    uint8_t m_enemyQueueAttendIndex;
    bool m_isStuck;
    GameTime_t m_stuckTimestamp;
    // Vector m_stuckSpot;
    CountdownTimer m_wiggleTimer;
    CountdownTimer m_stuckJumpTimer;
    GameTime_t m_nextCleanupCheckTimestamp;
    float m_avgVel[10];
    int32_t m_avgVelIndex;
    int32_t m_avgVelCount;
    // Vector m_lastOrigin;
    char pad_024[16];
    float m_lastRadioRecievedTimestamp;
    float m_lastRadioSentTimestamp;
    // CHandle< CCSPlayerPawn > m_radioSubject;
    // Vector m_radioPosition;
    char pad_025[16];
    float m_voiceEndTimestamp;
    char pad_026[8];
    int32_t m_lastValidReactionQueueFrame;
    char pad_027[4];
};

class CFogVolume : public CServerOnlyModelEntity {
public:
    // CUtlSymbolLarge m_fogName;
    // CUtlSymbolLarge m_postProcessName;
    // CUtlSymbolLarge m_colorCorrectionName;
    char pad_021[32];
    bool m_bDisabled;
    bool m_bInFogVolumesList;
    char pad_022[6];
};

class CInfoDynamicShadowHint : public CPointEntity {
public:
    bool m_bDisabled;
    float m_flRange;
    int32_t m_nImportance;
    int32_t m_nLightChoice;
    // CHandle< CBaseEntity > m_hLight;
    char pad_017[8];
};

class CInfoDynamicShadowHintBox : public CInfoDynamicShadowHint {
public:
    // Vector m_vBoxMins;
    // Vector m_vBoxMaxs;
    char pad_018[1240];
};

class CEnvSky : public CBaseModelEntity {
public:
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly;
    char pad_020[16];
    bool m_bStartDisabled;
    // Color m_vTintColor;
    // Color m_vTintColorLightingOnly;
    char pad_021[8];
    float m_flBrightnessScale;
    int32_t m_nFogType;
    float m_flFogMinStart;
    float m_flFogMinEnd;
    float m_flFogMaxStart;
    float m_flFogMaxEnd;
    bool m_bEnabled;
    char pad_022[43];
};

class CTonemapController2Alias_env_tonemap_controller2 : public CTonemapController2 {
public:
    char pad_017[1216];
};

class CLightSpotEntity : public CLightEntity {
public:
    char pad_020[1848];
};

class CLightOrthoEntity : public CLightEntity {
public:
    char pad_020[1848];
};

class CLightDirectionalEntity : public CLightEntity {
public:
    char pad_020[1848];
};

class CLightEnvironmentEntity : public CLightDirectionalEntity {
public:
    char pad_021[1848];
};

class CTriggerFan : public CBaseTrigger {
public:
    // Vector m_vFanOriginOffset;
    // Vector m_vDirection;
    char pad_026[24];
    bool m_bPushTowardsInfoTarget;
    bool m_bPushAwayFromInfoTarget;
    // Quaternion m_qNoiseDelta;
    // CHandle< CInfoFan > m_hInfoFan;
    char pad_027[24];
    float m_flForce;
    bool m_bFalloff;
    CountdownTimer m_RampTimer;
    // VectorWS m_vFanOriginWS;
    // Vector m_vFanOriginLS;
    // Vector m_vFanEndLS;
    // Vector m_vNoiseDirectionTarget;
    // CUtlSymbolLarge m_iszInfoFan;
    char pad_028[56];
    float m_flRopeForceScale;
    float m_flParticleForceScale;
    float m_flPlayerForce;
    bool m_bPlayerWindblock;
    float m_flNPCForce;
    float m_flRampTime;
    float m_fNoiseDegrees;
    float m_fNoiseSpeed;
    bool m_bPushPlayer;
    bool m_bRampDown;
    int32_t m_nManagerFanIdx;
    char pad_029[8];
};

class CEnvSoundscapeProxyAlias_snd_soundscape_proxy : public CEnvSoundscapeProxy {
public:
    char pad_021[1344];
};

class CEnvSoundscapeAlias_snd_soundscape : public CEnvSoundscape {
public:
    char pad_020[1336];
};

class CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable : public CEnvSoundscapeTriggerable {
public:
    char pad_021[1336];
};

class CTriggerSoundscape : public CBaseTrigger {
public:
    // CHandle< CEnvSoundscapeTriggerable > m_hSoundscape;
    // CUtlSymbolLarge m_SoundscapeName;
    // CUtlVector< CHandle< CBasePlayerPawn > > m_spectators;
    char pad_026[2232];
};

class CFilterName : public CBaseFilter {
public:
    // CUtlSymbolLarge m_iFilterName;
    char pad_018[1256];
};

class CFilterModel : public CBaseFilter {
public:
    // CUtlSymbolLarge m_iFilterModel;
    char pad_018[1256];
};

class CFilterContext : public CBaseFilter {
public:
    // CUtlSymbolLarge m_iFilterContext;
    char pad_018[1256];
};

class CFilterTeam : public CBaseFilter {
public:
    int32_t m_iFilterTeam;
    char pad_018[4];
};

class CFilterMassGreater : public CBaseFilter {
public:
    float m_fFilterMass;
    char pad_018[4];
};

class FilterDamageType : public CBaseFilter {
public:
    int32_t m_iDamageType;
    char pad_018[4];
};

class FilterHealth : public CBaseFilter {
public:
    bool m_bAdrenalineActive;
    int32_t m_iHealthMin;
    int32_t m_iHealthMax;
    char pad_018[4];
};

class CFilterEnemy : public CBaseFilter {
public:
    // CUtlSymbolLarge m_iszEnemyName;
    char pad_018[8];
    float m_flRadius;
    float m_flOuterRadius;
    int32_t m_nMaxSquadmatesPerEnemy;
    // CUtlSymbolLarge m_iszPlayerName;
    char pad_019[12];
};

class CFilterAttributeInt : public CBaseFilter {
public:
    // CUtlSymbolLarge m_sAttributeName;
    char pad_018[1256];
};

class CParticleSystem : public CBaseModelEntity {
public:
    char m_szSnapshotFileName[512];
    bool m_bActive;
    bool m_bFrozen;
    float m_flFreezeTransitionDuration;
    int32_t m_nStopType;
    bool m_bAnimateDuringGameplayPause;
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex;
    GameTime_t m_flStartTime;
    float m_flPreSimTime;
    // Vector[4] m_vServerControlPoints;
    char pad_020[48];
    uint8_t m_iServerControlPointAssignments[4];
    // CHandle< CBaseEntity >[64] m_hControlPointEnts;
    char pad_021[256];
    bool m_bNoSave;
    bool m_bNoFreeze;
    bool m_bNoRamp;
    bool m_bStartActive;
    // CUtlSymbolLarge m_iszEffectName;
    // CUtlSymbolLarge[64] m_iszControlPointNames;
    char pad_022[520];
    int32_t m_nDataCP;
    // Vector m_vecDataCPValue;
    char pad_023[12];
    int32_t m_nTintCP;
    // Color m_clrTint;
    char pad_024[4];
};

class CTextureBasedAnimatable : public CBaseModelEntity {
public:
    bool m_bLoop;
    float m_flFPS;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys;
    // Vector m_vAnimationBoundsMin;
    // Vector m_vAnimationBoundsMax;
    char pad_020[40];
    float m_flStartTime;
    float m_flStartFrame;
};

class CWorld : public CBaseModelEntity {
public:
    char pad_020[1840];
};

class CDynamicProp : public CBreakableProp {
public:
    char pad_030[8];
    bool m_bCreateNavObstacle;
    bool m_bNavObstacleUpdatesOverridden;
    bool m_bUseHitboxesForRenderBox;
    bool m_bUseAnimGraph;
    CEntityIOOutput m_pOutputAnimBegun;
    CEntityIOOutput m_pOutputAnimOver;
    CEntityIOOutput m_pOutputAnimLoopCycleOver;
    CEntityIOOutput m_OnAnimReachedStart;
    CEntityIOOutput m_OnAnimReachedEnd;
    // CUtlSymbolLarge m_iszIdleAnim;
    char pad_031[8];
    AnimLoopMode_t m_nIdleAnimLoopMode;
    bool m_bRandomizeCycle;
    bool m_bStartDisabled;
    bool m_bFiredStartEndOutput;
    bool m_bForceNpcExclude;
    bool m_bCreateNonSolid;
    bool m_bIsOverrideProp;
    int32_t m_iInitialGlowState;
    int32_t m_nGlowRange;
    int32_t m_nGlowRangeMin;
    // Color m_glowColor;
    char pad_032[4];
    int32_t m_nGlowTeam;
};

class CDynamicPropAlias_dynamic_prop : public CDynamicProp {
public:
    char pad_033[3152];
};

class CDynamicPropAlias_prop_dynamic_override : public CDynamicProp {
public:
    char pad_033[3152];
};

class CDynamicPropAlias_cable_dynamic : public CDynamicProp {
public:
    char pad_033[3152];
};

class CColorCorrectionVolume : public CBaseTrigger {
public:
    float m_MaxWeight;
    float m_FadeDuration;
    float m_Weight;
    char m_lookupFilename[512];
    float m_LastEnterWeight;
    GameTime_t m_LastEnterTime;
    float m_LastExitWeight;
    GameTime_t m_LastExitTime;
    char pad_026[4];
};

class CCommentaryViewPosition : public CSprite {
public:
    char pad_022[1952];
};

class CRotDoor : public CBaseDoor {
public:
    bool m_bSolidBsp;
    char pad_025[7];
};

class CItemSoda : public CBaseAnimGraph {
public:
    char pad_024[2592];
};

class CPrecipitation : public CBaseTrigger {
public:
    char pad_026[2192];
};

class CEnvBeam : public CBeam {
public:
    int32_t m_active;
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_spriteTexture;
    // CUtlSymbolLarge m_iszStartEntity;
    // CUtlSymbolLarge m_iszEndEntity;
    char pad_023[28];
    float m_life;
    float m_boltWidth;
    float m_noiseAmplitude;
    int32_t m_speed;
    float m_restrike;
    // CUtlSymbolLarge m_iszSpriteName;
    char pad_024[12];
    int32_t m_frameStart;
    // VectorWS m_vEndPointWorld;
    // Vector m_vEndPointRelative;
    char pad_025[24];
    float m_radius;
    Touch_t m_TouchType;
    // CUtlSymbolLarge m_iFilterName;
    // CHandle< CBaseEntity > m_hFilter;
    // CUtlSymbolLarge m_iszDecal;
    CEntityIOOutput m_OnTouchedByEntity;
};

class CPushable : public CBreakable {
public:
    char pad_025[2056];
};

class CFuncLadderAlias_func_useableladder : public CFuncLadder {
public:
    char pad_021[1984];
};

class CFuncMonitor : public CFuncBrush {
public:
    // CUtlString m_targetCamera;
    char pad_022[8];
    int32_t m_nResolutionEnum;
    bool m_bRenderShadows;
    bool m_bUseUniqueColorTarget;
    // CUtlString m_brushModelName;
    // CHandle< CBaseEntity > m_hTargetCamera;
    char pad_023[14];
    bool m_bEnabled;
    bool m_bDraw3DSkybox;
    bool m_bStartEnabled;
    char pad_024[1];
};

class CFuncMoveLinearAlias_momentary_door : public CFuncMoveLinear {
public:
    char pad_025[2104];
};

class CGunTarget : public CBaseToggle {
public:
    bool m_on;
    // CHandle< CBaseEntity > m_hTargetEnt;
    CEntityIOOutput m_OnDeath;
};

class CTriggerGameEvent : public CBaseTrigger {
public:
    // CUtlString m_strStartTouchEventName;
    // CUtlString m_strEndTouchEventName;
    // CUtlString m_strTriggerID;
    char pad_026[2216];
};

class CRuleBrushEntity : public CRuleEntity {
public:
    char pad_021[1848];
};

class CGameEnd : public CRulePointEntity {
public:
    char pad_022[1856];
};

class CGameText : public CRulePointEntity {
public:
    // CUtlSymbolLarge m_iszMessage;
    hudtextparms_t m_textParms;
    char pad_022[4];
};

class CGamePlayerZone : public CRuleBrushEntity {
public:
    CEntityIOOutput m_OnPlayerInZone;
    CEntityIOOutput m_OnPlayerOutZone;
    // CEntityOutputTemplate< int32, int32 > m_PlayersInCount;
    // CEntityOutputTemplate< int32, int32 > m_PlayersOutCount;
    char pad_022[64];
};

class CSimpleMarkupVolumeTagged : public CMarkupVolumeTagged {
public:
    char pad_023[1904];
};

class CMarkupVolumeTagged_Nav : public CMarkupVolumeTagged {
public:
    NavScopeFlags_t m_nScopes;
    char pad_023[7];
};

class CMarkupVolumeTagged_NavGame : public CMarkupVolumeWithRef {
public:
    NavScopeFlags_t m_nScopes;
    bool m_bFloodFillAttribute;
    bool m_bSplitNavSpace;
    char pad_025[5];
};

class CFuncElectrifiedVolume : public CFuncBrush {
public:
    // CUtlSymbolLarge m_EffectName;
    // CUtlSymbolLarge m_EffectInterpenetrateName;
    // CUtlSymbolLarge m_EffectZapName;
    // CUtlSymbolLarge m_iszEffectSource;
    char pad_022[1928];
};

class CPathCornerCrash : public CPathCorner {
public:
    char pad_017[1224];
};

class CConstraintAnchor : public CBaseAnimGraph {
public:
    float m_massScale;
    char pad_024[12];
};

class COrnamentProp : public CDynamicProp {
public:
    // CUtlSymbolLarge m_initialOwner;
    char pad_033[3168];
};

class CRopeKeyframeAlias_move_rope : public CRopeKeyframe {
public:
    char pad_024[1928];
};

class CSceneEntityAlias_logic_choreographed_scene : public CSceneEntity {
public:
    char pad_022[1840];
};

class CInstancedSceneEntity : public CSceneEntity {
public:
    // CHandle< CBaseEntity > m_hOwner;
    char pad_022[4];
    bool m_bHadOwner;
    float m_flPostSpeakDelay;
    float m_flPreDelay;
    bool m_bIsBackground;
    bool m_bRemoveOnCompletion;
    // CHandle< CBaseEntity > m_hTarget;
    char pad_023[6];
};

class CSpriteAlias_env_glow : public CSprite {
public:
    char pad_022[1952];
};

class CFuncTankTrain : public CFuncTrackTrain {
public:
    CEntityIOOutput m_OnDeath;
};

class CFuncPlatRot : public CFuncPlat {
public:
    // QAngle m_end;
    // QAngle m_start;
    char pad_026[2040];
};

class CFuncTrain : public CBasePlatTrain {
public:
    // CHandle< CBaseEntity > m_hCurrentTarget;
    char pad_025[4];
    bool m_activated;
    // CHandle< CBaseEntity > m_hEnemy;
    char pad_026[4];
    float m_flBlockDamage;
    GameTime_t m_flNextBlockTime;
    // CUtlSymbolLarge m_iszLastTarget;
    char pad_027[12];
};

class CFuncTrackChange : public CFuncPlatRot {
public:
    CPathTrack* m_trackTop;
    CPathTrack* m_trackBottom;
    CFuncTrackTrain* m_train;
    // CUtlSymbolLarge m_trackTopName;
    // CUtlSymbolLarge m_trackBottomName;
    // CUtlSymbolLarge m_trainName;
    char pad_027[24];
    TRAIN_CODE m_code;
    int32_t m_targetState;
    int32_t m_use;
    char pad_028[4];
};

class CFuncTrackAuto : public CFuncTrackChange {
public:
    char pad_029[2104];
};

class CTriggerRemove : public CBaseTrigger {
public:
    CEntityIOOutput m_OnRemove;
};

class CTriggerPush : public CBaseTrigger {
public:
    // QAngle m_angPushEntitySpace;
    // Vector m_vecPushDirEntitySpace;
    char pad_026[24];
    bool m_bTriggerOnStartTouch;
    bool m_bUsePathSimple;
    // CUtlSymbolLarge m_iszPathSimpleName;
    char pad_027[8];
    CPathSimple* m_PathSimple;
    uint32_t m_splinePushType;
    char pad_028[4];
};

class CScriptTriggerPush : public CTriggerPush {
public:
    // Vector m_vExtent;
    char pad_029[2264];
};

class CTriggerToggleSave : public CBaseTrigger {
public:
    char pad_026[2192];
};

class CTriggerSave : public CBaseTrigger {
public:
    bool m_bForceNewLevelUnit;
    float m_fDangerousTimer;
    int32_t m_minHitPoints;
    char pad_026[4];
};

class CTriggerGravity : public CBaseTrigger {
public:
    char pad_026[2192];
};

class CTriggerProximity : public CBaseTrigger {
public:
    // CHandle< CBaseEntity > m_hMeasureTarget;
    // CUtlSymbolLarge m_iszMeasureTarget;
    char pad_026[16];
    float m_fRadius;
    int32_t m_nTouchers;
    // CEntityOutputTemplate< float32, float32 > m_NearestEntityDistance;
    char pad_027[32];
};

class CServerRagdollTrigger : public CBaseTrigger {
public:
    char pad_026[2192];
};

class CTriggerActiveWeaponDetect : public CBaseTrigger {
public:
    CEntityIOOutput m_OnTouchedActiveWeapon;
    // CUtlSymbolLarge m_iszWeaponClassName;
    char pad_026[8];
};

class CTriggerPhysics : public CBaseTrigger {
public:
    char pad_026[16];
    float m_gravityScale;
    float m_linearLimit;
    float m_linearDamping;
    float m_angularLimit;
    float m_angularDamping;
    float m_linearForce;
    float m_flFrequency;
    float m_flDampingRatio;
    // Vector m_vecLinearForcePointAt;
    char pad_027[12];
    bool m_bCollapseToForcePoint;
    // Vector m_vecLinearForcePointAtWorld;
    // Vector m_vecLinearForceDirection;
    char pad_028[27];
    bool m_bConvertToDebrisWhenPossible;
    char pad_029[7];
};

class CTriggerDetectBulletFire : public CBaseTrigger {
public:
    bool m_bPlayerFireOnly;
    CEntityIOOutput m_OnDetectedBulletFire;
};

class CTriggerDetectExplosion : public CBaseTrigger {
public:
    CEntityIOOutput m_OnDetectedExplosion;
};

class CScriptNavBlocker : public CFuncNavBlocker {
public:
    // Vector m_vExtent;
    char pad_022[1880];
};

class CBasePropDoor : public CDynamicProp {
public:
    char pad_033[16];
    float m_flAutoReturnDelay;
    // CUtlVector< CHandle< CBasePropDoor > > m_hDoorList;
    char pad_034[28];
    int32_t m_nHardwareType;
    bool m_bNeedsHardware;
    DoorState_t m_eDoorState;
    bool m_bLocked;
    bool m_bNoNPCs;
    // Vector m_closedPosition;
    // QAngle m_closedAngles;
    // CHandle< CBaseEntity > m_hBlocker;
    char pad_035[30];
    bool m_bFirstBlocked;
    locksound_t m_ls;
    bool m_bForceClosed;
    // VectorWS m_vecLatchWorldPosition;
    // CHandle< CBaseEntity > m_hActivator;
    // CUtlSymbolLarge m_SoundMoving;
    // CUtlSymbolLarge m_SoundOpen;
    // CUtlSymbolLarge m_SoundClose;
    // CUtlSymbolLarge m_SoundLock;
    // CUtlSymbolLarge m_SoundUnlock;
    // CUtlSymbolLarge m_SoundLatch;
    // CUtlSymbolLarge m_SoundPound;
    // CUtlSymbolLarge m_SoundJiggle;
    // CUtlSymbolLarge m_SoundLockedAnim;
    char pad_036[108];
    int32_t m_numCloseAttempts;
    // CUtlStringToken m_nPhysicsMaterial;
    // CUtlSymbolLarge m_SlaveName;
    // CHandle< CBasePropDoor > m_hMaster;
    CEntityIOOutput m_OnBlockedClosing;
    CEntityIOOutput m_OnBlockedOpening;
    CEntityIOOutput m_OnUnblockedClosing;
    CEntityIOOutput m_OnUnblockedOpening;
    CEntityIOOutput m_OnFullyClosed;
    CEntityIOOutput m_OnFullyOpen;
    CEntityIOOutput m_OnClose;
    CEntityIOOutput m_OnOpen;
    CEntityIOOutput m_OnLockedUse;
    CEntityIOOutput m_OnAjarOpen;
    char pad_037[8];
};

class CEnvLaser : public CBeam {
public:
    // CUtlSymbolLarge m_iszLaserTarget;
    char pad_023[8];
    CSprite* m_pSprite;
    // CUtlSymbolLarge m_iszSpriteName;
    // Vector m_firePosition;
    char pad_024[20];
    float m_flStartFrame;
};

class CRagdollProp : public CBaseAnimGraph {
public:
    ragdoll_t m_ragdoll;
    bool m_bStartDisabled;
    // CNetworkUtlVectorBase< bool > m_ragEnabled;
    // CNetworkUtlVectorBase< Vector > m_ragPos;
    // CNetworkUtlVectorBase< QAngle > m_ragAngles;
    char pad_024[76];
    uint32_t m_lastUpdateTickCount;
    bool m_allAsleep;
    bool m_bFirstCollisionAfterLaunch;
    // CHandle< CBaseEntity > m_hDamageEntity;
    // CHandle< CBaseEntity > m_hKiller;
    // CHandle< CBasePlayerPawn > m_hPhysicsAttacker;
    GameTime_t m_flLastPhysicsInfluenceTime;
    GameTime_t m_flFadeOutStartTime;
    float m_flFadeTime;
    // VectorWS m_vecLastOrigin;
    char pad_025[7];
    GameTime_t m_flAwakeTime;
    GameTime_t m_flLastOriginChangeTime;
    // CUtlSymbolLarge m_strOriginClassName;
    // CUtlSymbolLarge m_strSourceClassName;
    char pad_026[20];
    bool m_bHasBeenPhysgunned;
    bool m_bAllowStretch;
    float m_flBlendWeight;
    float m_flDefaultFadeScale;
    // CUtlVector< Vector > m_ragdollMins;
    // CUtlVector< Vector > m_ragdollMaxs;
    char pad_027[52];
    bool m_bShouldDeleteActivationRecord;
    char pad_028[23];
};

class CPhysMagnet : public CBaseAnimGraph {
public:
    CEntityIOOutput m_OnMagnetAttach;
    CEntityIOOutput m_OnMagnetDetach;
    float m_massScale;
    float m_forceLimit;
    float m_torqueLimit;
    // CUtlVector< magnetted_objects_t > m_MagnettedEntities;
    char pad_024[28];
    bool m_bActive;
    bool m_bHasHitSomething;
    float m_flTotalMass;
    float m_flRadius;
    GameTime_t m_flNextSuckTime;
    int32_t m_iMaxObjectsAttached;
    char pad_025[4];
};

class CPhysicsPropOverride : public CPhysicsProp {
public:
    char pad_034[3296];
};

class CPhysicsPropRespawnable : public CPhysicsProp {
public:
    // VectorWS m_vOriginalSpawnOrigin;
    // QAngle m_vOriginalSpawnAngles;
    // Vector m_vOriginalMins;
    // Vector m_vOriginalMaxs;
    char pad_034[48];
    float m_flRespawnDuration;
    char pad_035[12];
};

class CTriggerMultiple : public CBaseTrigger {
public:
    CEntityIOOutput m_OnTrigger;
};

class CTriggerSndSosOpvar : public CBaseTrigger {
public:
    // CUtlVector< CHandle< CBaseEntity > > m_hTouchingPlayers;
    // Vector m_flPosition;
    char pad_026[36];
    float m_flCenterSize;
    float m_flMinVal;
    float m_flMaxVal;
    // CUtlSymbolLarge m_opvarName;
    // CUtlSymbolLarge m_stackName;
    // CUtlSymbolLarge m_operatorName;
    char pad_027[24];
    bool m_bVolIs2D;
    char m_opvarNameChar[256];
    char m_stackNameChar[256];
    char m_operatorNameChar[256];
    // Vector m_VecNormPos;
    char pad_028[12];
    float m_flNormCenterSize;
    char pad_029[4];
};

class CTriggerHurt : public CBaseTrigger {
public:
    float m_flOriginalDamage;
    float m_flDamage;
    float m_flDamageCap;
    GameTime_t m_flLastDmgTime;
    float m_flForgivenessDelay;
    DamageTypes_t m_bitsDamageInflict;
    int32_t m_damageModel;
    bool m_bNoDmgForce;
    // Vector m_vDamageForce;
    char pad_026[15];
    bool m_thinkAlways;
    float m_hurtThinkPeriod;
    CEntityIOOutput m_OnHurt;
    CEntityIOOutput m_OnHurtPlayer;
    // CUtlVector< CHandle< CBaseEntity > > m_hurtEntities;
    char pad_027[24];
};

class CTriggerCallback : public CBaseTrigger {
public:
    char pad_026[2200];
};

class CTriggerLerpObject : public CBaseTrigger {
public:
    // CUtlSymbolLarge m_iszLerpTarget;
    // CHandle< CBaseEntity > m_hLerpTarget;
    // CUtlSymbolLarge m_iszLerpTargetAttachment;
    AttachmentHandle_t m_hLerpTargetAttachment;
    float m_flLerpDuration;
    bool m_bAttachedEntityWasParented;
    bool m_bLerpRestoreMoveType;
    bool m_bSingleLerpObject;
    // CUtlVector< lerpdata_t > m_vecLerpingObjects;
    // CUtlSymbolLarge m_iszLerpEffect;
    // CUtlSymbolLarge m_iszLerpSound;
    char pad_026[45];
    bool m_bAttachTouchingObject;
    // CHandle< CBaseEntity > m_hEntityToWaitForDisconnect;
    CEntityIOOutput m_OnLerpStarted;
    CEntityIOOutput m_OnLerpFinished;
    CEntityIOOutput m_OnDetached;
};

class CChangeLevel : public CBaseTrigger {
public:
    // CUtlString m_sMapName;
    // CUtlString m_sLandmarkName;
    CEntityIOOutput m_OnChangeLevel;
    bool m_bTouched;
    bool m_bNoTouch;
    bool m_bNewChapter;
    bool m_bOnChangeLevelFired;
    char pad_026[4];
};

class CTriggerTeleport : public CBaseTrigger {
public:
    // CUtlSymbolLarge m_iLandmark;
    char pad_026[8];
    bool m_bUseLandmarkAngles;
    bool m_bMirrorPlayer;
    bool m_bCheckDestIfClearForPlayer;
    char pad_027[5];
};

class CWaterBullet : public CBaseAnimGraph {
public:
    char pad_024[2592];
};

class CEconWearable : public CEconEntity {
public:
    int32_t m_nForceSkin;
    bool m_bAlwaysAllow;
    char pad_028[11];
};

class CBaseGrenade : public CBaseFlex {
public:
    CEntityIOOutput m_OnPlayerPickup;
    CEntityIOOutput m_OnExplode;
    bool m_bHasWarnedAI;
    bool m_bIsSmokeGrenade;
    bool m_bIsLive;
    float m_DmgRadius;
    GameTime_t m_flDetonateTime;
    float m_flWarnAITime;
    float m_flDamage;
    // CUtlSymbolLarge m_iszBounceSound;
    // CUtlString m_ExplosionSound;
    // CHandle< CCSPlayerPawn > m_hThrower;
    GameTime_t m_flNextAttack;
    // CHandle< CCSPlayerPawn > m_hOriginalThrower;
    char pad_025[16];
};

class CFuncRetakeBarrier : public CDynamicProp {
public:
    char pad_033[3184];
};

class CBombTarget : public CBaseTrigger {
public:
    CEntityIOOutput m_OnBombExplode;
    CEntityIOOutput m_OnBombPlanted;
    CEntityIOOutput m_OnBombDefused;
    bool m_bIsBombSiteB;
    bool m_bIsHeistBombTarget;
    bool m_bBombPlantedHere;
    // CUtlSymbolLarge m_szMountTarget;
    // CHandle< CBaseEntity > m_hInstructorHint;
    char pad_026[16];
    int32_t m_nBombSiteDesignation;
};

class CHostageRescueZoneShim : public CBaseTrigger {
public:
    char pad_026[2192];
};

class CHostageRescueZone : public CHostageRescueZoneShim {
public:
    char pad_027[2224];
};

class CTriggerBuoyancy : public CBaseTrigger {
public:
    CBuoyancyHelper m_BuoyancyHelper;
    float m_flFluidDensity;
    char pad_026[4];
};

class CPhysicsPropMultiplayer : public CPhysicsProp {
public:
    char pad_034[3296];
};

class CFootstepControl : public CBaseTrigger {
public:
    // CUtlSymbolLarge m_source;
    // CUtlSymbolLarge m_destination;
    char pad_026[2208];
};

class CPlantedC4 : public CBaseAnimGraph {
public:
    char pad_024[8];
    bool m_bBombTicking;
    GameTime_t m_flC4Blow;
    int32_t m_nBombSite;
    int32_t m_nSourceSoundscapeHash;
    bool m_bAbortDetonationBecauseWorldIsFrozen;
    CAttributeContainer m_AttributeManager;
    CEntityIOOutput m_OnBombDefused;
    CEntityIOOutput m_OnBombBeginDefuse;
    CEntityIOOutput m_OnBombDefuseAborted;
    bool m_bCannotBeDefused;
    EntitySpottedState_t m_entitySpottedState;
    int32_t m_nSpotRules;
    bool m_bHasExploded;
    bool m_bBombDefused;
    bool m_bTrainingPlacedByPlayer;
    float m_flTimerLength;
    bool m_bBeingDefused;
    GameTime_t m_fLastDefuseTime;
    char pad_025[4];
    float m_flDefuseLength;
    GameTime_t m_flDefuseCountDown;
    // CHandle< CCSPlayerPawn > m_hBombDefuser;
    char pad_026[4];
    int32_t m_iProgressBarTime;
    bool m_bVoiceAlertFired;
    bool m_bVoiceAlertPlayed[4];
    GameTime_t m_flNextBotBeepTime;
    // QAngle m_angCatchUpToPlayerEye;
    GameTime_t m_flLastSpinDetectionTime;
    char pad_027[4];
};

class CBaseCSGrenadeProjectile : public CBaseGrenade {
public:
    // Vector m_vInitialPosition;
    // Vector m_vInitialVelocity;
    char pad_026[24];
    int32_t m_nBounces;
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nExplodeEffectIndex;
    char pad_027[12];
    int32_t m_nExplodeEffectTickBegin;
    // Vector m_vecExplodeEffectOrigin;
    GameTime_t m_flSpawnTime;
    uint8_t m_unOGSExtraFlags;
    bool m_bDetonationRecorded;
    uint16_t m_nItemIndex;
    // Vector m_vecOriginalSpawnLocation;
    GameTime_t m_flLastBounceSoundTime;
    // RotationVector m_vecGrenadeSpin;
    // Vector m_vecLastHitSurfaceNormal;
    char pad_028[24];
    int32_t m_nTicksAtZeroVelocity;
    bool m_bHasEverHitEnemy;
    char pad_029[3];
};

class CItemDogtags : public CItem {
public:
    // CHandle< CCSPlayerPawn > m_OwningPlayer;
    // CHandle< CCSPlayerPawn > m_KillingPlayer;
    char pad_026[2768];
};

class CBuyZone : public CBaseTrigger {
public:
    int32_t m_LegacyTeamNum;
    char pad_026[4];
};

class CTriggerBombReset : public CBaseTrigger {
public:
    char pad_026[2192];
};

class CTriggerHostageReset : public CBaseTrigger {
public:
    char pad_026[2192];
};

class CFlashbangProjectile : public CBaseCSGrenadeProjectile {
public:
    float m_flTimeToDetonate;
    uint8_t m_numOpponentsHit;
    uint8_t m_numTeammatesHit;
    char pad_030[10];
};

class CHEGrenadeProjectile : public CBaseCSGrenadeProjectile {
public:
    char pad_030[2992];
};

class CChicken : public CDynamicProp {
public:
    CAttributeContainer m_AttributeManager;
    CountdownTimer m_updateTimer;
    // Vector m_stuckAnchor;
    CountdownTimer m_stuckTimer;
    CountdownTimer m_collisionStuckTimer;
    bool m_isOnGround;
    // Vector m_vFallVelocity;
    char pad_033[12];
    ChickenActivity m_desiredActivity;
    ChickenActivity m_currentActivity;
    CountdownTimer m_activityTimer;
    float m_turnRate;
    // CHandle< CBaseEntity > m_fleeFrom;
    CountdownTimer m_moveRateThrottleTimer;
    CountdownTimer m_startleTimer;
    CountdownTimer m_vocalizeTimer;
    GameTime_t m_flWhenZombified;
    bool m_jumpedThisFrame;
    // CHandle< CCSPlayerPawn > m_leader;
    CountdownTimer m_reuseTimer;
    bool m_hasBeenUsed;
    CountdownTimer m_jumpTimer;
    float m_flLastJumpTime;
    bool m_bInJump;
    char pad_034[8121];
    CountdownTimer m_repathTimer;
    // Vector m_vecPathGoal;
    char pad_035[125];
    GameTime_t m_flActiveFollowStartTime;
    CountdownTimer m_followMinuteTimer;
    CountdownTimer m_BlockDirectionTimer;
    char pad_036[8];
};

class CHostageCarriableProp : public CBaseAnimGraph {
public:
    char pad_024[2592];
};

class CItemAssaultSuit : public CItem {
public:
    char pad_026[2752];
};

class CItemKevlar : public CItem {
public:
    char pad_026[2752];
};

class CItemDefuser : public CItem {
public:
    EntitySpottedState_t m_entitySpottedState;
    int32_t m_nSpotRules;
    char pad_026[4];
};

class CTonemapTrigger : public CBaseTrigger {
public:
    // CUtlSymbolLarge m_tonemapControllerName;
    // CEntityHandle m_hTonemapController;
    char pad_026[2208];
};

class CFogTrigger : public CBaseTrigger {
public:
    fogparams_t m_fog;
};

class CEnvParticleGlow : public CParticleSystem {
public:
    float m_flAlphaScale;
    float m_flRadiusScale;
    float m_flSelfIllumScale;
    // Color m_ColorTint;
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hTextureOverride;
    char pad_025[12];
};

class CBaseFlexAlias_funCBaseFlex : public CBaseFlex {
public:
    char pad_025[2736];
};

class CScriptItem : public CItem {
public:
    MoveType_t m_MoveTypeOverride;
    char pad_026[15];
};

class CRagdollPropAlias_physics_prop_ragdoll : public CRagdollProp {
public:
    char pad_029[2928];
};

class CRagdollPropAttached : public CRagdollProp {
public:
    uint32_t m_boneIndexAttached;
    uint32_t m_ragdollAttachedObjectIndex;
    // Vector m_attachmentPointBoneSpace;
    // Vector m_attachmentPointRagdollSpace;
    char pad_029[24];
    bool m_bShouldDetach;
    char pad_030[15];
    bool m_bShouldDeleteAttachedActivationRecord;
    char pad_031[15];
};

class CPropDoorRotating : public CBasePropDoor {
public:
    // Vector m_vecAxis;
    char pad_038[12];
    float m_flDistance;
    PropDoorRotatingSpawnPos_t m_eSpawnPosition;
    PropDoorRotatingOpenDirection_e m_eOpenDirection;
    PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection;
    doorCheck_e m_eDefaultCheckDirection;
    float m_flAjarAngle;
    // QAngle m_angRotationAjarDeprecated;
    // QAngle m_angRotationClosed;
    // QAngle m_angRotationOpenForward;
    // QAngle m_angRotationOpenBack;
    // QAngle m_angGoal;
    // Vector m_vecForwardBoundsMin;
    // Vector m_vecForwardBoundsMax;
    // Vector m_vecBackBoundsMin;
    // Vector m_vecBackBoundsMax;
    char pad_039[108];
    bool m_bAjarDoorShouldntAlwaysOpen;
    // CHandle< CEntityBlocker > m_hEntityBlocker;
    char pad_040[15];
};

class CPropDoorRotatingBreakable : public CPropDoorRotating {
public:
    bool m_bBreakable;
    bool m_isAbleToCloseAreaPortals;
    int32_t m_currentDamageState;
    // CUtlVector< CUtlSymbolLarge > m_damageStates;
    char pad_041[24];
};

class CScriptTriggerHurt : public CTriggerHurt {
public:
    // Vector m_vExtent;
    char pad_028[2336];
};

class CScriptTriggerMultiple : public CTriggerMultiple {
public:
    // Vector m_vExtent;
    char pad_026[2232];
};

class CTriggerOnce : public CTriggerMultiple {
public:
    char pad_026[2216];
};

class CScriptTriggerOnce : public CTriggerOnce {
public:
    // Vector m_vExtent;
    char pad_027[2232];
};

class CTriggerLook : public CTriggerOnce {
public:
    // CHandle< CBaseEntity > m_hLookTarget;
    char pad_027[4];
    float m_flFieldOfView;
    float m_flLookTime;
    float m_flLookTimeTotal;
    GameTime_t m_flLookTimeLast;
    float m_flTimeoutDuration;
    bool m_bTimeoutFired;
    bool m_bIsLooking;
    bool m_b2DFOV;
    bool m_bUseVelocity;
    bool m_bTestOcclusion;
    bool m_bTestAllVisibleOcclusion;
    CEntityIOOutput m_OnTimeout;
    CEntityIOOutput m_OnStartLook;
    CEntityIOOutput m_OnEndLook;
};

class CTriggerImpact : public CTriggerMultiple {
public:
    float m_flMagnitude;
    float m_flNoise;
    float m_flViewkick;
    // CEntityOutputTemplate< Vector, Vector > m_pOutputForce;
    char pad_026[44];
};

class CDynamicNavConnectionsVolume : public CTriggerMultiple {
public:
    // CUtlSymbolLarge m_iszConnectionTarget;
    // CUtlVector< DynamicVolumeDef_t > m_vecConnections;
    // CGlobalSymbol m_sTransitionType;
    char pad_026[40];
    bool m_bConnectionsEnabled;
    float m_flTargetAreaSearchRadius;
    float m_flUpdateDistance;
    float m_flMaxConnectionDistance;
};

class CCSWeaponBase : public CBasePlayerWeapon {
public:
    bool m_bRemoveable;
    bool m_bPlayerAmmoStockOnPickup;
    bool m_bRequireUseToTouch;
    WeaponGameplayAnimState m_iWeaponGameplayAnimState;
    GameTime_t m_flWeaponGameplayAnimStateTimestamp;
    GameTime_t m_flInspectCancelCompleteTime;
    bool m_bInspectPending;
    bool m_bInspectShouldLoop;
    char pad_029[40];
    int32_t m_nLastEmptySoundCmdNum;
    char pad_030[24];
    bool m_bFireOnEmpty;
    CEntityIOOutput m_OnPlayerPickup;
    CSWeaponMode m_weaponMode;
    float m_flTurningInaccuracyDelta;
    // Vector m_vecTurningInaccuracyEyeDirLast;
    char pad_031[12];
    float m_flTurningInaccuracy;
    float m_fAccuracyPenalty;
    GameTime_t m_flLastAccuracyUpdateTime;
    float m_fAccuracySmoothedForZoom;
    int32_t m_iRecoilIndex;
    float m_flRecoilIndex;
    bool m_bBurstMode;
    GameTick_t m_nPostponeFireReadyTicks;
    float m_flPostponeFireReadyFrac;
    bool m_bInReload;
    GameTime_t m_flDroppedAtTime;
    bool m_bIsHauledBack;
    bool m_bSilencerOn;
    GameTime_t m_flTimeSilencerSwitchComplete;
    float m_flWeaponActionPlaybackRate;
    int32_t m_iOriginalTeamNumber;
    int32_t m_iMostRecentTeamNumber;
    bool m_bDroppedNearBuyZone;
    float m_flNextAttackRenderTimeOffset;
    char pad_032[20];
    bool m_bCanBePickedUp;
    bool m_bUseCanOverrideNextOwnerTouchTime;
    GameTime_t m_nextOwnerTouchTime;
    GameTime_t m_nextPrevOwnerTouchTime;
    GameTime_t m_nextPrevOwnerUseTime;
    // CHandle< CCSPlayerPawn > m_hPrevOwner;
    GameTick_t m_nDropTick;
    bool m_bWasActiveWeaponWhenDropped;
    char pad_033[31];
    bool m_donated;
    GameTime_t m_fLastShotTime;
    bool m_bWasOwnedByCT;
    bool m_bWasOwnedByTerrorist;
    int32_t m_numRemoveUnownedWeaponThink;
    CIronSightController m_IronSightController;
    int32_t m_iIronSightMode;
    GameTime_t m_flLastLOSTraceFailureTime;
    float m_flWatTickOffset;
    GameTime_t m_flLastShakeTime;
    char pad_034[420];
};

class CCSWeaponBaseGun : public CCSWeaponBase {
public:
    int32_t m_zoomLevel;
    int32_t m_iBurstShotsRemaining;
    char pad_035[8];
    int32_t m_silencedModelIndex;
    bool m_inPrecache;
    bool m_bNeedsBoltAction;
    int32_t m_nRevolverCylinderIdx;
    bool m_bSkillReloadAvailable;
    bool m_bSkillReloadLiftedReloadKey;
    bool m_bSkillBoltInterruptAvailable;
    bool m_bSkillBoltLiftedFireKey;
};

class CCSWeaponBaseShotgun : public CCSWeaponBase {
public:
    char pad_035[4400];
};

class CC4 : public CCSWeaponBase {
public:
    // Vector m_vecLastValidPlayerHeldPosition;
    // Vector m_vecLastValidDroppedPosition;
    char pad_035[72];
    bool m_bDoValidDroppedPositionCheck;
    bool m_bStartedArming;
    GameTime_t m_fArmedTime;
    bool m_bBombPlacedAnimation;
    bool m_bIsPlantingViaUse;
    EntitySpottedState_t m_entitySpottedState;
    int32_t m_nSpotRules;
    bool m_bPlayedArmingBeeps[7];
    bool m_bBombPlanted;
    char pad_036[4];
};

class CWeaponCZ75a : public CCSWeaponBaseGun {
public:
    bool m_bMagazineRemoved;
    char pad_036[15];
};

class CDEagle : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponElite : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponTaser : public CCSWeaponBaseGun {
public:
    GameTime_t m_fFireTime;
    int32_t m_nLastAttackTick;
    char pad_036[8];
};

class CKnife : public CCSWeaponBase {
public:
    bool m_bFirstAttack;
    char pad_035[15];
};

class CMolotovProjectile : public CBaseCSGrenadeProjectile {
public:
    bool m_bIsIncGrenade;
    char pad_030[23];
    bool m_bDetonated;
    IntervalTimer m_stillTimer;
    char pad_031[208];
};

class CDecoyProjectile : public CBaseCSGrenadeProjectile {
public:
    char pad_030[24];
    int32_t m_nDecoyShotTick;
    int32_t m_shotsRemaining;
    GameTime_t m_fExpireTime;
    char pad_031[12];
    uint16_t m_decoyWeaponDefIndex;
    char pad_032[14];
};

class CSmokeGrenadeProjectile : public CBaseCSGrenadeProjectile {
public:
    char pad_030[40];
    int32_t m_nSmokeEffectTickBegin;
    bool m_bDidSmokeEffect;
    int32_t m_nRandomSeed;
    // Vector m_vSmokeColor;
    // Vector m_vSmokeDetonationPos;
    // CNetworkUtlVectorBase< uint8 > m_VoxelFrameData;
    char pad_031[52];
    int32_t m_nVoxelFrameDataSize;
    int32_t m_nVoxelUpdate;
    GameTime_t m_flLastBounce;
    GameTime_t m_fllastSimulationTime;
    char pad_032[8832];
    bool m_bExplodeFromInferno;
    bool m_bDidGroundScorch;
    char pad_033[6];
};

class CBaseCSGrenade : public CCSWeaponBase {
public:
    bool m_bRedraw;
    bool m_bIsHeldByPlayer;
    bool m_bPinPulled;
    bool m_bJumpThrow;
    bool m_bThrowAnimating;
    GameTime_t m_fThrowTime;
    float m_flThrowStrength;
    GameTime_t m_fDropTime;
    GameTime_t m_fPinPullTime;
    bool m_bJustPulledPin;
    GameTick_t m_nNextHoldTick;
    float m_flNextHoldFrac;
    // CHandle< CCSWeaponBase > m_hSwitchToWeaponAfterThrow;
    char pad_035[28];
};

class CWeaponBaseItem : public CCSWeaponBase {
public:
    bool m_bSequenceInProgress;
    bool m_bRedraw;
    char pad_035[14];
};

class CItem_Healthshot : public CWeaponBaseItem {
public:
    char pad_036[4416];
};

class CHostageExpresserShim : public CBaseCombatCharacter {
public:
    CAI_Expresser* m_pExpresser;
    char pad_027[8];
};

class CHostage : public CHostageExpresserShim {
public:
    CEntityIOOutput m_OnHostageBeginGrab;
    CEntityIOOutput m_OnFirstPickedUp;
    CEntityIOOutput m_OnDroppedNotRescued;
    CEntityIOOutput m_OnRescued;
    EntitySpottedState_t m_entitySpottedState;
    int32_t m_nSpotRules;
    uint32_t m_uiHostageSpawnExclusionGroupMask;
    uint32_t m_nHostageSpawnRandomFactor;
    bool m_bRemove;
    // Vector m_vel;
    char pad_028[15];
    bool m_isRescued;
    bool m_jumpedThisFrame;
    int32_t m_nHostageState;
    // CHandle< CBaseEntity > m_leader;
    // CHandle< CCSPlayerPawnBase > m_lastLeader;
    CountdownTimer m_reuseTimer;
    bool m_hasBeenUsed;
    // Vector m_accel;
    char pad_029[15];
    bool m_isRunning;
    bool m_isCrouching;
    CountdownTimer m_jumpTimer;
    bool m_isWaitingForLeader;
    char pad_030[8101];
    CountdownTimer m_repathTimer;
    CountdownTimer m_inhibitDoorTimer;
    char pad_031[109];
    CountdownTimer m_inhibitObstacleAvoidanceTimer;
    CountdownTimer m_wiggleTimer;
    char pad_032[4];
    bool m_isAdjusted;
    bool m_bHandsHaveBeenCut;
    // CHandle< CCSPlayerPawn > m_hHostageGrabber;
    GameTime_t m_fLastGrabTime;
    // Vector m_vecPositionWhenStartedDroppingToGround;
    // Vector m_vecGrabbedPos;
    GameTime_t m_flRescueStartTime;
    GameTime_t m_flGrabSuccessTime;
    GameTime_t m_flDropStartTime;
    int32_t m_nApproachRewardPayouts;
    int32_t m_nPickupEventCount;
    // Vector m_vecSpawnGroundPos;
    // VectorWS m_vecHostageResetPosition;
    char pad_033[76];
};

class CHostageAlias_info_hostage_spawn : public CHostage {
public:
    char pad_034[11776];
};

class CItemDefuserAlias_item_defuser : public CItemDefuser {
public:
    char pad_027[2784];
};

class CAK47 : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponAug : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponAWP : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponBizon : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponFamas : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponFiveSeven : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponG3SG1 : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponGalilAR : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponGlock : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponHKP2000 : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponUSPSilencer : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponM4A1 : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponM4A1Silencer : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponMAC10 : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponMag7 : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponMP5SD : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponMP7 : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponMP9 : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponNegev : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponP250 : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponP90 : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponSCAR20 : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponSG556 : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponSSG08 : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponTec9 : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponUMP45 : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponM249 : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponRevolver : public CCSWeaponBaseGun {
public:
    char pad_036[4432];
};

class CWeaponNOVA : public CCSWeaponBaseShotgun {
public:
    char pad_036[4400];
};

class CWeaponSawedoff : public CCSWeaponBaseShotgun {
public:
    char pad_036[4400];
};

class CWeaponXM1014 : public CCSWeaponBaseShotgun {
public:
    char pad_036[4400];
};

class CMolotovGrenade : public CBaseCSGrenade {
public:
    char pad_036[4464];
};

class CIncendiaryGrenade : public CMolotovGrenade {
public:
    char pad_037[4464];
};

class CDecoyGrenade : public CBaseCSGrenade {
public:
    char pad_036[4464];
};

class CFlashbang : public CBaseCSGrenade {
public:
    char pad_036[4464];
};

class CHEGrenade : public CBaseCSGrenade {
public:
    char pad_036[4464];
};

class CSmokeGrenade : public CBaseCSGrenade {
public:
    char pad_036[4480];
};

