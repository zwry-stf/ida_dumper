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

enum DynamicContinuousContactBehavior_t : uint8_t {
    DYNAMIC_CONTINUOUS_ALLOW_IF_REQUESTED_BY_OTHER_BODY = 0,
    DYNAMIC_CONTINUOUS_ALWAYS = 1,
    DYNAMIC_CONTINUOUS_NEVER = 2,
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

class constraint_axislimit_t {
public:
    float flMinRotation;
    float flMaxRotation;
    float flMotorTargetAngSpeed;
    float flMotorMaxTorque;
};

class constraint_hingeparams_t {
public:
    // Vector worldPosition;
    // Vector worldAxisDirection;
    char pad_00[24];
    constraint_axislimit_t hingeAxis;
    constraint_breakableparams_t constraint;
};

class IPhysicsPlayerController {
public:
    char pad_00[8];
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

class CFeNamedJiggleBone {
public:
    // CUtlString m_strParentBone;
    // CTransform m_transform;
    char pad_00[48];
    uint32_t m_nJiggleParent;
    CFeJiggleBone m_jiggleBone;
};

class CFeIndexedJiggleBone {
public:
    uint32_t m_nNode;
    uint32_t m_nJiggleParent;
    CFeJiggleBone m_jiggleBone;
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

class FeQuad_t {
public:
    uint16_t nNode[4];
    float flSlack;
    // Vector4D[4] vShape;
    char pad_00[64];
};

class FeSimdQuad_t {
public:
    uint16_t nNode[4];
    // fltx4 f4Slack;
    // FourVectors[4] vShape;
    // fltx4[4] f4Weights;
    char pad_00[296];
};

class FeSimdTri_t {
public:
    uint32_t nNode[4];
    // fltx4 w1;
    // fltx4 w2;
    // fltx4 v1x;
    char pad_00[80];
    FourVectors2D v2;
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

class FeRodConstraint_t {
public:
    uint16_t nNode[2];
    float flMaxDist;
    float flMinDist;
    float flWeight0;
    float flRelaxationFactor;
};

class FeTwistConstraint_t {
public:
    uint16_t nNodeOrient;
    uint16_t nNodeEnd;
    float flTwistRelax;
    float flSwingRelax;
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

class FeDynKinLink_t {
public:
    uint16_t m_nParent;
    uint16_t m_nChild;
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

class FeNodeStrayBox_t {
public:
    // Vector vMin;
    char pad_00[12];
    uint32_t nFlags;
    // Vector vMax;
    char pad_01[12];
    uint16_t nNode[2];
};

class FeAxialEdgeBend_t {
public:
    float te;
    float tv;
    float flDist;
    float flWeight[4];
    uint16_t nNode[6];
};

class FeCtrlOffset_t {
public:
    // Vector vOffset;
    char pad_00[12];
    uint16_t nCtrlParent;
    uint16_t nCtrlChild;
};

class FeCtrlOsOffset_t {
public:
    uint16_t nCtrlParent;
    uint16_t nCtrlChild;
};

class FeFollowNode_t {
public:
    uint16_t nParentNode;
    uint16_t nChildNode;
    float flWeight;
};

class FeCollisionPlane_t {
public:
    uint16_t nCtrlParent;
    uint16_t nChildNode;
    RnPlane_t m_Plane;
    float flStrength;
};

class FeNodeIntegrator_t {
public:
    float flPointDamping;
    float flAnimationForceAttraction;
    float flAnimationVertexAttraction;
    float flGravity;
};

class FeSpringIntegrator_t {
public:
    uint16_t nNode[2];
    float flSpringRestLength;
    float flSpringConstant;
    float flSpringDamping;
    float flNodeWeight0;
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

class FeWorldCollisionParams_t {
public:
    float flWorldFriction;
    float flGroundFriction;
    uint16_t nListBegin;
    uint16_t nListEnd;
};

class FeTaperedCapsuleStretch_t {
public:
    uint16_t nNode[2];
    uint16_t nCollisionMask;
    uint16_t nDummy;
    float flRadius[2];
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

class FeTreeChildren_t {
public:
    uint16_t nChild[2];
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

class FeFitWeight_t {
public:
    float flWeight;
    uint16_t nNode;
    uint16_t nDummy;
};

class FeNodeReverseOffset_t {
public:
    // Vector vOffset;
    char pad_00[12];
    uint16_t nBoneCtrl;
    uint16_t nTargetNode;
};

class FeAnimStrayRadius_t {
public:
    uint16_t nNode[2];
    float flMaxDist;
    float flRelaxationFactor;
};

class FeSimdAnimStrayRadius_t {
public:
    uint16_t nNode[4];
    // fltx4 flMaxDist;
    // fltx4 flRelaxationFactor;
    char pad_00[40];
};

class FeKelagerBend2_t {
public:
    float flWeight[3];
    float flHeight0;
    uint16_t nNode[3];
    uint16_t nReserved;
};

class FeCtrlSoftOffset_t {
public:
    uint16_t nCtrlParent;
    uint16_t nCtrlChild;
    // Vector vOffset;
    char pad_00[12];
    float flAlpha;
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

class FeRigidColliderIndices_t {
public:
    uint16_t m_nTaperedCapsuleRigidIndex;
    uint16_t m_nSphereRigidIndex;
    uint16_t m_nBoxRigidIndex;
    uint16_t m_nSDFRigidIndex;
    uint16_t m_nCollisionPlaneIndex;
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

class FeEffectDesc_t {
public:
    // CUtlString sName;
    char pad_00[8];
    uint32_t nNameHash;
    int32_t nType;
    // KeyValues3 m_Params;
    char pad_01[16];
};

class FeNodeWindBase_t {
public:
    uint16_t nNodeX0;
    uint16_t nNodeX1;
    uint16_t nNodeY0;
    uint16_t nNodeY1;
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

class FourVectors2D {
public:
    // fltx4 x;
    // fltx4 y;
    char pad_00[32];
};

class FeEdgeDesc_t {
public:
    uint16_t nEdge[2];
    uint16_t nSide[2];
    char pad_00[4];
    uint16_t nVirtElem[2];
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

class FeWeightedNode_t {
public:
    uint16_t nNode;
    uint16_t nWeight;
};

class FeStiffHingeBuild_t {
public:
    float flMaxAngle;
    float flStrength;
    float flMotionBias[3];
    uint16_t nNode[3];
    char pad_00[2];
};

class FeBandBendLimit_t {
public:
    float flDistMin;
    float flDistMax;
    uint16_t nNode[6];
};

class FeHingeLimitBuild_t {
public:
    uint16_t nNode[6];
    uint32_t nFlags;
    float flLimitCW;
    float flLimitCCW;
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

class FeAntiTunnelGroupBuild_t {
public:
    uint32_t m_nVertexMapHash;
    uint32_t m_nCollisionMask;
};

class FeSoftParent_t {
public:
    int32_t nParent;
    float flAlpha;
};

class RnPlane_t {
public:
    // Vector m_vNormal;
    char pad_00[12];
    float m_flOffset;
};

class CovMatrix3 {
public:
    // Vector m_vDiag;
    char pad_00[12];
    float m_flXY;
    float m_flXZ;
    float m_flYZ;
};

class FourCovMatrices3 {
public:
    // FourVectors m_vDiag;
    // fltx4 m_flXY;
    // fltx4 m_flXZ;
    // fltx4 m_flYZ;
    char pad_00[96];
};

class FeFitInfluence_t {
public:
    uint32_t nVertexNode;
    float flWeight;
    uint32_t nMatrixNode;
};

class FeBuildTaperedCapsuleRigid_t {
public:
    char pad_00[48];
    int32_t m_nPriority;
    uint32_t m_nVertexMapHash;
    uint32_t m_nAntitunnelGroupBits;
    char pad_01[4];
};

class FeBuildBoxRigid_t {
public:
    char pad_00[64];
    int32_t m_nPriority;
    uint32_t m_nVertexMapHash;
    uint32_t m_nAntitunnelGroupBits;
    char pad_01[4];
};

class FeBuildSDFRigid_t {
public:
    char pad_00[80];
    int32_t m_nPriority;
    uint32_t m_nVertexMapHash;
    uint32_t m_nAntitunnelGroupBits;
    char pad_01[4];
};

class FeBuildSphereRigid_t {
public:
    char pad_00[32];
    int32_t m_nPriority;
    uint32_t m_nVertexMapHash;
    uint32_t m_nAntitunnelGroupBits;
    char pad_01[4];
};

class FeSourceEdge_t {
public:
    uint16_t nNode[2];
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

class CFeVertexMapBuildArray {
public:
    // CUtlVector< FeVertexMapBuild_t* > m_Array;
    char pad_00[24];
};

class FeProxyVertexMap_t {
public:
    // CUtlString m_Name;
    char pad_00[8];
    float m_flWeight;
    char pad_01[4];
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

class PhysicsParticleId_t {
public:
    uint32_t m_Value;
};

class Dop26_t {
public:
    float m_flSupport[26];
};

class RnCapsule_t {
public:
    // Vector[2] m_vCenter;
    char pad_00[24];
    float m_flRadius;
};

class RnVertex_t {
public:
    uint8_t m_nEdge;
};

class RnHalfEdge_t {
public:
    uint8_t m_nNext;
    uint8_t m_nTwin;
    uint8_t m_nOrigin;
    uint8_t m_nFace;
};

class RnFace_t {
public:
    uint8_t m_nEdge;
};

class CRegionSVM {
public:
    // CUtlVector< RnPlane_t > m_Planes;
    // CUtlVector< uint32 > m_Nodes;
    char pad_00[48];
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

class RnTriangle_t {
public:
    int32_t m_nIndex[3];
};

class RnWing_t {
public:
    int32_t m_nIndex[3];
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

class CollisionDetailLayerInfo_t::Name_t {
public:
    // CUtlStringToken m_nNameToken;
    // CUtlString m_sNameString;
    char pad_00[16];
};

class VertexPositionNormal_t {
public:
    // Vector m_vPosition;
    // Vector m_vNormal;
    char pad_00[24];
};

class VertexPositionColor_t {
public:
    // Vector m_vPosition;
    char pad_00[16];
};

class vphysics_save_cphysicsbody_t {
public:
    char pad_00[224];
    uint64_t m_nOldPointer;
};

