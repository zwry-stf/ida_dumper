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

/// NavAttributeEnum
_enum NavAttributeEnum0 : uint64_t {
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

/// NavDirType
_enum NavDirType0 : uint32_t {
    NORTH = 0,
    EAST = 1,
    SOUTH = 2,
    WEST = 3,
    NUM_NAV_DIR_TYPE_DIRECTIONS = 4,
};

/// SequenceFinishNotifyState_t
_enum SequenceFinishNotifyState_t0 : uint8_t {
    eDoNotNotify = 0,
    eNotifyWhenFinished = 1,
    eNotifyTriggered = 2,
};

/// PointOrientConstraint_t
_enum PointOrientConstraint_t0 : uint32_t {
    eNone = 0,
    ePreserveUpAxis = 1,
};

/// PointOrientGoalDirectionType_t
_enum PointOrientGoalDirectionType_t0 : uint32_t {
    eAbsOrigin = 0,
    eCenter = 1,
    eHead = 2,
    eForward = 3,
    eEyesForward = 4,
};

/// PointTemplateOwnerSpawnGroupType_t
_enum PointTemplateOwnerSpawnGroupType_t0 : uint32_t {
    INSERT_INTO_POINT_TEMPLATE_SPAWN_GROUP = 0,
    INSERT_INTO_CURRENTLY_ACTIVE_SPAWN_GROUP = 1,
    INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP = 2,
};

/// PointTemplateClientOnlyEntityBehavior_t
_enum PointTemplateClientOnlyEntityBehavior_t0 : uint32_t {
    CREATE_FOR_CURRENTLY_CONNECTED_CLIENTS_ONLY = 0,
    CREATE_FOR_CLIENTS_WHO_CONNECT_LATER = 1,
};

/// PerformanceMode_t
_enum PerformanceMode_t0 : uint32_t {
    PM_NORMAL = 0,
    PM_NO_GIBS = 1,
};

/// BreakableContentsType_t
_enum BreakableContentsType_t0 : uint32_t {
    BC_DEFAULT = 0,
    BC_EMPTY = 1,
    BC_PROP_GROUP_OVERRIDE = 2,
    BC_PARTICLE_SYSTEM_OVERRIDE = 3,
};

/// DecalFlags_t
_enum DecalFlags_t0 : uint32_t {
    eNone = 0,
    eCannotClear = 1,
    eDecalProjectToBackfaces = 2,
    eAll = 4294967295,
    eAllButCannotClear = 4294967294,
};

/// AmmoPosition_t
_enum AmmoPosition_t0 : uint32_t {
    AMMO_POSITION_INVALID = 4294967295,
    AMMO_POSITION_PRIMARY = 0,
    AMMO_POSITION_SECONDARY = 1,
    AMMO_POSITION_COUNT = 2,
};

/// ChatIgnoreType_t
_enum ChatIgnoreType_t0 : uint32_t {
    CHAT_IGNORE_NONE = 0,
    CHAT_IGNORE_ALL = 1,
    CHAT_IGNORE_TEAM = 2,
};

/// FixAngleSet_t
_enum FixAngleSet_t0 : uint8_t {
    None = 0,
    Absolute = 1,
    Relative = 2,
};

/// filter_t
_enum filter_t0 : uint32_t {
    FILTER_AND = 0,
    FILTER_OR = 1,
};

/// GameAnimEventIndex_t
_enum GameAnimEventIndex_t0 : uint32_t {
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

/// ObserverMode_t
_enum ObserverMode_t0 : uint32_t {
    OBS_MODE_NONE = 0,
    OBS_MODE_FIXED = 1,
    OBS_MODE_IN_EYE = 2,
    OBS_MODE_CHASE = 3,
    OBS_MODE_ROAMING = 4,
    NUM_OBSERVER_MODES = 5,
};

/// ObserverInterpState_t
_enum ObserverInterpState_t0 : uint32_t {
    OBSERVER_INTERP_NONE = 0,
    OBSERVER_INTERP_STARTING = 1,
    OBSERVER_INTERP_TRAVELING = 2,
    OBSERVER_INTERP_SETTLING = 3,
};

/// RumbleEffect_t
_enum RumbleEffect_t0 : uint32_t {
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

/// WeaponSound_t
_enum WeaponSound_t0 : uint32_t {
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

/// AmmoFlags_t
_enum AmmoFlags_t0 : uint32_t {
    AMMO_FORCE_DROP_IF_CARRIED = 1,
    AMMO_RESERVE_STAYS_WITH_WEAPON = 2,
    AMMO_FLAG_MAX = 2,
};

/// EProceduralRagdollWeightIndexPropagationMethod
_enum EProceduralRagdollWeightIndexPropagationMethod0 : uint32_t {
    Bone = 0,
    BoneAndChildren = 1,
};

/// AnimGraphDebugDrawType_t
_enum AnimGraphDebugDrawType_t0 : uint32_t {
    None = 0,
    WsPosition = 1,
    MsPosition = 2,
    WsDirection = 3,
    MsDirection = 4,
};

/// ExternalAnimGraphInactiveBehavior_t
_enum ExternalAnimGraphInactiveBehavior_t0 : uint8_t {
    eNone = 0,
    eUnbind = 1,
    eUnbindAndDelete = 2,
};

/// EDestructiblePartRadiusDamageApplyType
_enum EDestructiblePartRadiusDamageApplyType0 : uint32_t {
    ScaleByExplosionRadius = 0,
    PrioritizeClosestPart = 1,
};

/// EDestructiblePartDamagePassThroughType
_enum EDestructiblePartDamagePassThroughType0 : uint32_t {
    Normal = 0,
    Absorb = 1,
    InvincibleAbsorb = 2,
    InvinciblePassthrough = 3,
};

/// DestructiblePartDestructionDeathBehavior_t
_enum DestructiblePartDestructionDeathBehavior_t0 : uint32_t {
    eDoNotKill = 0,
    eKill = 1,
    eGib = 2,
    eRemove = 3,
};

/// EDestructibleParts_DestroyParameterFlags
_enum EDestructibleParts_DestroyParameterFlags0 : uint32_t {
    None = 0,
    GenerateBreakpieces = 1,
    SetBodyGroupAndCollisionState = 2,
    EnableFlinches = 4,
    ForceDamageApply = 8,
    IgnoreKillEntityFlag = 16,
    IgnoreHealthCheck = 32,
    Default = 7,
};

/// TakeDamageFlags_t
_enum TakeDamageFlags_t0 : uint64_t {
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

/// DamageTypes_t
_enum DamageTypes_t0 : uint32_t {
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

/// BaseExplosionTypes_t
_enum BaseExplosionTypes_t0 : uint32_t {
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

/// CDebugOverlayFilterType_t
_enum CDebugOverlayFilterType_t0 : uint32_t {
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

/// CDebugOverlayFilterTextType_t
_enum CDebugOverlayFilterTextType_t0 : uint32_t {
    FILTER_TEXT_NONE = 0,
    MATCH = 1,
    HIERARCHY = 2,
    COUNT = 3,
};

/// CDebugOverlayCombinedTypes_t
_enum CDebugOverlayCombinedTypes_t0 : uint32_t {
    ALL = 0,
    ANY = 1,
    COUNT = 2,
};

/// HierarchyType_t
_enum HierarchyType_t0 : uint32_t {
    HIERARCHY_NONE = 0,
    HIERARCHY_BONE_MERGE = 1,
    HIERARCHY_ATTACHMENT = 2,
    HIERARCHY_ABSORIGIN = 3,
    HIERARCHY_BONE = 4,
    HIERARCHY_TYPE_COUNT = 5,
};

/// Hull_t
_enum Hull_t0 : uint32_t {
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

/// CanPlaySequence_t
_enum CanPlaySequence_t0 : uint32_t {
    CANNOT_PLAY = 0,
    CAN_PLAY_NOW = 1,
    CAN_PLAY_ENQUEUED = 2,
};

/// ForcedCrouchState_t
_enum ForcedCrouchState_t0 : uint32_t {
    FORCEDCROUCH_NONE = 0,
    FORCEDCROUCH_CROUCHED = 1,
    FORCEDCROUCH_UNCROUCHED = 2,
};

/// ScriptedOnDeath_t
_enum ScriptedOnDeath_t0 : uint32_t {
    SS_ONDEATH_NOT_APPLICABLE = 4294967295,
    SS_ONDEATH_UNDEFINED = 0,
    SS_ONDEATH_RAGDOLL = 1,
    SS_ONDEATH_ANIMATED_DEATH = 2,
};

/// IChoreoServices::ScriptState_t
_enum IChoreoServices__ScriptState_t0 : uint32_t {
    SCRIPT_PLAYING = 0,
    SCRIPT_WAIT = 1,
    SCRIPT_POST_IDLE = 2,
    SCRIPT_CLEANUP = 3,
    SCRIPT_MOVE_TO_MARK = 4,
};

/// IChoreoServices::ChoreoState_t
_enum IChoreoServices__ChoreoState_t0 : uint32_t {
    STATE_PRE_SCRIPT = 0,
    STATE_WAIT_FOR_SCRIPT = 1,
    STATE_WALK_TO_MARK = 2,
    STATE_SYNCHRONIZE_SCRIPT = 3,
    STATE_PLAY_SCRIPT = 4,
    STATE_PLAY_SCRIPT_POST_IDLE = 5,
    STATE_PLAY_SCRIPT_POST_IDLE_DONE = 6,
};

/// InputBitMask_t
_enum InputBitMask_t0 : uint64_t {
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

/// EInButtonState
_enum EInButtonState0 : uint32_t {
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

/// ShakeCommand_t
_enum ShakeCommand_t0 : uint32_t {
    SHAKE_START = 0,
    SHAKE_STOP = 1,
    SHAKE_AMPLITUDE = 2,
    SHAKE_FREQUENCY = 3,
    SHAKE_START_RUMBLEONLY = 4,
    SHAKE_START_NORUMBLE = 5,
};

/// TimelineCompression_t
_enum TimelineCompression_t0 : uint32_t {
    TIMELINE_COMPRESSION_SUM = 0,
    TIMELINE_COMPRESSION_COUNT_PER_INTERVAL = 1,
    TIMELINE_COMPRESSION_AVERAGE = 2,
    TIMELINE_COMPRESSION_AVERAGE_BLEND = 3,
    TIMELINE_COMPRESSION_TOTAL = 4,
};

/// DebugOverlayBits_t
_enum DebugOverlayBits_t0 : uint64_t {
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

/// ChoreoLookAtMode_t
_enum ChoreoLookAtMode_t0 : uint32_t {
    eInvalid = 4294967295,
    eChest = 0,
    eHead = 1,
    eEyesOnly = 2,
};

/// ChoreoLookAtSpeed_t
_enum ChoreoLookAtSpeed_t0 : uint32_t {
    eInvalid = 4294967295,
    eSlow = 0,
    eMedium = 1,
    eFast = 2,
};

/// Flags_t
_enum Flags_t0 : uint32_t {
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

/// MoveType_t
_enum MoveType_t0 : uint8_t {
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

/// MoveCollide_t
_enum MoveCollide_t0 : uint8_t {
    MOVECOLLIDE_DEFAULT = 0,
    MOVECOLLIDE_FLY_BOUNCE = 1,
    MOVECOLLIDE_FLY_CUSTOM = 2,
    MOVECOLLIDE_FLY_SLIDE = 3,
    MOVECOLLIDE_COUNT = 4,
    MOVECOLLIDE_MAX_BITS = 3,
};

/// SolidType_t
_enum SolidType_t0 : uint8_t {
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

/// BrushSolidities_e
_enum BrushSolidities_e0 : uint32_t {
    BRUSHSOLID_TOGGLE = 0,
    BRUSHSOLID_NEVER = 1,
    BRUSHSOLID_ALWAYS = 2,
};

/// EntityEffects_t
_enum EntityEffects_t0 : uint16_t {
    DEPRICATED_EF_NOINTERP = 8,
    EF_NOSHADOW = 16,
    EF_NODRAW = 32,
    EF_NORECEIVESHADOW = 64,
    EF_PARENT_ANIMATES = 512,
    EF_NODRAW_BUT_TRANSMIT = 1024,
    EF_MAX_BITS = 10,
};

/// RenderMode_t
_enum RenderMode_t0 : uint8_t {
    kRenderNormal = 0,
    kRenderTransAlpha = 1,
    kRenderNone = 2,
    kRenderModeCount = 3,
};

/// RenderFx_t
_enum RenderFx_t0 : uint8_t {
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

/// CRR_Response::ResponseEnum_t
_enum CRR_Response__ResponseEnum_t0 : uint32_t {
    MAX_RESPONSE_NAME = 192,
    MAX_RULE_NAME = 128,
};

/// LessonPanelLayoutFileTypes_t
_enum LessonPanelLayoutFileTypes_t0 : uint32_t {
    LAYOUT_HAND_DEFAULT = 0,
    LAYOUT_WORLD_DEFAULT = 1,
    LAYOUT_CUSTOM = 2,
};

/// Touch_t
_enum Touch_t0 : uint32_t {
    touch_none = 0,
    touch_player_only = 1,
    touch_npc_only = 2,
    touch_player_or_npc = 3,
    touch_player_or_npc_or_physicsprop = 4,
};

/// navproperties_t
_enum navproperties_t0 : uint32_t {
    NAV_IGNORE = 1,
};

/// CLogicBranchList::LogicBranchListenerLastState_t
_enum CLogicBranchList__LogicBranchListenerLastState_t : uint32_t {
    LOGIC_BRANCH_LISTENER_NOT_INIT = 0,
    LOGIC_BRANCH_LISTENER_ALL_TRUE = 1,
    LOGIC_BRANCH_LISTENER_ALL_FALSE = 2,
    LOGIC_BRANCH_LISTENER_MIXED = 3,
};

/// EntFinderMethod_t
_enum EntFinderMethod_t0 : uint32_t {
    ENT_FIND_METHOD_NEAREST = 0,
    ENT_FIND_METHOD_FARTHEST = 1,
    ENT_FIND_METHOD_RANDOM = 2,
};

/// ValueRemapperInputType_t
_enum ValueRemapperInputType_t0 : uint32_t {
    InputType_PlayerShootPosition = 0,
    InputType_PlayerShootPositionAroundAxis = 1,
};

/// ValueRemapperOutputType_t
_enum ValueRemapperOutputType_t0 : uint32_t {
    OutputType_AnimationCycle = 0,
    OutputType_RotationX = 1,
    OutputType_RotationY = 2,
    OutputType_RotationZ = 3,
};

/// ValueRemapperHapticsType_t
_enum ValueRemapperHapticsType_t0 : uint32_t {
    HaticsType_Default = 0,
    HaticsType_None = 1,
};

/// ValueRemapperMomentumType_t
_enum ValueRemapperMomentumType_t0 : uint32_t {
    MomentumType_None = 0,
    MomentumType_Friction = 1,
    MomentumType_SpringTowardSnapValue = 2,
    MomentumType_SpringAwayFromSnapValue = 3,
};

/// ValueRemapperRatchetType_t
_enum ValueRemapperRatchetType_t0 : uint32_t {
    RatchetType_Absolute = 0,
    RatchetType_EachEngage = 1,
};

/// PointWorldTextJustifyHorizontal_t
_enum PointWorldTextJustifyHorizontal_t0 : uint32_t {
    POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_LEFT = 0,
    POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_CENTER = 1,
    POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_RIGHT = 2,
};

/// PointWorldTextJustifyVertical_t
_enum PointWorldTextJustifyVertical_t0 : uint32_t {
    POINT_WORLD_TEXT_JUSTIFY_VERTICAL_BOTTOM = 0,
    POINT_WORLD_TEXT_JUSTIFY_VERTICAL_CENTER = 1,
    POINT_WORLD_TEXT_JUSTIFY_VERTICAL_TOP = 2,
};

/// PointWorldTextReorientMode_t
_enum PointWorldTextReorientMode_t0 : uint32_t {
    POINT_WORLD_TEXT_REORIENT_NONE = 0,
    POINT_WORLD_TEXT_REORIENT_AROUND_UP = 1,
};

/// doorCheck_e
_enum doorCheck_e0 : uint32_t {
    DOOR_CHECK_FORWARD = 0,
    DOOR_CHECK_BACKWARD = 1,
    DOOR_CHECK_FULL = 2,
};

/// PropDoorRotatingSpawnPos_t
_enum PropDoorRotatingSpawnPos_t0 : uint32_t {
    DOOR_SPAWN_CLOSED = 0,
    DOOR_SPAWN_OPEN_FORWARD = 1,
    DOOR_SPAWN_OPEN_BACK = 2,
    DOOR_SPAWN_AJAR = 3,
};

/// PropDoorRotatingOpenDirection_e
_enum PropDoorRotatingOpenDirection_e0 : uint32_t {
    DOOR_ROTATING_OPEN_BOTH_WAYS = 0,
    DOOR_ROTATING_OPEN_FORWARD = 1,
    DOOR_ROTATING_OPEN_BACKWARD = 2,
};

/// SceneOnPlayerDeath_t
_enum SceneOnPlayerDeath_t0 : uint32_t {
    SCENE_ONPLAYERDEATH_DO_NOTHING = 0,
    SCENE_ONPLAYERDEATH_CANCEL = 1,
};

/// ScriptedConflictResponse_t
_enum ScriptedConflictResponse_t0 : uint32_t {
    SS_CONFLICT_ENQUEUE = 0,
    SS_CONFLICT_INTERRUPT = 1,
};

/// TRAIN_CODE
_enum TRAIN_CODE0 : uint32_t {
    TRAIN_SAFE = 0,
    TRAIN_BLOCKING = 1,
    TRAIN_FOLLOWING = 2,
};

/// eSplinePushType
_enum eSplinePushType0 : uint32_t {
    k_eSplinePushAlong = 0,
    k_eSplinePushAway = 1,
    k_eSplinePushTowards = 2,
};

/// NPCFollowFormation_t
_enum NPCFollowFormation_t0 : uint32_t {
    Default = 4294967295,
    CloseCircle = 0,
    WideCircle = 1,
    MediumCircle = 5,
    Sidekick = 6,
};

/// PulseNPCCondition_t
_enum PulseNPCCondition_t0 : uint32_t {
    COND_SEE_PLAYER = 1,
    COND_LOST_PLAYER = 2,
    COND_HEAR_PLAYER = 3,
    COND_PLAYER_PUSHING = 4,
    COND_NO_PRIMARY_AMMO = 5,
};

/// PulseTraceContents_t
_enum PulseTraceContents_t0 : uint32_t {
    STATIC_LEVEL = 0,
    SOLID = 1,
};

/// PulseCollisionGroup_t
_enum PulseCollisionGroup_t0 : uint32_t {
    DEFAULT = 0,
};

/// SoundEventStartType_t
_enum SoundEventStartType_t0 : uint32_t {
    SOUNDEVENT_START_PLAYER = 0,
    SOUNDEVENT_START_WORLD = 1,
    SOUNDEVENT_START_ENTITY = 2,
};

/// TOGGLE_STATE
_enum TOGGLE_STATE0 : uint32_t {
    TS_AT_TOP = 0,
    TS_AT_BOTTOM = 1,
    TS_GOING_UP = 2,
    TS_GOING_DOWN = 3,
    DOOR_OPEN = 0,
    DOOR_CLOSED = 1,
    DOOR_OPENING = 2,
    DOOR_CLOSING = 3,
};

/// FuncDoorSpawnPos_t
_enum FuncDoorSpawnPos_t0 : uint32_t {
    FUNC_DOOR_SPAWN_CLOSED = 0,
    FUNC_DOOR_SPAWN_OPEN = 1,
};

/// Explosions
_enum Explosions0 : uint32_t {
    expRandom = 0,
    expDirected = 1,
    expUsePrecise = 2,
};

/// Materials
_enum Materials0 : uint32_t {
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

/// EOverrideBlockLOS_t
_enum EOverrideBlockLOS_t0 : uint32_t {
    BLOCK_LOS_DEFAULT = 0,
    BLOCK_LOS_FORCE_FALSE = 1,
    BLOCK_LOS_FORCE_TRUE = 2,
};

/// MoveLinearAuthoredPos_t
_enum MoveLinearAuthoredPos_t0 : uint32_t {
    MOVELINEAR_AUTHORED_AT_START_POSITION = 0,
    MOVELINEAR_AUTHORED_AT_OPEN_POSITION = 1,
    MOVELINEAR_AUTHORED_AT_CLOSED_POSITION = 2,
};

/// CFuncMover::Move_t
_enum CFuncMover__Move_t : uint32_t {
    MOVE_LOOP = 0,
    MOVE_OSCILLATE = 1,
    MOVE_STOP_AT_END = 2,
};

/// CFuncMover::OrientationUpdate_t
_enum CFuncMover__OrientationUpdate_t : uint32_t {
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

/// CFuncMover::TransitionToPathNodeAction_t
_enum CFuncMover__TransitionToPathNodeAction_t : uint32_t {
    TRANSITION_TO_PATH_NODE_ACTION_NONE = 0,
    TRANSITION_TO_PATH_NODE_ACTION_START_FORWARD = 1,
    TRANSITION_TO_PATH_NODE_ACTION_START_REVERSE = 2,
    TRANSITION_TO_PATH_NODE_TRANSITIONING = 3,
};

/// CFuncMover::FollowConstraint_t
_enum CFuncMover__FollowConstraint_t : uint32_t {
    FOLLOW_CONSTRAINT_DISTANCE = 0,
    FOLLOW_CONSTRAINT_SPRING = 1,
};

/// CFuncMover::FollowEntityDirection_t
_enum CFuncMover__FollowEntityDirection_t : uint32_t {
    FOLLOW_ENTITY_BIDIRECTIONAL = 0,
    FOLLOW_ENTITY_FORWARD = 1,
    FOLLOW_ENTITY_REVERSE = 2,
};

/// RotatorTargetSpace_t
_enum RotatorTargetSpace_t0 : uint32_t {
    ROTATOR_TARGET_WORLDSPACE = 0,
    ROTATOR_TARGET_LOCALSPACE = 1,
};

/// CFuncRotator::Rotate_t
_enum CFuncRotator__Rotate_t : uint32_t {
    ROTATE_LOOP = 0,
    ROTATE_OSCILLATE = 1,
    ROTATE_STOP_AT_END = 2,
    ROTATE_LOOK_AT_TARGET = 3,
    ROTATE_LOOK_AT_TARGET_ONLY_YAW = 4,
    ROTATE_RETURN_TO_INITIAL_ORIENTATION = 5,
};

/// TestInputOutputCombinationsEnum_t
_enum TestInputOutputCombinationsEnum_t0 : uint32_t {
    ZERO = 0,
    ONE = 1,
    TWO = 2,
};

/// TrackOrientationType_t
_enum TrackOrientationType_t0 : uint32_t {
    TrackOrientation_Fixed = 0,
    TrackOrientation_FacePath = 1,
    TrackOrientation_FacePathAngles = 2,
};

/// HoverPoseFlags_t
_enum HoverPoseFlags_t0 : uint8_t {
    eNone = 0,
    ePosition = 1,
    eAngles = 2,
};

/// CPhysicsProp::CrateType_t
_enum CPhysicsProp__CrateType_t : uint32_t {
    CRATE_SPECIFIC_ITEM = 0,
    CRATE_TYPE_COUNT = 1,
};

/// ESceneRequestState_t
_enum ESceneRequestState_t0 : uint32_t {
    INACTIVE = 0,
    ACTIVE = 1,
};

/// TrainVelocityType_t
_enum TrainVelocityType_t0 : uint32_t {
    TrainVelocity_Instantaneous = 0,
    TrainVelocity_LinearBlend = 1,
    TrainVelocity_EaseInEaseOut = 2,
};

/// TrainOrientationType_t
_enum TrainOrientationType_t0 : uint32_t {
    TrainOrientation_Fixed = 0,
    TrainOrientation_AtPathTracks = 1,
    TrainOrientation_LinearBlend = 2,
    TrainOrientation_EaseInEaseOut = 3,
};

/// RelativeLocationType_t
_enum RelativeLocationType_t0 : uint8_t {
    WORLD_SPACE_POSITION = 0,
    RELATIVE_TO_ENTITY_IN_LOCAL_SPACE = 1,
    RELATIVE_TO_ENTITY_YAW_ONLY = 2,
    RELATIVE_TO_ENTITY_IN_WORLD_SPACE = 3,
};

/// NavScope_t
_enum NavScope_t0 : uint8_t {
    eGround = 0,
    eAir = 1,
    eCount = 2,
    eFirst = 0,
    eInvalid = 255,
};

/// NavScopeFlags_t
_enum NavScopeFlags_t0 : uint8_t {
    eGround = 1,
    eAir = 2,
    eAll = 3,
    eNone = 0,
};

/// BeamType_t
_enum BeamType_t0 : uint32_t {
    BEAM_INVALID = 0,
    BEAM_POINTS = 1,
    BEAM_ENTPOINT = 2,
    BEAM_ENTS = 3,
    BEAM_HOSE = 4,
    BEAM_SPLINE = 5,
    BEAM_LASER = 6,
};

/// BeamClipStyle_t
_enum BeamClipStyle_t0 : uint32_t {
    kNOCLIP = 0,
    kGEOCLIP = 1,
    kMODELCLIP = 2,
    kBEAMCLIPSTYLE_NUMBITS = 2,
};

/// SurroundingBoundsType_t
_enum SurroundingBoundsType_t0 : uint8_t {
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

/// ShatterDamageCause
_enum ShatterDamageCause0 : uint8_t {
    SHATTERDAMAGE_BULLET = 0,
    SHATTERDAMAGE_MELEE = 1,
    SHATTERDAMAGE_THROWN = 2,
    SHATTERDAMAGE_SCRIPT = 3,
    SHATTERDAMAGE_EXPLOSIVE = 4,
};

/// ShatterGlassStressType
_enum ShatterGlassStressType0 : uint8_t {
    SHATTERGLASS_BLUNT = 0,
    SHATTERGLASS_BALLISTIC = 1,
    SHATTERGLASS_PULSE = 2,
    SHATTERGLASS_EXPLOSIVE = 3,
};

/// OnFrame
_enum OnFrame0 : uint8_t {
    ONFRAME_UNKNOWN = 0,
    ONFRAME_TRUE = 1,
    ONFRAME_FALSE = 2,
};

/// ShardSolid_t
_enum ShardSolid_t0 : uint8_t {
    SHARD_SOLID = 0,
    SHARD_DEBRIS = 1,
};

/// AnimLoopMode_t
_enum AnimLoopMode_t0 : uint32_t {
    ANIM_LOOP_MODE_INVALID = 4294967295,
    ANIM_LOOP_MODE_NOT_LOOPING = 0,
    ANIM_LOOP_MODE_LOOPING = 1,
    ANIM_LOOP_MODE_USE_SEQUENCE_SETTINGS = 2,
    ANIM_LOOP_MODE_COUNT = 3,
};

/// BodySectionAuthority_t
_enum BodySectionAuthority_t0 : uint32_t {
    eNone = 0,
    eLowerBody = 1,
    eUpperBody = 2,
    eFullBody = 3,
};

/// EntityAttachmentType_t
_enum EntityAttachmentType_t0 : uint32_t {
    eAbsOrigin = 0,
    eCenter = 1,
    eEyes = 2,
    eAttachment = 3,
};

/// EntitySubclassScope_t
_enum EntitySubclassScope_t0 : uint32_t {
    SUBCLASS_SCOPE_NONE = 4294967295,
    SUBCLASS_SCOPE_PRECIPITATION = 0,
    SUBCLASS_SCOPE_PLAYER_WEAPONS = 1,
    SUBCLASS_SCOPE_COUNT = 2,
};

/// SubclassVDataChangeType_t
_enum SubclassVDataChangeType_t0 : uint32_t {
    SUBCLASS_VDATA_CREATED = 0,
    SUBCLASS_VDATA_SUBCLASS_CHANGED = 1,
    SUBCLASS_VDATA_RELOADED = 2,
};

/// PlayerConnectedState
_enum PlayerConnectedState0 : uint32_t {
    PlayerNeverConnected = 4294967295,
    PlayerConnected = 0,
    PlayerConnecting = 1,
    PlayerReconnecting = 2,
    PlayerDisconnecting = 3,
    PlayerDisconnected = 4,
    PlayerReserved = 5,
};

/// EntityDistanceMode_t
_enum EntityDistanceMode_t0 : uint32_t {
    eOriginToOrigin = 0,
    eCenterToCenter = 1,
    eAxisToAxis = 2,
};

/// WeaponSwitchReason_t
_enum WeaponSwitchReason_t0 : uint32_t {
    eDrawn = 0,
    eEquipped = 1,
    eUserInitiatedSwitchToLast = 2,
    eUserInitiatedUIKeyPress = 3,
    eUserInitiatedSwitchHands = 4,
};

/// WeaponAttackType_t
_enum WeaponAttackType_t0 : uint32_t {
    eInvalid = 4294967295,
    ePrimary = 0,
    eSecondary = 1,
    eCount = 2,
};

/// vote_create_failed_t
_enum vote_create_failed_t0 : uint32_t {
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

/// ItemFlagTypes_t
_enum ItemFlagTypes_t0 : uint8_t {
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

/// EntityDisolveType_t
_enum EntityDisolveType_t0 : uint32_t {
    ENTITY_DISSOLVE_INVALID = 4294967295,
    ENTITY_DISSOLVE_NORMAL = 0,
    ENTITY_DISSOLVE_ELECTRICAL = 1,
    ENTITY_DISSOLVE_ELECTRICAL_LIGHT = 2,
    ENTITY_DISSOLVE_CORE = 3,
};

/// HitGroup_t
_enum HitGroup_t0 : uint32_t {
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

/// BloodType
_enum BloodType0 : uint32_t {
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

/// WaterLevel_t
_enum WaterLevel_t0 : uint8_t {
    WL_NotInWater = 0,
    WL_Feet = 1,
    WL_Knees = 2,
    WL_Waist = 3,
    WL_Chest = 4,
    WL_FullyUnderwater = 5,
    WL_Count = 6,
};

/// AnimationAlgorithm_t
_enum AnimationAlgorithm_t0 : uint8_t {
    eInvalid = 255,
    eNone = 0,
    eSequence = 1,
    eAnimGraph2 = 2,
    eAnimGraph2Secondary = 3,
    eAnimGraph1 = 4,
    eCount = 5,
};

/// DoorState_t
_enum DoorState_t0 : uint32_t {
    DOOR_STATE_CLOSED = 0,
    DOOR_STATE_OPENING = 1,
    DOOR_STATE_OPEN = 2,
    DOOR_STATE_CLOSING = 3,
    DOOR_STATE_AJAR = 4,
};

/// ShadowType_t
_enum ShadowType_t0 : uint32_t {
    SHADOWS_NONE = 0,
    SHADOWS_SIMPLE = 1,
};

/// Class_T
_enum Class_T0 : uint32_t {
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

/// Disposition_t
_enum Disposition_t0 : uint32_t {
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

/// LatchDirtyPermission_t
_enum LatchDirtyPermission_t0 : uint32_t {
    LATCH_DIRTY_DISALLOW = 0,
    LATCH_DIRTY_SERVER_CONTROLLED = 1,
    LATCH_DIRTY_CLIENT_SIMULATED = 2,
    LATCH_DIRTY_PREDICTION = 3,
    LATCH_DIRTY_FRAMESIMULATE = 4,
    LATCH_DIRTY_PARTICLE_SIMULATE = 5,
};

/// LifeState_t
_enum LifeState_t0 : uint32_t {
    LIFE_ALIVE = 0,
    LIFE_DYING = 1,
    LIFE_DEAD = 2,
    LIFE_RESPAWNABLE = 3,
    LIFE_RESPAWNING = 4,
    NUM_LIFESTATES = 5,
};

/// StanceType_t
_enum StanceType_t0 : uint32_t {
    STANCE_CURRENT = 4294967295,
    STANCE_DEFAULT = 0,
    STANCE_CROUCHING = 1,
    STANCE_PRONE = 2,
    NUM_STANCES = 3,
};

/// ModifyDamageReturn_t
_enum ModifyDamageReturn_t0 : uint32_t {
    CONTINUE_TO_APPLY_DAMAGE = 0,
    ABORT_DO_NOT_APPLY_DAMAGE = 1,
};

/// BeginDeathLifeStateTransition_t
_enum BeginDeathLifeStateTransition_t0 : uint8_t {
    TRANSITION_TO_LIFESTATE_DYING = 0,
    TRANSITION_TO_LIFESTATE_DEAD = 1,
};

/// EntityPlatformTypes_t
_enum EntityPlatformTypes_t0 : uint8_t {
    ENTITY_NOT_PLATFORM = 0,
    ENTITY_PLATFORM_PLAYER_FOLLOWS_YAW = 1,
    ENTITY_PLATFORM_PLAYER_IGNORES_YAW = 2,
};

/// WorldTextPanelHorizontalAlign_t
_enum WorldTextPanelHorizontalAlign_t0 : uint32_t {
    WORLDTEXT_HORIZONTAL_ALIGN_LEFT = 0,
    WORLDTEXT_HORIZONTAL_ALIGN_CENTER = 1,
    WORLDTEXT_HORIZONTAL_ALIGN_RIGHT = 2,
};

/// WorldTextPanelVerticalAlign_t
_enum WorldTextPanelVerticalAlign_t0 : uint32_t {
    WORLDTEXT_VERTICAL_ALIGN_TOP = 0,
    WORLDTEXT_VERTICAL_ALIGN_CENTER = 1,
    WORLDTEXT_VERTICAL_ALIGN_BOTTOM = 2,
};

/// WorldTextPanelOrientation_t
_enum WorldTextPanelOrientation_t0 : uint32_t {
    WORLDTEXT_ORIENTATION_DEFAULT = 0,
    WORLDTEXT_ORIENTATION_FACEUSER = 1,
    WORLDTEXT_ORIENTATION_FACEUSER_UPRIGHT = 2,
};

/// attributeprovidertypes_t
_enum attributeprovidertypes_t0 : uint32_t {
    PROVIDER_GENERIC = 0,
    PROVIDER_WEAPON = 1,
};

/// MoveMountingAmount_t
_enum MoveMountingAmount_t0 : uint32_t {
    MOVE_MOUNT_NONE = 0,
    MOVE_MOUNT_LOW = 1,
    MOVE_MOUNT_HIGH = 2,
    MOVE_MOUNT_MAXCOUNT = 3,
};

/// CSPlayerState
_enum CSPlayerState0 : uint32_t {
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

/// CSPlayerBlockingUseAction_t
_enum CSPlayerBlockingUseAction_t0 : uint32_t {
    k_CSPlayerBlockingUseAction_None = 0,
    k_CSPlayerBlockingUseAction_DefusingDefault = 1,
    k_CSPlayerBlockingUseAction_DefusingWithKit = 2,
    k_CSPlayerBlockingUseAction_HostageGrabbing = 3,
    k_CSPlayerBlockingUseAction_HostageDropping = 4,
    k_CSPlayerBlockingUseAction_MapLongUseEntity_Pickup = 5,
    k_CSPlayerBlockingUseAction_MapLongUseEntity_Place = 6,
    k_CSPlayerBlockingUseAction_MaxCount = 7,
};

/// GrenadeType_t
_enum GrenadeType_t0 : uint32_t {
    GRENADE_TYPE_EXPLOSIVE = 0,
    GRENADE_TYPE_FLASH = 1,
    GRENADE_TYPE_FIRE = 2,
    GRENADE_TYPE_DECOY = 3,
    GRENADE_TYPE_SMOKE = 4,
    GRENADE_TYPE_TOTAL = 5,
};

/// QuestProgress::Reason
_enum QuestProgress__Reason0 : uint32_t {
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

/// loadout_slot_t
_enum loadout_slot_t0 : uint32_t {
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

/// EContributionScoreFlag_t
_enum EContributionScoreFlag_t0 : uint8_t {
    k_EContributionScoreFlag_Default = 0,
    k_EContributionScoreFlag_Objective = 1,
    k_EContributionScoreFlag_Bullets = 2,
};

/// EKillTypes_t
_enum EKillTypes_t0 : uint8_t {
    KILL_NONE = 0,
    KILL_DEFAULT = 1,
    KILL_HEADSHOT = 2,
    KILL_BLAST = 3,
    KILL_BURN = 4,
    KILL_SLASH = 5,
    KILL_SHOCK = 6,
    KILLTYPE_COUNT = 7,
};

/// PreviewCharacterMode
_enum PreviewCharacterMode0 : uint32_t {
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

/// PreviewWeaponState
_enum PreviewWeaponState0 : uint32_t {
    DROPPED = 0,
    HOLSTERED = 1,
    DEPLOYED = 2,
    PLANTED = 3,
    INSPECT = 4,
    ICON = 5,
};

/// PreviewEOMCelebration
_enum PreviewEOMCelebration0 : uint32_t {
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

/// CSWeaponType
_enum CSWeaponType0 : uint32_t {
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

/// CSWeaponNameID
_enum CSWeaponNameID0 : uint32_t {
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

/// CSWeaponCategory
_enum CSWeaponCategory0 : uint32_t {
    WEAPONCATEGORY_OTHER = 0,
    WEAPONCATEGORY_MELEE = 1,
    WEAPONCATEGORY_SECONDARY = 2,
    WEAPONCATEGORY_SMG = 3,
    WEAPONCATEGORY_RIFLE = 4,
    WEAPONCATEGORY_HEAVY = 5,
    WEAPONCATEGORY_COUNT = 6,
};

/// CSWeaponSilencerType
_enum CSWeaponSilencerType0 : uint32_t {
    WEAPONSILENCER_NONE = 0,
    WEAPONSILENCER_DETACHABLE = 1,
    WEAPONSILENCER_INTEGRATED = 2,
};

/// MedalRank_t
_enum MedalRank_t0 : uint32_t {
    MEDAL_RANK_NONE = 0,
    MEDAL_RANK_BRONZE = 1,
    MEDAL_RANK_SILVER = 2,
    MEDAL_RANK_GOLD = 3,
    MEDAL_RANK_COUNT = 4,
};

/// CSWeaponMode
_enum CSWeaponMode0 : uint32_t {
    Primary_Mode = 0,
    Secondary_Mode = 1,
    WeaponMode_MAX = 2,
};

/// WeaponGameplayAnimState
_enum WeaponGameplayAnimState0 : uint16_t {
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

/// C4LightEffect_t
_enum C4LightEffect_t0 : uint32_t {
    eLightEffectNone = 0,
    eLightEffectDropped = 1,
    eLightEffectThirdPersonHeld = 2,
};

/// gear_slot_t
_enum gear_slot_t0 : uint32_t {
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

/// ChickenActivity
_enum ChickenActivity0 : uint32_t {
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

class __declspec(align(8)) CEntityInstance {
public:
    // CUtlSymbolLarge m_iszPrivateVScripts;
    char pad_00[8];
    char m_iszPrivateVScripts[1]; // 0x8
    CEntityIdentity* m_pEntity; // 0x10
    char pad_01[24];
    CScriptComponent* m_CScriptComponent; // 0x30
}; // size: 0x38

class __declspec(align(8)) CBaseEntity : public CEntityInstance {
public:
    CBodyComponent* m_CBodyComponent; // 0x38
    CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x40
    // CUtlVector< thinkfunc_t > m_aThinkFunctions;
    char pad_02[64];
    char m_aThinkFunctions[1]; // 0x250
    char pad_03[20];
    int32_t m_iCurrentThinkContext; // 0x268
    GameTick_t m_nLastThinkTick; // 0x26c
    bool m_bDisabledContextThinks; // 0x270
    // CTypedBitVec< 64 > m_isSteadyState;
    char pad_04[15];
    char m_isSteadyState[1]; // 0x280
    char pad_05[4];
    float m_lastNetworkChange; // 0x288
    // CUtlVector< ResponseContext_t > m_ResponseContexts;
    char pad_06[12];
    char m_ResponseContexts[1]; // 0x298
    // CUtlSymbolLarge m_iszResponseContext;
    char pad_07[23];
    char m_iszResponseContext[1]; // 0x2b0
    char pad_08[36];
    int32_t m_iHealth; // 0x2d8
    int32_t m_iMaxHealth; // 0x2dc
    uint8_t m_lifeState; // 0x2e0
    float m_flDamageAccumulator; // 0x2e4
    bool m_bTakesDamage; // 0x2e8
    TakeDamageFlags_t m_nTakeDamageFlags; // 0x2f0
    EntityPlatformTypes_t m_nPlatformType; // 0x2f8
    char pad_09[1];
    MoveCollide_t m_MoveCollide; // 0x2fa
    MoveType_t m_MoveType; // 0x2fb
    MoveType_t m_nActualMoveType; // 0x2fc
    uint8_t m_nWaterTouch; // 0x2fd
    uint8_t m_nSlimeTouch; // 0x2fe
    bool m_bRestoreInHierarchy; // 0x2ff
    // CUtlSymbolLarge m_target;
    char m_target[1]; // 0x300
    // CHandle< CBaseFilter > m_hDamageFilter;
    char pad_10[7];
    char m_hDamageFilter[1]; // 0x308
    // CUtlSymbolLarge m_iszDamageFilterName;
    char pad_11[7];
    char m_iszDamageFilterName[1]; // 0x310
    char pad_12[4];
    float m_flMoveDoneTime; // 0x318
    // CUtlStringToken m_nSubclassID;
    char m_nSubclassID[1]; // 0x31c
    char pad_13[8];
    float m_flAnimTime; // 0x328
    float m_flSimulationTime; // 0x32c
    GameTime_t m_flCreateTime; // 0x330
    bool m_bClientSideRagdoll; // 0x334
    uint8_t m_ubInterpolationFrame; // 0x335
    Vector m_vPrevVPhysicsUpdatePos; // 0x338
    uint8_t m_iTeamNum; // 0x344
    // CUtlSymbolLarge m_iGlobalname;
    char pad_14[3];
    char m_iGlobalname[1]; // 0x348
    char pad_15[4];
    int32_t m_iSentToClients; // 0x350
    float m_flSpeed; // 0x354
    // CUtlString m_sUniqueHammerID;
    char m_sUniqueHammerID[1]; // 0x358
    char pad_16[4];
    uint32_t m_spawnflags; // 0x360
    GameTick_t m_nNextThinkTick; // 0x364
    int32_t m_nSimulationTick; // 0x368
    char pad_17[4];
    CEntityIOOutput m_OnKilled; // 0x370
    uint32_t m_fFlags; // 0x388
    Vector m_vecAbsVelocity; // 0x38c
    CNetworkVelocityVector m_vecVelocity; // 0x398
    char pad_18[8];
    Vector m_vecBaseVelocity; // 0x3c8
    int32_t m_nPushEnumCount; // 0x3d4
    CCollisionProperty* m_pCollision; // 0x3d8
    // CHandle< CBaseEntity > m_hEffectEntity;
    char m_hEffectEntity[1]; // 0x3e0
    // CHandle< CBaseEntity > m_hOwnerEntity;
    char pad_19[3];
    char m_hOwnerEntity[1]; // 0x3e4
    uint32_t m_fEffects; // 0x3e8
    // CHandle< CBaseEntity > m_hGroundEntity;
    char m_hGroundEntity[1]; // 0x3ec
    int32_t m_nGroundBodyIndex; // 0x3f0
    float m_flFriction; // 0x3f4
    float m_flElasticity; // 0x3f8
    float m_flGravityScale; // 0x3fc
    float m_flTimeScale; // 0x400
    float m_flWaterLevel; // 0x404
    bool m_bGravityDisabled; // 0x408
    bool m_bAnimatedEveryTick; // 0x409
    float m_flActualGravityScale; // 0x40c
    bool m_bGravityActuallyDisabled; // 0x410
    bool m_bDisableLowViolence; // 0x411
    uint8_t m_nWaterType; // 0x412
    int32_t m_iEFlags; // 0x414
    CEntityIOOutput m_OnUser1; // 0x418
    CEntityIOOutput m_OnUser2; // 0x430
    CEntityIOOutput m_OnUser3; // 0x448
    CEntityIOOutput m_OnUser4; // 0x460
    int32_t m_iInitialTeamNum; // 0x478
    GameTime_t m_flNavIgnoreUntilTime; // 0x47c
    QAngle m_vecAngVelocity; // 0x480
    bool m_bNetworkQuantizeOriginAndAngles; // 0x48c
    bool m_bLagCompensate; // 0x48d
    // CHandle< CBaseEntity > m_pBlocker;
    char pad_20[2];
    char m_pBlocker[1]; // 0x490
    float m_flLocalTime; // 0x494
    float m_flVPhysicsUpdateLocalTime; // 0x498
    BloodType m_nBloodType; // 0x49c
    CPulseGraphInstance_ServerEntity* m_pPulseGraphInstance; // 0x4a0
}; // size: 0x4a8

/// ParticleIndex_t
class __declspec(align(4)) ParticleIndex_t0 {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

class __declspec(align(4)) CountdownTimer {
public:
    char pad_00[8];
    float m_duration; // 0x8
    GameTime_t m_timestamp; // 0xc
    float m_timescale; // 0x10
    // WorldGroupId_t m_nWorldGroupId;
    char m_nWorldGroupId[1]; // 0x14
    char pad_01[3];
}; // size: 0x18

/// CSkillFloat
class __declspec(align(4)) CSkillFloat0 {
public:
    float m_pValue[4]; // 0x0
}; // size: 0x10

/// CSkillInt
class __declspec(align(4)) CSkillInt0 {
public:
    int32_t m_pValue[4]; // 0x0
}; // size: 0x10

/// CRangeInt
class __declspec(align(4)) CRangeInt0 {
public:
    int32_t m_pValue[2]; // 0x0
}; // size: 0x8

class __declspec(align(1)) CPulseExecCursor {
public:
    char pad_00[208];
}; // size: 0xd0

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

/// NavGravity_t
class __declspec(align(4)) NavGravity_t0 {
public:
    Vector m_vGravity; // 0x0
    bool m_bDefault; // 0xc
    char pad_00[3];
}; // size: 0x10

/// Extent
class __declspec(align(1)) Extent0 {
public:
    // VectorWS lo;
    char lo[1]; // 0x0
    // VectorWS hi;
    char pad_00[11];
    char hi[1]; // 0xc
    char pad_01[11];
}; // size: 0x18

/// CNavVolume
class __declspec(align(1)) CNavVolume0 {
public:
    char pad_00[120];
}; // size: 0x78

/// CNavVolumeVector
class __declspec(align(1)) CNavVolumeVector0 {
public:
    char pad_00[128];
    bool m_bHasBeenPreFiltered; // 0x80
    char pad_01[31];
}; // size: 0xa0

/// CNavVolumeAll
class __declspec(align(1)) CNavVolumeAll0 {
public:
    char pad_00[160];
}; // size: 0xa0

/// CNavVolumeSphere
class __declspec(align(4)) CNavVolumeSphere0 {
public:
    char pad_00[120];
    Vector m_vCenter; // 0x78
    float m_flRadius; // 0x84
}; // size: 0x88

/// CNavVolumeSphericalShell
class __declspec(align(4)) CNavVolumeSphericalShell0 {
public:
    char pad_00[136];
    float m_flRadiusInner; // 0x88
    char pad_01[4];
}; // size: 0x90

/// CNavHullVData
class __declspec(align(4)) CNavHullVData0 {
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

/// CNavHullPresetVData
class __declspec(align(8)) CNavHullPresetVData0 {
public:
    // CUtlVector< CUtlString > m_vecNavHulls;
    char m_vecNavHulls[1]; // 0x0
    char pad_00[23];
}; // size: 0x18

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

class __declspec(align(8)) CGameSceneNode {
public:
    // CTransformWS m_nodeToWorld;
    char pad_00[16];
    char m_nodeToWorld[1]; // 0x10
    char pad_01[24];
    CEntityInstance* m_pOwner; // 0x30
    CGameSceneNode* m_pParent; // 0x38
    CGameSceneNode* m_pChild; // 0x40
    CGameSceneNode* m_pNextSibling; // 0x48
    // CGameSceneNodeHandle m_hParent;
    char pad_02[40];
    char m_hParent[1]; // 0x78
    char pad_03[14];
    CNetworkOriginCellCoordQuantizedVector m_vecOrigin; // 0x88
    char pad_04[8];
    QAngle m_angRotation; // 0xc0
    float m_flScale; // 0xcc
    // VectorWS m_vecAbsOrigin;
    char m_vecAbsOrigin[1]; // 0xd0
    char pad_05[8];
    QAngle m_angAbsRotation; // 0xdc
    float m_flAbsScale; // 0xe8
    int16_t m_nParentAttachmentOrBone; // 0xec
    bool m_bDebugAbsOriginChanges; // 0xee
    bool m_bDormant; // 0xef
    bool m_bForceParentToBeNetworked; // 0xf0
    // bitfield:1 m_bDirtyHierarchy;
    // bitfield:1 m_bDirtyBoneMergeInfo;
    // bitfield:1 m_bNetworkedPositionChanged;
    // bitfield:1 m_bNetworkedAnglesChanged;
    // bitfield:1 m_bNetworkedScaleChanged;
    // bitfield:1 m_bWillBeCallingPostDataUpdate;
    // bitfield:1 m_bBoneMergeFlex;
    // bitfield:2 m_nLatchAbsOrigin;
    // bitfield:1 m_bDirtyBoneMergeBoneToRoot;
    char pad_06[2];
    uint8_t m_nHierarchicalDepth; // 0xf3
    uint8_t m_nHierarchyType; // 0xf4
    uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // 0xf5
    // CUtlStringToken m_name;
    char pad_07[2];
    char m_name[1]; // 0xf8
    // CUtlStringToken m_hierarchyAttachName;
    char pad_08[19];
    char m_hierarchyAttachName[1]; // 0x10c
    float m_flZOffset; // 0x110
    float m_flClientLocalScale; // 0x114
    Vector m_vRenderOrigin; // 0x118
    char pad_09[12];
}; // size: 0x130

class __declspec(align(8)) CBodyComponent : public CEntityComponent {
public:
    CGameSceneNode* m_pSceneNode; // 0x8
    char pad_01[56];
    CNetworkVarChainer __m_pChainEntity; // 0x48
    char pad_02[8];
}; // size: 0x78

class __declspec(align(8)) CBodyComponentPoint : public CBodyComponent {
public:
    char pad_03[8];
    CGameSceneNode m_sceneNode; // 0x80
}; // size: 0x1b0

class __declspec(align(8)) CSkeletonInstance : public CGameSceneNode {
public:
    // CModelState m_modelState;
    char pad_10[16];
    char m_modelState[1]; // 0x140
    char pad_11[591];
    bool m_bIsAnimationEnabled; // 0x390
    bool m_bUseParentRenderBounds; // 0x391
    bool m_bDisableSolidCollisionsForHierarchy; // 0x392
    // bitfield:1 m_bDirtyMotionType;
    // bitfield:1 m_bIsGeneratingLatchedParentSpaceState;
    // CUtlStringToken m_materialGroup;
    char pad_12[1];
    char m_materialGroup[1]; // 0x394
    char pad_13[3];
    uint8_t m_nHitboxSet; // 0x398
    char pad_14[91];
    bool m_bForceServerConstraintsEnabled; // 0x3f4
    char pad_015[59];
}; // size: 0x430

class __declspec(align(8)) CBodyComponentSkeletonInstance : public CBodyComponent {
public:
    char pad_03[8];
    CSkeletonInstance m_skeletonInstance; // 0x80
}; // size: 0x4b0

class __declspec(align(4)) CHitboxComponent : public CEntityComponent {
public:
    char pad_01[12];
    float m_flBoundsExpandRadius; // 0x14
}; // size: 0x18

class __declspec(align(4)) CLightComponent : public CEntityComponent {
public:
    char pad_01[48];
    CNetworkVarChainer __m_pChainEntity; // 0x38
    // Color m_Color;
    char pad_02[21];
    char m_Color[1]; // 0x75
    // Color m_SecondaryColor;
    char pad_03[3];
    char m_SecondaryColor[1]; // 0x79
    char pad_04[4];
    float m_flBrightness; // 0x80
    float m_flBrightnessScale; // 0x84
    float m_flBrightnessMult; // 0x88
    float m_flRange; // 0x8c
    float m_flFalloff; // 0x90
    float m_flAttenuation0; // 0x94
    float m_flAttenuation1; // 0x98
    float m_flAttenuation2; // 0x9c
    float m_flTheta; // 0xa0
    float m_flPhi; // 0xa4
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie;
    char m_hLightCookie[1]; // 0xa8
    char pad_05[4];
    int32_t m_nCascades; // 0xb0
    int32_t m_nCastShadows; // 0xb4
    int32_t m_nShadowWidth; // 0xb8
    int32_t m_nShadowHeight; // 0xbc
    bool m_bRenderDiffuse; // 0xc0
    int32_t m_nRenderSpecular; // 0xc4
    bool m_bRenderTransmissive; // 0xc8
    float m_flOrthoLightWidth; // 0xcc
    float m_flOrthoLightHeight; // 0xd0
    int32_t m_nStyle; // 0xd4
    // CUtlString m_Pattern;
    char m_Pattern[1]; // 0xd8
    char pad_06[4];
    int32_t m_nCascadeRenderStaticObjects; // 0xe0
    float m_flShadowCascadeCrossFade; // 0xe4
    float m_flShadowCascadeDistanceFade; // 0xe8
    float m_flShadowCascadeDistance0; // 0xec
    float m_flShadowCascadeDistance1; // 0xf0
    float m_flShadowCascadeDistance2; // 0xf4
    float m_flShadowCascadeDistance3; // 0xf8
    int32_t m_nShadowCascadeResolution0; // 0xfc
    int32_t m_nShadowCascadeResolution1; // 0x100
    int32_t m_nShadowCascadeResolution2; // 0x104
    int32_t m_nShadowCascadeResolution3; // 0x108
    bool m_bUsesBakedShadowing; // 0x10c
    int32_t m_nShadowPriority; // 0x110
    int32_t m_nBakedShadowIndex; // 0x114
    int32_t m_nLightPathUniqueId; // 0x118
    int32_t m_nLightMapUniqueId; // 0x11c
    bool m_bRenderToCubemaps; // 0x120
    bool m_bAllowSSTGeneration; // 0x121
    int32_t m_nDirectLight; // 0x124
    int32_t m_nIndirectLight; // 0x128
    bool m_bDynamicBounce; // 0x12c
    float m_flFadeMinDist; // 0x130
    float m_flFadeMaxDist; // 0x134
    float m_flShadowFadeMinDist; // 0x138
    float m_flShadowFadeMaxDist; // 0x13c
    bool m_bEnabled; // 0x140
    bool m_bFlicker; // 0x141
    bool m_bPrecomputedFieldsValid; // 0x142
    Vector m_vPrecomputedBoundsMins; // 0x144
    Vector m_vPrecomputedBoundsMaxs; // 0x150
    Vector m_vPrecomputedOBBOrigin; // 0x15c
    QAngle m_vPrecomputedOBBAngles; // 0x168
    Vector m_vPrecomputedOBBExtent; // 0x174
    float m_flPrecomputedMaxRange; // 0x180
    int32_t m_nFogLightingMode; // 0x184
    float m_flFogContributionStength; // 0x188
    float m_flNearClipPlane; // 0x18c
    // Color m_SkyColor;
    char m_SkyColor[1]; // 0x190
    float m_flSkyIntensity; // 0x194
    // Color m_SkyAmbientBounce;
    char m_SkyAmbientBounce[1]; // 0x198
    char pad_07[3];
    bool m_bUseSecondaryColor; // 0x19c
    bool m_bMixedShadows; // 0x19d
    GameTime_t m_flLightStyleStartTime; // 0x1a0
    float m_flCapsuleLength; // 0x1a4
    float m_flMinRoughness; // 0x1a8
    char pad_08[12];
    bool m_bPvsModifyEntity; // 0x1b8
    char pad_09[7];
}; // size: 0x1c0

/// CNetworkTransmitComponent
class __declspec(align(1)) CNetworkTransmitComponent0 {
public:
    char pad_00[388];
    uint8_t m_nTransmitStateOwnedCounter; // 0x184
    char pad_01[75];
}; // size: 0x1d0

class __declspec(align(4)) CRenderComponent : public CEntityComponent {
public:
    char pad_01[8];
    CNetworkVarChainer __m_pChainEntity; // 0x10
    char pad_02[24];
    bool m_bIsRenderingWithViewModels; // 0x50
    uint32_t m_nSplitscreenFlags; // 0x54
    bool m_bEnableRendering; // 0x58
    char pad_03[79];
    bool m_bInterpolationReadyToDraw; // 0xa8
    char pad_04[7];
}; // size: 0xb0

/// CAnimEventListenerBase
class __declspec(align(1)) CAnimEventListenerBase0 {
public:
    char pad_00[24];
}; // size: 0x18

/// CAnimEventListener
class __declspec(align(1)) CAnimEventListener0 {
public:
    char pad_00[32];
}; // size: 0x20

/// CAnimEventQueueListener
class __declspec(align(1)) CAnimEventQueueListener0 {
public:
    char pad_00[32];
}; // size: 0x20

/// PointCameraSettings_t
class __declspec(align(4)) PointCameraSettings_t0 {
public:
    float m_flNearBlurryDistance; // 0x0
    float m_flNearCrispDistance; // 0x4
    float m_flFarCrispDistance; // 0x8
    float m_flFarBlurryDistance; // 0xc
}; // size: 0x10

class __declspec(align(8)) CPulseCell_LerpCameraSettings {
public:
    char pad_00[144];
    float m_flSeconds; // 0x90
    PointCameraSettings_t m_Start; // 0x94
    PointCameraSettings_t m_End; // 0xa4
    char pad_01[4];
}; // size: 0xb8

class __declspec(align(8)) CPointCamera : public CBaseEntity {
public:
    float m_FOV; // 0x4a8
    float m_Resolution; // 0x4ac
    bool m_bFogEnable; // 0x4b0
    // Color m_FogColor;
    char m_FogColor[1]; // 0x4b1
    char pad_21[4];
    float m_flFogStart; // 0x4b8
    float m_flFogEnd; // 0x4bc
    float m_flFogMaxDensity; // 0x4c0
    bool m_bActive; // 0x4c4
    bool m_bUseScreenAspectRatio; // 0x4c5
    float m_flAspectRatio; // 0x4c8
    bool m_bNoSky; // 0x4cc
    float m_fBrightness; // 0x4d0
    float m_flZFar; // 0x4d4
    float m_flZNear; // 0x4d8
    bool m_bCanHLTVUse; // 0x4dc
    bool m_bAlignWithParent; // 0x4dd
    bool m_bDofEnabled; // 0x4de
    float m_flDofNearBlurry; // 0x4e0
    float m_flDofNearCrisp; // 0x4e4
    float m_flDofFarCrisp; // 0x4e8
    float m_flDofFarBlurry; // 0x4ec
    float m_flDofTiltToGround; // 0x4f0
    float m_TargetFOV; // 0x4f4
    float m_DegreesPerSecond; // 0x4f8
    bool m_bIsOn; // 0x4fc
    CPointCamera* m_pNext; // 0x500
}; // size: 0x508

/// CPulseCell_LerpCameraSettings::CursorState_t
class __declspec(align(4)) CPulseCell_LerpCameraSettings__CursorState_t {
public:
    // CHandle< CPointCamera > m_hCamera;
    char pad_00[8];
    char m_hCamera[1]; // 0x8
    PointCameraSettings_t m_OverlaidStart; // 0xc
    PointCameraSettings_t m_OverlaidEnd; // 0x1c
}; // size: 0x2c

class __declspec(align(1)) CPointTemplateAPI {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(4)) CPropDataComponent : public CEntityComponent {
public:
    char pad_01[8];
    float m_flDmgModBullet; // 0x10
    float m_flDmgModClub; // 0x14
    float m_flDmgModExplosive; // 0x18
    float m_flDmgModFire; // 0x1c
    // CUtlSymbolLarge m_iszPhysicsDamageTableName;
    char m_iszPhysicsDamageTableName[1]; // 0x20
    // CUtlSymbolLarge m_iszBasePropData;
    char pad_02[7];
    char m_iszBasePropData[1]; // 0x28
    char pad_03[4];
    int32_t m_nInteractions; // 0x30
    bool m_bSpawnMotionDisabled; // 0x34
    int32_t m_nDisableTakePhysicsDamageSpawnFlag; // 0x38
    int32_t m_nMotionDisabledSpawnFlag; // 0x3c
}; // size: 0x40

/// WaterWheelFrictionScale_t
class __declspec(align(4)) WaterWheelFrictionScale_t0 {
public:
    float m_flFractionOfWheelSubmerged; // 0x0
    float m_flFrictionScale; // 0x4
}; // size: 0x8

/// WaterWheelDrag_t
class __declspec(align(4)) WaterWheelDrag_t0 {
public:
    float m_flFractionOfWheelSubmerged; // 0x0
    float m_flWheelDrag; // 0x4
}; // size: 0x8

class __declspec(align(4)) CBuoyancyHelper {
public:
    // CUtlStringToken m_nFluidType;
    char pad_00[24];
    char m_nFluidType[1]; // 0x18
    float m_flFluidDensity; // 0x1c
    float m_flNeutrallyBuoyantGravity; // 0x20
    float m_flNeutrallyBuoyantLinearDamping; // 0x24
    float m_flNeutrallyBuoyantAngularDamping; // 0x28
    bool m_bNeutrallyBuoyant; // 0x2c
    // CUtlVector< float32 > m_vecFractionOfWheelSubmergedForWheelFriction;
    char pad_01[3];
    char m_vecFractionOfWheelSubmergedForWheelFriction[1]; // 0x30
    // CUtlVector< float32 > m_vecWheelFrictionScales;
    char pad_02[23];
    char m_vecWheelFrictionScales[1]; // 0x48
    // CUtlVector< float32 > m_vecFractionOfWheelSubmergedForWheelDrag;
    char pad_03[23];
    char m_vecFractionOfWheelSubmergedForWheelDrag[1]; // 0x60
    // CUtlVector< float32 > m_vecWheelDrag;
    char pad_04[23];
    char m_vecWheelDrag[1]; // 0x78
    char pad_05[159];
}; // size: 0x118

/// SoundeventPathCornerPairNetworked_t
class __declspec(align(4)) SoundeventPathCornerPairNetworked_t0 {
public:
    Vector vP1; // 0x0
    Vector vP2; // 0xc
    float flPathLengthSqr; // 0x18
    float flP1Pct; // 0x1c
    float flP2Pct; // 0x20
}; // size: 0x24

class __declspec(align(1)) CBaseTriggerAPI {
public:
    char pad_00[8];
}; // size: 0x8

/// CWorldCompositionChunkReferenceElement_t
class __declspec(align(1)) CWorldCompositionChunkReferenceElement_t0 {
public:
    // CUtlString m_strMapToLoad;
    char m_strMapToLoad[1]; // 0x0
    // CUtlString m_strLandmarkName;
    char pad_00[7];
    char m_strLandmarkName[1]; // 0x8
    char pad_01[7];
}; // size: 0x10

/// CDecalInstance
class __declspec(align(4)) CDecalInstance0 {
public:
    // CGlobalSymbol m_sDecalGroup;
    char m_sDecalGroup[1]; // 0x0
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial;
    char pad_00[7];
    char m_hMaterial[1]; // 0x8
    // CUtlStringToken m_sSequenceName;
    char pad_01[7];
    char m_sSequenceName[1]; // 0x10
    // CHandle< CBaseEntity > m_hEntity;
    char pad_02[3];
    char m_hEntity[1]; // 0x14
    int32_t m_nBoneIndex; // 0x18
    int32_t m_nTriangleIndex; // 0x1c
    Vector m_vPositionLS; // 0x20
    Vector m_vNormalLS; // 0x2c
    Vector m_vSAxisLS; // 0x38
    DecalFlags_t m_nFlags; // 0x44
    // Color m_Color;
    char m_Color[1]; // 0x48
    float m_flWidth; // 0x4c
    float m_flHeight; // 0x50
    float m_flDepth; // 0x54
    // CTransformWS m_transform;
    char pad_03[8];
    char m_transform[1]; // 0x60
    char pad_04[28];
    float m_flAnimationScale; // 0x80
    float m_flAnimationStartTime; // 0x84
    GameTime_t m_flPlaceTime; // 0x88
    float m_flFadeStartTime; // 0x8c
    float m_flFadeDuration; // 0x90
    float m_flLightingOriginOffset; // 0x94
    char pad_05[8];
    float m_flBoundingRadiusSqr; // 0xa0
    int16_t m_nSequenceIndex; // 0xa4
    bool m_bIsAdjacent; // 0xa6
    bool m_bDoDecalLightmapping; // 0xa7
    DecalRtEncoding_t m_nDecalRtEncoding; // 0xa8
    bool m_bProjectToBackfaces; // 0xa9
    char pad_06[6];
}; // size: 0xb0

/// CSkillDamage
class __declspec(align(4)) CSkillDamage0 {
public:
    CSkillFloat m_flDamage; // 0x0
    float m_flNPCDamageScalarVsNPC; // 0x10
    float m_flPhysicsForceDamage; // 0x14
}; // size: 0x18

/// CRemapFloat
class __declspec(align(4)) CRemapFloat0 {
public:
    float m_pValue[4]; // 0x0
}; // size: 0x10

/// CScriptUniformRandomStream
class __declspec(align(4)) CScriptUniformRandomStream0 {
public:
    // HSCRIPT m_hScriptScope;
    char pad_00[8];
    char m_hScriptScope[1]; // 0x8
    char pad_01[144];
    int32_t m_nInitialSeed; // 0x9c
}; // size: 0xa0

class __declspec(align(8)) CPulseCell_Step_EntFire {
public:
    // CUtlString m_Input;
    char pad_00[72];
    char m_Input[1]; // 0x48
    char pad_01[7];
}; // size: 0x50

class __declspec(align(8)) CPulseCell_PlaySequence {
public:
    // CUtlString m_SequenceName;
    char pad_00[72];
    char m_SequenceName[1]; // 0x48
    PulseNodeDynamicOutflows_t m_PulseAnimEvents; // 0x50
    CPulse_ResumePoint m_OnFinished; // 0x68
    CPulse_ResumePoint m_OnCanceled; // 0xb0
}; // size: 0xf8

class __declspec(align(8)) CBaseModelEntity : public CBaseEntity {
public:
    CRenderComponent* m_CRenderComponent; // 0x4a8
    CHitboxComponent m_CHitboxComponent; // 0x4b0
    HitGroup_t m_nDestructiblePartInitialStateDestructed0; // 0x4c8
    HitGroup_t m_nDestructiblePartInitialStateDestructed1; // 0x4cc
    HitGroup_t m_nDestructiblePartInitialStateDestructed2; // 0x4d0
    HitGroup_t m_nDestructiblePartInitialStateDestructed3; // 0x4d4
    HitGroup_t m_nDestructiblePartInitialStateDestructed4; // 0x4d8
    int32_t m_nDestructiblePartInitialStateDestructed0_PartIndex; // 0x4dc
    int32_t m_nDestructiblePartInitialStateDestructed1_PartIndex; // 0x4e0
    int32_t m_nDestructiblePartInitialStateDestructed2_PartIndex; // 0x4e4
    int32_t m_nDestructiblePartInitialStateDestructed3_PartIndex; // 0x4e8
    int32_t m_nDestructiblePartInitialStateDestructed4_PartIndex; // 0x4ec
    CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent; // 0x4f0
    GameTime_t m_flDissolveStartTime; // 0x4f8
    char pad_21[4];
    CEntityIOOutput m_OnIgnite; // 0x500
    RenderMode_t m_nRenderMode; // 0x518
    RenderFx_t m_nRenderFX; // 0x519
    bool m_bAllowFadeInView; // 0x51a
    // Color m_clrRender;
    char pad_22[29];
    char m_clrRender[1]; // 0x538
    // CUtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes;
    char pad_23[7];
    char m_vecRenderAttributes[1]; // 0x540
    char pad_24[103];
    bool m_bRenderToCubemaps; // 0x5a8
    bool m_bNoInterpolate; // 0x5a9
    // CCollisionProperty m_Collision;
    char pad_25[6];
    char m_Collision[1]; // 0x5b0
    // CGlowProperty m_Glow;
    char pad_26[175];
    char m_Glow[1]; // 0x660
    char pad_27[84];
    float m_flGlowBackfaceMult; // 0x6b8
    float m_fadeMinDist; // 0x6bc
    float m_fadeMaxDist; // 0x6c0
    float m_flFadeScale; // 0x6c4
    float m_flShadowStrength; // 0x6c8
    uint8_t m_nObjectCulling; // 0x6cc
    char pad_28[43];
    CNetworkViewOffsetVector m_vecViewOffset; // 0x6f8
    char pad_29[8];
    uint32_t m_bvDisabledHitGroups[1]; // 0x728
    char pad_030[4];
}; // size: 0x730

class __declspec(align(16)) CBaseAnimGraph : public CBaseModelEntity {
public:
    CAnimGraphControllerManager m_graphControllerManager; // 0x730
    CAnimGraphControllerBase* m_pMainGraphController; // 0x7e0
    bool m_bInitiallyPopulateInterpHistory; // 0x7e8
    IChoreoServices* m_pChoreoServices; // 0x7f0
    bool m_bAnimGraphUpdateEnabled; // 0x7f8
    float m_flMaxSlopeDistance; // 0x7fc
    // VectorWS m_vLastSlopeCheckPos;
    char m_vLastSlopeCheckPos[1]; // 0x800
    char pad_31[8];
    uint32_t m_nAnimGraphUpdateId; // 0x80c
    bool m_bAnimationUpdateScheduled; // 0x810
    Vector m_vecForce; // 0x814
    int32_t m_nForceBone; // 0x820
    // PhysicsRagdollPose_t m_RagdollPose;
    char pad_32[20];
    char m_RagdollPose[1]; // 0x838
    char pad_33[39];
    bool m_bRagdollEnabled; // 0x860
    bool m_bRagdollClientSide; // 0x861
    // CTransform m_xParentedRagdollRootInEntitySpace;
    char pad_34[14];
    char m_xParentedRagdollRootInEntitySpace[1]; // 0x870
    char pad_035[431];
}; // size: 0xa20

/// CPulseCell_PlaySequence::CursorState_t
class __declspec(align(4)) CPulseCell_PlaySequence__CursorState_t {
public:
    // CHandle< CBaseAnimGraph > m_hTarget;
    char m_hTarget[1]; // 0x0
    char pad_00[3];
}; // size: 0x4

class __declspec(align(1)) CPulseAnimFuncs {
public:
    char pad_00[8];
}; // size: 0x8

/// CBaseAnimGraphVariationUserData
class __declspec(align(8)) CBaseAnimGraphVariationUserData0 {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(1)) CBasePlayerControllerAPI {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(4)) ViewAngleServerChange_t {
public:
    char pad_00[48];
    FixAngleSet_t nType; // 0x30
    QAngle qAngle; // 0x34
    uint32_t nIndex; // 0x40
    char pad_01[4];
}; // size: 0x48

/// CBreakableStageHelper
class __declspec(align(4)) CBreakableStageHelper0 {
public:
    char pad_00[8];
    int32_t m_nCurrentStage; // 0x8
    int32_t m_nStageCount; // 0xc
    char pad_01[8];
}; // size: 0x18

/// DecalGroupOption_t
class __declspec(align(8)) DecalGroupOption_t0 {
public:
    // CStrongHandleCopyable< InfoForResourceTypeIMaterial2 > m_hMaterial;
    char m_hMaterial[1]; // 0x0
    // CGlobalSymbol m_sSequenceName;
    char pad_00[7];
    char m_sSequenceName[1]; // 0x8
    char pad_01[4];
    float m_flProbability; // 0x10
    bool m_bEnableAngleBetweenNormalAndGravityRange; // 0x14
    float m_flMinAngleBetweenNormalAndGravity; // 0x18
    float m_flMaxAngleBetweenNormalAndGravity; // 0x1c
}; // size: 0x20

/// CDecalGroupVData
class __declspec(align(8)) CDecalGroupVData0 {
public:
    // CUtlVector< DecalGroupOption_t > m_vecOptions;
    char m_vecOptions[1]; // 0x0
    char pad_00[20];
    float m_flTotalProbability; // 0x18
    char pad_01[4];
}; // size: 0x20

class __declspec(align(1)) CFilterMultipleAPI {
public:
    char pad_00[8];
}; // size: 0x8

/// CPlayerPawnComponent
class __declspec(align(4)) CPlayerPawnComponent0 {
public:
    char pad_00[8];
    CNetworkVarChainer __m_pChainEntity; // 0x8
    char pad_01[24];
}; // size: 0x48

/// CPlayerControllerComponent
class __declspec(align(4)) CPlayerControllerComponent0 {
public:
    char pad_00[8];
    CNetworkVarChainer __m_pChainEntity; // 0x8
    char pad_01[16];
}; // size: 0x40

class __declspec(align(4)) CPlayer_AutoaimServices : public CPlayerPawnComponent {
public:
}; // size: 0x48

class __declspec(align(4)) audioparams_t {
public:
    char pad_00[8];
    Vector localSound; // 0x8
    char pad_01[84];
    int32_t soundscapeIndex; // 0x68
    uint8_t localBits; // 0x6c
    int32_t soundscapeEntityListIndex; // 0x70
    uint32_t soundEventHash; // 0x74
}; // size: 0x78

class __declspec(align(4)) fogplayerparams_t {
public:
    // CHandle< CFogController > m_hCtrl;
    char pad_00[8];
    char m_hCtrl[1]; // 0x8
    float m_flTransitionTime; // 0xc
    // Color m_OldColor;
    char m_OldColor[1]; // 0x10
    float m_flOldStart; // 0x14
    float m_flOldEnd; // 0x18
    float m_flOldMaxDensity; // 0x1c
    float m_flOldHDRColorScale; // 0x20
    float m_flOldFarZ; // 0x24
    // Color m_NewColor;
    char m_NewColor[1]; // 0x28
    float m_flNewStart; // 0x2c
    float m_flNewEnd; // 0x30
    float m_flNewMaxDensity; // 0x34
    float m_flNewHDRColorScale; // 0x38
    float m_flNewFarZ; // 0x3c
}; // size: 0x40

class __declspec(align(8)) CColorCorrection : public CBaseEntity {
public:
    float m_flFadeInDuration; // 0x4a8
    float m_flFadeOutDuration; // 0x4ac
    float m_flStartFadeInWeight; // 0x4b0
    float m_flStartFadeOutWeight; // 0x4b4
    GameTime_t m_flTimeStartFadeIn; // 0x4b8
    GameTime_t m_flTimeStartFadeOut; // 0x4bc
    float m_flMaxWeight; // 0x4c0
    bool m_bStartDisabled; // 0x4c4
    bool m_bEnabled; // 0x4c5
    bool m_bMaster; // 0x4c6
    bool m_bClientSide; // 0x4c7
    bool m_bExclusive; // 0x4c8
    float m_MinFalloff; // 0x4cc
    float m_MaxFalloff; // 0x4d0
    float m_flCurWeight; // 0x4d4
    char m_netlookupFilename[512]; // 0x4d8
    // CUtlSymbolLarge m_lookupFilename;
    char m_lookupFilename[1]; // 0x6d8
    char pad_021[7];
}; // size: 0x6e0

class __declspec(align(8)) CTonemapController2 : public CBaseEntity {
public:
    float m_flAutoExposureMin; // 0x4a8
    float m_flAutoExposureMax; // 0x4ac
    float m_flExposureAdaptationSpeedUp; // 0x4b0
    float m_flExposureAdaptationSpeedDown; // 0x4b4
    float m_flTonemapEVSmoothingRange; // 0x4b8
    char pad_021[4];
}; // size: 0x4c0

class __declspec(align(8)) CBaseToggle : public CBaseModelEntity {
public:
    TOGGLE_STATE m_toggle_state; // 0x730
    float m_flMoveDistance; // 0x734
    float m_flWait; // 0x738
    float m_flLip; // 0x73c
    bool m_bAlwaysFireBlockedOutputs; // 0x740
    Vector m_vecPosition1; // 0x744
    Vector m_vecPosition2; // 0x750
    QAngle m_vecMoveAng; // 0x75c
    QAngle m_vecAngle1; // 0x768
    QAngle m_vecAngle2; // 0x774
    float m_flHeight; // 0x780
    // CHandle< CBaseEntity > m_hActivator;
    char m_hActivator[1]; // 0x784
    Vector m_vecFinalDest; // 0x788
    QAngle m_vecFinalAngle; // 0x794
    int32_t m_movementType; // 0x7a0
    // CUtlSymbolLarge m_sMaster;
    char pad_31[4];
    char m_sMaster[1]; // 0x7a8
    char pad_032[7];
}; // size: 0x7b0

class __declspec(align(8)) CBaseTrigger : public CBaseToggle {
public:
    CEntityIOOutput m_OnStartTouch; // 0x7b0
    CEntityIOOutput m_OnStartTouchAll; // 0x7c8
    CEntityIOOutput m_OnEndTouch; // 0x7e0
    CEntityIOOutput m_OnEndTouchAll; // 0x7f8
    CEntityIOOutput m_OnTouching; // 0x810
    CEntityIOOutput m_OnTouchingEachEntity; // 0x828
    CEntityIOOutput m_OnNotTouching; // 0x840
    // CUtlVector< CHandle< CBaseEntity > > m_hTouchingEntities;
    char m_hTouchingEntities[1]; // 0x858
    // CUtlSymbolLarge m_iFilterName;
    char pad_33[23];
    char m_iFilterName[1]; // 0x870
    // CHandle< CBaseFilter > m_hFilter;
    char pad_34[7];
    char m_hFilter[1]; // 0x878
    char pad_35[3];
    bool m_bDisabled; // 0x87c
    char pad_36[11];
    bool m_bUseAsyncQueries; // 0x888
    char pad_037[7];
}; // size: 0x890

class __declspec(align(8)) CPostProcessingVolume : public CBaseTrigger {
public:
    // CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings;
    char pad_38[16];
    char m_hPostSettings[1]; // 0x8a0
    char pad_39[4];
    float m_flFadeDuration; // 0x8a8
    float m_flMinLogExposure; // 0x8ac
    float m_flMaxLogExposure; // 0x8b0
    float m_flMinExposure; // 0x8b4
    float m_flMaxExposure; // 0x8b8
    float m_flExposureCompensation; // 0x8bc
    float m_flExposureFadeSpeedUp; // 0x8c0
    float m_flExposureFadeSpeedDown; // 0x8c4
    float m_flTonemapEVSmoothingRange; // 0x8c8
    bool m_bMaster; // 0x8cc
    bool m_bExposureControl; // 0x8cd
    char pad_040[2];
}; // size: 0x8d0

class __declspec(align(8)) CEnvSoundscape : public CBaseEntity {
public:
    CEntityIOOutput m_OnPlay; // 0x4a8
    float m_flRadius; // 0x4c0
    // CUtlSymbolLarge m_soundEventName;
    char pad_21[4];
    char m_soundEventName[1]; // 0x4c8
    char pad_22[7];
    bool m_bOverrideWithEvent; // 0x4d0
    int32_t m_soundscapeIndex; // 0x4d4
    int32_t m_soundscapeEntityListId; // 0x4d8
    // CUtlSymbolLarge[8] m_positionNames;
    char pad_23[4];
    char m_positionNames[1]; // 0x4e0
    // CHandle< CEnvSoundscape > m_hProxySoundscape;
    char pad_24[63];
    char m_hProxySoundscape[1]; // 0x520
    char pad_25[3];
    bool m_bDisabled; // 0x524
    // CUtlSymbolLarge m_soundscapeName;
    char pad_26[3];
    char m_soundscapeName[1]; // 0x528
    char pad_27[4];
    uint32_t m_soundEventHash; // 0x530
    char pad_028[4];
}; // size: 0x538

class __declspec(align(8)) CEnvSoundscapeTriggerable : public CEnvSoundscape {
public:
}; // size: 0x538

class __declspec(align(4)) CPlayer_CameraServices : public CPlayerPawnComponent {
public:
    QAngle m_vecCsViewPunchAngle; // 0x48
    GameTick_t m_nCsViewPunchAngleTick; // 0x54
    float m_flCsViewPunchAngleTickRatio; // 0x58
    char pad_02[4];
    fogplayerparams_t m_PlayerFog; // 0x60
    // CHandle< CColorCorrection > m_hColorCorrectionCtrl;
    char m_hColorCorrectionCtrl[1]; // 0xa0
    // CHandle< CBaseEntity > m_hViewEntity;
    char pad_03[3];
    char m_hViewEntity[1]; // 0xa4
    // CHandle< CTonemapController2 > m_hTonemapController;
    char pad_04[3];
    char m_hTonemapController[1]; // 0xa8
    char pad_05[4];
    audioparams_t m_audio; // 0xb0
    // CNetworkUtlVectorBase< CHandle< CPostProcessingVolume > > m_PostProcessingVolumes;
    char m_PostProcessingVolumes[1]; // 0x128
    char pad_06[20];
    float m_flOldPlayerZ; // 0x140
    float m_flOldPlayerViewOffsetZ; // 0x144
    // CUtlVector< CHandle< CEnvSoundscapeTriggerable > > m_hTriggerSoundscapeList;
    char pad_07[24];
    char m_hTriggerSoundscapeList[1]; // 0x160
    char pad_08[23];
}; // size: 0x178

class __declspec(align(4)) CPlayer_FlashlightServices : public CPlayerPawnComponent {
public:
}; // size: 0x48

class __declspec(align(4)) CPlayer_ItemServices : public CPlayerPawnComponent {
public:
}; // size: 0x48

/// CInButtonState
class __declspec(align(8)) CInButtonState0 {
public:
    char pad_00[8];
    uint64_t m_pButtonStates[3]; // 0x8
}; // size: 0x20

class __declspec(align(8)) CPlayer_MovementServices : public CPlayerPawnComponent {
public:
    int32_t m_nImpulse; // 0x48
    CInButtonState m_nButtons; // 0x50
    uint64_t m_nQueuedButtonDownMask; // 0x70
    uint64_t m_nQueuedButtonChangeMask; // 0x78
    uint64_t m_nButtonDoublePressed; // 0x80
    uint32_t m_pButtonPressedCmdNumber[64]; // 0x88
    uint32_t m_nLastCommandNumberProcessed; // 0x188
    uint64_t m_nToggleButtonDownMask; // 0x190
    char pad_02[8];
    float m_flMaxspeed; // 0x1a0
    float m_arrForceSubtickMoveWhen[4]; // 0x1a4
    float m_flForwardMove; // 0x1b4
    float m_flLeftMove; // 0x1b8
    float m_flUpMove; // 0x1bc
    Vector m_vecLastMovementImpulses; // 0x1c0
    char pad_03[92];
    QAngle m_vecOldViewAngles; // 0x228
    char pad_04[12];
}; // size: 0x240

class __declspec(align(8)) CPlayer_MovementServices_Humanoid : public CPlayer_MovementServices {
public:
    float m_flStepSoundTime; // 0x240
    float m_flFallVelocity; // 0x244
    Vector m_groundNormal; // 0x248
    float m_flSurfaceFriction; // 0x254
    // CUtlStringToken m_surfaceProps;
    char m_surfaceProps[1]; // 0x258
    char pad_05[12];
    int32_t m_nStepside; // 0x268
    Vector m_vecSmoothedVelocity; // 0x26c
}; // size: 0x278

class __declspec(align(4)) CPlayer_ObserverServices : public CPlayerPawnComponent {
public:
    uint8_t m_iObserverMode; // 0x48
    // CHandle< CBaseEntity > m_hObserverTarget;
    char pad_02[3];
    char m_hObserverTarget[1]; // 0x4c
    ObserverMode_t m_iObserverLastMode; // 0x50
    bool m_bForcedObserverMode; // 0x54
    char pad_03[3];
}; // size: 0x58

class __declspec(align(4)) CPlayer_UseServices : public CPlayerPawnComponent {
public:
}; // size: 0x48

class __declspec(align(4)) CPlayer_WaterServices : public CPlayerPawnComponent {
public:
}; // size: 0x48

class __declspec(align(16)) CBaseFlex : public CBaseAnimGraph {
public:
    // CNetworkUtlVectorBase< float32 > m_flexWeight;
    char m_flexWeight[1]; // 0xa20
    // VectorWS m_vLookTargetPosition;
    char pad_36[23];
    char m_vLookTargetPosition[1]; // 0xa38
    char pad_37[92];
    GameTime_t m_flAllowResponsesEndTime; // 0xa98
    GameTime_t m_flLastFlexAnimationTime; // 0xa9c
    SceneEventId_t m_nNextSceneEventId; // 0xaa0
    bool m_bUpdateLayerPriorities; // 0xaa4
    char pad_038[11];
}; // size: 0xab0

class __declspec(align(16)) CEconEntity : public CBaseFlex {
public:
    // CAttributeContainer m_AttributeManager;
    char pad_39[16];
    char m_AttributeManager[1]; // 0xac0
    char pad_40[756];
    uint32_t m_OriginalOwnerXuidLow; // 0xdb8
    uint32_t m_OriginalOwnerXuidHigh; // 0xdbc
    int32_t m_nFallbackPaintKit; // 0xdc0
    int32_t m_nFallbackSeed; // 0xdc4
    float m_flFallbackWear; // 0xdc8
    int32_t m_nFallbackStatTrak; // 0xdcc
    // CHandle< CBaseEntity > m_hOldProvidee;
    char m_hOldProvidee[1]; // 0xdd0
    int32_t m_iOldOwnerClass; // 0xdd4
    char pad_041[8];
}; // size: 0xde0

class __declspec(align(16)) CBasePlayerWeapon : public CEconEntity {
public:
    GameTick_t m_nNextPrimaryAttackTick; // 0xde0
    float m_flNextPrimaryAttackTickRatio; // 0xde4
    GameTick_t m_nNextSecondaryAttackTick; // 0xde8
    float m_flNextSecondaryAttackTickRatio; // 0xdec
    int32_t m_iClip1; // 0xdf0
    int32_t m_iClip2; // 0xdf4
    int32_t m_pReserveAmmo[2]; // 0xdf8
    CEntityIOOutput m_OnPlayerUse; // 0xe00
    char pad_042[8];
}; // size: 0xe20

class __declspec(align(4)) CPlayer_WeaponServices : public CPlayerPawnComponent {
public:
    // CNetworkUtlVectorBase< CHandle< CBasePlayerWeapon > > m_hMyWeapons;
    char m_hMyWeapons[1]; // 0x48
    // CHandle< CBasePlayerWeapon > m_hActiveWeapon;
    char pad_02[23];
    char m_hActiveWeapon[1]; // 0x60
    // CHandle< CBasePlayerWeapon > m_hLastWeapon;
    char pad_03[3];
    char m_hLastWeapon[1]; // 0x64
    char pad_04[2];
    uint16_t m_iAmmo[32]; // 0x68
    bool m_bPreventWeaponPickup; // 0xa8
    char pad_05[7];
}; // size: 0xb0

/// AmmoTypeInfo_t
class __declspec(align(8)) AmmoTypeInfo_t0 {
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

/// CAnimGraphControllerBase
class __declspec(align(4)) CAnimGraphControllerBase0 {
public:
    char pad_00[24];
    ExternalAnimGraphHandle_t m_hExternalGraph; // 0x18
    char pad_01[116];
}; // size: 0x90

/// ExternalAnimGraphHandle_t
class __declspec(align(4)) ExternalAnimGraphHandle_t0 {
public:
    uint32_t m_Value; // 0x0
}; // size: 0x4

/// CEmptyGraphController
class __declspec(align(8)) CEmptyGraphController0 {
public:
    char pad_00[144];
}; // size: 0x90

/// CAnimGraphControllerManager
class __declspec(align(1)) CAnimGraphControllerManager0 {
public:
    // CUtlVector< CAnimGraphControllerBase* > m_controllers;
    char m_controllers[1]; // 0x0
    char pad_00[167];
    bool m_bGraphBindingsCreated; // 0xa8
    char pad_01[7];
}; // size: 0xb0

/// ExternalAnimGraph_t
class __declspec(align(4)) ExternalAnimGraph_t0 {
public:
    ExternalAnimGraphHandle_t m_hExtGraphHandle; // 0x0
    // CGlobalSymbol m_sExternalGraphSlotID;
    char pad_00[4];
    char m_sExternalGraphSlotID[1]; // 0x8
    // CStrongHandleCopyable< InfoForResourceTypeCNmGraphDefinition > m_hGraphDefinition;
    char pad_01[7];
    char m_hGraphDefinition[1]; // 0x10
    // CHandle< CBaseAnimGraph > m_hExternalGraphOwner;
    char pad_02[7];
    char m_hExternalGraphOwner[1]; // 0x18
    char pad_03[23];
    ExternalAnimGraphInactiveBehavior_t m_nInactiveBehavior; // 0x30
    char pad_04[7];
}; // size: 0x38

/// ISkeletonAnimationController
class __declspec(align(1)) ISkeletonAnimationController0 {
public:
    char pad_00[8];
}; // size: 0x8

/// CSkeletonAnimationController
class __declspec(align(8)) CSkeletonAnimationController0 : public ISkeletonAnimationController {
public:
    CSkeletonInstance* m_pSkeletonInstance; // 0x8
}; // size: 0x10

class __declspec(align(8)) CBaseAnimGraphController : public CSkeletonAnimationController {
public:
    char pad_01[8];
    AnimationAlgorithm_t m_nAnimationAlgorithm; // 0x18
    // CAnimGraphNetworkedVariables m_animGraphNetworkedVars;
    char pad_02[7];
    char m_animGraphNetworkedVars[1]; // 0x20
    // CSmartPtr< IAnimationGraphInstance > m_pAnimGraphInstance;
    char pad_03[519];
    char m_pAnimGraphInstance[1]; // 0x228
    char pad_04[92];
    ExternalAnimGraphHandle_t m_nNextExternalGraphHandle; // 0x288
    // CUtlVector< CGlobalSymbol > m_vecSecondarySkeletonNames;
    char pad_05[4];
    char m_vecSecondarySkeletonNames[1]; // 0x290
    // CNetworkUtlVectorBase< CHandle< CBaseAnimGraph > > m_vecSecondarySkeletons;
    char pad_06[23];
    char m_vecSecondarySkeletons[1]; // 0x2a8
    char pad_07[20];
    int32_t m_nSecondarySkeletonMasterCount; // 0x2c0
    float m_flSoundSyncTime; // 0x2c4
    uint32_t m_nActiveIKChainMask; // 0x2c8
    HSequence m_hSequence; // 0x2cc
    GameTime_t m_flSeqStartTime; // 0x2d0
    float m_flSeqFixedCycle; // 0x2d4
    AnimLoopMode_t m_nAnimLoopMode; // 0x2d8
    // CNetworkedQuantizedFloat m_flPlaybackRate;
    char m_flPlaybackRate[1]; // 0x2dc
    char pad_08[11];
    SequenceFinishNotifyState_t m_nNotifyState; // 0x2e8
    bool m_bNetworkedAnimationInputsChanged; // 0x2e9
    bool m_bNetworkedSequenceChanged; // 0x2ea
    bool m_bLastUpdateSkipped; // 0x2eb
    bool m_bSequenceFinished; // 0x2ec
    GameTick_t m_nPrevAnimUpdateTick; // 0x2f0
    // CStrongHandle< InfoForResourceTypeCNmGraphDefinition > m_hGraphDefinitionAG2;
    char pad_09[668];
    char m_hGraphDefinitionAG2[1]; // 0x590
    // CNetworkUtlVectorBase< uint8 > m_serializedPoseRecipeAG2;
    char pad_10[7];
    char m_serializedPoseRecipeAG2[1]; // 0x598
    char pad_11[20];
    int32_t m_nSerializePoseRecipeSizeAG2; // 0x5b0
    int32_t m_nSerializePoseRecipeVersionAG2; // 0x5b4
    int32_t m_nServerGraphInstanceIteration; // 0x5b8
    int32_t m_nServerSerializationContextIteration; // 0x5bc
    ResourceId_t m_primaryGraphId; // 0x5c0
    // CNetworkUtlVectorBase< ResourceId_t > m_vecExternalGraphIds;
    char m_vecExternalGraphIds[1]; // 0x5c8
    // CNetworkUtlVectorBase< ResourceId_t > m_vecExternalClipIds;
    char pad_12[23];
    char m_vecExternalClipIds[1]; // 0x5e0
    // CGlobalSymbol m_sAnimGraph2Identifier;
    char pad_13[23];
    char m_sAnimGraph2Identifier[1]; // 0x5f8
    // CUtlVector< ExternalAnimGraph_t > m_vecExternalGraphs;
    char pad_14[551];
    char m_vecExternalGraphs[1]; // 0x820
    char pad_015[55];
}; // size: 0x858

class __declspec(align(8)) CBodyComponentBaseAnimGraph : public CBodyComponentSkeletonInstance {
public:
    CBaseAnimGraphController m_animationController; // 0x4b0
    char pad_04[8];
}; // size: 0xd10

class __declspec(align(4)) EntityRenderAttribute_t {
public:
    // CUtlStringToken m_ID;
    char pad_00[48];
    char m_ID[1]; // 0x30
    Vector4D m_Values; // 0x34
    char pad_01[4];
}; // size: 0x48

/// ModelConfigHandle_t
class __declspec(align(4)) ModelConfigHandle_t0 {
public:
    uint32_t m_Value; // 0x0
}; // size: 0x4

class __declspec(align(4)) ActiveModelConfig_t {
public:
    char pad_00[48];
    ModelConfigHandle_t m_Handle; // 0x30
    // CUtlSymbolLarge m_Name;
    char pad_01[4];
    char m_Name[1]; // 0x38
    // CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_AssociatedEntities;
    char pad_02[7];
    char m_AssociatedEntities[1]; // 0x40
    // CNetworkUtlVectorBase< CUtlSymbolLarge > m_AssociatedEntityNames;
    char pad_03[23];
    char m_AssociatedEntityNames[1]; // 0x58
    char pad_04[23];
}; // size: 0x70

class __declspec(align(8)) CBodyComponentBaseModelEntity : public CBodyComponentSkeletonInstance {
public:
}; // size: 0x4b0

/// CPhysicsBodyGameMarkup
class __declspec(align(8)) CPhysicsBodyGameMarkup0 {
public:
    // CUtlString m_TargetBody;
    char m_TargetBody[1]; // 0x0
    // CGlobalSymbol m_Tag;
    char pad_00[7];
    char m_Tag[1]; // 0x8
    char pad_01[7];
}; // size: 0x10

/// CPhysicsBodyGameMarkupData
class __declspec(align(8)) CPhysicsBodyGameMarkupData0 {
public:
    // CUtlOrderedMap< CUtlString, CPhysicsBodyGameMarkup > m_PhysicsBodyMarkupByBoneName;
    char m_PhysicsBodyMarkupByBoneName[1]; // 0x0
    char pad_00[39];
}; // size: 0x28

class __declspec(align(1)) CBaseModelEntityAPI {
public:
    char pad_00[8];
}; // size: 0x8

/// CBaseAnimGraphDestructibleParts_GraphController
class __declspec(align(8)) CBaseAnimGraphDestructibleParts_GraphController0 {
public:
    char pad_00[144];
}; // size: 0x90

/// CDestructiblePart_DamageLevel
class __declspec(align(8)) CDestructiblePart_DamageLevel0 {
public:
    // CUtlString m_sName;
    char m_sName[1]; // 0x0
    // CGlobalSymbol m_sBreakablePieceName;
    char pad_00[7];
    char m_sBreakablePieceName[1]; // 0x8
    char pad_01[4];
    int32_t m_nBodyGroupValue; // 0x10
    CSkillInt m_nHealth; // 0x14
    float m_flCriticalDamagePercent; // 0x24
    EDestructiblePartDamagePassThroughType m_nDamagePassthroughType; // 0x28
    DestructiblePartDestructionDeathBehavior_t m_nDestructionDeathBehavior; // 0x2c
    // CGlobalSymbol m_sCustomDeathHandshake;
    char m_sCustomDeathHandshake[1]; // 0x30
    char pad_02[7];
    bool m_bShouldDestroyOnDeath; // 0x38
    CRangeFloat m_flDeathDestroyTime; // 0x3c
    char pad_03[4];
}; // size: 0x48

/// CDestructiblePart
class __declspec(align(8)) CDestructiblePart0 {
public:
    // CGlobalSymbol m_DebugName;
    char m_DebugName[1]; // 0x0
    char pad_00[4];
    HitGroup_t m_nHitGroup; // 0x8
    bool m_bDisableHitGroupWhenDestroyed; // 0xc
    // CUtlVector< HitGroup_t > m_nOtherHitgroupsToDestroyWhenFullyDestructed;
    char pad_01[3];
    char m_nOtherHitgroupsToDestroyWhenFullyDestructed[1]; // 0x10
    char pad_02[23];
    bool m_bOnlyDestroyWhenGibbing; // 0x28
    // CGlobalSymbol m_sBodyGroupName;
    char pad_03[7];
    char m_sBodyGroupName[1]; // 0x30
    // CUtlVector< CDestructiblePart_DamageLevel > m_DamageLevels;
    char pad_04[7];
    char m_DamageLevels[1]; // 0x38
    char pad_05[23];
}; // size: 0x50

/// CDestructiblePartsSystemData
class __declspec(align(8)) CDestructiblePartsSystemData0 {
public:
    // CUtlOrderedMap< HitGroup_t, CDestructiblePart > m_PartsDataByHitGroup;
    char m_PartsDataByHitGroup[1]; // 0x0
    char pad_00[36];
    CRangeInt m_nMinMaxNumberHitGroupsToDestroyWhenGibbing; // 0x28
}; // size: 0x30

class __declspec(align(8)) CDestructiblePartsComponent {
public:
    CNetworkVarChainer __m_pChainEntity; // 0x0
    // CUtlVector< uint16 > m_vecDamageTakenByHitGroup;
    char pad_00[32];
    char m_vecDamageTakenByHitGroup[1]; // 0x48
    // CHandle< CBaseModelEntity > m_hOwner;
    char pad_01[23];
    char m_hOwner[1]; // 0x60
    char pad_02[15];
}; // size: 0x70

/// DestructiblePartDestructionRequest_t
class __declspec(align(4)) DestructiblePartDestructionRequest_t0 {
public:
    EDestructibleParts_DestroyParameterFlags m_nDestroyFlags; // 0x0
    DamageTypes_t m_nDamageType; // 0x4
    float m_flPartDamage; // 0x8
    float m_flPartDamageRadius; // 0xc
    // VectorWS m_vWsPartDamageOrigin;
    char m_vWsPartDamageOrigin[1]; // 0x10
    char pad_00[8];
    Vector m_vWsPartDamageForce; // 0x1c
}; // size: 0x28

/// CNetworkOriginCellCoordQuantizedVector
class __declspec(align(2)) CNetworkOriginCellCoordQuantizedVector0 {
public:
    char pad_00[16];
    uint16_t m_cellX; // 0x10
    uint16_t m_cellY; // 0x12
    uint16_t m_cellZ; // 0x14
    uint16_t m_nOutsideWorld; // 0x16
    // CNetworkedQuantizedFloat m_vecX;
    char m_vecX[1]; // 0x18
    // CNetworkedQuantizedFloat m_vecY;
    char pad_01[7];
    char m_vecY[1]; // 0x20
    // CNetworkedQuantizedFloat m_vecZ;
    char pad_02[7];
    char m_vecZ[1]; // 0x28
    char pad_03[7];
}; // size: 0x30

/// CNetworkOriginQuantizedVector
class __declspec(align(1)) CNetworkOriginQuantizedVector0 {
public:
    // CNetworkedQuantizedFloat m_vecX;
    char pad_00[16];
    char m_vecX[1]; // 0x10
    // CNetworkedQuantizedFloat m_vecY;
    char pad_01[7];
    char m_vecY[1]; // 0x18
    // CNetworkedQuantizedFloat m_vecZ;
    char pad_02[7];
    char m_vecZ[1]; // 0x20
    char pad_03[7];
}; // size: 0x28

/// CNetworkVelocityVector
class __declspec(align(1)) CNetworkVelocityVector0 {
public:
    // CNetworkedQuantizedFloat m_vecX;
    char pad_00[16];
    char m_vecX[1]; // 0x10
    // CNetworkedQuantizedFloat m_vecY;
    char pad_01[7];
    char m_vecY[1]; // 0x18
    // CNetworkedQuantizedFloat m_vecZ;
    char pad_02[7];
    char m_vecZ[1]; // 0x20
    char pad_03[7];
}; // size: 0x28

/// CNetworkViewOffsetVector
class __declspec(align(1)) CNetworkViewOffsetVector0 {
public:
    // CNetworkedQuantizedFloat m_vecX;
    char pad_00[16];
    char m_vecX[1]; // 0x10
    // CNetworkedQuantizedFloat m_vecY;
    char pad_01[7];
    char m_vecY[1]; // 0x18
    // CNetworkedQuantizedFloat m_vecZ;
    char pad_02[7];
    char m_vecZ[1]; // 0x20
    char pad_03[7];
}; // size: 0x28

/// ParticleNode_t
class __declspec(align(4)) ParticleNode_t0 {
public:
    // CHandle< CBaseEntity > m_hEntity;
    char m_hEntity[1]; // 0x0
    ParticleIndex_t m_iIndex; // 0x4
    GameTime_t m_flStartTime; // 0x8
    float m_flGrowthDuration; // 0xc
    Vector m_vecGrowthOrigin; // 0x10
    float m_flEndcapTime; // 0x1c
    bool m_bMarkedForDelete; // 0x20
    char pad_00[3];
}; // size: 0x24

class __declspec(align(1)) CPulseFuncs_GameParticleManager {
public:
    char pad_00[1];
}; // size: 0x1

/// CRopeOverlapHit
class __declspec(align(1)) CRopeOverlapHit0 {
public:
    // CHandle< CBaseEntity > m_hEntity;
    char m_hEntity[1]; // 0x0
    // CUtlVector< int32 > m_vecOverlappingLinks;
    char pad_00[7];
    char m_vecOverlappingLinks[1]; // 0x8
    char pad_01[23];
}; // size: 0x20

class __declspec(align(1)) CGameSceneNodeHandle {
public:
    // CEntityHandle m_hOwner;
    char pad_00[8];
    char m_hOwner[1]; // 0x8
    // CUtlStringToken m_name;
    char pad_01[3];
    char m_name[1]; // 0xc
    char pad_02[3];
}; // size: 0x10

/// HullFlags_t
class __declspec(align(1)) HullFlags_t0 {
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

/// IChoreoServices
class __declspec(align(1)) IChoreoServices0 {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(1)) CLogicRelayAPI {
public:
    char pad_00[8];
}; // size: 0x8

/// CPathQueryUtil
class __declspec(align(1)) CPathQueryUtil0 {
public:
    // CTransform m_PathToEntityTransform;
    char pad_00[16];
    char m_PathToEntityTransform[1]; // 0x10
    // CUtlVector< Vector > m_vecPathSamplePositions;
    char pad_01[31];
    char m_vecPathSamplePositions[1]; // 0x30
    // CUtlVector< float32 > m_vecPathSampleParameters;
    char pad_02[23];
    char m_vecPathSampleParameters[1]; // 0x48
    // CUtlVector< float32 > m_vecPathSampleDistances;
    char pad_03[23];
    char m_vecPathSampleDistances[1]; // 0x60
    char pad_04[23];
    bool m_bIsClosedLoop; // 0x78
    char pad_05[7];
}; // size: 0x80

class __declspec(align(1)) CPathQueryComponent : public CEntityComponent {
public:
    char pad_01[152];
}; // size: 0xa0

class __declspec(align(1)) CPathSimpleAPI {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(4)) SequenceHistory_t {
public:
    HSequence m_hSequence; // 0x0
    GameTime_t m_flSeqStartTime; // 0x4
    float m_flSeqFixedCycle; // 0x8
    AnimLoopMode_t m_nSeqLoopMode; // 0xc
    float m_flPlaybackRate; // 0x10
    float m_flCyclesPerSecond; // 0x14
}; // size: 0x18

class __declspec(align(4)) CNetworkedSequenceOperation {
public:
    char pad_00[8];
    HSequence m_hSequence; // 0x8
    float m_flPrevCycle; // 0xc
    float m_flCycle; // 0x10
    // CNetworkedQuantizedFloat m_flWeight;
    char m_flWeight[1]; // 0x14
    char pad_01[7];
    bool m_bSequenceChangeNetworked; // 0x1c
    bool m_bDiscontinuity; // 0x1d
    float m_flPrevCycleFromDiscontinuity; // 0x20
    float m_flPrevCycleForAnimEventDetection; // 0x24
}; // size: 0x28

class __declspec(align(8)) CModelState {
public:
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    char pad_00[160];
    char m_hModel[1]; // 0xa0
    // CUtlSymbolLarge m_ModelName;
    char pad_01[7];
    char m_ModelName[1]; // 0xa8
    char pad_02[76];
    bool m_bClientClothCreationSuppressed; // 0xf5
    char pad_03[168];
    uint64_t m_MeshGroupMask; // 0x1a0
    // CNetworkUtlVectorBase< int32 > m_nBodyGroupChoices;
    char pad_04[72];
    char m_nBodyGroupChoices[1]; // 0x1f0
    char pad_05[73];
    int8_t m_nIdealMotionType; // 0x23a
    int8_t m_nForceLOD; // 0x23b
    int8_t m_nClothUpdateFlags; // 0x23c
    char pad_06[19];
}; // size: 0x250

/// CFloatExponentialMovingAverage
class __declspec(align(1)) CFloatExponentialMovingAverage0 {
public:
    char pad_00[20];
}; // size: 0x14

/// CVectorExponentialMovingAverage
class __declspec(align(1)) CVectorExponentialMovingAverage0 {
public:
    char pad_00[44];
}; // size: 0x2c

/// CFloatMovingAverage
class __declspec(align(1)) CFloatMovingAverage0 {
public:
    char pad_00[32];
}; // size: 0x20

/// CVectorMovingAverage
class __declspec(align(1)) CVectorMovingAverage0 {
public:
    char pad_00[32];
}; // size: 0x20

class __declspec(align(4)) IntervalTimer {
public:
    char pad_00[8];
    GameTime_t m_timestamp; // 0x8
    // WorldGroupId_t m_nWorldGroupId;
    char m_nWorldGroupId[1]; // 0xc
    char pad_01[3];
}; // size: 0x10

class __declspec(align(4)) EngineCountdownTimer {
public:
    char pad_00[8];
    float m_duration; // 0x8
    float m_timestamp; // 0xc
    float m_timescale; // 0x10
    char pad_01[4];
}; // size: 0x18

class __declspec(align(4)) CTimeline : public IntervalTimer {
public:
    float m_flValues[64]; // 0x10
    int32_t m_nValueCounts[64]; // 0x110
    int32_t m_nBucketCount; // 0x210
    float m_flInterval; // 0x214
    float m_flFinalValue; // 0x218
    TimelineCompression_t m_nCompressionType; // 0x21c
    bool m_bStopped; // 0x220
    char pad_02[7];
}; // size: 0x228

/// CNmEventConsumer
class __declspec(align(1)) CNmEventConsumer0 {
public:
    char pad_00[16];
}; // size: 0x10

/// CNmEventConsumerLegacy
class __declspec(align(8)) CNmEventConsumerLegacy0 {
public:
    char pad_00[32];
}; // size: 0x20

/// CNmEventConsumerAttributes
class __declspec(align(8)) CNmEventConsumerAttributes0 {
public:
    char pad_00[80];
}; // size: 0x50

/// CNmEventConsumerParticle
class __declspec(align(8)) CNmEventConsumerParticle0 {
public:
    char pad_00[48];
}; // size: 0x30

/// CNmEventConsumerSound
class __declspec(align(8)) CNmEventConsumerSound0 {
public:
    char pad_00[48];
}; // size: 0x30

class __declspec(align(4)) CAnimGraphNetworkedVariables {
public:
    // CNetworkUtlVectorBase< uint32 > m_PredNetBoolVariables;
    char pad_00[8];
    char m_PredNetBoolVariables[1]; // 0x8
    // CNetworkUtlVectorBase< uint8 > m_PredNetByteVariables;
    char pad_01[23];
    char m_PredNetByteVariables[1]; // 0x20
    // CNetworkUtlVectorBase< uint16 > m_PredNetUInt16Variables;
    char pad_02[23];
    char m_PredNetUInt16Variables[1]; // 0x38
    // CNetworkUtlVectorBase< int32 > m_PredNetIntVariables;
    char pad_03[23];
    char m_PredNetIntVariables[1]; // 0x50
    // CNetworkUtlVectorBase< uint32 > m_PredNetUInt32Variables;
    char pad_04[23];
    char m_PredNetUInt32Variables[1]; // 0x68
    // CNetworkUtlVectorBase< uint64 > m_PredNetUInt64Variables;
    char pad_05[23];
    char m_PredNetUInt64Variables[1]; // 0x80
    // CNetworkUtlVectorBase< float32 > m_PredNetFloatVariables;
    char pad_06[23];
    char m_PredNetFloatVariables[1]; // 0x98
    // CNetworkUtlVectorBase< Vector > m_PredNetVectorVariables;
    char pad_07[23];
    char m_PredNetVectorVariables[1]; // 0xb0
    // CNetworkUtlVectorBase< Quaternion > m_PredNetQuaternionVariables;
    char pad_08[23];
    char m_PredNetQuaternionVariables[1]; // 0xc8
    // CNetworkUtlVectorBase< CGlobalSymbol > m_PredNetGlobalSymbolVariables;
    char pad_09[23];
    char m_PredNetGlobalSymbolVariables[1]; // 0xe0
    // CNetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetBoolVariables;
    char pad_10[23];
    char m_OwnerOnlyPredNetBoolVariables[1]; // 0xf8
    // CNetworkUtlVectorBase< uint8 > m_OwnerOnlyPredNetByteVariables;
    char pad_11[23];
    char m_OwnerOnlyPredNetByteVariables[1]; // 0x110
    // CNetworkUtlVectorBase< uint16 > m_OwnerOnlyPredNetUInt16Variables;
    char pad_12[23];
    char m_OwnerOnlyPredNetUInt16Variables[1]; // 0x128
    // CNetworkUtlVectorBase< int32 > m_OwnerOnlyPredNetIntVariables;
    char pad_13[23];
    char m_OwnerOnlyPredNetIntVariables[1]; // 0x140
    // CNetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetUInt32Variables;
    char pad_14[23];
    char m_OwnerOnlyPredNetUInt32Variables[1]; // 0x158
    // CNetworkUtlVectorBase< uint64 > m_OwnerOnlyPredNetUInt64Variables;
    char pad_15[23];
    char m_OwnerOnlyPredNetUInt64Variables[1]; // 0x170
    // CNetworkUtlVectorBase< float32 > m_OwnerOnlyPredNetFloatVariables;
    char pad_16[23];
    char m_OwnerOnlyPredNetFloatVariables[1]; // 0x188
    // CNetworkUtlVectorBase< Vector > m_OwnerOnlyPredNetVectorVariables;
    char pad_17[23];
    char m_OwnerOnlyPredNetVectorVariables[1]; // 0x1a0
    // CNetworkUtlVectorBase< Quaternion > m_OwnerOnlyPredNetQuaternionVariables;
    char pad_18[23];
    char m_OwnerOnlyPredNetQuaternionVariables[1]; // 0x1b8
    // CNetworkUtlVectorBase< CGlobalSymbol > m_OwnerOnlyPredNetGlobalSymbolVariables;
    char pad_19[23];
    char m_OwnerOnlyPredNetGlobalSymbolVariables[1]; // 0x1d0
    char pad_20[20];
    int32_t m_nBoolVariablesCount; // 0x1e8
    int32_t m_nOwnerOnlyBoolVariablesCount; // 0x1ec
    int32_t m_nRandomSeedOffset; // 0x1f0
    float m_flLastTeleportTime; // 0x1f4
    char pad_021[16];
}; // size: 0x208

/// CFootstepTableHandle
class __declspec(align(1)) CFootstepTableHandle0 {
public:
    char pad_00[8];
}; // size: 0x8

/// ResponseFollowup
class __declspec(align(8)) ResponseFollowup0 {
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

/// ResponseParams
class __declspec(align(8)) ResponseParams0 {
public:
    char pad_00[16];
    int16_t odds; // 0x10
    int16_t flags; // 0x12
    ResponseFollowup* m_pFollowup; // 0x18
}; // size: 0x20

/// CResponseCriteriaSet
class __declspec(align(4)) CResponseCriteriaSet0 {
public:
    char pad_00[48];
    int32_t m_nNumPrefixedContexts; // 0x30
    bool m_bOverrideOnAppend; // 0x34
    char pad_01[3];
}; // size: 0x38

/// CRR_Response
class __declspec(align(8)) CRR_Response0 {
public:
    uint8_t m_Type; // 0x0
    char m_szResponseName[192]; // 0x1
    char m_szMatchingRule[128]; // 0xc1
    char pad_00[24];
    ResponseParams m_Params; // 0x160
    float m_fMatchScore; // 0x180
    bool m_bAnyMatchingRulesInCooldown; // 0x184
    char* m_szSpeakerContext; // 0x188
    char* m_szWorldContext; // 0x190
    ResponseFollowup m_Followup; // 0x198
    // CUtlSymbol m_recipientFilter;
    /* !!Invalid padding!! */ // char m_recipientFilter[1]; // 0x1ca
}; // size: 0x1d0

/// CAI_Expresser
class __declspec(align(8)) CAI_Expresser0 {
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
    char pad_01[24];
    CBaseFlex* m_pOuter; // 0x98
}; // size: 0xa0

/// CResponseQueue
class __declspec(align(1)) CResponseQueue0 {
public:
    // CUtlVector< CAI_Expresser* > m_ExpresserTargets;
    char pad_00[56];
    char m_ExpresserTargets[1]; // 0x38
    char pad_01[23];
}; // size: 0x50

/// CAI_ExpresserWithFollowup
class __declspec(align(1)) CAI_ExpresserWithFollowup0 {
public:
    char pad_00[160];
}; // size: 0xa0

/// CMultiplayer_Expresser
class __declspec(align(1)) CMultiplayer_Expresser0 {
public:
    char pad_00[160];
    bool m_bAllowMultipleScenes; // 0xa0
    char pad_01[7];
}; // size: 0xa8

class __declspec(align(1)) CBaseEntityAPI {
public:
    char pad_00[8];
}; // size: 0x8

/// CCommentarySystem
class __declspec(align(4)) CCommentarySystem0 {
public:
    char pad_00[17];
    bool m_bCommentaryConvarsChanging; // 0x11
    bool m_bCommentaryEnabledMidGame; // 0x12
    GameTime_t m_flNextTeleportTime; // 0x14
    int32_t m_iTeleportStage; // 0x18
    bool m_bCheatState; // 0x1c
    bool m_bIsFirstSpawnGroupToLoad; // 0x1d
    // CHandle< CPointCommentaryNode > m_hCurrentNode;
    char pad_01[26];
    char m_hCurrentNode[1]; // 0x38
    // CHandle< CPointCommentaryNode > m_hActiveCommentaryNode;
    char pad_02[3];
    char m_hActiveCommentaryNode[1]; // 0x3c
    // CHandle< CPointCommentaryNode > m_hLastCommentaryNode;
    char pad_03[3];
    char m_hLastCommentaryNode[1]; // 0x40
    // CUtlVector< CHandle< CPointCommentaryNode > > m_vecNodes;
    char pad_04[7];
    char m_vecNodes[1]; // 0x48
    char pad_05[23];
}; // size: 0x60

class __declspec(align(16)) CPointCommentaryNode : public CBaseAnimGraph {
public:
    // CUtlSymbolLarge m_iszPreCommands;
    char m_iszPreCommands[1]; // 0xa20
    // CUtlSymbolLarge m_iszPostCommands;
    char pad_36[7];
    char m_iszPostCommands[1]; // 0xa28
    // CUtlSymbolLarge m_iszCommentaryFile;
    char pad_37[7];
    char m_iszCommentaryFile[1]; // 0xa30
    // CUtlSymbolLarge m_iszViewTarget;
    char pad_38[7];
    char m_iszViewTarget[1]; // 0xa38
    // CHandle< CBaseEntity > m_hViewTarget;
    char pad_39[7];
    char m_hViewTarget[1]; // 0xa40
    // CHandle< CBaseEntity > m_hViewTargetAngles;
    char pad_40[3];
    char m_hViewTargetAngles[1]; // 0xa44
    // CUtlSymbolLarge m_iszViewPosition;
    char pad_41[3];
    char m_iszViewPosition[1]; // 0xa48
    // CHandle< CBaseEntity > m_hViewPosition;
    char pad_42[7];
    char m_hViewPosition[1]; // 0xa50
    // CHandle< CBaseEntity > m_hViewPositionMover;
    char pad_43[3];
    char m_hViewPositionMover[1]; // 0xa54
    char pad_44[3];
    bool m_bPreventMovement; // 0xa58
    bool m_bUnderCrosshair; // 0xa59
    bool m_bUnstoppable; // 0xa5a
    GameTime_t m_flFinishedTime; // 0xa5c
    Vector m_vecFinishOrigin; // 0xa60
    QAngle m_vecOriginalAngles; // 0xa6c
    QAngle m_vecFinishAngles; // 0xa78
    bool m_bPreventChangesWhileMoving; // 0xa84
    bool m_bDisabled; // 0xa85
    // VectorWS m_vecTeleportOrigin;
    char pad_45[2];
    char m_vecTeleportOrigin[1]; // 0xa88
    char pad_46[8];
    GameTime_t m_flAbortedPlaybackAt; // 0xa94
    CEntityIOOutput m_pOnCommentaryStarted; // 0xa98
    CEntityIOOutput m_pOnCommentaryStopped; // 0xab0
    bool m_bActive; // 0xac8
    GameTime_t m_flStartTime; // 0xacc
    float m_flStartTimeInCommentary; // 0xad0
    // CUtlSymbolLarge m_iszTitle;
    char pad_47[4];
    char m_iszTitle[1]; // 0xad8
    // CUtlSymbolLarge m_iszSpeakers;
    char pad_48[7];
    char m_iszSpeakers[1]; // 0xae0
    char pad_49[4];
    int32_t m_iNodeNumber; // 0xae8
    int32_t m_iNodeNumberMax; // 0xaec
    bool m_bListenedTo; // 0xaf0
    char pad_050[15];
}; // size: 0xb00

/// CPhysicsShake
class __declspec(align(4)) CPhysicsShake0 {
public:
    char pad_00[8];
    Vector m_force; // 0x8
    char pad_01[4];
}; // size: 0x18

/// CGameScriptedMoveData
class __declspec(align(4)) CGameScriptedMoveData0 {
public:
    Vector m_vAccumulatedRootMotion; // 0x0
    QAngle m_angAccumulatedRootMotionRotation; // 0xc
    // VectorWS m_vSrc;
    char m_vSrc[1]; // 0x18
    char pad_00[8];
    QAngle m_angSrc; // 0x24
    QAngle m_angCurrent; // 0x30
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
    Vector m_vDest; // 0x58
    QAngle m_angDst; // 0x64
    // CHandle< CBaseEntity > m_hDestEntity;
    char m_hDestEntity[1]; // 0x70
    char pad_01[3];
}; // size: 0x74

/// CGameScriptedMoveDef_t
class __declspec(align(4)) CGameScriptedMoveDef_t0 {
public:
    Vector m_vDestOffset; // 0x0
    // CHandle< CBaseEntity > m_hDestEntity;
    char m_hDestEntity[1]; // 0xc
    QAngle m_angDest; // 0x10
    float m_flDuration; // 0x1c
    float m_flAngRate; // 0x20
    float m_flMoveSpeed; // 0x24
    bool m_bAimDisabled; // 0x28
    bool m_bIgnoreRotation; // 0x29
    ForcedCrouchState_t m_nForcedCrouchState; // 0x2c
}; // size: 0x30

/// CGameChoreoServices
class __declspec(align(4)) CGameChoreoServices0 : public IChoreoServices {
public:
    // CHandle< CBaseAnimGraph > m_hOwner;
    char m_hOwner[1]; // 0x8
    // CHandle< CScriptedSequence > m_hScriptedSequence;
    char pad_01[3];
    char m_hScriptedSequence[1]; // 0xc
    // IChoreoServices::ScriptState_t m_scriptState;
    char pad_02[3];
    char m_scriptState[1]; // 0x10
    // IChoreoServices::ChoreoState_t m_choreoState;
    char pad_03[3];
    char m_choreoState[1]; // 0x14
    GameTime_t m_flTimeStartedState; // 0x18
    char pad_04[4];
}; // size: 0x20

class __declspec(align(16)) CScriptedSequence : public CBaseEntity {
public:
    // CUtlSymbolLarge m_iszEntry;
    char m_iszEntry[1]; // 0x4a8
    // CUtlSymbolLarge m_iszPreIdle;
    char pad_21[7];
    char m_iszPreIdle[1]; // 0x4b0
    // CUtlSymbolLarge m_iszPlay;
    char pad_22[7];
    char m_iszPlay[1]; // 0x4b8
    // CUtlSymbolLarge m_iszPostIdle;
    char pad_23[7];
    char m_iszPostIdle[1]; // 0x4c0
    // CUtlSymbolLarge m_iszModifierToAddOnPlay;
    char pad_24[7];
    char m_iszModifierToAddOnPlay[1]; // 0x4c8
    // CUtlSymbolLarge m_iszNextScript;
    char pad_25[7];
    char m_iszNextScript[1]; // 0x4d0
    // CUtlSymbolLarge m_iszEntity;
    char pad_26[7];
    char m_iszEntity[1]; // 0x4d8
    // CUtlSymbolLarge m_iszSyncGroup;
    char pad_27[7];
    char m_iszSyncGroup[1]; // 0x4e0
    char pad_28[4];
    ScriptedMoveTo_t m_nMoveTo; // 0x4e8
    SharedMovementGait_t m_nMoveToGait; // 0x4ec
    ScriptedHeldWeaponBehavior_t m_nHeldWeaponBehavior; // 0x4f0
    ForcedCrouchState_t m_nForcedCrouchState; // 0x4f4
    bool m_bIsPlayingPreIdle; // 0x4f8
    bool m_bIsPlayingEntry; // 0x4f9
    bool m_bIsPlayingAction; // 0x4fa
    bool m_bIsPlayingPostIdle; // 0x4fb
    bool m_bDontRotateOther; // 0x4fc
    bool m_bIsRepeatable; // 0x4fd
    bool m_bShouldLeaveCorpse; // 0x4fe
    bool m_bStartOnSpawn; // 0x4ff
    bool m_bDisallowInterrupts; // 0x500
    bool m_bCanOverrideNPCState; // 0x501
    bool m_bDontTeleportAtEnd; // 0x502
    bool m_bHighPriority; // 0x503
    bool m_bHideDebugComplaints; // 0x504
    bool m_bContinueOnDeath; // 0x505
    bool m_bLoopPreIdleSequence; // 0x506
    bool m_bLoopActionSequence; // 0x507
    bool m_bLoopPostIdleSequence; // 0x508
    bool m_bSynchPostIdles; // 0x509
    bool m_bIgnoreLookAt; // 0x50a
    bool m_bIgnoreGravity; // 0x50b
    bool m_bDisableNPCCollisions; // 0x50c
    bool m_bKeepAnimgraphLockedPost; // 0x50d
    bool m_bDontAddModifiers; // 0x50e
    bool m_bDisableAimingWhileMoving; // 0x50f
    bool m_bIgnoreRotation; // 0x510
    float m_flRadius; // 0x514
    float m_flRepeat; // 0x518
    float m_flPlayAnimFadeInTime; // 0x51c
    float m_flMoveInterpTime; // 0x520
    float m_flAngRate; // 0x524
    float m_flMoveSpeed; // 0x528
    bool m_bWaitUntilMoveCompletesToStartAnimation; // 0x52c
    int32_t m_nNotReadySequenceCount; // 0x530
    GameTime_t m_startTime; // 0x534
    bool m_bWaitForBeginSequence; // 0x538
    int32_t m_saved_effects; // 0x53c
    int32_t m_savedFlags; // 0x540
    int32_t m_savedCollisionGroup; // 0x544
    bool m_bInterruptable; // 0x548
    bool m_sequenceStarted; // 0x549
    bool m_bPositionRelativeToOtherEntity; // 0x54a
    // CHandle< CBaseEntity > m_hTargetEnt;
    char pad_29[1];
    char m_hTargetEnt[1]; // 0x54c
    // CHandle< CScriptedSequence > m_hNextCine;
    char pad_30[3];
    char m_hNextCine[1]; // 0x550
    char pad_31[3];
    bool m_bThinking; // 0x554
    bool m_bInitiatedSelfDelete; // 0x555
    bool m_bIsTeleportingDueToMoveTo; // 0x556
    bool m_bAllowCustomInterruptConditions; // 0x557
    // CHandle< CBaseAnimGraph > m_hForcedTarget;
    char m_hForcedTarget[1]; // 0x558
    char pad_32[3];
    bool m_bDontCancelOtherSequences; // 0x55c
    bool m_bForceSynch; // 0x55d
    bool m_bPreventUpdateYawOnFinish; // 0x55e
    bool m_bEnsureOnNavmeshOnFinish; // 0x55f
    ScriptedOnDeath_t m_onDeathBehavior; // 0x560
    ScriptedConflictResponse_t m_ConflictResponse; // 0x564
    CEntityIOOutput m_OnBeginSequence; // 0x568
    CEntityIOOutput m_OnActionStartOrLoop; // 0x580
    CEntityIOOutput m_OnEndSequence; // 0x598
    CEntityIOOutput m_OnPostIdleEndSequence; // 0x5b0
    CEntityIOOutput m_OnCancelSequence; // 0x5c8
    CEntityIOOutput m_OnCancelFailedSequence; // 0x5e0
    CEntityIOOutput m_OnScriptEvent; // 0x5f8
    // CTransform m_matOtherToMain;
    char pad_33[176];
    char m_matOtherToMain[1]; // 0x6c0
    // CHandle< CBaseEntity > m_hInteractionMainEntity;
    char pad_34[31];
    char m_hInteractionMainEntity[1]; // 0x6e0
    int32_t m_iPlayerDeathBehavior; // 0x6e4
    bool m_bSkipFadeIn; // 0x6e8
    char pad_035[7];
}; // size: 0x6f0

/// CConstantForceController
class __declspec(align(4)) CConstantForceController0 {
public:
    char pad_00[12];
    Vector m_linear; // 0xc
    // RotationVector m_angular;
    char m_angular[1]; // 0x18
    char pad_01[8];
    Vector m_linearSave; // 0x24
    // RotationVector m_angularSave;
    char m_angularSave[1]; // 0x30
    char pad_02[15];
}; // size: 0x40

class __declspec(align(1)) CPhysMotorAPI {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(1)) CPulsePhysicsConstraintsFuncs {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(1)) CPointTeleportAPI {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(1)) CTakeDamageInfoAPI {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(1)) CPulseServerCursor {
public:
    // CHandle< CBaseEntity > m_hActivator;
    char pad_00[216];
    char m_hActivator[1]; // 0xd8
    // CHandle< CBaseEntity > m_hCaller;
    char pad_01[3];
    char m_hCaller[1]; // 0xdc
    char pad_02[3];
}; // size: 0xe0

class __declspec(align(1)) CPulseGraphInstance_ServerEntity {
public:
    // CHandle< CBaseEntity > m_hOwner;
    char pad_00[400];
    char m_hOwner[1]; // 0x190
    char pad_01[3];
    bool m_bActivated; // 0x194
    // CUtlSymbolLarge m_sNameFixupStaticPrefix;
    char pad_02[3];
    char m_sNameFixupStaticPrefix[1]; // 0x198
    // CUtlSymbolLarge m_sNameFixupParent;
    char pad_03[7];
    char m_sNameFixupParent[1]; // 0x1a0
    // CUtlSymbolLarge m_sNameFixupLocal;
    char pad_04[7];
    char m_sNameFixupLocal[1]; // 0x1a8
    // CUtlSymbolLarge m_sProceduralWorldNameForRelays;
    char pad_05[7];
    char m_sProceduralWorldNameForRelays[1]; // 0x1b0
    char pad_06[7];
}; // size: 0x1b8

class __declspec(align(8)) CPulseCell_Step_FollowEntity {
public:
    // CUtlString m_ParamBoneOrAttachName;
    char pad_00[72];
    char m_ParamBoneOrAttachName[1]; // 0x48
    // CUtlString m_ParamBoneOrAttachNameChild;
    char pad_01[7];
    char m_ParamBoneOrAttachNameChild[1]; // 0x50
    char pad_02[7];
}; // size: 0x58

class __declspec(align(8)) CPulseCell_Step_SetAnimGraphParam {
public:
    // CUtlString m_ParamName;
    char pad_00[72];
    char m_ParamName[1]; // 0x48
    char pad_01[7];
}; // size: 0x50

class __declspec(align(8)) CPulseCell_Outflow_ListenForEntityOutput {
public:
    char pad_00[72];
    SignatureOutflow_Resume m_OnFired; // 0x48
    CPulse_ResumePoint m_OnCanceled; // 0x90
    // CGlobalSymbol m_strEntityOutput;
    char m_strEntityOutput[1]; // 0xd8
    // CUtlString m_strEntityOutputParam;
    char pad_01[7];
    char m_strEntityOutputParam[1]; // 0xe0
    char pad_02[7];
    bool m_bListenUntilCanceled; // 0xe8
    char pad_03[7];
}; // size: 0xf0

/// CPulseCell_Outflow_ListenForEntityOutput::CursorState_t
class __declspec(align(4)) CPulseCell_Outflow_ListenForEntityOutput__CursorState_t {
public:
    // CHandle< CBaseEntity > m_entity;
    char m_entity[1]; // 0x0
    char pad_00[3];
}; // size: 0x4

class __declspec(align(1)) CPulseServerFuncs {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(8)) CPulseCell_SoundEventStart {
public:
    char pad_00[72];
    SoundEventStartType_t m_Type; // 0x48
    char pad_01[4];
}; // size: 0x50

class __declspec(align(1)) CPulseServerFuncs_Sounds {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(8)) CPulseCell_Outflow_PlaySceneBase {
public:
    char pad_00[72];
    CPulse_ResumePoint m_OnFinished; // 0x48
    CPulse_ResumePoint m_OnCanceled; // 0x90
    // CUtlVector< CPulse_OutflowConnection > m_Triggers;
    char m_Triggers[1]; // 0xd8
    char pad_01[23];
}; // size: 0xf0

/// CPulseCell_Outflow_PlaySceneBase::CursorState_t
class __declspec(align(4)) CPulseCell_Outflow_PlaySceneBase__CursorState_t {
public:
    // CHandle< CBaseEntity > m_sceneInstance;
    char m_sceneInstance[1]; // 0x0
    // CHandle< CBaseEntity > m_mainActor;
    char pad_00[3];
    char m_mainActor[1]; // 0x4
    char pad_01[3];
}; // size: 0x8

class __declspec(align(8)) CPulseCell_Outflow_PlayVCD {
public:
    // CStrongHandle< InfoForResourceTypeCChoreoSceneResource > m_hChoreoScene;
    char pad_00[240];
    char m_hChoreoScene[1]; // 0xf0
    char pad_01[4];
    CPulse_OutflowConnection m_OnPaused; // 0xf8
    CPulse_OutflowConnection m_OnResumed; // 0x140
}; // size: 0x188

class __declspec(align(8)) CPulseCell_Outflow_PlaySequence {
public:
    // CUtlString m_ParamSequenceName;
    char pad_00[240];
    char m_ParamSequenceName[1]; // 0xf0
    char pad_01[7];
}; // size: 0xf8

/// PulseScriptedSequenceData_t
class __declspec(align(8)) PulseScriptedSequenceData_t0 {
public:
    int32_t m_nActorID; // 0x0
    // CUtlString m_szPreIdleSequence;
    char pad_00[4];
    char m_szPreIdleSequence[1]; // 0x8
    // CUtlString m_szEntrySequence;
    char pad_01[7];
    char m_szEntrySequence[1]; // 0x10
    // CUtlString m_szSequence;
    char pad_02[7];
    char m_szSequence[1]; // 0x18
    // CUtlString m_szExitSequence;
    char pad_03[7];
    char m_szExitSequence[1]; // 0x20
    char pad_04[4];
    ScriptedMoveTo_t m_nMoveTo; // 0x28
    SharedMovementGait_t m_nMoveToGait; // 0x2c
    ScriptedHeldWeaponBehavior_t m_nHeldWeaponBehavior; // 0x30
    bool m_bLoopPreIdleSequence; // 0x34
    bool m_bLoopActionSequence; // 0x35
    bool m_bLoopPostIdleSequence; // 0x36
    bool m_bIgnoreLookAt; // 0x37
}; // size: 0x38

class __declspec(align(8)) CPulseCell_Outflow_ScriptedSequence {
public:
    // CUtlString m_szSyncGroup;
    char pad_00[72];
    char m_szSyncGroup[1]; // 0x48
    char pad_01[4];
    int32_t m_nExpectedNumSequencesInSyncGroup; // 0x50
    bool m_bEnsureOnNavmeshOnFinish; // 0x54
    bool m_bDontTeleportAtEnd; // 0x55
    bool m_bDisallowInterrupts; // 0x56
    PulseScriptedSequenceData_t m_scriptedSequenceDataMain; // 0x58
    // CUtlVector< PulseScriptedSequenceData_t > m_vecAdditionalActors;
    char m_vecAdditionalActors[1]; // 0x90
    char pad_02[23];
    CPulse_ResumePoint m_OnFinished; // 0xa8
    CPulse_ResumePoint m_OnCanceled; // 0xf0
    // CUtlVector< CPulse_OutflowConnection > m_Triggers;
    char m_Triggers[1]; // 0x138
    char pad_03[23];
}; // size: 0x150

/// CPulseCell_Outflow_ScriptedSequence::CursorState_t
class __declspec(align(4)) CPulseCell_Outflow_ScriptedSequence__CursorState_t {
public:
    // CHandle< CBaseEntity > m_scriptedSequence;
    char m_scriptedSequence[1]; // 0x0
    char pad_00[3];
}; // size: 0x4

class __declspec(align(8)) CPulseCell_Outflow_ListenForAnimgraphTag {
public:
    char pad_00[72];
    CPulse_ResumePoint m_OnStart; // 0x48
    CPulse_ResumePoint m_OnEnd; // 0x90
    CPulse_ResumePoint m_OnCanceled; // 0xd8
    // CGlobalSymbol m_TagName;
    char m_TagName[1]; // 0x120
    char pad_01[7];
}; // size: 0x128

class __declspec(align(1)) CTouchExpansionComponent : public CEntityComponent {
public:
    char pad_01[72];
}; // size: 0x50

/// dynpitchvol_base_t
class __declspec(align(4)) dynpitchvol_base_t0 {
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

/// dynpitchvol_t
class __declspec(align(4)) dynpitchvol_t0 : public dynpitchvol_base_t {
public:
}; // size: 0x64

/// ResponseContext_t
class __declspec(align(4)) ResponseContext_t0 {
public:
    // CUtlSymbolLarge m_iszName;
    char m_iszName[1]; // 0x0
    // CUtlSymbolLarge m_iszValue;
    char pad_00[7];
    char m_iszValue[1]; // 0x8
    char pad_01[4];
    GameTime_t m_fExpirationTime; // 0x10
    char pad_02[4];
}; // size: 0x18

/// Relationship_t
class __declspec(align(4)) Relationship_t0 {
public:
    Disposition_t disposition; // 0x0
    int32_t priority; // 0x4
}; // size: 0x8

/// thinkfunc_t
class __declspec(align(4)) thinkfunc_t0 {
public:
    // HSCRIPT m_hFn;
    char pad_00[8];
    char m_hFn[1]; // 0x8
    // CUtlStringToken m_nContext;
    char pad_01[7];
    char m_nContext[1]; // 0x10
    GameTick_t m_nNextThinkTick; // 0x14
    GameTick_t m_nLastThinkTick; // 0x18
    char pad_02[4];
}; // size: 0x20

class __declspec(align(8)) CServerOnlyEntity : public CBaseEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CLogicalEntity : public CServerOnlyEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CBaseFilter : public CLogicalEntity {
public:
    bool m_bNegated; // 0x4a8
    char pad_21[7];
    CEntityIOOutput m_OnPass; // 0x4b0
    CEntityIOOutput m_OnFail; // 0x4c8
}; // size: 0x4e0

class __declspec(align(4)) CCollisionProperty {
public:
    // VPhysicsCollisionAttribute_t m_collisionAttribute;
    char pad_00[16];
    char m_collisionAttribute[1]; // 0x10
    char pad_01[44];
    Vector m_vecMins; // 0x40
    Vector m_vecMaxs; // 0x4c
    char pad_02[2];
    uint8_t m_usSolidFlags; // 0x5a
    SolidType_t m_nSolidType; // 0x5b
    uint8_t m_triggerBloat; // 0x5c
    SurroundingBoundsType_t m_nSurroundType; // 0x5d
    uint8_t m_CollisionGroup; // 0x5e
    uint8_t m_nEnablePhysics; // 0x5f
    float m_flBoundingRadius; // 0x60
    Vector m_vecSpecifiedSurroundingMins; // 0x64
    Vector m_vecSpecifiedSurroundingMaxs; // 0x70
    Vector m_vecSurroundingMaxs; // 0x7c
    Vector m_vecSurroundingMins; // 0x88
    Vector m_vCapsuleCenter1; // 0x94
    Vector m_vCapsuleCenter2; // 0xa0
    float m_flCapsuleRadius; // 0xac
}; // size: 0xb0

class __declspec(align(8)) CServerOnlyPointEntity : public CServerOnlyEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CEntityFlame : public CBaseEntity {
public:
    // CHandle< CBaseEntity > m_hEntAttached;
    char m_hEntAttached[1]; // 0x4a8
    char pad_21[3];
    bool m_bCheapEffect; // 0x4ac
    float m_flSize; // 0x4b0
    bool m_bUseHitboxes; // 0x4b4
    int32_t m_iNumHitboxFires; // 0x4b8
    float m_flHitboxFireScale; // 0x4bc
    GameTime_t m_flLifetime; // 0x4c0
    // CHandle< CBaseEntity > m_hAttacker;
    char m_hAttacker[1]; // 0x4c4
    float m_flDirectDamagePerSecond; // 0x4c8
    int32_t m_iCustomDamageType; // 0x4cc
    char pad_022[24];
}; // size: 0x4e8

class __declspec(align(16)) CFish : public CBaseAnimGraph {
public:
    // CHandle< CFishPool > m_pool;
    char m_pool[1]; // 0xa20
    uint32_t m_id; // 0xa24
    float m_x; // 0xa28
    float m_y; // 0xa2c
    float m_z; // 0xa30
    float m_angle; // 0xa34
    float m_angleChange; // 0xa38
    Vector m_forward; // 0xa3c
    Vector m_perp; // 0xa48
    Vector m_poolOrigin; // 0xa54
    float m_waterLevel; // 0xa60
    float m_speed; // 0xa64
    float m_desiredSpeed; // 0xa68
    float m_calmSpeed; // 0xa6c
    float m_panicSpeed; // 0xa70
    float m_avoidRange; // 0xa74
    CountdownTimer m_turnTimer; // 0xa78
    bool m_turnClockwise; // 0xa90
    char pad_36[4];
    CountdownTimer m_goTimer; // 0xa98
    CountdownTimer m_moveTimer; // 0xab0
    CountdownTimer m_panicTimer; // 0xac8
    CountdownTimer m_disperseTimer; // 0xae0
    CountdownTimer m_proximityTimer; // 0xaf8
    // CUtlVector< CFish* > m_visible;
    char m_visible[1]; // 0xb10
    char pad_037[31];
}; // size: 0xb30

class __declspec(align(8)) CFishPool : public CBaseEntity {
public:
    char pad_21[16];
    int32_t m_fishCount; // 0x4b8
    float m_maxRange; // 0x4bc
    float m_swimDepth; // 0x4c0
    float m_waterLevel; // 0x4c4
    bool m_isDormant; // 0x4c8
    // CUtlVector< CHandle< CFish > > m_fishes;
    char pad_22[7];
    char m_fishes[1]; // 0x4d0
    char pad_23[20];
    CountdownTimer m_visTimer; // 0x4e8
}; // size: 0x500

/// CPathMoverEntitySpawn
class __declspec(align(1)) CPathMoverEntitySpawn0 {
public:
    // CHandle< CFuncMover > hMover;
    char hMover[1]; // 0x0
    // CUtlVector< CHandle< CBaseEntity > > vecOtherEntities;
    char pad_00[7];
    char vecOtherEntities[1]; // 0x8
    char pad_01[23];
}; // size: 0x20

class __declspec(align(8)) CFuncMover : public CBaseModelEntity {
public:
    // CUtlSymbolLarge m_iszPathName;
    char m_iszPathName[1]; // 0x730
    // CHandle< CPathMover > m_hPathMover;
    char pad_31[7];
    char m_hPathMover[1]; // 0x738
    // CHandle< CPathMover > m_hPrevPathMover;
    char pad_32[3];
    char m_hPrevPathMover[1]; // 0x73c
    // CUtlSymbolLarge m_iszPathNodeStart;
    char pad_33[3];
    char m_iszPathNodeStart[1]; // 0x740
    // CUtlSymbolLarge m_iszPathNodeEnd;
    char pad_34[7];
    char m_iszPathNodeEnd[1]; // 0x748
    // CFuncMover::Move_t m_eMoveType;
    char pad_35[7];
    char m_eMoveType[1]; // 0x750
    char pad_36[3];
    bool m_bIsReversing; // 0x754
    float m_flStartSpeed; // 0x758
    float m_flPathLocation; // 0x75c
    float m_flT; // 0x760
    int32_t m_nCurrentNodeIndex; // 0x764
    int32_t m_nPreviousNodeIndex; // 0x768
    SolidType_t m_eSolidType; // 0x76c
    bool m_bIsMoving; // 0x76d
    float m_flTimeToReachMaxSpeed; // 0x770
    float m_flDistanceToReachMaxSpeed; // 0x774
    float m_flTimeToReachZeroSpeed; // 0x778
    float m_flComputedDistanceToReachMaxSpeed; // 0x77c
    float m_flComputedDistanceToReachZeroSpeed; // 0x780
    float m_flStartCurveScale; // 0x784
    float m_flStopCurveScale; // 0x788
    float m_flDistanceToReachZeroSpeed; // 0x78c
    GameTime_t m_flTimeMovementStart; // 0x790
    GameTime_t m_flTimeMovementStop; // 0x794
    // CHandle< CMoverPathNode > m_hStopAtNode;
    char m_hStopAtNode[1]; // 0x798
    float m_flPathLocationToBeginStop; // 0x79c
    float m_flPathLocationStart; // 0x7a0
    float m_flBeginStopT; // 0x7a4
    // CUtlSymbolLarge m_iszStartForwardSound;
    char m_iszStartForwardSound[1]; // 0x7a8
    // CUtlSymbolLarge m_iszLoopForwardSound;
    char pad_37[7];
    char m_iszLoopForwardSound[1]; // 0x7b0
    // CUtlSymbolLarge m_iszStopForwardSound;
    char pad_38[7];
    char m_iszStopForwardSound[1]; // 0x7b8
    // CUtlSymbolLarge m_iszStartReverseSound;
    char pad_39[7];
    char m_iszStartReverseSound[1]; // 0x7c0
    // CUtlSymbolLarge m_iszLoopReverseSound;
    char pad_40[7];
    char m_iszLoopReverseSound[1]; // 0x7c8
    // CUtlSymbolLarge m_iszStopReverseSound;
    char pad_41[7];
    char m_iszStopReverseSound[1]; // 0x7d0
    // CUtlSymbolLarge m_iszArriveAtDestinationSound;
    char pad_42[7];
    char m_iszArriveAtDestinationSound[1]; // 0x7d8
    char pad_43[31];
    CEntityIOOutput m_OnMovementEnd; // 0x7f8
    bool m_bStartAtClosestPoint; // 0x810
    bool m_bStartAtEnd; // 0x811
    bool m_bStartFollowingClosestMover; // 0x812
    // CFuncMover::OrientationUpdate_t m_eOrientationUpdate;
    char pad_44[1];
    char m_eOrientationUpdate[1]; // 0x814
    GameTime_t m_flTimeStartOrientationChange; // 0x818
    float m_flTimeToBlendToNewOrientation; // 0x81c
    float m_flDurationBlendToNewOrientationRan; // 0x820
    int32_t m_nOriginalOrientationIndex; // 0x824
    bool m_bCreateMovableNavMesh; // 0x828
    bool m_bAllowMovableNavMeshDockingOnEntireEntity; // 0x829
    // CEntityOutputTemplate< CUtlString, char* > m_OnNodePassed;
    char pad_45[6];
    char m_OnNodePassed[1]; // 0x830
    // CUtlSymbolLarge m_iszOrientationMatchEntityName;
    char pad_46[31];
    char m_iszOrientationMatchEntityName[1]; // 0x850
    // CHandle< CBaseEntity > m_hOrientationMatchEntity;
    char pad_47[7];
    char m_hOrientationMatchEntity[1]; // 0x858
    float m_flTimeToTraverseToNextNode; // 0x85c
    Vector m_vLerpToNewPosStartInPathEntitySpace; // 0x860
    Vector m_vLerpToNewPosEndInPathEntitySpace; // 0x86c
    float m_flLerpToPositionT; // 0x878
    float m_flLerpToPositionDeltaT; // 0x87c
    CEntityIOOutput m_OnLerpToPositionComplete; // 0x880
    bool m_bIsPaused; // 0x898
    // CFuncMover::TransitionToPathNodeAction_t m_eTransitionedToPathNodeAction;
    char pad_48[3];
    char m_eTransitionedToPathNodeAction[1]; // 0x89c
    int32_t m_nDelayedTeleportToNode; // 0x8a0
    bool m_bIsVerboseLogging; // 0x8a4
    // CHandle< CBaseEntity > m_hFollowEntity;
    char pad_49[3];
    char m_hFollowEntity[1]; // 0x8a8
    float m_flFollowDistance; // 0x8ac
    float m_flFollowMinimumSpeed; // 0x8b0
    float m_flCurFollowEntityT; // 0x8b4
    float m_flCurFollowSpeed; // 0x8b8
    // CUtlSymbolLarge m_strOrientationFaceEntityName;
    char pad_50[4];
    char m_strOrientationFaceEntityName[1]; // 0x8c0
    // CHandle< CBaseEntity > m_hOrientationFaceEntity;
    char pad_51[7];
    char m_hOrientationFaceEntity[1]; // 0x8c8
    char pad_52[7];
    CEntityIOOutput m_OnStart; // 0x8d0
    CEntityIOOutput m_OnStartForward; // 0x8e8
    CEntityIOOutput m_OnStartReverse; // 0x900
    CEntityIOOutput m_OnStop; // 0x918
    CEntityIOOutput m_OnStopped; // 0x930
    bool m_bNextNodeReturnsCurrent; // 0x948
    bool m_bStartedMoving; // 0x949
    // CFuncMover::FollowEntityDirection_t m_eFollowEntityDirection;
    char pad_53[30];
    char m_eFollowEntityDirection[1]; // 0x968
    // CHandle< CFuncMover > m_hFollowMover;
    char pad_54[3];
    char m_hFollowMover[1]; // 0x96c
    // CUtlSymbolLarge m_iszFollowMoverEntityName;
    char pad_55[3];
    char m_iszFollowMoverEntityName[1]; // 0x970
    char pad_56[4];
    float m_flFollowMoverDistance; // 0x978
    float m_flFollowMoverCalculatedDistance; // 0x97c
    float m_flFollowMoverSpringStrength; // 0x980
    bool m_bFollowConstraintsInitialized; // 0x984
    // CFuncMover::FollowConstraint_t m_eFollowConstraint;
    char pad_57[3];
    char m_eFollowConstraint[1]; // 0x988
    float m_flFollowMoverSpeed; // 0x98c
    float m_flFollowMoverVelocity; // 0x990
    GameTick_t m_nTickMovementRan; // 0x994
}; // size: 0x998

class __declspec(align(16)) CPathSimple : public CBaseEntity {
public:
    char pad_21[8];
    CPathQueryComponent m_CPathQueryComponent; // 0x4b0
    // CUtlString m_pathString;
    char pad_22[80];
    char m_pathString[1]; // 0x5a0
    char pad_23[7];
    bool m_bClosedLoop; // 0x5a8
    char pad_024[7];
}; // size: 0x5b0

class __declspec(align(16)) CPathWithDynamicNodes : public CPathSimple {
public:
    // CNetworkUtlVectorBase< CHandle< CPathNode > > m_vecPathNodes;
    char m_vecPathNodes[1]; // 0x5b0
    // CTransform m_xInitialPathWorldToLocal;
    char pad_25[31];
    char m_xInitialPathWorldToLocal[1]; // 0x5d0
    char pad_026[31];
}; // size: 0x5f0

class __declspec(align(16)) CPathMover : public CPathWithDynamicNodes {
public:
    // CUtlVector< CHandle< CFuncMover > > m_vecMovers;
    char m_vecMovers[1]; // 0x5f0
    // CHandle< CPathMoverEntitySpawner > m_hMoverSpawner;
    char pad_27[23];
    char m_hMoverSpawner[1]; // 0x608
    // CUtlSymbolLarge m_iszMoverSpawnerName;
    char pad_28[7];
    char m_iszMoverSpawnerName[1]; // 0x610
    char pad_029[15];
}; // size: 0x620

class __declspec(align(8)) CPathMoverEntitySpawner : public CLogicalEntity {
public:
    // CUtlSymbolLarge[4] m_szSpawnTemplates;
    char m_szSpawnTemplates[1]; // 0x4a8
    char pad_21[28];
    int32_t m_nSpawnIndex; // 0x4c8
    // CHandle< CPathMover > m_hPathMover;
    char m_hPathMover[1]; // 0x4cc
    float m_flSpawnFrequencySeconds; // 0x4d0
    float m_flSpawnFrequencyDistToNearestMover; // 0x4d4
    // CUtlHashtable< CHandle< CFuncMover >, CPathMoverEntitySpawn > m_mapSpawnedMoverTemplates;
    char m_mapSpawnedMoverTemplates[1]; // 0x4d8
    char pad_22[28];
    int32_t m_nMaxActive; // 0x4f8
    GameTime_t m_flLastSpawnTime; // 0x4fc
    bool m_bEnabled; // 0x500
    char pad_023[7];
}; // size: 0x508

class __declspec(align(1)) CFuncMoverAPI {
public:
    char pad_00[8];
}; // size: 0x8

/// RotatorHistoryEntry_t
class __declspec(align(4)) RotatorHistoryEntry_t0 {
public:
    // Quaternion qInvChange;
    char qInvChange[1]; // 0x0
    char pad_00[12];
    GameTime_t flTimeRotationStart; // 0x10
    char pad_01[12];
}; // size: 0x20

/// RotatorQueueEntry_t
class __declspec(align(4)) RotatorQueueEntry_t0 {
public:
    // Quaternion qTarget;
    char qTarget[1]; // 0x0
    char pad_00[12];
    RotatorTargetSpace_t eSpace; // 0x10
    char pad_01[12];
}; // size: 0x20

class __declspec(align(16)) CInfoData : public CServerOnlyEntity {
public:
    char pad_021[920];
}; // size: 0x840

/// locksound_t
class __declspec(align(4)) locksound_t0 {
public:
    // CUtlSymbolLarge sLockedSound;
    char pad_00[8];
    char sLockedSound[1]; // 0x8
    // CUtlSymbolLarge sUnlockedSound;
    char pad_01[7];
    char sUnlockedSound[1]; // 0x10
    char pad_02[4];
    GameTime_t flwaitSound; // 0x18
    char pad_03[4];
}; // size: 0x20

class __declspec(align(8)) CLogicBranch : public CLogicalEntity {
public:
    bool m_bInValue; // 0x4a8
    // CUtlVector< CHandle< CBaseEntity > > m_Listeners;
    char pad_21[7];
    char m_Listeners[1]; // 0x4b0
    char pad_22[23];
    CEntityIOOutput m_OnTrue; // 0x4c8
    CEntityIOOutput m_OnFalse; // 0x4e0
}; // size: 0x4f8

class __declspec(align(8)) CLogicDistanceCheck : public CLogicalEntity {
public:
    // CUtlSymbolLarge m_iszEntityA;
    char m_iszEntityA[1]; // 0x4a8
    // CUtlSymbolLarge m_iszEntityB;
    char pad_21[7];
    char m_iszEntityB[1]; // 0x4b0
    char pad_22[4];
    float m_flZone1Distance; // 0x4b8
    float m_flZone2Distance; // 0x4bc
    CEntityIOOutput m_InZone1; // 0x4c0
    CEntityIOOutput m_InZone2; // 0x4d8
    CEntityIOOutput m_InZone3; // 0x4f0
}; // size: 0x508

class __declspec(align(8)) CTestPulseIO : public CLogicalEntity {
public:
    CEntityIOOutput m_OnVariantVoid; // 0x4a8
    // CEntityOutputTemplate< bool, bool > m_OnVariantBool;
    char m_OnVariantBool[1]; // 0x4c0
    // CEntityOutputTemplate< int32, int32 > m_OnVariantInt;
    char pad_21[31];
    char m_OnVariantInt[1]; // 0x4e0
    // CEntityOutputTemplate< float32, float32 > m_OnVariantFloat;
    char pad_22[31];
    char m_OnVariantFloat[1]; // 0x500
    // CEntityOutputTemplate< CUtlSymbolLarge, CUtlSymbolLarge > m_OnVariantString;
    char pad_23[31];
    char m_OnVariantString[1]; // 0x520
    // CEntityOutputTemplate< Color, Color > m_OnVariantColor;
    char pad_24[31];
    char m_OnVariantColor[1]; // 0x540
    // CEntityOutputTemplate< Vector, Vector > m_OnVariantVector;
    char pad_25[31];
    char m_OnVariantVector[1]; // 0x560
    char pad_26[39];
    bool m_bAllowEmptyInputs; // 0x588
    char pad_027[7];
}; // size: 0x590

class __declspec(align(1)) CTestPulseIOAPI {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(8)) CMapSharedEnvironment : public CLogicalEntity {
public:
    // CUtlSymbolLarge m_targetMapName;
    char m_targetMapName[1]; // 0x4a8
    char pad_021[15];
}; // size: 0x4b8

/// DynamicVolumeDef_t
class __declspec(align(4)) DynamicVolumeDef_t0 {
public:
    // CHandle< CBaseEntity > m_source;
    char m_source[1]; // 0x0
    // CHandle< CBaseEntity > m_target;
    char pad_00[3];
    char m_target[1]; // 0x4
    int32_t m_nHullIdx; // 0x8
    Vector m_vSourceAnchorPos; // 0xc
    Vector m_vTargetAnchorPos; // 0x18
    uint32_t m_nAreaSrc; // 0x24
    uint32_t m_nAreaDst; // 0x28
    bool m_bAttached; // 0x2c
    char pad_01[3];
}; // size: 0x30

/// CMotorController
class __declspec(align(4)) CMotorController0 {
public:
    char pad_00[8];
    float m_speed; // 0x8
    float m_maxTorque; // 0xc
    // VectorWS m_axis;
    char m_axis[1]; // 0x10
    char pad_01[8];
    float m_inertiaFactor; // 0x1c
}; // size: 0x20

class __declspec(align(8)) CPhysMotor : public CLogicalEntity {
public:
    // CUtlSymbolLarge m_nameAttach;
    char m_nameAttach[1]; // 0x4a8
    // CUtlSymbolLarge m_nameAnchor;
    char pad_21[7];
    char m_nameAnchor[1]; // 0x4b0
    // CHandle< CBaseEntity > m_hAttachedObject;
    char pad_22[7];
    char m_hAttachedObject[1]; // 0x4b8
    // CHandle< CBaseEntity > m_hAnchorObject;
    char pad_23[3];
    char m_hAnchorObject[1]; // 0x4bc
    float m_spinUp; // 0x4c0
    float m_spinDown; // 0x4c4
    float m_flMotorFriction; // 0x4c8
    float m_additionalAcceleration; // 0x4cc
    float m_angularAcceleration; // 0x4d0
    float m_flTorqueScale; // 0x4d4
    float m_flTargetSpeed; // 0x4d8
    float m_flSpeedWhenSpinUpOrSpinDownStarted; // 0x4dc
    char pad_24[16];
    CMotorController m_motor; // 0x4f0
}; // size: 0x510

/// VelocitySampler
class __declspec(align(4)) VelocitySampler0 {
public:
    Vector m_prevSample; // 0x0
    GameTime_t m_fPrevSampleTime; // 0xc
    float m_fIdealSampleRate; // 0x10
}; // size: 0x14

/// SimpleConstraintSoundProfile
class __declspec(align(4)) SimpleConstraintSoundProfile0 {
public:
    char pad_00[8];
    float m_flKeyPointMinSoundThreshold; // 0x8
    float m_flKeyPointMaxSoundThreshold; // 0xc
    float m_reversalSoundThresholdSmall; // 0x10
    float m_reversalSoundThresholdMedium; // 0x14
    float m_reversalSoundThresholdLarge; // 0x18
    char pad_01[4];
}; // size: 0x20

/// ConstraintSoundInfo
class __declspec(align(4)) ConstraintSoundInfo0 {
public:
    char pad_00[8];
    VelocitySampler m_vSampler; // 0x8
    char pad_01[4];
    SimpleConstraintSoundProfile m_soundProfile; // 0x20
    Vector m_forwardAxis; // 0x40
    // CUtlSymbolLarge m_iszTravelSoundFwd;
    char pad_02[4];
    char m_iszTravelSoundFwd[1]; // 0x50
    // CUtlSymbolLarge m_iszTravelSoundBack;
    char pad_03[7];
    char m_iszTravelSoundBack[1]; // 0x58
    // CUtlSymbolLarge m_iszReversalSoundSmall;
    char pad_04[31];
    char m_iszReversalSoundSmall[1]; // 0x78
    // CUtlSymbolLarge m_iszReversalSoundMedium;
    char pad_05[7];
    char m_iszReversalSoundMedium[1]; // 0x80
    // CUtlSymbolLarge m_iszReversalSoundLarge;
    char pad_06[7];
    char m_iszReversalSoundLarge[1]; // 0x88
    char pad_07[7];
    bool m_bPlayTravelSound; // 0x90
    bool m_bPlayReversalSound; // 0x91
    char pad_08[6];
}; // size: 0x98

/// CSmoothFunc
class __declspec(align(4)) CSmoothFunc0 {
public:
    char pad_00[8];
    float m_flSmoothAmplitude; // 0x8
    float m_flSmoothBias; // 0xc
    float m_flSmoothDuration; // 0x10
    float m_flSmoothRemainingTime; // 0x14
    int32_t m_nSmoothDir; // 0x18
    char pad_01[4];
}; // size: 0x20

/// magnetted_objects_t
class __declspec(align(1)) magnetted_objects_t0 {
public:
    // CHandle< CBaseEntity > hEntity;
    char pad_00[8];
    char hEntity[1]; // 0x8
    char pad_01[7];
}; // size: 0x10

class __declspec(align(8)) CPointPrefab : public CServerOnlyPointEntity {
public:
    // CUtlSymbolLarge m_targetMapName;
    char m_targetMapName[1]; // 0x4a8
    // CUtlSymbolLarge m_forceWorldGroupID;
    char pad_21[7];
    char m_forceWorldGroupID[1]; // 0x4b0
    // CUtlSymbolLarge m_associatedRelayTargetName;
    char pad_22[7];
    char m_associatedRelayTargetName[1]; // 0x4b8
    char pad_23[7];
    bool m_fixupNames; // 0x4c0
    bool m_bLoadDynamic; // 0x4c1
    // CHandle< CPointPrefab > m_associatedRelayEntity;
    char pad_24[2];
    char m_associatedRelayEntity[1]; // 0x4c4
    char pad_025[75];
}; // size: 0x510

class __declspec(align(8)) CScenePayloadVData {
public:
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCChoreoSceneResource > > m_sSceneFile;
    char m_sSceneFile[1]; // 0x0
    char pad_00[223];
}; // size: 0xe0

/// SceneRequestHandle_t
class __declspec(align(4)) SceneRequestHandle_t0 {
public:
    int32_t m_Value; // 0x0
}; // size: 0x4

/// CSceneRequest
class __declspec(align(4)) CSceneRequest0 {
public:
    // CUtlSymbolLarge m_szPayloadTypeName;
    char m_szPayloadTypeName[1]; // 0x0
    char pad_00[4];
    SceneRequestHandle_t m_uHandle; // 0x8
    ESceneRequestState_t m_state; // 0xc
    char pad_01[16];
}; // size: 0x20

class __declspec(align(8)) CSkyCamera : public CBaseEntity {
public:
    // sky3dparams_t m_skyboxData;
    char m_skyboxData[1]; // 0x4a8
    // CUtlStringToken m_skyboxSlotToken;
    char pad_21[143];
    char m_skyboxSlotToken[1]; // 0x538
    char pad_22[3];
    bool m_bUseAngles; // 0x53c
    CSkyCamera* m_pNext; // 0x540
}; // size: 0x548

class __declspec(align(8)) CSkyboxReference : public CBaseEntity {
public:
    // WorldGroupId_t m_worldGroupId;
    char m_worldGroupId[1]; // 0x4a8
    // CHandle< CSkyCamera > m_hSkyCamera;
    char pad_21[3];
    char m_hSkyCamera[1]; // 0x4ac
    char pad_022[3];
}; // size: 0x4b0

class __declspec(align(4)) sky3dparams_t {
public:
    char pad_00[8];
    int16_t scale; // 0x8
    Vector origin; // 0xc
    bool bClip3DSkyBoxNearToWorldFar; // 0x18
    float flClip3DSkyBoxNearToWorldFarOffset; // 0x1c
    // fogparams_t fog;
    char fog[1]; // 0x20
    // WorldGroupId_t m_nWorldGroupID;
    char pad_01[103];
    char m_nWorldGroupID[1]; // 0x88
    char pad_02[7];
}; // size: 0x90

/// lerpdata_t
class __declspec(align(4)) lerpdata_t0 {
public:
    // CHandle< CBaseEntity > m_hEnt;
    char m_hEnt[1]; // 0x0
    char pad_00[3];
    MoveType_t m_MoveType; // 0x4
    GameTime_t m_flStartTime; // 0x8
    Vector m_vecStartOrigin; // 0xc
    // Quaternion m_qStartRot;
    char pad_01[8];
    char m_qStartRot[1]; // 0x20
    char pad_02[12];
    ParticleIndex_t m_nFXIndex; // 0x30
    char pad_03[28];
}; // size: 0x50

/// CMovementStatsProperty
class __declspec(align(4)) CMovementStatsProperty0 {
public:
    char pad_00[16];
    int32_t m_nUseCounter; // 0x10
    CVectorExponentialMovingAverage m_emaMovementDirection; // 0x14
}; // size: 0x40

/// CRelativeLocation
class __declspec(align(4)) CRelativeLocation0 {
public:
    char pad_00[24];
    RelativeLocationType_t m_Type; // 0x18
    Vector m_vRelativeOffset; // 0x1c
    // VectorWS m_vWorldSpacePos;
    char m_vWorldSpacePos[1]; // 0x28
    // CHandle< CBaseEntity > m_hEntity;
    char pad_01[11];
    char m_hEntity[1]; // 0x34
    char pad_02[3];
}; // size: 0x38

/// CNavVolumeMarkupVolume
class __declspec(align(1)) CNavVolumeMarkupVolume0 {
public:
    char pad_00[224];
}; // size: 0xe0

/// CNavVolumeCalculatedVector
class __declspec(align(1)) CNavVolumeCalculatedVector0 {
public:
    char pad_00[160];
}; // size: 0xa0

/// CNavVolumeBreadthFirstSearch
class __declspec(align(4)) CNavVolumeBreadthFirstSearch0 {
public:
    char pad_00[168];
    Vector m_vStartPos; // 0xa8
    float m_flSearchDist; // 0xb4
    char pad_01[8];
}; // size: 0xc0

class __declspec(align(8)) VPhysicsCollisionAttribute_t {
public:
    char pad_00[8];
    uint64_t m_nInteractsAs; // 0x8
    uint64_t m_nInteractsWith; // 0x10
    uint64_t m_nInteractsExclude; // 0x18
    uint32_t m_nEntityId; // 0x20
    uint32_t m_nOwnerId; // 0x24
    uint16_t m_nHierarchyId; // 0x28
    uint16_t m_nDetailLayerMask; // 0x2a
    uint8_t m_nDetailLayerMaskType; // 0x2c
    uint8_t m_nTargetDetailLayer; // 0x2d
    uint8_t m_nCollisionGroup; // 0x2e
    uint8_t m_nCollisionFunctionMask; // 0x2f
}; // size: 0x30

class __declspec(align(4)) CEffectData {
public:
    // VectorWS m_vOrigin;
    char pad_00[8];
    char m_vOrigin[1]; // 0x8
    // VectorWS m_vStart;
    char pad_01[11];
    char m_vStart[1]; // 0x14
    char pad_02[8];
    Vector m_vNormal; // 0x20
    QAngle m_vAngles; // 0x2c
    // CEntityHandle m_hEntity;
    char m_hEntity[1]; // 0x38
    // CEntityHandle m_hOtherEntity;
    char pad_03[3];
    char m_hOtherEntity[1]; // 0x3c
    float m_flScale; // 0x40
    float m_flMagnitude; // 0x44
    float m_flRadius; // 0x48
    // CUtlStringToken m_nSurfaceProp;
    char m_nSurfaceProp[1]; // 0x4c
    // CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > m_nEffectIndex;
    char pad_04[3];
    char m_nEffectIndex[1]; // 0x50
    char pad_05[4];
    uint32_t m_nDamageType; // 0x58
    uint8_t m_nPenetrate; // 0x5c
    uint16_t m_nMaterial; // 0x5e
    int16_t m_nHitBox; // 0x60
    uint8_t m_nColor; // 0x62
    uint8_t m_fFlags; // 0x63
    AttachmentHandle_t m_nAttachmentIndex; // 0x64
    // CUtlStringToken m_nAttachmentName;
    char pad_06[3];
    char m_nAttachmentName[1]; // 0x68
    char pad_07[2];
    uint16_t m_iEffectName; // 0x6c
    uint8_t m_nExplosionType; // 0x6e
    char pad_08[1];
}; // size: 0x70

class __declspec(align(8)) CEnvDetailController : public CBaseEntity {
public:
    float m_flFadeStartDist; // 0x4a8
    float m_flFadeEndDist; // 0x4ac
}; // size: 0x4b0

class __declspec(align(4)) CEnvWindShared {
public:
    char pad_00[8];
    GameTime_t m_flStartTime; // 0x8
    uint32_t m_iWindSeed; // 0xc
    uint16_t m_iMinWind; // 0x10
    uint16_t m_iMaxWind; // 0x12
    int32_t m_windRadius; // 0x14
    uint16_t m_iMinGust; // 0x18
    uint16_t m_iMaxGust; // 0x1a
    float m_flMinGustDelay; // 0x1c
    float m_flMaxGustDelay; // 0x20
    float m_flGustDuration; // 0x24
    uint16_t m_iGustDirChange; // 0x28
    uint16_t m_iInitialWindDir; // 0x2a
    float m_flInitialWindSpeed; // 0x2c
    Vector m_location; // 0x30
    char pad_01[4];
    CEntityIOOutput m_OnGustStart; // 0x40
    CEntityIOOutput m_OnGustEnd; // 0x58
    // CHandle< CBaseEntity > m_hEntOwner;
    char m_hEntOwner[1]; // 0x70
    char pad_02[191];
}; // size: 0x130

class __declspec(align(8)) CInfoLadderDismount : public CBaseEntity {
public:
}; // size: 0x4a8

class __declspec(align(4)) shard_model_desc_t {
public:
    char pad_00[8];
    int32_t m_nModelID; // 0x8
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterialBase;
    char pad_01[4];
    char m_hMaterialBase[1]; // 0x10
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterialDamageOverlay;
    char pad_02[7];
    char m_hMaterialDamageOverlay[1]; // 0x18
    char pad_03[7];
    ShardSolid_t m_solid; // 0x20
    Vector2D m_vecPanelSize; // 0x24
    Vector2D m_vecStressPositionA; // 0x2c
    Vector2D m_vecStressPositionB; // 0x34
    // CNetworkUtlVectorBase< Vector2D > m_vecPanelVertices;
    char pad_04[4];
    char m_vecPanelVertices[1]; // 0x40
    // CNetworkUtlVectorBase< Vector4D > m_vInitialPanelVertices;
    char pad_05[23];
    char m_vInitialPanelVertices[1]; // 0x58
    char pad_06[20];
    float m_flGlassHalfThickness; // 0x70
    bool m_bHasParent; // 0x74
    bool m_bParentFrozen; // 0x75
    // CUtlStringToken m_SurfacePropStringToken;
    char pad_07[2];
    char m_SurfacePropStringToken[1]; // 0x78
    char pad_08[7];
}; // size: 0x80

/// CShatterGlassShard
class __declspec(align(4)) CShatterGlassShard0 {
public:
    char pad_00[8];
    uint32_t m_hShardHandle; // 0x8
    // CUtlVector< Vector2D > m_vecPanelVertices;
    char pad_01[4];
    char m_vecPanelVertices[1]; // 0x10
    char pad_02[20];
    Vector2D m_vLocalPanelSpaceOrigin; // 0x28
    // CStrongHandle< InfoForResourceTypeCModel > m_hModel;
    char m_hModel[1]; // 0x30
    // CHandle< CShatterGlassShardPhysics > m_hPhysicsEntity;
    char pad_03[7];
    char m_hPhysicsEntity[1]; // 0x38
    // CHandle< CFuncShatterglass > m_hParentPanel;
    char pad_04[3];
    char m_hParentPanel[1]; // 0x3c
    uint32_t m_hParentShard; // 0x40
    ShatterGlassStressType m_ShatterStressType; // 0x44
    Vector m_vecStressVelocity; // 0x48
    bool m_bCreatedModel; // 0x54
    float m_flLongestEdge; // 0x58
    float m_flShortestEdge; // 0x5c
    float m_flLongestAcross; // 0x60
    float m_flShortestAcross; // 0x64
    float m_flSumOfAllEdges; // 0x68
    float m_flArea; // 0x6c
    OnFrame m_nOnFrameEdge; // 0x70
    int32_t m_nSubShardGeneration; // 0x74
    Vector2D m_vecAverageVertPosition; // 0x78
    bool m_bAverageVertPositionIsValid; // 0x80
    Vector2D m_vecPanelSpaceStressPositionA; // 0x84
    Vector2D m_vecPanelSpaceStressPositionB; // 0x8c
    bool m_bStressPositionAIsValid; // 0x94
    bool m_bStressPositionBIsValid; // 0x95
    bool m_bFlaggedForRemoval; // 0x96
    GameTime_t m_flPhysicsEntitySpawnedAtTime; // 0x98
    // CHandle< CBaseEntity > m_hEntityHittingMe;
    char m_hEntityHittingMe[1]; // 0x9c
    // CUtlVector< uint32 > m_vecNeighbors;
    char pad_05[3];
    char m_vecNeighbors[1]; // 0xa0
    char pad_06[23];
}; // size: 0xb8

class __declspec(align(16)) CBaseProp : public CBaseAnimGraph {
public:
    bool m_bModelOverrodeBlockLOS; // 0xa20
    int32_t m_iShapeType; // 0xa24
    bool m_bConformToCollisionBounds; // 0xa28
    // CTransform m_mPreferredCatchTransform;
    char pad_36[7];
    char m_mPreferredCatchTransform[1]; // 0xa30
    char pad_037[31];
}; // size: 0xa50

class __declspec(align(16)) CBreakableProp : public CBaseProp {
public:
    char pad_38[8];
    CPropDataComponent m_CPropDataComponent; // 0xa58
    CEntityIOOutput m_OnStartDeath; // 0xa98
    CEntityIOOutput m_OnBreak; // 0xab0
    // CEntityOutputTemplate< float32, float32 > m_OnHealthChanged;
    char m_OnHealthChanged[1]; // 0xac8
    char pad_39[31];
    CEntityIOOutput m_OnTakeDamage; // 0xae8
    float m_impactEnergyScale; // 0xb00
    int32_t m_iMinHealthDmg; // 0xb04
    QAngle m_preferredCarryAngles; // 0xb08
    float m_flPressureDelay; // 0xb14
    float m_flDefBurstScale; // 0xb18
    Vector m_vDefBurstOffset; // 0xb1c
    // CHandle< CBaseEntity > m_hBreaker;
    char m_hBreaker[1]; // 0xb28
    PerformanceMode_t m_PerformanceMode; // 0xb2c
    GameTime_t m_flPreventDamageBeforeTime; // 0xb30
    BreakableContentsType_t m_BreakableContentsType; // 0xb34
    // CUtlString m_strBreakableContentsPropGroupOverride;
    char m_strBreakableContentsPropGroupOverride[1]; // 0xb38
    // CUtlString m_strBreakableContentsParticleOverride;
    char pad_40[7];
    char m_strBreakableContentsParticleOverride[1]; // 0xb40
    char pad_41[7];
    bool m_bHasBreakPiecesOrCommands; // 0xb48
    float m_explodeDamage; // 0xb4c
    float m_explodeRadius; // 0xb50
    BaseExplosionTypes_t m_nExplosionType; // 0xb54
    float m_explosionDelay; // 0xb58
    // CUtlSymbolLarge m_explosionBuildupSound;
    char pad_42[4];
    char m_explosionBuildupSound[1]; // 0xb60
    // CUtlSymbolLarge m_explosionCustomEffect;
    char pad_43[7];
    char m_explosionCustomEffect[1]; // 0xb68
    // CUtlSymbolLarge m_explosionCustomSound;
    char pad_44[7];
    char m_explosionCustomSound[1]; // 0xb70
    // CUtlSymbolLarge m_explosionModifier;
    char pad_45[7];
    char m_explosionModifier[1]; // 0xb78
    // CHandle< CBasePlayerPawn > m_hPhysicsAttacker;
    char pad_46[7];
    char m_hPhysicsAttacker[1]; // 0xb80
    GameTime_t m_flLastPhysicsInfluenceTime; // 0xb84
    float m_flDefaultFadeScale; // 0xb88
    // CHandle< CBaseEntity > m_hLastAttacker;
    char m_hLastAttacker[1]; // 0xb8c
    // CUtlSymbolLarge m_iszPuntSound;
    char pad_47[3];
    char m_iszPuntSound[1]; // 0xb90
    char pad_48[7];
    bool m_bUsePuntSound; // 0xb98
    bool m_bOriginalBlockLOS; // 0xb99
    char pad_049[6];
}; // size: 0xba0

class __declspec(align(16)) CPhysicsProp : public CBreakableProp {
public:
    char pad_50[16];
    CEntityIOOutput m_MotionEnabled; // 0xbb0
    CEntityIOOutput m_OnAwakened; // 0xbc8
    CEntityIOOutput m_OnAwake; // 0xbe0
    CEntityIOOutput m_OnAsleep; // 0xbf8
    CEntityIOOutput m_OnPlayerUse; // 0xc10
    CEntityIOOutput m_OnOutOfWorld; // 0xc28
    CEntityIOOutput m_OnPlayerPickup; // 0xc40
    bool m_bForceNavIgnore; // 0xc58
    bool m_bNoNavmeshBlocker; // 0xc59
    bool m_bForceNpcExclude; // 0xc5a
    float m_massScale; // 0xc5c
    float m_buoyancyScale; // 0xc60
    int32_t m_damageType; // 0xc64
    int32_t m_damageToEnableMotion; // 0xc68
    float m_flForceToEnableMotion; // 0xc6c
    bool m_bThrownByPlayer; // 0xc70
    bool m_bDroppedByPlayer; // 0xc71
    bool m_bTouchedByPlayer; // 0xc72
    bool m_bFirstCollisionAfterLaunch; // 0xc73
    bool m_bHasBeenAwakened; // 0xc74
    bool m_bIsOverrideProp; // 0xc75
    GameTime_t m_flLastBurn; // 0xc78
    DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // 0xc7c
    GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xc80
    int32_t m_iInitialGlowState; // 0xc84
    int32_t m_nGlowRange; // 0xc88
    int32_t m_nGlowRangeMin; // 0xc8c
    // Color m_glowColor;
    char m_glowColor[1]; // 0xc90
    char pad_51[3];
    bool m_bShouldAutoConvertBackFromDebris; // 0xc94
    bool m_bMuteImpactEffects; // 0xc95
    char pad_52[6];
    bool m_bUpdateNavWhenMoving; // 0xc9c
    bool m_bForceNavObstacleCut; // 0xc9d
    bool m_bAllowObstacleConvexHullMerging; // 0xc9e
    bool m_bAcceptDamageFromHeldObjects; // 0xc9f
    bool m_bEnableUseOutput; // 0xca0
    // CPhysicsProp::CrateType_t m_CrateType;
    char pad_53[3];
    char m_CrateType[1]; // 0xca4
    // CUtlSymbolLarge[4] m_strItemClass;
    char pad_54[3];
    char m_strItemClass[1]; // 0xca8
    char pad_55[28];
    int32_t m_nItemCount[4]; // 0xcc8
    bool m_bRemovableForAmmoBalancing; // 0xcd8
    bool m_bAwake; // 0xcd9
    bool m_bAttachedToReferenceFrame; // 0xcda
    char pad_056[5];
}; // size: 0xce0

class __declspec(align(16)) CShatterGlassShardPhysics : public CPhysicsProp {
public:
    bool m_bDebris; // 0xce0
    uint32_t m_hParentShard; // 0xce4
    shard_model_desc_t m_ShardDesc; // 0xce8
    char pad_057[8];
}; // size: 0xd70

class __declspec(align(8)) CFuncShatterglass : public CBaseModelEntity {
public:
    // matrix3x4_t m_matPanelTransform;
    char m_matPanelTransform[1]; // 0x730
    // matrix3x4_t m_matPanelTransformWsTemp;
    char pad_31[47];
    char m_matPanelTransformWsTemp[1]; // 0x760
    // CUtlVector< uint32 > m_vecShatterGlassShards;
    char pad_32[47];
    char m_vecShatterGlassShards[1]; // 0x790
    char pad_33[20];
    Vector2D m_PanelSize; // 0x7a8
    GameTime_t m_flLastShatterSoundEmitTime; // 0x7b0
    GameTime_t m_flLastCleanupTime; // 0x7b4
    GameTime_t m_flInitAtTime; // 0x7b8
    float m_flGlassThickness; // 0x7bc
    float m_flSpawnInvulnerability; // 0x7c0
    bool m_bBreakSilent; // 0x7c4
    bool m_bBreakShardless; // 0x7c5
    bool m_bBroken; // 0x7c6
    bool m_bGlassNavIgnore; // 0x7c7
    bool m_bGlassInFrame; // 0x7c8
    bool m_bStartBroken; // 0x7c9
    uint8_t m_iInitialDamageType; // 0x7ca
    // CUtlSymbolLarge m_szDamagePositioningEntityName01;
    char pad_34[5];
    char m_szDamagePositioningEntityName01[1]; // 0x7d0
    // CUtlSymbolLarge m_szDamagePositioningEntityName02;
    char pad_35[7];
    char m_szDamagePositioningEntityName02[1]; // 0x7d8
    // CUtlSymbolLarge m_szDamagePositioningEntityName03;
    char pad_36[7];
    char m_szDamagePositioningEntityName03[1]; // 0x7e0
    // CUtlSymbolLarge m_szDamagePositioningEntityName04;
    char pad_37[7];
    char m_szDamagePositioningEntityName04[1]; // 0x7e8
    // CUtlVector< Vector > m_vInitialDamagePositions;
    char pad_38[7];
    char m_vInitialDamagePositions[1]; // 0x7f0
    // CUtlVector< Vector > m_vExtraDamagePositions;
    char pad_39[23];
    char m_vExtraDamagePositions[1]; // 0x808
    // CUtlVector< Vector4D > m_vInitialPanelVertices;
    char pad_40[23];
    char m_vInitialPanelVertices[1]; // 0x820
    char pad_41[23];
    CEntityIOOutput m_OnBroken; // 0x838
    uint8_t m_iSurfaceType; // 0x850
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterialDamageBase;
    char pad_42[7];
    char m_hMaterialDamageBase[1]; // 0x858
    char pad_043[7];
}; // size: 0x860

class __declspec(align(8)) CGameRulesProxy : public CBaseEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CGameRules {
public:
    char pad_00[8];
    CNetworkVarChainer __m_pChainEntity; // 0x8
    char m_szQuestName[128]; // 0x30
    int32_t m_nQuestPhase; // 0xb0
    uint32_t m_nLastMatchTime; // 0xb4
    uint64_t m_nLastMatchTime_MatchID64; // 0xb8
    int32_t m_nTotalPausedTicks; // 0xc0
    int32_t m_nPauseStartTick; // 0xc4
    bool m_bGamePaused; // 0xc8
    char pad_01[7];
}; // size: 0xd0

class __declspec(align(4)) CGlowProperty {
public:
    char pad_00[8];
    Vector m_fGlowColor; // 0x8
    char pad_01[28];
    int32_t m_iGlowType; // 0x30
    int32_t m_iGlowTeam; // 0x34
    int32_t m_nGlowRange; // 0x38
    int32_t m_nGlowRangeMin; // 0x3c
    // Color m_glowColorOverride;
    char m_glowColorOverride[1]; // 0x40
    char pad_02[3];
    bool m_bFlashing; // 0x44
    float m_flGlowTime; // 0x48
    float m_flGlowStartTime; // 0x4c
    bool m_bEligibleForScreenHighlight; // 0x50
    bool m_bGlowing; // 0x51
    char pad_03[6];
}; // size: 0x58

class __declspec(align(1)) CMultiplayRules {
public:
    char pad_00[208];
}; // size: 0xd0

/// WrappedPhysicsJoint_t
class __declspec(align(1)) WrappedPhysicsJoint_t0 {
public:
    char pad_00[8];
}; // size: 0x8

class __declspec(align(4)) fogparams_t {
public:
    char pad_00[8];
    Vector dirPrimary; // 0x8
    // Color colorPrimary;
    char colorPrimary[1]; // 0x14
    // Color colorSecondary;
    char pad_01[3];
    char colorSecondary[1]; // 0x18
    // Color colorPrimaryLerpTo;
    char pad_02[3];
    char colorPrimaryLerpTo[1]; // 0x1c
    // Color colorSecondaryLerpTo;
    char pad_03[3];
    char colorSecondaryLerpTo[1]; // 0x20
    float start; // 0x24
    float end; // 0x28
    float farz; // 0x2c
    float maxdensity; // 0x30
    float exponent; // 0x34
    float HDRColorScale; // 0x38
    float skyboxFogFactor; // 0x3c
    float skyboxFogFactorLerpTo; // 0x40
    float startLerpTo; // 0x44
    float endLerpTo; // 0x48
    float maxdensityLerpTo; // 0x4c
    GameTime_t lerptime; // 0x50
    float duration; // 0x54
    float blendtobackground; // 0x58
    float scattering; // 0x5c
    float locallightscale; // 0x60
    bool enable; // 0x64
    bool blend; // 0x65
    bool m_bPadding2; // 0x66
    bool m_bPadding; // 0x67
}; // size: 0x68

class __declspec(align(8)) CFogController : public CBaseEntity {
public:
    fogparams_t m_fog; // 0x4a8
    bool m_bUseAngles; // 0x510
    int32_t m_iChangedVariables; // 0x514
}; // size: 0x518

/// sndopvarlatchdata_t
class __declspec(align(4)) sndopvarlatchdata_t0 {
public:
    // CUtlSymbolLarge m_iszStack;
    char pad_00[8];
    char m_iszStack[1]; // 0x8
    // CUtlSymbolLarge m_iszOperator;
    char pad_01[7];
    char m_iszOperator[1]; // 0x10
    // CUtlSymbolLarge m_iszOpvar;
    char pad_02[7];
    char m_iszOpvar[1]; // 0x18
    char pad_03[4];
    float m_flVal; // 0x20
    Vector m_vPos; // 0x24
}; // size: 0x30

/// IRagdoll
class __declspec(align(1)) IRagdoll0 {
public:
    char pad_00[8];
}; // size: 0x8

/// ragdollelement_t
class __declspec(align(4)) ragdollelement_t0 {
public:
    Vector originParentSpace; // 0x0
    char pad_00[20];
    int32_t parentIndex; // 0x20
    float m_flRadius; // 0x24
    int32_t m_nHeight; // 0x28
    char pad_01[4];
}; // size: 0x30

/// ragdollhierarchyjoint_t
class __declspec(align(4)) ragdollhierarchyjoint_t0 {
public:
    int32_t parentIndex; // 0x0
    int32_t childIndex; // 0x4
    char pad_00[8];
}; // size: 0x10

/// ragdoll_t
class __declspec(align(1)) ragdoll_t0 {
public:
    // CUtlVector< ragdollelement_t > list;
    char list[1]; // 0x0
    // CUtlVector< ragdollhierarchyjoint_t > hierarchyJoints;
    char pad_00[23];
    char hierarchyJoints[1]; // 0x18
    // CUtlVector< int32 > boneIndex;
    char pad_01[23];
    char boneIndex[1]; // 0x30
    char pad_02[23];
    bool allowStretch; // 0x48
    bool unused; // 0x49
    char pad_03[6];
}; // size: 0x50

class __declspec(align(8)) PhysicsRagdollPose_t {
public:
    // CNetworkUtlVectorBase< CTransform > m_Transforms;
    char pad_00[8];
    char m_Transforms[1]; // 0x8
    // CHandle< CBaseEntity > m_hOwner;
    char pad_01[23];
    char m_hOwner[1]; // 0x20
    char pad_02[3];
    bool m_bSetFromDebugHistory; // 0x24
    char pad_03[3];
}; // size: 0x28

/// CSceneEventInfo
class __declspec(align(4)) CSceneEventInfo0 {
public:
    int32_t m_iLayer; // 0x0
    int32_t m_iPriority; // 0x4
    HSequence m_hSequence; // 0x8
    float m_flWeight; // 0xc
    // CStrongHandle< InfoForResourceTypeCNmClip > m_hAnimClip;
    char m_hAnimClip[1]; // 0x10
    // CGlobalSymbol m_sAnimClipSlot;
    char pad_00[7];
    char m_sAnimClipSlot[1]; // 0x18
    // CGlobalSymbol m_sAnimClipSlotWeight;
    char pad_01[7];
    char m_sAnimClipSlotWeight[1]; // 0x20
    char pad_02[7];
    bool m_bHasArrived; // 0x28
    int32_t m_nType; // 0x2c
    GameTime_t m_flNext; // 0x30
    bool m_bIsGesture; // 0x34
    bool m_bShouldRemove; // 0x35
    // CHandle< CBaseEntity > m_hTarget;
    char pad_03[38];
    char m_hTarget[1]; // 0x5c
    SceneEventId_t m_nSceneEventId; // 0x60
    bool m_bClientSide; // 0x64
    bool m_bStarted; // 0x65
    char pad_04[2];
}; // size: 0x68

/// SceneEventId_t
class __declspec(align(4)) SceneEventId_t0 {
public:
    uint32_t m_Value; // 0x0
}; // size: 0x4

/// AmmoIndex_t
class __declspec(align(1)) AmmoIndex_t0 {
public:
    int8_t m_Value; // 0x0
}; // size: 0x1

/// CEntitySubclassVDataBase
class __declspec(align(8)) CEntitySubclassVDataBase0 {
public:
    char pad_00[40];
}; // size: 0x28

/// RagdollCreationParams_t
class __declspec(align(4)) RagdollCreationParams_t0 {
public:
    Vector m_vForce; // 0x0
    int32_t m_nForceBone; // 0xc
    bool m_bForceCurrentWorldTransform; // 0x10
    bool m_bUseLRURetirement; // 0x11
    int32_t m_nHealthToGrant; // 0x14
}; // size: 0x18

/// hudtextparms_t
class __declspec(align(4)) hudtextparms_t0 {
public:
    // Color color1;
    char color1[1]; // 0x0
    // Color color2;
    char pad_00[3];
    char color2[1]; // 0x4
    char pad_01[3];
    uint8_t effect; // 0x8
    uint8_t channel; // 0x9
    float x; // 0xc
    float y; // 0x10
}; // size: 0x14

/// CodeGenAABB_t
class __declspec(align(4)) CodeGenAABB_t0 {
public:
    Vector m_vMinBounds; // 0x0
    Vector m_vMaxBounds; // 0xc
}; // size: 0x18

/// CSimpleSimTimer
class __declspec(align(4)) CSimpleSimTimer0 {
public:
    GameTime_t m_flNext; // 0x0
    // WorldGroupId_t m_nWorldGroupId;
    char m_nWorldGroupId[1]; // 0x4
    char pad_00[3];
}; // size: 0x8

/// CSimTimer
class __declspec(align(4)) CSimTimer0 : public CSimpleSimTimer {
public:
    float m_flInterval; // 0x8
}; // size: 0xc

/// CRandSimTimer
class __declspec(align(4)) CRandSimTimer0 : public CSimpleSimTimer {
public:
    float m_flMinInterval; // 0x8
    float m_flMaxInterval; // 0xc
}; // size: 0x10

/// CStopwatchBase
class __declspec(align(4)) CStopwatchBase0 : public CSimpleSimTimer {
public:
    bool m_fIsRunning; // 0x8
    char pad_01[3];
}; // size: 0xc

/// CSimpleStopwatch
class __declspec(align(1)) CSimpleStopwatch0 {
public:
    char pad_00[12];
}; // size: 0xc

/// CStopwatch
class __declspec(align(4)) CStopwatch0 : public CStopwatchBase {
public:
    float m_flInterval; // 0xc
}; // size: 0x10

/// CRandStopwatch
class __declspec(align(4)) CRandStopwatch0 : public CStopwatchBase {
public:
    float m_flMinInterval; // 0xc
    float m_flMaxInterval; // 0x10
}; // size: 0x14

class __declspec(align(1)) CSingleplayRules {
public:
    char pad_00[208];
    bool m_bSinglePlayerGameEnding; // 0xd0
    char pad_01[7];
}; // size: 0xd8

/// CCopyRecipientFilter
class __declspec(align(4)) CCopyRecipientFilter0 {
public:
    char pad_00[8];
    int32_t m_Flags; // 0x8
    // CUtlVector< CPlayerSlot > m_Recipients;
    char pad_01[4];
    char m_Recipients[1]; // 0x10
    // CPlayerSlot m_slotPlayerExcludedDueToPrediction;
    char pad_02[31];
    char m_slotPlayerExcludedDueToPrediction[1]; // 0x30
    char pad_03[7];
}; // size: 0x38

/// CSoundEnvelope
class __declspec(align(4)) CSoundEnvelope0 {
public:
    float m_current; // 0x0
    float m_target; // 0x4
    float m_rate; // 0x8
    bool m_forceupdate; // 0xc
    char pad_00[3];
}; // size: 0x10

/// CSoundPatch
class __declspec(align(4)) CSoundPatch0 {
public:
    char pad_00[8];
    CSoundEnvelope m_pitch; // 0x8
    CSoundEnvelope m_volume; // 0x18
    char pad_01[20];
    float m_shutdownTime; // 0x3c
    float m_flLastTime; // 0x40
    // CUtlSymbolLarge m_iszSoundScriptName;
    char pad_02[4];
    char m_iszSoundScriptName[1]; // 0x48
    // CHandle< CBaseEntity > m_hEnt;
    char pad_03[7];
    char m_hEnt[1]; // 0x50
    // CEntityIndex m_soundEntityIndex;
    char pad_04[3];
    char m_soundEntityIndex[1]; // 0x54
    Vector m_soundOrigin; // 0x58
    int32_t m_isPlaying; // 0x64
    CCopyRecipientFilter m_Filter; // 0x68
    float m_flCloseCaptionDuration; // 0xa0
    bool m_bUpdatedSoundOrigin; // 0xa4
    // CUtlSymbolLarge m_iszClassName;
    char pad_05[3];
    char m_iszClassName[1]; // 0xa8
    char pad_06[7];
}; // size: 0xb0

class __declspec(align(8)) CSoundOpvarSetPointBase : public CBaseEntity {
public:
    bool m_bDisabled; // 0x4a8
    // CEntityHandle m_hSource;
    char pad_21[3];
    char m_hSource[1]; // 0x4ac
    // CUtlSymbolLarge m_iszSourceEntityName;
    char pad_22[27];
    char m_iszSourceEntityName[1]; // 0x4c8
    char pad_23[84];
    Vector m_vLastPosition; // 0x520
    float m_flRefreshTime; // 0x52c
    // CUtlSymbolLarge m_iszStackName;
    char m_iszStackName[1]; // 0x530
    // CUtlSymbolLarge m_iszOperatorName;
    char pad_24[7];
    char m_iszOperatorName[1]; // 0x538
    // CUtlSymbolLarge m_iszOpvarName;
    char pad_25[7];
    char m_iszOpvarName[1]; // 0x540
    char pad_26[4];
    int32_t m_iOpvarIndex; // 0x548
    bool m_bUseAutoCompare; // 0x54c
    bool m_bFastRefresh; // 0x54d
    char pad_027[2];
}; // size: 0x550

class __declspec(align(8)) CSoundOpvarSetPointEntity : public CSoundOpvarSetPointBase {
public:
    CEntityIOOutput m_OnEnter; // 0x550
    CEntityIOOutput m_OnExit; // 0x568
    bool m_bAutoDisable; // 0x580
    char pad_28[64];
    float m_flDistanceMin; // 0x5c4
    float m_flDistanceMax; // 0x5c8
    float m_flDistanceMapMin; // 0x5cc
    float m_flDistanceMapMax; // 0x5d0
    float m_flOcclusionRadius; // 0x5d4
    float m_flOcclusionMin; // 0x5d8
    float m_flOcclusionMax; // 0x5dc
    float m_flValSetOnDisable; // 0x5e0
    bool m_bSetValueOnDisable; // 0x5e4
    bool m_bReloading; // 0x5e5
    int32_t m_nSimulationMode; // 0x5e8
    int32_t m_nVisibilitySamples; // 0x5ec
    Vector m_vDynamicProxyPoint; // 0x5f0
    float m_flDynamicMaximumOcclusion; // 0x5fc
    // CEntityHandle m_hDynamicEntity;
    char m_hDynamicEntity[1]; // 0x600
    // CUtlSymbolLarge m_iszDynamicEntityName;
    char pad_29[7];
    char m_iszDynamicEntityName[1]; // 0x608
    char pad_30[4];
    float m_flPathingDistanceNormFactor; // 0x610
    Vector m_vPathingSourcePos; // 0x614
    Vector m_vPathingListenerPos; // 0x620
    Vector m_vPathingDirection; // 0x62c
    int32_t m_nPathingSourceIndex; // 0x638
    char pad_031[4];
}; // size: 0x640

class __declspec(align(8)) CSoundOpvarSetAABBEntity : public CSoundOpvarSetPointEntity {
public:
    Vector m_vDistanceInnerMins; // 0x640
    Vector m_vDistanceInnerMaxs; // 0x64c
    Vector m_vDistanceOuterMins; // 0x658
    Vector m_vDistanceOuterMaxs; // 0x664
    int32_t m_nAABBDirection; // 0x670
    Vector m_vInnerMins; // 0x674
    Vector m_vInnerMaxs; // 0x680
    Vector m_vOuterMins; // 0x68c
    Vector m_vOuterMaxs; // 0x698
    char pad_032[4];
}; // size: 0x6a8

class __declspec(align(8)) CSoundOpvarSetOBBEntity : public CSoundOpvarSetAABBEntity {
public:
}; // size: 0x6a8

class __declspec(align(8)) CSoundOpvarSetPathCornerEntity : public CSoundOpvarSetPointEntity {
public:
    char pad_32[24];
    bool m_bUseParentedPath; // 0x658
    float m_flDistMinSqr; // 0x65c
    float m_flDistMaxSqr; // 0x660
    // CUtlSymbolLarge m_iszPathCornerEntityName;
    char pad_33[4];
    char m_iszPathCornerEntityName[1]; // 0x668
    char pad_034[7];
}; // size: 0x670

/// SoundOpvarTraceResult_t
class __declspec(align(4)) SoundOpvarTraceResult_t0 {
public:
    Vector vPos; // 0x0
    bool bDidHit; // 0xc
    float flDistSqrToCenter; // 0x10
}; // size: 0x14

/// AutoRoomDoorwayPairs_t
class __declspec(align(4)) AutoRoomDoorwayPairs_t0 {
public:
    Vector vP1; // 0x0
    Vector vP2; // 0xc
}; // size: 0x18

class __declspec(align(8)) CSoundOpvarSetAutoRoomEntity : public CSoundOpvarSetPointEntity {
public:
    // CUtlVector< SoundOpvarTraceResult_t > m_traceResults;
    char m_traceResults[1]; // 0x640
    // CUtlVector< AutoRoomDoorwayPairs_t > m_doorwayPairs;
    char pad_32[23];
    char m_doorwayPairs[1]; // 0x658
    char pad_33[20];
    float m_flSize; // 0x670
    float m_flHeightTolerance; // 0x674
    float m_flSizeSqr; // 0x678
    char pad_034[4];
}; // size: 0x680

class __declspec(align(8)) CSoundOpvarSetOBBWindEntity : public CSoundOpvarSetPointBase {
public:
    Vector m_vMins; // 0x550
    Vector m_vMaxs; // 0x55c
    Vector m_vDistanceMins; // 0x568
    Vector m_vDistanceMaxs; // 0x574
    float m_flWindMin; // 0x580
    float m_flWindMax; // 0x584
    float m_flWindMapMin; // 0x588
    float m_flWindMapMax; // 0x58c
}; // size: 0x590

/// DestructibleHitGroupToDestroy_t
class __declspec(align(4)) DestructibleHitGroupToDestroy_t0 {
public:
    HitGroup_t m_nHitGroup; // 0x0
    int32_t m_nMaxDamageLevel; // 0x4
}; // size: 0x8

/// CTakeDamageInfo
class __declspec(align(8)) CTakeDamageInfo0 {
public:
    char pad_00[8];
    Vector m_vecDamageForce; // 0x8
    // VectorWS m_vecDamagePosition;
    char m_vecDamagePosition[1]; // 0x14
    // VectorWS m_vecReportedPosition;
    char pad_01[11];
    char m_vecReportedPosition[1]; // 0x20
    char pad_02[8];
    Vector m_vecDamageDirection; // 0x2c
    // CHandle< CBaseEntity > m_hInflictor;
    char m_hInflictor[1]; // 0x38
    // CHandle< CBaseEntity > m_hAttacker;
    char pad_03[3];
    char m_hAttacker[1]; // 0x3c
    // CHandle< CBaseEntity > m_hAbility;
    char pad_04[3];
    char m_hAbility[1]; // 0x40
    float m_flDamage; // 0x44
    float m_flTotalledDamage; // 0x48
    DamageTypes_t m_bitsDamageType; // 0x4c
    int32_t m_iDamageCustom; // 0x50
    AmmoIndex_t m_iAmmoType; // 0x54
    char pad_05[8];
    float m_flOriginalDamage; // 0x60
    bool m_bShouldBleed; // 0x64
    bool m_bShouldSpark; // 0x65
    char pad_06[8];
    TakeDamageFlags_t m_nDamageFlags; // 0x70
    HitGroup_t m_iHitGroupId; // 0x78
    int32_t m_nNumObjectsPenetrated; // 0x7c
    float m_flFriendlyFireDamageReductionRatio; // 0x80
    bool m_bStoppedBullet; // 0x84
    // CUtlVector< DestructibleHitGroupToDestroy_t > m_nDestructibleHitGroupsToForceDestroy;
    char pad_07[123];
    char m_nDestructibleHitGroupsToForceDestroy[1]; // 0x100
    char pad_08[23];
    bool m_bInTakeDamageFlow; // 0x118
    char pad_09[7];
}; // size: 0x120

/// CTakeDamageResult
class __declspec(align(8)) CTakeDamageResult0 {
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

/// SummaryTakeDamageInfo_t
class __declspec(align(8)) SummaryTakeDamageInfo_t0 {
public:
    int32_t nSummarisedCount; // 0x0
    CTakeDamageInfo info; // 0x8
    CTakeDamageResult result; // 0x128
    // CHandle< CBaseEntity > hTarget;
    char hTarget[1]; // 0x158
    char pad_00[7];
}; // size: 0x160

/// CTakeDamageSummaryScopeGuard
class __declspec(align(1)) CTakeDamageSummaryScopeGuard0 {
public:
    // CUtlVector< SummaryTakeDamageInfo_t* > m_vecSummaries;
    char pad_00[8];
    char m_vecSummaries[1]; // 0x8
    char pad_01[23];
}; // size: 0x20

class __declspec(align(1)) CTeamplayRules {
public:
    char pad_00[208];
}; // size: 0xd0

class __declspec(align(4)) CEconItemAttribute {
public:
    char pad_00[48];
    uint16_t m_iAttributeDefinitionIndex; // 0x30
    float m_flValue; // 0x34
    float m_flInitialValue; // 0x38
    int32_t m_nRefundableCurrency; // 0x3c
    bool m_bSetBonus; // 0x40
    char pad_01[7];
}; // size: 0x48

class __declspec(align(4)) CAttributeManager {
public:
    // CUtlVector< CHandle< CBaseEntity > > m_Providers;
    char pad_00[8];
    char m_Providers[1]; // 0x8
    char pad_01[20];
    int32_t m_iReapplyProvisionParity; // 0x20
    // CHandle< CBaseEntity > m_hOuter;
    char m_hOuter[1]; // 0x24
    char pad_02[3];
    bool m_bPreventLoopback; // 0x28
    attributeprovidertypes_t m_ProviderType; // 0x2c
    // CUtlVector< CAttributeManager::cached_attribute_float_t > m_CachedResults;
    char m_CachedResults[1]; // 0x30
    char pad_03[31];
}; // size: 0x50

class __declspec(align(8)) CAttributeList {
public:
    // CUtlVectorEmbeddedNetworkVar< CEconItemAttribute > m_Attributes;
    char pad_00[8];
    char m_Attributes[1]; // 0x8
    char pad_01[96];
    CAttributeManager* m_pManager; // 0x70
}; // size: 0x78

/// IEconItemInterface
class __declspec(align(1)) IEconItemInterface0 {
public:
    char pad_00[8];
}; // size: 0x8

/// CAttributeManager::cached_attribute_float_t
class __declspec(align(4)) CAttributeManager__cached_attribute_float_t {
public:
    float flIn; // 0x0
    // CUtlSymbolLarge iAttribHook;
    char pad_00[4];
    char iAttribHook[1]; // 0x8
    char pad_01[4];
    float flOut; // 0x10
    char pad_02[4];
}; // size: 0x18

class __declspec(align(8)) CEconItemView : public IEconItemInterface {
public:
    char pad_01[48];
    uint16_t m_iItemDefinitionIndex; // 0x38
    int32_t m_iEntityQuality; // 0x3c
    uint32_t m_iEntityLevel; // 0x40
    uint64_t m_iItemID; // 0x48
    uint32_t m_iItemIDHigh; // 0x50
    uint32_t m_iItemIDLow; // 0x54
    uint32_t m_iAccountID; // 0x58
    uint32_t m_iInventoryPosition; // 0x5c
    char pad_02[8];
    bool m_bInitialized; // 0x68
    CAttributeList m_AttributeList; // 0x70
    CAttributeList m_NetworkedDynamicAttributes; // 0xe8
    char m_szCustomName[161]; // 0x160
    char m_szCustomNameOverride[161]; // 0x201
    char pad_03[6];
}; // size: 0x2a8

class __declspec(align(8)) CAttributeContainer : public CAttributeManager {
public:
    CEconItemView m_Item; // 0x50
}; // size: 0x2f8

/// IHasAttributes
class __declspec(align(1)) IHasAttributes0 {
public:
    char pad_00[8];
}; // size: 0x8

/// CNmAimCSTask
class __declspec(align(16)) CNmAimCSTask0 {
public:
    char pad_00[256];
}; // size: 0x100

/// CNmSnapWeaponTask
class __declspec(align(8)) CNmSnapWeaponTask0 {
public:
    char pad_00[96];
}; // size: 0x60

/// GameAmmoTypeInfo_t
class __declspec(align(8)) GameAmmoTypeInfo_t0 {
public:
    char pad_00[56];
    int32_t m_nBuySize; // 0x38
    int32_t m_nCost; // 0x3c
    char pad_01[16];
}; // size: 0x50

class __declspec(align(4)) EntitySpottedState_t {
public:
    char pad_00[8];
    bool m_bSpotted; // 0x8
    uint32_t m_bSpottedByMask[2]; // 0xc
    char pad_01[4];
}; // size: 0x18

class __declspec(align(8)) SpawnPoint : public CServerOnlyPointEntity {
public:
    int32_t m_iPriority; // 0x4a8
    bool m_bEnabled; // 0x4ac
    int32_t m_nType; // 0x4b0
    char pad_021[4];
}; // size: 0x4b8

class __declspec(align(8)) CCSGameRules {
public:
    char pad_00[216];
    bool m_bFreezePeriod; // 0xd8
    bool m_bWarmupPeriod; // 0xd9
    GameTime_t m_fWarmupPeriodEnd; // 0xdc
    GameTime_t m_fWarmupPeriodStart; // 0xe0
    bool m_bTerroristTimeOutActive; // 0xe4
    bool m_bCTTimeOutActive; // 0xe5
    float m_flTerroristTimeOutRemaining; // 0xe8
    float m_flCTTimeOutRemaining; // 0xec
    int32_t m_nTerroristTimeOuts; // 0xf0
    int32_t m_nCTTimeOuts; // 0xf4
    bool m_bTechnicalTimeOut; // 0xf8
    bool m_bMatchWaitingForResume; // 0xf9
    int32_t m_iFreezeTime; // 0xfc
    int32_t m_iRoundTime; // 0x100
    float m_fMatchStartTime; // 0x104
    GameTime_t m_fRoundStartTime; // 0x108
    GameTime_t m_flRestartRoundTime; // 0x10c
    bool m_bGameRestart; // 0x110
    float m_flGameStartTime; // 0x114
    float m_timeUntilNextPhaseStarts; // 0x118
    int32_t m_gamePhase; // 0x11c
    int32_t m_totalRoundsPlayed; // 0x120
    int32_t m_nRoundsPlayedThisPhase; // 0x124
    int32_t m_nOvertimePlaying; // 0x128
    int32_t m_iHostagesRemaining; // 0x12c
    bool m_bAnyHostageReached; // 0x130
    bool m_bMapHasBombTarget; // 0x131
    bool m_bMapHasRescueZone; // 0x132
    bool m_bMapHasBuyZone; // 0x133
    bool m_bIsQueuedMatchmaking; // 0x134
    int32_t m_nQueuedMatchmakingMode; // 0x138
    bool m_bIsValveDS; // 0x13c
    bool m_bLogoMap; // 0x13d
    bool m_bPlayAllStepSoundsOnServer; // 0x13e
    int32_t m_iSpectatorSlotCount; // 0x140
    int32_t m_MatchDevice; // 0x144
    bool m_bHasMatchStarted; // 0x148
    int32_t m_nNextMapInMapgroup; // 0x14c
    char m_szTournamentEventName[512]; // 0x150
    char m_szTournamentEventStage[512]; // 0x350
    char m_szMatchStatTxt[512]; // 0x550
    char m_szTournamentPredictionsTxt[512]; // 0x750
    int32_t m_nTournamentPredictionsPct; // 0x950
    GameTime_t m_flCMMItemDropRevealStartTime; // 0x954
    GameTime_t m_flCMMItemDropRevealEndTime; // 0x958
    bool m_bIsDroppingItems; // 0x95c
    bool m_bIsQuestEligible; // 0x95d
    bool m_bIsHltvActive; // 0x95e
    bool m_bBombPlanted; // 0x95f
    uint16_t m_arrProhibitedItemIndices[100]; // 0x960
    uint32_t m_arrTournamentActiveCasterAccounts[4]; // 0xa28
    int32_t m_numBestOfMaps; // 0xa38
    int32_t m_nHalloweenMaskListSeed; // 0xa3c
    bool m_bBombDropped; // 0xa40
    int32_t m_iRoundWinStatus; // 0xa44
    int32_t m_eRoundWinReason; // 0xa48
    bool m_bTCantBuy; // 0xa4c
    bool m_bCTCantBuy; // 0xa4d
    int32_t m_iMatchStats_RoundResults[30]; // 0xa50
    int32_t m_iMatchStats_PlayersAlive_CT[30]; // 0xac8
    int32_t m_iMatchStats_PlayersAlive_T[30]; // 0xb40
    float m_TeamRespawnWaveTimes[32]; // 0xbb8
    GameTime_t m_flNextRespawnWave; // 0xc38
    char pad_01[124];
    Vector m_vMinimapMins; // 0xcb8
    Vector m_vMinimapMaxs; // 0xcc4
    float m_MinimapVerticalSectionHeights[8]; // 0xcd0
    uint64_t m_ullLocalMatchID; // 0xcf0
    int32_t m_nEndMatchMapGroupVoteTypes[10]; // 0xcf8
    int32_t m_nEndMatchMapGroupVoteOptions[10]; // 0xd20
    int32_t m_nEndMatchMapVoteWinner; // 0xd48
    int32_t m_iNumConsecutiveCTLoses; // 0xd4c
    int32_t m_iNumConsecutiveTerroristLoses; // 0xd50
    char pad_02[28];
    bool m_bHasHostageBeenTouched; // 0xd70
    GameTime_t m_flIntermissionStartTime; // 0xd74
    GameTime_t m_flIntermissionEndTime; // 0xd78
    bool m_bLevelInitialized; // 0xd7c
    int32_t m_iTotalRoundsPlayed; // 0xd80
    int32_t m_iUnBalancedRounds; // 0xd84
    bool m_endMatchOnRoundReset; // 0xd88
    bool m_endMatchOnThink; // 0xd89
    int32_t m_iNumTerrorist; // 0xd8c
    int32_t m_iNumCT; // 0xd90
    int32_t m_iNumSpawnableTerrorist; // 0xd94
    int32_t m_iNumSpawnableCT; // 0xd98
    // CUtlVector< int32 > m_arrSelectedHostageSpawnIndices;
    char pad_03[4];
    char m_arrSelectedHostageSpawnIndices[1]; // 0xda0
    char pad_04[20];
    int32_t m_nSpawnPointsRandomSeed; // 0xdb8
    bool m_bFirstConnected; // 0xdbc
    bool m_bCompleteReset; // 0xdbd
    bool m_bPickNewTeamsOnReset; // 0xdbe
    bool m_bScrambleTeamsOnRestart; // 0xdbf
    bool m_bSwapTeamsOnRestart; // 0xdc0
    // CUtlVector< int32 > m_nEndMatchTiedVotes;
    char pad_05[7];
    char m_nEndMatchTiedVotes[1]; // 0xdc8
    char pad_06[27];
    bool m_bNeedToAskPlayersForContinueVote; // 0xde4
    uint32_t m_numQueuedMatchmakingAccounts; // 0xde8
    float m_fAvgPlayerRank; // 0xdec
    char* m_pQueuedMatchmakingReservationString; // 0xdf0
    uint32_t m_numTotalTournamentDrops; // 0xdf8
    uint32_t m_numSpectatorsCountMax; // 0xdfc
    uint32_t m_numSpectatorsCountMaxTV; // 0xe00
    uint32_t m_numSpectatorsCountMaxLnk; // 0xe04
    char pad_07[8];
    int32_t m_nCTsAliveAtFreezetimeEnd; // 0xe10
    int32_t m_nTerroristsAliveAtFreezetimeEnd; // 0xe14
    bool m_bForceTeamChangeSilent; // 0xe18
    bool m_bLoadingRoundBackupData; // 0xe19
    char pad_08[52];
    int32_t m_nMatchInfoShowType; // 0xe50
    float m_flMatchInfoDecidedTime; // 0xe54
    char pad_09[24];
    int32_t mTeamDMLastWinningTeamNumber; // 0xe70
    float mTeamDMLastThinkTime; // 0xe74
    float m_flTeamDMLastAnnouncementTime; // 0xe78
    int32_t m_iAccountTerrorist; // 0xe7c
    int32_t m_iAccountCT; // 0xe80
    int32_t m_iSpawnPointCount_Terrorist; // 0xe84
    int32_t m_iSpawnPointCount_CT; // 0xe88
    int32_t m_iMaxNumTerrorists; // 0xe8c
    int32_t m_iMaxNumCTs; // 0xe90
    int32_t m_iLoserBonusMostRecentTeam; // 0xe94
    float m_tmNextPeriodicThink; // 0xe98
    bool m_bVoiceWonMatchBragFired; // 0xe9c
    float m_fWarmupNextChatNoticeTime; // 0xea0
    char pad_10[4];
    int32_t m_iHostagesRescued; // 0xea8
    int32_t m_iHostagesTouched; // 0xeac
    float m_flNextHostageAnnouncement; // 0xeb0
    bool m_bNoTerroristsKilled; // 0xeb4
    bool m_bNoCTsKilled; // 0xeb5
    bool m_bNoEnemiesKilled; // 0xeb6
    bool m_bCanDonateWeapons; // 0xeb7
    char pad_11[4];
    float m_firstKillTime; // 0xebc
    char pad_12[4];
    float m_firstBloodTime; // 0xec4
    char pad_13[24];
    bool m_hostageWasInjured; // 0xee0
    bool m_hostageWasKilled; // 0xee1
    char pad_14[14];
    bool m_bVoteCalled; // 0xef0
    bool m_bServerVoteOnReset; // 0xef1
    float m_flVoteCheckThrottle; // 0xef4
    bool m_bBuyTimeEnded; // 0xef8
    int32_t m_nLastFreezeEndBeep; // 0xefc
    bool m_bTargetBombed; // 0xf00
    bool m_bBombDefused; // 0xf01
    bool m_bMapHasBombZone; // 0xf02
    char pad_15[76];
    Vector m_vecMainCTSpawnPos; // 0xf50
    // CUtlVector< CHandle< SpawnPoint > > m_CTSpawnPointsMasterList;
    char pad_16[4];
    char m_CTSpawnPointsMasterList[1]; // 0xf60
    // CUtlVector< CHandle< SpawnPoint > > m_TerroristSpawnPointsMasterList;
    char pad_17[23];
    char m_TerroristSpawnPointsMasterList[1]; // 0xf78
    char pad_18[23];
    bool m_bRespawningAllRespawnablePlayers; // 0xf90
    int32_t m_iNextCTSpawnPoint; // 0xf94
    float m_flCTSpawnPointUsedTime; // 0xf98
    int32_t m_iNextTerroristSpawnPoint; // 0xf9c
    float m_flTerroristSpawnPointUsedTime; // 0xfa0
    // CUtlVector< CHandle< SpawnPoint > > m_CTSpawnPoints;
    char pad_19[4];
    char m_CTSpawnPoints[1]; // 0xfa8
    // CUtlVector< CHandle< SpawnPoint > > m_TerroristSpawnPoints;
    char pad_20[23];
    char m_TerroristSpawnPoints[1]; // 0xfc0
    char pad_21[23];
    bool m_bIsUnreservedGameServer; // 0xfd8
    float m_fAutobalanceDisplayTime; // 0xfdc
    char pad_22[56];
    bool m_bAllowWeaponSwitch; // 0x1018
    bool m_bRoundTimeWarningTriggered; // 0x1019
    GameTime_t m_phaseChangeAnnouncementTime; // 0x101c
    float m_fNextUpdateTeamClanNamesTime; // 0x1020
    GameTime_t m_flLastThinkTime; // 0x1024
    float m_fAccumulatedRoundOffDamage; // 0x1028
    int32_t m_nShorthandedBonusLastEvalRound; // 0x102c
    char pad_23[72];
    int32_t m_nMatchAbortedEarlyReason; // 0x1078
    bool m_bHasTriggeredRoundStartMusic; // 0x107c
    bool m_bSwitchingTeamsAtRoundReset; // 0x107d
    char pad_24[24];
    CCSGameModeRules* m_pGameModeRules; // 0x1098
    // KeyValues3 m_BtGlobalBlackboard;
    char m_BtGlobalBlackboard[1]; // 0x10a0
    // CHandle< CBaseEntity > m_hPlayerResource;
    char pad_25[151];
    char m_hPlayerResource[1]; // 0x1138
    // CRetakeGameRules m_RetakeRules;
    char pad_26[7];
    char m_RetakeRules[1]; // 0x1140
    // CUtlVector< int32 >[4] m_arrTeamUniqueKillWeaponsMatch;
    char pad_27[495];
    char m_arrTeamUniqueKillWeaponsMatch[1]; // 0x1330
    char pad_28[95];
    bool m_bTeamLastKillUsedUniqueWeaponMatch[4]; // 0x1390
    char pad_29[36];
    uint8_t m_nMatchEndCount; // 0x13b8
    int32_t m_nTTeamIntroVariant; // 0x13bc
    int32_t m_nCTTeamIntroVariant; // 0x13c0
    bool m_bTeamIntroPeriod; // 0x13c4
    GameTime_t m_fTeamIntroPeriodEnd; // 0x13c8
    bool m_bPlayedTeamIntroVO; // 0x13cc
    int32_t m_iRoundEndWinnerTeam; // 0x13d0
    int32_t m_eRoundEndReason; // 0x13d4
    bool m_bRoundEndShowTimerDefend; // 0x13d8
    int32_t m_iRoundEndTimerTime; // 0x13dc
    // CUtlString m_sRoundEndFunFactToken;
    char m_sRoundEndFunFactToken[1]; // 0x13e0
    // CPlayerSlot m_iRoundEndFunFactPlayerSlot;
    char pad_30[7];
    char m_iRoundEndFunFactPlayerSlot[1]; // 0x13e8
    int32_t m_iRoundEndFunFactData1; // 0x13ec
    int32_t m_iRoundEndFunFactData2; // 0x13f0
    int32_t m_iRoundEndFunFactData3; // 0x13f4
    // CUtlString m_sRoundEndMessage;
    char m_sRoundEndMessage[1]; // 0x13f8
    char pad_31[4];
    int32_t m_iRoundEndPlayerCount; // 0x1400
    bool m_bRoundEndNoMusic; // 0x1404
    int32_t m_iRoundEndLegacy; // 0x1408
    uint8_t m_nRoundEndCount; // 0x140c
    int32_t m_iRoundStartRoundNumber; // 0x1410
    uint8_t m_nRoundStartCount; // 0x1414
    // float64 m_flLastPerfSampleTime;
    char pad_32[16395];
    char m_flLastPerfSampleTime[1]; // 0x5420
    char pad_033[49183];
}; // size: 0x11440

class __declspec(align(8)) CCSGameRulesProxy : public CGameRulesProxy {
public:
    CCSGameRules* m_pGameRules; // 0x4a8
}; // size: 0x4b0

class __declspec(align(8)) CCSGameModeRules {
public:
    char pad_00[8];
    CNetworkVarChainer __m_pChainEntity; // 0x8
}; // size: 0x30

class __declspec(align(4)) CRetakeGameRules {
public:
    char pad_00[312];
    int32_t m_nMatchSeed; // 0x138
    bool m_bBlockersPresent; // 0x13c
    bool m_bRoundInProgress; // 0x13d
    int32_t m_iFirstSecondHalfRound; // 0x140
    int32_t m_iBombSite; // 0x144
    // CHandle< CCSPlayerPawn > m_hBombPlanter;
    char m_hBombPlanter[1]; // 0x148
    char pad_01[167];
}; // size: 0x1f0

class __declspec(align(8)) CCSGameModeRules_Noop {
public:
    char pad_00[48];
}; // size: 0x30

class __declspec(align(8)) CCSGameModeRules_ArmsRace {
public:
    // CNetworkUtlVectorBase< CUtlString > m_WeaponSequence;
    char pad_00[48];
    char m_WeaponSequence[1]; // 0x30
    char pad_01[87];
}; // size: 0x88

class __declspec(align(8)) CCSGameModeRules_Deathmatch {
public:
    char pad_00[48];
    GameTime_t m_flDMBonusStartTime; // 0x30
    float m_flDMBonusTimeLength; // 0x34
    // CUtlString m_sDMBonusWeapon;
    char m_sDMBonusWeapon[1]; // 0x38
    char pad_01[79];
}; // size: 0x88

class __declspec(align(16)) CBaseCombatCharacter : public CBaseFlex {
public:
    bool m_bForceServerRagdoll; // 0xab0
    // CNetworkUtlVectorBase< CHandle< CEconWearable > > m_hMyWearables;
    char pad_39[7];
    char m_hMyWearables[1]; // 0xab8
    char pad_40[20];
    float m_impactEnergyScale; // 0xad0
    bool m_bApplyStressDamage; // 0xad4
    bool m_bDeathEventsDispatched; // 0xad5
    // CUtlVector< RelationshipOverride_t >* m_pVecRelationships;
    char pad_41[66];
    char m_pVecRelationships[1]; // 0xb18
    // CUtlSymbolLarge m_strRelationships;
    char pad_42[7];
    char m_strRelationships[1]; // 0xb20
    char pad_43[4];
    Hull_t m_eHull; // 0xb28
    uint32_t m_nNavHullIdx; // 0xb2c
    CMovementStatsProperty m_movementStats; // 0xb30
}; // size: 0xb70

class __declspec(align(16)) CBasePlayerPawn : public CBaseCombatCharacter {
public:
    CPlayer_WeaponServices* m_pWeaponServices; // 0xb70
    CPlayer_ItemServices* m_pItemServices; // 0xb78
    CPlayer_AutoaimServices* m_pAutoaimServices; // 0xb80
    CPlayer_ObserverServices* m_pObserverServices; // 0xb88
    CPlayer_WaterServices* m_pWaterServices; // 0xb90
    CPlayer_UseServices* m_pUseServices; // 0xb98
    CPlayer_FlashlightServices* m_pFlashlightServices; // 0xba0
    CPlayer_CameraServices* m_pCameraServices; // 0xba8
    CPlayer_MovementServices* m_pMovementServices; // 0xbb0
    // CUtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges;
    char pad_44[8];
    char m_ServerViewAngleChanges[1]; // 0xbc0
    char pad_45[100];
    QAngle v_angle; // 0xc28
    QAngle v_anglePrevious; // 0xc34
    uint32_t m_iHideHUD; // 0xc40
    char pad_46[4];
    sky3dparams_t m_skybox3d; // 0xc48
    GameTime_t m_fTimeLastHurt; // 0xcd8
    GameTime_t m_flDeathTime; // 0xcdc
    GameTime_t m_fNextSuicideTime; // 0xce0
    bool m_fInitHUD; // 0xce4
    CAI_Expresser* m_pExpresser; // 0xce8
    // CHandle< CBasePlayerController > m_hController;
    char m_hController[1]; // 0xcf0
    // CHandle< CBasePlayerController > m_hDefaultController;
    char pad_47[3];
    char m_hDefaultController[1]; // 0xcf4
    char pad_48[4];
    float m_fHltvReplayDelay; // 0xcfc
    float m_fHltvReplayEnd; // 0xd00
    // CEntityIndex m_iHltvReplayEntity;
    char m_iHltvReplayEntity[1]; // 0xd04
    // CUtlVector< sndopvarlatchdata_t > m_sndOpvarLatchData;
    char pad_49[3];
    char m_sndOpvarLatchData[1]; // 0xd08
    char pad_050[23];
}; // size: 0xd20

class __declspec(align(16)) CCSPlayerPawnBase : public CBasePlayerPawn {
public:
    char pad_51[16];
    CTouchExpansionComponent m_CTouchExpansionComponent; // 0xd30
    CCSPlayer_PingServices* m_pPingServices; // 0xd80
    GameTime_t m_blindUntilTime; // 0xd88
    GameTime_t m_blindStartTime; // 0xd8c
    CSPlayerState m_iPlayerState; // 0xd90
    char pad_52[172];
    bool m_bRespawning; // 0xe40
    bool m_bHasMovedSinceSpawn; // 0xe41
    int32_t m_iNumSpawns; // 0xe44
    char pad_53[4];
    float m_flIdleTimeSinceLastAction; // 0xe4c
    float m_fNextRadarUpdateTime; // 0xe50
    float m_flFlashDuration; // 0xe54
    float m_flFlashMaxAlpha; // 0xe58
    float m_flProgressBarStartTime; // 0xe5c
    int32_t m_iProgressBarDuration; // 0xe60
    // CHandle< CCSPlayerController > m_hOriginalController;
    char m_hOriginalController[1]; // 0xe64
    char pad_054[11];
}; // size: 0xe70

class __declspec(align(16)) CCSPlayerPawn : public CCSPlayerPawnBase {
public:
    char pad_55[8];
    CCSPlayer_BulletServices* m_pBulletServices; // 0xe78
    CCSPlayer_HostageServices* m_pHostageServices; // 0xe80
    CCSPlayer_BuyServices* m_pBuyServices; // 0xe88
    CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0xe90
    CCSPlayer_RadioServices* m_pRadioServices; // 0xe98
    CCSPlayer_DamageReactServices* m_pDamageReactServices; // 0xea0
    uint16_t m_nCharacterDefIndex; // 0xea8
    bool m_bHasFemaleVoice; // 0xeaa
    // CUtlString m_strVOPrefix;
    char pad_56[5];
    char m_strVOPrefix[1]; // 0xeb0
    char pad_57[7];
    char m_szLastPlaceName[18]; // 0xeb8
    char pad_58[222];
    bool m_bInHostageResetZone; // 0xfa8
    bool m_bInBuyZone; // 0xfa9
    // CUtlVector< CHandle< CBaseEntity > > m_TouchingBuyZones;
    char pad_59[6];
    char m_TouchingBuyZones[1]; // 0xfb0
    char pad_60[23];
    bool m_bWasInBuyZone; // 0xfc8
    bool m_bInHostageRescueZone; // 0xfc9
    bool m_bInBombZone; // 0xfca
    bool m_bWasInHostageRescueZone; // 0xfcb
    int32_t m_iRetakesOffering; // 0xfcc
    int32_t m_iRetakesOfferingCard; // 0xfd0
    bool m_bRetakesHasDefuseKit; // 0xfd4
    bool m_bRetakesMVPLastRound; // 0xfd5
    int32_t m_iRetakesMVPBoostItem; // 0xfd8
    loadout_slot_t m_RetakesMVPBoostExtraUtility; // 0xfdc
    GameTime_t m_flHealthShotBoostExpirationTime; // 0xfe0
    float m_flLandingTimeSeconds; // 0xfe4
    QAngle m_aimPunchAngle; // 0xfe8
    QAngle m_aimPunchAngleVel; // 0xff4
    GameTick_t m_aimPunchTickBase; // 0x1000
    float m_aimPunchTickFraction; // 0x1004
    // CUtlVector< QAngle > m_aimPunchCache;
    char m_aimPunchCache[1]; // 0x1008
    char pad_61[23];
    bool m_bIsBuyMenuOpen; // 0x1020
    char pad_62[1692];
    GameTime_t m_lastLandTime; // 0x16c0
    bool m_bOnGroundLastTick; // 0x16c4
    int32_t m_iPlayerLocked; // 0x16c8
    char pad_63[4];
    GameTime_t m_flTimeOfLastInjury; // 0x16d0
    GameTime_t m_flNextSprayDecalTime; // 0x16d4
    bool m_bNextSprayDecalTimeExpedited; // 0x16d8
    int32_t m_nRagdollDamageBone; // 0x16dc
    Vector m_vRagdollDamageForce; // 0x16e0
    Vector m_vRagdollDamagePosition; // 0x16ec
    char m_szRagdollDamageWeaponName[64]; // 0x16f8
    bool m_bRagdollDamageHeadshot; // 0x1738
    Vector m_vRagdollServerOrigin; // 0x173c
    CEconItemView m_EconGloves; // 0x1748
    uint8_t m_nEconGlovesChanged; // 0x19f0
    QAngle m_qDeathEyeAngles; // 0x19f4
    bool m_bSkipOneHeadConstraintUpdate; // 0x1a00
    bool m_bLeftHanded; // 0x1a01
    GameTime_t m_fSwitchedHandednessTime; // 0x1a04
    float m_flViewmodelOffsetX; // 0x1a08
    float m_flViewmodelOffsetY; // 0x1a0c
    float m_flViewmodelOffsetZ; // 0x1a10
    float m_flViewmodelFOV; // 0x1a14
    bool m_bIsWalking; // 0x1a18
    float m_fLastGivenDefuserTime; // 0x1a1c
    float m_fLastGivenBombTime; // 0x1a20
    float m_flDealtDamageToEnemyMostRecentTimestamp; // 0x1a24
    uint32_t m_iDisplayHistoryBits; // 0x1a28
    float m_flLastAttackedTeammate; // 0x1a2c
    GameTime_t m_allowAutoFollowTime; // 0x1a30
    bool m_bResetArmorNextSpawn; // 0x1a34
    // CEntityIndex m_nLastKillerIndex;
    char pad_64[3];
    char m_nLastKillerIndex[1]; // 0x1a38
    char pad_65[4];
    EntitySpottedState_t m_entitySpottedState; // 0x1a40
    int32_t m_nSpotRules; // 0x1a58
    bool m_bIsScoped; // 0x1a5c
    bool m_bResumeZoom; // 0x1a5d
    bool m_bIsDefusing; // 0x1a5e
    bool m_bIsGrabbingHostage; // 0x1a5f
    CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0x1a60
    GameTime_t m_flEmitSoundTime; // 0x1a64
    bool m_bInNoDefuseArea; // 0x1a68
    // CEntityIndex m_iBombSiteIndex;
    char pad_66[3];
    char m_iBombSiteIndex[1]; // 0x1a6c
    int32_t m_nWhichBombZone; // 0x1a70
    bool m_bInBombZoneTrigger; // 0x1a74
    bool m_bWasInBombZoneTrigger; // 0x1a75
    int32_t m_iShotsFired; // 0x1a78
    float m_flFlinchStack; // 0x1a7c
    float m_flVelocityModifier; // 0x1a80
    float m_flHitHeading; // 0x1a84
    int32_t m_nHitBodyPart; // 0x1a88
    Vector m_vecTotalBulletForce; // 0x1a8c
    bool m_bWaitForNoAttack; // 0x1a98
    float m_ignoreLadderJumpTime; // 0x1a9c
    bool m_bKilledByHeadshot; // 0x1aa0
    int32_t m_LastHitBox; // 0x1aa4
    CCSBot* m_pBot; // 0x1aa8
    bool m_bBotAllowActive; // 0x1ab0
    QAngle m_thirdPersonHeading; // 0x1ab4
    float m_flSlopeDropOffset; // 0x1ac0
    float m_flSlopeDropHeight; // 0x1ac4
    Vector m_vHeadConstraintOffset; // 0x1ac8
    int32_t m_nLastPickupPriority; // 0x1ad4
    float m_flLastPickupPriorityTime; // 0x1ad8
    int32_t m_ArmorValue; // 0x1adc
    uint16_t m_unCurrentEquipmentValue; // 0x1ae0
    uint16_t m_unRoundStartEquipmentValue; // 0x1ae2
    uint16_t m_unFreezetimeEndEquipmentValue; // 0x1ae4
    int32_t m_iLastWeaponFireUsercmd; // 0x1ae8
    bool m_bIsSpawning; // 0x1aec
    char pad_67[8];
    int32_t m_iDeathFlags; // 0x1af8
    bool m_bHasDeathInfo; // 0x1afc
    float m_flDeathInfoTime; // 0x1b00
    Vector m_vecDeathInfoOrigin; // 0x1b04
    uint32_t m_vecPlayerPatchEconIndices[5]; // 0x1b10
    // Color m_GunGameImmunityColor;
    char m_GunGameImmunityColor[1]; // 0x1b24
    GameTime_t m_grenadeParameterStashTime; // 0x1b28
    bool m_bGrenadeParametersStashed; // 0x1b2c
    QAngle m_angStashedShootAngles; // 0x1b30
    Vector m_vecStashedGrenadeThrowPosition; // 0x1b3c
    Vector m_vecStashedVelocity; // 0x1b48
    QAngle m_angShootAngleHistory; // 0x1b54
    char pad_68[12];
    Vector m_vecThrowPositionHistory; // 0x1b6c
    char pad_69[12];
    Vector m_vecVelocityHistory; // 0x1b84
    // CUtlVectorEmbeddedNetworkVar< PredictedDamageTag_t > m_PredictedDamageTags;
    char pad_70[16];
    char m_PredictedDamageTags[1]; // 0x1ba0
    char pad_71[100];
    int32_t m_nHighestAppliedDamageTagTick; // 0x1c08
    bool m_bCommittingSuicideOnTeamChange; // 0x1c0c
    bool m_wasNotKilledNaturally; // 0x1c0d
    GameTime_t m_fImmuneToGunGameDamageTime; // 0x1c10
    bool m_bGunGameImmunity; // 0x1c14
    float m_fMolotovDamageTime; // 0x1c18
    QAngle m_angEyeAngles; // 0x1c1c
    char pad_072[8];
}; // size: 0x1c30

/// QuestProgress
class __declspec(align(1)) QuestProgress0 {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(4)) CSPerRoundStats_t {
public:
    char pad_00[48];
    int32_t m_iKills; // 0x30
    int32_t m_iDeaths; // 0x34
    int32_t m_iAssists; // 0x38
    int32_t m_iDamage; // 0x3c
    int32_t m_iEquipmentValue; // 0x40
    int32_t m_iMoneySaved; // 0x44
    int32_t m_iKillReward; // 0x48
    int32_t m_iLiveTime; // 0x4c
    int32_t m_iHeadShotKills; // 0x50
    int32_t m_iObjective; // 0x54
    int32_t m_iCashEarned; // 0x58
    int32_t m_iUtilityDamage; // 0x5c
    int32_t m_iEnemiesFlashed; // 0x60
    char pad_01[4];
}; // size: 0x68

class __declspec(align(4)) CSMatchStats_t {
public:
    char pad_00[104];
    int32_t m_iEnemy5Ks; // 0x68
    int32_t m_iEnemy4Ks; // 0x6c
    int32_t m_iEnemy3Ks; // 0x70
    int32_t m_iEnemyKnifeKills; // 0x74
    int32_t m_iEnemyTaserKills; // 0x78
    int32_t m_iEnemy2Ks; // 0x7c
    int32_t m_iUtility_Count; // 0x80
    int32_t m_iUtility_Successes; // 0x84
    int32_t m_iUtility_Enemies; // 0x88
    int32_t m_iFlash_Count; // 0x8c
    int32_t m_iFlash_Successes; // 0x90
    float m_flHealthPointsRemovedTotal; // 0x94
    float m_flHealthPointsDealtTotal; // 0x98
    int32_t m_nShotsFiredTotal; // 0x9c
    int32_t m_nShotsOnTargetTotal; // 0xa0
    int32_t m_i1v1Count; // 0xa4
    int32_t m_i1v1Wins; // 0xa8
    int32_t m_i1v2Count; // 0xac
    int32_t m_i1v2Wins; // 0xb0
    int32_t m_iEntryCount; // 0xb4
    int32_t m_iEntryWins; // 0xb8
    char pad_01[4];
}; // size: 0xc0

class __declspec(align(8)) CCSGO_TeamPreviewCharacterPosition : public CBaseEntity {
public:
    int32_t m_nVariant; // 0x4a8
    int32_t m_nRandom; // 0x4ac
    int32_t m_nOrdinal; // 0x4b0
    // CUtlString m_sWeaponName;
    char pad_21[4];
    char m_sWeaponName[1]; // 0x4b8
    uint64_t m_xuid; // 0x4c0
    CEconItemView m_agentItem; // 0x4c8
    CEconItemView m_glovesItem; // 0x770
    CEconItemView m_weaponItem; // 0xa18
}; // size: 0xcc0

class __declspec(align(8)) CCSGO_TeamSelectCharacterPosition : public CCSGO_TeamPreviewCharacterPosition {
public:
}; // size: 0xcc0

class __declspec(align(8)) CCSGO_TeamSelectTerroristPosition : public CCSGO_TeamSelectCharacterPosition {
public:
}; // size: 0xcc0

class __declspec(align(8)) CCSGO_TeamSelectCounterTerroristPosition : public CCSGO_TeamSelectCharacterPosition {
public:
}; // size: 0xcc0

class __declspec(align(8)) CCSGO_TeamIntroCharacterPosition : public CCSGO_TeamPreviewCharacterPosition {
public:
}; // size: 0xcc0

class __declspec(align(8)) CCSGO_TeamIntroTerroristPosition : public CCSGO_TeamIntroCharacterPosition {
public:
}; // size: 0xcc0

class __declspec(align(8)) CCSGO_TeamIntroCounterTerroristPosition : public CCSGO_TeamIntroCharacterPosition {
public:
}; // size: 0xcc0

class __declspec(align(8)) CCSGO_WingmanIntroCharacterPosition : public CCSGO_TeamIntroCharacterPosition {
public:
}; // size: 0xcc0

class __declspec(align(8)) CCSGO_WingmanIntroTerroristPosition : public CCSGO_WingmanIntroCharacterPosition {
public:
}; // size: 0xcc0

class __declspec(align(8)) CCSGO_WingmanIntroCounterTerroristPosition : public CCSGO_WingmanIntroCharacterPosition {
public:
}; // size: 0xcc0

class __declspec(align(8)) CCSMinimapBoundary : public CBaseEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CCSPetPlacement : public CBaseEntity {
public:
}; // size: 0x4a8

class __declspec(align(4)) PredictedDamageTag_t {
public:
    char pad_00[48];
    GameTick_t nTagTick; // 0x30
    float flFlinchModSmall; // 0x34
    float flFlinchModLarge; // 0x38
    float flFriendlyFireDamageReductionRatio; // 0x3c
}; // size: 0x40

class __declspec(align(8)) CPlayerPing : public CBaseEntity {
public:
    // CHandle< CCSPlayerPawn > m_hPlayer;
    char pad_21[8];
    char m_hPlayer[1]; // 0x4b0
    // CHandle< CBaseEntity > m_hPingedEntity;
    char pad_22[3];
    char m_hPingedEntity[1]; // 0x4b4
    int32_t m_iType; // 0x4b8
    bool m_bUrgent; // 0x4bc
    char m_szPlaceName[18]; // 0x4bd
    char pad_023[1];
}; // size: 0x4d0

class __declspec(align(4)) CCSPlayer_PingServices : public CPlayerPawnComponent {
public:
    GameTime_t m_flPlayerPingTokens; // 0x48
    // CHandle< CPlayerPing > m_hPlayerPing;
    char pad_02[16];
    char m_hPlayerPing[1]; // 0x5c
    char pad_03[3];
}; // size: 0x60

class __declspec(align(8)) CCSPlayerResource : public CBaseEntity {
public:
    bool m_bHostageAlive[12]; // 0x4a8
    bool m_isHostageFollowingSomeone[12]; // 0x4b4
    // CEntityIndex[12] m_iHostageEntityIDs;
    char m_iHostageEntityIDs[1]; // 0x4c0
    char pad_21[44];
    Vector m_bombsiteCenterA; // 0x4f0
    Vector m_bombsiteCenterB; // 0x4fc
    int32_t m_hostageRescueX[4]; // 0x508
    int32_t m_hostageRescueY[4]; // 0x518
    int32_t m_hostageRescueZ[4]; // 0x528
    bool m_bEndMatchNextMapAllVoted; // 0x538
    bool m_foundGoalPositions; // 0x539
    char pad_022[6];
}; // size: 0x540

class __declspec(align(4)) CCSPlayer_DamageReactServices : public CPlayerPawnComponent {
public:
    char pad_02[8];
}; // size: 0x50

class __declspec(align(4)) CCSPlayerBase_CameraServices : public CPlayer_CameraServices {
public:
    uint32_t m_iFOV; // 0x178
    uint32_t m_iFOVStart; // 0x17c
    GameTime_t m_flFOVTime; // 0x180
    float m_flFOVRate; // 0x184
    // CHandle< CBaseEntity > m_hZoomOwner;
    char m_hZoomOwner[1]; // 0x188
    // CUtlVector< CHandle< CBaseEntity > > m_hTriggerFogList;
    char pad_09[7];
    char m_hTriggerFogList[1]; // 0x190
    // CHandle< CBaseEntity > m_hLastFogTrigger;
    char pad_10[23];
    char m_hLastFogTrigger[1]; // 0x1a8
    char pad_011[7];
}; // size: 0x1b0

class __declspec(align(2)) WeaponPurchaseCount_t {
public:
    char pad_00[48];
    uint16_t m_nItemDefIndex; // 0x30
    uint16_t m_nCount; // 0x32
    char pad_01[4];
}; // size: 0x38

class __declspec(align(1)) WeaponPurchaseTracker_t {
public:
    // CUtlVectorEmbeddedNetworkVar< WeaponPurchaseCount_t > m_weaponPurchases;
    char pad_00[8];
    char m_weaponPurchases[1]; // 0x8
    char pad_01[103];
}; // size: 0x70

class __declspec(align(4)) CCSPlayer_ActionTrackingServices : public CPlayerPawnComponent {
public:
    // CHandle< CBasePlayerWeapon > m_hLastWeaponBeforeC4AutoSwitch;
    char pad_02[432];
    char m_hLastWeaponBeforeC4AutoSwitch[1]; // 0x1f8
    char pad_03[43];
    bool m_bIsRescuing; // 0x224
    char pad_04[3];
    WeaponPurchaseTracker_t m_weaponPurchasesThisMatch; // 0x228
    WeaponPurchaseTracker_t m_weaponPurchasesThisRound; // 0x298
    char pad_05[8];
}; // size: 0x310

class __declspec(align(4)) CCSPlayer_BulletServices : public CPlayerPawnComponent {
public:
    int32_t m_totalHitsOnServer; // 0x48
    char pad_02[36];
}; // size: 0x70

class __declspec(align(4)) SellbackPurchaseEntry_t {
public:
    char pad_00[48];
    uint16_t m_unDefIdx; // 0x30
    int32_t m_nCost; // 0x34
    int32_t m_nPrevArmor; // 0x38
    bool m_bPrevHelmet; // 0x3c
    // CEntityHandle m_hItem;
    char pad_01[3];
    char m_hItem[1]; // 0x40
    char pad_02[7];
}; // size: 0x48

class __declspec(align(4)) CCSPlayer_BuyServices : public CPlayerPawnComponent {
public:
    // CUtlVectorEmbeddedNetworkVar< SellbackPurchaseEntry_t > m_vecSellbackPurchaseEntries;
    char pad_02[136];
    char m_vecSellbackPurchaseEntries[1]; // 0xd0
    char pad_03[135];
}; // size: 0x158

class __declspec(align(4)) CCSPlayer_CameraServices : public CCSPlayerBase_CameraServices {
public:
}; // size: 0x1b0

class __declspec(align(4)) CCSPlayer_HostageServices : public CPlayerPawnComponent {
public:
    // CHandle< CBaseEntity > m_hCarriedHostage;
    char m_hCarriedHostage[1]; // 0x48
    // CHandle< CBaseEntity > m_hCarriedHostageProp;
    char pad_02[3];
    char m_hCarriedHostageProp[1]; // 0x4c
    char pad_03[3];
}; // size: 0x50

class __declspec(align(4)) CCSPlayer_ItemServices : public CPlayer_ItemServices {
public:
    bool m_bHasDefuser; // 0x48
    bool m_bHasHelmet; // 0x49
    char pad_02[6];
}; // size: 0x50

class __declspec(align(4)) CCSPlayerLegacyJump {
public:
    char pad_00[16];
    bool m_bOldJumpPressed; // 0x10
    float m_flJumpPressedTime; // 0x14
}; // size: 0x18

class __declspec(align(4)) CCSPlayerModernJump {
public:
    char pad_00[16];
    GameTick_t m_nLastActualJumpPressTick; // 0x10
    float m_flLastActualJumpPressFrac; // 0x14
    GameTick_t m_nLastUsableJumpPressTick; // 0x18
    float m_flLastUsableJumpPressFrac; // 0x1c
    GameTick_t m_nLastLandedTick; // 0x20
    float m_flLastLandedFrac; // 0x24
    float m_flLastLandedVelocityX; // 0x28
    float m_flLastLandedVelocityY; // 0x2c
    float m_flLastLandedVelocityZ; // 0x30
    char pad_01[4];
}; // size: 0x38

class __declspec(align(8)) CCSPlayer_MovementServices : public CPlayer_MovementServices_Humanoid {
public:
    Vector m_vecLadderNormal; // 0x278
    int32_t m_nLadderSurfacePropIndex; // 0x284
    bool m_bDucked; // 0x288
    float m_flDuckAmount; // 0x28c
    float m_flDuckSpeed; // 0x290
    bool m_bDuckOverride; // 0x294
    bool m_bDesiresDuck; // 0x295
    bool m_bDucking; // 0x296
    float m_flDuckOffset; // 0x298
    uint32_t m_nDuckTimeMsecs; // 0x29c
    uint32_t m_nDuckJumpTimeMsecs; // 0x2a0
    uint32_t m_nJumpTimeMsecs; // 0x2a4
    float m_flLastDuckTime; // 0x2a8
    char pad_06[12];
    Vector2D m_vecLastPositionAtFullCrouchSpeed; // 0x2b8
    bool m_duckUntilOnGround; // 0x2c0
    bool m_bHasWalkMovedSinceLastJump; // 0x2c1
    bool m_bInStuckTest; // 0x2c2
    char pad_07[524];
    int32_t m_nTraceCount; // 0x4d0
    int32_t m_StuckLast; // 0x4d4
    bool m_bSpeedCropped; // 0x4d8
    int32_t m_nOldWaterLevel; // 0x4dc
    float m_flWaterEntryTime; // 0x4e0
    Vector m_vecForward; // 0x4e4
    Vector m_vecLeft; // 0x4f0
    Vector m_vecUp; // 0x4fc
    int32_t m_nGameCodeHasMovedPlayerAfterCommand; // 0x508
    bool m_bMadeFootstepNoise; // 0x50c
    int32_t m_iFootsteps; // 0x510
    GameTime_t m_fStashGrenadeParameterWhen; // 0x514
    uint64_t m_nButtonDownMaskPrev; // 0x518
    float m_flOffsetTickCompleteTime; // 0x520
    float m_flOffsetTickStashedSpeed; // 0x524
    float m_flStamina; // 0x528
    float m_flHeightAtJumpStart; // 0x52c
    float m_flMaxJumpHeightThisJump; // 0x530
    float m_flMaxJumpHeightLastJump; // 0x534
    float m_flStaminaAtJumpStart; // 0x538
    float m_flVelMulAtJumpStart; // 0x53c
    float m_flAccumulatedJumpError; // 0x540
    char pad_08[4];
    CCSPlayerLegacyJump m_LegacyJump; // 0x548
    CCSPlayerModernJump m_ModernJump; // 0x560
    GameTick_t m_nLastJumpTick; // 0x598
    float m_flLastJumpFrac; // 0x59c
    float m_flLastJumpVelocityZ; // 0x5a0
    bool m_bJumpApexPending; // 0x5a4
    float m_flTicksSinceLastSurfingDetected; // 0x5a8
    bool m_bWasSurfing; // 0x5ac
    char pad_09[140];
    Vector m_vecInputRotated; // 0x63c
    char pad_010[2080];
}; // size: 0xe68

class __declspec(align(4)) CCSPlayer_UseServices : public CPlayer_UseServices {
public:
    // CHandle< CBaseEntity > m_hLastKnownUseEntity;
    char m_hLastKnownUseEntity[1]; // 0x48
    GameTime_t m_flLastUseTimeStamp; // 0x4c
    GameTime_t m_flTimeLastUsedWindow; // 0x50
    char pad_02[4];
}; // size: 0x58

class __declspec(align(4)) CCSPlayer_WaterServices : public CPlayer_WaterServices {
public:
    GameTime_t m_NextDrownDamageTime; // 0x48
    int32_t m_nDrownDmgRate; // 0x4c
    GameTime_t m_AirFinishedTime; // 0x50
    float m_flWaterJumpTime; // 0x54
    Vector m_vecWaterJumpVel; // 0x58
    float m_flSwimSoundTime; // 0x64
    char pad_02[24];
}; // size: 0x80

class __declspec(align(4)) CCSPlayer_WeaponServices : public CPlayer_WeaponServices {
public:
    char pad_06[16];
    GameTime_t m_flNextAttack; // 0xc0
    bool m_bIsLookingAtWeapon; // 0xc4
    bool m_bIsHoldingLookAtWeapon; // 0xc5
    // CHandle< CBasePlayerWeapon > m_hSavedWeapon;
    char pad_07[2];
    char m_hSavedWeapon[1]; // 0xc8
    int32_t m_nTimeToMelee; // 0xcc
    int32_t m_nTimeToSecondary; // 0xd0
    int32_t m_nTimeToPrimary; // 0xd4
    int32_t m_nTimeToSniperRifle; // 0xd8
    bool m_bIsBeingGivenItem; // 0xdc
    bool m_bIsPickingUpItemWithUse; // 0xdd
    bool m_bPickedUpWeapon; // 0xde
    bool m_bDisableAutoDeploy; // 0xdf
    bool m_bIsPickingUpGroundWeapon; // 0xe0
    // CNetworkUtlVectorBase< uint8 > m_networkAnimTiming;
    char pad_08[6103];
    char m_networkAnimTiming[1]; // 0x18b8
    char pad_09[23];
    bool m_bBlockInspectUntilNextGraphUpdate; // 0x18d0
    char pad_010[7];
}; // size: 0x18d8

class __declspec(align(8)) CCS2WeaponGraphController {
public:
    // CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_action;
    char pad_00[144];
    char m_action[1]; // 0x90
    // CAnimGraph2ParamOptionalRef< bool > m_bActionReset;
    char pad_01[23];
    char m_bActionReset[1]; // 0xa8
    // CAnimGraph2ParamOptionalRef< float32 > m_flWeaponActionSpeedScale;
    char pad_02[23];
    char m_flWeaponActionSpeedScale[1]; // 0xc0
    // CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_weaponCategory;
    char pad_03[23];
    char m_weaponCategory[1]; // 0xd8
    // CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_weaponType;
    char pad_04[23];
    char m_weaponType[1]; // 0xf0
    // CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_weaponExtraInfo;
    char pad_05[23];
    char m_weaponExtraInfo[1]; // 0x108
    // CAnimGraph2ParamOptionalRef< float32 > m_flWeaponAmmo;
    char pad_06[23];
    char m_flWeaponAmmo[1]; // 0x120
    // CAnimGraph2ParamOptionalRef< float32 > m_flWeaponAmmoMax;
    char pad_07[23];
    char m_flWeaponAmmoMax[1]; // 0x138
    // CAnimGraph2ParamOptionalRef< float32 > m_flWeaponAmmoReserve;
    char pad_08[23];
    char m_flWeaponAmmoReserve[1]; // 0x150
    // CAnimGraph2ParamOptionalRef< bool > m_bWeaponIsSilenced;
    char pad_09[23];
    char m_bWeaponIsSilenced[1]; // 0x168
    // CAnimGraph2ParamOptionalRef< float32 > m_flWeaponIronsightAmount;
    char pad_10[23];
    char m_flWeaponIronsightAmount[1]; // 0x180
    // CAnimGraph2ParamOptionalRef< bool > m_bIsUsingLegacyModel;
    char pad_11[23];
    char m_bIsUsingLegacyModel[1]; // 0x198
    // CAnimGraph2ParamOptionalRef< float32 > m_idleVariation;
    char pad_12[23];
    char m_idleVariation[1]; // 0x1b0
    // CAnimGraph2ParamOptionalRef< float32 > m_deployVariation;
    char pad_13[23];
    char m_deployVariation[1]; // 0x1c8
    // CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_attackType;
    char pad_14[23];
    char m_attackType[1]; // 0x1e0
    // CAnimGraph2ParamOptionalRef< float32 > m_attackThrowStrength;
    char pad_15[23];
    char m_attackThrowStrength[1]; // 0x1f8
    // CAnimGraph2ParamOptionalRef< float32 > m_flAttackVariation;
    char pad_16[23];
    char m_flAttackVariation[1]; // 0x210
    // CAnimGraph2ParamOptionalRef< float32 > m_inspectVariation;
    char pad_17[23];
    char m_inspectVariation[1]; // 0x228
    // CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_inspectExtraInfo;
    char pad_18[23];
    char m_inspectExtraInfo[1]; // 0x240
    // CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_reloadStage;
    char pad_19[23];
    char m_reloadStage[1]; // 0x258
    char pad_020[895];
}; // size: 0x5d8

class __declspec(align(4)) CCSObserver_ObserverServices : public CPlayer_ObserverServices {
public:
    char pad_04[40];
}; // size: 0x80

class __declspec(align(4)) CCSObserver_CameraServices : public CCSPlayerBase_CameraServices {
public:
}; // size: 0x1b0

class __declspec(align(8)) CCSObserver_MovementServices : public CPlayer_MovementServices {
public:
}; // size: 0x240

class __declspec(align(4)) CCSObserver_UseServices : public CPlayer_UseServices {
public:
}; // size: 0x48

/// CSAdditionalPerRoundStats_t
class __declspec(align(4)) CSAdditionalPerRoundStats_t0 {
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

/// CSAdditionalMatchStats_t
class __declspec(align(4)) CSAdditionalMatchStats_t0 {
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

class __declspec(align(4)) CCSPlayerController_ActionTrackingServices : public CPlayerControllerComponent {
public:
    // CUtlVectorEmbeddedNetworkVar< CSPerRoundStats_t > m_perRoundStats;
    char m_perRoundStats[1]; // 0x40
    char pad_02[132];
    CSMatchStats_t m_matchStats; // 0xc8
    int32_t m_iNumRoundKills; // 0x188
    int32_t m_iNumRoundKillsHeadshots; // 0x18c
    float m_flTotalRoundDamageDealt; // 0x190
    char pad_03[652];
}; // size: 0x420

class __declspec(align(8)) CBasePlayerController : public CBaseEntity {
public:
    char pad_21[8];
    uint64_t m_nInButtonsWhichAreToggles; // 0x4b0
    uint32_t m_nTickBase; // 0x4b8
    // CHandle< CBasePlayerPawn > m_hPawn;
    char pad_22[36];
    char m_hPawn[1]; // 0x4e0
    char pad_23[3];
    bool m_bKnownTeamMismatch; // 0x4e4
    // CSplitScreenSlot m_nSplitScreenSlot;
    char pad_24[3];
    char m_nSplitScreenSlot[1]; // 0x4e8
    // CHandle< CBasePlayerController > m_hSplitOwner;
    char pad_25[3];
    char m_hSplitOwner[1]; // 0x4ec
    // CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers;
    char pad_26[3];
    char m_hSplitScreenPlayers[1]; // 0x4f0
    char pad_27[23];
    bool m_bIsHLTV; // 0x508
    PlayerConnectedState m_iConnected; // 0x50c
    char m_iszPlayerName[128]; // 0x510
    // CUtlString m_szNetworkIDString;
    char m_szNetworkIDString[1]; // 0x590
    char pad_28[4];
    float m_fLerpTime; // 0x598
    bool m_bLagCompensation; // 0x59c
    bool m_bPredict; // 0x59d
    char pad_29[6];
    bool m_bIsLowViolence; // 0x5a4
    bool m_bGamePaused; // 0x5a5
    char pad_30[312];
    ChatIgnoreType_t m_iIgnoreGlobalChat; // 0x6e0
    float m_flLastPlayerTalkTime; // 0x6e4
    float m_flLastEntitySteadyState; // 0x6e8
    int32_t m_nAvailableEntitySteadyState; // 0x6ec
    bool m_bHasAnySteadyStateEnts; // 0x6f0
    char pad_31[8];
    uint64_t m_steamID; // 0x700
    bool m_bNoClipEnabled; // 0x708
    uint32_t m_iDesiredFOV; // 0x70c
    char pad_032[184];
}; // size: 0x7c8

class __declspec(align(8)) CCSPlayerController : public CBasePlayerController {
public:
    char pad_33[16];
    CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // 0x7d8
    CCSPlayerController_InventoryServices* m_pInventoryServices; // 0x7e0
    CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // 0x7e8
    CCSPlayerController_DamageServices* m_pDamageServices; // 0x7f0
    uint32_t m_iPing; // 0x7f8
    bool m_bHasCommunicationAbuseMute; // 0x7fc
    uint32_t m_uiCommunicationMuteFlags; // 0x800
    // CUtlSymbolLarge m_szCrosshairCodes;
    char pad_34[4];
    char m_szCrosshairCodes[1]; // 0x808
    char pad_35[7];
    uint8_t m_iPendingTeamNum; // 0x810
    GameTime_t m_flForceTeamTime; // 0x814
    int32_t m_iCompTeammateColor; // 0x818
    bool m_bEverPlayedOnTeam; // 0x81c
    bool m_bAttemptedToGetColor; // 0x81d
    int32_t m_iTeammatePreferredColor; // 0x820
    bool m_bTeamChanged; // 0x824
    bool m_bInSwitchTeam; // 0x825
    bool m_bHasSeenJoinGame; // 0x826
    bool m_bJustBecameSpectator; // 0x827
    bool m_bSwitchTeamsOnNextRoundReset; // 0x828
    bool m_bRemoveAllItemsOnNextRoundReset; // 0x829
    GameTime_t m_flLastJoinTeamTime; // 0x82c
    // CUtlSymbolLarge m_szClan;
    char m_szClan[1]; // 0x830
    char pad_36[4];
    int32_t m_iCoachingTeam; // 0x838
    uint64_t m_nPlayerDominated; // 0x840
    uint64_t m_nPlayerDominatingMe; // 0x848
    int32_t m_iCompetitiveRanking; // 0x850
    int32_t m_iCompetitiveWins; // 0x854
    int8_t m_iCompetitiveRankType; // 0x858
    int32_t m_iCompetitiveRankingPredicted_Win; // 0x85c
    int32_t m_iCompetitiveRankingPredicted_Loss; // 0x860
    int32_t m_iCompetitiveRankingPredicted_Tie; // 0x864
    int32_t m_nEndMatchNextMapVote; // 0x868
    uint16_t m_unActiveQuestId; // 0x86c
    uint32_t m_rtActiveMissionPeriod; // 0x870
    // QuestProgress::Reason m_nQuestProgressReason;
    char m_nQuestProgressReason[1]; // 0x874
    uint32_t m_unPlayerTvControlFlags; // 0x878
    char pad_37[44];
    int32_t m_iDraftIndex; // 0x8a8
    uint32_t m_msQueuedModeDisconnectionTimestamp; // 0x8ac
    uint32_t m_uiAbandonRecordedReason; // 0x8b0
    uint32_t m_eNetworkDisconnectionReason; // 0x8b4
    bool m_bCannotBeKicked; // 0x8b8
    bool m_bEverFullyConnected; // 0x8b9
    bool m_bAbandonAllowsSurrender; // 0x8ba
    bool m_bAbandonOffersInstantSurrender; // 0x8bb
    bool m_bDisconnection1MinWarningPrinted; // 0x8bc
    bool m_bScoreReported; // 0x8bd
    int32_t m_nDisconnectionTick; // 0x8c0
    char pad_38[12];
    bool m_bControllingBot; // 0x8d0
    bool m_bHasControlledBotThisRound; // 0x8d1
    bool m_bHasBeenControlledByPlayerThisRound; // 0x8d2
    int32_t m_nBotsControlledThisRound; // 0x8d4
    bool m_bCanControlObservedBot; // 0x8d8
    // CHandle< CCSPlayerPawn > m_hPlayerPawn;
    char pad_39[3];
    char m_hPlayerPawn[1]; // 0x8dc
    // CHandle< CCSObserverPawn > m_hObserverPawn;
    char pad_40[3];
    char m_hObserverPawn[1]; // 0x8e0
    int32_t m_DesiredObserverMode; // 0x8e4
    // CEntityHandle m_hDesiredObserverTarget;
    char m_hDesiredObserverTarget[1]; // 0x8e8
    char pad_41[3];
    bool m_bPawnIsAlive; // 0x8ec
    uint32_t m_iPawnHealth; // 0x8f0
    int32_t m_iPawnArmor; // 0x8f4
    bool m_bPawnHasDefuser; // 0x8f8
    bool m_bPawnHasHelmet; // 0x8f9
    uint16_t m_nPawnCharacterDefIndex; // 0x8fa
    int32_t m_iPawnLifetimeStart; // 0x8fc
    int32_t m_iPawnLifetimeEnd; // 0x900
    int32_t m_iPawnBotDifficulty; // 0x904
    // CHandle< CCSPlayerController > m_hOriginalControllerOfCurrentPawn;
    char m_hOriginalControllerOfCurrentPawn[1]; // 0x908
    int32_t m_iScore; // 0x90c
    int32_t m_iRoundScore; // 0x910
    int32_t m_iRoundsWon; // 0x914
    uint8_t m_recentKillQueue[8]; // 0x918
    uint8_t m_nFirstKill; // 0x920
    uint8_t m_nKillCount; // 0x921
    bool m_bMvpNoMusic; // 0x922
    int32_t m_eMvpReason; // 0x924
    int32_t m_iMusicKitID; // 0x928
    int32_t m_iMusicKitMVPs; // 0x92c
    int32_t m_iMVPs; // 0x930
    int32_t m_nUpdateCounter; // 0x934
    float m_flSmoothedPing; // 0x938
    char pad_42[4];
    IntervalTimer m_lastHeldVoteTimer; // 0x940
    char pad_43[8];
    bool m_bShowHints; // 0x958
    int32_t m_iNextTimeCheck; // 0x95c
    bool m_bJustDidTeamKill; // 0x960
    bool m_bPunishForTeamKill; // 0x961
    bool m_bGaveTeamDamageWarning; // 0x962
    bool m_bGaveTeamDamageWarningThisRound; // 0x963
    // float64 m_dblLastReceivedPacketPlatFloatTime;
    char pad_44[4];
    char m_dblLastReceivedPacketPlatFloatTime[1]; // 0x968
    char pad_45[4];
    GameTime_t m_LastTeamDamageWarningTime; // 0x970
    GameTime_t m_LastTimePlayerWasDisconnectedForPawnsRemove; // 0x974
    uint32_t m_nSuspiciousHitCount; // 0x978
    uint32_t m_nNonSuspiciousHitStreak; // 0x97c
    char pad_46[161];
    bool m_bFireBulletsSeedSynchronized; // 0xa21
    char pad_047[126];
}; // size: 0xaa0

class __declspec(align(8)) CDamageRecord {
public:
    // CHandle< CCSPlayerPawn > m_PlayerDamager;
    char pad_00[48];
    char m_PlayerDamager[1]; // 0x30
    // CHandle< CCSPlayerPawn > m_PlayerRecipient;
    char pad_01[3];
    char m_PlayerRecipient[1]; // 0x34
    // CHandle< CCSPlayerController > m_hPlayerControllerDamager;
    char pad_02[3];
    char m_hPlayerControllerDamager[1]; // 0x38
    // CHandle< CCSPlayerController > m_hPlayerControllerRecipient;
    char pad_03[3];
    char m_hPlayerControllerRecipient[1]; // 0x3c
    // CUtlString m_szPlayerDamagerName;
    char pad_04[3];
    char m_szPlayerDamagerName[1]; // 0x40
    // CUtlString m_szPlayerRecipientName;
    char pad_05[7];
    char m_szPlayerRecipientName[1]; // 0x48
    uint64_t m_DamagerXuid; // 0x50
    uint64_t m_RecipientXuid; // 0x58
    float m_flBulletsDamage; // 0x60
    float m_flDamage; // 0x64
    float m_flActualHealthRemoved; // 0x68
    int32_t m_iNumHits; // 0x6c
    int32_t m_iLastBulletUpdate; // 0x70
    bool m_bIsOtherEnemy; // 0x74
    EKillTypes_t m_killType; // 0x75
    char pad_06[2];
}; // size: 0x78

class __declspec(align(4)) CCSPlayerController_DamageServices : public CPlayerControllerComponent {
public:
    int32_t m_nSendUpdate; // 0x40
    // CUtlVectorEmbeddedNetworkVar< CDamageRecord > m_DamageList;
    char pad_02[4];
    char m_DamageList[1]; // 0x48
    char pad_03[135];
}; // size: 0xd0

class __declspec(align(4)) CCSPlayerController_InGameMoneyServices : public CPlayerControllerComponent {
public:
    bool m_bReceivesMoneyNextRound; // 0x40
    int32_t m_iMoneyEarnedForNextRound; // 0x44
    int32_t m_iAccount; // 0x48
    int32_t m_iStartAccount; // 0x4c
    int32_t m_iTotalCashSpent; // 0x50
    int32_t m_iCashSpentThisRound; // 0x54
}; // size: 0x58

class __declspec(align(2)) ServerAuthoritativeWeaponSlot_t {
public:
    char pad_00[48];
    uint16_t unClass; // 0x30
    uint16_t unSlot; // 0x32
    uint16_t unItemDefIdx; // 0x34
    char pad_01[2];
}; // size: 0x38

class __declspec(align(8)) CCSPlayerController_InventoryServices : public CPlayerControllerComponent {
public:
    uint16_t m_unMusicID; // 0x40
    MedalRank_t m_rank; // 0x44
    char pad_02[20];
    int32_t m_nPersonaDataPublicLevel; // 0x5c
    int32_t m_nPersonaDataPublicCommendsLeader; // 0x60
    int32_t m_nPersonaDataPublicCommendsTeacher; // 0x64
    int32_t m_nPersonaDataPublicCommendsFriendly; // 0x68
    int32_t m_nPersonaDataXpTrailLevel; // 0x6c
    char pad_03[3800];
    uint32_t m_unEquippedPlayerSprayIDs[1]; // 0xf48
    uint64_t m_unCurrentLoadoutHash; // 0xf50
    // CUtlVectorEmbeddedNetworkVar< ServerAuthoritativeWeaponSlot_t > m_vecServerAuthoritativeWeaponSlots;
    char m_vecServerAuthoritativeWeaponSlots[1]; // 0xf58
    char pad_04[135];
}; // size: 0xfe0

/// CCSPlayerController_InventoryServices::NetworkedLoadoutSlot_t
class __declspec(align(8)) CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
public:
    CEconItemView* pItem; // 0x0
    uint16_t team; // 0x8
    uint16_t slot; // 0xa
    char pad_00[4];
}; // size: 0x10

/// CCS2ChickenGraphController
class __declspec(align(8)) CCS2ChickenGraphController0 {
public:
    // CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_action;
    char pad_00[144];
    char m_action[1]; // 0x90
    // CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_actionSubtype;
    char pad_01[23];
    char m_actionSubtype[1]; // 0xa8
    // CAnimGraph2ParamAutoResetOptionalRef m_bActionReset;
    char pad_02[23];
    char m_bActionReset[1]; // 0xc0
    // CAnimGraph2ParamOptionalRef< float32 > m_idleVariation;
    char pad_03[31];
    char m_idleVariation[1]; // 0xe0
    // CAnimGraph2ParamOptionalRef< float32 > m_runVariation;
    char pad_04[23];
    char m_runVariation[1]; // 0xf8
    // CAnimGraph2ParamOptionalRef< float32 > m_panicVariation;
    char pad_05[23];
    char m_panicVariation[1]; // 0x110
    // CAnimGraph2ParamOptionalRef< float32 > m_squatVariation;
    char pad_06[23];
    char m_squatVariation[1]; // 0x128
    // CAnimGraph2ParamOptionalRef< bool > m_bInWater;
    char pad_07[23];
    char m_bInWater[1]; // 0x140
    char pad_08[23];
    bool m_bHasActionCompletedEvent; // 0x158
    bool m_bWaitingForCompletedEvent; // 0x159
    char pad_09[6];
}; // size: 0x160

/// CFiringModeFloat
class __declspec(align(4)) CFiringModeFloat0 {
public:
    float m_flValues[2]; // 0x0
}; // size: 0x8

/// CFiringModeInt
class __declspec(align(4)) CFiringModeInt0 {
public:
    int32_t m_nValues[2]; // 0x0
}; // size: 0x8

/// CIronSightController
class __declspec(align(4)) CIronSightController0 {
public:
    char pad_00[8];
    bool m_bIronSightAvailable; // 0x8
    float m_flIronSightAmount; // 0xc
    float m_flIronSightAmountGained; // 0x10
    float m_flIronSightAmountBiased; // 0x14
}; // size: 0x18

/// CHintMessage
class __declspec(align(8)) CHintMessage0 {
public:
    char* m_hintString; // 0x0
    // CUtlVector< char* > m_args;
    char m_args[1]; // 0x8
    char pad_00[20];
    float m_duration; // 0x20
    char pad_01[4];
}; // size: 0x28

/// CHintMessageQueue
class __declspec(align(8)) CHintMessageQueue0 {
public:
    float m_tmMessageEnd; // 0x0
    // CUtlVector< CHintMessage* > m_messages;
    char pad_00[4];
    char m_messages[1]; // 0x8
    char pad_01[16];
    CBasePlayerController* m_pPlayerController; // 0x20
}; // size: 0x28

class __declspec(align(4)) CCSPlayer_RadioServices : public CPlayerPawnComponent {
public:
    GameTime_t m_flGotHostageTalkTimer; // 0x48
    GameTime_t m_flDefusingTalkTimer; // 0x4c
    GameTime_t m_flC4PlantTalkTimer; // 0x50
    GameTime_t m_flRadioTokenSlots; // 0x54
    char pad_02[8];
    bool m_bIgnoreRadio; // 0x60
    char pad_03[7];
}; // size: 0x68

/// CBaseIssue
class __declspec(align(8)) CBaseIssue0 {
public:
    char pad_00[32];
    char m_szTypeString[64]; // 0x20
    char m_szDetailsString[260]; // 0x60
    int32_t m_iNumYesVotes; // 0x164
    int32_t m_iNumNoVotes; // 0x168
    int32_t m_iNumPotentialVotes; // 0x16c
    CVoteController* m_pVoteController; // 0x170
}; // size: 0x178

class __declspec(align(8)) CVoteController : public CBaseEntity {
public:
    int32_t m_iActiveIssueIndex; // 0x4a8
    int32_t m_iOnlyTeamToVote; // 0x4ac
    int32_t m_nVoteOptionCount[5]; // 0x4b0
    int32_t m_nPotentialVotes; // 0x4c4
    bool m_bIsYesNoVote; // 0x4c8
    char pad_21[4];
    CountdownTimer m_acceptingVotesTimer; // 0x4d0
    CountdownTimer m_executeCommandTimer; // 0x4e8
    CountdownTimer m_resetVoteTimer; // 0x500
    int32_t m_nVotesCast[64]; // 0x518
    // CPlayerSlot m_playerHoldingVote;
    char m_playerHoldingVote[1]; // 0x618
    // CPlayerSlot m_playerOverrideForVote;
    char pad_22[3];
    char m_playerOverrideForVote[1]; // 0x61c
    int32_t m_nHighestCountIndex; // 0x620
    // CUtlVector< CBaseIssue* > m_potentialIssues;
    char pad_23[4];
    char m_potentialIssues[1]; // 0x628
    // CUtlVector< char* > m_VoteOptions;
    char pad_24[23];
    char m_VoteOptions[1]; // 0x640
    char pad_025[23];
}; // size: 0x658

class __declspec(align(8)) CMapVetoPickController : public CBaseEntity {
public:
    bool m_bPlayedIntroVcd; // 0x4a8
    bool m_bNeedToPlayFiveSecondsRemaining; // 0x4a9
    // float64 m_dblPreMatchDraftSequenceTime;
    char pad_21[30];
    char m_dblPreMatchDraftSequenceTime[1]; // 0x4c8
    char pad_22[7];
    bool m_bPreMatchDraftStateChanged; // 0x4d0
    int32_t m_nDraftType; // 0x4d4
    int32_t m_nTeamWinningCoinToss; // 0x4d8
    int32_t m_nTeamWithFirstChoice[64]; // 0x4dc
    int32_t m_nVoteMapIdsList[7]; // 0x5dc
    int32_t m_nAccountIDs[64]; // 0x5f8
    int32_t m_nMapId0[64]; // 0x6f8
    int32_t m_nMapId1[64]; // 0x7f8
    int32_t m_nMapId2[64]; // 0x8f8
    int32_t m_nMapId3[64]; // 0x9f8
    int32_t m_nMapId4[64]; // 0xaf8
    int32_t m_nMapId5[64]; // 0xbf8
    int32_t m_nStartingSide0[64]; // 0xcf8
    int32_t m_nCurrentPhase; // 0xdf8
    int32_t m_nPhaseStartTick; // 0xdfc
    int32_t m_nPhaseDurationTicks; // 0xe00
    // CEntityOutputTemplate< CUtlSymbolLarge, CUtlSymbolLarge > m_OnMapVetoed;
    char pad_23[4];
    char m_OnMapVetoed[1]; // 0xe08
    // CEntityOutputTemplate< CUtlSymbolLarge, CUtlSymbolLarge > m_OnMapPicked;
    char pad_24[31];
    char m_OnMapPicked[1]; // 0xe28
    // CEntityOutputTemplate< int32, int32 > m_OnSidesPicked;
    char pad_25[31];
    char m_OnSidesPicked[1]; // 0xe48
    // CEntityOutputTemplate< int32, int32 > m_OnNewPhaseStarted;
    char pad_26[31];
    char m_OnNewPhaseStarted[1]; // 0xe68
    // CEntityOutputTemplate< int32, int32 > m_OnLevelTransition;
    char pad_27[31];
    char m_OnLevelTransition[1]; // 0xe88
    char pad_028[31];
}; // size: 0xea8

class __declspec(align(8)) CLogicEventListener : public CLogicalEntity {
public:
    // CUtlString m_strEventName;
    char pad_21[16];
    char m_strEventName[1]; // 0x4b8
    char pad_22[7];
    bool m_bIsEnabled; // 0x4c0
    int32_t m_nTeam; // 0x4c4
    // CEntityOutputTemplate< CUtlString, char* > m_OnEventFired;
    char m_OnEventFired[1]; // 0x4c8
    char pad_023[31];
}; // size: 0x4e8

class __declspec(align(1)) CCSPointPulseAPI {
public:
    char pad_00[1];
}; // size: 0x1

class __declspec(align(8)) CCSPointScriptEntity : public CBaseEntity {
public:
    char pad_021[360];
}; // size: 0x610

class __declspec(align(8)) CBot {
public:
    char pad_00[16];
    CCSPlayerController* m_pController; // 0x10
    CCSPlayerPawn* m_pPlayer; // 0x18
    bool m_bHasSpawned; // 0x20
    uint32_t m_id; // 0x24
    char pad_01[152];
    bool m_isRunning; // 0xc0
    bool m_isCrouching; // 0xc1
    float m_forwardSpeed; // 0xc4
    float m_leftSpeed; // 0xc8
    float m_verticalSpeed; // 0xcc
    uint64_t m_buttonFlags; // 0xd0
    float m_jumpTimestamp; // 0xd8
    Vector m_viewForward; // 0xdc
    char pad_02[16];
    int32_t m_postureStackIndex; // 0xf8
    char pad_03[4];
}; // size: 0x100

/// CBtNode
class __declspec(align(1)) CBtNode0 {
public:
    char pad_00[88];
}; // size: 0x58

/// CBtNodeDecorator
class __declspec(align(1)) CBtNodeDecorator0 {
public:
    char pad_00[88];
}; // size: 0x58

/// CBtNodeComposite
class __declspec(align(1)) CBtNodeComposite0 {
public:
    char pad_00[88];
}; // size: 0x58

class __declspec(align(4)) CBtActionAim {
public:
    // CUtlString m_szSensorInputKey;
    char pad_00[104];
    char m_szSensorInputKey[1]; // 0x68
    // CUtlString m_szAimReadyKey;
    char pad_01[23];
    char m_szAimReadyKey[1]; // 0x80
    char pad_02[4];
    float m_flZoomCooldownTimestamp; // 0x88
    bool m_bDoneAiming; // 0x8c
    float m_flLerpStartTime; // 0x90
    float m_flNextLookTargetLerpTime; // 0x94
    float m_flPenaltyReductionRatio; // 0x98
    QAngle m_NextLookTarget; // 0x9c
    CountdownTimer m_AimTimer; // 0xa8
    CountdownTimer m_SniperHoldTimer; // 0xc0
    CountdownTimer m_FocusIntervalTimer; // 0xd8
    bool m_bAcquired; // 0xf0
    char pad_03[7];
}; // size: 0xf8

class __declspec(align(4)) CBtActionCombatPositioning {
public:
    // CUtlString m_szSensorInputKey;
    char pad_00[104];
    char m_szSensorInputKey[1]; // 0x68
    // CUtlString m_szIsAttackingKey;
    char pad_01[23];
    char m_szIsAttackingKey[1]; // 0x80
    char pad_02[4];
    CountdownTimer m_ActionTimer; // 0x88
    bool m_bCrouching; // 0xa0
    char pad_03[15];
}; // size: 0xb0

class __declspec(align(4)) CBtActionMoveTo {
public:
    // CUtlString m_szDestinationInputKey;
    char pad_00[96];
    char m_szDestinationInputKey[1]; // 0x60
    // CUtlString m_szHidingSpotInputKey;
    char pad_01[7];
    char m_szHidingSpotInputKey[1]; // 0x68
    // CUtlString m_szThreatInputKey;
    char pad_02[7];
    char m_szThreatInputKey[1]; // 0x70
    char pad_03[4];
    Vector m_vecDestination; // 0x78
    bool m_bAutoLookAdjust; // 0x84
    bool m_bComputePath; // 0x85
    float m_flDamagingAreasPenaltyCost; // 0x88
    char pad_04[4];
    CountdownTimer m_CheckApproximateCornersTimer; // 0x90
    CountdownTimer m_CheckHighPriorityItem; // 0xa8
    CountdownTimer m_RepathTimer; // 0xc0
    float m_flArrivalEpsilon; // 0xd8
    float m_flAdditionalArrivalEpsilon2D; // 0xdc
    float m_flHidingSpotCheckDistanceThreshold; // 0xe0
    float m_flNearestAreaDistanceThreshold; // 0xe4
}; // size: 0xe8

class __declspec(align(4)) CBtActionParachutePositioning {
public:
    char pad_00[88];
    CountdownTimer m_ActionTimer; // 0x58
    char pad_01[8];
}; // size: 0x78

class __declspec(align(1)) CBtNodeCondition {
public:
    char pad_00[88];
    bool m_bNegated; // 0x58
    char pad_01[7];
}; // size: 0x60

class __declspec(align(4)) CBtNodeConditionInactive {
public:
    char pad_00[120];
    float m_flRoundStartThresholdSeconds; // 0x78
    float m_flSensorInactivityThresholdSeconds; // 0x7c
    CountdownTimer m_SensorInactivityTimer; // 0x80
}; // size: 0x98

class __declspec(align(8)) CPointEntity : public CBaseEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CEnvCombinedLightProbeVolume : public CBaseEntity {
public:
    // Color m_Entity_Color;
    char pad_21[4216];
    char m_Entity_Color[1]; // 0x1520
    float m_Entity_flBrightness; // 0x1524
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture;
    char m_Entity_hCubemapTexture[1]; // 0x1528
    char pad_22[7];
    bool m_Entity_bCustomCubemapTexture; // 0x1530
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_AmbientCube;
    char pad_23[7];
    char m_Entity_hLightProbeTexture_AmbientCube[1]; // 0x1538
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SDF;
    char pad_24[7];
    char m_Entity_hLightProbeTexture_SDF[1]; // 0x1540
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_DC;
    char pad_25[7];
    char m_Entity_hLightProbeTexture_SH2_DC[1]; // 0x1548
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_R;
    char pad_26[7];
    char m_Entity_hLightProbeTexture_SH2_R[1]; // 0x1550
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_G;
    char pad_27[7];
    char m_Entity_hLightProbeTexture_SH2_G[1]; // 0x1558
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_B;
    char pad_28[7];
    char m_Entity_hLightProbeTexture_SH2_B[1]; // 0x1560
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture;
    char pad_29[7];
    char m_Entity_hLightProbeDirectLightIndicesTexture[1]; // 0x1568
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture;
    char pad_30[7];
    char m_Entity_hLightProbeDirectLightScalarsTexture[1]; // 0x1570
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture;
    char pad_31[7];
    char m_Entity_hLightProbeDirectLightShadowsTexture[1]; // 0x1578
    char pad_32[4];
    Vector m_Entity_vBoxMins; // 0x1580
    Vector m_Entity_vBoxMaxs; // 0x158c
    bool m_Entity_bMoveable; // 0x1598
    int32_t m_Entity_nHandshake; // 0x159c
    int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x15a0
    int32_t m_Entity_nPriority; // 0x15a4
    bool m_Entity_bStartDisabled; // 0x15a8
    float m_Entity_flEdgeFadeDist; // 0x15ac
    Vector m_Entity_vEdgeFadeDists; // 0x15b0
    int32_t m_Entity_nLightProbeSizeX; // 0x15bc
    int32_t m_Entity_nLightProbeSizeY; // 0x15c0
    int32_t m_Entity_nLightProbeSizeZ; // 0x15c4
    int32_t m_Entity_nLightProbeAtlasX; // 0x15c8
    int32_t m_Entity_nLightProbeAtlasY; // 0x15cc
    int32_t m_Entity_nLightProbeAtlasZ; // 0x15d0
    char pad_33[21];
    bool m_Entity_bEnabled; // 0x15e9
    char pad_034[6];
}; // size: 0x15f0

class __declspec(align(8)) CEnvCubemap : public CBaseEntity {
public:
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture;
    char pad_21[128];
    char m_Entity_hCubemapTexture[1]; // 0x528
    char pad_22[7];
    bool m_Entity_bCustomCubemapTexture; // 0x530
    float m_Entity_flInfluenceRadius; // 0x534
    Vector m_Entity_vBoxProjectMins; // 0x538
    Vector m_Entity_vBoxProjectMaxs; // 0x544
    bool m_Entity_bMoveable; // 0x550
    int32_t m_Entity_nHandshake; // 0x554
    int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x558
    int32_t m_Entity_nPriority; // 0x55c
    float m_Entity_flEdgeFadeDist; // 0x560
    Vector m_Entity_vEdgeFadeDists; // 0x564
    float m_Entity_flDiffuseScale; // 0x570
    bool m_Entity_bStartDisabled; // 0x574
    bool m_Entity_bDefaultEnvMap; // 0x575
    bool m_Entity_bDefaultSpecEnvMap; // 0x576
    bool m_Entity_bIndoorCubeMap; // 0x577
    bool m_Entity_bCopyDiffuseFromDefaultCubemap; // 0x578
    char pad_23[15];
    bool m_Entity_bEnabled; // 0x588
    char pad_024[7];
}; // size: 0x590

class __declspec(align(8)) CEnvCubemapBox : public CEnvCubemap {
public:
}; // size: 0x590

class __declspec(align(8)) CEnvCubemapFog : public CBaseEntity {
public:
    float m_flEndDistance; // 0x4a8
    float m_flStartDistance; // 0x4ac
    float m_flFogFalloffExponent; // 0x4b0
    bool m_bHeightFogEnabled; // 0x4b4
    float m_flFogHeightWidth; // 0x4b8
    float m_flFogHeightEnd; // 0x4bc
    float m_flFogHeightStart; // 0x4c0
    float m_flFogHeightExponent; // 0x4c4
    float m_flLODBias; // 0x4c8
    bool m_bActive; // 0x4cc
    bool m_bStartDisabled; // 0x4cd
    float m_flFogMaxOpacity; // 0x4d0
    int32_t m_nCubemapSourceType; // 0x4d4
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial;
    char m_hSkyMaterial[1]; // 0x4d8
    // CUtlSymbolLarge m_iszSkyEntity;
    char pad_21[7];
    char m_iszSkyEntity[1]; // 0x4e0
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture;
    char pad_22[7];
    char m_hFogCubemapTexture[1]; // 0x4e8
    char pad_23[7];
    bool m_bHasHeightFogEnd; // 0x4f0
    bool m_bFirstTime; // 0x4f1
    char pad_024[6];
}; // size: 0x4f8

class __declspec(align(8)) CGradientFog : public CBaseEntity {
public:
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hGradientFogTexture;
    char m_hGradientFogTexture[1]; // 0x4a8
    char pad_21[4];
    float m_flFogStartDistance; // 0x4b0
    float m_flFogEndDistance; // 0x4b4
    bool m_bHeightFogEnabled; // 0x4b8
    float m_flFogStartHeight; // 0x4bc
    float m_flFogEndHeight; // 0x4c0
    float m_flFarZ; // 0x4c4
    float m_flFogMaxOpacity; // 0x4c8
    float m_flFogFalloffExponent; // 0x4cc
    float m_flFogVerticalExponent; // 0x4d0
    // Color m_fogColor;
    char m_fogColor[1]; // 0x4d4
    float m_flFogStrength; // 0x4d8
    float m_flFadeTime; // 0x4dc
    bool m_bStartDisabled; // 0x4e0
    bool m_bIsEnabled; // 0x4e1
    bool m_bGradientFogNeedsTextures; // 0x4e2
    char pad_022[5];
}; // size: 0x4e8

class __declspec(align(8)) CEnvLightProbeVolume : public CBaseEntity {
public:
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_AmbientCube;
    char pad_21[4088];
    char m_Entity_hLightProbeTexture_AmbientCube[1]; // 0x14a0
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SDF;
    char pad_22[7];
    char m_Entity_hLightProbeTexture_SDF[1]; // 0x14a8
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_DC;
    char pad_23[7];
    char m_Entity_hLightProbeTexture_SH2_DC[1]; // 0x14b0
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_R;
    char pad_24[7];
    char m_Entity_hLightProbeTexture_SH2_R[1]; // 0x14b8
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_G;
    char pad_25[7];
    char m_Entity_hLightProbeTexture_SH2_G[1]; // 0x14c0
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_B;
    char pad_26[7];
    char m_Entity_hLightProbeTexture_SH2_B[1]; // 0x14c8
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture;
    char pad_27[7];
    char m_Entity_hLightProbeDirectLightIndicesTexture[1]; // 0x14d0
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture;
    char pad_28[7];
    char m_Entity_hLightProbeDirectLightScalarsTexture[1]; // 0x14d8
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture;
    char pad_29[7];
    char m_Entity_hLightProbeDirectLightShadowsTexture[1]; // 0x14e0
    char pad_30[4];
    Vector m_Entity_vBoxMins; // 0x14e8
    Vector m_Entity_vBoxMaxs; // 0x14f4
    bool m_Entity_bMoveable; // 0x1500
    int32_t m_Entity_nHandshake; // 0x1504
    int32_t m_Entity_nPriority; // 0x1508
    bool m_Entity_bStartDisabled; // 0x150c
    int32_t m_Entity_nLightProbeSizeX; // 0x1510
    int32_t m_Entity_nLightProbeSizeY; // 0x1514
    int32_t m_Entity_nLightProbeSizeZ; // 0x1518
    int32_t m_Entity_nLightProbeAtlasX; // 0x151c
    int32_t m_Entity_nLightProbeAtlasY; // 0x1520
    int32_t m_Entity_nLightProbeAtlasZ; // 0x1524
    char pad_31[9];
    bool m_Entity_bEnabled; // 0x1531
    char pad_032[6];
}; // size: 0x1538

class __declspec(align(8)) CPlayerVisibility : public CBaseEntity {
public:
    float m_flVisibilityStrength; // 0x4a8
    float m_flFogDistanceMultiplier; // 0x4ac
    float m_flFogMaxDensityMultiplier; // 0x4b0
    float m_flFadeTime; // 0x4b4
    bool m_bStartDisabled; // 0x4b8
    bool m_bIsEnabled; // 0x4b9
    char pad_021[6];
}; // size: 0x4c0

class __declspec(align(8)) CEnvVolumetricFogController : public CBaseEntity {
public:
    float m_flScattering; // 0x4a8
    // Color m_TintColor;
    char m_TintColor[1]; // 0x4ac
    float m_flAnisotropy; // 0x4b0
    float m_flFadeSpeed; // 0x4b4
    float m_flDrawDistance; // 0x4b8
    float m_flFadeInStart; // 0x4bc
    float m_flFadeInEnd; // 0x4c0
    float m_flIndirectStrength; // 0x4c4
    int32_t m_nVolumeDepth; // 0x4c8
    float m_fFirstVolumeSliceThickness; // 0x4cc
    int32_t m_nIndirectTextureDimX; // 0x4d0
    int32_t m_nIndirectTextureDimY; // 0x4d4
    int32_t m_nIndirectTextureDimZ; // 0x4d8
    Vector m_vBoxMins; // 0x4dc
    Vector m_vBoxMaxs; // 0x4e8
    bool m_bActive; // 0x4f4
    GameTime_t m_flStartAnisoTime; // 0x4f8
    GameTime_t m_flStartScatterTime; // 0x4fc
    GameTime_t m_flStartDrawDistanceTime; // 0x500
    float m_flStartAnisotropy; // 0x504
    float m_flStartScattering; // 0x508
    float m_flStartDrawDistance; // 0x50c
    float m_flDefaultAnisotropy; // 0x510
    float m_flDefaultScattering; // 0x514
    float m_flDefaultDrawDistance; // 0x518
    bool m_bStartDisabled; // 0x51c
    bool m_bEnableIndirect; // 0x51d
    bool m_bIsMaster; // 0x51e
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogIndirectTexture;
    char pad_21[1];
    char m_hFogIndirectTexture[1]; // 0x520
    char pad_22[4];
    int32_t m_nForceRefreshCount; // 0x528
    float m_fNoiseSpeed; // 0x52c
    float m_fNoiseStrength; // 0x530
    Vector m_vNoiseScale; // 0x534
    float m_fWindSpeed; // 0x540
    Vector m_vWindDirection; // 0x544
    bool m_bFirstTime; // 0x550
    char pad_023[7];
}; // size: 0x558

class __declspec(align(8)) CEnvVolumetricFogVolume : public CBaseEntity {
public:
    bool m_bActive; // 0x4a8
    Vector m_vBoxMins; // 0x4ac
    Vector m_vBoxMaxs; // 0x4b8
    bool m_bStartDisabled; // 0x4c4
    bool m_bIndirectUseLPVs; // 0x4c5
    float m_flStrength; // 0x4c8
    int32_t m_nFalloffShape; // 0x4cc
    float m_flFalloffExponent; // 0x4d0
    float m_flHeightFogDepth; // 0x4d4
    float m_fHeightFogEdgeWidth; // 0x4d8
    float m_fIndirectLightStrength; // 0x4dc
    float m_fSunLightStrength; // 0x4e0
    float m_fNoiseStrength; // 0x4e4
    // Color m_TintColor;
    char m_TintColor[1]; // 0x4e8
    char pad_21[3];
    bool m_bOverrideTintColor; // 0x4ec
    bool m_bOverrideIndirectLightStrength; // 0x4ed
    bool m_bOverrideSunLightStrength; // 0x4ee
    bool m_bOverrideNoiseStrength; // 0x4ef
}; // size: 0x4f0

class __declspec(align(8)) CEnvWindController : public CBaseEntity {
public:
    CEnvWindShared m_EnvWindShared; // 0x4a8
    float m_fDirectionVariation; // 0x5d8
    float m_fSpeedVariation; // 0x5dc
    float m_fTurbulence; // 0x5e0
    float m_fVolumeHalfExtentXY; // 0x5e4
    float m_fVolumeHalfExtentZ; // 0x5e8
    int32_t m_nVolumeResolutionXY; // 0x5ec
    int32_t m_nVolumeResolutionZ; // 0x5f0
    int32_t m_nClipmapLevels; // 0x5f4
    bool m_bIsMaster; // 0x5f8
    bool m_bFirstTime; // 0x5f9
    char pad_021[6];
}; // size: 0x600

class __declspec(align(8)) CEnvWindVolume : public CBaseEntity {
public:
    bool m_bActive; // 0x4a8
    Vector m_vBoxMins; // 0x4ac
    Vector m_vBoxMaxs; // 0x4b8
    bool m_bStartDisabled; // 0x4c4
    int32_t m_nShape; // 0x4c8
    float m_fWindSpeedMultiplier; // 0x4cc
    float m_fWindTurbulenceMultiplier; // 0x4d0
    float m_fWindSpeedVariationMultiplier; // 0x4d4
    float m_fWindDirectionVariationMultiplier; // 0x4d8
    char pad_021[4];
}; // size: 0x4e0

class __declspec(align(8)) CInfoTarget : public CPointEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CInfoTargetServerOnly : public CServerOnlyPointEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CInfoParticleTarget : public CPointEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CChoreoInfoTarget : public CPointEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CInfoVisibilityBox : public CBaseEntity {
public:
    char pad_21[4];
    int32_t m_nMode; // 0x4ac
    Vector m_vBoxSize; // 0x4b0
    bool m_bEnabled; // 0x4bc
    char pad_022[3];
}; // size: 0x4c0

class __declspec(align(8)) CInfoWorldLayer : public CBaseEntity {
public:
    CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x4a8
    // CUtlSymbolLarge m_worldName;
    char m_worldName[1]; // 0x4c0
    // CUtlSymbolLarge m_layerName;
    char pad_21[7];
    char m_layerName[1]; // 0x4c8
    char pad_22[7];
    bool m_bWorldLayerVisible; // 0x4d0
    bool m_bEntitiesSpawned; // 0x4d1
    bool m_bCreateAsChildSpawnGroup; // 0x4d2
    uint32_t m_hLayerSpawnGroup; // 0x4d4
}; // size: 0x4d8

class __declspec(align(8)) CLightEntity : public CBaseModelEntity {
public:
    CLightComponent* m_CLightComponent; // 0x730
}; // size: 0x738

class __declspec(align(8)) CMultiLightProxy : public CLogicalEntity {
public:
    // CUtlSymbolLarge m_iszLightNameFilter;
    char m_iszLightNameFilter[1]; // 0x4a8
    // CUtlSymbolLarge m_iszLightClassFilter;
    char pad_21[7];
    char m_iszLightClassFilter[1]; // 0x4b0
    char pad_22[4];
    float m_flLightRadiusFilter; // 0x4b8
    float m_flBrightnessDelta; // 0x4bc
    bool m_bPerformScreenFade; // 0x4c0
    float m_flTargetBrightnessMultiplier; // 0x4c4
    float m_flCurrentBrightnessMultiplier; // 0x4c8
    // CUtlVector< CHandle< CLightEntity > > m_vecLights;
    char pad_23[4];
    char m_vecLights[1]; // 0x4d0
    char pad_024[23];
}; // size: 0x4e8

class __declspec(align(8)) CPointChildModifier : public CPointEntity {
public:
    bool m_bOrphanInsteadOfDeletingChildrenOnRemove; // 0x4a8
    char pad_021[7];
}; // size: 0x4b0

class __declspec(align(8)) CPointCameraVFOV : public CPointCamera {
public:
    float m_flVerticalFOV; // 0x508
    char pad_022[4];
}; // size: 0x510

class __declspec(align(8)) CPointOrient : public CBaseEntity {
public:
    // CUtlSymbolLarge m_iszSpawnTargetName;
    char m_iszSpawnTargetName[1]; // 0x4a8
    // CHandle< CBaseEntity > m_hTarget;
    char pad_21[7];
    char m_hTarget[1]; // 0x4b0
    char pad_22[3];
    bool m_bActive; // 0x4b4
    PointOrientGoalDirectionType_t m_nGoalDirection; // 0x4b8
    PointOrientConstraint_t m_nConstraint; // 0x4bc
    float m_flMaxTurnRate; // 0x4c0
    GameTime_t m_flLastGameTime; // 0x4c4
}; // size: 0x4c8

class __declspec(align(8)) CPointTemplate : public CLogicalEntity {
public:
    // CUtlSymbolLarge m_iszWorldName;
    char m_iszWorldName[1]; // 0x4a8
    // CUtlSymbolLarge m_iszSource2EntityLumpName;
    char pad_21[7];
    char m_iszSource2EntityLumpName[1]; // 0x4b0
    // CUtlSymbolLarge m_iszEntityFilterName;
    char pad_22[7];
    char m_iszEntityFilterName[1]; // 0x4b8
    char pad_23[4];
    float m_flTimeoutInterval; // 0x4c0
    bool m_bAsynchronouslySpawnEntities; // 0x4c4
    PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x4c8
    PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x4cc
    // CUtlVector< uint32 > m_createdSpawnGroupHandles;
    char m_createdSpawnGroupHandles[1]; // 0x4d0
    // CUtlVector< CEntityHandle > m_SpawnedEntityHandles;
    char pad_24[23];
    char m_SpawnedEntityHandles[1]; // 0x4e8
    // HSCRIPT m_ScriptSpawnCallback;
    char pad_25[23];
    char m_ScriptSpawnCallback[1]; // 0x500
    // HSCRIPT m_ScriptCallbackScope;
    char pad_26[7];
    char m_ScriptCallbackScope[1]; // 0x508
    char pad_027[7];
}; // size: 0x510

class __declspec(align(8)) CGameGibManager : public CBaseEntity {
public:
    char pad_21[24];
    bool m_bAllowNewGibs; // 0x4c0
    int32_t m_iCurrentMaxPieces; // 0x4c4
    int32_t m_iMaxPieces; // 0x4c8
    int32_t m_iLastFrame; // 0x4cc
}; // size: 0x4d0

class __declspec(align(8)) CRagdollManager : public CBaseEntity {
public:
    int8_t m_iCurrentMaxRagdollCount; // 0x4a8
    int32_t m_iMaxRagdollCount; // 0x4ac
    bool m_bSaveImportant; // 0x4b0
    bool m_bCanTakeDamage; // 0x4b1
    char pad_021[6];
}; // size: 0x4b8

class __declspec(align(8)) CSoundAreaEntityBase : public CBaseEntity {
public:
    bool m_bDisabled; // 0x4a8
    // CUtlSymbolLarge m_iszSoundAreaType;
    char pad_21[7];
    char m_iszSoundAreaType[1]; // 0x4b0
    char pad_22[4];
    Vector m_vPos; // 0x4b8
    char pad_023[4];
}; // size: 0x4c8

class __declspec(align(8)) CSoundAreaEntitySphere : public CSoundAreaEntityBase {
public:
    float m_flRadius; // 0x4c8
    char pad_024[4];
}; // size: 0x4d0

class __declspec(align(8)) CSoundAreaEntityOrientedBox : public CSoundAreaEntityBase {
public:
    Vector m_vMin; // 0x4c8
    Vector m_vMax; // 0x4d4
}; // size: 0x4e0

class __declspec(align(8)) CSoundStackSave : public CLogicalEntity {
public:
    // CUtlSymbolLarge m_iszStackName;
    char m_iszStackName[1]; // 0x4a8
    char pad_021[7];
}; // size: 0x4b0

class __declspec(align(8)) CSoundEventEntity : public CBaseEntity {
public:
    bool m_bStartOnSpawn; // 0x4a8
    bool m_bToLocalPlayer; // 0x4a9
    bool m_bStopOnNew; // 0x4aa
    bool m_bSaveRestore; // 0x4ab
    bool m_bSavedIsPlaying; // 0x4ac
    float m_flSavedElapsedTime; // 0x4b0
    // CUtlSymbolLarge m_iszSourceEntityName;
    char pad_21[4];
    char m_iszSourceEntityName[1]; // 0x4b8
    // CUtlSymbolLarge m_iszAttachmentName;
    char pad_22[7];
    char m_iszAttachmentName[1]; // 0x4c0
    // CEntityOutputTemplate< uint64, uint64 > m_onGUIDChanged;
    char pad_23[7];
    char m_onGUIDChanged[1]; // 0x4c8
    char pad_24[31];
    CEntityIOOutput m_onSoundFinished; // 0x4e8
    float m_flClientCullRadius; // 0x500
    // CUtlSymbolLarge m_iszSoundName;
    char pad_25[44];
    char m_iszSoundName[1]; // 0x530
    // CEntityHandle m_hSource;
    char pad_26[27];
    char m_hSource[1]; // 0x54c
    int32_t m_nEntityIndexSelection; // 0x550
    char pad_027[4];
}; // size: 0x558

class __declspec(align(8)) CSoundEventEntityAlias_snd_event_point : public CSoundEventEntity {
public:
}; // size: 0x558

class __declspec(align(8)) CSoundEventAABBEntity : public CSoundEventEntity {
public:
    Vector m_vMins; // 0x558
    Vector m_vMaxs; // 0x564
}; // size: 0x570

class __declspec(align(8)) CSoundEventOBBEntity : public CSoundEventEntity {
public:
    Vector m_vMins; // 0x558
    Vector m_vMaxs; // 0x564
    char pad_028[16];
}; // size: 0x580

class __declspec(align(8)) CSoundEventSphereEntity : public CSoundEventEntity {
public:
    float m_flRadius; // 0x558
    char pad_028[4];
}; // size: 0x560

class __declspec(align(8)) CSoundEventConeEntity : public CSoundEventEntity {
public:
    float m_flEmitterAngle; // 0x558
    float m_flSweetSpotAngle; // 0x55c
    float m_flAttenMin; // 0x560
    float m_flAttenMax; // 0x564
    // CUtlSymbolLarge m_iszParameterName;
    char m_iszParameterName[1]; // 0x568
    char pad_028[7];
}; // size: 0x570

class __declspec(align(8)) CSoundEventPathCornerEntity : public CSoundEventEntity {
public:
    // CUtlSymbolLarge m_iszPathCorner;
    char m_iszPathCorner[1]; // 0x558
    char pad_28[4];
    int32_t m_iCountMax; // 0x560
    float m_flDistanceMax; // 0x564
    float m_flDistMaxSqr; // 0x568
    float m_flDotProductMax; // 0x56c
    bool m_bPlaying; // 0x570
    // CNetworkUtlVectorBase< SoundeventPathCornerPairNetworked_t > m_vecCornerPairsNetworked;
    char pad_29[39];
    char m_vecCornerPairsNetworked[1]; // 0x598
    char pad_030[95];
}; // size: 0x5f8

class __declspec(align(8)) CSoundEventParameter : public CBaseEntity {
public:
    // CUtlSymbolLarge m_iszParamName;
    char pad_21[24];
    char m_iszParamName[1]; // 0x4c0
    char pad_22[4];
    float m_flFloatValue; // 0x4c8
    char pad_023[4];
}; // size: 0x4d0

class __declspec(align(8)) CTeam : public CBaseEntity {
public:
    // CNetworkUtlVectorBase< CHandle< CBasePlayerController > > m_aPlayerControllers;
    char m_aPlayerControllers[1]; // 0x4a8
    // CNetworkUtlVectorBase< CHandle< CBasePlayerPawn > > m_aPlayers;
    char pad_21[23];
    char m_aPlayers[1]; // 0x4c0
    char pad_22[20];
    int32_t m_iScore; // 0x4d8
    char m_szTeamname[129]; // 0x4dc
    char pad_023[3];
}; // size: 0x560

class __declspec(align(8)) CInfoFan : public CPointEntity {
public:
    char pad_21[64];
    float m_fFanForceMaxRadius; // 0x4e8
    float m_fFanForceMinRadius; // 0x4ec
    float m_flCurveDistRange; // 0x4f0
    // CUtlSymbolLarge m_FanForceCurveString;
    char pad_22[4];
    char m_FanForceCurveString[1]; // 0x4f8
    char pad_023[7];
}; // size: 0x500

class __declspec(align(1)) CPulseGraphInstance_GameBlackboard {
public:
    char pad_00[456];
}; // size: 0x1c8

class __declspec(align(8)) CPulseGameBlackboard : public CBaseEntity {
public:
    // CUtlString m_strGraphName;
    char pad_21[8];
    char m_strGraphName[1]; // 0x4b0
    // CUtlString m_strStateBlob;
    char pad_22[7];
    char m_strStateBlob[1]; // 0x4b8
    char pad_023[7];
}; // size: 0x4c0

class __declspec(align(8)) CBasePlayerVData {
public:
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName;
    char pad_00[40];
    char m_sModelName[1]; // 0x28
    char pad_01[220];
    CSkillFloat m_flHeadDamageMultiplier; // 0x108
    CSkillFloat m_flChestDamageMultiplier; // 0x118
    CSkillFloat m_flStomachDamageMultiplier; // 0x128
    CSkillFloat m_flArmDamageMultiplier; // 0x138
    CSkillFloat m_flLegDamageMultiplier; // 0x148
    float m_flHoldBreathTime; // 0x158
    float m_flDrowningDamageInterval; // 0x15c
    int32_t m_nDrowningDamageInitial; // 0x160
    int32_t m_nDrowningDamageMax; // 0x164
    int32_t m_nWaterSpeed; // 0x168
    float m_flUseRange; // 0x16c
    float m_flUseAngleTolerance; // 0x170
    float m_flCrouchTime; // 0x174
}; // size: 0x178

class __declspec(align(8)) CFilterMultiple : public CBaseFilter {
public:
    filter_t m_nFilterType; // 0x4e0
    // CUtlSymbolLarge[10] m_iFilterName;
    char pad_22[4];
    char m_iFilterName[1]; // 0x4e8
    // CHandle< CBaseEntity >[10] m_hFilter;
    char pad_23[79];
    char m_hFilter[1]; // 0x538
    char pad_024[39];
}; // size: 0x560

class __declspec(align(8)) CFilterProximity : public CBaseFilter {
public:
    float m_flRadius; // 0x4e0
    char pad_022[4];
}; // size: 0x4e8

class __declspec(align(8)) CFilterLOS : public CBaseFilter {
public:
}; // size: 0x4e0

class __declspec(align(8)) CFilterClass : public CBaseFilter {
public:
    // CUtlSymbolLarge m_iFilterClass;
    char m_iFilterClass[1]; // 0x4e0
    char pad_022[7];
}; // size: 0x4e8

class __declspec(align(8)) CBasePlayerWeaponVData {
public:
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldModel;
    char pad_00[40];
    char m_szWorldModel[1]; // 0x28
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sToolsOnlyOwnerModelName;
    char pad_01[223];
    char m_sToolsOnlyOwnerModelName[1]; // 0x108
    char pad_02[223];
    bool m_bBuiltRightHanded; // 0x1e8
    bool m_bAllowFlipping; // 0x1e9
    // CAttachmentNameSymbolWithStorage m_sMuzzleAttachment;
    char pad_03[6];
    char m_sMuzzleAttachment[1]; // 0x1f0
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashParticle;
    char pad_04[31];
    char m_szMuzzleFlashParticle[1]; // 0x210
    // CUtlString m_szMuzzleFlashParticleConfig;
    char pad_05[223];
    char m_szMuzzleFlashParticleConfig[1]; // 0x2f0
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szBarrelSmokeParticle;
    char pad_06[7];
    char m_szBarrelSmokeParticle[1]; // 0x2f8
    char pad_07[223];
    uint8_t m_nMuzzleSmokeShotThreshold; // 0x3d8
    float m_flMuzzleSmokeTimeout; // 0x3dc
    float m_flMuzzleSmokeDecrementRate; // 0x3e0
    bool m_bGenerateMuzzleLight; // 0x3e4
    bool m_bLinkedCooldowns; // 0x3e5
    ItemFlagTypes_t m_iFlags; // 0x3e6
    int32_t m_iWeight; // 0x3e8
    bool m_bAutoSwitchTo; // 0x3ec
    bool m_bAutoSwitchFrom; // 0x3ed
    AmmoIndex_t m_nPrimaryAmmoType; // 0x3ee
    AmmoIndex_t m_nSecondaryAmmoType; // 0x3ef
    int32_t m_iMaxClip1; // 0x3f0
    int32_t m_iMaxClip2; // 0x3f4
    int32_t m_iDefaultClip1; // 0x3f8
    int32_t m_iDefaultClip2; // 0x3fc
    bool m_bReserveAmmoAsClips; // 0x400
    bool m_bTreatAsSingleClip; // 0x401
    bool m_bKeepLoadedAmmo; // 0x402
    RumbleEffect_t m_iRumbleEffect; // 0x404
    float m_flDropSpeed; // 0x408
    int32_t m_iSlot; // 0x40c
    int32_t m_iPosition; // 0x410
    // CUtlOrderedMap< WeaponSound_t, CSoundEventName > m_aShootSounds;
    char pad_08[4];
    char m_aShootSounds[1]; // 0x418
    char pad_09[39];
}; // size: 0x440

class __declspec(align(8)) CInfoGameEventProxy : public CPointEntity {
public:
    // CUtlSymbolLarge m_iszEventName;
    char m_iszEventName[1]; // 0x4a8
    char pad_21[4];
    float m_flRange; // 0x4b0
    char pad_022[4];
}; // size: 0x4b8

class __declspec(align(8)) CServerOnlyModelEntity : public CBaseModelEntity {
public:
}; // size: 0x730

class __declspec(align(8)) CModelPointEntity : public CBaseModelEntity {
public:
}; // size: 0x730

class __declspec(align(8)) CInfoInteraction : public CPointEntity {
public:
    // CUtlSymbolLarge[8] m_strSlotEntityName;
    char m_strSlotEntityName[1]; // 0x4a8
    // CUtlSymbolLarge m_strInteractVData;
    char pad_21[63];
    char m_strInteractVData[1]; // 0x4e8
    char pad_22[4];
    float m_flInteractRadius; // 0x4f0
    char pad_023[4];
}; // size: 0x4f8

class __declspec(align(8)) CLogicRelay : public CLogicalEntity {
public:
    bool m_bDisabled; // 0x4a8
    bool m_bWaitForRefire; // 0x4a9
    bool m_bTriggerOnce; // 0x4aa
    bool m_bFastRetrigger; // 0x4ab
    bool m_bPassthoughCaller; // 0x4ac
    char pad_021[3];
}; // size: 0x4b0

class __declspec(align(8)) CPathParticleRope : public CBaseEntity {
public:
    char pad_21[8];
    bool m_bStartActive; // 0x4b0
    float m_flMaxSimulationTime; // 0x4b4
    // CUtlSymbolLarge m_iszEffectName;
    char m_iszEffectName[1]; // 0x4b8
    // CUtlVector< CUtlSymbolLarge > m_PathNodes_Name;
    char pad_22[7];
    char m_PathNodes_Name[1]; // 0x4c0
    char pad_23[20];
    float m_flParticleSpacing; // 0x4d8
    float m_flSlack; // 0x4dc
    float m_flRadius; // 0x4e0
    // Color m_ColorTint;
    char m_ColorTint[1]; // 0x4e4
    int32_t m_nEffectState; // 0x4e8
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex;
    char pad_24[4];
    char m_iEffectIndex[1]; // 0x4f0
    // CNetworkUtlVectorBase< Vector > m_PathNodes_Position;
    char pad_25[7];
    char m_PathNodes_Position[1]; // 0x4f8
    // CNetworkUtlVectorBase< Vector > m_PathNodes_TangentIn;
    char pad_26[23];
    char m_PathNodes_TangentIn[1]; // 0x510
    // CNetworkUtlVectorBase< Vector > m_PathNodes_TangentOut;
    char pad_27[23];
    char m_PathNodes_TangentOut[1]; // 0x528
    // CNetworkUtlVectorBase< Vector > m_PathNodes_Color;
    char pad_28[23];
    char m_PathNodes_Color[1]; // 0x540
    // CNetworkUtlVectorBase< bool > m_PathNodes_PinEnabled;
    char pad_29[23];
    char m_PathNodes_PinEnabled[1]; // 0x558
    // CNetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale;
    char pad_30[23];
    char m_PathNodes_RadiusScale[1]; // 0x570
    char pad_031[31];
}; // size: 0x590

class __declspec(align(8)) CPathParticleRopeAlias_path_particle_rope_clientside : public CPathParticleRope {
public:
}; // size: 0x590

class __declspec(align(16)) CPathNode : public CPointEntity {
public:
    Vector m_vInTangentLocal; // 0x4a8
    Vector m_vOutTangentLocal; // 0x4b4
    // CUtlString m_strParentPathUniqueID;
    char m_strParentPathUniqueID[1]; // 0x4c0
    // CUtlString m_strPathNodeParameter;
    char pad_21[7];
    char m_strPathNodeParameter[1]; // 0x4c8
    // CTransform m_xWSPrevParent;
    char pad_22[7];
    char m_xWSPrevParent[1]; // 0x4d0
    // CHandle< CPathWithDynamicNodes > m_hPath;
    char pad_23[31];
    char m_hPath[1]; // 0x4f0
    char pad_024[15];
}; // size: 0x500

class __declspec(align(8)) CEnvSoundscapeProxy : public CEnvSoundscape {
public:
    // CUtlSymbolLarge m_MainSoundscapeName;
    char m_MainSoundscapeName[1]; // 0x538
    char pad_029[7];
}; // size: 0x540

class __declspec(align(8)) CFuncWall : public CBaseModelEntity {
public:
    int32_t m_nState; // 0x730
    char pad_031[4];
}; // size: 0x738

class __declspec(align(8)) CFuncWallToggle : public CFuncWall {
public:
}; // size: 0x738

class __declspec(align(8)) CFuncVehicleClip : public CBaseModelEntity {
public:
}; // size: 0x730

class __declspec(align(8)) CFuncIllusionary : public CBaseModelEntity {
public:
}; // size: 0x730

class __declspec(align(8)) CFuncVPhysicsClip : public CBaseModelEntity {
public:
    bool m_bDisabled; // 0x730
    char pad_031[7];
}; // size: 0x738

class __declspec(align(8)) CFuncInteractionLayerClip : public CBaseModelEntity {
public:
    bool m_bDisabled; // 0x730
    // CUtlSymbolLarge m_iszInteractsAs;
    char pad_31[7];
    char m_iszInteractsAs[1]; // 0x738
    // CUtlSymbolLarge m_iszInteractsWith;
    char pad_32[7];
    char m_iszInteractsWith[1]; // 0x740
    char pad_033[7];
}; // size: 0x748

class __declspec(align(8)) CPointClientCommand : public CPointEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CPointServerCommand : public CPointEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CPointBroadcastClientCommand : public CPointEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CCommentaryAuto : public CBaseEntity {
public:
    CEntityIOOutput m_OnCommentaryNewGame; // 0x4a8
    CEntityIOOutput m_OnCommentaryMidGame; // 0x4c0
    CEntityIOOutput m_OnCommentaryMultiplayerSpawn; // 0x4d8
}; // size: 0x4f0

class __declspec(align(8)) CDynamicLight : public CBaseModelEntity {
public:
    uint8_t m_ActualFlags; // 0x730
    uint8_t m_Flags; // 0x731
    uint8_t m_LightStyle; // 0x732
    bool m_On; // 0x733
    float m_Radius; // 0x734
    int32_t m_Exponent; // 0x738
    float m_InnerAngle; // 0x73c
    float m_OuterAngle; // 0x740
    float m_SpotRadius; // 0x744
}; // size: 0x748

class __declspec(align(8)) CBeam : public CBaseModelEntity {
public:
    float m_flFrameRate; // 0x730
    float m_flHDRColorScale; // 0x734
    GameTime_t m_flFireTime; // 0x738
    float m_flDamage; // 0x73c
    uint8_t m_nNumBeamEnts; // 0x740
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial;
    char pad_31[7];
    char m_hBaseMaterial[1]; // 0x748
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex;
    char pad_32[7];
    char m_nHaloIndex[1]; // 0x750
    char pad_33[4];
    BeamType_t m_nBeamType; // 0x758
    uint32_t m_nBeamFlags; // 0x75c
    // CHandle< CBaseEntity >[10] m_hAttachEntity;
    char m_hAttachEntity[1]; // 0x760
    char pad_34[39];
    AttachmentHandle_t m_nAttachIndex; // 0x788
    char pad_35[8];
    float m_fWidth; // 0x794
    float m_fEndWidth; // 0x798
    float m_fFadeLength; // 0x79c
    float m_fHaloScale; // 0x7a0
    float m_fAmplitude; // 0x7a4
    float m_fStartFrame; // 0x7a8
    float m_fSpeed; // 0x7ac
    float m_flFrame; // 0x7b0
    BeamClipStyle_t m_nClipStyle; // 0x7b4
    bool m_bTurnedOff; // 0x7b8
    // VectorWS m_vecEndPos;
    char pad_36[3];
    char m_vecEndPos[1]; // 0x7bc
    // CHandle< CBaseEntity > m_hEndEntity;
    char pad_37[11];
    char m_hEndEntity[1]; // 0x7c8
    int32_t m_nDissolveType; // 0x7cc
}; // size: 0x7d0

class __declspec(align(8)) CTestEffect : public CBaseEntity {
public:
    int32_t m_iLoop; // 0x4a8
    int32_t m_iBeam; // 0x4ac
    // CHandle< CBeam >[24] m_pBeam;
    char m_pBeam[1]; // 0x4b0
    char pad_21[92];
    GameTime_t m_flBeamTime; // 0x510
    char pad_22[92];
    GameTime_t m_flStartTime; // 0x570
    char pad_023[4];
}; // size: 0x578

class __declspec(align(8)) CBlood : public CPointEntity {
public:
    QAngle m_vecSprayAngles; // 0x4a8
    Vector m_vecSprayDir; // 0x4b4
    float m_flAmount; // 0x4c0
    BloodType m_Color; // 0x4c4
}; // size: 0x4c8

class __declspec(align(8)) CEnvBeverage : public CBaseEntity {
public:
    bool m_CanInDispenser; // 0x4a8
    int32_t m_nBeverageType; // 0x4ac
}; // size: 0x4b0

class __declspec(align(8)) CPrecipitationBlocker : public CBaseModelEntity {
public:
}; // size: 0x730

class __declspec(align(8)) CEnvWind : public CBaseEntity {
public:
    CEnvWindShared m_EnvWindShared; // 0x4a8
}; // size: 0x5d8

class __declspec(align(8)) CPhysicsWire : public CBaseEntity {
public:
    int32_t m_nDensity; // 0x4a8
    char pad_021[4];
}; // size: 0x4b0

class __declspec(align(8)) CEnvMuzzleFlash : public CPointEntity {
public:
    float m_flScale; // 0x4a8
    // CUtlSymbolLarge m_iszParentAttachment;
    char pad_21[4];
    char m_iszParentAttachment[1]; // 0x4b0
    char pad_022[7];
}; // size: 0x4b8

class __declspec(align(8)) CEnvSplash : public CPointEntity {
public:
    float m_flScale; // 0x4a8
    char pad_021[4];
}; // size: 0x4b0

class __declspec(align(8)) CEnvViewPunch : public CPointEntity {
public:
    float m_flRadius; // 0x4a8
    QAngle m_angViewPunch; // 0x4ac
}; // size: 0x4b8

class __declspec(align(8)) CEnvEntityIgniter : public CBaseEntity {
public:
    float m_flLifetime; // 0x4a8
    char pad_021[4];
}; // size: 0x4b0

class __declspec(align(8)) CDebugHistory : public CBaseEntity {
public:
    char pad_21[4096064];
    int32_t m_nNpcEvents; // 0x3e84e8
    char pad_022[4004];
}; // size: 0x3e9490

class __declspec(align(8)) CEnvEntityMaker : public CPointEntity {
public:
    Vector m_vecEntityMins; // 0x4a8
    Vector m_vecEntityMaxs; // 0x4b4
    // CHandle< CBaseEntity > m_hCurrentInstance;
    char m_hCurrentInstance[1]; // 0x4c0
    // CHandle< CBaseEntity > m_hCurrentBlocker;
    char pad_21[3];
    char m_hCurrentBlocker[1]; // 0x4c4
    Vector m_vecBlockerOrigin; // 0x4c8
    QAngle m_angPostSpawnDirection; // 0x4d4
    float m_flPostSpawnDirectionVariance; // 0x4e0
    float m_flPostSpawnSpeed; // 0x4e4
    bool m_bPostSpawnUseAngles; // 0x4e8
    // CUtlSymbolLarge m_iszTemplate;
    char pad_22[7];
    char m_iszTemplate[1]; // 0x4f0
    char pad_23[7];
    CEntityIOOutput m_pOutputOnSpawned; // 0x4f8
    CEntityIOOutput m_pOutputOnFailedSpawn; // 0x510
}; // size: 0x528

class __declspec(align(8)) CInfoInstructorHintTarget : public CPointEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CEnvInstructorHint : public CPointEntity {
public:
    // CUtlSymbolLarge m_iszName;
    char m_iszName[1]; // 0x4a8
    // CUtlSymbolLarge m_iszReplace_Key;
    char pad_21[7];
    char m_iszReplace_Key[1]; // 0x4b0
    // CUtlSymbolLarge m_iszHintTargetEntity;
    char pad_22[7];
    char m_iszHintTargetEntity[1]; // 0x4b8
    char pad_23[4];
    int32_t m_iTimeout; // 0x4c0
    int32_t m_iDisplayLimit; // 0x4c4
    // CUtlSymbolLarge m_iszIcon_Onscreen;
    char m_iszIcon_Onscreen[1]; // 0x4c8
    // CUtlSymbolLarge m_iszIcon_Offscreen;
    char pad_24[7];
    char m_iszIcon_Offscreen[1]; // 0x4d0
    // CUtlSymbolLarge m_iszCaption;
    char pad_25[7];
    char m_iszCaption[1]; // 0x4d8
    // CUtlSymbolLarge m_iszActivatorCaption;
    char pad_26[7];
    char m_iszActivatorCaption[1]; // 0x4e0
    // Color m_Color;
    char pad_27[7];
    char m_Color[1]; // 0x4e8
    float m_fIconOffset; // 0x4ec
    float m_fRange; // 0x4f0
    uint8_t m_iPulseOption; // 0x4f4
    uint8_t m_iAlphaOption; // 0x4f5
    uint8_t m_iShakeOption; // 0x4f6
    bool m_bStatic; // 0x4f7
    bool m_bNoOffscreen; // 0x4f8
    bool m_bForceCaption; // 0x4f9
    int32_t m_iInstanceType; // 0x4fc
    bool m_bSuppressRest; // 0x500
    // CUtlSymbolLarge m_iszBinding;
    char pad_28[7];
    char m_iszBinding[1]; // 0x508
    char pad_29[7];
    bool m_bAllowNoDrawTarget; // 0x510
    bool m_bAutoStart; // 0x511
    bool m_bLocalPlayerOnly; // 0x512
    char pad_030[5];
}; // size: 0x518

class __declspec(align(8)) CEnvInstructorVRHint : public CPointEntity {
public:
    // CUtlSymbolLarge m_iszName;
    char m_iszName[1]; // 0x4a8
    // CUtlSymbolLarge m_iszHintTargetEntity;
    char pad_21[7];
    char m_iszHintTargetEntity[1]; // 0x4b0
    char pad_22[4];
    int32_t m_iTimeout; // 0x4b8
    // CUtlSymbolLarge m_iszCaption;
    char pad_23[4];
    char m_iszCaption[1]; // 0x4c0
    // CUtlSymbolLarge m_iszStartSound;
    char pad_24[7];
    char m_iszStartSound[1]; // 0x4c8
    char pad_25[4];
    int32_t m_iLayoutFileType; // 0x4d0
    // CUtlSymbolLarge m_iszCustomLayoutFile;
    char pad_26[4];
    char m_iszCustomLayoutFile[1]; // 0x4d8
    char pad_27[4];
    int32_t m_iAttachType; // 0x4e0
    float m_flHeightOffset; // 0x4e4
}; // size: 0x4e8

class __declspec(align(8)) CInstructorEventEntity : public CPointEntity {
public:
    // CUtlSymbolLarge m_iszName;
    char m_iszName[1]; // 0x4a8
    // CUtlSymbolLarge m_iszHintTargetEntity;
    char pad_21[7];
    char m_iszHintTargetEntity[1]; // 0x4b0
    // CHandle< CBasePlayerPawn > m_hTargetPlayer;
    char pad_22[7];
    char m_hTargetPlayer[1]; // 0x4b8
    char pad_023[7];
}; // size: 0x4c0

class __declspec(align(8)) CEnvFade : public CLogicalEntity {
public:
    // Color m_fadeColor;
    char m_fadeColor[1]; // 0x4a8
    float m_Duration; // 0x4ac
    float m_HoldDuration; // 0x4b0
    char pad_21[4];
    CEntityIOOutput m_OnBeginFade; // 0x4b8
}; // size: 0x4d0

class __declspec(align(8)) CCredits : public CPointEntity {
public:
    CEntityIOOutput m_OnCreditsDone; // 0x4a8
    bool m_bRolledOutroCredits; // 0x4c0
    float m_flLogoLength; // 0x4c4
}; // size: 0x4c8

class __declspec(align(8)) CEnvShake : public CPointEntity {
public:
    // CUtlSymbolLarge m_limitToEntity;
    char m_limitToEntity[1]; // 0x4a8
    char pad_21[4];
    float m_Amplitude; // 0x4b0
    float m_Frequency; // 0x4b4
    float m_Duration; // 0x4b8
    float m_Radius; // 0x4bc
    GameTime_t m_stopTime; // 0x4c0
    GameTime_t m_nextShake; // 0x4c4
    float m_currentAmp; // 0x4c8
    Vector m_maxForce; // 0x4cc
    char pad_22[8];
    CPhysicsShake m_shakeCallback; // 0x4e0
}; // size: 0x4f8

class __declspec(align(8)) CEnvTilt : public CPointEntity {
public:
    float m_Duration; // 0x4a8
    float m_Radius; // 0x4ac
    float m_TiltTime; // 0x4b0
    GameTime_t m_stopTime; // 0x4b4
}; // size: 0x4b8

class __declspec(align(8)) CEnvSpark : public CPointEntity {
public:
    float m_flDelay; // 0x4a8
    int32_t m_nMagnitude; // 0x4ac
    int32_t m_nTrailLength; // 0x4b0
    int32_t m_nType; // 0x4b4
    CEntityIOOutput m_OnSpark; // 0x4b8
}; // size: 0x4d0

class __declspec(align(8)) CShower : public CModelPointEntity {
public:
}; // size: 0x730

class __declspec(align(8)) CEnvExplosion : public CModelPointEntity {
public:
    int32_t m_iMagnitude; // 0x730
    float m_flPlayerDamage; // 0x734
    int32_t m_iRadiusOverride; // 0x738
    float m_flInnerRadius; // 0x73c
    float m_flDamageForce; // 0x740
    // CHandle< CBaseEntity > m_hInflictor;
    char m_hInflictor[1]; // 0x744
    DamageTypes_t m_iCustomDamageType; // 0x748
    bool m_bCreateDebris; // 0x74c
    // CUtlSymbolLarge m_iszCustomEffectName;
    char pad_31[11];
    char m_iszCustomEffectName[1]; // 0x758
    // CUtlSymbolLarge m_iszCustomSoundName;
    char pad_32[7];
    char m_iszCustomSoundName[1]; // 0x760
    char pad_33[7];
    bool m_bSuppressParticleImpulse; // 0x768
    Class_T m_iClassIgnore; // 0x76c
    Class_T m_iClassIgnore2; // 0x770
    // CUtlSymbolLarge m_iszEntityIgnoreName;
    char pad_34[4];
    char m_iszEntityIgnoreName[1]; // 0x778
    // CHandle< CBaseEntity > m_hEntityIgnore;
    char pad_35[7];
    char m_hEntityIgnore[1]; // 0x780
    char pad_036[7];
}; // size: 0x788

class __declspec(align(8)) CFuncTimescale : public CBaseEntity {
public:
    float m_flDesiredTimescale; // 0x4a8
    float m_flAcceleration; // 0x4ac
    float m_flMinBlendRate; // 0x4b0
    float m_flBlendDeltaMultiplier; // 0x4b4
    bool m_isStarted; // 0x4b8
    char pad_021[7];
}; // size: 0x4c0

class __declspec(align(8)) CLogicAchievement : public CLogicalEntity {
public:
    bool m_bDisabled; // 0x4a8
    // CUtlSymbolLarge m_iszAchievementEventID;
    char pad_21[7];
    char m_iszAchievementEventID[1]; // 0x4b0
    char pad_22[7];
    CEntityIOOutput m_OnFired; // 0x4b8
}; // size: 0x4d0

class __declspec(align(8)) CLogicGameEventListener : public CLogicalEntity {
public:
    char pad_21[16];
    CEntityIOOutput m_OnEventFired; // 0x4b8
    // CUtlSymbolLarge m_iszGameEventName;
    char m_iszGameEventName[1]; // 0x4d0
    // CUtlSymbolLarge m_iszGameEventItem;
    char pad_22[7];
    char m_iszGameEventItem[1]; // 0x4d8
    char pad_23[7];
    bool m_bEnabled; // 0x4e0
    bool m_bStartDisabled; // 0x4e1
    char pad_024[6];
}; // size: 0x4e8

class __declspec(align(8)) CLogicMeasureMovement : public CLogicalEntity {
public:
    // CUtlSymbolLarge m_strMeasureTarget;
    char m_strMeasureTarget[1]; // 0x4a8
    // CUtlSymbolLarge m_strMeasureReference;
    char pad_21[7];
    char m_strMeasureReference[1]; // 0x4b0
    // CUtlSymbolLarge m_strTargetReference;
    char pad_22[7];
    char m_strTargetReference[1]; // 0x4b8
    // CHandle< CBaseEntity > m_hMeasureTarget;
    char pad_23[7];
    char m_hMeasureTarget[1]; // 0x4c0
    // CHandle< CBaseEntity > m_hMeasureReference;
    char pad_24[3];
    char m_hMeasureReference[1]; // 0x4c4
    // CHandle< CBaseEntity > m_hTarget;
    char pad_25[3];
    char m_hTarget[1]; // 0x4c8
    // CHandle< CBaseEntity > m_hTargetReference;
    char pad_26[3];
    char m_hTargetReference[1]; // 0x4cc
    float m_flScale; // 0x4d0
    int32_t m_nMeasureType; // 0x4d4
}; // size: 0x4d8

class __declspec(align(8)) CLogicNavigation : public CLogicalEntity {
public:
    char pad_21[8];
    bool m_isOn; // 0x4b0
    navproperties_t m_navProperty; // 0x4b4
}; // size: 0x4b8

class __declspec(align(8)) CLogicNPCCounter : public CBaseEntity {
public:
    CEntityIOOutput m_OnMinCountAll; // 0x4a8
    CEntityIOOutput m_OnMaxCountAll; // 0x4c0
    // CEntityOutputTemplate< float32, float32 > m_OnFactorAll;
    char m_OnFactorAll[1]; // 0x4d8
    // CEntityOutputTemplate< float32, float32 > m_OnMinPlayerDistAll;
    char pad_21[31];
    char m_OnMinPlayerDistAll[1]; // 0x4f8
    char pad_22[31];
    CEntityIOOutput m_OnMinCount_1; // 0x518
    CEntityIOOutput m_OnMaxCount_1; // 0x530
    // CEntityOutputTemplate< float32, float32 > m_OnFactor_1;
    char m_OnFactor_1[1]; // 0x548
    // CEntityOutputTemplate< float32, float32 > m_OnMinPlayerDist_1;
    char pad_23[31];
    char m_OnMinPlayerDist_1[1]; // 0x568
    char pad_24[31];
    CEntityIOOutput m_OnMinCount_2; // 0x588
    CEntityIOOutput m_OnMaxCount_2; // 0x5a0
    // CEntityOutputTemplate< float32, float32 > m_OnFactor_2;
    char m_OnFactor_2[1]; // 0x5b8
    // CEntityOutputTemplate< float32, float32 > m_OnMinPlayerDist_2;
    char pad_25[31];
    char m_OnMinPlayerDist_2[1]; // 0x5d8
    char pad_26[31];
    CEntityIOOutput m_OnMinCount_3; // 0x5f8
    CEntityIOOutput m_OnMaxCount_3; // 0x610
    // CEntityOutputTemplate< float32, float32 > m_OnFactor_3;
    char m_OnFactor_3[1]; // 0x628
    // CEntityOutputTemplate< float32, float32 > m_OnMinPlayerDist_3;
    char pad_27[31];
    char m_OnMinPlayerDist_3[1]; // 0x648
    // CEntityHandle m_hSource;
    char pad_28[31];
    char m_hSource[1]; // 0x668
    // CUtlSymbolLarge m_iszSourceEntityName;
    char pad_29[7];
    char m_iszSourceEntityName[1]; // 0x670
    char pad_30[4];
    float m_flDistanceMax; // 0x678
    bool m_bDisabled; // 0x67c
    int32_t m_nMinCountAll; // 0x680
    int32_t m_nMaxCountAll; // 0x684
    int32_t m_nMinFactorAll; // 0x688
    int32_t m_nMaxFactorAll; // 0x68c
    // CUtlSymbolLarge m_iszNPCClassname_1;
    char pad_31[8];
    char m_iszNPCClassname_1[1]; // 0x698
    char pad_32[4];
    int32_t m_nNPCState_1; // 0x6a0
    bool m_bInvertState_1; // 0x6a4
    int32_t m_nMinCount_1; // 0x6a8
    int32_t m_nMaxCount_1; // 0x6ac
    int32_t m_nMinFactor_1; // 0x6b0
    int32_t m_nMaxFactor_1; // 0x6b4
    char pad_33[4];
    float m_flDefaultDist_1; // 0x6bc
    // CUtlSymbolLarge m_iszNPCClassname_2;
    char m_iszNPCClassname_2[1]; // 0x6c0
    char pad_34[4];
    int32_t m_nNPCState_2; // 0x6c8
    bool m_bInvertState_2; // 0x6cc
    int32_t m_nMinCount_2; // 0x6d0
    int32_t m_nMaxCount_2; // 0x6d4
    int32_t m_nMinFactor_2; // 0x6d8
    int32_t m_nMaxFactor_2; // 0x6dc
    char pad_35[4];
    float m_flDefaultDist_2; // 0x6e4
    // CUtlSymbolLarge m_iszNPCClassname_3;
    char m_iszNPCClassname_3[1]; // 0x6e8
    char pad_36[4];
    int32_t m_nNPCState_3; // 0x6f0
    bool m_bInvertState_3; // 0x6f4
    int32_t m_nMinCount_3; // 0x6f8
    int32_t m_nMaxCount_3; // 0x6fc
    int32_t m_nMinFactor_3; // 0x700
    int32_t m_nMaxFactor_3; // 0x704
    char pad_37[4];
    float m_flDefaultDist_3; // 0x70c
    char pad_038[24];
}; // size: 0x728

class __declspec(align(8)) CLogicNPCCounterAABB : public CLogicNPCCounter {
public:
    Vector m_vDistanceOuterMins; // 0x728
    Vector m_vDistanceOuterMaxs; // 0x734
    Vector m_vOuterMins; // 0x740
    Vector m_vOuterMaxs; // 0x74c
}; // size: 0x758

class __declspec(align(8)) CLogicNPCCounterOBB : public CLogicNPCCounterAABB {
public:
}; // size: 0x758

class __declspec(align(8)) CLogicPlayerProxy : public CLogicalEntity {
public:
    CEntityIOOutput m_PlayerHasAmmo; // 0x4a8
    CEntityIOOutput m_PlayerHasNoAmmo; // 0x4c0
    CEntityIOOutput m_PlayerDied; // 0x4d8
    // CEntityOutputTemplate< int32, int32 > m_RequestedPlayerHealth;
    char m_RequestedPlayerHealth[1]; // 0x4f0
    // CHandle< CBaseEntity > m_hPlayer;
    char pad_21[31];
    char m_hPlayer[1]; // 0x510
    char pad_022[7];
}; // size: 0x518

class __declspec(align(8)) CLogicAuto : public CBaseEntity {
public:
    CEntityIOOutput m_OnMapSpawn; // 0x4a8
    CEntityIOOutput m_OnDemoMapSpawn; // 0x4c0
    CEntityIOOutput m_OnNewGame; // 0x4d8
    CEntityIOOutput m_OnLoadGame; // 0x4f0
    CEntityIOOutput m_OnMapTransition; // 0x508
    CEntityIOOutput m_OnBackgroundMap; // 0x520
    CEntityIOOutput m_OnMultiNewMap; // 0x538
    CEntityIOOutput m_OnMultiNewRound; // 0x550
    CEntityIOOutput m_OnVREnabled; // 0x568
    CEntityIOOutput m_OnVRNotEnabled; // 0x580
    // CUtlSymbolLarge m_globalstate;
    char m_globalstate[1]; // 0x598
    char pad_021[7];
}; // size: 0x5a0

class __declspec(align(8)) CLogicScript : public CPointEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CTimerEntity : public CLogicalEntity {
public:
    CEntityIOOutput m_OnTimer; // 0x4a8
    CEntityIOOutput m_OnTimerHigh; // 0x4c0
    CEntityIOOutput m_OnTimerLow; // 0x4d8
    int32_t m_iDisabled; // 0x4f0
    float m_flInitialDelay; // 0x4f4
    float m_flRefireTime; // 0x4f8
    bool m_bUpDownState; // 0x4fc
    int32_t m_iUseRandomTime; // 0x500
    bool m_bPauseAfterFiring; // 0x504
    float m_flLowerRandomBound; // 0x508
    float m_flUpperRandomBound; // 0x50c
    float m_flRemainingTime; // 0x510
    bool m_bPaused; // 0x514
    char pad_021[3];
}; // size: 0x518

class __declspec(align(8)) CLogicLineToEntity : public CLogicalEntity {
public:
    // CEntityOutputTemplate< Vector, Vector > m_Line;
    char m_Line[1]; // 0x4a8
    // CUtlSymbolLarge m_SourceName;
    char pad_21[39];
    char m_SourceName[1]; // 0x4d0
    // CHandle< CBaseEntity > m_StartEntity;
    char pad_22[7];
    char m_StartEntity[1]; // 0x4d8
    // CHandle< CBaseEntity > m_EndEntity;
    char pad_23[3];
    char m_EndEntity[1]; // 0x4dc
    char pad_024[3];
}; // size: 0x4e0

class __declspec(align(8)) CMathRemap : public CLogicalEntity {
public:
    float m_flInMin; // 0x4a8
    float m_flInMax; // 0x4ac
    float m_flOut1; // 0x4b0
    float m_flOut2; // 0x4b4
    float m_flOldInValue; // 0x4b8
    bool m_bEnabled; // 0x4bc
    // CEntityOutputTemplate< float32, float32 > m_OutValue;
    char pad_21[3];
    char m_OutValue[1]; // 0x4c0
    char pad_22[31];
    CEntityIOOutput m_OnRoseAboveMin; // 0x4e0
    CEntityIOOutput m_OnRoseAboveMax; // 0x4f8
    CEntityIOOutput m_OnFellBelowMin; // 0x510
    CEntityIOOutput m_OnFellBelowMax; // 0x528
}; // size: 0x540

class __declspec(align(8)) CMathColorBlend : public CLogicalEntity {
public:
    float m_flInMin; // 0x4a8
    float m_flInMax; // 0x4ac
    // Color m_OutColor1;
    char m_OutColor1[1]; // 0x4b0
    // Color m_OutColor2;
    char pad_21[3];
    char m_OutColor2[1]; // 0x4b4
    // CEntityOutputTemplate< Color, Color > m_OutValue;
    char pad_22[3];
    char m_OutValue[1]; // 0x4b8
    char pad_023[31];
}; // size: 0x4d8

class __declspec(align(8)) CEnvGlobal : public CLogicalEntity {
public:
    // CEntityOutputTemplate< int32, int32 > m_outCounter;
    char m_outCounter[1]; // 0x4a8
    // CUtlSymbolLarge m_globalstate;
    char pad_21[31];
    char m_globalstate[1]; // 0x4c8
    char pad_22[4];
    int32_t m_triggermode; // 0x4d0
    int32_t m_initialstate; // 0x4d4
    int32_t m_counter; // 0x4d8
    char pad_023[4];
}; // size: 0x4e0

class __declspec(align(8)) CMultiSource : public CLogicalEntity {
public:
    // CHandle< CBaseEntity >[32] m_rgEntities;
    char m_rgEntities[1]; // 0x4a8
    char pad_21[124];
    int32_t m_rgTriggered[32]; // 0x528
    CEntityIOOutput m_OnTrigger; // 0x5a8
    int32_t m_iTotal; // 0x5c0
    // CUtlSymbolLarge m_globalstate;
    char pad_22[4];
    char m_globalstate[1]; // 0x5c8
    char pad_023[7];
}; // size: 0x5d0

class __declspec(align(8)) CMathCounter : public CLogicalEntity {
public:
    float m_flMin; // 0x4a8
    float m_flMax; // 0x4ac
    bool m_bHitMin; // 0x4b0
    bool m_bHitMax; // 0x4b1
    bool m_bDisabled; // 0x4b2
    // CEntityOutputTemplate< float32, float32 > m_OutValue;
    char pad_21[5];
    char m_OutValue[1]; // 0x4b8
    // CEntityOutputTemplate< float32, float32 > m_OnGetValue;
    char pad_22[31];
    char m_OnGetValue[1]; // 0x4d8
    char pad_23[31];
    CEntityIOOutput m_OnHitMin; // 0x4f8
    CEntityIOOutput m_OnHitMax; // 0x510
    CEntityIOOutput m_OnChangedFromMin; // 0x528
    CEntityIOOutput m_OnChangedFromMax; // 0x540
}; // size: 0x558

class __declspec(align(8)) CLogicCase : public CLogicalEntity {
public:
    // CUtlSymbolLarge[32] m_nCase;
    char m_nCase[1]; // 0x4a8
    char pad_21[252];
    int32_t m_nShuffleCases; // 0x5a8
    int32_t m_nLastShuffleCase; // 0x5ac
    uint8_t m_uchShuffleCaseMap[32]; // 0x5b0
    CEntityIOOutput m_OnCase; // 0x5d0
    // CEntityOutputTemplate< CUtlString, char* > m_OnDefault;
    char pad_22[744];
    char m_OnDefault[1]; // 0x8d0
    char pad_023[31];
}; // size: 0x8f0

class __declspec(align(8)) CLogicCompare : public CLogicalEntity {
public:
    float m_flInValue; // 0x4a8
    float m_flCompareValue; // 0x4ac
    // CEntityOutputTemplate< float32, float32 > m_OnLessThan;
    char m_OnLessThan[1]; // 0x4b0
    // CEntityOutputTemplate< float32, float32 > m_OnEqualTo;
    char pad_21[31];
    char m_OnEqualTo[1]; // 0x4d0
    // CEntityOutputTemplate< float32, float32 > m_OnNotEqualTo;
    char pad_22[31];
    char m_OnNotEqualTo[1]; // 0x4f0
    // CEntityOutputTemplate< float32, float32 > m_OnGreaterThan;
    char pad_23[31];
    char m_OnGreaterThan[1]; // 0x510
    char pad_024[31];
}; // size: 0x530

class __declspec(align(8)) CLogicAutosave : public CLogicalEntity {
public:
    bool m_bForceNewLevelUnit; // 0x4a8
    int32_t m_minHitPoints; // 0x4ac
    int32_t m_minHitPointsToCommit; // 0x4b0
    char pad_021[4];
}; // size: 0x4b8

class __declspec(align(8)) CLogicActiveAutosave : public CLogicAutosave {
public:
    int32_t m_TriggerHitPoints; // 0x4b8
    float m_flTimeToTrigger; // 0x4bc
    GameTime_t m_flStartTime; // 0x4c0
    float m_flDangerousTime; // 0x4c4
}; // size: 0x4c8

class __declspec(align(8)) CLogicDistanceAutosave : public CLogicalEntity {
public:
    // CUtlSymbolLarge m_iszTargetEntity;
    char m_iszTargetEntity[1]; // 0x4a8
    char pad_21[4];
    float m_flDistanceToPlayer; // 0x4b0
    bool m_bForceNewLevelUnit; // 0x4b4
    bool m_bCheckCough; // 0x4b5
    bool m_bThinkDangerous; // 0x4b6
    float m_flDangerousTime; // 0x4b8
    char pad_022[4];
}; // size: 0x4c0

class __declspec(align(8)) CLogicCollisionPair : public CLogicalEntity {
public:
    // CUtlSymbolLarge m_nameAttach1;
    char m_nameAttach1[1]; // 0x4a8
    // CUtlSymbolLarge m_nameAttach2;
    char pad_21[7];
    char m_nameAttach2[1]; // 0x4b0
    char pad_22[7];
    bool m_includeHierarchy; // 0x4b8
    bool m_supportMultipleEntitiesWithSameName; // 0x4b9
    bool m_disabled; // 0x4ba
    bool m_succeeded; // 0x4bb
    char pad_023[4];
}; // size: 0x4c0

class __declspec(align(8)) CLogicBranchList : public CLogicalEntity {
public:
    // CUtlSymbolLarge[16] m_nLogicBranchNames;
    char m_nLogicBranchNames[1]; // 0x4a8
    // CUtlVector< CHandle< CBaseEntity > > m_LogicBranchList;
    char pad_21[127];
    char m_LogicBranchList[1]; // 0x528
    // CLogicBranchList::LogicBranchListenerLastState_t m_eLastState;
    char pad_22[23];
    char m_eLastState[1]; // 0x540
    char pad_23[7];
    CEntityIOOutput m_OnAllTrue; // 0x548
    CEntityIOOutput m_OnAllFalse; // 0x560
    CEntityIOOutput m_OnMixed; // 0x578
}; // size: 0x590

class __declspec(align(8)) CLogicGameEvent : public CLogicalEntity {
public:
    // CUtlSymbolLarge m_iszEventName;
    char m_iszEventName[1]; // 0x4a8
    char pad_021[7];
}; // size: 0x4b0

class __declspec(align(8)) CMessageEntity : public CPointEntity {
public:
    int32_t m_radius; // 0x4a8
    // CUtlSymbolLarge m_messageText;
    char pad_21[4];
    char m_messageText[1]; // 0x4b0
    char pad_22[7];
    bool m_drawText; // 0x4b8
    bool m_bDeveloperOnly; // 0x4b9
    bool m_bEnabled; // 0x4ba
    char pad_023[5];
}; // size: 0x4c0

class __declspec(align(8)) CTriggerBrush : public CBaseModelEntity {
public:
    CEntityIOOutput m_OnStartTouch; // 0x730
    CEntityIOOutput m_OnEndTouch; // 0x748
    CEntityIOOutput m_OnUse; // 0x760
    int32_t m_iInputFilter; // 0x778
    int32_t m_iDontMessageParent; // 0x77c
}; // size: 0x780

class __declspec(align(16)) CPathKeyFrame : public CLogicalEntity {
public:
    Vector m_Origin; // 0x4a8
    QAngle m_Angles; // 0x4b4
    // Quaternion m_qAngle;
    char m_qAngle[1]; // 0x4c0
    // CUtlSymbolLarge m_iNextKey;
    char pad_21[15];
    char m_iNextKey[1]; // 0x4d0
    char pad_22[4];
    float m_flNextTime; // 0x4d8
    CPathKeyFrame* m_pNextKey; // 0x4e0
    CPathKeyFrame* m_pPrevKey; // 0x4e8
    float m_flMoveSpeed; // 0x4f0
    char pad_023[12];
}; // size: 0x500

class __declspec(align(16)) CBaseMoveBehavior : public CPathKeyFrame {
public:
    int32_t m_iPositionInterpolator; // 0x500
    int32_t m_iRotationInterpolator; // 0x504
    float m_flAnimStartTime; // 0x508
    float m_flAnimEndTime; // 0x50c
    float m_flAverageSpeedAcrossFrame; // 0x510
    CPathKeyFrame* m_pCurrentKeyFrame; // 0x518
    CPathKeyFrame* m_pTargetKeyFrame; // 0x520
    CPathKeyFrame* m_pPreKeyFrame; // 0x528
    CPathKeyFrame* m_pPostKeyFrame; // 0x530
    float m_flTimeIntoFrame; // 0x538
    int32_t m_iDirection; // 0x53c
}; // size: 0x540

class __declspec(align(8)) CPathCorner : public CPointEntity {
public:
    float m_flWait; // 0x4a8
    float m_flRadius; // 0x4ac
    CEntityIOOutput m_OnPass; // 0x4b0
}; // size: 0x4c8

class __declspec(align(8)) CPhysForce : public CPointEntity {
public:
    // CUtlSymbolLarge m_nameAttach;
    char pad_21[8];
    char m_nameAttach[1]; // 0x4b0
    char pad_22[4];
    float m_force; // 0x4b8
    float m_forceTime; // 0x4bc
    // CHandle< CBaseEntity > m_attachedObject;
    char m_attachedObject[1]; // 0x4c0
    char pad_23[3];
    bool m_wasRestored; // 0x4c4
    char pad_24[3];
    CConstantForceController m_integrator; // 0x4c8
}; // size: 0x508

class __declspec(align(8)) CPhysThruster : public CPhysForce {
public:
    Vector m_localOrigin; // 0x508
    char pad_025[4];
}; // size: 0x518

class __declspec(align(8)) CPhysTorque : public CPhysForce {
public:
    // VectorWS m_axis;
    char m_axis[1]; // 0x508
    char pad_025[15];
}; // size: 0x518

class __declspec(align(8)) CKeepUpright : public CPointEntity {
public:
    char pad_21[8];
    Vector m_worldGoalAxis; // 0x4b0
    Vector m_localTestAxis; // 0x4bc
    // CUtlSymbolLarge m_nameAttach;
    char pad_22[8];
    char m_nameAttach[1]; // 0x4d0
    // CHandle< CBaseEntity > m_attachedObject;
    char pad_23[7];
    char m_attachedObject[1]; // 0x4d8
    float m_angularLimit; // 0x4dc
    bool m_bActive; // 0x4e0
    bool m_bDampAllRotation; // 0x4e1
    char pad_024[6];
}; // size: 0x4e8

class __declspec(align(8)) CPhysConstraint : public CLogicalEntity {
public:
    // CUtlSymbolLarge m_nameAttach1;
    char pad_21[8];
    char m_nameAttach1[1]; // 0x4b0
    // CUtlSymbolLarge m_nameAttach2;
    char pad_22[7];
    char m_nameAttach2[1]; // 0x4b8
    // CHandle< CBaseEntity > m_hAttach1;
    char pad_23[7];
    char m_hAttach1[1]; // 0x4c0
    // CHandle< CBaseEntity > m_hAttach2;
    char pad_24[3];
    char m_hAttach2[1]; // 0x4c4
    // CUtlSymbolLarge m_nameAttachment1;
    char pad_25[3];
    char m_nameAttachment1[1]; // 0x4c8
    // CUtlSymbolLarge m_nameAttachment2;
    char pad_26[7];
    char m_nameAttachment2[1]; // 0x4d0
    // CUtlSymbolLarge m_breakSound;
    char pad_27[7];
    char m_breakSound[1]; // 0x4d8
    char pad_28[4];
    float m_forceLimit; // 0x4e0
    float m_torqueLimit; // 0x4e4
    float m_minTeleportDistance; // 0x4e8
    bool m_bSnapObjectPositions; // 0x4ec
    bool m_bTreatEntity1AsInfiniteMass; // 0x4ed
    char pad_29[2];
    CEntityIOOutput m_OnBreak; // 0x4f0
}; // size: 0x508

class __declspec(align(8)) CPhysHinge : public CPhysConstraint {
public:
    char pad_30[8];
    ConstraintSoundInfo m_soundInfo; // 0x510
    CEntityIOOutput m_NotifyMinLimitReached; // 0x5a8
    CEntityIOOutput m_NotifyMaxLimitReached; // 0x5c0
    bool m_bAtMinLimit; // 0x5d8
    bool m_bAtMaxLimit; // 0x5d9
    constraint_hingeparams_t m_hinge; // 0x5dc
    float m_hingeFriction; // 0x61c
    float m_systemLoadScale; // 0x620
    bool m_bIsAxisLocal; // 0x624
    float m_flMinRotation; // 0x628
    float m_flMaxRotation; // 0x62c
    float m_flInitialRotation; // 0x630
    float m_flMotorFrequency; // 0x634
    float m_flMotorDampingRatio; // 0x638
    float m_flAngleSpeed; // 0x63c
    float m_flAngleSpeedThreshold; // 0x640
    float m_flLimitsDebugVisRotation; // 0x644
    CEntityIOOutput m_OnStartMoving; // 0x648
    CEntityIOOutput m_OnStopMoving; // 0x660
}; // size: 0x678

class __declspec(align(8)) CPhysHingeAlias_phys_hinge_local : public CPhysHinge {
public:
}; // size: 0x678

class __declspec(align(8)) CPhysBallSocket : public CPhysConstraint {
public:
    float m_flJointFriction; // 0x508
    bool m_bEnableSwingLimit; // 0x50c
    float m_flSwingLimit; // 0x510
    bool m_bEnableTwistLimit; // 0x514
    float m_flMinTwistAngle; // 0x518
    float m_flMaxTwistAngle; // 0x51c
}; // size: 0x520

class __declspec(align(8)) CPhysSlideConstraint : public CPhysConstraint {
public:
    // VectorWS m_axisEnd;
    char pad_30[8];
    char m_axisEnd[1]; // 0x510
    char pad_31[8];
    float m_slideFriction; // 0x51c
    float m_systemLoadScale; // 0x520
    float m_initialOffset; // 0x524
    bool m_bEnableLinearConstraint; // 0x528
    bool m_bEnableAngularConstraint; // 0x529
    float m_flMotorFrequency; // 0x52c
    float m_flMotorDampingRatio; // 0x530
    bool m_bUseEntityPivot; // 0x534
    ConstraintSoundInfo m_soundInfo; // 0x538
}; // size: 0x5d0

class __declspec(align(8)) CPhysFixed : public CPhysConstraint {
public:
    float m_flLinearFrequency; // 0x508
    float m_flLinearDampingRatio; // 0x50c
    float m_flAngularFrequency; // 0x510
    float m_flAngularDampingRatio; // 0x514
    bool m_bEnableLinearConstraint; // 0x518
    bool m_bEnableAngularConstraint; // 0x519
    // CUtlSymbolLarge m_sBoneName1;
    char pad_30[6];
    char m_sBoneName1[1]; // 0x520
    // CUtlSymbolLarge m_sBoneName2;
    char pad_31[7];
    char m_sBoneName2[1]; // 0x528
    char pad_032[7];
}; // size: 0x530

class __declspec(align(8)) CPhysPulley : public CPhysConstraint {
public:
    // VectorWS m_position2;
    char m_position2[1]; // 0x508
    char pad_30[8];
    Vector m_offset; // 0x514
    char pad_31[12];
    float m_addLength; // 0x52c
    float m_gearRatio; // 0x530
    char pad_032[4];
}; // size: 0x538

class __declspec(align(8)) CPhysLength : public CPhysConstraint {
public:
    Vector m_offset; // 0x508
    // VectorWS m_vecAttach;
    char pad_30[12];
    char m_vecAttach[1]; // 0x520
    char pad_31[8];
    float m_addLength; // 0x52c
    float m_minLength; // 0x530
    float m_totalLength; // 0x534
}; // size: 0x538

class __declspec(align(8)) CRagdollConstraint : public CPhysConstraint {
public:
    float m_xmin; // 0x508
    float m_xmax; // 0x50c
    float m_ymin; // 0x510
    float m_ymax; // 0x514
    float m_zmin; // 0x518
    float m_zmax; // 0x51c
    float m_xfriction; // 0x520
    float m_yfriction; // 0x524
    float m_zfriction; // 0x528
    char pad_030[4];
}; // size: 0x530

class __declspec(align(8)) CGenericConstraint : public CPhysConstraint {
public:
    char pad_30[8];
    JointMotion_t m_nLinearMotionX; // 0x510
    JointMotion_t m_nLinearMotionY; // 0x514
    JointMotion_t m_nLinearMotionZ; // 0x518
    float m_flLinearFrequencyX; // 0x51c
    float m_flLinearFrequencyY; // 0x520
    float m_flLinearFrequencyZ; // 0x524
    float m_flLinearDampingRatioX; // 0x528
    float m_flLinearDampingRatioY; // 0x52c
    float m_flLinearDampingRatioZ; // 0x530
    float m_flMaxLinearImpulseX; // 0x534
    float m_flMaxLinearImpulseY; // 0x538
    float m_flMaxLinearImpulseZ; // 0x53c
    float m_flBreakAfterTimeX; // 0x540
    float m_flBreakAfterTimeY; // 0x544
    float m_flBreakAfterTimeZ; // 0x548
    GameTime_t m_flBreakAfterTimeStartTimeX; // 0x54c
    GameTime_t m_flBreakAfterTimeStartTimeY; // 0x550
    GameTime_t m_flBreakAfterTimeStartTimeZ; // 0x554
    float m_flBreakAfterTimeThresholdX; // 0x558
    float m_flBreakAfterTimeThresholdY; // 0x55c
    float m_flBreakAfterTimeThresholdZ; // 0x560
    float m_flNotifyForceX; // 0x564
    float m_flNotifyForceY; // 0x568
    float m_flNotifyForceZ; // 0x56c
    float m_flNotifyForceMinTimeX; // 0x570
    float m_flNotifyForceMinTimeY; // 0x574
    float m_flNotifyForceMinTimeZ; // 0x578
    GameTime_t m_flNotifyForceLastTimeX; // 0x57c
    GameTime_t m_flNotifyForceLastTimeY; // 0x580
    GameTime_t m_flNotifyForceLastTimeZ; // 0x584
    bool m_bAxisNotifiedX; // 0x588
    bool m_bAxisNotifiedY; // 0x589
    bool m_bAxisNotifiedZ; // 0x58a
    JointMotion_t m_nAngularMotionX; // 0x58c
    JointMotion_t m_nAngularMotionY; // 0x590
    JointMotion_t m_nAngularMotionZ; // 0x594
    float m_flAngularFrequencyX; // 0x598
    float m_flAngularFrequencyY; // 0x59c
    float m_flAngularFrequencyZ; // 0x5a0
    float m_flAngularDampingRatioX; // 0x5a4
    float m_flAngularDampingRatioY; // 0x5a8
    float m_flAngularDampingRatioZ; // 0x5ac
    float m_flMaxAngularImpulseX; // 0x5b0
    float m_flMaxAngularImpulseY; // 0x5b4
    float m_flMaxAngularImpulseZ; // 0x5b8
    char pad_31[4];
    CEntityIOOutput m_NotifyForceReachedX; // 0x5c0
    CEntityIOOutput m_NotifyForceReachedY; // 0x5d8
    CEntityIOOutput m_NotifyForceReachedZ; // 0x5f0
}; // size: 0x608

class __declspec(align(8)) CSplineConstraint : public CPhysConstraint {
public:
    char pad_30[80];
    Vector m_vAnchorOffsetRestore; // 0x558
    // CHandle< CBaseEntity > m_hSplineEntity;
    char m_hSplineEntity[1]; // 0x564
    char pad_31[11];
    bool m_bEnableLateralConstraint; // 0x570
    bool m_bEnableVerticalConstraint; // 0x571
    bool m_bEnableAngularConstraint; // 0x572
    bool m_bEnableLimit; // 0x573
    bool m_bFireEventsOnPath; // 0x574
    float m_flLinearFrequency; // 0x578
    float m_flLinarDampingRatio; // 0x57c
    float m_flJointFriction; // 0x580
    float m_flTransitionTime; // 0x584
    // VectorWS m_vPreSolveAnchorPos;
    char pad_32[16];
    char m_vPreSolveAnchorPos[1]; // 0x598
    char pad_33[8];
    GameTime_t m_StartTransitionTime; // 0x5a4
    Vector m_vTangentSpaceAnchorAtTransitionStart; // 0x5a8
    char pad_034[4];
}; // size: 0x5b8

class __declspec(align(8)) CPhysWheelConstraint : public CPhysConstraint {
public:
    float m_flSuspensionFrequency; // 0x508
    float m_flSuspensionDampingRatio; // 0x50c
    float m_flSuspensionHeightOffset; // 0x510
    bool m_bEnableSuspensionLimit; // 0x514
    float m_flMinSuspensionOffset; // 0x518
    float m_flMaxSuspensionOffset; // 0x51c
    bool m_bEnableSteeringLimit; // 0x520
    float m_flMinSteeringAngle; // 0x524
    float m_flMaxSteeringAngle; // 0x528
    float m_flSteeringAxisFriction; // 0x52c
    float m_flSpinAxisFriction; // 0x530
    // CHandle< CBaseEntity > m_hSteeringMimicsEntity;
    char m_hSteeringMimicsEntity[1]; // 0x534
    char pad_030[11];
}; // size: 0x540

class __declspec(align(8)) CPhysicsEntitySolver : public CLogicalEntity {
public:
    // CHandle< CBaseEntity > m_hMovingEntity;
    char pad_21[24];
    char m_hMovingEntity[1]; // 0x4c0
    // CHandle< CBaseEntity > m_hPhysicsBlocker;
    char pad_22[3];
    char m_hPhysicsBlocker[1]; // 0x4c4
    float m_separationDuration; // 0x4c8
    GameTime_t m_cancelTime; // 0x4cc
}; // size: 0x4d0

class __declspec(align(8)) CPhysicsSpring : public CBaseEntity {
public:
    char pad_21[8];
    float m_flFrequency; // 0x4b0
    float m_flDampingRatio; // 0x4b4
    float m_flRestLength; // 0x4b8
    // CUtlSymbolLarge m_nameAttachStart;
    char pad_22[4];
    char m_nameAttachStart[1]; // 0x4c0
    // CUtlSymbolLarge m_nameAttachEnd;
    char pad_23[7];
    char m_nameAttachEnd[1]; // 0x4c8
    // VectorWS m_start;
    char pad_24[7];
    char m_start[1]; // 0x4d0
    // VectorWS m_end;
    char pad_25[11];
    char m_end[1]; // 0x4dc
    char pad_26[8];
    uint32_t m_teleportTick; // 0x4e8
    char pad_027[4];
}; // size: 0x4f0

class __declspec(align(8)) CPointPush : public CPointEntity {
public:
    bool m_bEnabled; // 0x4a8
    float m_flMagnitude; // 0x4ac
    float m_flRadius; // 0x4b0
    float m_flInnerRadius; // 0x4b4
    float m_flConeOfInfluence; // 0x4b8
    // CUtlSymbolLarge m_iszFilterName;
    char pad_21[4];
    char m_iszFilterName[1]; // 0x4c0
    // CHandle< CBaseFilter > m_hFilter;
    char pad_22[7];
    char m_hFilter[1]; // 0x4c8
    char pad_023[7];
}; // size: 0x4d0

class __declspec(align(8)) CInfoPlayerStart : public CPointEntity {
public:
    bool m_bDisabled; // 0x4a8
    bool m_bIsMaster; // 0x4a9
    // CGlobalSymbol m_pPawnSubclass;
    char pad_21[6];
    char m_pPawnSubclass[1]; // 0x4b0
    char pad_022[7];
}; // size: 0x4b8

class __declspec(align(8)) CPointEntityFinder : public CBaseEntity {
public:
    // CHandle< CBaseEntity > m_hEntity;
    char m_hEntity[1]; // 0x4a8
    // CUtlSymbolLarge m_iFilterName;
    char pad_21[7];
    char m_iFilterName[1]; // 0x4b0
    // CHandle< CBaseFilter > m_hFilter;
    char pad_22[7];
    char m_hFilter[1]; // 0x4b8
    // CUtlSymbolLarge m_iRefName;
    char pad_23[7];
    char m_iRefName[1]; // 0x4c0
    // CHandle< CBaseEntity > m_hReference;
    char pad_24[7];
    char m_hReference[1]; // 0x4c8
    EntFinderMethod_t m_FindMethod; // 0x4cc
    CEntityIOOutput m_OnFoundEntity; // 0x4d0
}; // size: 0x4e8

class __declspec(align(8)) CPointValueRemapper : public CBaseEntity {
public:
    bool m_bDisabled; // 0x4a8
    bool m_bUpdateOnClient; // 0x4a9
    ValueRemapperInputType_t m_nInputType; // 0x4ac
    // CUtlSymbolLarge m_iszRemapLineStartName;
    char m_iszRemapLineStartName[1]; // 0x4b0
    // CUtlSymbolLarge m_iszRemapLineEndName;
    char pad_21[7];
    char m_iszRemapLineEndName[1]; // 0x4b8
    // CHandle< CBaseEntity > m_hRemapLineStart;
    char pad_22[7];
    char m_hRemapLineStart[1]; // 0x4c0
    // CHandle< CBaseEntity > m_hRemapLineEnd;
    char pad_23[3];
    char m_hRemapLineEnd[1]; // 0x4c4
    float m_flMaximumChangePerSecond; // 0x4c8
    float m_flDisengageDistance; // 0x4cc
    float m_flEngageDistance; // 0x4d0
    bool m_bRequiresUseKey; // 0x4d4
    ValueRemapperOutputType_t m_nOutputType; // 0x4d8
    // CUtlSymbolLarge m_iszOutputEntityName;
    char pad_24[4];
    char m_iszOutputEntityName[1]; // 0x4e0
    // CUtlSymbolLarge m_iszOutputEntity2Name;
    char pad_25[7];
    char m_iszOutputEntity2Name[1]; // 0x4e8
    // CUtlSymbolLarge m_iszOutputEntity3Name;
    char pad_26[7];
    char m_iszOutputEntity3Name[1]; // 0x4f0
    // CUtlSymbolLarge m_iszOutputEntity4Name;
    char pad_27[7];
    char m_iszOutputEntity4Name[1]; // 0x4f8
    // CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hOutputEntities;
    char pad_28[7];
    char m_hOutputEntities[1]; // 0x500
    char pad_29[20];
    ValueRemapperHapticsType_t m_nHapticsType; // 0x518
    ValueRemapperMomentumType_t m_nMomentumType; // 0x51c
    float m_flMomentumModifier; // 0x520
    float m_flSnapValue; // 0x524
    float m_flCurrentMomentum; // 0x528
    ValueRemapperRatchetType_t m_nRatchetType; // 0x52c
    float m_flRatchetOffset; // 0x530
    float m_flInputOffset; // 0x534
    bool m_bEngaged; // 0x538
    bool m_bFirstUpdate; // 0x539
    float m_flPreviousValue; // 0x53c
    GameTime_t m_flPreviousUpdateTickTime; // 0x540
    Vector m_vecPreviousTestPoint; // 0x544
    // CHandle< CBasePlayerPawn > m_hUsingPlayer;
    char m_hUsingPlayer[1]; // 0x550
    float m_flCustomOutputValue; // 0x554
    // CUtlSymbolLarge m_iszSoundEngage;
    char m_iszSoundEngage[1]; // 0x558
    // CUtlSymbolLarge m_iszSoundDisengage;
    char pad_30[7];
    char m_iszSoundDisengage[1]; // 0x560
    // CUtlSymbolLarge m_iszSoundReachedValueZero;
    char pad_31[7];
    char m_iszSoundReachedValueZero[1]; // 0x568
    // CUtlSymbolLarge m_iszSoundReachedValueOne;
    char pad_32[7];
    char m_iszSoundReachedValueOne[1]; // 0x570
    // CUtlSymbolLarge m_iszSoundMovingLoop;
    char pad_33[7];
    char m_iszSoundMovingLoop[1]; // 0x578
    // CEntityOutputTemplate< float32, float32 > m_Position;
    char pad_34[31];
    char m_Position[1]; // 0x598
    // CEntityOutputTemplate< float32, float32 > m_PositionDelta;
    char pad_35[31];
    char m_PositionDelta[1]; // 0x5b8
    char pad_36[31];
    CEntityIOOutput m_OnReachedValueZero; // 0x5d8
    CEntityIOOutput m_OnReachedValueOne; // 0x5f0
    CEntityIOOutput m_OnReachedValueCustom; // 0x608
    CEntityIOOutput m_OnEngage; // 0x620
    CEntityIOOutput m_OnDisengage; // 0x638
}; // size: 0x650

class __declspec(align(8)) CPointWorldText : public CModelPointEntity {
public:
    char m_messageText[512]; // 0x730
    char m_FontName[64]; // 0x930
    char m_BackgroundMaterialName[64]; // 0x970
    bool m_bEnabled; // 0x9b0
    bool m_bFullbright; // 0x9b1
    float m_flWorldUnitsPerPx; // 0x9b4
    float m_flFontSize; // 0x9b8
    float m_flDepthOffset; // 0x9bc
    bool m_bDrawBackground; // 0x9c0
    float m_flBackgroundBorderWidth; // 0x9c4
    float m_flBackgroundBorderHeight; // 0x9c8
    float m_flBackgroundWorldToUV; // 0x9cc
    // Color m_Color;
    char m_Color[1]; // 0x9d0
    PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0x9d4
    PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0x9d8
    PointWorldTextReorientMode_t m_nReorientMode; // 0x9dc
}; // size: 0x9e0

class __declspec(align(8)) CPointAngleSensor : public CPointEntity {
public:
    bool m_bDisabled; // 0x4a8
    // CUtlSymbolLarge m_nLookAtName;
    char pad_21[7];
    char m_nLookAtName[1]; // 0x4b0
    // CHandle< CBaseEntity > m_hTargetEntity;
    char pad_22[7];
    char m_hTargetEntity[1]; // 0x4b8
    // CHandle< CBaseEntity > m_hLookAtEntity;
    char pad_23[3];
    char m_hLookAtEntity[1]; // 0x4bc
    float m_flDuration; // 0x4c0
    float m_flDotTolerance; // 0x4c4
    GameTime_t m_flFacingTime; // 0x4c8
    bool m_bFired; // 0x4cc
    char pad_24[3];
    CEntityIOOutput m_OnFacingLookat; // 0x4d0
    CEntityIOOutput m_OnNotFacingLookat; // 0x4e8
    // CEntityOutputTemplate< Vector, Vector > m_TargetDir;
    char m_TargetDir[1]; // 0x500
    // CEntityOutputTemplate< float32, float32 > m_FacingPercentage;
    char pad_25[39];
    char m_FacingPercentage[1]; // 0x528
    char pad_026[31];
}; // size: 0x548

class __declspec(align(8)) CPointProximitySensor : public CPointEntity {
public:
    bool m_bDisabled; // 0x4a8
    // CHandle< CBaseEntity > m_hTargetEntity;
    char pad_21[3];
    char m_hTargetEntity[1]; // 0x4ac
    // CEntityOutputTemplate< float32, float32 > m_Distance;
    char pad_22[3];
    char m_Distance[1]; // 0x4b0
    char pad_023[31];
}; // size: 0x4d0

class __declspec(align(8)) CPointAngularVelocitySensor : public CPointEntity {
public:
    // CHandle< CBaseEntity > m_hTargetEntity;
    char m_hTargetEntity[1]; // 0x4a8
    float m_flThreshold; // 0x4ac
    int32_t m_nLastCompareResult; // 0x4b0
    int32_t m_nLastFireResult; // 0x4b4
    GameTime_t m_flFireTime; // 0x4b8
    float m_flFireInterval; // 0x4bc
    float m_flLastAngVelocity; // 0x4c0
    QAngle m_lastOrientation; // 0x4c4
    // VectorWS m_vecAxis;
    char m_vecAxis[1]; // 0x4d0
    char pad_21[11];
    bool m_bUseHelper; // 0x4dc
    // CEntityOutputTemplate< float32, float32 > m_AngularVelocity;
    char pad_22[3];
    char m_AngularVelocity[1]; // 0x4e0
    char pad_23[31];
    CEntityIOOutput m_OnLessThan; // 0x500
    CEntityIOOutput m_OnLessThanOrEqualTo; // 0x518
    CEntityIOOutput m_OnGreaterThan; // 0x530
    CEntityIOOutput m_OnGreaterThanOrEqualTo; // 0x548
    CEntityIOOutput m_OnEqualTo; // 0x560
}; // size: 0x578

class __declspec(align(8)) CPointVelocitySensor : public CPointEntity {
public:
    // CHandle< CBaseEntity > m_hTargetEntity;
    char m_hTargetEntity[1]; // 0x4a8
    Vector m_vecAxis; // 0x4ac
    bool m_bEnabled; // 0x4b8
    float m_fPrevVelocity; // 0x4bc
    float m_flAvgInterval; // 0x4c0
    // CEntityOutputTemplate< float32, float32 > m_Velocity;
    char pad_21[4];
    char m_Velocity[1]; // 0x4c8
    char pad_022[31];
}; // size: 0x4e8

class __declspec(align(8)) CPointHurt : public CPointEntity {
public:
    int32_t m_nDamage; // 0x4a8
    DamageTypes_t m_bitsDamageType; // 0x4ac
    float m_flRadius; // 0x4b0
    float m_flDelay; // 0x4b4
    // CUtlSymbolLarge m_strTarget;
    char m_strTarget[1]; // 0x4b8
    // CHandle< CBaseEntity > m_pActivator;
    char pad_21[7];
    char m_pActivator[1]; // 0x4c0
    char pad_022[7];
}; // size: 0x4c8

class __declspec(align(8)) CPointTeleport : public CServerOnlyPointEntity {
public:
    Vector m_vSaveOrigin; // 0x4a8
    QAngle m_vSaveAngles; // 0x4b4
    bool m_bTeleportParentedEntities; // 0x4c0
    bool m_bTeleportUseCurrentAngle; // 0x4c1
    char pad_021[6];
}; // size: 0x4c8

class __declspec(align(8)) CEnableMotionFixup : public CBaseEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CFuncPropRespawnZone : public CBaseEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CRevertSaved : public CModelPointEntity {
public:
    float m_loadTime; // 0x730
    float m_Duration; // 0x734
    float m_HoldTime; // 0x738
    char pad_031[4];
}; // size: 0x740

class __declspec(align(8)) CSceneListManager : public CLogicalEntity {
public:
    // CUtlVector< CHandle< CSceneListManager > > m_hListManagers;
    char m_hListManagers[1]; // 0x4a8
    // CUtlSymbolLarge[16] m_iszScenes;
    char pad_21[23];
    char m_iszScenes[1]; // 0x4c0
    // CHandle< CBaseEntity >[16] m_hScenes;
    char pad_22[127];
    char m_hScenes[1]; // 0x540
    char pad_023[63];
}; // size: 0x580

class __declspec(align(8)) CSceneEntity : public CPointEntity {
public:
    // CUtlSymbolLarge m_iszSceneFile;
    char pad_21[8];
    char m_iszSceneFile[1]; // 0x4b0
    // CUtlSymbolLarge m_iszTarget1;
    char pad_22[7];
    char m_iszTarget1[1]; // 0x4b8
    // CUtlSymbolLarge m_iszTarget2;
    char pad_23[7];
    char m_iszTarget2[1]; // 0x4c0
    // CUtlSymbolLarge m_iszTarget3;
    char pad_24[7];
    char m_iszTarget3[1]; // 0x4c8
    // CUtlSymbolLarge m_iszTarget4;
    char pad_25[7];
    char m_iszTarget4[1]; // 0x4d0
    // CUtlSymbolLarge m_iszTarget5;
    char pad_26[7];
    char m_iszTarget5[1]; // 0x4d8
    // CUtlSymbolLarge m_iszTarget6;
    char pad_27[7];
    char m_iszTarget6[1]; // 0x4e0
    // CUtlSymbolLarge m_iszTarget7;
    char pad_28[7];
    char m_iszTarget7[1]; // 0x4e8
    // CUtlSymbolLarge m_iszTarget8;
    char pad_29[7];
    char m_iszTarget8[1]; // 0x4f0
    // CHandle< CBaseEntity > m_hTarget1;
    char pad_30[7];
    char m_hTarget1[1]; // 0x4f8
    // CHandle< CBaseEntity > m_hTarget2;
    char pad_31[3];
    char m_hTarget2[1]; // 0x4fc
    // CHandle< CBaseEntity > m_hTarget3;
    char pad_32[3];
    char m_hTarget3[1]; // 0x500
    // CHandle< CBaseEntity > m_hTarget4;
    char pad_33[3];
    char m_hTarget4[1]; // 0x504
    // CHandle< CBaseEntity > m_hTarget5;
    char pad_34[3];
    char m_hTarget5[1]; // 0x508
    // CHandle< CBaseEntity > m_hTarget6;
    char pad_35[3];
    char m_hTarget6[1]; // 0x50c
    // CHandle< CBaseEntity > m_hTarget7;
    char pad_36[3];
    char m_hTarget7[1]; // 0x510
    // CHandle< CBaseEntity > m_hTarget8;
    char pad_37[3];
    char m_hTarget8[1]; // 0x514
    // CUtlSymbolLarge m_sTargetAttachment;
    char pad_38[3];
    char m_sTargetAttachment[1]; // 0x518
    char pad_39[7];
    bool m_bIsPlayingBack; // 0x520
    bool m_bPaused; // 0x521
    bool m_bMultiplayer; // 0x522
    bool m_bAutogenerated; // 0x523
    float m_flForceClientTime; // 0x524
    float m_flCurrentTime; // 0x528
    float m_flFrameTime; // 0x52c
    bool m_bCancelAtNextInterrupt; // 0x530
    float m_fPitch; // 0x534
    bool m_bAutomated; // 0x538
    int32_t m_nAutomatedAction; // 0x53c
    float m_flAutomationDelay; // 0x540
    float m_flAutomationTime; // 0x544
    int32_t m_nSpeechPriority; // 0x548
    bool m_bPausedViaInput; // 0x54c
    bool m_bPauseAtNextInterrupt; // 0x54d
    bool m_bWaitingForActor; // 0x54e
    bool m_bWaitingForInterrupt; // 0x54f
    bool m_bInterruptedActorsScenes; // 0x550
    bool m_bBreakOnNonIdle; // 0x551
    bool m_bSceneFinished; // 0x552
    // CNetworkUtlVectorBase< CHandle< CBaseFlex > > m_hActorList;
    char pad_40[5];
    char m_hActorList[1]; // 0x558
    // CUtlVector< CHandle< CBaseEntity > > m_hRemoveActorList;
    char pad_41[23];
    char m_hRemoveActorList[1]; // 0x570
    char pad_42[70];
    uint16_t m_nSceneStringIndex; // 0x5b8
    char pad_43[6];
    CEntityIOOutput m_OnStart; // 0x5c0
    CEntityIOOutput m_OnCompletion; // 0x5d8
    CEntityIOOutput m_OnCanceled; // 0x5f0
    CEntityIOOutput m_OnPaused; // 0x608
    CEntityIOOutput m_OnResumed; // 0x620
    // CHandle< CSceneEntity > m_hInterruptScene;
    char pad_44[144];
    char m_hInterruptScene[1]; // 0x6c8
    int32_t m_nInterruptCount; // 0x6cc
    bool m_bSceneMissing; // 0x6d0
    bool m_bInterrupted; // 0x6d1
    bool m_bCompletedEarly; // 0x6d2
    bool m_bInterruptSceneFinished; // 0x6d3
    bool m_bRestoring; // 0x6d4
    // CUtlVector< CHandle< CSceneEntity > > m_hNotifySceneCompletion;
    char pad_45[3];
    char m_hNotifySceneCompletion[1]; // 0x6d8
    // CUtlVector< CHandle< CSceneListManager > > m_hListManagers;
    char pad_46[23];
    char m_hListManagers[1]; // 0x6f0
    // CUtlSymbolLarge m_iszSoundName;
    char pad_47[23];
    char m_iszSoundName[1]; // 0x708
    // CUtlSymbolLarge m_iszSequenceName;
    char pad_48[7];
    char m_iszSequenceName[1]; // 0x710
    // CHandle< CBaseFlex > m_hActor;
    char pad_49[7];
    char m_hActor[1]; // 0x718
    // CHandle< CBaseEntity > m_hActivator;
    char pad_50[3];
    char m_hActivator[1]; // 0x71c
    int32_t m_BusyActor; // 0x720
    SceneOnPlayerDeath_t m_iPlayerDeathBehavior; // 0x724
    char pad_051[8];
}; // size: 0x730

class __declspec(align(8)) CSoundOpvarSetEntity : public CBaseEntity {
public:
    // CUtlSymbolLarge m_iszStackName;
    char pad_21[24];
    char m_iszStackName[1]; // 0x4c0
    // CUtlSymbolLarge m_iszOperatorName;
    char pad_22[7];
    char m_iszOperatorName[1]; // 0x4c8
    // CUtlSymbolLarge m_iszOpvarName;
    char pad_23[7];
    char m_iszOpvarName[1]; // 0x4d0
    char pad_24[4];
    int32_t m_nOpvarType; // 0x4d8
    int32_t m_nOpvarIndex; // 0x4dc
    float m_flOpvarValue; // 0x4e0
    // CUtlSymbolLarge m_OpvarValueString;
    char pad_25[4];
    char m_OpvarValueString[1]; // 0x4e8
    char pad_26[7];
    bool m_bSetOnSpawn; // 0x4f0
    char pad_027[15];
}; // size: 0x500

class __declspec(align(8)) CCitadelSoundOpvarSetOBB : public CBaseEntity {
public:
    // CUtlSymbolLarge m_iszStackName;
    char m_iszStackName[1]; // 0x4a8
    // CUtlSymbolLarge m_iszOperatorName;
    char pad_21[7];
    char m_iszOperatorName[1]; // 0x4b0
    // CUtlSymbolLarge m_iszOpvarName;
    char pad_22[7];
    char m_iszOpvarName[1]; // 0x4b8
    char pad_23[4];
    Vector m_vDistanceInnerMins; // 0x4c0
    Vector m_vDistanceInnerMaxs; // 0x4cc
    Vector m_vDistanceOuterMins; // 0x4d8
    Vector m_vDistanceOuterMaxs; // 0x4e4
    int32_t m_nAABBDirection; // 0x4f0
    char pad_024[4];
}; // size: 0x4f8

class __declspec(align(8)) CNullEntity : public CBaseEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CBaseDMStart : public CPointEntity {
public:
    // CUtlSymbolLarge m_Master;
    char m_Master[1]; // 0x4a8
    char pad_021[7];
}; // size: 0x4b0

class __declspec(align(8)) CInfoLandmark : public CPointEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CTankTargetChange : public CPointEntity {
public:
    // CVariantBase< CVariantDefaultAllocator > m_newTarget;
    char m_newTarget[1]; // 0x4a8
    // CUtlSymbolLarge m_newTargetName;
    char pad_21[15];
    char m_newTargetName[1]; // 0x4b8
    char pad_022[7];
}; // size: 0x4c0

class __declspec(align(8)) CFuncTrackTrain : public CBaseModelEntity {
public:
    // CHandle< CPathTrack > m_ppath;
    char m_ppath[1]; // 0x730
    float m_length; // 0x734
    Vector m_vPosPrev; // 0x738
    QAngle m_angPrev; // 0x744
    Vector m_controlMins; // 0x750
    Vector m_controlMaxs; // 0x75c
    Vector m_lastBlockPos; // 0x768
    int32_t m_lastBlockTick; // 0x774
    float m_flVolume; // 0x778
    float m_flBank; // 0x77c
    float m_oldSpeed; // 0x780
    float m_flBlockDamage; // 0x784
    float m_height; // 0x788
    float m_maxSpeed; // 0x78c
    float m_dir; // 0x790
    // CUtlSymbolLarge m_iszSoundMove;
    char pad_31[4];
    char m_iszSoundMove[1]; // 0x798
    // CUtlSymbolLarge m_iszSoundMovePing;
    char pad_32[7];
    char m_iszSoundMovePing[1]; // 0x7a0
    // CUtlSymbolLarge m_iszSoundStart;
    char pad_33[7];
    char m_iszSoundStart[1]; // 0x7a8
    // CUtlSymbolLarge m_iszSoundStop;
    char pad_34[7];
    char m_iszSoundStop[1]; // 0x7b0
    // CUtlSymbolLarge m_strPathTarget;
    char pad_35[7];
    char m_strPathTarget[1]; // 0x7b8
    char pad_36[4];
    float m_flMoveSoundMinDuration; // 0x7c0
    float m_flMoveSoundMaxDuration; // 0x7c4
    GameTime_t m_flNextMoveSoundTime; // 0x7c8
    float m_flMoveSoundMinPitch; // 0x7cc
    float m_flMoveSoundMaxPitch; // 0x7d0
    TrainOrientationType_t m_eOrientationType; // 0x7d4
    TrainVelocityType_t m_eVelocityType; // 0x7d8
    char pad_37[20];
    CEntityIOOutput m_OnStart; // 0x7f0
    CEntityIOOutput m_OnNext; // 0x808
    CEntityIOOutput m_OnArrivedAtDestinationNode; // 0x820
    bool m_bManualSpeedChanges; // 0x838
    float m_flDesiredSpeed; // 0x83c
    GameTime_t m_flSpeedChangeTime; // 0x840
    float m_flAccelSpeed; // 0x844
    float m_flDecelSpeed; // 0x848
    bool m_bAccelToSpeed; // 0x84c
    GameTime_t m_flNextMPSoundTime; // 0x850
    char pad_038[4];
}; // size: 0x858

class __declspec(align(8)) CTankTrainAI : public CPointEntity {
public:
    // CHandle< CFuncTrackTrain > m_hTrain;
    char m_hTrain[1]; // 0x4a8
    // CHandle< CBaseEntity > m_hTargetEntity;
    char pad_21[3];
    char m_hTargetEntity[1]; // 0x4ac
    int32_t m_soundPlaying; // 0x4b0
    // CUtlSymbolLarge m_startSoundName;
    char pad_22[20];
    char m_startSoundName[1]; // 0x4c8
    // CUtlSymbolLarge m_engineSoundName;
    char pad_23[7];
    char m_engineSoundName[1]; // 0x4d0
    // CUtlSymbolLarge m_movementSoundName;
    char pad_24[7];
    char m_movementSoundName[1]; // 0x4d8
    // CUtlSymbolLarge m_targetEntityName;
    char pad_25[7];
    char m_targetEntityName[1]; // 0x4e0
    char pad_026[7];
}; // size: 0x4e8

class __declspec(align(8)) CHandleTest : public CBaseEntity {
public:
    // CHandle< CBaseEntity > m_Handle;
    char m_Handle[1]; // 0x4a8
    char pad_21[3];
    bool m_bSendHandle; // 0x4ac
    char pad_022[3];
}; // size: 0x4b0

class __declspec(align(8)) CHandleDummy : public CBaseEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CBasePlatTrain : public CBaseToggle {
public:
    // CUtlSymbolLarge m_NoiseMoving;
    char m_NoiseMoving[1]; // 0x7b0
    // CUtlSymbolLarge m_NoiseArrived;
    char pad_33[7];
    char m_NoiseArrived[1]; // 0x7b8
    char pad_34[12];
    float m_volume; // 0x7c8
    float m_flTWidth; // 0x7cc
    float m_flTLength; // 0x7d0
    char pad_035[4];
}; // size: 0x7d8

class __declspec(align(8)) CFuncPlat : public CBasePlatTrain {
public:
    // CUtlSymbolLarge m_sNoise;
    char m_sNoise[1]; // 0x7d8
    char pad_036[7];
}; // size: 0x7e0

class __declspec(align(8)) CPlatTrigger : public CBaseModelEntity {
public:
    // CHandle< CFuncPlat > m_pPlatform;
    char m_pPlatform[1]; // 0x730
    char pad_031[7];
}; // size: 0x738

class __declspec(align(8)) CFuncTrainControls : public CBaseModelEntity {
public:
}; // size: 0x730

class __declspec(align(8)) CTriggerVolume : public CBaseModelEntity {
public:
    // CUtlSymbolLarge m_iFilterName;
    char m_iFilterName[1]; // 0x730
    // CHandle< CBaseFilter > m_hFilter;
    char pad_31[7];
    char m_hFilter[1]; // 0x738
    char pad_032[7];
}; // size: 0x740

class __declspec(align(8)) CInfoTeleportDestination : public CPointEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CAI_ChangeHintGroup : public CBaseEntity {
public:
    int32_t m_iSearchType; // 0x4a8
    // CUtlSymbolLarge m_strSearchName;
    char pad_21[4];
    char m_strSearchName[1]; // 0x4b0
    // CUtlSymbolLarge m_strNewHintGroup;
    char pad_22[7];
    char m_strNewHintGroup[1]; // 0x4b8
    char pad_23[4];
    float m_flRadius; // 0x4c0
    char pad_024[4];
}; // size: 0x4c8

class __declspec(align(8)) CLogicProximity : public CPointEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CInfoSpawnGroupLandmark : public CPointEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CInfoSpawnGroupLoadUnload : public CLogicalEntity {
public:
    CEntityIOOutput m_OnSpawnGroupLoadStarted; // 0x4a8
    CEntityIOOutput m_OnSpawnGroupLoadFinished; // 0x4c0
    CEntityIOOutput m_OnSpawnGroupUnloadStarted; // 0x4d8
    CEntityIOOutput m_OnSpawnGroupUnloadFinished; // 0x4f0
    // CUtlSymbolLarge m_iszSpawnGroupName;
    char m_iszSpawnGroupName[1]; // 0x508
    // CUtlSymbolLarge m_iszSpawnGroupFilterName;
    char pad_21[7];
    char m_iszSpawnGroupFilterName[1]; // 0x510
    // CUtlSymbolLarge m_iszLandmarkName;
    char pad_22[7];
    char m_iszLandmarkName[1]; // 0x518
    // CUtlString m_sFixedSpawnGroupName;
    char pad_23[7];
    char m_sFixedSpawnGroupName[1]; // 0x520
    char pad_24[4];
    float m_flTimeoutInterval; // 0x528
    bool m_bAutoActivate; // 0x52c
    bool m_bUnloadingStarted; // 0x52d
    bool m_bQueueActiveSpawnGroupChange; // 0x52e
    bool m_bQueueFinishLoading; // 0x52f
    char pad_025[80];
}; // size: 0x580

class __declspec(align(8)) CPointPulse : public CBaseEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CFuncNavObstruction : public CBaseModelEntity {
public:
    char pad_31[24];
    bool m_bDisabled; // 0x748
    bool m_bUseAsyncObstacleUpdate; // 0x749
    char pad_032[6];
}; // size: 0x750

class __declspec(align(8)) CAmbientGeneric : public CPointEntity {
public:
    float m_radius; // 0x4a8
    float m_flMaxRadius; // 0x4ac
    soundlevel_t m_iSoundLevel; // 0x4b0
    dynpitchvol_t m_dpv; // 0x4b4
    bool m_fActive; // 0x518
    bool m_fLooping; // 0x519
    // CUtlSymbolLarge m_iszSound;
    char pad_21[6];
    char m_iszSound[1]; // 0x520
    // CUtlSymbolLarge m_sSourceEntName;
    char pad_22[7];
    char m_sSourceEntName[1]; // 0x528
    // CHandle< CBaseEntity > m_hSoundSource;
    char pad_23[7];
    char m_hSoundSource[1]; // 0x530
    // CEntityIndex m_nSoundSourceEntIndex;
    char pad_24[3];
    char m_nSoundSourceEntIndex[1]; // 0x534
    char pad_025[27];
}; // size: 0x550

/// RelationshipOverride_t
class __declspec(align(4)) RelationshipOverride_t0 : public Relationship_t {
public:
    // CHandle< CBaseEntity > entity;
    char entity[1]; // 0x8
    Class_T classType; // 0xc
}; // size: 0x10

class __declspec(align(8)) CBaseButton : public CBaseToggle {
public:
    QAngle m_angMoveEntitySpace; // 0x7b0
    bool m_fStayPushed; // 0x7bc
    bool m_fRotating; // 0x7bd
    locksound_t m_ls; // 0x7c0
    // CUtlSymbolLarge m_sUseSound;
    char m_sUseSound[1]; // 0x7e0
    // CUtlSymbolLarge m_sLockedSound;
    char pad_33[7];
    char m_sLockedSound[1]; // 0x7e8
    // CUtlSymbolLarge m_sUnlockedSound;
    char pad_34[7];
    char m_sUnlockedSound[1]; // 0x7f0
    // CUtlSymbolLarge m_sOverrideAnticipationName;
    char pad_35[7];
    char m_sOverrideAnticipationName[1]; // 0x7f8
    char pad_36[7];
    bool m_bLocked; // 0x800
    bool m_bDisabled; // 0x801
    GameTime_t m_flUseLockedTime; // 0x804
    bool m_bSolidBsp; // 0x808
    char pad_37[7];
    CEntityIOOutput m_OnDamaged; // 0x810
    CEntityIOOutput m_OnPressed; // 0x828
    CEntityIOOutput m_OnUseLocked; // 0x840
    CEntityIOOutput m_OnIn; // 0x858
    CEntityIOOutput m_OnOut; // 0x870
    int32_t m_nState; // 0x888
    // CEntityHandle m_hConstraint;
    char m_hConstraint[1]; // 0x88c
    // CEntityHandle m_hConstraintParent;
    char pad_38[3];
    char m_hConstraintParent[1]; // 0x890
    char pad_39[3];
    bool m_bForceNpcExclude; // 0x894
    // CUtlSymbolLarge m_sGlowEntity;
    char pad_40[3];
    char m_sGlowEntity[1]; // 0x898
    // CHandle< CBaseModelEntity > m_glowEntity;
    char pad_41[7];
    char m_glowEntity[1]; // 0x8a0
    char pad_42[3];
    bool m_usable; // 0x8a4
    // CUtlSymbolLarge m_szDisplayText;
    char pad_43[3];
    char m_szDisplayText[1]; // 0x8a8
    char pad_044[7];
}; // size: 0x8b0

class __declspec(align(8)) CPhysicalButton : public CBaseButton {
public:
}; // size: 0x8b0

class __declspec(align(8)) CRotButton : public CBaseButton {
public:
}; // size: 0x8b0

class __declspec(align(8)) CMomentaryRotButton : public CRotButton {
public:
    // CEntityOutputTemplate< float32, float32 > m_Position;
    char m_Position[1]; // 0x8b0
    char pad_45[31];
    CEntityIOOutput m_OnUnpressed; // 0x8d0
    CEntityIOOutput m_OnFullyOpen; // 0x8e8
    CEntityIOOutput m_OnFullyClosed; // 0x900
    CEntityIOOutput m_OnReachedPosition; // 0x918
    int32_t m_lastUsed; // 0x930
    QAngle m_start; // 0x934
    QAngle m_end; // 0x940
    float m_IdealYaw; // 0x94c
    // CUtlSymbolLarge m_sNoise;
    char m_sNoise[1]; // 0x950
    char pad_46[7];
    bool m_bUpdateTarget; // 0x958
    int32_t m_direction; // 0x95c
    float m_returnSpeed; // 0x960
    float m_flStartPosition; // 0x964
}; // size: 0x968

class __declspec(align(8)) CRagdollMagnet : public CPointEntity {
public:
    bool m_bDisabled; // 0x4a8
    float m_radius; // 0x4ac
    float m_force; // 0x4b0
    // VectorWS m_axis;
    char m_axis[1]; // 0x4b4
    char pad_021[11];
}; // size: 0x4c0

class __declspec(align(8)) CBaseDoor : public CBaseToggle {
public:
    char pad_33[16];
    QAngle m_angMoveEntitySpace; // 0x7c0
    Vector m_vecMoveDirParentSpace; // 0x7cc
    locksound_t m_ls; // 0x7d8
    bool m_bForceClosed; // 0x7f8
    bool m_bDoorGroup; // 0x7f9
    bool m_bLocked; // 0x7fa
    bool m_bIgnoreDebris; // 0x7fb
    bool m_bNoNPCs; // 0x7fc
    FuncDoorSpawnPos_t m_eSpawnPosition; // 0x800
    float m_flBlockDamage; // 0x804
    // CUtlSymbolLarge m_NoiseMoving;
    char m_NoiseMoving[1]; // 0x808
    // CUtlSymbolLarge m_NoiseArrived;
    char pad_34[7];
    char m_NoiseArrived[1]; // 0x810
    // CUtlSymbolLarge m_NoiseMovingClosed;
    char pad_35[7];
    char m_NoiseMovingClosed[1]; // 0x818
    // CUtlSymbolLarge m_NoiseArrivedClosed;
    char pad_36[7];
    char m_NoiseArrivedClosed[1]; // 0x820
    // CUtlSymbolLarge m_ChainTarget;
    char pad_37[7];
    char m_ChainTarget[1]; // 0x828
    char pad_38[7];
    CEntityIOOutput m_OnBlockedClosing; // 0x830
    CEntityIOOutput m_OnBlockedOpening; // 0x848
    CEntityIOOutput m_OnUnblockedClosing; // 0x860
    CEntityIOOutput m_OnUnblockedOpening; // 0x878
    CEntityIOOutput m_OnFullyClosed; // 0x890
    CEntityIOOutput m_OnFullyOpen; // 0x8a8
    CEntityIOOutput m_OnClose; // 0x8c0
    CEntityIOOutput m_OnOpen; // 0x8d8
    CEntityIOOutput m_OnLockedUse; // 0x8f0
    bool m_bLoopMoveSound; // 0x908
    char pad_39[31];
    bool m_bCreateNavObstacle; // 0x928
    bool m_isChaining; // 0x929
    bool m_bIsUsable; // 0x92a
    char pad_040[5];
}; // size: 0x930

class __declspec(align(8)) CEntityBlocker : public CBaseModelEntity {
public:
}; // size: 0x730

class __declspec(align(8)) CEntityDissolve : public CBaseModelEntity {
public:
    float m_flFadeInStart; // 0x730
    float m_flFadeInLength; // 0x734
    float m_flFadeOutModelStart; // 0x738
    float m_flFadeOutModelLength; // 0x73c
    float m_flFadeOutStart; // 0x740
    float m_flFadeOutLength; // 0x744
    GameTime_t m_flStartTime; // 0x748
    EntityDisolveType_t m_nDissolveType; // 0x74c
    Vector m_vDissolverOrigin; // 0x750
    uint32_t m_nMagnitude; // 0x75c
}; // size: 0x760

class __declspec(align(8)) CEnvDecal : public CBaseModelEntity {
public:
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial;
    char m_hDecalMaterial[1]; // 0x730
    char pad_31[4];
    float m_flWidth; // 0x738
    float m_flHeight; // 0x73c
    float m_flDepth; // 0x740
    uint32_t m_nRenderOrder; // 0x744
    bool m_bProjectOnWorld; // 0x748
    bool m_bProjectOnCharacters; // 0x749
    bool m_bProjectOnWater; // 0x74a
    float m_flDepthSortBias; // 0x74c
}; // size: 0x750

class __declspec(align(8)) CMessage : public CPointEntity {
public:
    // CUtlSymbolLarge m_iszMessage;
    char m_iszMessage[1]; // 0x4a8
    char pad_21[4];
    float m_MessageVolume; // 0x4b0
    int32_t m_MessageAttenuation; // 0x4b4
    float m_Radius; // 0x4b8
    // CUtlSymbolLarge m_sNoise;
    char pad_22[4];
    char m_sNoise[1]; // 0x4c0
    char pad_23[7];
    CEntityIOOutput m_OnShowMessage; // 0x4c8
}; // size: 0x4e0

class __declspec(align(8)) CBreakable : public CBaseModelEntity {
public:
    char pad_31[8];
    CPropDataComponent m_CPropDataComponent; // 0x738
    Materials m_Material; // 0x778
    // CHandle< CBaseEntity > m_hBreaker;
    char m_hBreaker[1]; // 0x77c
    Explosions m_Explosion; // 0x780
    // CUtlSymbolLarge m_iszSpawnObject;
    char pad_32[4];
    char m_iszSpawnObject[1]; // 0x788
    char pad_33[4];
    float m_flPressureDelay; // 0x790
    int32_t m_iMinHealthDmg; // 0x794
    // CUtlSymbolLarge m_iszPropData;
    char m_iszPropData[1]; // 0x798
    char pad_34[4];
    float m_impactEnergyScale; // 0x7a0
    EOverrideBlockLOS_t m_nOverrideBlockLOS; // 0x7a4
    CEntityIOOutput m_OnStartDeath; // 0x7a8
    CEntityIOOutput m_OnBreak; // 0x7c0
    // CEntityOutputTemplate< float32, float32 > m_OnHealthChanged;
    char m_OnHealthChanged[1]; // 0x7d8
    char pad_35[28];
    PerformanceMode_t m_PerformanceMode; // 0x7f8
    // CHandle< CBasePlayerPawn > m_hPhysicsAttacker;
    char m_hPhysicsAttacker[1]; // 0x7fc
    GameTime_t m_flLastPhysicsInfluenceTime; // 0x800
    char pad_036[4];
}; // size: 0x808

class __declspec(align(8)) CFuncMoveLinear : public CBaseToggle {
public:
    MoveLinearAuthoredPos_t m_authoredPosition; // 0x7b0
    QAngle m_angMoveEntitySpace; // 0x7b4
    Vector m_vecMoveDirParentSpace; // 0x7c0
    // CUtlSymbolLarge m_soundStart;
    char pad_33[4];
    char m_soundStart[1]; // 0x7d0
    // CUtlSymbolLarge m_soundStop;
    char pad_34[7];
    char m_soundStop[1]; // 0x7d8
    // CUtlSymbolLarge m_currentSound;
    char pad_35[7];
    char m_currentSound[1]; // 0x7e0
    char pad_36[4];
    float m_flBlockDamage; // 0x7e8
    float m_flStartPosition; // 0x7ec
    char pad_37[8];
    CEntityIOOutput m_OnFullyOpen; // 0x7f8
    CEntityIOOutput m_OnFullyClosed; // 0x810
    bool m_bCreateMovableNavMesh; // 0x828
    bool m_bAllowMovableNavMeshDockingOnEntireEntity; // 0x829
    bool m_bCreateNavObstacle; // 0x82a
    char pad_038[13];
}; // size: 0x838

class __declspec(align(16)) CMoverPathNode : public CPathNode {
public:
    // CEntityOutputTemplate< CUtlString, char* > m_OnStartFromOrInSegment;
    char m_OnStartFromOrInSegment[1]; // 0x500
    // CEntityOutputTemplate< CUtlString, char* > m_OnStoppedAtOrInSegment;
    char pad_25[31];
    char m_OnStoppedAtOrInSegment[1]; // 0x520
    // CEntityOutputTemplate< CUtlString, char* > m_OnPassThrough;
    char pad_26[31];
    char m_OnPassThrough[1]; // 0x540
    // CEntityOutputTemplate< CUtlString, char* > m_OnPassThroughForward;
    char pad_27[31];
    char m_OnPassThroughForward[1]; // 0x560
    // CEntityOutputTemplate< CUtlString, char* > m_OnPassThroughReverse;
    char pad_28[31];
    char m_OnPassThroughReverse[1]; // 0x580
    char pad_029[31];
}; // size: 0x5a0

class __declspec(align(8)) CRotatorTarget : public CPointEntity {
public:
    CEntityIOOutput m_OnArrivedAt; // 0x4a8
    RotatorTargetSpace_t m_eSpace; // 0x4c0
    char pad_021[4];
}; // size: 0x4c8

class __declspec(align(16)) CFuncRotator : public CBaseModelEntity {
public:
    // CHandle< CBaseEntity > m_hRotatorTarget;
    char m_hRotatorTarget[1]; // 0x730
    char pad_31[3];
    bool m_bIsRotating; // 0x734
    bool m_bIsReversing; // 0x735
    float m_flTimeToReachMaxSpeed; // 0x738
    float m_flTimeToReachZeroSpeed; // 0x73c
    float m_flDistanceAlongArcTraveled; // 0x740
    float m_flTimeToWaitOscillate; // 0x744
    GameTime_t m_flTimeRotationStart; // 0x748
    // Quaternion m_qLSPrevChange;
    char pad_32[4];
    char m_qLSPrevChange[1]; // 0x750
    // Quaternion m_qWSPrev;
    char pad_33[15];
    char m_qWSPrev[1]; // 0x760
    // Quaternion m_qWSInit;
    char pad_34[15];
    char m_qWSInit[1]; // 0x770
    // Quaternion m_qLSInit;
    char pad_35[15];
    char m_qLSInit[1]; // 0x780
    // Quaternion m_qLSOrientation;
    char pad_36[15];
    char m_qLSOrientation[1]; // 0x790
    char pad_37[15];
    CEntityIOOutput m_OnRotationStarted; // 0x7a0
    CEntityIOOutput m_OnRotationCompleted; // 0x7b8
    CEntityIOOutput m_OnOscillate; // 0x7d0
    CEntityIOOutput m_OnOscillateStartArrive; // 0x7e8
    CEntityIOOutput m_OnOscillateStartDepart; // 0x800
    CEntityIOOutput m_OnOscillateEndArrive; // 0x818
    CEntityIOOutput m_OnOscillateEndDepart; // 0x830
    bool m_bOscillateDepart; // 0x848
    int32_t m_nOscillateCount; // 0x84c
    // CFuncRotator::Rotate_t m_eRotateType;
    char m_eRotateType[1]; // 0x850
    // CFuncRotator::Rotate_t m_ePrevRotateType;
    char pad_38[3];
    char m_ePrevRotateType[1]; // 0x854
    char pad_39[3];
    bool m_bHasTargetOverride; // 0x858
    // Quaternion m_qOrientationOverride;
    char pad_40[7];
    char m_qOrientationOverride[1]; // 0x860
    char pad_41[12];
    RotatorTargetSpace_t m_eSpaceOverride; // 0x870
    QAngle m_qAngularVelocity; // 0x874
    Vector m_vLookAtForcedUp; // 0x880
    // CUtlSymbolLarge m_strRotatorTarget;
    char pad_42[4];
    char m_strRotatorTarget[1]; // 0x890
    char pad_43[7];
    bool m_bRecordHistory; // 0x898
    // CUtlVector< RotatorHistoryEntry_t > m_vecRotatorHistory;
    char pad_44[7];
    char m_vecRotatorHistory[1]; // 0x8a0
    char pad_45[23];
    bool m_bReturningToPreviousOrientation; // 0x8b8
    // CUtlVector< RotatorQueueEntry_t > m_vecRotatorQueue;
    char pad_46[7];
    char m_vecRotatorQueue[1]; // 0x8c0
    // CUtlVector< RotatorHistoryEntry_t > m_vecRotatorQueueHistory;
    char pad_47[23];
    char m_vecRotatorQueueHistory[1]; // 0x8d8
    char pad_48[23];
    SolidType_t m_eSolidType; // 0x8f0
    // CHandle< CFuncMover > m_hSpeedFromMover;
    char pad_49[3];
    char m_hSpeedFromMover[1]; // 0x8f4
    // CUtlSymbolLarge m_iszSpeedFromMover;
    char pad_50[3];
    char m_iszSpeedFromMover[1]; // 0x8f8
    char pad_51[4];
    float m_flSpeedScale; // 0x900
    float m_flMinYawRotation; // 0x904
    float m_flMaxYawRotation; // 0x908
    char pad_052[4];
}; // size: 0x910

class __declspec(align(8)) CFuncRotating : public CBaseModelEntity {
public:
    CEntityIOOutput m_OnStopped; // 0x730
    CEntityIOOutput m_OnStarted; // 0x748
    CEntityIOOutput m_OnReachedStart; // 0x760
    // RotationVector m_localRotationVector;
    char m_localRotationVector[1]; // 0x778
    char pad_31[8];
    float m_flFanFriction; // 0x784
    float m_flAttenuation; // 0x788
    float m_flVolume; // 0x78c
    float m_flTargetSpeed; // 0x790
    float m_flMaxSpeed; // 0x794
    float m_flBlockDamage; // 0x798
    // CUtlSymbolLarge m_NoiseRunning;
    char pad_32[4];
    char m_NoiseRunning[1]; // 0x7a0
    char pad_33[7];
    bool m_bReversed; // 0x7a8
    bool m_bAccelDecel; // 0x7a9
    char pad_34[20];
    QAngle m_prevLocalAngles; // 0x7c0
    QAngle m_angStart; // 0x7cc
    bool m_bStopAtStartPos; // 0x7d8
    Vector m_vecClientOrigin; // 0x7dc
    QAngle m_vecClientAngles; // 0x7e8
    char pad_035[4];
}; // size: 0x7f8

class __declspec(align(16)) CItem : public CBaseAnimGraph {
public:
    char pad_36[8];
    CEntityIOOutput m_OnPlayerTouch; // 0xa28
    CEntityIOOutput m_OnPlayerPickup; // 0xa40
    bool m_bActivateWhenAtRest; // 0xa58
    char pad_37[7];
    CEntityIOOutput m_OnCacheInteraction; // 0xa60
    CEntityIOOutput m_OnGlovePulled; // 0xa78
    // VectorWS m_vOriginalSpawnOrigin;
    char m_vOriginalSpawnOrigin[1]; // 0xa90
    char pad_38[8];
    QAngle m_vOriginalSpawnAngles; // 0xa9c
    bool m_bPhysStartAsleep; // 0xaa8
    char pad_039[23];
}; // size: 0xac0

class __declspec(align(16)) CItemGeneric : public CItem {
public:
    char pad_40[20];
    bool m_bHasTriggerRadius; // 0xad4
    bool m_bHasPickupRadius; // 0xad5
    float m_flPickupRadiusSqr; // 0xad8
    float m_flTriggerRadiusSqr; // 0xadc
    GameTime_t m_flLastPickupCheck; // 0xae0
    bool m_bPlayerCounterListenerAdded; // 0xae4
    bool m_bPlayerInTriggerRadius; // 0xae5
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hSpawnParticleEffect;
    char pad_41[2];
    char m_hSpawnParticleEffect[1]; // 0xae8
    // CUtlSymbolLarge m_pAmbientSoundEffect;
    char pad_42[7];
    char m_pAmbientSoundEffect[1]; // 0xaf0
    char pad_43[7];
    bool m_bAutoStartAmbientSound; // 0xaf8
    // CUtlSymbolLarge m_pSpawnScriptFunction;
    char pad_44[7];
    char m_pSpawnScriptFunction[1]; // 0xb00
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hPickupParticleEffect;
    char pad_45[7];
    char m_hPickupParticleEffect[1]; // 0xb08
    // CUtlSymbolLarge m_pPickupSoundEffect;
    char pad_46[7];
    char m_pPickupSoundEffect[1]; // 0xb10
    // CUtlSymbolLarge m_pPickupScriptFunction;
    char pad_47[7];
    char m_pPickupScriptFunction[1]; // 0xb18
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hTimeoutParticleEffect;
    char pad_48[7];
    char m_hTimeoutParticleEffect[1]; // 0xb20
    // CUtlSymbolLarge m_pTimeoutSoundEffect;
    char pad_49[7];
    char m_pTimeoutSoundEffect[1]; // 0xb28
    // CUtlSymbolLarge m_pTimeoutScriptFunction;
    char pad_50[7];
    char m_pTimeoutScriptFunction[1]; // 0xb30
    // CUtlSymbolLarge m_pPickupFilterName;
    char pad_51[7];
    char m_pPickupFilterName[1]; // 0xb38
    // CHandle< CBaseFilter > m_hPickupFilter;
    char pad_52[7];
    char m_hPickupFilter[1]; // 0xb40
    char pad_53[7];
    CEntityIOOutput m_OnPickup; // 0xb48
    CEntityIOOutput m_OnTimeout; // 0xb60
    CEntityIOOutput m_OnTriggerStartTouch; // 0xb78
    CEntityIOOutput m_OnTriggerTouch; // 0xb90
    CEntityIOOutput m_OnTriggerEndTouch; // 0xba8
    // CUtlSymbolLarge m_pAllowPickupScriptFunction;
    char m_pAllowPickupScriptFunction[1]; // 0xbc0
    char pad_54[4];
    float m_flPickupRadius; // 0xbc8
    float m_flTriggerRadius; // 0xbcc
    // CUtlSymbolLarge m_pTriggerSoundEffect;
    char m_pTriggerSoundEffect[1]; // 0xbd0
    char pad_55[7];
    bool m_bGlowWhenInTrigger; // 0xbd8
    // Color m_glowColor;
    char m_glowColor[1]; // 0xbd9
    char pad_56[3];
    bool m_bUseable; // 0xbdd
    // CHandle< CItemGenericTriggerHelper > m_hTriggerHelper;
    char pad_57[2];
    char m_hTriggerHelper[1]; // 0xbe0
    char pad_058[15];
}; // size: 0xbf0

class __declspec(align(8)) CItemGenericTriggerHelper : public CBaseModelEntity {
public:
    // CHandle< CItemGeneric > m_hParentItem;
    char m_hParentItem[1]; // 0x730
    char pad_031[7];
}; // size: 0x738

class __declspec(align(8)) CRuleEntity : public CBaseModelEntity {
public:
    // CUtlSymbolLarge m_iszMaster;
    char m_iszMaster[1]; // 0x730
    char pad_031[7];
}; // size: 0x738

class __declspec(align(8)) CRulePointEntity : public CRuleEntity {
public:
    int32_t m_Score; // 0x738
    char pad_032[4];
}; // size: 0x740

class __declspec(align(8)) CGamePlayerEquip : public CRulePointEntity {
public:
    char pad_033[24];
}; // size: 0x758

class __declspec(align(8)) CMarkupVolume : public CBaseModelEntity {
public:
    bool m_bDisabled; // 0x730
    char pad_031[7];
}; // size: 0x738

class __declspec(align(8)) CMarkupVolumeTagged : public CMarkupVolume {
public:
    // CUtlVector< CGlobalSymbol > m_GroupNames;
    char m_GroupNames[1]; // 0x738
    // CUtlVector< CGlobalSymbol > m_Tags;
    char pad_32[23];
    char m_Tags[1]; // 0x750
    char pad_33[23];
    bool m_bIsGroup; // 0x768
    bool m_bGroupByPrefab; // 0x769
    bool m_bGroupByVolume; // 0x76a
    bool m_bGroupOtherGroups; // 0x76b
    bool m_bIsInGroup; // 0x76c
    char pad_034[3];
}; // size: 0x770

class __declspec(align(8)) CMarkupVolumeWithRef : public CMarkupVolumeTagged {
public:
    char pad_35[8];
    bool m_bUseRef; // 0x778
    Vector m_vRefPosEntitySpace; // 0x77c
    // VectorWS m_vRefPosWorldSpace;
    char m_vRefPosWorldSpace[1]; // 0x788
    char pad_36[8];
    float m_flRefDot; // 0x794
}; // size: 0x798

class __declspec(align(8)) CFuncBrush : public CBaseModelEntity {
public:
    BrushSolidities_e m_iSolidity; // 0x730
    int32_t m_iDisabled; // 0x734
    bool m_bSolidBsp; // 0x738
    // CUtlSymbolLarge m_iszExcludedClass;
    char pad_31[7];
    char m_iszExcludedClass[1]; // 0x740
    char pad_32[7];
    bool m_bInvertExclusion; // 0x748
    bool m_bScriptedMovement; // 0x749
    char pad_033[6];
}; // size: 0x750

class __declspec(align(8)) CPathTrack : public CPointEntity {
public:
    CPathTrack* m_pnext; // 0x4a8
    CPathTrack* m_pprevious; // 0x4b0
    CPathTrack* m_paltpath; // 0x4b8
    float m_flRadius; // 0x4c0
    float m_length; // 0x4c4
    // CUtlSymbolLarge m_altName;
    char m_altName[1]; // 0x4c8
    char pad_21[4];
    int32_t m_nIterVal; // 0x4d0
    TrackOrientationType_t m_eOrientationType; // 0x4d4
    CEntityIOOutput m_OnPass; // 0x4d8
}; // size: 0x4f0

class __declspec(align(8)) CPhysBox : public CBreakable {
public:
    int32_t m_damageType; // 0x808
    int32_t m_damageToEnableMotion; // 0x80c
    float m_flForceToEnableMotion; // 0x810
    Vector m_vHoverPosePosition; // 0x814
    QAngle m_angHoverPoseAngles; // 0x820
    bool m_bNotSolidToWorld; // 0x82c
    bool m_bEnableUseOutput; // 0x82d
    HoverPoseFlags_t m_nHoverPoseFlags; // 0x82e
    float m_flTouchOutputPerEntityDelay; // 0x830
    char pad_37[4];
    CEntityIOOutput m_OnDamaged; // 0x838
    CEntityIOOutput m_OnAwakened; // 0x850
    CEntityIOOutput m_OnMotionEnabled; // 0x868
    CEntityIOOutput m_OnPlayerUse; // 0x880
    CEntityIOOutput m_OnStartTouch; // 0x898
    // CHandle< CBasePlayerPawn > m_hCarryingPlayer;
    char m_hCarryingPlayer[1]; // 0x8b0
    char pad_038[31];
}; // size: 0x8d0

class __declspec(align(8)) CPhysExplosion : public CPointEntity {
public:
    bool m_bExplodeOnSpawn; // 0x4a8
    float m_flMagnitude; // 0x4ac
    float m_flDamage; // 0x4b0
    float m_radius; // 0x4b4
    // CUtlSymbolLarge m_targetEntityName;
    char m_targetEntityName[1]; // 0x4b8
    char pad_21[4];
    float m_flInnerRadius; // 0x4c0
    float m_flPushScale; // 0x4c4
    bool m_bConvertToDebrisWhenPossible; // 0x4c8
    bool m_bAffectInvulnerableEnts; // 0x4c9
    char pad_22[6];
    CEntityIOOutput m_OnPushedPlayer; // 0x4d0
}; // size: 0x4e8

class __declspec(align(8)) CPhysImpact : public CPointEntity {
public:
    float m_damage; // 0x4a8
    float m_distance; // 0x4ac
    // CUtlSymbolLarge m_directionEntityName;
    char m_directionEntityName[1]; // 0x4b0
    char pad_021[7];
}; // size: 0x4b8

class __declspec(align(8)) CRopeKeyframe : public CBaseModelEntity {
public:
    char pad_31[8];
    uint16_t m_RopeFlags; // 0x738
    // CUtlSymbolLarge m_iNextLinkName;
    char pad_32[6];
    char m_iNextLinkName[1]; // 0x740
    char pad_33[6];
    int16_t m_Slack; // 0x748
    float m_Width; // 0x74c
    float m_TextureScale; // 0x750
    uint8_t m_nSegments; // 0x754
    bool m_bConstrainBetweenEndpoints; // 0x755
    // CUtlSymbolLarge m_strRopeMaterialModel;
    char pad_34[2];
    char m_strRopeMaterialModel[1]; // 0x758
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex;
    char pad_35[7];
    char m_iRopeMaterialModelIndex[1]; // 0x760
    char pad_36[7];
    uint8_t m_Subdiv; // 0x768
    uint8_t m_nChangeCount; // 0x769
    int16_t m_RopeLength; // 0x76a
    uint8_t m_fLockedPoints; // 0x76c
    bool m_bCreatedFromMapFile; // 0x76d
    float m_flScrollSpeed; // 0x770
    bool m_bStartPointValid; // 0x774
    bool m_bEndPointValid; // 0x775
    // CHandle< CBaseEntity > m_hStartPoint;
    char pad_37[2];
    char m_hStartPoint[1]; // 0x778
    // CHandle< CBaseEntity > m_hEndPoint;
    char pad_38[3];
    char m_hEndPoint[1]; // 0x77c
    char pad_39[3];
    AttachmentHandle_t m_iStartAttachment; // 0x780
    AttachmentHandle_t m_iEndAttachment; // 0x781
    char pad_040[6];
}; // size: 0x788

class __declspec(align(8)) CSpotlightEnd : public CBaseModelEntity {
public:
    float m_flLightScale; // 0x730
    float m_Radius; // 0x734
    Vector m_vSpotlightDir; // 0x738
    // VectorWS m_vSpotlightOrg;
    char m_vSpotlightOrg[1]; // 0x744
    char pad_031[11];
}; // size: 0x750

class __declspec(align(8)) CNavWalkable : public CPointEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CFuncNavBlocker : public CBaseModelEntity {
public:
    char pad_31[8];
    bool m_bDisabled; // 0x738
    int32_t m_nBlockedTeamNumber; // 0x73c
    char pad_032[8];
}; // size: 0x748

class __declspec(align(8)) CNavSpaceInfo : public CPointEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CFuncLadder : public CBaseModelEntity {
public:
    Vector m_vecLadderDir; // 0x730
    // CUtlVector< CHandle< CInfoLadderDismount > > m_Dismounts;
    char pad_31[4];
    char m_Dismounts[1]; // 0x740
    char pad_32[20];
    Vector m_vecLocalTop; // 0x758
    // VectorWS m_vecPlayerMountPositionTop;
    char m_vecPlayerMountPositionTop[1]; // 0x764
    // VectorWS m_vecPlayerMountPositionBottom;
    char pad_33[11];
    char m_vecPlayerMountPositionBottom[1]; // 0x770
    char pad_34[8];
    float m_flAutoRideSpeed; // 0x77c
    bool m_bDisabled; // 0x780
    bool m_bFakeLadder; // 0x781
    bool m_bHasSlack; // 0x782
    // CUtlSymbolLarge m_surfacePropName;
    char pad_35[5];
    char m_surfacePropName[1]; // 0x788
    char pad_36[7];
    CEntityIOOutput m_OnPlayerGotOnLadder; // 0x790
    CEntityIOOutput m_OnPlayerGotOffLadder; // 0x7a8
}; // size: 0x7c0

class __declspec(align(8)) CPrecipitationVData {
public:
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szParticlePrecipitationEffect;
    char pad_00[40];
    char m_szParticlePrecipitationEffect[1]; // 0x28
    char pad_01[220];
    float m_flInnerDistance; // 0x108
    ParticleAttachment_t m_nAttachType; // 0x10c
    bool m_bBatchSameVolumeType; // 0x110
    int32_t m_nRTEnvCP; // 0x114
    int32_t m_nRTEnvCPComponent; // 0x118
    // CUtlString m_szModifier;
    char pad_02[4];
    char m_szModifier[1]; // 0x120
    char pad_03[7];
}; // size: 0x128

class __declspec(align(8)) CSprite : public CBaseModelEntity {
public:
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial;
    char m_hSpriteMaterial[1]; // 0x730
    // CHandle< CBaseEntity > m_hAttachedToEntity;
    char pad_31[7];
    char m_hAttachedToEntity[1]; // 0x738
    char pad_32[3];
    AttachmentHandle_t m_nAttachment; // 0x73c
    float m_flSpriteFramerate; // 0x740
    float m_flFrame; // 0x744
    GameTime_t m_flDieTime; // 0x748
    char pad_33[12];
    uint32_t m_nBrightness; // 0x758
    float m_flBrightnessDuration; // 0x75c
    float m_flSpriteScale; // 0x760
    float m_flScaleDuration; // 0x764
    bool m_bWorldSpaceScale; // 0x768
    float m_flGlowProxySize; // 0x76c
    float m_flHDRColorScale; // 0x770
    GameTime_t m_flLastTime; // 0x774
    float m_flMaxFrame; // 0x778
    float m_flStartScale; // 0x77c
    float m_flDestScale; // 0x780
    GameTime_t m_flScaleTimeStart; // 0x784
    int32_t m_nStartBrightness; // 0x788
    int32_t m_nDestBrightness; // 0x78c
    GameTime_t m_flBrightnessTimeStart; // 0x790
    int32_t m_nSpriteWidth; // 0x794
    int32_t m_nSpriteHeight; // 0x798
    char pad_034[4];
}; // size: 0x7a0

class __declspec(align(8)) CSpriteOriented : public CSprite {
public:
}; // size: 0x7a0

class __declspec(align(8)) CBaseClientUIEntity : public CBaseModelEntity {
public:
    bool m_bEnabled; // 0x730
    // CUtlSymbolLarge m_DialogXMLName;
    char pad_31[7];
    char m_DialogXMLName[1]; // 0x738
    // CUtlSymbolLarge m_PanelClassName;
    char pad_32[7];
    char m_PanelClassName[1]; // 0x740
    // CUtlSymbolLarge m_PanelID;
    char pad_33[7];
    char m_PanelID[1]; // 0x748
    // CEntityOutputTemplate< CUtlString, char* > m_CustomOutput0;
    char pad_34[7];
    char m_CustomOutput0[1]; // 0x750
    // CEntityOutputTemplate< CUtlString, char* > m_CustomOutput1;
    char pad_35[31];
    char m_CustomOutput1[1]; // 0x770
    // CEntityOutputTemplate< CUtlString, char* > m_CustomOutput2;
    char pad_36[31];
    char m_CustomOutput2[1]; // 0x790
    // CEntityOutputTemplate< CUtlString, char* > m_CustomOutput3;
    char pad_37[31];
    char m_CustomOutput3[1]; // 0x7b0
    // CEntityOutputTemplate< CUtlString, char* > m_CustomOutput4;
    char pad_38[31];
    char m_CustomOutput4[1]; // 0x7d0
    // CEntityOutputTemplate< CUtlString, char* > m_CustomOutput5;
    char pad_39[31];
    char m_CustomOutput5[1]; // 0x7f0
    // CEntityOutputTemplate< CUtlString, char* > m_CustomOutput6;
    char pad_40[31];
    char m_CustomOutput6[1]; // 0x810
    // CEntityOutputTemplate< CUtlString, char* > m_CustomOutput7;
    char pad_41[31];
    char m_CustomOutput7[1]; // 0x830
    // CEntityOutputTemplate< CUtlString, char* > m_CustomOutput8;
    char pad_42[31];
    char m_CustomOutput8[1]; // 0x850
    // CEntityOutputTemplate< CUtlString, char* > m_CustomOutput9;
    char pad_43[31];
    char m_CustomOutput9[1]; // 0x870
    char pad_044[31];
}; // size: 0x890

class __declspec(align(8)) CPointClientUIDialog : public CBaseClientUIEntity {
public:
    // CHandle< CBaseEntity > m_hActivator;
    char m_hActivator[1]; // 0x890
    char pad_45[3];
    bool m_bStartEnabled; // 0x894
    char pad_046[3];
}; // size: 0x898

class __declspec(align(8)) CPointClientUIWorldPanel : public CBaseClientUIEntity {
public:
    bool m_bIgnoreInput; // 0x890
    bool m_bLit; // 0x891
    bool m_bFollowPlayerAcrossTeleport; // 0x892
    float m_flWidth; // 0x894
    float m_flHeight; // 0x898
    float m_flDPI; // 0x89c
    float m_flInteractDistance; // 0x8a0
    float m_flDepthOffset; // 0x8a4
    uint32_t m_unOwnerContext; // 0x8a8
    uint32_t m_unHorizontalAlign; // 0x8ac
    uint32_t m_unVerticalAlign; // 0x8b0
    uint32_t m_unOrientation; // 0x8b4
    bool m_bAllowInteractionFromAllSceneWorlds; // 0x8b8
    // CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses;
    char pad_45[7];
    char m_vecCSSClasses[1]; // 0x8c0
    char pad_46[23];
    bool m_bOpaque; // 0x8d8
    bool m_bNoDepth; // 0x8d9
    bool m_bVisibleWhenParentNoDraw; // 0x8da
    bool m_bRenderBackface; // 0x8db
    bool m_bUseOffScreenIndicator; // 0x8dc
    bool m_bExcludeFromSaveGames; // 0x8dd
    bool m_bGrabbable; // 0x8de
    bool m_bOnlyRenderToTexture; // 0x8df
    bool m_bDisableMipGen; // 0x8e0
    int32_t m_nExplicitImageLayout; // 0x8e4
}; // size: 0x8e8

class __declspec(align(8)) CPointClientUIWorldTextPanel : public CPointClientUIWorldPanel {
public:
    char m_messageText[512]; // 0x8e8
}; // size: 0xae8

class __declspec(align(8)) CInfoOffscreenPanoramaTexture : public CPointEntity {
public:
    bool m_bDisabled; // 0x4a8
    int32_t m_nResolutionX; // 0x4ac
    int32_t m_nResolutionY; // 0x4b0
    // CUtlSymbolLarge m_szPanelType;
    char pad_21[4];
    char m_szPanelType[1]; // 0x4b8
    // CUtlSymbolLarge m_szLayoutFileName;
    char pad_22[7];
    char m_szLayoutFileName[1]; // 0x4c0
    // CUtlSymbolLarge m_RenderAttrName;
    char pad_23[7];
    char m_RenderAttrName[1]; // 0x4c8
    // CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_TargetEntities;
    char pad_24[7];
    char m_TargetEntities[1]; // 0x4d0
    char pad_25[20];
    int32_t m_nTargetChangeCount; // 0x4e8
    // CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses;
    char pad_26[4];
    char m_vecCSSClasses[1]; // 0x4f0
    // CUtlSymbolLarge m_szTargetsName;
    char pad_27[23];
    char m_szTargetsName[1]; // 0x508
    // CUtlVector< CHandle< CBaseModelEntity > > m_AdditionalTargetEntities;
    char pad_28[7];
    char m_AdditionalTargetEntities[1]; // 0x510
    char pad_029[23];
}; // size: 0x528

/// CNmAimCSNode::CDefinition
class __declspec(align(8)) CNmAimCSNode__CDefinition0 {
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

/// CNmSnapWeaponNode::CDefinition
class __declspec(align(8)) CNmSnapWeaponNode__CDefinition0 {
public:
    char pad_00[24];
    int16_t m_nEnabledNodeIdx; // 0x18
    int16_t m_nLockLeftHandNodeIdx; // 0x1a
    float m_flBlendTimeSeconds; // 0x1c
}; // size: 0x20

class __declspec(align(8)) CInfoPlayerTerrorist : public SpawnPoint {
public:
}; // size: 0x4b8

class __declspec(align(8)) CInfoPlayerCounterterrorist : public SpawnPoint {
public:
}; // size: 0x4b8

class __declspec(align(8)) CInfoDeathmatchSpawn : public SpawnPoint {
public:
}; // size: 0x4b8

class __declspec(align(8)) CPointGiveAmmo : public CPointEntity {
public:
    // CHandle< CBaseEntity > m_pActivator;
    char m_pActivator[1]; // 0x4a8
    char pad_021[7];
}; // size: 0x4b0

class __declspec(align(8)) CInfoInstructorHintBombTargetA : public CPointEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CInfoInstructorHintBombTargetB : public CPointEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CInfoInstructorHintHostageRescueZone : public CPointEntity {
public:
}; // size: 0x4a8

class __declspec(align(8)) CFuncWater : public CBaseModelEntity {
public:
    CBuoyancyHelper m_BuoyancyHelper; // 0x730
}; // size: 0x848

class __declspec(align(8)) CCSSprite : public CSprite {
public:
}; // size: 0x7a0

class __declspec(align(16)) CCSObserverPawn : public CCSPlayerPawnBase {
public:
    char pad_055[48];
}; // size: 0xea0

class __declspec(align(8)) CCSWeaponBaseVData {
public:
    char pad_00[1088];
    CSWeaponType m_WeaponType; // 0x440
    CSWeaponCategory m_WeaponCategory; // 0x444
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCNmSkeleton > > m_szAnimSkeleton;
    char m_szAnimSkeleton[1]; // 0x448
    char pad_01[220];
    Vector m_vecMuzzlePos0; // 0x528
    Vector m_vecMuzzlePos1; // 0x534
    // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szTracerParticle;
    char m_szTracerParticle[1]; // 0x540
    char pad_02[220];
    gear_slot_t m_GearSlot; // 0x620
    int32_t m_GearSlotPosition; // 0x624
    loadout_slot_t m_DefaultLoadoutSlot; // 0x628
    int32_t m_nPrice; // 0x62c
    int32_t m_nKillAward; // 0x630
    int32_t m_nPrimaryReserveAmmoMax; // 0x634
    int32_t m_nSecondaryReserveAmmoMax; // 0x638
    bool m_bMeleeWeapon; // 0x63c
    bool m_bHasBurstMode; // 0x63d
    bool m_bIsRevolver; // 0x63e
    bool m_bCannotShootUnderwater; // 0x63f
    // CGlobalSymbol m_szName;
    char m_szName[1]; // 0x640
    char pad_03[4];
    CSWeaponSilencerType m_eSilencerType; // 0x648
    int32_t m_nCrosshairMinDistance; // 0x64c
    int32_t m_nCrosshairDeltaDistance; // 0x650
    bool m_bIsFullAuto; // 0x654
    int32_t m_nNumBullets; // 0x658
    bool m_bReloadsSingleShells; // 0x65c
    CFiringModeFloat m_flCycleTime; // 0x660
    CFiringModeFloat m_flMaxSpeed; // 0x668
    CFiringModeFloat m_flSpread; // 0x670
    CFiringModeFloat m_flInaccuracyCrouch; // 0x678
    CFiringModeFloat m_flInaccuracyStand; // 0x680
    CFiringModeFloat m_flInaccuracyJump; // 0x688
    CFiringModeFloat m_flInaccuracyLand; // 0x690
    CFiringModeFloat m_flInaccuracyLadder; // 0x698
    CFiringModeFloat m_flInaccuracyFire; // 0x6a0
    CFiringModeFloat m_flInaccuracyMove; // 0x6a8
    CFiringModeFloat m_flRecoilAngle; // 0x6b0
    CFiringModeFloat m_flRecoilAngleVariance; // 0x6b8
    CFiringModeFloat m_flRecoilMagnitude; // 0x6c0
    CFiringModeFloat m_flRecoilMagnitudeVariance; // 0x6c8
    CFiringModeInt m_nTracerFrequency; // 0x6d0
    float m_flInaccuracyJumpInitial; // 0x6d8
    float m_flInaccuracyJumpApex; // 0x6dc
    float m_flInaccuracyReload; // 0x6e0
    float m_flDeployDuration; // 0x6e4
    float m_flDisallowAttackAfterReloadStartDuration; // 0x6e8
    int32_t m_nBurstShotCount; // 0x6ec
    bool m_bAllowBurstHolster; // 0x6f0
    int32_t m_nRecoilSeed; // 0x6f4
    int32_t m_nSpreadSeed; // 0x6f8
    float m_flAttackMovespeedFactor; // 0x6fc
    float m_flInaccuracyPitchShift; // 0x700
    float m_flInaccuracyAltSoundThreshold; // 0x704
    // CUtlString m_szUseRadioSubtitle;
    char m_szUseRadioSubtitle[1]; // 0x708
    char pad_04[7];
    bool m_bUnzoomsAfterShot; // 0x710
    bool m_bHideViewModelWhenZoomed; // 0x711
    int32_t m_nZoomLevels; // 0x714
    int32_t m_nZoomFOV1; // 0x718
    int32_t m_nZoomFOV2; // 0x71c
    float m_flZoomTime0; // 0x720
    float m_flZoomTime1; // 0x724
    float m_flZoomTime2; // 0x728
    float m_flIronSightPullUpSpeed; // 0x72c
    float m_flIronSightPutDownSpeed; // 0x730
    float m_flIronSightFOV; // 0x734
    float m_flIronSightPivotForward; // 0x738
    float m_flIronSightLooseness; // 0x73c
    int32_t m_nDamage; // 0x740
    float m_flHeadshotMultiplier; // 0x744
    float m_flArmorRatio; // 0x748
    float m_flPenetration; // 0x74c
    float m_flRange; // 0x750
    float m_flRangeModifier; // 0x754
    float m_flFlinchVelocityModifierLarge; // 0x758
    float m_flFlinchVelocityModifierSmall; // 0x75c
    float m_flRecoveryTimeCrouch; // 0x760
    float m_flRecoveryTimeStand; // 0x764
    float m_flRecoveryTimeCrouchFinal; // 0x768
    float m_flRecoveryTimeStandFinal; // 0x76c
    int32_t m_nRecoveryTransitionStartBullet; // 0x770
    int32_t m_nRecoveryTransitionEndBullet; // 0x774
    float m_flThrowVelocity; // 0x778
    Vector m_vSmokeColor; // 0x77c
    // CGlobalSymbol m_szAnimClass;
    char m_szAnimClass[1]; // 0x788
    char pad_05[55];
}; // size: 0x7c0

class __declspec(align(8)) CPointGamestatsCounter : public CPointEntity {
public:
    // CUtlSymbolLarge m_strStatisticName;
    char m_strStatisticName[1]; // 0x4a8
    char pad_21[7];
    bool m_bDisabled; // 0x4b0
    char pad_022[7];
}; // size: 0x4b8

class __declspec(align(8)) CEnvHudHint : public CPointEntity {
public:
    // CUtlSymbolLarge m_iszMessage;
    char m_iszMessage[1]; // 0x4a8
    char pad_021[7];
}; // size: 0x4b0

class __declspec(align(8)) CFuncConveyor : public CBaseModelEntity {
public:
    // CUtlSymbolLarge m_szConveyorModels;
    char m_szConveyorModels[1]; // 0x730
    char pad_31[4];
    float m_flTransitionDurationSeconds; // 0x738
    QAngle m_angMoveEntitySpace; // 0x73c
    Vector m_vecMoveDirEntitySpace; // 0x748
    float m_flTargetSpeed; // 0x754
    GameTick_t m_nTransitionStartTick; // 0x758
    int32_t m_nTransitionDurationTicks; // 0x75c
    float m_flTransitionStartSpeed; // 0x760
    // CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hConveyorModels;
    char pad_32[4];
    char m_hConveyorModels[1]; // 0x768
    char pad_033[23];
}; // size: 0x780

class __declspec(align(8)) CCSPlace : public CServerOnlyModelEntity {
public:
    // CUtlSymbolLarge m_name;
    char pad_31[24];
    char m_name[1]; // 0x748
    char pad_032[7];
}; // size: 0x750

class __declspec(align(8)) CGameMoney : public CRulePointEntity {
public:
    CEntityIOOutput m_OnMoneySpent; // 0x740
    CEntityIOOutput m_OnMoneySpentFail; // 0x758
    int32_t m_nMoney; // 0x770
    // CUtlString m_strAwardText;
    char pad_33[4];
    char m_strAwardText[1]; // 0x778
    char pad_034[7];
}; // size: 0x780

class __declspec(align(8)) CPlayerSprayDecal : public CModelPointEntity {
public:
    int32_t m_nUniqueID; // 0x730
    uint32_t m_unAccountID; // 0x734
    uint32_t m_unTraceID; // 0x738
    uint32_t m_rtGcTime; // 0x73c
    Vector m_vecEndPos; // 0x740
    Vector m_vecStart; // 0x74c
    Vector m_vecLeft; // 0x758
    Vector m_vecNormal; // 0x764
    int32_t m_nPlayer; // 0x770
    int32_t m_nEntity; // 0x774
    int32_t m_nHitbox; // 0x778
    float m_flCreationTime; // 0x77c
    int32_t m_nTintID; // 0x780
    uint8_t m_nVersion; // 0x784
    uint8_t m_ubSignature[128]; // 0x785
    char pad_031[3];
}; // size: 0x808

class __declspec(align(8)) CInferno : public CBaseModelEntity {
public:
    Vector m_firePositions; // 0x730
    char pad_31[756];
    Vector m_fireParentPositions; // 0xa30
    char pad_32[756];
    bool m_bFireIsBurning[64]; // 0xd30
    Vector m_BurnNormal; // 0xd70
    char pad_33[756];
    int32_t m_fireCount; // 0x1070
    int32_t m_nInfernoType; // 0x1074
    int32_t m_nFireEffectTickBegin; // 0x1078
    float m_nFireLifetime; // 0x107c
    bool m_bInPostEffectTime; // 0x1080
    bool m_bWasCreatedInSmoke; // 0x1081
    char pad_34[518];
    Extent m_extent; // 0x1288
    CountdownTimer m_damageTimer; // 0x12a0
    CountdownTimer m_damageRampTimer; // 0x12b8
    Vector m_splashVelocity; // 0x12d0
    Vector m_InitialSplashVelocity; // 0x12dc
    Vector m_startPos; // 0x12e8
    Vector m_vecOriginalSpawnLocation; // 0x12f4
    IntervalTimer m_activeTimer; // 0x1300
    int32_t m_fireSpawnOffset; // 0x1310
    int32_t m_nMaxFlames; // 0x1314
    int32_t m_nSpreadCount; // 0x1318
    char pad_35[4];
    CountdownTimer m_BookkeepingTimer; // 0x1320
    CountdownTimer m_NextSpreadTimer; // 0x1338
    uint16_t m_nSourceItemDefIndex; // 0x1350
    char pad_036[102];
}; // size: 0x13b8

class __declspec(align(8)) CFireCrackerBlast : public CInferno {
public:
}; // size: 0x13b8

class __declspec(align(8)) CBarnLight : public CBaseModelEntity {
public:
    bool m_bEnabled; // 0x730
    int32_t m_nColorMode; // 0x734
    // Color m_Color;
    char m_Color[1]; // 0x738
    float m_flColorTemperature; // 0x73c
    float m_flBrightness; // 0x740
    float m_flBrightnessScale; // 0x744
    int32_t m_nDirectLight; // 0x748
    int32_t m_nBakedShadowIndex; // 0x74c
    int32_t m_nLightPathUniqueId; // 0x750
    int32_t m_nLightMapUniqueId; // 0x754
    int32_t m_nLuminaireShape; // 0x758
    float m_flLuminaireSize; // 0x75c
    float m_flLuminaireAnisotropy; // 0x760
    // CUtlString m_LightStyleString;
    char pad_31[4];
    char m_LightStyleString[1]; // 0x768
    char pad_32[4];
    GameTime_t m_flLightStyleStartTime; // 0x770
    // CNetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings;
    char pad_33[4];
    char m_QueuedLightStyleStrings[1]; // 0x778
    // CNetworkUtlVectorBase< CUtlString > m_LightStyleEvents;
    char pad_34[23];
    char m_LightStyleEvents[1]; // 0x790
    // CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_LightStyleTargets;
    char pad_35[23];
    char m_LightStyleTargets[1]; // 0x7a8
    char pad_36[23];
    CEntityIOOutput m_StyleEvent; // 0x7c0
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie;
    char pad_37[104];
    char m_hLightCookie[1]; // 0x840
    char pad_38[4];
    float m_flShape; // 0x848
    float m_flSoftX; // 0x84c
    float m_flSoftY; // 0x850
    float m_flSkirt; // 0x854
    float m_flSkirtNear; // 0x858
    Vector m_vSizeParams; // 0x85c
    float m_flRange; // 0x868
    Vector m_vShear; // 0x86c
    int32_t m_nBakeSpecularToCubemaps; // 0x878
    Vector m_vBakeSpecularToCubemapsSize; // 0x87c
    int32_t m_nCastShadows; // 0x888
    int32_t m_nShadowMapSize; // 0x88c
    int32_t m_nShadowPriority; // 0x890
    bool m_bContactShadow; // 0x894
    bool m_bForceShadowsEnabled; // 0x895
    int32_t m_nBounceLight; // 0x898
    float m_flBounceScale; // 0x89c
    bool m_bDynamicBounce; // 0x8a0
    float m_flMinRoughness; // 0x8a4
    Vector m_vAlternateColor; // 0x8a8
    float m_fAlternateColorBrightness; // 0x8b4
    int32_t m_nFog; // 0x8b8
    float m_flFogStrength; // 0x8bc
    int32_t m_nFogShadows; // 0x8c0
    float m_flFogScale; // 0x8c4
    bool m_bFogMixedShadows; // 0x8c8
    float m_flFadeSizeStart; // 0x8cc
    float m_flFadeSizeEnd; // 0x8d0
    float m_flShadowFadeSizeStart; // 0x8d4
    float m_flShadowFadeSizeEnd; // 0x8d8
    bool m_bPrecomputedFieldsValid; // 0x8dc
    Vector m_vPrecomputedBoundsMins; // 0x8e0
    Vector m_vPrecomputedBoundsMaxs; // 0x8ec
    Vector m_vPrecomputedOBBOrigin; // 0x8f8
    QAngle m_vPrecomputedOBBAngles; // 0x904
    Vector m_vPrecomputedOBBExtent; // 0x910
    int32_t m_nPrecomputedSubFrusta; // 0x91c
    Vector m_vPrecomputedOBBOrigin0; // 0x920
    QAngle m_vPrecomputedOBBAngles0; // 0x92c
    Vector m_vPrecomputedOBBExtent0; // 0x938
    Vector m_vPrecomputedOBBOrigin1; // 0x944
    QAngle m_vPrecomputedOBBAngles1; // 0x950
    Vector m_vPrecomputedOBBExtent1; // 0x95c
    Vector m_vPrecomputedOBBOrigin2; // 0x968
    QAngle m_vPrecomputedOBBAngles2; // 0x974
    Vector m_vPrecomputedOBBExtent2; // 0x980
    Vector m_vPrecomputedOBBOrigin3; // 0x98c
    QAngle m_vPrecomputedOBBAngles3; // 0x998
    Vector m_vPrecomputedOBBExtent3; // 0x9a4
    Vector m_vPrecomputedOBBOrigin4; // 0x9b0
    QAngle m_vPrecomputedOBBAngles4; // 0x9bc
    Vector m_vPrecomputedOBBExtent4; // 0x9c8
    Vector m_vPrecomputedOBBOrigin5; // 0x9d4
    QAngle m_vPrecomputedOBBAngles5; // 0x9e0
    Vector m_vPrecomputedOBBExtent5; // 0x9ec
    bool m_bPvsModifyEntity; // 0x9f8
    // CNetworkUtlVectorBase< uint16 > m_VisClusters;
    char pad_39[7];
    char m_VisClusters[1]; // 0xa00
    char pad_040[31];
}; // size: 0xa20

class __declspec(align(8)) CRectLight : public CBarnLight {
public:
    bool m_bShowLight; // 0xa20
    char pad_041[7];
}; // size: 0xa28

class __declspec(align(8)) COmniLight : public CBarnLight {
public:
    float m_flInnerAngle; // 0xa20
    float m_flOuterAngle; // 0xa24
    bool m_bShowLight; // 0xa28
    char pad_041[7];
}; // size: 0xa30

class __declspec(align(8)) CCSTeam : public CTeam {
public:
    int32_t m_nLastRecievedShorthandedRoundBonus; // 0x560
    int32_t m_nShorthandedRoundBonusStartRound; // 0x564
    bool m_bSurrendered; // 0x568
    char m_szTeamMatchStat[512]; // 0x569
    int32_t m_numMapVictories; // 0x76c
    int32_t m_scoreFirstHalf; // 0x770
    int32_t m_scoreSecondHalf; // 0x774
    int32_t m_scoreOvertime; // 0x778
    char m_szClanTeamname[129]; // 0x77c
    uint32_t m_iClanID; // 0x800
    char m_szTeamFlagImage[8]; // 0x804
    char m_szTeamLogoImage[8]; // 0x80c
    float m_flNextResourceTime; // 0x814
    int32_t m_iLastUpdateSentAt; // 0x818
    char pad_024[4];
}; // size: 0x820

class __declspec(align(8)) CMapInfo : public CPointEntity {
public:
    int32_t m_iBuyingStatus; // 0x4a8
    float m_flBombRadius; // 0x4ac
    int32_t m_iPetPopulation; // 0x4b0
    bool m_bUseNormalSpawnsForDM; // 0x4b4
    bool m_bDisableAutoGeneratedDMSpawns; // 0x4b5
    float m_flBotMaxVisionDistance; // 0x4b8
    int32_t m_iHostageCount; // 0x4bc
    bool m_bFadePlayerVisibilityFarZ; // 0x4c0
    bool m_bRainTraceToSkyEnabled; // 0x4c1
    float m_flEnvRainStrength; // 0x4c4
    float m_flEnvPuddleRippleStrength; // 0x4c8
    float m_flEnvPuddleRippleDirection; // 0x4cc
    float m_flEnvWetnessCoverage; // 0x4d0
    float m_flEnvWetnessDryingAmount; // 0x4d4
}; // size: 0x4d8

class __declspec(align(8)) CCSBot : public CBot {
public:
    // VectorWS m_eyePosition;
    char pad_04[8];
    char m_eyePosition[1]; // 0x108
    char pad_05[11];
    char m_name[64]; // 0x114
    float m_combatRange; // 0x154
    bool m_isRogue; // 0x158
    char pad_06[4];
    CountdownTimer m_rogueTimer; // 0x160
    char pad_07[4];
    bool m_diedLastRound; // 0x17c
    float m_safeTime; // 0x180
    bool m_wasSafe; // 0x184
    char pad_08[7];
    bool m_blindFire; // 0x18c
    CountdownTimer m_surpriseTimer; // 0x190
    bool m_bAllowActive; // 0x1a8
    bool m_isFollowing; // 0x1a9
    // CHandle< CCSPlayerPawn > m_leader;
    char pad_09[2];
    char m_leader[1]; // 0x1ac
    float m_followTimestamp; // 0x1b0
    float m_allowAutoFollowTime; // 0x1b4
    CountdownTimer m_hurryTimer; // 0x1b8
    CountdownTimer m_alertTimer; // 0x1d0
    CountdownTimer m_sneakTimer; // 0x1e8
    CountdownTimer m_panicTimer; // 0x200
    char pad_10[912];
    float m_stateTimestamp; // 0x5a8
    bool m_isAttacking; // 0x5ac
    bool m_isOpeningDoor; // 0x5ad
    // CHandle< CBaseEntity > m_taskEntity;
    char pad_11[6];
    char m_taskEntity[1]; // 0x5b4
    // VectorWS m_goalPosition;
    char pad_12[15];
    char m_goalPosition[1]; // 0x5c4
    // CHandle< CBaseEntity > m_goalEntity;
    char pad_13[11];
    char m_goalEntity[1]; // 0x5d0
    // CHandle< CBaseEntity > m_avoid;
    char pad_14[3];
    char m_avoid[1]; // 0x5d4
    float m_avoidTimestamp; // 0x5d8
    bool m_isStopping; // 0x5dc
    bool m_hasVisitedEnemySpawn; // 0x5dd
    IntervalTimer m_stillTimer; // 0x5e0
    bool m_bEyeAnglesUnderPathFinderControl; // 0x5f0
    char pad_15[22780];
    int32_t m_pathIndex; // 0x5ef0
    GameTime_t m_areaEnteredTimestamp; // 0x5ef4
    CountdownTimer m_repathTimer; // 0x5ef8
    CountdownTimer m_avoidFriendTimer; // 0x5f10
    bool m_isFriendInTheWay; // 0x5f28
    char pad_16[4];
    CountdownTimer m_politeTimer; // 0x5f30
    bool m_isWaitingBehindFriend; // 0x5f48
    char pad_17[40];
    float m_pathLadderEnd; // 0x5f74
    char pad_18[72];
    CountdownTimer m_mustRunTimer; // 0x5fc0
    CountdownTimer m_waitTimer; // 0x5fd8
    CountdownTimer m_updateTravelDistanceTimer; // 0x5ff0
    float m_playerTravelDistance[64]; // 0x6008
    uint8_t m_travelDistancePhase; // 0x6108
    char pad_19[407];
    uint8_t m_hostageEscortCount; // 0x62a0
    float m_hostageEscortCountTimestamp; // 0x62a4
    int32_t m_desiredTeam; // 0x62a8
    bool m_hasJoined; // 0x62ac
    bool m_isWaitingForHostage; // 0x62ad
    CountdownTimer m_inhibitWaitingForHostageTimer; // 0x62b0
    CountdownTimer m_waitForHostageTimer; // 0x62c8
    Vector m_noisePosition; // 0x62e0
    float m_noiseTravelDistance; // 0x62ec
    float m_noiseTimestamp; // 0x62f0
    CCSPlayerPawn* m_noiseSource; // 0x62f8
    char pad_20[16];
    CountdownTimer m_noiseBendTimer; // 0x6310
    Vector m_bentNoisePosition; // 0x6328
    bool m_bendNoisePositionValid; // 0x6334
    float m_lookAroundStateTimestamp; // 0x6338
    float m_lookAheadAngle; // 0x633c
    float m_forwardAngle; // 0x6340
    float m_inhibitLookAroundTimestamp; // 0x6344
    char pad_21[4];
    Vector m_lookAtSpot; // 0x634c
    char pad_22[4];
    float m_lookAtSpotDuration; // 0x635c
    float m_lookAtSpotTimestamp; // 0x6360
    float m_lookAtSpotAngleTolerance; // 0x6364
    bool m_lookAtSpotClearIfClose; // 0x6368
    bool m_lookAtSpotAttack; // 0x6369
    char* m_lookAtDesc; // 0x6370
    float m_peripheralTimestamp; // 0x6378
    char pad_23[388];
    uint8_t m_approachPointCount; // 0x6500
    Vector m_approachPointViewPosition; // 0x6504
    IntervalTimer m_viewSteadyTimer; // 0x6510
    char pad_24[8];
    CountdownTimer m_tossGrenadeTimer; // 0x6528
    char pad_25[8];
    CountdownTimer m_isAvoidingGrenade; // 0x6548
    char pad_26[8];
    float m_spotCheckTimestamp; // 0x6568
    char pad_27[1028];
    int32_t m_checkedHidingSpotCount; // 0x6970
    float m_lookPitch; // 0x6974
    float m_lookPitchVel; // 0x6978
    float m_lookYaw; // 0x697c
    float m_lookYawVel; // 0x6980
    Vector m_targetSpot; // 0x6984
    Vector m_targetSpotVelocity; // 0x6990
    Vector m_targetSpotPredicted; // 0x699c
    QAngle m_aimError; // 0x69a8
    QAngle m_aimGoal; // 0x69b4
    GameTime_t m_targetSpotTime; // 0x69c0
    float m_aimFocus; // 0x69c4
    float m_aimFocusInterval; // 0x69c8
    GameTime_t m_aimFocusNextUpdate; // 0x69cc
    char pad_28[8];
    CountdownTimer m_ignoreEnemiesTimer; // 0x69d8
    // CHandle< CCSPlayerPawn > m_enemy;
    char m_enemy[1]; // 0x69f0
    char pad_29[3];
    bool m_isEnemyVisible; // 0x69f4
    uint8_t m_visibleEnemyParts; // 0x69f5
    Vector m_lastEnemyPosition; // 0x69f8
    float m_lastSawEnemyTimestamp; // 0x6a04
    float m_firstSawEnemyTimestamp; // 0x6a08
    float m_currentEnemyAcquireTimestamp; // 0x6a0c
    float m_enemyDeathTimestamp; // 0x6a10
    float m_friendDeathTimestamp; // 0x6a14
    bool m_isLastEnemyDead; // 0x6a18
    int32_t m_nearbyEnemyCount; // 0x6a1c
    // CHandle< CCSPlayerPawn > m_bomber;
    char pad_30[520];
    char m_bomber[1]; // 0x6c28
    int32_t m_nearbyFriendCount; // 0x6c2c
    // CHandle< CCSPlayerPawn > m_closestVisibleFriend;
    char m_closestVisibleFriend[1]; // 0x6c30
    // CHandle< CCSPlayerPawn > m_closestVisibleHumanFriend;
    char pad_31[3];
    char m_closestVisibleHumanFriend[1]; // 0x6c34
    IntervalTimer m_attentionInterval; // 0x6c38
    // CHandle< CCSPlayerPawn > m_attacker;
    char m_attacker[1]; // 0x6c48
    float m_attackedTimestamp; // 0x6c4c
    IntervalTimer m_burnedByFlamesTimer; // 0x6c50
    int32_t m_lastVictimID; // 0x6c60
    bool m_isAimingAtEnemy; // 0x6c64
    bool m_isRapidFiring; // 0x6c65
    IntervalTimer m_equipTimer; // 0x6c68
    CountdownTimer m_zoomTimer; // 0x6c78
    GameTime_t m_fireWeaponTimestamp; // 0x6c90
    char pad_32[4];
    CountdownTimer m_lookForWeaponsOnGroundTimer; // 0x6c98
    bool m_bIsSleeping; // 0x6cb0
    bool m_isEnemySniperVisible; // 0x6cb1
    char pad_33[4];
    CountdownTimer m_sawEnemySniperTimer; // 0x6cb8
    char pad_34[160];
    uint8_t m_enemyQueueIndex; // 0x6d70
    uint8_t m_enemyQueueCount; // 0x6d71
    uint8_t m_enemyQueueAttendIndex; // 0x6d72
    bool m_isStuck; // 0x6d73
    GameTime_t m_stuckTimestamp; // 0x6d74
    Vector m_stuckSpot; // 0x6d78
    char pad_35[4];
    CountdownTimer m_wiggleTimer; // 0x6d88
    CountdownTimer m_stuckJumpTimer; // 0x6da0
    GameTime_t m_nextCleanupCheckTimestamp; // 0x6db8
    float m_avgVel[10]; // 0x6dbc
    int32_t m_avgVelIndex; // 0x6de4
    int32_t m_avgVelCount; // 0x6de8
    Vector m_lastOrigin; // 0x6dec
    char pad_36[4];
    float m_lastRadioRecievedTimestamp; // 0x6dfc
    float m_lastRadioSentTimestamp; // 0x6e00
    // CHandle< CCSPlayerPawn > m_radioSubject;
    char m_radioSubject[1]; // 0x6e04
    Vector m_radioPosition; // 0x6e08
    float m_voiceEndTimestamp; // 0x6e14
    char pad_37[8];
    int32_t m_lastValidReactionQueueFrame; // 0x6e20
    char pad_038[4];
}; // size: 0x6e28

class __declspec(align(8)) CFogVolume : public CServerOnlyModelEntity {
public:
    // CUtlSymbolLarge m_fogName;
    char m_fogName[1]; // 0x730
    // CUtlSymbolLarge m_postProcessName;
    char pad_31[7];
    char m_postProcessName[1]; // 0x738
    // CUtlSymbolLarge m_colorCorrectionName;
    char pad_32[7];
    char m_colorCorrectionName[1]; // 0x740
    char pad_33[15];
    bool m_bDisabled; // 0x750
    bool m_bInFogVolumesList; // 0x751
    char pad_034[6];
}; // size: 0x758

class __declspec(align(8)) CInfoDynamicShadowHint : public CPointEntity {
public:
    bool m_bDisabled; // 0x4a8
    float m_flRange; // 0x4ac
    int32_t m_nImportance; // 0x4b0
    int32_t m_nLightChoice; // 0x4b4
    // CHandle< CBaseEntity > m_hLight;
    char m_hLight[1]; // 0x4b8
    char pad_021[7];
}; // size: 0x4c0

class __declspec(align(8)) CInfoDynamicShadowHintBox : public CInfoDynamicShadowHint {
public:
    Vector m_vBoxMins; // 0x4c0
    Vector m_vBoxMaxs; // 0x4cc
}; // size: 0x4d8

class __declspec(align(8)) CEnvSky : public CBaseModelEntity {
public:
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial;
    char m_hSkyMaterial[1]; // 0x730
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly;
    char pad_31[7];
    char m_hSkyMaterialLightingOnly[1]; // 0x738
    char pad_32[7];
    bool m_bStartDisabled; // 0x740
    // Color m_vTintColor;
    char m_vTintColor[1]; // 0x741
    // Color m_vTintColorLightingOnly;
    char pad_33[3];
    char m_vTintColorLightingOnly[1]; // 0x745
    char pad_34[4];
    float m_flBrightnessScale; // 0x74c
    int32_t m_nFogType; // 0x750
    float m_flFogMinStart; // 0x754
    float m_flFogMinEnd; // 0x758
    float m_flFogMaxStart; // 0x75c
    float m_flFogMaxEnd; // 0x760
    bool m_bEnabled; // 0x764
    char pad_035[43];
}; // size: 0x790

class __declspec(align(8)) CTonemapController2Alias_env_tonemap_controller2 : public CTonemapController2 {
public:
}; // size: 0x4c0

class __declspec(align(8)) CLightSpotEntity : public CLightEntity {
public:
}; // size: 0x738

class __declspec(align(8)) CLightOrthoEntity : public CLightEntity {
public:
}; // size: 0x738

class __declspec(align(8)) CLightDirectionalEntity : public CLightEntity {
public:
}; // size: 0x738

class __declspec(align(8)) CLightEnvironmentEntity : public CLightDirectionalEntity {
public:
}; // size: 0x738

class __declspec(align(16)) CTriggerFan : public CBaseTrigger {
public:
    Vector m_vFanOriginOffset; // 0x890
    Vector m_vDirection; // 0x89c
    bool m_bPushTowardsInfoTarget; // 0x8a8
    bool m_bPushAwayFromInfoTarget; // 0x8a9
    // Quaternion m_qNoiseDelta;
    char pad_38[6];
    char m_qNoiseDelta[1]; // 0x8b0
    // CHandle< CInfoFan > m_hInfoFan;
    char pad_39[15];
    char m_hInfoFan[1]; // 0x8c0
    float m_flForce; // 0x8c4
    bool m_bFalloff; // 0x8c8
    char pad_40[4];
    CountdownTimer m_RampTimer; // 0x8d0
    // VectorWS m_vFanOriginWS;
    char m_vFanOriginWS[1]; // 0x8e8
    char pad_41[8];
    Vector m_vFanOriginLS; // 0x8f4
    Vector m_vFanEndLS; // 0x900
    Vector m_vNoiseDirectionTarget; // 0x90c
    // CUtlSymbolLarge m_iszInfoFan;
    char m_iszInfoFan[1]; // 0x918
    char pad_42[4];
    float m_flRopeForceScale; // 0x920
    float m_flParticleForceScale; // 0x924
    float m_flPlayerForce; // 0x928
    bool m_bPlayerWindblock; // 0x92c
    float m_flNPCForce; // 0x930
    float m_flRampTime; // 0x934
    float m_fNoiseDegrees; // 0x938
    float m_fNoiseSpeed; // 0x93c
    bool m_bPushPlayer; // 0x940
    bool m_bRampDown; // 0x941
    int32_t m_nManagerFanIdx; // 0x944
    char pad_043[8];
}; // size: 0x950

class __declspec(align(8)) CEnvSoundscapeProxyAlias_snd_soundscape_proxy : public CEnvSoundscapeProxy {
public:
}; // size: 0x540

class __declspec(align(8)) CEnvSoundscapeAlias_snd_soundscape : public CEnvSoundscape {
public:
}; // size: 0x538

class __declspec(align(8)) CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable : public CEnvSoundscapeTriggerable {
public:
}; // size: 0x538

class __declspec(align(8)) CTriggerSoundscape : public CBaseTrigger {
public:
    // CHandle< CEnvSoundscapeTriggerable > m_hSoundscape;
    char m_hSoundscape[1]; // 0x890
    // CUtlSymbolLarge m_SoundscapeName;
    char pad_38[7];
    char m_SoundscapeName[1]; // 0x898
    // CUtlVector< CHandle< CBasePlayerPawn > > m_spectators;
    char pad_39[7];
    char m_spectators[1]; // 0x8a0
    char pad_040[23];
}; // size: 0x8b8

class __declspec(align(8)) CFilterName : public CBaseFilter {
public:
    // CUtlSymbolLarge m_iFilterName;
    char m_iFilterName[1]; // 0x4e0
    char pad_022[7];
}; // size: 0x4e8

class __declspec(align(8)) CFilterModel : public CBaseFilter {
public:
    // CUtlSymbolLarge m_iFilterModel;
    char m_iFilterModel[1]; // 0x4e0
    char pad_022[7];
}; // size: 0x4e8

class __declspec(align(8)) CFilterContext : public CBaseFilter {
public:
    // CUtlSymbolLarge m_iFilterContext;
    char m_iFilterContext[1]; // 0x4e0
    char pad_022[7];
}; // size: 0x4e8

class __declspec(align(8)) CFilterTeam : public CBaseFilter {
public:
    int32_t m_iFilterTeam; // 0x4e0
    char pad_022[4];
}; // size: 0x4e8

class __declspec(align(8)) CFilterMassGreater : public CBaseFilter {
public:
    float m_fFilterMass; // 0x4e0
    char pad_022[4];
}; // size: 0x4e8

class __declspec(align(8)) FilterDamageType : public CBaseFilter {
public:
    int32_t m_iDamageType; // 0x4e0
    char pad_022[4];
}; // size: 0x4e8

class __declspec(align(8)) FilterHealth : public CBaseFilter {
public:
    bool m_bAdrenalineActive; // 0x4e0
    int32_t m_iHealthMin; // 0x4e4
    int32_t m_iHealthMax; // 0x4e8
    char pad_022[4];
}; // size: 0x4f0

class __declspec(align(8)) CFilterEnemy : public CBaseFilter {
public:
    // CUtlSymbolLarge m_iszEnemyName;
    char m_iszEnemyName[1]; // 0x4e0
    char pad_22[4];
    float m_flRadius; // 0x4e8
    float m_flOuterRadius; // 0x4ec
    int32_t m_nMaxSquadmatesPerEnemy; // 0x4f0
    // CUtlSymbolLarge m_iszPlayerName;
    char pad_23[4];
    char m_iszPlayerName[1]; // 0x4f8
    char pad_024[7];
}; // size: 0x500

class __declspec(align(8)) CFilterAttributeInt : public CBaseFilter {
public:
    // CUtlSymbolLarge m_sAttributeName;
    char m_sAttributeName[1]; // 0x4e0
    char pad_022[7];
}; // size: 0x4e8

class __declspec(align(8)) CParticleSystem : public CBaseModelEntity {
public:
    char m_szSnapshotFileName[512]; // 0x730
    bool m_bActive; // 0x930
    bool m_bFrozen; // 0x931
    float m_flFreezeTransitionDuration; // 0x934
    int32_t m_nStopType; // 0x938
    bool m_bAnimateDuringGameplayPause; // 0x93c
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex;
    char pad_31[3];
    char m_iEffectIndex[1]; // 0x940
    char pad_32[4];
    GameTime_t m_flStartTime; // 0x948
    float m_flPreSimTime; // 0x94c
    Vector m_vServerControlPoints; // 0x950
    char pad_33[36];
    uint8_t m_iServerControlPointAssignments[4]; // 0x980
    // CHandle< CBaseEntity >[64] m_hControlPointEnts;
    char m_hControlPointEnts[1]; // 0x984
    char pad_34[255];
    bool m_bNoSave; // 0xa84
    bool m_bNoFreeze; // 0xa85
    bool m_bNoRamp; // 0xa86
    bool m_bStartActive; // 0xa87
    // CUtlSymbolLarge m_iszEffectName;
    char m_iszEffectName[1]; // 0xa88
    // CUtlSymbolLarge[64] m_iszControlPointNames;
    char pad_35[7];
    char m_iszControlPointNames[1]; // 0xa90
    char pad_36[508];
    int32_t m_nDataCP; // 0xc90
    Vector m_vecDataCPValue; // 0xc94
    int32_t m_nTintCP; // 0xca0
    // Color m_clrTint;
    char m_clrTint[1]; // 0xca4
    char pad_037[3];
}; // size: 0xca8

class __declspec(align(8)) CTextureBasedAnimatable : public CBaseModelEntity {
public:
    bool m_bLoop; // 0x730
    float m_flFPS; // 0x734
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys;
    char m_hPositionKeys[1]; // 0x738
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys;
    char pad_31[7];
    char m_hRotationKeys[1]; // 0x740
    char pad_32[4];
    Vector m_vAnimationBoundsMin; // 0x748
    Vector m_vAnimationBoundsMax; // 0x754
    float m_flStartTime; // 0x760
    float m_flStartFrame; // 0x764
}; // size: 0x768

class __declspec(align(8)) CWorld : public CBaseModelEntity {
public:
}; // size: 0x730

class __declspec(align(16)) CDynamicProp : public CBreakableProp {
public:
    char pad_50[8];
    bool m_bCreateNavObstacle; // 0xba8
    bool m_bNavObstacleUpdatesOverridden; // 0xba9
    bool m_bUseHitboxesForRenderBox; // 0xbaa
    bool m_bUseAnimGraph; // 0xbab
    char pad_51[4];
    CEntityIOOutput m_pOutputAnimBegun; // 0xbb0
    CEntityIOOutput m_pOutputAnimOver; // 0xbc8
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xbe0
    CEntityIOOutput m_OnAnimReachedStart; // 0xbf8
    CEntityIOOutput m_OnAnimReachedEnd; // 0xc10
    // CUtlSymbolLarge m_iszIdleAnim;
    char m_iszIdleAnim[1]; // 0xc28
    char pad_52[4];
    AnimLoopMode_t m_nIdleAnimLoopMode; // 0xc30
    bool m_bRandomizeCycle; // 0xc34
    bool m_bStartDisabled; // 0xc35
    bool m_bFiredStartEndOutput; // 0xc36
    bool m_bForceNpcExclude; // 0xc37
    bool m_bCreateNonSolid; // 0xc38
    bool m_bIsOverrideProp; // 0xc39
    int32_t m_iInitialGlowState; // 0xc3c
    int32_t m_nGlowRange; // 0xc40
    int32_t m_nGlowRangeMin; // 0xc44
    // Color m_glowColor;
    char m_glowColor[1]; // 0xc48
    int32_t m_nGlowTeam; // 0xc4c
}; // size: 0xc50

class __declspec(align(16)) CDynamicPropAlias_dynamic_prop : public CDynamicProp {
public:
}; // size: 0xc50

class __declspec(align(16)) CDynamicPropAlias_prop_dynamic_override : public CDynamicProp {
public:
}; // size: 0xc50

class __declspec(align(16)) CDynamicPropAlias_cable_dynamic : public CDynamicProp {
public:
}; // size: 0xc50

class __declspec(align(8)) CColorCorrectionVolume : public CBaseTrigger {
public:
    float m_MaxWeight; // 0x890
    float m_FadeDuration; // 0x894
    float m_Weight; // 0x898
    char m_lookupFilename[512]; // 0x89c
    float m_LastEnterWeight; // 0xa9c
    GameTime_t m_LastEnterTime; // 0xaa0
    float m_LastExitWeight; // 0xaa4
    GameTime_t m_LastExitTime; // 0xaa8
    char pad_038[4];
}; // size: 0xab0

class __declspec(align(8)) CCommentaryViewPosition : public CSprite {
public:
}; // size: 0x7a0

class __declspec(align(8)) CRotDoor : public CBaseDoor {
public:
    bool m_bSolidBsp; // 0x930
    char pad_041[7];
}; // size: 0x938

class __declspec(align(16)) CItemSoda : public CBaseAnimGraph {
public:
}; // size: 0xa20

class __declspec(align(8)) CPrecipitation : public CBaseTrigger {
public:
}; // size: 0x890

class __declspec(align(8)) CEnvBeam : public CBeam {
public:
    int32_t m_active; // 0x7d0
    // CStrongHandle< InfoForResourceTypeIMaterial2 > m_spriteTexture;
    char pad_38[4];
    char m_spriteTexture[1]; // 0x7d8
    // CUtlSymbolLarge m_iszStartEntity;
    char pad_39[7];
    char m_iszStartEntity[1]; // 0x7e0
    // CUtlSymbolLarge m_iszEndEntity;
    char pad_40[7];
    char m_iszEndEntity[1]; // 0x7e8
    char pad_41[4];
    float m_life; // 0x7f0
    float m_boltWidth; // 0x7f4
    float m_noiseAmplitude; // 0x7f8
    int32_t m_speed; // 0x7fc
    float m_restrike; // 0x800
    // CUtlSymbolLarge m_iszSpriteName;
    char pad_42[4];
    char m_iszSpriteName[1]; // 0x808
    char pad_43[4];
    int32_t m_frameStart; // 0x810
    // VectorWS m_vEndPointWorld;
    char m_vEndPointWorld[1]; // 0x814
    char pad_44[8];
    Vector m_vEndPointRelative; // 0x820
    float m_radius; // 0x82c
    Touch_t m_TouchType; // 0x830
    // CUtlSymbolLarge m_iFilterName;
    char pad_45[4];
    char m_iFilterName[1]; // 0x838
    // CHandle< CBaseEntity > m_hFilter;
    char pad_46[7];
    char m_hFilter[1]; // 0x840
    // CUtlSymbolLarge m_iszDecal;
    char pad_47[7];
    char m_iszDecal[1]; // 0x848
    char pad_48[7];
    CEntityIOOutput m_OnTouchedByEntity; // 0x850
}; // size: 0x868

class __declspec(align(8)) CPushable : public CBreakable {
public:
}; // size: 0x808

class __declspec(align(8)) CFuncLadderAlias_func_useableladder : public CFuncLadder {
public:
}; // size: 0x7c0

class __declspec(align(8)) CFuncMonitor : public CFuncBrush {
public:
    // CUtlString m_targetCamera;
    char m_targetCamera[1]; // 0x750
    char pad_34[4];
    int32_t m_nResolutionEnum; // 0x758
    bool m_bRenderShadows; // 0x75c
    bool m_bUseUniqueColorTarget; // 0x75d
    // CUtlString m_brushModelName;
    char pad_35[2];
    char m_brushModelName[1]; // 0x760
    // CHandle< CBaseEntity > m_hTargetCamera;
    char pad_36[7];
    char m_hTargetCamera[1]; // 0x768
    char pad_37[3];
    bool m_bEnabled; // 0x76c
    bool m_bDraw3DSkybox; // 0x76d
    bool m_bStartEnabled; // 0x76e
    char pad_038[1];
}; // size: 0x770

class __declspec(align(8)) CFuncMoveLinearAlias_momentary_door : public CFuncMoveLinear {
public:
}; // size: 0x838

class __declspec(align(8)) CGunTarget : public CBaseToggle {
public:
    bool m_on; // 0x7b0
    // CHandle< CBaseEntity > m_hTargetEnt;
    char pad_33[3];
    char m_hTargetEnt[1]; // 0x7b4
    char pad_34[3];
    CEntityIOOutput m_OnDeath; // 0x7b8
}; // size: 0x7d0

class __declspec(align(8)) CTriggerGameEvent : public CBaseTrigger {
public:
    // CUtlString m_strStartTouchEventName;
    char m_strStartTouchEventName[1]; // 0x890
    // CUtlString m_strEndTouchEventName;
    char pad_38[7];
    char m_strEndTouchEventName[1]; // 0x898
    // CUtlString m_strTriggerID;
    char pad_39[7];
    char m_strTriggerID[1]; // 0x8a0
    char pad_040[7];
}; // size: 0x8a8

class __declspec(align(8)) CRuleBrushEntity : public CRuleEntity {
public:
}; // size: 0x738

class __declspec(align(8)) CGameEnd : public CRulePointEntity {
public:
}; // size: 0x740

class __declspec(align(8)) CGameText : public CRulePointEntity {
public:
    // CUtlSymbolLarge m_iszMessage;
    char m_iszMessage[1]; // 0x740
    char pad_33[4];
    hudtextparms_t m_textParms; // 0x748
    char pad_034[4];
}; // size: 0x760

class __declspec(align(8)) CGamePlayerZone : public CRuleBrushEntity {
public:
    CEntityIOOutput m_OnPlayerInZone; // 0x738
    CEntityIOOutput m_OnPlayerOutZone; // 0x750
    // CEntityOutputTemplate< int32, int32 > m_PlayersInCount;
    char m_PlayersInCount[1]; // 0x768
    // CEntityOutputTemplate< int32, int32 > m_PlayersOutCount;
    char pad_32[31];
    char m_PlayersOutCount[1]; // 0x788
    char pad_033[31];
}; // size: 0x7a8

class __declspec(align(8)) CSimpleMarkupVolumeTagged : public CMarkupVolumeTagged {
public:
}; // size: 0x770

class __declspec(align(8)) CMarkupVolumeTagged_Nav : public CMarkupVolumeTagged {
public:
    NavScopeFlags_t m_nScopes; // 0x770
    char pad_035[7];
}; // size: 0x778

class __declspec(align(8)) CMarkupVolumeTagged_NavGame : public CMarkupVolumeWithRef {
public:
    NavScopeFlags_t m_nScopes; // 0x798
    bool m_bFloodFillAttribute; // 0x799
    bool m_bSplitNavSpace; // 0x79a
    char pad_037[5];
}; // size: 0x7a0

class __declspec(align(8)) CFuncElectrifiedVolume : public CFuncBrush {
public:
    // CUtlSymbolLarge m_EffectName;
    char m_EffectName[1]; // 0x750
    // CUtlSymbolLarge m_EffectInterpenetrateName;
    char pad_34[7];
    char m_EffectInterpenetrateName[1]; // 0x758
    // CUtlSymbolLarge m_EffectZapName;
    char pad_35[7];
    char m_EffectZapName[1]; // 0x760
    // CUtlSymbolLarge m_iszEffectSource;
    char pad_36[7];
    char m_iszEffectSource[1]; // 0x768
    char pad_037[31];
}; // size: 0x788

class __declspec(align(8)) CPathCornerCrash : public CPathCorner {
public:
}; // size: 0x4c8

class __declspec(align(16)) CConstraintAnchor : public CBaseAnimGraph {
public:
    float m_massScale; // 0xa20
    char pad_036[12];
}; // size: 0xa30

class __declspec(align(16)) COrnamentProp : public CDynamicProp {
public:
    // CUtlSymbolLarge m_initialOwner;
    char m_initialOwner[1]; // 0xc50
    char pad_053[15];
}; // size: 0xc60

class __declspec(align(8)) CRopeKeyframeAlias_move_rope : public CRopeKeyframe {
public:
}; // size: 0x788

class __declspec(align(8)) CSceneEntityAlias_logic_choreographed_scene : public CSceneEntity {
public:
}; // size: 0x730

class __declspec(align(8)) CInstancedSceneEntity : public CSceneEntity {
public:
    // CHandle< CBaseEntity > m_hOwner;
    char m_hOwner[1]; // 0x730
    char pad_52[3];
    bool m_bHadOwner; // 0x734
    float m_flPostSpeakDelay; // 0x738
    float m_flPreDelay; // 0x73c
    bool m_bIsBackground; // 0x740
    bool m_bRemoveOnCompletion; // 0x741
    // CHandle< CBaseEntity > m_hTarget;
    char pad_53[2];
    char m_hTarget[1]; // 0x744
    char pad_054[3];
}; // size: 0x748

class __declspec(align(8)) CSpriteAlias_env_glow : public CSprite {
public:
}; // size: 0x7a0

class __declspec(align(8)) CFuncTankTrain : public CFuncTrackTrain {
public:
    CEntityIOOutput m_OnDeath; // 0x858
}; // size: 0x870

class __declspec(align(8)) CFuncPlatRot : public CFuncPlat {
public:
    QAngle m_end; // 0x7e0
    QAngle m_start; // 0x7ec
}; // size: 0x7f8

class __declspec(align(8)) CFuncTrain : public CBasePlatTrain {
public:
    // CHandle< CBaseEntity > m_hCurrentTarget;
    char m_hCurrentTarget[1]; // 0x7d8
    char pad_36[3];
    bool m_activated; // 0x7dc
    // CHandle< CBaseEntity > m_hEnemy;
    char pad_37[3];
    char m_hEnemy[1]; // 0x7e0
    float m_flBlockDamage; // 0x7e4
    GameTime_t m_flNextBlockTime; // 0x7e8
    // CUtlSymbolLarge m_iszLastTarget;
    char pad_38[4];
    char m_iszLastTarget[1]; // 0x7f0
    char pad_039[7];
}; // size: 0x7f8

class __declspec(align(8)) CFuncTrackChange : public CFuncPlatRot {
public:
    CPathTrack* m_trackTop; // 0x7f8
    CPathTrack* m_trackBottom; // 0x800
    CFuncTrackTrain* m_train; // 0x808
    // CUtlSymbolLarge m_trackTopName;
    char m_trackTopName[1]; // 0x810
    // CUtlSymbolLarge m_trackBottomName;
    char pad_37[7];
    char m_trackBottomName[1]; // 0x818
    // CUtlSymbolLarge m_trainName;
    char pad_38[7];
    char m_trainName[1]; // 0x820
    char pad_39[4];
    TRAIN_CODE m_code; // 0x828
    int32_t m_targetState; // 0x82c
    int32_t m_use; // 0x830
    char pad_040[4];
}; // size: 0x838

class __declspec(align(8)) CFuncTrackAuto : public CFuncTrackChange {
public:
}; // size: 0x838

class __declspec(align(8)) CTriggerRemove : public CBaseTrigger {
public:
    CEntityIOOutput m_OnRemove; // 0x890
}; // size: 0x8a8

class __declspec(align(8)) CTriggerPush : public CBaseTrigger {
public:
    QAngle m_angPushEntitySpace; // 0x890
    Vector m_vecPushDirEntitySpace; // 0x89c
    bool m_bTriggerOnStartTouch; // 0x8a8
    bool m_bUsePathSimple; // 0x8a9
    // CUtlSymbolLarge m_iszPathSimpleName;
    char pad_38[6];
    char m_iszPathSimpleName[1]; // 0x8b0
    CPathSimple* m_PathSimple; // 0x8b8
    uint32_t m_splinePushType; // 0x8c0
    char pad_039[4];
}; // size: 0x8c8

class __declspec(align(8)) CScriptTriggerPush : public CTriggerPush {
public:
    Vector m_vExtent; // 0x8c8
    char pad_040[4];
}; // size: 0x8d8

class __declspec(align(8)) CTriggerToggleSave : public CBaseTrigger {
public:
}; // size: 0x890

class __declspec(align(8)) CTriggerSave : public CBaseTrigger {
public:
    bool m_bForceNewLevelUnit; // 0x890
    float m_fDangerousTimer; // 0x894
    int32_t m_minHitPoints; // 0x898
    char pad_038[4];
}; // size: 0x8a0

class __declspec(align(8)) CTriggerGravity : public CBaseTrigger {
public:
}; // size: 0x890

class __declspec(align(8)) CTriggerProximity : public CBaseTrigger {
public:
    // CHandle< CBaseEntity > m_hMeasureTarget;
    char m_hMeasureTarget[1]; // 0x890
    // CUtlSymbolLarge m_iszMeasureTarget;
    char pad_38[7];
    char m_iszMeasureTarget[1]; // 0x898
    char pad_39[4];
    float m_fRadius; // 0x8a0
    int32_t m_nTouchers; // 0x8a4
    // CEntityOutputTemplate< float32, float32 > m_NearestEntityDistance;
    char m_NearestEntityDistance[1]; // 0x8a8
    char pad_040[31];
}; // size: 0x8c8

class __declspec(align(8)) CServerRagdollTrigger : public CBaseTrigger {
public:
}; // size: 0x890

class __declspec(align(8)) CTriggerActiveWeaponDetect : public CBaseTrigger {
public:
    CEntityIOOutput m_OnTouchedActiveWeapon; // 0x890
    // CUtlSymbolLarge m_iszWeaponClassName;
    char m_iszWeaponClassName[1]; // 0x8a8
    char pad_038[7];
}; // size: 0x8b0

class __declspec(align(8)) CTriggerPhysics : public CBaseTrigger {
public:
    char pad_38[16];
    float m_gravityScale; // 0x8a0
    float m_linearLimit; // 0x8a4
    float m_linearDamping; // 0x8a8
    float m_angularLimit; // 0x8ac
    float m_angularDamping; // 0x8b0
    float m_linearForce; // 0x8b4
    float m_flFrequency; // 0x8b8
    float m_flDampingRatio; // 0x8bc
    Vector m_vecLinearForcePointAt; // 0x8c0
    bool m_bCollapseToForcePoint; // 0x8cc
    Vector m_vecLinearForcePointAtWorld; // 0x8d0
    Vector m_vecLinearForceDirection; // 0x8dc
    bool m_bConvertToDebrisWhenPossible; // 0x8e8
    char pad_039[7];
}; // size: 0x8f0

class __declspec(align(8)) CTriggerDetectBulletFire : public CBaseTrigger {
public:
    bool m_bPlayerFireOnly; // 0x890
    char pad_38[7];
    CEntityIOOutput m_OnDetectedBulletFire; // 0x898
}; // size: 0x8b0

class __declspec(align(8)) CTriggerDetectExplosion : public CBaseTrigger {
public:
    char pad_38[40];
    CEntityIOOutput m_OnDetectedExplosion; // 0x8b8
}; // size: 0x8d0

class __declspec(align(8)) CScriptNavBlocker : public CFuncNavBlocker {
public:
    Vector m_vExtent; // 0x748
    char pad_033[4];
}; // size: 0x758

class __declspec(align(16)) CBasePropDoor : public CDynamicProp {
public:
    char pad_53[16];
    float m_flAutoReturnDelay; // 0xc60
    // CUtlVector< CHandle< CBasePropDoor > > m_hDoorList;
    char pad_54[4];
    char m_hDoorList[1]; // 0xc68
    char pad_55[20];
    int32_t m_nHardwareType; // 0xc80
    bool m_bNeedsHardware; // 0xc84
    DoorState_t m_eDoorState; // 0xc88
    bool m_bLocked; // 0xc8c
    bool m_bNoNPCs; // 0xc8d
    Vector m_closedPosition; // 0xc90
    QAngle m_closedAngles; // 0xc9c
    // CHandle< CBaseEntity > m_hBlocker;
    char m_hBlocker[1]; // 0xca8
    char pad_56[3];
    bool m_bFirstBlocked; // 0xcac
    locksound_t m_ls; // 0xcb0
    bool m_bForceClosed; // 0xcd0
    // VectorWS m_vecLatchWorldPosition;
    char pad_57[3];
    char m_vecLatchWorldPosition[1]; // 0xcd4
    // CHandle< CBaseEntity > m_hActivator;
    char pad_58[11];
    char m_hActivator[1]; // 0xce0
    // CUtlSymbolLarge m_SoundMoving;
    char pad_59[23];
    char m_SoundMoving[1]; // 0xcf8
    // CUtlSymbolLarge m_SoundOpen;
    char pad_60[7];
    char m_SoundOpen[1]; // 0xd00
    // CUtlSymbolLarge m_SoundClose;
    char pad_61[7];
    char m_SoundClose[1]; // 0xd08
    // CUtlSymbolLarge m_SoundLock;
    char pad_62[7];
    char m_SoundLock[1]; // 0xd10
    // CUtlSymbolLarge m_SoundUnlock;
    char pad_63[7];
    char m_SoundUnlock[1]; // 0xd18
    // CUtlSymbolLarge m_SoundLatch;
    char pad_64[7];
    char m_SoundLatch[1]; // 0xd20
    // CUtlSymbolLarge m_SoundPound;
    char pad_65[7];
    char m_SoundPound[1]; // 0xd28
    // CUtlSymbolLarge m_SoundJiggle;
    char pad_66[7];
    char m_SoundJiggle[1]; // 0xd30
    // CUtlSymbolLarge m_SoundLockedAnim;
    char pad_67[7];
    char m_SoundLockedAnim[1]; // 0xd38
    char pad_68[4];
    int32_t m_numCloseAttempts; // 0xd40
    // CUtlStringToken m_nPhysicsMaterial;
    char m_nPhysicsMaterial[1]; // 0xd44
    // CUtlSymbolLarge m_SlaveName;
    char pad_69[3];
    char m_SlaveName[1]; // 0xd48
    // CHandle< CBasePropDoor > m_hMaster;
    char pad_70[7];
    char m_hMaster[1]; // 0xd50
    char pad_71[7];
    CEntityIOOutput m_OnBlockedClosing; // 0xd58
    CEntityIOOutput m_OnBlockedOpening; // 0xd70
    CEntityIOOutput m_OnUnblockedClosing; // 0xd88
    CEntityIOOutput m_OnUnblockedOpening; // 0xda0
    CEntityIOOutput m_OnFullyClosed; // 0xdb8
    CEntityIOOutput m_OnFullyOpen; // 0xdd0
    CEntityIOOutput m_OnClose; // 0xde8
    CEntityIOOutput m_OnOpen; // 0xe00
    CEntityIOOutput m_OnLockedUse; // 0xe18
    CEntityIOOutput m_OnAjarOpen; // 0xe30
    char pad_072[8];
}; // size: 0xe50

class __declspec(align(8)) CEnvLaser : public CBeam {
public:
    // CUtlSymbolLarge m_iszLaserTarget;
    char m_iszLaserTarget[1]; // 0x7d0
    CSprite* m_pSprite; // 0x7d8
    // CUtlSymbolLarge m_iszSpriteName;
    char m_iszSpriteName[1]; // 0x7e0
    char pad_38[4];
    Vector m_firePosition; // 0x7e8
    float m_flStartFrame; // 0x7f4
}; // size: 0x7f8

class __declspec(align(16)) CRagdollProp : public CBaseAnimGraph {
public:
    char pad_36[16];
    ragdoll_t m_ragdoll; // 0xa30
    bool m_bStartDisabled; // 0xa80
    // CNetworkUtlVectorBase< bool > m_ragEnabled;
    char pad_37[7];
    char m_ragEnabled[1]; // 0xa88
    // CNetworkUtlVectorBase< Vector > m_ragPos;
    char pad_38[23];
    char m_ragPos[1]; // 0xaa0
    // CNetworkUtlVectorBase< QAngle > m_ragAngles;
    char pad_39[23];
    char m_ragAngles[1]; // 0xab8
    char pad_40[20];
    uint32_t m_lastUpdateTickCount; // 0xad0
    bool m_allAsleep; // 0xad4
    bool m_bFirstCollisionAfterLaunch; // 0xad5
    // CHandle< CBaseEntity > m_hDamageEntity;
    char pad_41[2];
    char m_hDamageEntity[1]; // 0xad8
    // CHandle< CBaseEntity > m_hKiller;
    char pad_42[3];
    char m_hKiller[1]; // 0xadc
    // CHandle< CBasePlayerPawn > m_hPhysicsAttacker;
    char pad_43[3];
    char m_hPhysicsAttacker[1]; // 0xae0
    GameTime_t m_flLastPhysicsInfluenceTime; // 0xae4
    GameTime_t m_flFadeOutStartTime; // 0xae8
    float m_flFadeTime; // 0xaec
    // VectorWS m_vecLastOrigin;
    char m_vecLastOrigin[1]; // 0xaf0
    char pad_44[8];
    GameTime_t m_flAwakeTime; // 0xafc
    GameTime_t m_flLastOriginChangeTime; // 0xb00
    // CUtlSymbolLarge m_strOriginClassName;
    char pad_45[4];
    char m_strOriginClassName[1]; // 0xb08
    // CUtlSymbolLarge m_strSourceClassName;
    char pad_46[7];
    char m_strSourceClassName[1]; // 0xb10
    char pad_47[7];
    bool m_bHasBeenPhysgunned; // 0xb18
    bool m_bAllowStretch; // 0xb19
    float m_flBlendWeight; // 0xb1c
    float m_flDefaultFadeScale; // 0xb20
    // CUtlVector< Vector > m_ragdollMins;
    char pad_48[4];
    char m_ragdollMins[1]; // 0xb28
    // CUtlVector< Vector > m_ragdollMaxs;
    char pad_49[23];
    char m_ragdollMaxs[1]; // 0xb40
    char pad_50[23];
    bool m_bShouldDeleteActivationRecord; // 0xb58
    char pad_051[23];
}; // size: 0xb70

class __declspec(align(16)) CPhysMagnet : public CBaseAnimGraph {
public:
    CEntityIOOutput m_OnMagnetAttach; // 0xa20
    CEntityIOOutput m_OnMagnetDetach; // 0xa38
    float m_massScale; // 0xa50
    float m_forceLimit; // 0xa54
    float m_torqueLimit; // 0xa58
    // CUtlVector< magnetted_objects_t > m_MagnettedEntities;
    char pad_36[4];
    char m_MagnettedEntities[1]; // 0xa60
    char pad_37[23];
    bool m_bActive; // 0xa78
    bool m_bHasHitSomething; // 0xa79
    float m_flTotalMass; // 0xa7c
    float m_flRadius; // 0xa80
    GameTime_t m_flNextSuckTime; // 0xa84
    int32_t m_iMaxObjectsAttached; // 0xa88
    char pad_038[4];
}; // size: 0xa90

class __declspec(align(16)) CPhysicsPropOverride : public CPhysicsProp {
public:
}; // size: 0xce0

class __declspec(align(16)) CPhysicsPropRespawnable : public CPhysicsProp {
public:
    // VectorWS m_vOriginalSpawnOrigin;
    char m_vOriginalSpawnOrigin[1]; // 0xce0
    char pad_57[8];
    QAngle m_vOriginalSpawnAngles; // 0xcec
    Vector m_vOriginalMins; // 0xcf8
    Vector m_vOriginalMaxs; // 0xd04
    float m_flRespawnDuration; // 0xd10
    char pad_058[12];
}; // size: 0xd20

class __declspec(align(8)) CTriggerMultiple : public CBaseTrigger {
public:
    CEntityIOOutput m_OnTrigger; // 0x890
}; // size: 0x8a8

class __declspec(align(8)) CTriggerSndSosOpvar : public CBaseTrigger {
public:
    // CUtlVector< CHandle< CBaseEntity > > m_hTouchingPlayers;
    char m_hTouchingPlayers[1]; // 0x890
    char pad_38[20];
    Vector m_flPosition; // 0x8a8
    float m_flCenterSize; // 0x8b4
    float m_flMinVal; // 0x8b8
    float m_flMaxVal; // 0x8bc
    // CUtlSymbolLarge m_opvarName;
    char m_opvarName[1]; // 0x8c0
    // CUtlSymbolLarge m_stackName;
    char pad_39[7];
    char m_stackName[1]; // 0x8c8
    // CUtlSymbolLarge m_operatorName;
    char pad_40[7];
    char m_operatorName[1]; // 0x8d0
    char pad_41[7];
    bool m_bVolIs2D; // 0x8d8
    char m_opvarNameChar[256]; // 0x8d9
    char m_stackNameChar[256]; // 0x9d9
    char m_operatorNameChar[256]; // 0xad9
    Vector m_VecNormPos; // 0xbdc
    float m_flNormCenterSize; // 0xbe8
    char pad_042[4];
}; // size: 0xbf0

class __declspec(align(8)) CTriggerHurt : public CBaseTrigger {
public:
    float m_flOriginalDamage; // 0x890
    float m_flDamage; // 0x894
    float m_flDamageCap; // 0x898
    GameTime_t m_flLastDmgTime; // 0x89c
    float m_flForgivenessDelay; // 0x8a0
    DamageTypes_t m_bitsDamageInflict; // 0x8a4
    int32_t m_damageModel; // 0x8a8
    bool m_bNoDmgForce; // 0x8ac
    Vector m_vDamageForce; // 0x8b0
    bool m_thinkAlways; // 0x8bc
    float m_hurtThinkPeriod; // 0x8c0
    char pad_38[4];
    CEntityIOOutput m_OnHurt; // 0x8c8
    CEntityIOOutput m_OnHurtPlayer; // 0x8e0
    // CUtlVector< CHandle< CBaseEntity > > m_hurtEntities;
    char m_hurtEntities[1]; // 0x8f8
    char pad_039[23];
}; // size: 0x910

class __declspec(align(8)) CTriggerCallback : public CBaseTrigger {
public:
    char pad_038[8];
}; // size: 0x898

class __declspec(align(8)) CTriggerLerpObject : public CBaseTrigger {
public:
    // CUtlSymbolLarge m_iszLerpTarget;
    char m_iszLerpTarget[1]; // 0x890
    // CHandle< CBaseEntity > m_hLerpTarget;
    char pad_38[7];
    char m_hLerpTarget[1]; // 0x898
    // CUtlSymbolLarge m_iszLerpTargetAttachment;
    char pad_39[7];
    char m_iszLerpTargetAttachment[1]; // 0x8a0
    char pad_40[7];
    AttachmentHandle_t m_hLerpTargetAttachment; // 0x8a8
    float m_flLerpDuration; // 0x8ac
    bool m_bAttachedEntityWasParented; // 0x8b0
    bool m_bLerpRestoreMoveType; // 0x8b1
    bool m_bSingleLerpObject; // 0x8b2
    // CUtlVector< lerpdata_t > m_vecLerpingObjects;
    char pad_41[5];
    char m_vecLerpingObjects[1]; // 0x8b8
    // CUtlSymbolLarge m_iszLerpEffect;
    char pad_42[23];
    char m_iszLerpEffect[1]; // 0x8d0
    // CUtlSymbolLarge m_iszLerpSound;
    char pad_43[7];
    char m_iszLerpSound[1]; // 0x8d8
    char pad_44[7];
    bool m_bAttachTouchingObject; // 0x8e0
    // CHandle< CBaseEntity > m_hEntityToWaitForDisconnect;
    char pad_45[3];
    char m_hEntityToWaitForDisconnect[1]; // 0x8e4
    char pad_46[3];
    CEntityIOOutput m_OnLerpStarted; // 0x8e8
    CEntityIOOutput m_OnLerpFinished; // 0x900
    CEntityIOOutput m_OnDetached; // 0x918
}; // size: 0x930

class __declspec(align(8)) CChangeLevel : public CBaseTrigger {
public:
    // CUtlString m_sMapName;
    char m_sMapName[1]; // 0x890
    // CUtlString m_sLandmarkName;
    char pad_38[7];
    char m_sLandmarkName[1]; // 0x898
    char pad_39[7];
    CEntityIOOutput m_OnChangeLevel; // 0x8a0
    bool m_bTouched; // 0x8b8
    bool m_bNoTouch; // 0x8b9
    bool m_bNewChapter; // 0x8ba
    bool m_bOnChangeLevelFired; // 0x8bb
    char pad_040[4];
}; // size: 0x8c0

class __declspec(align(8)) CTriggerTeleport : public CBaseTrigger {
public:
    // CUtlSymbolLarge m_iLandmark;
    char m_iLandmark[1]; // 0x890
    char pad_38[7];
    bool m_bUseLandmarkAngles; // 0x898
    bool m_bMirrorPlayer; // 0x899
    bool m_bCheckDestIfClearForPlayer; // 0x89a
    char pad_039[5];
}; // size: 0x8a0

class __declspec(align(16)) CWaterBullet : public CBaseAnimGraph {
public:
}; // size: 0xa20

class __declspec(align(16)) CEconWearable : public CEconEntity {
public:
    int32_t m_nForceSkin; // 0xde0
    bool m_bAlwaysAllow; // 0xde4
    char pad_042[11];
}; // size: 0xdf0

class __declspec(align(16)) CBaseGrenade : public CBaseFlex {
public:
    char pad_39[8];
    CEntityIOOutput m_OnPlayerPickup; // 0xab8
    CEntityIOOutput m_OnExplode; // 0xad0
    bool m_bHasWarnedAI; // 0xae8
    bool m_bIsSmokeGrenade; // 0xae9
    bool m_bIsLive; // 0xaea
    float m_DmgRadius; // 0xaec
    GameTime_t m_flDetonateTime; // 0xaf0
    float m_flWarnAITime; // 0xaf4
    float m_flDamage; // 0xaf8
    // CUtlSymbolLarge m_iszBounceSound;
    char pad_40[4];
    char m_iszBounceSound[1]; // 0xb00
    // CUtlString m_ExplosionSound;
    char pad_41[7];
    char m_ExplosionSound[1]; // 0xb08
    // CHandle< CCSPlayerPawn > m_hThrower;
    char pad_42[11];
    char m_hThrower[1]; // 0xb14
    char pad_43[20];
    GameTime_t m_flNextAttack; // 0xb2c
    // CHandle< CCSPlayerPawn > m_hOriginalThrower;
    char m_hOriginalThrower[1]; // 0xb30
    char pad_044[15];
}; // size: 0xb40

class __declspec(align(16)) CFuncRetakeBarrier : public CDynamicProp {
public:
    char pad_053[32];
}; // size: 0xc70

class __declspec(align(8)) CBombTarget : public CBaseTrigger {
public:
    CEntityIOOutput m_OnBombExplode; // 0x890
    CEntityIOOutput m_OnBombPlanted; // 0x8a8
    CEntityIOOutput m_OnBombDefused; // 0x8c0
    bool m_bIsBombSiteB; // 0x8d8
    bool m_bIsHeistBombTarget; // 0x8d9
    bool m_bBombPlantedHere; // 0x8da
    // CUtlSymbolLarge m_szMountTarget;
    char pad_38[5];
    char m_szMountTarget[1]; // 0x8e0
    // CHandle< CBaseEntity > m_hInstructorHint;
    char pad_39[7];
    char m_hInstructorHint[1]; // 0x8e8
    int32_t m_nBombSiteDesignation; // 0x8ec
}; // size: 0x8f0

class __declspec(align(8)) CHostageRescueZoneShim : public CBaseTrigger {
public:
}; // size: 0x890

class __declspec(align(8)) CHostageRescueZone : public CHostageRescueZoneShim {
public:
    char pad_038[32];
}; // size: 0x8b0

class __declspec(align(8)) CTriggerBuoyancy : public CBaseTrigger {
public:
    CBuoyancyHelper m_BuoyancyHelper; // 0x890
    float m_flFluidDensity; // 0x9a8
    char pad_038[4];
}; // size: 0x9b0

class __declspec(align(16)) CPhysicsPropMultiplayer : public CPhysicsProp {
public:
}; // size: 0xce0

class __declspec(align(8)) CFootstepControl : public CBaseTrigger {
public:
    // CUtlSymbolLarge m_source;
    char m_source[1]; // 0x890
    // CUtlSymbolLarge m_destination;
    char pad_38[7];
    char m_destination[1]; // 0x898
    char pad_039[7];
}; // size: 0x8a0

class __declspec(align(16)) CPlantedC4 : public CBaseAnimGraph {
public:
    char pad_36[8];
    bool m_bBombTicking; // 0xa28
    GameTime_t m_flC4Blow; // 0xa2c
    int32_t m_nBombSite; // 0xa30
    int32_t m_nSourceSoundscapeHash; // 0xa34
    bool m_bAbortDetonationBecauseWorldIsFrozen; // 0xa38
    CAttributeContainer m_AttributeManager; // 0xa40
    CEntityIOOutput m_OnBombDefused; // 0xd38
    CEntityIOOutput m_OnBombBeginDefuse; // 0xd50
    CEntityIOOutput m_OnBombDefuseAborted; // 0xd68
    bool m_bCannotBeDefused; // 0xd80
    char pad_37[4];
    EntitySpottedState_t m_entitySpottedState; // 0xd88
    int32_t m_nSpotRules; // 0xda0
    bool m_bHasExploded; // 0xda4
    bool m_bBombDefused; // 0xda5
    bool m_bTrainingPlacedByPlayer; // 0xda6
    float m_flTimerLength; // 0xda8
    bool m_bBeingDefused; // 0xdac
    char pad_38[4];
    GameTime_t m_fLastDefuseTime; // 0xdb4
    char pad_39[4];
    float m_flDefuseLength; // 0xdbc
    GameTime_t m_flDefuseCountDown; // 0xdc0
    // CHandle< CCSPlayerPawn > m_hBombDefuser;
    char m_hBombDefuser[1]; // 0xdc4
    int32_t m_iProgressBarTime; // 0xdc8
    bool m_bVoiceAlertFired; // 0xdcc
    bool m_bVoiceAlertPlayed[4]; // 0xdcd
    GameTime_t m_flNextBotBeepTime; // 0xdd4
    char pad_40[4];
    QAngle m_angCatchUpToPlayerEye; // 0xddc
    GameTime_t m_flLastSpinDetectionTime; // 0xde8
    char pad_041[4];
}; // size: 0xdf0

class __declspec(align(16)) CBaseCSGrenadeProjectile : public CBaseGrenade {
public:
    Vector m_vInitialPosition; // 0xb40
    Vector m_vInitialVelocity; // 0xb4c
    int32_t m_nBounces; // 0xb58
    // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nExplodeEffectIndex;
    char pad_45[4];
    char m_nExplodeEffectIndex[1]; // 0xb60
    char pad_46[4];
    int32_t m_nExplodeEffectTickBegin; // 0xb68
    Vector m_vecExplodeEffectOrigin; // 0xb6c
    GameTime_t m_flSpawnTime; // 0xb78
    uint8_t m_unOGSExtraFlags; // 0xb7c
    bool m_bDetonationRecorded; // 0xb7d
    uint16_t m_nItemIndex; // 0xb7e
    Vector m_vecOriginalSpawnLocation; // 0xb80
    GameTime_t m_flLastBounceSoundTime; // 0xb8c
    // RotationVector m_vecGrenadeSpin;
    char m_vecGrenadeSpin[1]; // 0xb90
    char pad_47[8];
    Vector m_vecLastHitSurfaceNormal; // 0xb9c
    int32_t m_nTicksAtZeroVelocity; // 0xba8
    bool m_bHasEverHitEnemy; // 0xbac
    char pad_048[3];
}; // size: 0xbb0

class __declspec(align(16)) CItemDogtags : public CItem {
public:
    // CHandle< CCSPlayerPawn > m_OwningPlayer;
    char m_OwningPlayer[1]; // 0xac0
    // CHandle< CCSPlayerPawn > m_KillingPlayer;
    char pad_40[3];
    char m_KillingPlayer[1]; // 0xac4
    char pad_041[11];
}; // size: 0xad0

class __declspec(align(8)) CBuyZone : public CBaseTrigger {
public:
    int32_t m_LegacyTeamNum; // 0x890
    char pad_038[4];
}; // size: 0x898

class __declspec(align(8)) CTriggerBombReset : public CBaseTrigger {
public:
}; // size: 0x890

class __declspec(align(8)) CTriggerHostageReset : public CBaseTrigger {
public:
}; // size: 0x890

class __declspec(align(16)) CFlashbangProjectile : public CBaseCSGrenadeProjectile {
public:
    float m_flTimeToDetonate; // 0xbb0
    uint8_t m_numOpponentsHit; // 0xbb4
    uint8_t m_numTeammatesHit; // 0xbb5
    char pad_049[10];
}; // size: 0xbc0

class __declspec(align(16)) CHEGrenadeProjectile : public CBaseCSGrenadeProjectile {
public:
}; // size: 0xbb0

class __declspec(align(16)) CChicken : public CDynamicProp {
public:
    char pad_53[32];
    CAttributeContainer m_AttributeManager; // 0xc70
    CountdownTimer m_updateTimer; // 0xf68
    Vector m_stuckAnchor; // 0xf80
    char pad_54[4];
    CountdownTimer m_stuckTimer; // 0xf90
    CountdownTimer m_collisionStuckTimer; // 0xfa8
    bool m_isOnGround; // 0xfc0
    Vector m_vFallVelocity; // 0xfc4
    ChickenActivity m_desiredActivity; // 0xfd0
    ChickenActivity m_currentActivity; // 0xfd4
    CountdownTimer m_activityTimer; // 0xfd8
    float m_turnRate; // 0xff0
    // CHandle< CBaseEntity > m_fleeFrom;
    char m_fleeFrom[1]; // 0xff4
    CountdownTimer m_moveRateThrottleTimer; // 0xff8
    CountdownTimer m_startleTimer; // 0x1010
    CountdownTimer m_vocalizeTimer; // 0x1028
    GameTime_t m_flWhenZombified; // 0x1040
    bool m_jumpedThisFrame; // 0x1044
    // CHandle< CCSPlayerPawn > m_leader;
    char pad_55[3];
    char m_leader[1]; // 0x1048
    char pad_56[20];
    CountdownTimer m_reuseTimer; // 0x1060
    bool m_hasBeenUsed; // 0x1078
    char pad_57[4];
    CountdownTimer m_jumpTimer; // 0x1080
    float m_flLastJumpTime; // 0x1098
    bool m_bInJump; // 0x109c
    char pad_58[8200];
    CountdownTimer m_repathTimer; // 0x30a8
    char pad_59[128];
    Vector m_vecPathGoal; // 0x3140
    GameTime_t m_flActiveFollowStartTime; // 0x314c
    CountdownTimer m_followMinuteTimer; // 0x3150
    char pad_60[8];
    CountdownTimer m_BlockDirectionTimer; // 0x3170
    char pad_061[8];
}; // size: 0x3190

class __declspec(align(16)) CHostageCarriableProp : public CBaseAnimGraph {
public:
}; // size: 0xa20

class __declspec(align(16)) CItemAssaultSuit : public CItem {
public:
}; // size: 0xac0

class __declspec(align(16)) CItemKevlar : public CItem {
public:
}; // size: 0xac0

class __declspec(align(16)) CItemDefuser : public CItem {
public:
    EntitySpottedState_t m_entitySpottedState; // 0xac0
    int32_t m_nSpotRules; // 0xad8
    char pad_040[4];
}; // size: 0xae0

class __declspec(align(8)) CTonemapTrigger : public CBaseTrigger {
public:
    // CUtlSymbolLarge m_tonemapControllerName;
    char m_tonemapControllerName[1]; // 0x890
    // CEntityHandle m_hTonemapController;
    char pad_38[7];
    char m_hTonemapController[1]; // 0x898
    char pad_039[7];
}; // size: 0x8a0

class __declspec(align(8)) CFogTrigger : public CBaseTrigger {
public:
    fogparams_t m_fog; // 0x890
}; // size: 0x8f8

class __declspec(align(8)) CEnvParticleGlow : public CParticleSystem {
public:
    float m_flAlphaScale; // 0xca8
    float m_flRadiusScale; // 0xcac
    float m_flSelfIllumScale; // 0xcb0
    // Color m_ColorTint;
    char m_ColorTint[1]; // 0xcb4
    // CStrongHandle< InfoForResourceTypeCTextureBase > m_hTextureOverride;
    char pad_38[3];
    char m_hTextureOverride[1]; // 0xcb8
    char pad_039[7];
}; // size: 0xcc0

class __declspec(align(16)) CBaseFlexAlias_funCBaseFlex : public CBaseFlex {
public:
}; // size: 0xab0

class __declspec(align(16)) CScriptItem : public CItem {
public:
    MoveType_t m_MoveTypeOverride; // 0xac0
    char pad_040[15];
}; // size: 0xad0

class __declspec(align(16)) CRagdollPropAlias_physics_prop_ragdoll : public CRagdollProp {
public:
}; // size: 0xb70

class __declspec(align(16)) CRagdollPropAttached : public CRagdollProp {
public:
    uint32_t m_boneIndexAttached; // 0xb70
    uint32_t m_ragdollAttachedObjectIndex; // 0xb74
    Vector m_attachmentPointBoneSpace; // 0xb78
    Vector m_attachmentPointRagdollSpace; // 0xb84
    bool m_bShouldDetach; // 0xb90
    char pad_52[15];
    bool m_bShouldDeleteAttachedActivationRecord; // 0xba0
    char pad_053[15];
}; // size: 0xbb0

class __declspec(align(16)) CPropDoorRotating : public CBasePropDoor {
public:
    Vector m_vecAxis; // 0xe50
    float m_flDistance; // 0xe5c
    PropDoorRotatingSpawnPos_t m_eSpawnPosition; // 0xe60
    PropDoorRotatingOpenDirection_e m_eOpenDirection; // 0xe64
    PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // 0xe68
    doorCheck_e m_eDefaultCheckDirection; // 0xe6c
    float m_flAjarAngle; // 0xe70
    QAngle m_angRotationAjarDeprecated; // 0xe74
    QAngle m_angRotationClosed; // 0xe80
    QAngle m_angRotationOpenForward; // 0xe8c
    QAngle m_angRotationOpenBack; // 0xe98
    QAngle m_angGoal; // 0xea4
    Vector m_vecForwardBoundsMin; // 0xeb0
    Vector m_vecForwardBoundsMax; // 0xebc
    Vector m_vecBackBoundsMin; // 0xec8
    Vector m_vecBackBoundsMax; // 0xed4
    bool m_bAjarDoorShouldntAlwaysOpen; // 0xee0
    // CHandle< CEntityBlocker > m_hEntityBlocker;
    char pad_73[3];
    char m_hEntityBlocker[1]; // 0xee4
    char pad_074[11];
}; // size: 0xef0

class __declspec(align(16)) CPropDoorRotatingBreakable : public CPropDoorRotating {
public:
    bool m_bBreakable; // 0xef0
    bool m_isAbleToCloseAreaPortals; // 0xef1
    int32_t m_currentDamageState; // 0xef4
    // CUtlVector< CUtlSymbolLarge > m_damageStates;
    char m_damageStates[1]; // 0xef8
    char pad_075[23];
}; // size: 0xf10

class __declspec(align(8)) CScriptTriggerHurt : public CTriggerHurt {
public:
    Vector m_vExtent; // 0x910
    char pad_040[4];
}; // size: 0x920

class __declspec(align(8)) CScriptTriggerMultiple : public CTriggerMultiple {
public:
    Vector m_vExtent; // 0x8a8
    char pad_038[4];
}; // size: 0x8b8

class __declspec(align(8)) CTriggerOnce : public CTriggerMultiple {
public:
}; // size: 0x8a8

class __declspec(align(8)) CScriptTriggerOnce : public CTriggerOnce {
public:
    Vector m_vExtent; // 0x8a8
    char pad_038[4];
}; // size: 0x8b8

class __declspec(align(8)) CTriggerLook : public CTriggerOnce {
public:
    // CHandle< CBaseEntity > m_hLookTarget;
    char m_hLookTarget[1]; // 0x8a8
    float m_flFieldOfView; // 0x8ac
    float m_flLookTime; // 0x8b0
    float m_flLookTimeTotal; // 0x8b4
    GameTime_t m_flLookTimeLast; // 0x8b8
    float m_flTimeoutDuration; // 0x8bc
    bool m_bTimeoutFired; // 0x8c0
    bool m_bIsLooking; // 0x8c1
    bool m_b2DFOV; // 0x8c2
    bool m_bUseVelocity; // 0x8c3
    bool m_bTestOcclusion; // 0x8c4
    bool m_bTestAllVisibleOcclusion; // 0x8c5
    char pad_38[2];
    CEntityIOOutput m_OnTimeout; // 0x8c8
    CEntityIOOutput m_OnStartLook; // 0x8e0
    CEntityIOOutput m_OnEndLook; // 0x8f8
}; // size: 0x910

class __declspec(align(8)) CTriggerImpact : public CTriggerMultiple {
public:
    float m_flMagnitude; // 0x8a8
    float m_flNoise; // 0x8ac
    float m_flViewkick; // 0x8b0
    // CEntityOutputTemplate< Vector, Vector > m_pOutputForce;
    char pad_38[4];
    char m_pOutputForce[1]; // 0x8b8
    char pad_039[39];
}; // size: 0x8e0

class __declspec(align(8)) CDynamicNavConnectionsVolume : public CTriggerMultiple {
public:
    // CUtlSymbolLarge m_iszConnectionTarget;
    char m_iszConnectionTarget[1]; // 0x8a8
    // CUtlVector< DynamicVolumeDef_t > m_vecConnections;
    char pad_38[7];
    char m_vecConnections[1]; // 0x8b0
    // CGlobalSymbol m_sTransitionType;
    char pad_39[23];
    char m_sTransitionType[1]; // 0x8c8
    char pad_40[7];
    bool m_bConnectionsEnabled; // 0x8d0
    float m_flTargetAreaSearchRadius; // 0x8d4
    float m_flUpdateDistance; // 0x8d8
    float m_flMaxConnectionDistance; // 0x8dc
}; // size: 0x8e0

class __declspec(align(16)) CCSWeaponBase : public CBasePlayerWeapon {
public:
    bool m_bRemoveable; // 0xe20
    bool m_bPlayerAmmoStockOnPickup; // 0xe21
    bool m_bRequireUseToTouch; // 0xe22
    WeaponGameplayAnimState m_iWeaponGameplayAnimState; // 0xe24
    GameTime_t m_flWeaponGameplayAnimStateTimestamp; // 0xe28
    GameTime_t m_flInspectCancelCompleteTime; // 0xe2c
    bool m_bInspectPending; // 0xe30
    bool m_bInspectShouldLoop; // 0xe31
    char pad_43[40];
    int32_t m_nLastEmptySoundCmdNum; // 0xe5c
    char pad_44[24];
    bool m_bFireOnEmpty; // 0xe78
    char pad_45[7];
    CEntityIOOutput m_OnPlayerPickup; // 0xe80
    CSWeaponMode m_weaponMode; // 0xe98
    float m_flTurningInaccuracyDelta; // 0xe9c
    Vector m_vecTurningInaccuracyEyeDirLast; // 0xea0
    float m_flTurningInaccuracy; // 0xeac
    float m_fAccuracyPenalty; // 0xeb0
    GameTime_t m_flLastAccuracyUpdateTime; // 0xeb4
    float m_fAccuracySmoothedForZoom; // 0xeb8
    int32_t m_iRecoilIndex; // 0xebc
    float m_flRecoilIndex; // 0xec0
    bool m_bBurstMode; // 0xec4
    GameTick_t m_nPostponeFireReadyTicks; // 0xec8
    float m_flPostponeFireReadyFrac; // 0xecc
    bool m_bInReload; // 0xed0
    GameTime_t m_flDroppedAtTime; // 0xed4
    bool m_bIsHauledBack; // 0xed8
    bool m_bSilencerOn; // 0xed9
    GameTime_t m_flTimeSilencerSwitchComplete; // 0xedc
    float m_flWeaponActionPlaybackRate; // 0xee0
    int32_t m_iOriginalTeamNumber; // 0xee4
    int32_t m_iMostRecentTeamNumber; // 0xee8
    bool m_bDroppedNearBuyZone; // 0xeec
    float m_flNextAttackRenderTimeOffset; // 0xef0
    char pad_46[20];
    bool m_bCanBePickedUp; // 0xf08
    bool m_bUseCanOverrideNextOwnerTouchTime; // 0xf09
    GameTime_t m_nextOwnerTouchTime; // 0xf0c
    GameTime_t m_nextPrevOwnerTouchTime; // 0xf10
    char pad_47[4];
    GameTime_t m_nextPrevOwnerUseTime; // 0xf18
    // CHandle< CCSPlayerPawn > m_hPrevOwner;
    char m_hPrevOwner[1]; // 0xf1c
    GameTick_t m_nDropTick; // 0xf20
    bool m_bWasActiveWeaponWhenDropped; // 0xf24
    char pad_48[31];
    bool m_donated; // 0xf44
    GameTime_t m_fLastShotTime; // 0xf48
    bool m_bWasOwnedByCT; // 0xf4c
    bool m_bWasOwnedByTerrorist; // 0xf4d
    int32_t m_numRemoveUnownedWeaponThink; // 0xf50
    char pad_49[4];
    CIronSightController m_IronSightController; // 0xf58
    int32_t m_iIronSightMode; // 0xf70
    GameTime_t m_flLastLOSTraceFailureTime; // 0xf74
    float m_flWatTickOffset; // 0xf78
    char pad_50[12];
    GameTime_t m_flLastShakeTime; // 0xf88
    char pad_051[420];
}; // size: 0x1130

class __declspec(align(16)) CCSWeaponBaseGun : public CCSWeaponBase {
public:
    int32_t m_zoomLevel; // 0x1130
    int32_t m_iBurstShotsRemaining; // 0x1134
    char pad_52[8];
    int32_t m_silencedModelIndex; // 0x1140
    bool m_inPrecache; // 0x1144
    bool m_bNeedsBoltAction; // 0x1145
    int32_t m_nRevolverCylinderIdx; // 0x1148
    bool m_bSkillReloadAvailable; // 0x114c
    bool m_bSkillReloadLiftedReloadKey; // 0x114d
    bool m_bSkillBoltInterruptAvailable; // 0x114e
    bool m_bSkillBoltLiftedFireKey; // 0x114f
}; // size: 0x1150

class __declspec(align(16)) CCSWeaponBaseShotgun : public CCSWeaponBase {
public:
}; // size: 0x1130

class __declspec(align(16)) CC4 : public CCSWeaponBase {
public:
    char pad_52[48];
    Vector m_vecLastValidPlayerHeldPosition; // 0x1160
    Vector m_vecLastValidDroppedPosition; // 0x116c
    bool m_bDoValidDroppedPositionCheck; // 0x1178
    bool m_bStartedArming; // 0x1179
    GameTime_t m_fArmedTime; // 0x117c
    bool m_bBombPlacedAnimation; // 0x1180
    bool m_bIsPlantingViaUse; // 0x1181
    char pad_53[4];
    EntitySpottedState_t m_entitySpottedState; // 0x1188
    int32_t m_nSpotRules; // 0x11a0
    bool m_bPlayedArmingBeeps[7]; // 0x11a4
    bool m_bBombPlanted; // 0x11ab
    char pad_054[4];
}; // size: 0x11b0

class __declspec(align(16)) CWeaponCZ75a : public CCSWeaponBaseGun {
public:
    bool m_bMagazineRemoved; // 0x1150
    char pad_053[15];
}; // size: 0x1160

class __declspec(align(16)) CDEagle : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponElite : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponTaser : public CCSWeaponBaseGun {
public:
    GameTime_t m_fFireTime; // 0x1150
    int32_t m_nLastAttackTick; // 0x1154
    char pad_053[8];
}; // size: 0x1160

class __declspec(align(16)) CKnife : public CCSWeaponBase {
public:
    bool m_bFirstAttack; // 0x1130
    char pad_052[15];
}; // size: 0x1140

class __declspec(align(16)) CMolotovProjectile : public CBaseCSGrenadeProjectile {
public:
    bool m_bIsIncGrenade; // 0xbb0
    char pad_49[23];
    bool m_bDetonated; // 0xbc8
    char pad_50[4];
    IntervalTimer m_stillTimer; // 0xbd0
    char pad_051[208];
}; // size: 0xcb0

class __declspec(align(16)) CDecoyProjectile : public CBaseCSGrenadeProjectile {
public:
    char pad_49[24];
    int32_t m_nDecoyShotTick; // 0xbc8
    int32_t m_shotsRemaining; // 0xbcc
    GameTime_t m_fExpireTime; // 0xbd0
    char pad_50[12];
    uint16_t m_decoyWeaponDefIndex; // 0xbe0
    char pad_051[14];
}; // size: 0xbf0

class __declspec(align(16)) CSmokeGrenadeProjectile : public CBaseCSGrenadeProjectile {
public:
    char pad_49[40];
    int32_t m_nSmokeEffectTickBegin; // 0xbd8
    bool m_bDidSmokeEffect; // 0xbdc
    int32_t m_nRandomSeed; // 0xbe0
    Vector m_vSmokeColor; // 0xbe4
    Vector m_vSmokeDetonationPos; // 0xbf0
    // CNetworkUtlVectorBase< uint8 > m_VoxelFrameData;
    char pad_50[4];
    char m_VoxelFrameData[1]; // 0xc00
    char pad_51[20];
    int32_t m_nVoxelFrameDataSize; // 0xc18
    int32_t m_nVoxelUpdate; // 0xc1c
    GameTime_t m_flLastBounce; // 0xc20
    GameTime_t m_fllastSimulationTime; // 0xc24
    char pad_52[8832];
    bool m_bExplodeFromInferno; // 0x2ea8
    bool m_bDidGroundScorch; // 0x2ea9
    char pad_053[6];
}; // size: 0x2eb0

class __declspec(align(16)) CBaseCSGrenade : public CCSWeaponBase {
public:
    bool m_bRedraw; // 0x1130
    bool m_bIsHeldByPlayer; // 0x1131
    bool m_bPinPulled; // 0x1132
    bool m_bJumpThrow; // 0x1133
    bool m_bThrowAnimating; // 0x1134
    GameTime_t m_fThrowTime; // 0x1138
    float m_flThrowStrength; // 0x113c
    GameTime_t m_fDropTime; // 0x1140
    GameTime_t m_fPinPullTime; // 0x1144
    bool m_bJustPulledPin; // 0x1148
    GameTick_t m_nNextHoldTick; // 0x114c
    float m_flNextHoldFrac; // 0x1150
    // CHandle< CCSWeaponBase > m_hSwitchToWeaponAfterThrow;
    char m_hSwitchToWeaponAfterThrow[1]; // 0x1154
    char pad_052[27];
}; // size: 0x1170

class __declspec(align(16)) CWeaponBaseItem : public CCSWeaponBase {
public:
    bool m_bSequenceInProgress; // 0x1130
    bool m_bRedraw; // 0x1131
    char pad_052[14];
}; // size: 0x1140

class __declspec(align(16)) CItem_Healthshot : public CWeaponBaseItem {
public:
}; // size: 0x1140

class __declspec(align(16)) CHostageExpresserShim : public CBaseCombatCharacter {
public:
    CAI_Expresser* m_pExpresser; // 0xb70
    char pad_044[8];
}; // size: 0xb80

class __declspec(align(16)) CHostage : public CHostageExpresserShim {
public:
    char pad_45[24];
    CEntityIOOutput m_OnHostageBeginGrab; // 0xb98
    CEntityIOOutput m_OnFirstPickedUp; // 0xbb0
    CEntityIOOutput m_OnDroppedNotRescued; // 0xbc8
    CEntityIOOutput m_OnRescued; // 0xbe0
    EntitySpottedState_t m_entitySpottedState; // 0xbf8
    int32_t m_nSpotRules; // 0xc10
    uint32_t m_uiHostageSpawnExclusionGroupMask; // 0xc14
    uint32_t m_nHostageSpawnRandomFactor; // 0xc18
    bool m_bRemove; // 0xc1c
    Vector m_vel; // 0xc20
    bool m_isRescued; // 0xc2c
    bool m_jumpedThisFrame; // 0xc2d
    int32_t m_nHostageState; // 0xc30
    // CHandle< CBaseEntity > m_leader;
    char m_leader[1]; // 0xc34
    // CHandle< CCSPlayerPawnBase > m_lastLeader;
    char pad_46[3];
    char m_lastLeader[1]; // 0xc38
    char pad_47[4];
    CountdownTimer m_reuseTimer; // 0xc40
    bool m_hasBeenUsed; // 0xc58
    Vector m_accel; // 0xc5c
    bool m_isRunning; // 0xc68
    bool m_isCrouching; // 0xc69
    char pad_48[4];
    CountdownTimer m_jumpTimer; // 0xc70
    bool m_isWaitingForLeader; // 0xc88
    char pad_49[8204];
    CountdownTimer m_repathTimer; // 0x2c98
    CountdownTimer m_inhibitDoorTimer; // 0x2cb0
    char pad_50[120];
    CountdownTimer m_inhibitObstacleAvoidanceTimer; // 0x2d40
    char pad_51[8];
    CountdownTimer m_wiggleTimer; // 0x2d60
    char pad_52[4];
    bool m_isAdjusted; // 0x2d7c
    bool m_bHandsHaveBeenCut; // 0x2d7d
    // CHandle< CCSPlayerPawn > m_hHostageGrabber;
    char pad_53[2];
    char m_hHostageGrabber[1]; // 0x2d80
    GameTime_t m_fLastGrabTime; // 0x2d84
    Vector m_vecPositionWhenStartedDroppingToGround; // 0x2d88
    Vector m_vecGrabbedPos; // 0x2d94
    GameTime_t m_flRescueStartTime; // 0x2da0
    GameTime_t m_flGrabSuccessTime; // 0x2da4
    GameTime_t m_flDropStartTime; // 0x2da8
    int32_t m_nApproachRewardPayouts; // 0x2dac
    int32_t m_nPickupEventCount; // 0x2db0
    Vector m_vecSpawnGroundPos; // 0x2db4
    // VectorWS m_vecHostageResetPosition;
    char pad_54[44];
    char m_vecHostageResetPosition[1]; // 0x2dec
    char pad_055[19];
}; // size: 0x2e00

class __declspec(align(16)) CHostageAlias_info_hostage_spawn : public CHostage {
public:
}; // size: 0x2e00

class __declspec(align(16)) CItemDefuserAlias_item_defuser : public CItemDefuser {
public:
}; // size: 0xae0

class __declspec(align(16)) CAK47 : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponAug : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponAWP : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponBizon : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponFamas : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponFiveSeven : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponG3SG1 : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponGalilAR : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponGlock : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponHKP2000 : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponUSPSilencer : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponM4A1 : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponM4A1Silencer : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponMAC10 : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponMag7 : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponMP5SD : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponMP7 : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponMP9 : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponNegev : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponP250 : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponP90 : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponSCAR20 : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponSG556 : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponSSG08 : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponTec9 : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponUMP45 : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponM249 : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponRevolver : public CCSWeaponBaseGun {
public:
}; // size: 0x1150

class __declspec(align(16)) CWeaponNOVA : public CCSWeaponBaseShotgun {
public:
}; // size: 0x1130

class __declspec(align(16)) CWeaponSawedoff : public CCSWeaponBaseShotgun {
public:
}; // size: 0x1130

class __declspec(align(16)) CWeaponXM1014 : public CCSWeaponBaseShotgun {
public:
}; // size: 0x1130

class __declspec(align(16)) CMolotovGrenade : public CBaseCSGrenade {
public:
}; // size: 0x1170

class __declspec(align(16)) CIncendiaryGrenade : public CMolotovGrenade {
public:
}; // size: 0x1170

class __declspec(align(16)) CDecoyGrenade : public CBaseCSGrenade {
public:
}; // size: 0x1170

class __declspec(align(16)) CFlashbang : public CBaseCSGrenade {
public:
}; // size: 0x1170

class __declspec(align(16)) CHEGrenade : public CBaseCSGrenade {
public:
}; // size: 0x1170

class __declspec(align(16)) CSmokeGrenade : public CBaseCSGrenade {
public:
    char pad_053[16];
}; // size: 0x1180

#ifdef __cplusplus
#pragma warning(pop)
#endif // __cplusplus