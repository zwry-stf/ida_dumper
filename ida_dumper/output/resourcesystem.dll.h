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

class InfoForResourceTypeCTestResourceData {
public:
    char pad_00[1];
};

class InfoForResourceTypeProceduralTestResource_t {
public:
    char pad_00[1];
};

class InfoForResourceTypeManifestTestResource_t {
public:
    char pad_00[1];
};

class ManifestTestResource_t {
public:
    // CUtlString m_name;
    // CStrongHandle< InfoForResourceTypeManifestTestResource_t > m_child;
    char pad_00[16];
};

class InfoForResourceTypeCVDataResource {
public:
    char pad_00[1];
};

class InfoForResourceTypeIPulseGraphDef {
public:
    char pad_00[1];
};

class InfoForResourceTypeCTypeScriptResource {
public:
    char pad_00[1];
};

class InfoForResourceTypeCJavaScriptResource {
public:
    char pad_00[1];
};

class InfoForResourceTypeIParticleSystemDefinition {
public:
    char pad_00[1];
};

class InfoForResourceTypeIParticleSnapshot {
public:
    char pad_00[1];
};

class InfoForResourceTypeCAnimData {
public:
    char pad_00[1];
};

class InfoForResourceTypeCAnimationGroup {
public:
    char pad_00[1];
};

class InfoForResourceTypeCSequenceGroupData {
public:
    char pad_00[1];
};

class InfoForResourceTypeIMaterial2 {
public:
    char pad_00[1];
};

class InfoForResourceTypeCMorphSetData {
public:
    char pad_00[1];
};

class InfoForResourceTypeCRenderMesh {
public:
    char pad_00[1];
};

class InfoForResourceTypeCModel {
public:
    char pad_00[1];
};

class InfoForResourceTypeCTextureBase {
public:
    char pad_00[1];
};

class InfoForResourceTypeIVectorGraphic {
public:
    char pad_00[1];
};

class InfoForResourceTypeCVSoundEventScriptList {
public:
    char pad_00[1];
};

class InfoForResourceTypeCVSoundStackScriptList {
public:
    char pad_00[1];
};

class InfoForResourceTypeCVoiceContainerBase {
public:
    char pad_00[1];
};

class InfoForResourceTypeCVMixListResource {
public:
    char pad_00[1];
};

class InfoForResourceTypeCPhysAggregateData {
public:
    char pad_00[1];
};

class InfoForResourceTypeCVPhysXSurfacePropertiesList {
public:
    char pad_00[1];
};

class InfoForResourceTypeCEntityLump {
public:
    char pad_00[1];
};

class InfoForResourceTypeCWorldNode {
public:
    char pad_00[1];
};

class InfoForResourceTypeWorld_t {
public:
    char pad_00[1];
};

class InfoForResourceTypeCVoxelVisibility {
public:
    char pad_00[1];
};

class InfoForResourceTypeCPostProcessingResource {
public:
    char pad_00[1];
};

class InfoForResourceTypeCPanoramaStyle {
public:
    char pad_00[1];
};

class InfoForResourceTypeCPanoramaLayout {
public:
    char pad_00[1];
};

class InfoForResourceTypeCPanoramaDynamicImages {
public:
    char pad_00[1];
};

class InfoForResourceTypeCDotaItemDefinitionResource {
public:
    char pad_00[1];
};

class InfoForResourceTypeCDOTAPatchNotesList {
public:
    char pad_00[1];
};

class InfoForResourceTypeCDOTANovelsList {
public:
    char pad_00[1];
};

class InfoForResourceTypeIAnimGraphModelBinding {
public:
    char pad_00[1];
};

class InfoForResourceTypeCChoreoSceneResource {
public:
    char pad_00[1];
};

class InfoForResourceTypeCCompositeMaterialKit {
public:
    char pad_00[1];
};

class InfoForResourceTypeCGcExportableExternalData {
public:
    char pad_00[1];
};

class InfoForResourceTypeCSmartProp {
public:
    char pad_00[1];
};

class InfoForResourceTypeCCSGOEconItem {
public:
    char pad_00[1];
};

class InfoForResourceTypeCResponseRulesList {
public:
    char pad_00[1];
};

class InfoForResourceTypeCNmSkeleton {
public:
    char pad_00[1];
};

class InfoForResourceTypeCNmClip {
public:
    char pad_00[1];
};

class InfoForResourceTypeCNmGraphDefinition {
public:
    char pad_00[1];
};

class InfoForResourceTypeCNmIKRig {
public:
    char pad_00[1];
};

class InfoForResourceTypeCSurfaceGraph {
public:
    char pad_00[1];
};

class AABB_t {
public:
    // Vector m_vMinBounds;
    // Vector m_vMaxBounds;
    char pad_00[24];
};

class PackedAABB_t {
public:
    uint32_t m_nPackedMin;
    uint32_t m_nPackedMax;
};

class FourQuaternions {
public:
    // fltx4 x;
    // fltx4 y;
    // fltx4 z;
    // fltx4 w;
    char pad_00[64];
};

class FuseVariableIndex_t {
public:
    uint16_t m_Value;
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

class FunctionInfo_t {
public:
    // CUtlString m_name;
    // CUtlStringToken m_nameToken;
    char pad_00[20];
    int32_t m_nParamCount;
    FuseFunctionIndex_t m_nIndex;
    bool m_bIsPure;
    char pad_01[5];
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

