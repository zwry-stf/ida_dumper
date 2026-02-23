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


/// FuseVariableAccess_t
_enum FuseVariableAccess_t0 : uint8_t {
    WRITABLE = 0,
    READ_ONLY = 1,
};

/// FuseVariableType_t
_enum FuseVariableType_t0 : uint8_t {
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

/// InfoForResourceTypeCTestResourceData
class __declspec(align(1)) InfoForResourceTypeCTestResourceData0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeProceduralTestResource_t
class __declspec(align(1)) InfoForResourceTypeProceduralTestResource_t0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeManifestTestResource_t
class __declspec(align(1)) InfoForResourceTypeManifestTestResource_t0 {
public:
    char pad_00[1];
}; // size: 0x1

/// ManifestTestResource_t
class __declspec(align(8)) ManifestTestResource_t0 {
public:
    // CUtlString m_name;
    // CStrongHandle< InfoForResourceTypeManifestTestResource_t > m_child;
    char pad_00[16];
}; // size: 0x10

/// InfoForResourceTypeCVDataResource
class __declspec(align(1)) InfoForResourceTypeCVDataResource0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeIPulseGraphDef
class __declspec(align(1)) InfoForResourceTypeIPulseGraphDef0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCTypeScriptResource
class __declspec(align(1)) InfoForResourceTypeCTypeScriptResource0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCJavaScriptResource
class __declspec(align(1)) InfoForResourceTypeCJavaScriptResource0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeIParticleSystemDefinition
class __declspec(align(1)) InfoForResourceTypeIParticleSystemDefinition0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeIParticleSnapshot
class __declspec(align(1)) InfoForResourceTypeIParticleSnapshot0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCAnimData
class __declspec(align(1)) InfoForResourceTypeCAnimData0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCAnimationGroup
class __declspec(align(1)) InfoForResourceTypeCAnimationGroup0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCSequenceGroupData
class __declspec(align(1)) InfoForResourceTypeCSequenceGroupData0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeIMaterial2
class __declspec(align(1)) InfoForResourceTypeIMaterial20 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCMorphSetData
class __declspec(align(1)) InfoForResourceTypeCMorphSetData0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCRenderMesh
class __declspec(align(1)) InfoForResourceTypeCRenderMesh0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCModel
class __declspec(align(1)) InfoForResourceTypeCModel0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCTextureBase
class __declspec(align(1)) InfoForResourceTypeCTextureBase0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeIVectorGraphic
class __declspec(align(1)) InfoForResourceTypeIVectorGraphic0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCVSoundEventScriptList
class __declspec(align(1)) InfoForResourceTypeCVSoundEventScriptList0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCVSoundStackScriptList
class __declspec(align(1)) InfoForResourceTypeCVSoundStackScriptList0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCVoiceContainerBase
class __declspec(align(1)) InfoForResourceTypeCVoiceContainerBase0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCVMixListResource
class __declspec(align(1)) InfoForResourceTypeCVMixListResource0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCPhysAggregateData
class __declspec(align(1)) InfoForResourceTypeCPhysAggregateData0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCVPhysXSurfacePropertiesList
class __declspec(align(1)) InfoForResourceTypeCVPhysXSurfacePropertiesList0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCEntityLump
class __declspec(align(1)) InfoForResourceTypeCEntityLump0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCWorldNode
class __declspec(align(1)) InfoForResourceTypeCWorldNode0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeWorld_t
class __declspec(align(1)) InfoForResourceTypeWorld_t0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCVoxelVisibility
class __declspec(align(1)) InfoForResourceTypeCVoxelVisibility0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCPostProcessingResource
class __declspec(align(1)) InfoForResourceTypeCPostProcessingResource0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCPanoramaStyle
class __declspec(align(1)) InfoForResourceTypeCPanoramaStyle0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCPanoramaLayout
class __declspec(align(1)) InfoForResourceTypeCPanoramaLayout0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCPanoramaDynamicImages
class __declspec(align(1)) InfoForResourceTypeCPanoramaDynamicImages0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCDotaItemDefinitionResource
class __declspec(align(1)) InfoForResourceTypeCDotaItemDefinitionResource0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCDOTAPatchNotesList
class __declspec(align(1)) InfoForResourceTypeCDOTAPatchNotesList0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCDOTANovelsList
class __declspec(align(1)) InfoForResourceTypeCDOTANovelsList0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeIAnimGraphModelBinding
class __declspec(align(1)) InfoForResourceTypeIAnimGraphModelBinding0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCChoreoSceneResource
class __declspec(align(1)) InfoForResourceTypeCChoreoSceneResource0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCCompositeMaterialKit
class __declspec(align(1)) InfoForResourceTypeCCompositeMaterialKit0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCGcExportableExternalData
class __declspec(align(1)) InfoForResourceTypeCGcExportableExternalData0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCSmartProp
class __declspec(align(1)) InfoForResourceTypeCSmartProp0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCCSGOEconItem
class __declspec(align(1)) InfoForResourceTypeCCSGOEconItem0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCResponseRulesList
class __declspec(align(1)) InfoForResourceTypeCResponseRulesList0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCNmSkeleton
class __declspec(align(1)) InfoForResourceTypeCNmSkeleton0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCNmClip
class __declspec(align(1)) InfoForResourceTypeCNmClip0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCNmGraphDefinition
class __declspec(align(1)) InfoForResourceTypeCNmGraphDefinition0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCNmIKRig
class __declspec(align(1)) InfoForResourceTypeCNmIKRig0 {
public:
    char pad_00[1];
}; // size: 0x1

/// InfoForResourceTypeCSurfaceGraph
class __declspec(align(1)) InfoForResourceTypeCSurfaceGraph0 {
public:
    char pad_00[1];
}; // size: 0x1

/// AABB_t
class __declspec(align(4)) AABB_t0 {
public:
    Vector m_vMinBounds; // 0x0
    Vector m_vMaxBounds; // 0xc
}; // size: 0x18

/// PackedAABB_t
class __declspec(align(4)) PackedAABB_t0 {
public:
    uint32_t m_nPackedMin; // 0x0
    uint32_t m_nPackedMax; // 0x4
}; // size: 0x8

/// FourQuaternions
class __declspec(align(1)) FourQuaternions0 {
public:
    // fltx4 x;
    // fltx4 y;
    // fltx4 z;
    // fltx4 w;
    char pad_00[64];
}; // size: 0x40

/// FuseVariableIndex_t
class __declspec(align(2)) FuseVariableIndex_t0 {
public:
    uint16_t m_Value; // 0x0
}; // size: 0x2

/// FuseFunctionIndex_t
class __declspec(align(2)) FuseFunctionIndex_t0 {
public:
    uint16_t m_Value; // 0x0
}; // size: 0x2

/// ConstantInfo_t
class __declspec(align(8)) ConstantInfo_t0 {
public:
    // CUtlString m_name;
    // CUtlStringToken m_nameToken;
    char pad_00[12];
    float m_flValue; // 0xc
}; // size: 0x10

/// VariableInfo_t
class __declspec(align(8)) VariableInfo_t0 {
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

/// FunctionInfo_t
class __declspec(align(8)) FunctionInfo_t0 {
public:
    // CUtlString m_name;
    // CUtlStringToken m_nameToken;
    char pad_00[20];
    int32_t m_nParamCount; // 0x14
    FuseFunctionIndex_t m_nIndex; // 0x18
    bool m_bIsPure; // 0x1a
    char pad_01[5];
}; // size: 0x20

/// CFuseProgram
class __declspec(align(8)) CFuseProgram0 {
public:
    // CUtlVector< uint8 > m_programBuffer;
    // CUtlVector< FuseVariableIndex_t > m_variablesRead;
    // CUtlVector< FuseVariableIndex_t > m_variablesWritten;
    char pad_00[72];
    int32_t m_nMaxTempVarsUsed; // 0x48
    char pad_01[4];
}; // size: 0x50

/// CFuseSymbolTable
class __declspec(align(8)) CFuseSymbolTable0 {
public:
    // CUtlVector< ConstantInfo_t > m_constants;
    // CUtlVector< VariableInfo_t > m_variables;
    // CUtlVector< FunctionInfo_t > m_functions;
    // CUtlHashtable< CUtlStringToken, int32 > m_constantMap;
    // CUtlHashtable< CUtlStringToken, int32 > m_variableMap;
    // CUtlHashtable< CUtlStringToken, int32 > m_functionMap;
    char pad_00[176];
}; // size: 0xb0

#ifdef __cplusplus
#pragma warning(pop)
#endif // __cplusplus