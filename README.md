# AurumRE
Reverse engineering of Aurum Ricochet anti-cheat driver

# DESCRIPTION

### BINARY

```
Name: Aurum.sys
Size: 275680 bytes (269 KiB)
CRC32: 6D8C2E97
CRC64: BCFB88FF217CC4C5
SHA256: 49BD8C5CB273E1F15BB27A6BCF6F3DA4147D432103D25182B0592518B0071702
SHA1: 7F5573763DFF163D8B0F0906A671ED9F2D9CA703
BLAKE2sp: 63CF22AA2C704CF32C674318B92F2315AE424A622971F55879EF8FE5FC776B8F
```

```
# of Bytes: 258184
# of Memory Blocks: 10
# of Instructions: 0
# of Defined Data: 1227
# of Functions: 0
# of Symbols: 33
# of Data Types: 54
# of Data Type Categories: 4

Comments: Aurum Driver
CompanyName: Activision Blizzard, Inc.
Compiler: visualstudio:unknown

Created With Ghidra Version: 10.0.1
Executable Format: Portable Executable (PE)

ProductName: Aurum Driver
ProductVersion: V1.0.0.0
Relocatable: true
PDB Age: 1
PDB File: Aurum.pdb
PDB GUID: 7db1926f-b5eb-40da-9f5e-47207d60bfca
PDB Version: RSDS
Section Alignment: 4096
```

See full IDA disassembly at [ida_disasm_full.asm](ida_disasm_full.asm)

- No anti kernel debugger
- Packed by original packer
    - jmp control flow obfuscation, can mitigate by writing some code.

### PE PACKER

**UPDATE 17/10/21: Maybe (optimized)LLVM Obfuscator.**

Packer's control flow obfuscation is quite simple and the control will be back in the original sub's epilogue.

The 2nd(at the last index) `.text` section looks like made by packer to store stubs of jmp tables where the specific functions are configured to obfuscate its control flows by abusing `jmp` trampoline.

The following functions are heavily obfuscated (as I just know as of now):
- Dispatch routine of IRPs: `Aurum+0x14450`
- Process creation callback routine: `Aurum+0x14060`
- Object pre-callback routine: `Aurum+0xD9A0`

### PE SECTIONS

```
[0] .text  IMAGE_SCN_CNT_CODE | IMAGE_SCN_MEM_NOT_PAGED | IMAGE_SCN_MEM_EXECUTE | IMAGE_SCN_MEM_READ
[1] .rdata IMAGE_SCN_CNT_INITIALIZED_DATA | IMAGE_SCN_MEM_NOT_PAGED | IMAGE_SCN_MEM_READ | IMAGE_SCN_MEM_WRITE
[2] .data  IMAGE_SCN_CNT_INITIALIZED_DATA | IMAGE_SCN_MEM_NOT_PAGED | IMAGE_SCN_MEM_READ | IMAGE_SCN_MEM_WRITE
[3] .pdata IMAGE_SCN_CNT_INITIALIZED_DATA | IMAGE_SCN_MEM_NOT_PAGED | IMAGE_SCN_MEM_READ | IMAGE_SCN_MEM_WRITE
[4] .INIT  IMAGE_SCN_CNT_CODE | IMAGE_SCN_MEM_EXECUTE | IMAGE_SCN_MEM_READ
[5] .rsrc  IMAGE_SCN_CNT_INITIALIZED_DATA | IMAGE_SCN_MEM_READ | IMAGE_SCN_MEM_WRITE
[6] .reloc IMAGE_SCN_CNT_INITIALIZED_DATA | IMAGE_SCN_MEM_READ | IMAGE_SCN_MEM_WRITE
[7] .text  IMAGE_SCN_CNT_CODE | IMAGE_SCN_MEM_EXECUTE | IMAGE_SCN_MEM_READ // stubs
```

