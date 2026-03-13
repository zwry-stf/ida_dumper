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


/// JointAxis_t
_enum JointAxis_t0 : uint32_t {
    JOINT_AXIS_X = 0,
    JOINT_AXIS_Y = 1,
    JOINT_AXIS_Z = 2,
    JOINT_AXIS_COUNT = 3,
};

/// JointMotion_t
_enum JointMotion_t0 : uint32_t {
    JOINT_MOTION_FREE = 0,
    JOINT_MOTION_LOCKED = 1,
    JOINT_MOTION_COUNT = 2,
};

/// DynamicContinuousContactBehavior_t
_enum DynamicContinuousContactBehavior_t0 : uint8_t {
    DYNAMIC_CONTINUOUS_ALLOW_IF_REQUESTED_BY_OTHER_BODY = 0,
    DYNAMIC_CONTINUOUS_ALWAYS = 1,
    DYNAMIC_CONTINUOUS_NEVER = 2,
};

/// constraint_breakableparams_t
class __declspec(align(4)) constraint_breakableparams_t0 {
public:
    float strength; // 0x0
    float forceLimit; // 0x4
    float torqueLimit; // 0x8
    float bodyMassScale[2]; // 0xc
    bool isActive; // 0x14
    char pad_00[3];
}; // size: 0x18

/// constraint_axislimit_t
class __declspec(align(4)) constraint_axislimit_t0 {
public:
    float flMinRotation; // 0x0
    float flMaxRotation; // 0x4
    float flMotorTargetAngSpeed; // 0x8
    float flMotorMaxTorque; // 0xc
}; // size: 0x10

/// constraint_hingeparams_t
class __declspec(align(4)) constraint_hingeparams_t0 {
public:
    Vector worldPosition; // 0x0
    Vector worldAxisDirection; // 0xc
    constraint_axislimit_t hingeAxis; // 0x18
    constraint_breakableparams_t constraint; // 0x28
}; // size: 0x40

/// IPhysicsPlayerController
class __declspec(align(1)) IPhysicsPlayerController0 {
public:
    char pad_00[8];
}; // size: 0x8

/// CFeJiggleBone
class __declspec(align(4)) CFeJiggleBone0 {
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
    Vector m_vPoint0; // 0x80
    Vector m_vPoint1; // 0x8c
    uint16_t m_nCollisionMask; // 0x98
    char pad_00[2];
}; // size: 0x9c

/// CFeNamedJiggleBone
class __declspec(align(16)) CFeNamedJiggleBone0 {
public:
    // CUtlString m_strParentBone;
    char m_strParentBone[1]; // 0x0
    // CTransform m_transform;
    char pad_00[15];
    char m_transform[1]; // 0x10
    char pad_01[28];
    uint32_t m_nJiggleParent; // 0x30
    CFeJiggleBone m_jiggleBone; // 0x34
}; // size: 0xd0

/// CFeIndexedJiggleBone
class __declspec(align(4)) CFeIndexedJiggleBone0 {
public:
    uint32_t m_nNode; // 0x0
    uint32_t m_nJiggleParent; // 0x4
    CFeJiggleBone m_jiggleBone; // 0x8
}; // size: 0xa4

/// FeNodeBase_t
class __declspec(align(16)) FeNodeBase_t0 {
public:
    uint16_t nNode; // 0x0
    uint16_t nDummy[3]; // 0x2
    uint16_t nNodeX0; // 0x8
    uint16_t nNodeX1; // 0xa
    uint16_t nNodeY0; // 0xc
    uint16_t nNodeY1; // 0xe
    // QuaternionStorage qAdjust;
    char qAdjust[1]; // 0x10
    char pad_00[15];
}; // size: 0x20

/// FeSimdNodeBase_t
class __declspec(align(16)) FeSimdNodeBase_t0 {
public:
    uint16_t nNode[4]; // 0x0
    uint16_t nNodeX0[4]; // 0x8
    uint16_t nNodeX1[4]; // 0x10
    uint16_t nNodeY0[4]; // 0x18
    uint16_t nNodeY1[4]; // 0x20
    uint16_t nDummy[4]; // 0x28
    FourQuaternions qAdjust; // 0x30
}; // size: 0x70

/// FeQuad_t
class __declspec(align(4)) FeQuad_t0 {
public:
    uint16_t nNode[4]; // 0x0
    float flSlack; // 0x8
    Vector4D vShape; // 0xc
    char pad_00[48];
}; // size: 0x4c

