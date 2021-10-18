#pragma once
#include <winioctl.h>

#define AURUM_IOCTL_TYPE 0x8001
#define AURUM_IOCTL_EXECUTE_OPERATION CTL_CODE(0x8001, 0x801, METHOD_BUFFERED, FILE_ANY_ACCESS) // 0x80012004

typedef enum _AURUM_IOCTL_OPERATIONS
{
    AurumIoctlRegisterProtectedProcess = 0x23f931aci32,
    AurumIoctlNotYetAnalyzed1 = 0x7f1943ebi32,
    AurumIoctlNotYetAnalyzed2 = 0x97F750B1i32,
    AurumIoctlNotYetAnalyzed3 = 0xE1A008B5i32,
} AURUM_IOCTL_OPERATIONS;

typedef struct _AURUM_IOCTL_PAYLOAD
{
    AURUM_IOCTL_OPERATIONS operation;
    void* context;
    // TODO: Analyze ioctl payloads
} AURUM_IOCTL_PAYLOAD, * PAURUM_IOCTL_PAYLOAD;