![image](https://user-images.githubusercontent.com/37926134/137428932-20b608cf-20e1-49e6-a965-835a5b99c23c.png)

No potential abusable section.

### IMPORTS

- nt!RtlCompareMemory
- nt!KeAcquireGuardedMutex
- nt!KeReleaseGuardedMutex
- nt!ExAllocatePoolWithTag
- nt!ExFreePoolWithTag
- nt!IoGetCurrentProcess
- nt!ZwCreateFile
- nt!ZwQueryInformationFile
- nt!ZwReadFile
- nt!ZwClose
- nt!SeLocateProcessImageName
- nt!ZwQuerySystemInformation
- nt!KeInitializeSpinLock
- nt!KeAcquireSpinLockRaiseToDpc
- nt!KeReleaseSpinLock
- nt!KeInitializeGuardedMutex
- nt!IofCompleteRequest
- nt!IoCreateDevice
- nt!IoCreateSymbolicLink
- nt!IoDeleteDevice
- nt!IoDeleteSymbolicLink
- nt!ObRegisterCallbacks
- nt!ObUnRegisterCallbacks
- nt!PsSetCreateProcessNotifyRoutineEx
- nt!PsGetProcessPeb
- nt!PsProcessType
- nt!__C_specific_handler

~~No `MmGetSystemRoutineAddress` import, but potential hardcoded imports with low possibility.~~

### EXPORTS

Only entrypoint.

### POOL TAG

Pool tags are seem not defined. (`'None'`)

```c
puVar7 = (undefined8 *)ExAllocatePoolWithTag(0, uVar12, 'None');
```

### STRINGS

Strings are indeed "encrypted" and on the stack just like EQU8 did trick to deceive import name.

# DRIVER INTEGRITY CHECK

The Aurum driver implements integrity check measure, which executed at the [Pre-operation object callbacks](#object-callbacks):

```c
if (DAT_140033a18 != 0) {
    do {
        lVar14 = RtlCompareMemory(auStack72,(longlong)DAT_140033a28 + uVar20 * 0x23a + 0x10);
        if (lVar14 == 0x10) goto LAB_140013d3f;
        uVar26 = (int)uVar28 + 1;
        uVar20 = SEXT48((int)uVar26);
        uVar28 = (ulonglong)uVar26;
    } while (uVar20 < DAT_140033a18);
}
```

### IMAGE INTEGRITY CHECK

```c
uStack1384 = filehandle;
uStack1376 = 2;
uStack1424 = uStack1424 & 0xffffffff00000000;
ntstatus = ZwQuerySystemInformation(SystemCodeIntegrityCertificateInformation, &uStack1384);
ZwClose(filehandle);
uVar4 = 1;
if (ntstatus != STATUS_INVALID_IMAGE_HASH)
{
    if (ntstatus == STATUS_IMAGE_CERT_EXPIRED)
    {
        uVar4 = 2;
    }
    else
    {
        uVar4 = 3;
        if (ntstatus != STATUS_IMAGE_CERT_REVOKED)
            goto LAB_140011e1c;
    }
}
```

# DRIVER INITIALIZATION

### FUNCTION

The driver initialization function exists at the offset `0x1D640` which calls:

- nt!ExAllocatePoolWithTag
- nt!ExFreePoolWithTag
- [nt!KeInitializeSpinLock](https://github.com/kkent030315/AurumRE/blob/47ef71cbaa1e27ddc15b27e328376838e4b3fed8/AurumInitPseudocode.c#L123-L125)
- [nt!KeInitializeGuardedMutex](https://github.com/kkent030315/AurumRE/blob/47ef71cbaa1e27ddc15b27e328376838e4b3fed8/AurumInitPseudocode.c#L5415-L5418)
- [nt!PsSetCreateProcessNotifyRoutineEx](https://github.com/kkent030315/AurumRE/blob/47ef71cbaa1e27ddc15b27e328376838e4b3fed8/AurumInitPseudocode.c#L5568-L5571)
    - See [PROCESS CALLBACKS](#process-callbacks) section about this.
- [nt!ObRegisterCallbacks](https://github.com/kkent030315/AurumRE/blob/47ef71cbaa1e27ddc15b27e328376838e4b3fed8/AurumInitPseudocode.c#L6690-L6692)
- xref: [nt!PsProcessType](https://github.com/kkent030315/AurumRE/blob/47ef71cbaa1e27ddc15b27e328376838e4b3fed8/AurumInitPseudocode.c#L6589-L6591)
    - See [OBJECT CALLBACKS](#object-callbacks) section about this.

### POOL ALLOCATION

`ExAllocatePoolWithTag` will be called four times at the initialization, with `'None' 0x656E6F4E` (default tag defined in `ExAllocatePool` as macro in WDK) tag, and all pools are paged.

```
1 [DEBUGGER] ExAllocatePoolWithTag: PoolType:PagedPool(0) NumberOfBytes:0x18, Tag:0x656E6F4E
2 [DEBUGGER] ExAllocatePoolWithTag: PoolType:PagedPool(0) NumberOfBytes:0x28, Tag:0x656E6F4E
3 [DEBUGGER] ExAllocatePoolWithTag: PoolType:PagedPool(0) NumberOfBytes:0x10, Tag:0x656E6F4E
4 [DEBUGGER] ExAllocatePoolWithTag: PoolType:PagedPool(0) NumberOfBytes:0x11D00, Tag:0x656E6F4E
```

1. https://github.com/kkent030315/AurumRE/blob/47ef71cbaa1e27ddc15b27e328376838e4b3fed8/AurumInitPseudocode.c#L117
2. https://github.com/kkent030315/AurumRE/blob/47ef71cbaa1e27ddc15b27e328376838e4b3fed8/AurumInitPseudocode.c#L118
3. https://github.com/kkent030315/AurumRE/blob/47ef71cbaa1e27ddc15b27e328376838e4b3fed8/AurumInitPseudocode.c#L126
4. https://github.com/kkent030315/AurumRE/blob/47ef71cbaa1e27ddc15b27e328376838e4b3fed8/AurumInitPseudocode.c#L5399

These pool pointers will be contained in [Global Variables](https://github.com/kkent030315/AurumRE#driver-global-variables).

# DRIVER UNLOAD

See full pseudocode at [AurumDriverUnloadPseudocode.c](AurumDriverUnloadPseudocode.c)

# IOCTL

### DEVICE

The WIN32 device name is `\\\\.\\Aurum`.

```
2: kd> !drvobj Aurum
Driver object (ffffc38f2664d6c0) is for:
 \Driver\Aurum
```

The device can be opened without any privileges.  
Invalid IOCTL requests will resulted in getting last error code `0xE0000001`.

```cpp
hDevice = CreateFileW(L"\\\\.\\Aurum", ...);
DeviceIoControl(hDevice, 0x555); // GetLastError:0xE0000001
```

```c
LAB_14000e9d5:
    uStack560 = 0xe0000001;
    uStack556 = uStack560;
```

### DISPATCH ROUTINES

```
2: kd> !drvobj Aurum 7
Driver object (ffffc38f2664d6c0) is for:
 \Driver\Aurum

Driver Extension List: (id , addr)

Device Object list:
ffffc38f27034e10  

DriverEntry:   fffff80074885000	Aurum
DriverStartIo: 00000000	
DriverUnload:  fffff80074875360	Aurum
AddDevice:     00000000	

Dispatch routines:
[00] IRP_MJ_CREATE                      fffff80074864450	Aurum+0x14450
[01] IRP_MJ_CREATE_NAMED_PIPE           fffff80074864450	Aurum+0x14450
[02] IRP_MJ_CLOSE                       fffff80074864450	Aurum+0x14450
[03] IRP_MJ_READ                        fffff80074864450	Aurum+0x14450
[04] IRP_MJ_WRITE                       fffff80074864450	Aurum+0x14450
[05] IRP_MJ_QUERY_INFORMATION           fffff80074864450	Aurum+0x14450
[06] IRP_MJ_SET_INFORMATION             fffff80074864450	Aurum+0x14450
[07] IRP_MJ_QUERY_EA                    fffff80074864450	Aurum+0x14450
[08] IRP_MJ_SET_EA                      fffff80074864450	Aurum+0x14450
[09] IRP_MJ_FLUSH_BUFFERS               fffff80074864450	Aurum+0x14450
[0a] IRP_MJ_QUERY_VOLUME_INFORMATION    fffff80074864450	Aurum+0x14450
[0b] IRP_MJ_SET_VOLUME_INFORMATION      fffff80074864450	Aurum+0x14450
[0c] IRP_MJ_DIRECTORY_CONTROL           fffff80074864450	Aurum+0x14450
[0d] IRP_MJ_FILE_SYSTEM_CONTROL         fffff80074864450	Aurum+0x14450
[0e] IRP_MJ_DEVICE_CONTROL              fffff80074864450	Aurum+0x14450
[0f] IRP_MJ_INTERNAL_DEVICE_CONTROL     fffff80074864450	Aurum+0x14450
[10] IRP_MJ_SHUTDOWN                    fffff80074864450	Aurum+0x14450
[11] IRP_MJ_LOCK_CONTROL                fffff80074864450	Aurum+0x14450
[12] IRP_MJ_CLEANUP                     fffff80074864450	Aurum+0x14450
[13] IRP_MJ_CREATE_MAILSLOT             fffff80074864450	Aurum+0x14450
[14] IRP_MJ_QUERY_SECURITY              fffff80074864450	Aurum+0x14450
[15] IRP_MJ_SET_SECURITY                fffff80074864450	Aurum+0x14450
[16] IRP_MJ_POWER                       fffff80074864450	Aurum+0x14450
[17] IRP_MJ_SYSTEM_CONTROL              fffff80074864450	Aurum+0x14450
[18] IRP_MJ_DEVICE_CHANGE               fffff80074864450	Aurum+0x14450
[19] IRP_MJ_QUERY_QUOTA                 fffff80074864450	Aurum+0x14450
[1a] IRP_MJ_SET_QUOTA                   fffff80074864450	Aurum+0x14450
[1b] IRP_MJ_PNP                         fffff8006b544b80	nt!IopInvalidDeviceRequest


Device Object stacks:

!devstack ffffc38f27034e10 :
  !DevObj           !DrvObj            !DevExt           ObjectName
> ffffc38f27034e10  \Driver\Aurum      00000000  Aurum

Processed 1 device objects.
```

### DEVICE IOCTL HANDLER

Dispatch routine is at offset `0x14450`.   
See full pseudocode at [AurumIoctlPseudocode](AurumIoctlPseudocode.c)

### AURUM_IOCTL_REGISTER_PROCESS

```c
#define AURUM_IOCTL_REGISTER_PROCESS CTL_CODE(0x8001, 0x801, METHOD_BUFFERED, FILE_ANY_ACCESS) // 0x80012004
```

This IOCTL command is to register a process which is desired to protect.  
IRP caller (IoGetCurrentProcess) will be registered as a protected process.

See [this line](https://github.com/kkent030315/AurumRE/blob/7774923708bf8ad3ee9c8cdcd48ed5479164f713/AurumIoctlPseudocode.c#L2039-L2041).

```c
pcVar8 = (char *)IoGetCurrentProcess();
...
LAB_140012b7a:
    *(char **)(DAT_140033a38 + 8) = pcVar8;
    irp_2->IoStatus.Information = 8;
```

# CALLBACKS

### OBJECT CALLBACKS

`ObRegisterCallbacks` is called at the initialization phase of the driver.

```
[DEBUGGER] HookedObRegisterCallbacks: FFFFEC047C084810 FFFFEC047C0847B0
[DEBUGGER] CallbackRegistration->Version: 0x100
[DEBUGGER] CallbackRegistration->OperationRegistrationCount: 1
[DEBUGGER] CallbackRegistration->Altitude: 1001.9834
[DEBUGGER] CallbackRegistration->RegistrationContext: 0x0000000000000000
[DEBUGGER] CallbackRegistration->OperationRegistration[0].ObjectType    : 0xFFFFF8066F6FC410 (PsProcessType)
[DEBUGGER] CallbackRegistration->OperationRegistration[0].Operations    : 3
[DEBUGGER] CallbackRegistration->OperationRegistration[0].PostOperation : 0x0000000000000000
[DEBUGGER] CallbackRegistration->OperationRegistration[0].PreOperation  : 0xFFFFF8067137D9A0 Aurum+0xd9a0
```

No post operation (because post operation does not have an ability to strip granted-access mask of the handle) and no context.  
See full pseudocode at [AurumPreObPseudocode.c](AurumPreObPseudocode.c)

### PROTECTED PROCESS

in the PreObCallback at line [here](https://github.com/kkent030315/AurumRE/blob/main/AurumPreObPseudocode.c#L694),

```c
  if (probable_process != ob_info->Object) /* Check if the desired process is protected */
    goto code_r0x000140013d59;
    
  ...
  
  pcVar7 = (char *)IoGetCurrentProcess(); /* Ignore a request from protected process itself*/
  if (probable_process == pcVar7)
    goto code_r0x000140013d59;
    
  code_r0x000140013d59:
  thunk_FUN_1400164f0(uStack56 ^ (ulonglong)auStack1656);
  return;
```

`probable_process` is the pointer of process `PEPROCESS`, is set from the global variable at the prologue of the function:

```c
probable_process = *(char **)(DAT_140033a38 + 8);
```

### PROCESS CALLBACKS

`PsSetCreateProcessNotifyRoutineEx` is called at the initialization phase of the driver as well as object callbacks.

```
[DEBUGGER] PsSetCreateProcessNotifyRoutineEx: FFFFF80313374060(Aurum+0x14060) 0
```

See disassembly at [AurumProcessCallback.asm](AurumProcessCallback.asm)  
See full pseudocode at [AurumProcessCallbackPseudocode.c](AurumProcessCallbackPseudocode.c)

# MISCELLANEOUS

### DRIVER GLOBAL VARIABLES

- `Aurum+0x339e0`: PKGUARDED_MUTEX gAurumGuardedMutex1
    - xref in PreObCallback: https://github.com/kkent030315/AurumRE/blob/main/AurumPreObPseudocode.c#L1971
- `Aurum+0x33a48`: PKGUARDED_MUTEX gAurumGuardedMutex2
    - xref in PreObCallback: https://github.com/kkent030315/AurumRE/blob/main/AurumPreObPseudocode.c#L1813
- `Aurum+0x33a30`: PKSPIN_LOCK gAurumSpinLock
- `Aurum+0x33a38`: PVOID gAurumUnknownPool1 sizeof(0x18)
    - xref in ProcessCallback: https://github.com/kkent030315/AurumRE/blob/2aa6bb064dc6a4e2d8b69f3e2306069d550aec20/AurumProcessCallbackPseudocode.c#L121-L124
    - xref in PreObCallback: https://github.com/kkent030315/AurumRE/blob/ab1a2b8eeeb05a64a32faff2b437c10c2d3ef7b9/AurumPreObPseudocode.c#L411
- `Aurum+0x33a80`: PVOID gAurumUnknownPool2 sizeof(0x28)
    - xref in PreObCallback: https://github.com/kkent030315/AurumRE/blob/main/AurumPreObPseudocode.c#L1814
- `Aurum+0x33a40`: PVOID gAurumUnknownPool3 sizeof(0x10)
    - Contains ObCallback Protected Process Pointer at offset 0x8
    - xref in PreObCallback: https://github.com/kkent030315/AurumRE/blob/main/AurumPreObPseudocode.c#L1982
- `Aurum+0x33a28`: PVOID gAurumUnknownPool4 sizeof(0x11D00)
    - xref in PreObCallback: https://github.com/kkent030315/AurumRE/blob/6def5fba0b05bf7138cc2b15c35754cfe1d4c700/AurumPreObPseudocode.c#L1973