/// FeSimdQuad_t
class __declspec(align(16)) FeSimdQuad_t0 {
public:
    uint16_t nNode[4]; // 0x0
    // fltx4 f4Slack;
    char pad_00[24];
    char f4Slack[1]; // 0x20
    // FourVectors[4] vShape;
    char pad_01[15];
    char vShape[1]; // 0x30
    // fltx4[4] f4Weights;
    char pad_02[191];
    char f4Weights[1]; // 0xf0
    char pad_03[63];
}; // size: 0x130

/// FeSimdTri_t
class __declspec(align(16)) FeSimdTri_t0 {
public:
    uint32_t nNode[4]; // 0x0
    // fltx4 w1;
    char pad_00[32];
    char w1[1]; // 0x30
    // fltx4 w2;
    char pad_01[15];
    char w2[1]; // 0x40
    // fltx4 v1x;
    char pad_02[15];
    char v1x[1]; // 0x50
    FourVectors2D v2; // 0x60
}; // size: 0x80

/// FeSimdRodConstraint_t
class __declspec(align(16)) FeSimdRodConstraint_t0 {
public:
    uint16_t nNode[4]; // 0x0
    // fltx4 f4MaxDist;
    char pad_00[8];
    char f4MaxDist[1]; // 0x10
    // fltx4 f4MinDist;
    char pad_01[15];
    char f4MinDist[1]; // 0x20
    // fltx4 f4Weight0;
    char pad_02[15];
    char f4Weight0[1]; // 0x30
    // fltx4 f4RelaxationFactor;
    char pad_03[15];
    char f4RelaxationFactor[1]; // 0x40
    char pad_04[15];
}; // size: 0x50

/// FeSimdRodConstraintAnim_t
class __declspec(align(16)) FeSimdRodConstraintAnim_t0 {
public:
    uint16_t nNode[4]; // 0x0
    // fltx4 f4Weight0;
    char pad_00[8];
    char f4Weight0[1]; // 0x10
    // fltx4 f4RelaxationFactor;
    char pad_01[15];
    char f4RelaxationFactor[1]; // 0x20
    char pad_02[15];
}; // size: 0x30

/// FeRodConstraint_t
class __declspec(align(4)) FeRodConstraint_t0 {
public:
    uint16_t nNode[2]; // 0x0
    float flMaxDist; // 0x4
    float flMinDist; // 0x8
    float flWeight0; // 0xc
    float flRelaxationFactor; // 0x10
}; // size: 0x14

/// FeTwistConstraint_t
class __declspec(align(4)) FeTwistConstraint_t0 {
public:
    uint16_t nNodeOrient; // 0x0
    uint16_t nNodeEnd; // 0x2
    float flTwistRelax; // 0x4
    float flSwingRelax; // 0x8
}; // size: 0xc

/// FeHingeLimit_t
class __declspec(align(4)) FeHingeLimit_t0 {
public:
    uint16_t nNode[6]; // 0x0
    uint32_t nFlags; // 0xc
    float flWeight4; // 0x10
    float flWeight5; // 0x14
    float flAngleCenter; // 0x18
    float flAngleExtents; // 0x1c
}; // size: 0x20

/// FeDynKinLink_t
class __declspec(align(2)) FeDynKinLink_t0 {
public:
    uint16_t m_nParent; // 0x0
    uint16_t m_nChild; // 0x2
}; // size: 0x4

