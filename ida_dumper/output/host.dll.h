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


/// CAnimScriptBase
class __declspec(align(1)) CAnimScriptBase0 {
public:
    char pad_00[8];
    bool m_bIsValid; // 0x8
    char pad_01[7];
}; // size: 0x10

/// EmptyTestScript
class __declspec(align(1)) EmptyTestScript0 {
public:
    // CAnimScriptParam< float32 > m_hTest;
    char pad_00[32];
}; // size: 0x20

#ifdef __cplusplus
#pragma warning(pop)
#endif // __cplusplus