# AurumRE
Reverse engineering of Aurum Ricochet anti-cheat driver

### CONTRIBUTION

Your contribution is welcome. if you find valuable information of any and if you mind share, do not heistate to open issue or PRs.  
I suggest you to use Ghidra at this time because IDA is sucks for packed PEs(not impossible but will took lots of your time).

# NOTES

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

The PE seems packed with not-known packer, 2nd `.text` section is seemed made by packer to store stubs.  
Packed but it's totally human-readable.  
**UPDATE 17/10/21: Maybe LLVM Obfuscator or optimized.**

Packer's control flow obfuscation is quite simple and the control will be back in the original sub's epilogue.

```asm
; just like:
sub_obfuscated_xxx proc
jmp xxx ; jmp to the jumptable section and walk the jmp jungle
; ...
loc_epilogue:
mov rax, cs:IofCompleteRequest
call rax
ret
sub_obfuscated_xxx endp
```

The 2nd(at the last index) `.text` section looks like made by packer to store stubs of jmp tables where the specific functions are configured to obfuscate its control flows by abusing `jmp` trampoline.

The following functions are heavily obfuscated (as I just know as of now):
- Dispatch routine of IRPs: Aurum+0x14450
- Process creation callback routine: Aurum+0x14060
- Object pre-callback routine: Aurum+0xD9A0

Obfuscated control-flow view:

https://user-images.githubusercontent.com/37926134/137597435-5c8264ca-f68e-42cd-9709-2e805c326e26.mp4

Looks like the obfuscation algorithm is quite simple?

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

No `MmGetSystemRoutineAddress` import, but potential hardcoded imports with low possibility.

### LIVE MEMORY DUMP

Dumped live memory of entire driver image but couldn't find any useful information like strings expanded at the runtime.

### POOL TAG

Pool tags are seem not defined.