/// FeAntiTunnelProbe_t
class __declspec(align(4)) FeAntiTunnelProbe_t0 {
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

/// FeNodeStrayBox_t
class __declspec(align(16)) FeNodeStrayBox_t0 {
public:
    Vector vMin; // 0x0
    uint32_t nFlags; // 0xc
    Vector vMax; // 0x10
    uint16_t nNode[2]; // 0x1c
}; // size: 0x20

/// FeAxialEdgeBend_t
class __declspec(align(4)) FeAxialEdgeBend_t0 {
public:
    float te; // 0x0
    float tv; // 0x4
    float flDist; // 0x8
    float flWeight[4]; // 0xc
    uint16_t nNode[6]; // 0x1c
}; // size: 0x28

/// FeCtrlOffset_t
class __declspec(align(4)) FeCtrlOffset_t0 {
public:
    Vector vOffset; // 0x0
    uint16_t nCtrlParent; // 0xc
    uint16_t nCtrlChild; // 0xe
}; // size: 0x10

/// FeCtrlOsOffset_t
class __declspec(align(4)) FeCtrlOsOffset_t0 {
public:
    uint16_t nCtrlParent; // 0x0
    uint16_t nCtrlChild; // 0x2
}; // size: 0x4

/// FeFollowNode_t
class __declspec(align(4)) FeFollowNode_t0 {
public:
    uint16_t nParentNode; // 0x0
    uint16_t nChildNode; // 0x2
    float flWeight; // 0x4
}; // size: 0x8

/// FeCollisionPlane_t
class __declspec(align(4)) FeCollisionPlane_t0 {
public:
    uint16_t nCtrlParent; // 0x0
    uint16_t nChildNode; // 0x2
    RnPlane_t m_Plane; // 0x4
    float flStrength; // 0x14
}; // size: 0x18

/// FeNodeIntegrator_t
class __declspec(align(4)) FeNodeIntegrator_t0 {
public:
    float flPointDamping; // 0x0
    float flAnimationForceAttraction; // 0x4
    float flAnimationVertexAttraction; // 0x8
    float flGravity; // 0xc
}; // size: 0x10

/// FeSpringIntegrator_t
class __declspec(align(4)) FeSpringIntegrator_t0 {
public:
    uint16_t nNode[2]; // 0x0
    float flSpringRestLength; // 0x4
    float flSpringConstant; // 0x8
    float flSpringDamping; // 0xc
    float flNodeWeight0; // 0x10
}; // size: 0x14

/// FeSimdSpringIntegrator_t
class __declspec(align(16)) FeSimdSpringIntegrator_t0 {
public:
    uint16_t nNode[4]; // 0x0
    // fltx4 flSpringRestLength;
    char pad_00[8];
    char flSpringRestLength[1]; // 0x10
    // fltx4 flSpringConstant;
    char pad_01[15];
    char flSpringConstant[1]; // 0x20
    // fltx4 flSpringDamping;
    char pad_02[15];
    char flSpringDamping[1]; // 0x30
    // fltx4 flNodeWeight0;
    char pad_03[15];
    char flNodeWeight0[1]; // 0x40
    char pad_04[15];
}; // size: 0x50

/// FeWorldCollisionParams_t
class __declspec(align(4)) FeWorldCollisionParams_t0 {
public:
    float flWorldFriction; // 0x0
    float flGroundFriction; // 0x4
    uint16_t nListBegin; // 0x8
    uint16_t nListEnd; // 0xa
}; // size: 0xc

/// FeTaperedCapsuleStretch_t
class __declspec(align(4)) FeTaperedCapsuleStretch_t0 {
public:
    uint16_t nNode[2]; // 0x0
    uint16_t nCollisionMask; // 0x4
    uint16_t nDummy; // 0x6
    float flRadius[2]; // 0x8
}; // size: 0x10

/// FeTaperedCapsuleRigid_t
class __declspec(align(16)) FeTaperedCapsuleRigid_t0 {
public:
    // fltx4[2] vSphere;
    char vSphere[1]; // 0x0
    char pad_00[30];
    uint16_t nNode; // 0x20
    uint16_t nCollisionMask; // 0x22
    uint16_t nVertexMapIndex; // 0x24
    uint16_t nFlags; // 0x26
    char pad_01[8];
}; // size: 0x30

/// FeSphereRigid_t
class __declspec(align(16)) FeSphereRigid_t0 {
public:
    // fltx4 vSphere;
    char vSphere[1]; // 0x0
    char pad_00[14];
    uint16_t nNode; // 0x10
    uint16_t nCollisionMask; // 0x12
    uint16_t nVertexMapIndex; // 0x14
    uint16_t nFlags; // 0x16
    char pad_01[8];
}; // size: 0x20

/// FeTreeChildren_t
class __declspec(align(2)) FeTreeChildren_t0 {
public:
    uint16_t nChild[2]; // 0x0
}; // size: 0x4

/// FeFitMatrix_t
class __declspec(align(16)) FeFitMatrix_t0 {
public:
    // CTransform bone;
    char bone[1]; // 0x0
    char pad_00[28];
    Vector vCenter; // 0x20
    uint16_t nEnd; // 0x2c
    uint16_t nNode; // 0x2e
    uint16_t nBeginDynamic; // 0x30
    char pad_01[14];
}; // size: 0x40

/// FeFitWeight_t
class __declspec(align(4)) FeFitWeight_t0 {
public:
    float flWeight; // 0x0
    uint16_t nNode; // 0x4
    uint16_t nDummy; // 0x6
}; // size: 0x8

/// FeNodeReverseOffset_t
class __declspec(align(4)) FeNodeReverseOffset_t0 {
public:
    Vector vOffset; // 0x0
    uint16_t nBoneCtrl; // 0xc
    uint16_t nTargetNode; // 0xe
}; // size: 0x10

/// FeAnimStrayRadius_t
class __declspec(align(4)) FeAnimStrayRadius_t0 {
public:
    uint16_t nNode[2]; // 0x0
    float flMaxDist; // 0x4
    float flRelaxationFactor; // 0x8
}; // size: 0xc

/// FeSimdAnimStrayRadius_t
class __declspec(align(16)) FeSimdAnimStrayRadius_t0 {
public:
    uint16_t nNode[4]; // 0x0
    // fltx4 flMaxDist;
    char pad_00[8];
    char flMaxDist[1]; // 0x10
    // fltx4 flRelaxationFactor;
    char pad_01[15];
    char flRelaxationFactor[1]; // 0x20
    char pad_02[15];
}; // size: 0x30

/// FeKelagerBend2_t
class __declspec(align(4)) FeKelagerBend2_t0 {
public:
    float flWeight[3]; // 0x0
    float flHeight0; // 0xc
    uint16_t nNode[3]; // 0x10
    uint16_t nReserved; // 0x16
}; // size: 0x18

/// FeCtrlSoftOffset_t
class __declspec(align(4)) FeCtrlSoftOffset_t0 {
public:
    uint16_t nCtrlParent; // 0x0
    uint16_t nCtrlChild; // 0x2
    Vector vOffset; // 0x4
    float flAlpha; // 0x10
}; // size: 0x14

/// FeTri_t
class __declspec(align(4)) FeTri_t0 {
public:
    uint16_t nNode[3]; // 0x0
    float w1; // 0x8
    float w2; // 0xc
    float v1x; // 0x10
    Vector2D v2; // 0x14
}; // size: 0x1c

/// FeSDFRigid_t
class __declspec(align(8)) FeSDFRigid_t0 {
public:
    Vector vLocalMin; // 0x0
    Vector vLocalMax; // 0xc
    float flBounciness; // 0x18
    uint16_t nNode; // 0x1c
    uint16_t nCollisionMask; // 0x1e
    uint16_t nVertexMapIndex; // 0x20
    uint16_t nFlags; // 0x22
    // CUtlVector< float32 > m_Distances;
    char pad_00[4];
    char m_Distances[1]; // 0x28
    char pad_01[20];
    int32_t m_nWidth; // 0x40
    int32_t m_nHeight; // 0x44
    int32_t m_nDepth; // 0x48
    char pad_02[4];
}; // size: 0x50

/// FeBoxRigid_t
class __declspec(align(16)) FeBoxRigid_t0 {
public:
    // CTransform tmFrame2;
    char tmFrame2[1]; // 0x0
    char pad_00[30];
    uint16_t nNode; // 0x20
    uint16_t nCollisionMask; // 0x22
    Vector vSize; // 0x24
    uint16_t nVertexMapIndex; // 0x30
    uint16_t nFlags; // 0x32
    char pad_01[12];
}; // size: 0x40

/// FeRigidColliderIndices_t
class __declspec(align(2)) FeRigidColliderIndices_t0 {
public:
    uint16_t m_nTaperedCapsuleRigidIndex; // 0x0
    uint16_t m_nSphereRigidIndex; // 0x2
    uint16_t m_nBoxRigidIndex; // 0x4
    uint16_t m_nSDFRigidIndex; // 0x6
    uint16_t m_nCollisionPlaneIndex; // 0x8
}; // size: 0xa

/// FeMorphLayerDepr_t
class __declspec(align(8)) FeMorphLayerDepr_t0 {
public:
    // CUtlString m_Name;
    char m_Name[1]; // 0x0
    char pad_00[4];
    uint32_t m_nNameHash; // 0x8
    // CUtlVector< uint16 > m_Nodes;
    char pad_01[4];
    char m_Nodes[1]; // 0x10
    // CUtlVector< Vector > m_InitPos;
    char pad_02[23];
    char m_InitPos[1]; // 0x28
    // CUtlVector< float32 > m_Gravity;
    char pad_03[23];
    char m_Gravity[1]; // 0x40
    // CUtlVector< float32 > m_GoalStrength;
    char pad_04[23];
    char m_GoalStrength[1]; // 0x58
    // CUtlVector< float32 > m_GoalDamping;
    char pad_05[23];
    char m_GoalDamping[1]; // 0x70
    char pad_06[20];
    uint32_t m_nFlags; // 0x88
    char pad_07[4];
}; // size: 0x90

/// FeVertexMapDesc_t
class __declspec(align(8)) FeVertexMapDesc_t0 {
public:
    // CUtlString sName;
    char sName[1]; // 0x0
    char pad_00[4];
    uint32_t nNameHash; // 0x8
    uint32_t nColor; // 0xc
    uint32_t nFlags; // 0x10
    uint16_t nVertexBase; // 0x14
    uint16_t nVertexCount; // 0x16
    uint32_t nMapOffset; // 0x18
    uint32_t nNodeListOffset; // 0x1c
    Vector vCenterOfMass; // 0x20
    float flVolumetricSolveStrength; // 0x2c
    int16_t nScaleSourceNode; // 0x30
    uint16_t nNodeListCount; // 0x32
    char pad_01[4];
}; // size: 0x38

/// FeEffectDesc_t
class __declspec(align(8)) FeEffectDesc_t0 {
public:
    // CUtlString sName;
    char sName[1]; // 0x0
    char pad_00[4];
    uint32_t nNameHash; // 0x8
    int32_t nType; // 0xc
    // KeyValues3 m_Params;
    char m_Params[1]; // 0x10
    char pad_01[15];
}; // size: 0x20

/// FeNodeWindBase_t
class __declspec(align(2)) FeNodeWindBase_t0 {
public:
    uint16_t nNodeX0; // 0x0
    uint16_t nNodeX1; // 0x2
    uint16_t nNodeY0; // 0x4
    uint16_t nNodeY1; // 0x6
}; // size: 0x8

/// FeModelSelfCollisionLayer_t
class __declspec(align(8)) FeModelSelfCollisionLayer_t0 {
public:
    // CUtlString m_Name;
    char m_Name[1]; // 0x0
    // CUtlVector< uint16 > m_Nodes;
    char pad_00[7];
    char m_Nodes[1]; // 0x8
    char pad_01[20];
    float m_flParentReaction; // 0x20
    uint32_t m_nFlags; // 0x24
    uint32_t m_nEndIdx[4]; // 0x28
}; // size: 0x38

/// FourVectors2D
class __declspec(align(16)) FourVectors2D0 {
public:
    // fltx4 x;
    char x[1]; // 0x0
    // fltx4 y;
    char pad_00[15];
    char y[1]; // 0x10
    char pad_01[15];
}; // size: 0x20

/// FeEdgeDesc_t
class __declspec(align(2)) FeEdgeDesc_t0 {
public:
    uint16_t nEdge[2]; // 0x0
    uint16_t nSide[2]; // 0x4
    char pad_00[4];
    uint16_t nVirtElem[2]; // 0xc
}; // size: 0x10

/// OldFeEdge_t
class __declspec(align(4)) OldFeEdge_t0 {
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

/// FeWeightedNode_t
class __declspec(align(2)) FeWeightedNode_t0 {
public:
    uint16_t nNode; // 0x0
    uint16_t nWeight; // 0x2
}; // size: 0x4

/// FeStiffHingeBuild_t
class __declspec(align(4)) FeStiffHingeBuild_t0 {
public:
    float flMaxAngle; // 0x0
    float flStrength; // 0x4
    float flMotionBias[3]; // 0x8
    uint16_t nNode[3]; // 0x14
    char pad_00[2];
}; // size: 0x1c

/// FeBandBendLimit_t
class __declspec(align(4)) FeBandBendLimit_t0 {
public:
    float flDistMin; // 0x0
    float flDistMax; // 0x4
    uint16_t nNode[6]; // 0x8
}; // size: 0x14

/// FeHingeLimitBuild_t
class __declspec(align(4)) FeHingeLimitBuild_t0 {
public:
    uint16_t nNode[6]; // 0x0
    uint32_t nFlags; // 0xc
    float flLimitCW; // 0x10
    float flLimitCCW; // 0x14
}; // size: 0x18

/// FeAntiTunnelProbeBuild_t
class __declspec(align(8)) FeAntiTunnelProbeBuild_t0 {
public:
    float flWeight; // 0x0
    float flActivationDistance; // 0x4
    float flBias; // 0x8
    float flCurvature; // 0xc
    uint32_t nFlags; // 0x10
    uint16_t nProbeNode; // 0x14
    // CUtlVector< uint16 > targetNodes;
    char pad_00[2];
    char targetNodes[1]; // 0x18
    char pad_01[23];
}; // size: 0x30

/// FeAntiTunnelGroupBuild_t
class __declspec(align(4)) FeAntiTunnelGroupBuild_t0 {
public:
    uint32_t m_nVertexMapHash; // 0x0
    uint32_t m_nCollisionMask; // 0x4
}; // size: 0x8

/// FeSoftParent_t
class __declspec(align(4)) FeSoftParent_t0 {
public:
    int32_t nParent; // 0x0
    float flAlpha; // 0x4
}; // size: 0x8

/// RnPlane_t
class __declspec(align(4)) RnPlane_t0 {
public:
    Vector m_vNormal; // 0x0
    float m_flOffset; // 0xc
}; // size: 0x10

/// CovMatrix3
class __declspec(align(4)) CovMatrix30 {
public:
    Vector m_vDiag; // 0x0
    float m_flXY; // 0xc
    float m_flXZ; // 0x10
    float m_flYZ; // 0x14
}; // size: 0x18

/// FourCovMatrices3
class __declspec(align(16)) FourCovMatrices30 {
public:
    // FourVectors m_vDiag;
    char m_vDiag[1]; // 0x0
    // fltx4 m_flXY;
    char pad_00[47];
    char m_flXY[1]; // 0x30
    // fltx4 m_flXZ;
    char pad_01[15];
    char m_flXZ[1]; // 0x40
    // fltx4 m_flYZ;
    char pad_02[15];
    char m_flYZ[1]; // 0x50
    char pad_03[15];
}; // size: 0x60

/// FeFitInfluence_t
class __declspec(align(4)) FeFitInfluence_t0 {
public:
    uint32_t nVertexNode; // 0x0
    float flWeight; // 0x4
    uint32_t nMatrixNode; // 0x8
}; // size: 0xc

/// FeBuildTaperedCapsuleRigid_t
class __declspec(align(16)) FeBuildTaperedCapsuleRigid_t0 {
public:
    char pad_00[48];
    int32_t m_nPriority; // 0x30
    uint32_t m_nVertexMapHash; // 0x34
    uint32_t m_nAntitunnelGroupBits; // 0x38
    char pad_01[4];
}; // size: 0x40

/// FeBuildBoxRigid_t
class __declspec(align(16)) FeBuildBoxRigid_t0 {
public:
    char pad_00[64];
    int32_t m_nPriority; // 0x40
    uint32_t m_nVertexMapHash; // 0x44
    uint32_t m_nAntitunnelGroupBits; // 0x48
    char pad_01[4];
}; // size: 0x50

/// FeBuildSDFRigid_t
class __declspec(align(8)) FeBuildSDFRigid_t0 {
public:
    char pad_00[80];
    int32_t m_nPriority; // 0x50
    uint32_t m_nVertexMapHash; // 0x54
    uint32_t m_nAntitunnelGroupBits; // 0x58
    char pad_01[4];
}; // size: 0x60

/// FeBuildSphereRigid_t
class __declspec(align(16)) FeBuildSphereRigid_t0 {
public:
    char pad_00[32];
    int32_t m_nPriority; // 0x20
    uint32_t m_nVertexMapHash; // 0x24
    uint32_t m_nAntitunnelGroupBits; // 0x28
    char pad_01[4];
}; // size: 0x30

/// FeSourceEdge_t
class __declspec(align(2)) FeSourceEdge_t0 {
public:
    uint16_t nNode[2]; // 0x0
}; // size: 0x4

/// FeVertexMapBuild_t
class __declspec(align(8)) FeVertexMapBuild_t0 {
public:
    // CUtlString m_VertexMapName;
    char m_VertexMapName[1]; // 0x0
    char pad_00[4];
    uint32_t m_nNameHash; // 0x8
    // Color m_Color;
    char m_Color[1]; // 0xc
    float m_flVolumetricSolveStrength; // 0x10
    int32_t m_nScaleSourceNode; // 0x14
    // CUtlVector< float32 > m_Weights;
    char m_Weights[1]; // 0x18
    char pad_01[23];
}; // size: 0x30

/// CFeVertexMapBuildArray
class __declspec(align(8)) CFeVertexMapBuildArray0 {
public:
    // CUtlVector< FeVertexMapBuild_t* > m_Array;
    char m_Array[1]; // 0x0
    char pad_00[23];
}; // size: 0x18

/// FeProxyVertexMap_t
class __declspec(align(8)) FeProxyVertexMap_t0 {
public:
    // CUtlString m_Name;
    char m_Name[1]; // 0x0
    char pad_00[4];
    float m_flWeight; // 0x8
    char pad_01[4];
}; // size: 0x10

/// CFeMorphLayer
class __declspec(align(8)) CFeMorphLayer0 {
public:
    // CUtlString m_Name;
    char m_Name[1]; // 0x0
    char pad_00[4];
    uint32_t m_nNameHash; // 0x8
    // CUtlVector< uint16 > m_Nodes;
    char pad_01[4];
    char m_Nodes[1]; // 0x10
    // CUtlVector< Vector > m_InitPos;
    char pad_02[23];
    char m_InitPos[1]; // 0x28
    // CUtlVector< float32 > m_Gravity;
    char pad_03[23];
    char m_Gravity[1]; // 0x40
    // CUtlVector< float32 > m_GoalStrength;
    char pad_04[23];
    char m_GoalStrength[1]; // 0x58
    // CUtlVector< float32 > m_GoalDamping;
    char pad_05[23];
    char m_GoalDamping[1]; // 0x70
    char pad_06[23];
}; // size: 0x88

/// PhysicsParticleId_t
class __declspec(align(4)) PhysicsParticleId_t0 {
public:
    uint32_t m_Value; // 0x0
}; // size: 0x4

/// Dop26_t
class __declspec(align(4)) Dop26_t0 {
public:
    float m_flSupport[26]; // 0x0
}; // size: 0x68

/// RnCapsule_t
class __declspec(align(4)) RnCapsule_t0 {
public:
    Vector m_vCenter; // 0x0
    char pad_00[12];
    float m_flRadius; // 0x18
}; // size: 0x1c

/// RnVertex_t
class __declspec(align(1)) RnVertex_t0 {
public:
    uint8_t m_nEdge; // 0x0
}; // size: 0x1

/// RnHalfEdge_t
class __declspec(align(1)) RnHalfEdge_t0 {
public:
    uint8_t m_nNext; // 0x0
    uint8_t m_nTwin; // 0x1
    uint8_t m_nOrigin; // 0x2
    uint8_t m_nFace; // 0x3
}; // size: 0x4

/// RnFace_t
class __declspec(align(1)) RnFace_t0 {
public:
    uint8_t m_nEdge; // 0x0
}; // size: 0x1

/// CRegionSVM
class __declspec(align(8)) CRegionSVM0 {
public:
    // CUtlVector< RnPlane_t > m_Planes;
    char m_Planes[1]; // 0x0
    // CUtlVector< uint32 > m_Nodes;
    char pad_00[23];
    char m_Nodes[1]; // 0x18
    char pad_01[23];
}; // size: 0x30

/// RnHull_t
class __declspec(align(8)) RnHull_t0 {
public:
    Vector m_vCentroid; // 0x0
    float m_flMaxAngularRadius; // 0xc
    AABB_t m_Bounds; // 0x10
    Vector m_vOrthographicAreas; // 0x28
    // matrix3x4_t m_MassProperties;
    char m_MassProperties[1]; // 0x34
    char pad_00[44];
    float m_flVolume; // 0x64
    float m_flSurfaceArea; // 0x68
    // CUtlVector< RnVertex_t > m_Vertices;
    char pad_01[4];
    char m_Vertices[1]; // 0x70
    // CUtlVector< Vector > m_VertexPositions;
    char pad_02[23];
    char m_VertexPositions[1]; // 0x88
    // CUtlVector< RnHalfEdge_t > m_Edges;
    char pad_03[23];
    char m_Edges[1]; // 0xa0
    // CUtlVector< RnFace_t > m_Faces;
    char pad_04[23];
    char m_Faces[1]; // 0xb8
    // CUtlVector< RnPlane_t > m_FacePlanes;
    char pad_05[23];
    char m_FacePlanes[1]; // 0xd0
    char pad_06[20];
    uint32_t m_nFlags; // 0xe8
    CRegionSVM* m_pRegionSVM; // 0xf0
}; // size: 0xf8

/// RnTriangle_t
class __declspec(align(4)) RnTriangle_t0 {
public:
    int32_t m_nIndex[3]; // 0x0
}; // size: 0xc

/// RnWing_t
class __declspec(align(4)) RnWing_t0 {
public:
    int32_t m_nIndex[3]; // 0x0
}; // size: 0xc

/// RnNode_t
class __declspec(align(16)) RnNode_t0 {
public:
    Vector m_vMin; // 0x0
    uint32_t m_nChildren; // 0xc
    Vector m_vMax; // 0x10
    uint32_t m_nTriangleOffset; // 0x1c
}; // size: 0x20

/// RnMesh_t
class __declspec(align(8)) RnMesh_t0 {
public:
    Vector m_vMin; // 0x0
    Vector m_vMax; // 0xc
    // CUtlVector< RnNode_t > m_Nodes;
    char m_Nodes[1]; // 0x18
    // CUtlVectorSIMDPaddedVector m_Vertices;
    char pad_00[23];
    char m_Vertices[1]; // 0x30
    // CUtlVector< RnTriangle_t > m_Triangles;
    char pad_01[23];
    char m_Triangles[1]; // 0x48
    // CUtlVector< RnWing_t > m_Wings;
    char pad_02[23];
    char m_Wings[1]; // 0x60
    // CUtlVector< uint8 > m_TriangleEdgeFlags;
    char pad_03[23];
    char m_TriangleEdgeFlags[1]; // 0x78
    // CUtlVector< uint8 > m_Materials;
    char pad_04[23];
    char m_Materials[1]; // 0x90
    char pad_05[20];
    Vector m_vOrthographicAreas; // 0xa8
    uint32_t m_nFlags; // 0xb4
    uint32_t m_nDebugFlags; // 0xb8
    char pad_06[4];
}; // size: 0xc0

/// RnShapeDesc_t
class __declspec(align(8)) RnShapeDesc_t0 {
public:
    uint32_t m_nCollisionAttributeIndex; // 0x0
    uint32_t m_nSurfacePropertyIndex; // 0x4
    // CUtlString m_UserFriendlyName;
    char m_UserFriendlyName[1]; // 0x8
    char pad_00[7];
    bool m_bUserFriendlyNameSealed; // 0x10
    bool m_bUserFriendlyNameLong; // 0x11
    uint32_t m_nToolMaterialHash; // 0x14
}; // size: 0x18

/// RnBlendVertex_t
class __declspec(align(16)) RnBlendVertex_t0 {
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

/// CastSphereSATParams_t
class __declspec(align(8)) CastSphereSATParams_t0 {
public:
    Vector m_vRayStart; // 0x0
    Vector m_vRayDelta; // 0xc
    float m_flRadius; // 0x18
    float m_flMaxFraction; // 0x1c
    float m_flScale; // 0x20
    RnHull_t* m_pHull; // 0x28
}; // size: 0x30

/// RnBodyDesc_t
class __declspec(align(8)) RnBodyDesc_t0 {
public:
    // CUtlString m_sDebugName;
    char m_sDebugName[1]; // 0x0
    char pad_00[4];
    Vector m_vPosition; // 0x8
    // QuaternionStorage m_qOrientation;
    char m_qOrientation[1]; // 0x14
    char pad_01[12];
    Vector m_vLinearVelocity; // 0x24
    Vector m_vAngularVelocity; // 0x30
    Vector m_vLocalMassCenter; // 0x3c
    Vector m_LocalInertiaInv; // 0x48
    char pad_02[24];
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
    Vector m_vLastAwakeForceAccum; // 0x94
    Vector m_vLastAwakeTorqueAccum; // 0xa0
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
    Vector m_vGravity; // 0xcc
    bool m_bSpeculativeEnabled; // 0xd8
    bool m_bHasShadowController; // 0xd9
    DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // 0xda
    char pad_03[5];
}; // size: 0xe0

/// CollisionDetailLayerInfo_t
class __declspec(align(8)) CollisionDetailLayerInfo_t0 {
public:
    // CUtlString m_sDescription;
    char m_sDescription[1]; // 0x0
    // CUtlString m_sFriendlyName;
    char pad_00[7];
    char m_sFriendlyName[1]; // 0x8
    char pad_01[7];
    bool m_bIsQueryOnly; // 0x10
    // CUtlString m_sParentDetailLayer;
    char pad_02[7];
    char m_sParentDetailLayer[1]; // 0x18
    // CUtlVector< CollisionDetailLayerInfo_t::Name_t > m_vecSubtreeDetailLayers;
    char pad_03[7];
    char m_vecSubtreeDetailLayers[1]; // 0x20
    char pad_04[23];
    bool m_bNotPickable; // 0x38
    char pad_05[7];
}; // size: 0x40

/// CollisionDetailLayerInfo_t::Name_t
class __declspec(align(8)) CollisionDetailLayerInfo_t__Name_t0 {
public:
    // CUtlStringToken m_nNameToken;
    char m_nNameToken[1]; // 0x0
    // CUtlString m_sNameString;
    char pad_00[7];
    char m_sNameString[1]; // 0x8
    char pad_01[7];
}; // size: 0x10

/// VertexPositionNormal_t
class __declspec(align(4)) VertexPositionNormal_t0 {
public:
    Vector m_vPosition; // 0x0
    Vector m_vNormal; // 0xc
}; // size: 0x18

/// VertexPositionColor_t
class __declspec(align(4)) VertexPositionColor_t0 {
public:
    Vector m_vPosition; // 0x0
    char pad_00[4];
}; // size: 0x10

/// vphysics_save_cphysicsbody_t
class __declspec(align(8)) vphysics_save_cphysicsbody_t0 {
public:
    char pad_00[224];
    uint64_t m_nOldPointer; // 0xe0
}; // size: 0xe8

#ifdef __cplusplus
#pragma warning(pop)
#endif // __cplusplus