```c
puVar7 = (undefined8 *)ExAllocatePoolWithTag(0, uVar12, 'None');
if (puVar7 != (undefined8 *)0x0)
{
    thunk_FUN_14001504b(puVar7, puVar18 + 1, uVar12);
    KeAcquireGuardedMutex(&DAT_140033a48);
    ExFreePoolWithTag(DAT_140033a80);
    DAT_140033a80 = puVar7;
    goto LAB_14001a514;
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

`ExAllocatePoolWithTag` will be called four times, with `'None' 0x656E6F4E` (default tag defined in `ExAllocatePool` as macro in WDK) tag, and all pools are paged.

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

Now we know that the dispatch routine is at offset `0x14450`.

```asm
2: kd> u Aurum+0x14450
Aurum+0x14450:
fffff800`74864450 e960deffff      jmp     Aurum+0x122b5 (fffff800`748622b5) ; jmp
fffff800`74864455 3da7bc1300      cmp     eax,13BCA7h
fffff800`7486445a 0f84f7a20000    je      Aurum+0x1e757 (fffff800`7486e757)
fffff800`74864460 e9ffd00200      jmp     Aurum+0x41564 (fffff800`74891564)
fffff800`74864465 4d0fafc1        imul    r8,r9
fffff800`74864469 498bc0          mov     rax,r8
fffff800`7486446c 48c1e820        shr     rax,20h
fffff800`74864470 493bc3          cmp     rax,r11
```

```asm
2: kd> u Aurum+0x122b5
Aurum+0x122b5:
fffff800`748622b5 48895c2408      mov     qword ptr [rsp+8],rbx
fffff800`748622ba 4889742418      mov     qword ptr [rsp+18h],rsi
fffff800`748622bf 57              push    rdi
fffff800`748622c0 4154            push    r12
fffff800`748622c2 4155            push    r13
fffff800`748622c4 4156            push    r14
fffff800`748622c6 4157            push    r15
fffff800`748622c8 4881ec60020000  sub     rsp,260h
```

I am seeing this assembly stub on the entire IOCTL control flow over and over.  
Is this like a payload-unencryption routine? the number of this stubs are sounds like the number of Aurum's IOCTL commands.  
I am pretty sure the driver would have payload-encryption measure if any of IOCTL processes has its payloads.

<details>
<summary>Spoiler</summary>

```asm
.text:000000014001059D                 mov     [rsp+arg_180], rcx
.text:00000001400105A5                 imul    rcx, 7D0h
.text:00000001400105AC                 mul     rcx
.text:00000001400105AF                 mov     rax, rcx
.text:00000001400105B2                 sub     rax, rdx
.text:00000001400105B5                 shr     rax, 1
.text:00000001400105B8                 add     rax, rdx
.text:00000001400105BB                 shr     rax, 0Bh
.text:00000001400105BF                 imul    rax, 0E1Bh
.text:00000001400105C6                 sub     rcx, rax
.text:00000001400105C9                 imul    rdi, rcx, 0E1Bh
.text:00000001400105D0                 mov     rax, r11
.text:00000001400105D3                 mul     rdi
.text:00000001400105D6                 shr     rdx, 0Ch
.text:00000001400105DA                 imul    rax, rdx, 1107h
.text:00000001400105E1                 sub     rdi, rax
.text:00000001400105E4                 mov     rax, rbx
.text:00000001400105E7                 mul     rdi
.text:00000001400105EA                 mov     rax, rdi
.text:00000001400105ED                 sub     rax, rdx
.text:00000001400105F0                 shr     rax, 1
.text:00000001400105F3                 add     rax, rdx
.text:00000001400105F6                 shr     rax, 6
.text:00000001400105FA                 imul    rcx, rax, 62h ; 'b'
.text:00000001400105FE                 mov     rax, 0A0A0A0A0A0A0A0A1h
.text:0000000140010608                 mul     rdi
.text:000000014001060B                 shr     rdx, 5
.text:000000014001060F                 add     rcx, rdx
.text:0000000140010612                 imul    rax, rcx, 66h ; 'f'
.text:0000000140010616                 imul    rcx, rdi, 68h ; 'h'
.text:000000014001061A                 sub     rcx, rax
.text:000000014001061D                 movzx   eax, word ptr [rcx+rsi+29050h]
.text:0000000140010625                 imul    rcx, rax, 7D0h
.text:000000014001062C                 mov     rax, r9
.text:000000014001062F                 mul     rcx
.text:0000000140010632                 shr     rdx, 0Bh
.text:0000000140010636                 imul    rax, rdx, 0C9Dh
.text:000000014001063D                 sub     rcx, rax
.text:0000000140010640                 imul    rdi, rcx, 0E35h
.text:0000000140010647                 mov     rax, r9
.text:000000014001064A                 mul     rdi
.text:000000014001064D                 shr     rdx, 0Bh
.text:0000000140010651                 imul    rax, rdx, 0C9Dh
.text:0000000140010658                 sub     rdi, rax
.text:000000014001065B                 mov     rax, r12
.text:000000014001065E                 mul     rdi
.text:0000000140010661                 shr     rdx, 7
.text:0000000140010665                 imul    rcx, rdx, 0F5h ; 'õ'
.text:000000014001066C                 mov     rax, r14
.text:000000014001066F                 mul     rdi
.text:0000000140010672                 shr     rdx, 4
.text:0000000140010676                 add     rcx, rdx
.text:0000000140010679                 imul    rax, rcx, 88h ; 'ˆ'
.text:0000000140010680                 lea     rcx, [rdi+rdi*8]
.text:0000000140010684                 shl     rcx, 4
.text:0000000140010688                 sub     rcx, rax
.text:000000014001068B                 add     rcx, r15
.text:000000014001068E                 mov     [rsp+ByteOffset], rcx
.text:0000000140010693                 mov     rdi, [rcx]
.text:0000000140010696                 mov     rcx, rdi
.text:0000000140010699                 rol     rcx, 4
.text:000000014001069D                 mov     rdx, qword ptr [rsp+Length]
.text:00000001400106A2                 shr     rdx, 20h
.text:00000001400106A6                 mov     rax, rdx
.text:00000001400106A9                 and     eax, 4021BAB6h
.text:00000001400106AE                 mov     [rsp+arg_40], rax
.text:00000001400106B3                 or      rdx, 4021BAB6h
.text:00000001400106BA                 sub     rdx, rax
.text:00000001400106BD                 mov     rax, rcx
.text:00000001400106C0                 not     rax
.text:00000001400106C3                 and     rax, 0FFFFFFFFFFFFFFFEh
.text:00000001400106C7                 add     rax, 2
.text:00000001400106CB                 add     rax, rcx
.text:00000001400106CE                 jz      loc_140014F99
.text:00000001400106D4                 jmp     loc_140017A89
```

</details>

See full disassembly at [asm_Aurum%2B0x122b5.asm](asm_Aurum%2B0x122b5.asm)  
See full deobfuscated disassembly at [AurumIoctlDeobfuscated.asm](AurumIoctlDeobfuscated.asm)  
See full Ghidra C pseudocode at [AurumIoctlPseudocode](AurumIoctlPseudocode.c)

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

### PROCESS CALLBACKS

`PsSetCreateProcessNotifyRoutineEx` is called at the initialization phase of the driver as well as object callbacks.

```
[DEBUGGER] PsSetCreateProcessNotifyRoutineEx: FFFFF80313374060(Aurum+0x14060) 0
```

See disassembly at [AurumProcessCallback.asm](AurumProcessCallback.asm)  
See full pseudocode at [AurumProcessCallbackPseudocode.c](AurumProcessCallbackPseudocode.c)

# MISCELLANEOUS

### DRIVER GLOBAL VARIABLES

- Aurum+0x339e0: PKGUARDED_MUTEX gAurumGuardedMutex1
- Aurum+0x33a48: PKGUARDED_MUTEX gAurumGuardedMutex2
- Aurum+0x33a30: PKSPIN_LOCK gAurumSpinLock
- Aurum+0x33a38: PVOID gAurumUnknownPool1 sizeof(0x18)
    - xref in ProcessCallback: https://github.com/kkent030315/AurumRE/blob/2aa6bb064dc6a4e2d8b69f3e2306069d550aec20/AurumProcessCallbackPseudocode.c#L121-L124
    - xref in PreObCallback: https://github.com/kkent030315/AurumRE/blob/ab1a2b8eeeb05a64a32faff2b437c10c2d3ef7b9/AurumPreObPseudocode.c#L411
- Aurum+0x33a80: PVOID gAurumUnknownPool2 sizeof(0x28)
    - xref in PreObCallback: https://github.com/kkent030315/AurumRE/blob/main/AurumPreObPseudocode.c#L1814
- Aurum+0x33a40: PVOID gAurumUnknownPool3 sizeof(0x10)
    - xref in PreObCallback: https://github.com/kkent030315/AurumRE/blob/main/AurumPreObPseudocode.c#L1982
- Aurum+0x33a28: PVOID gAurumUnknownPool4 sizeof(0x11D00)
    - xref in PreObCallback: https://github.com/kkent030315/AurumRE/blob/6def5fba0b05bf7138cc2b15c35754cfe1d4c700/AurumPreObPseudocode.c#L1973
