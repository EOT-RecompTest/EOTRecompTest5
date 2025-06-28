#include <iostream>
#include <ostream>
#include <vector>
#include <mutex>
#include <thread>
#include <chrono>
#include <cstring>

#include "../ppc/ppc_recomp_shared.h"
#define PPC_FUNC_THROW(x) PPC_FUNC(x) { throw std::runtime_error("Missing Kernel Call: " #x); }

// Simple thread local storage implementation inspired by the reference kernel
static std::vector<size_t> g_tlsFreeIndices;
static size_t g_tlsNextIndex = 0;
static std::mutex g_tlsMutex;

static thread_local std::vector<uint32_t> g_tlsValues;

// Very small bump allocator used by MmAllocatePhysicalMemoryEx stub. This
// simply hands out offsets within the guest memory block without actually
// tracking frees. It is good enough for the recompiled samples which only
// request a few allocations.
static uint32_t g_physicalAllocPtr = 0x01000000; // start at 16MB

static uint32_t& GetTlsValue(size_t index)
{
    if (g_tlsValues.size() <= index)
        g_tlsValues.resize(index + 1, 0);
    return g_tlsValues[index];
}

PPC_FUNC_THROW(__imp__XNotifyDelayUI);
PPC_FUNC_THROW(__imp__XNotifyPositionUI);
PPC_FUNC_THROW(__imp__XGetVideoMode);
PPC_FUNC_THROW(__imp__XamLoaderGetLaunchDataSize);
PPC_FUNC_THROW(__imp__XamLoaderGetLaunchData);
PPC_FUNC_THROW(__imp__XNotifyGetNext);
PPC_FUNC_THROW(__imp__XamLoaderSetLaunchData);
PPC_FUNC(__imp__XMsgStartIORequest) {
    ctx.r3.u32 = 0; // STATUS_SUCCESS
}
PPC_FUNC_THROW(__imp__XamUserGetName);
PPC_FUNC(__imp__XamUserGetSigninState) {
    ctx.r3.u32 = 1; // Signed in
}
PPC_FUNC(__imp__XamGetSystemVersion) {
    ctx.r3.u32 = 0;
}
PPC_FUNC_THROW(__imp__XamUserCreateStatsEnumerator);
PPC_FUNC_THROW(__imp__XamWriteGamerTile);
PPC_FUNC_THROW(__imp__XamUserCreateAchievementEnumerator);
PPC_FUNC_THROW(__imp__XamUserGetXUID);
PPC_FUNC_THROW(__imp__XamShowSigninUI);
PPC_FUNC_THROW(__imp__XamShowKeyboardUI);
PPC_FUNC_THROW(__imp__XamShowGamerCardUIForXUID);
PPC_FUNC_THROW(__imp__XamShowMarketplaceUI);
PPC_FUNC_THROW(__imp__XamShowDeviceSelectorUI);
PPC_FUNC_THROW(__imp__XamShowDirtyDiscErrorUI);
PPC_FUNC_THROW(__imp__XamInputGetCapabilities);
PPC_FUNC_THROW(__imp__XamInputGetState);
PPC_FUNC_THROW(__imp__XamInputSetState);
PPC_FUNC(__imp__XGetGameRegion) {
    ctx.r3.u32 = 0x03FF;
}
PPC_FUNC_THROW(__imp__XamNotifyCreateListener);
PPC_FUNC_THROW(__imp__XamLoaderLaunchTitle);
PPC_FUNC_THROW(__imp__XamEnumerate);
PPC_FUNC_THROW(__imp__XamTaskShouldExit);
PPC_FUNC_THROW(__imp__XamTaskCloseHandle);
PPC_FUNC_THROW(__imp__XamTaskSchedule);
PPC_FUNC_THROW(__imp__XamContentCreateEx);
PPC_FUNC_THROW(__imp__XamContentDelete);
PPC_FUNC_THROW(__imp__XamContentClose);
PPC_FUNC_THROW(__imp__XamContentGetCreator);
PPC_FUNC_THROW(__imp__XamContentGetLicenseMask);
PPC_FUNC_THROW(__imp__XamContentCreateEnumerator);
PPC_FUNC_THROW(__imp__XamContentGetDeviceState);
PPC_FUNC_THROW(__imp__XamContentGetDeviceData);
PPC_FUNC_THROW(__imp__XamGetExecutionId);
PPC_FUNC_THROW(__imp__XamAlloc);
PPC_FUNC_THROW(__imp__XamFree);
PPC_FUNC_THROW(__imp__XamGetOverlappedResult);
PPC_FUNC_THROW(__imp__XMsgCompleteIORequest);
PPC_FUNC_THROW(__imp__XMsgInProcessCall);
PPC_FUNC_THROW(__imp__XamGetPrivateEnumStructureFromHandle);
PPC_FUNC_THROW(__imp__XamUserGetSigninInfo);
PPC_FUNC_THROW(__imp__XMsgCancelIORequest);
PPC_FUNC_THROW(__imp__XamShowMessageBoxUIEx);
PPC_FUNC_THROW(__imp__XGetLanguage);
PPC_FUNC_THROW(__imp__XGetAVPack);
PPC_FUNC_THROW(__imp__XamLoaderTerminateTitle);

// TLS functions with minimal host implementation
PPC_FUNC(__imp__KeTlsGetValue) {
    uint32_t index = ctx.r3.u32;
    ctx.r3.u32 = GetTlsValue(index);
}

PPC_FUNC(__imp__KeTlsSetValue) {
    uint32_t index = ctx.r3.u32;
    uint32_t value = ctx.r4.u32;
    GetTlsValue(index) = value;
    ctx.r3.u32 = 1; // TRUE
}
// Provide minimal event stubs so guest code can create and manipulate events
// without raising exceptions. These do not implement real synchronization but
// simply hand out dummy handles and report success.
PPC_FUNC(__imp__NtCreateEvent) {
    uint32_t handle_ptr = ctx.r3.u32;
    static uint32_t next_event_handle = 1;
    std::cout << "NtCreateEvent called" << std::endl;
    if (handle_ptr)
        PPC_STORE_U32(handle_ptr, next_event_handle++);
    ctx.r3.u32 = 0; // STATUS_SUCCESS
}
PPC_FUNC_THROW(__imp__ObDereferenceObject);
PPC_FUNC_THROW(__imp__KeSetBasePriorityThread);
PPC_FUNC_THROW(__imp__ObReferenceObjectByHandle);
PPC_FUNC_THROW(__imp__KeQueryBasePriorityThread);
PPC_FUNC_THROW(__imp__KeSetAffinityThread);
PPC_FUNC(__imp__NtSetEvent) {
    std::cout << "NtSetEvent called" << std::endl;
    ctx.r3.u32 = 0; // STATUS_SUCCESS
}

PPC_FUNC(__imp__NtClearEvent) {
    std::cout << "NtClearEvent called" << std::endl;
    ctx.r3.u32 = 0; // STATUS_SUCCESS
}
PPC_FUNC(__imp__MmAllocatePhysicalMemoryEx) {
    uint32_t flags = ctx.r3.u32; (void)flags;
    uint32_t size = ctx.r4.u32;
    uint32_t protect = ctx.r5.u32; (void)protect;
    uint32_t minAddr = ctx.r6.u32; (void)minAddr;
    uint32_t maxAddr = ctx.r7.u32; (void)maxAddr;
    uint32_t alignment = ctx.r8.u32;

    if (alignment == 0)
        alignment = 1;

    // align the allocation pointer
    g_physicalAllocPtr = (g_physicalAllocPtr + alignment - 1) & ~(alignment - 1);
    uint32_t addr = g_physicalAllocPtr;
    g_physicalAllocPtr += size;

    std::cout << "MmAllocatePhysicalMemoryEx(" << std::hex << flags << ", "
        << size << ", " << protect << ", " << minAddr << ", "
        << maxAddr << ", " << alignment << ") -> 0x" << addr
        << std::dec << std::endl;

    ctx.r3.u32 = addr;
}
PPC_FUNC(__imp__MmSetAddressProtect) {
    uint32_t addr = ctx.r3.u32;
    uint32_t size = ctx.r4.u32;
    uint32_t protect = ctx.r5.u32;

    std::cout << "MmSetAddressProtect(" << std::hex << addr << ", " << size
        << ", " << protect << ")" << std::dec << std::endl;

    ctx.r3.u32 = 0; // STATUS_SUCCESS
}
PPC_FUNC_THROW(__imp__MmFreePhysicalMemory);
PPC_FUNC_THROW(__imp__MmQueryAddressProtect);
PPC_FUNC(__imp__RtlInitAnsiString) {
    uint32_t dest_off = ctx.r3.u32;
    uint32_t src_off = ctx.r4.u32;

    char* src = src_off ? reinterpret_cast<char*>(base + src_off) : nullptr;
    uint16_t len = src ? static_cast<uint16_t>(strlen(src)) : 0;

    PPC_STORE_U16(dest_off, len);
    PPC_STORE_U16(dest_off + 2, len + 1);
    PPC_STORE_U32(dest_off + 4, src_off);
}
// Provide minimal semaphore stubs so guest code can proceed without throwing
// an exception. These functions simply hand out dummy handles and report
// success without implementing real synchronization.
PPC_FUNC(__imp__NtCreateSemaphore) {
    uint32_t handle_ptr = ctx.r3.u32;
    static uint32_t next_handle = 1;
    std::cout << "NtCreateSemaphore called" << std::endl;
    if (handle_ptr)
        PPC_STORE_U32(handle_ptr, next_handle++);
    ctx.r3.u32 = 0; // STATUS_SUCCESS
}

PPC_FUNC(__imp__NtReleaseSemaphore) {
    std::cout << "NtReleaseSemaphore called" << std::endl;
    ctx.r3.u32 = 0; // STATUS_SUCCESS
}
PPC_FUNC_THROW(__imp__NtQueryFullAttributesFile);
PPC_FUNC_THROW(__imp__DbgBreakPoint);
// Guest code queries executable privileges early during startup. Simply
// report success so the check does not abort execution.
PPC_FUNC(__imp__XexCheckExecutablePrivilege) {
    ctx.r3.u32 = 0;
}
PPC_FUNC_THROW(__imp__NtQueryVirtualMemory);
PPC_FUNC(__imp__MmQueryStatistics) {
    std::cout << "MmQueryStatistics called" << std::endl;
}
PPC_FUNC(__imp__KeQuerySystemTime) {
    constexpr int64_t FILETIME_EPOCH_DIFFERENCE = 116444736000000000LL;
    auto now = std::chrono::system_clock::now();
    auto timeSinceEpoch = now.time_since_epoch();
    int64_t currentTime100ns =
        std::chrono::duration_cast<std::chrono::duration<int64_t, std::ratio<1, 10000000>>>(
            timeSinceEpoch)
        .count();
    currentTime100ns += FILETIME_EPOCH_DIFFERENCE;
    PPC_STORE_U64(ctx.r3.u32, currentTime100ns);
}
PPC_FUNC_THROW(__imp__RtlTimeToTimeFields);
PPC_FUNC_THROW(__imp__ExGetXConfigSetting);
PPC_FUNC_THROW(__imp__XexUnloadImage);
PPC_FUNC_THROW(__imp__XexGetProcedureAddress);
PPC_FUNC_THROW(__imp__XexLoadImage);
PPC_FUNC_THROW(__imp__StfsControlDevice);
PPC_FUNC_THROW(__imp__StfsCreateDevice);
PPC_FUNC_THROW(__imp__NtQueryVolumeInformationFile);
PPC_FUNC_THROW(__imp__NtClose);
PPC_FUNC_THROW(__imp__NtOpenFile);
PPC_FUNC_THROW(__imp____C_specific_handler);
PPC_FUNC_THROW(__imp__XeKeysConsoleSignatureVerification);
PPC_FUNC_THROW(__imp__XeCryptSha);
PPC_FUNC_THROW(__imp__NtWriteFile);
PPC_FUNC_THROW(__imp__NtReadFile);
PPC_FUNC_THROW(__imp__XeKeysConsolePrivateKeySign);
PPC_FUNC_THROW(__imp__NtCreateFile);
// Provide very small stubs for memory management calls so the recompiled code
// can run without throwing exceptions. These simply report success without
// performing any allocation.
PPC_FUNC(__imp__NtFreeVirtualMemory) {
    std::cout << "NtFreeVirtualMemory called" << std::endl;
    ctx.r3.u64 = 0; // STATUS_SUCCESS
}

PPC_FUNC(__imp__NtAllocateVirtualMemory) {
    std::cout << "NtAllocateVirtualMemory called" << std::endl;
    ctx.r3.u64 = 0; // STATUS_SUCCESS
}
PPC_FUNC_THROW(__imp___snprintf);
PPC_FUNC_THROW(__imp__KeLeaveCriticalRegion);
PPC_FUNC_THROW(__imp__NtFlushBuffersFile);
PPC_FUNC_THROW(__imp__KeEnterCriticalRegion);
PPC_FUNC_THROW(__imp__IoDismountVolume);
PPC_FUNC_THROW(__imp__RtlNtStatusToDosError);
PPC_FUNC_THROW(__imp__ObCreateSymbolicLink);
PPC_FUNC_THROW(__imp__ObDeleteSymbolicLink);
// RtlEnterCriticalSection expects a recursive lock. Use std::recursive_mutex
// to approximate the Windows CRITICAL_SECTION behavior.
static std::recursive_mutex g_criticalSectionMutex;

PPC_FUNC(__imp__RtlLeaveCriticalSection) {
    g_criticalSectionMutex.unlock();
}
PPC_FUNC_THROW(__imp__KeResetEvent);
PPC_FUNC_THROW(__imp__KeWaitForSingleObject);
PPC_FUNC_THROW(__imp__KeSetEvent);
PPC_FUNC_THROW(__imp__NtWaitForSingleObjectEx);
PPC_FUNC_THROW(__imp__NtResumeThread);
PPC_FUNC(__imp__KeGetCurrentProcessType) {
    std::cout << "KeGetCurrentProcessType called" << std::endl;
    ctx.r3.u64 = 1; // Process type 1 indicates user mode
}
PPC_FUNC_THROW(__imp__NtSetInformationFile);
PPC_FUNC_THROW(__imp__XexGetModuleHandle);
PPC_FUNC_THROW(__imp__NtYieldExecution);
PPC_FUNC_THROW(__imp__DbgPrint);
PPC_FUNC_THROW(__imp__NtQueryInformationFile);
PPC_FUNC_THROW(__imp__NtQueryDirectoryFile);
PPC_FUNC_THROW(__imp__NtReadFileScatter);
PPC_FUNC_THROW(__imp__NtDuplicateObject);
PPC_FUNC(__imp__RtlUnicodeToMultiByteN) {
    uint32_t dest_off = ctx.r3.u32;
    uint32_t max_bytes = ctx.r4.u32;
    uint32_t bytes_out_off = ctx.r5.u32;
    uint32_t src_off = ctx.r6.u32;
    uint32_t src_bytes = ctx.r7.u32;

    auto* src = reinterpret_cast<const uint16_t*>(base + src_off);
    uint32_t count = src_bytes / 2;

    if (bytes_out_off)
        PPC_STORE_U32(bytes_out_off, count);

    if (count > max_bytes)
    {
        ctx.r3.u32 = 0xC000000D; // STATUS_INVALID_PARAMETER
        return;
    }

    for (uint32_t i = 0; i < count; ++i)
    {
        uint16_t c = __builtin_bswap16(src[i]);
        PPC_STORE_U8(dest_off + i, c < 256 ? static_cast<uint8_t>(c) : '?');
    }

    ctx.r3.u32 = 0; // STATUS_SUCCESS
}
PPC_FUNC(__imp__KeDelayExecutionThread) {
    uint32_t wait_mode = ctx.r3.u32; (void)wait_mode;
    bool alertable = ctx.r4.u32 != 0;
    int64_t timeout_val = static_cast<int64_t>(ctx.r5.s64);

    if (alertable) {
        ctx.r3.u32 = 0x000000C0; // STATUS_USER_APC
        return;
    }

    uint32_t timeout_ms = 0;
    if (timeout_val != 0)
        timeout_ms = static_cast<uint32_t>((-timeout_val) / 10000);

    if (timeout_ms == 0)
        std::this_thread::yield();
    else
        std::this_thread::sleep_for(std::chrono::milliseconds(timeout_ms));

    ctx.r3.u32 = 0; // STATUS_SUCCESS
}
PPC_FUNC_THROW(__imp__RtlTimeFieldsToTime);
PPC_FUNC_THROW(__imp__IoInvalidDeviceRequest);
PPC_FUNC_THROW(__imp__ObReferenceObject);
PPC_FUNC(__imp__RtlInitializeCriticalSection) {
    // Simply zero out the fields expected by the guest
    uint32_t off = ctx.r3.u32;
    PPC_STORE_U32(off, 0);       // Header placeholder
    PPC_STORE_U32(off + 4, 0);   // LockCount & RecursionCount
    PPC_STORE_U32(off + 8, 0);   // OwningThread
    ctx.r3.u32 = 0; // STATUS_SUCCESS
}
PPC_FUNC_THROW(__imp__IoCreateDevice);
PPC_FUNC_THROW(__imp__IoDeleteDevice);
PPC_FUNC_THROW(__imp__ExAllocatePoolTypeWithTag);
PPC_FUNC_THROW(__imp__ExFreePool);
PPC_FUNC_THROW(__imp__RtlCompareStringN);
PPC_FUNC_THROW(__imp__IoCompleteRequest);
PPC_FUNC_THROW(__imp__NtWriteFileGather);
PPC_FUNC_THROW(__imp__KfReleaseSpinLock);
PPC_FUNC_THROW(__imp__KfAcquireSpinLock);
PPC_FUNC_THROW(__imp__ExCreateThread);
PPC_FUNC_THROW(__imp__RtlUpcaseUnicodeChar);
PPC_FUNC_THROW(__imp__ObIsTitleObject);
PPC_FUNC_THROW(__imp__IoCheckShareAccess);
PPC_FUNC_THROW(__imp__IoSetShareAccess);
PPC_FUNC_THROW(__imp__IoRemoveShareAccess);
PPC_FUNC_THROW(__imp__IoDismountVolumeByFileHandle);
PPC_FUNC_THROW(__imp__NtDeviceIoControlFile);
PPC_FUNC(__imp__HalReturnToFirmware) {
    std::cout << "HalReturnToFirmware called" << std::endl;
}
PPC_FUNC_THROW(__imp__RtlFillMemoryUlong);
PPC_FUNC_THROW(__imp__KeBugCheckEx);
PPC_FUNC_THROW(__imp__RtlCompareMemoryUlong);
PPC_FUNC_THROW(__imp__RtlRaiseException);
PPC_FUNC_THROW(__imp__VdSetSystemCommandBufferGpuIdentifierAddress);
PPC_FUNC_THROW(__imp__KiApcNormalRoutineNop);
PPC_FUNC_THROW(__imp__MmGetPhysicalAddress);
PPC_FUNC_THROW(__imp__KeReleaseSpinLockFromRaisedIrql);
PPC_FUNC_THROW(__imp__KeInsertQueueDpc);
PPC_FUNC_THROW(__imp__VdEnableRingBufferRPtrWriteBack);
PPC_FUNC_THROW(__imp__VdInitializeRingBuffer);
PPC_FUNC_THROW(__imp__KeAcquireSpinLockAtRaisedIrql);
PPC_FUNC_THROW(__imp__VdEnableDisableClockGating);
PPC_FUNC(__imp__KeQueryPerformanceFrequency) {
    ctx.r3.u64 = 49875000;
}
PPC_FUNC_THROW(__imp__VdPersistDisplay);
PPC_FUNC_THROW(__imp__VdSwap);
PPC_FUNC_THROW(__imp__VdGetSystemCommandBuffer);
PPC_FUNC_THROW(__imp__sprintf);
PPC_FUNC_THROW(__imp__KeBugCheck);
PPC_FUNC_THROW(__imp__VdGetCurrentDisplayGamma);
PPC_FUNC_THROW(__imp__KeInitializeDpc);
PPC_FUNC_THROW(__imp__KeLockL2);
PPC_FUNC_THROW(__imp__KeUnlockL2);
PPC_FUNC_THROW(__imp__VdSetDisplayMode);
PPC_FUNC_THROW(__imp__VdQueryVideoMode);
PPC_FUNC_THROW(__imp__VdGetCurrentDisplayInformation);
PPC_FUNC_THROW(__imp__VdQueryVideoFlags);
PPC_FUNC_THROW(__imp__VdSetGraphicsInterruptCallback);
PPC_FUNC_THROW(__imp__VdSetDisplayModeOverride);
PPC_FUNC_THROW(__imp__VdInitializeEngines);
PPC_FUNC_THROW(__imp__VdIsHSIOTrainingSucceeded);
PPC_FUNC_THROW(__imp__VdShutdownEngines);
PPC_FUNC_THROW(__imp__VdCallGraphicsNotificationRoutines);
PPC_FUNC_THROW(__imp___vsnprintf);
PPC_FUNC_THROW(__imp__VdInitializeScalerCommandBuffer);
PPC_FUNC_THROW(__imp__VdRetrainEDRAM);
PPC_FUNC_THROW(__imp__VdRetrainEDRAMWorker);
PPC_FUNC_THROW(__imp__KeSetCurrentProcessType);
PPC_FUNC_THROW(__imp__NetDll_XNetStartup);
PPC_FUNC_THROW(__imp__NetDll_XNetCleanup);
PPC_FUNC_THROW(__imp__NetDll_XNetRandom);
PPC_FUNC_THROW(__imp__NetDll_XNetCreateKey);
PPC_FUNC_THROW(__imp__NetDll_XNetRegisterKey);
PPC_FUNC_THROW(__imp__NetDll_XNetXnAddrToInAddr);
PPC_FUNC_THROW(__imp__NetDll_XNetServerToInAddr);
PPC_FUNC_THROW(__imp__NetDll_XNetTsAddrToInAddr);
PPC_FUNC_THROW(__imp__NetDll_XNetInAddrToXnAddr);
PPC_FUNC_THROW(__imp__NetDll_XNetInAddrToString);
PPC_FUNC_THROW(__imp__NetDll_XNetUnregisterInAddr);
PPC_FUNC_THROW(__imp__NetDll_XNetConnect);
PPC_FUNC_THROW(__imp__NetDll_XNetGetConnectStatus);
PPC_FUNC_THROW(__imp__NetDll_XNetGetTitleXnAddr);
PPC_FUNC_THROW(__imp__NetDll_WSAStartup);
PPC_FUNC_THROW(__imp__NetDll_WSACleanup);
PPC_FUNC_THROW(__imp__NetDll_socket);
PPC_FUNC_THROW(__imp__NetDll_closesocket);
PPC_FUNC_THROW(__imp__NetDll_ioctlsocket);
PPC_FUNC_THROW(__imp__NetDll_setsockopt);
PPC_FUNC_THROW(__imp__NetDll_bind);
PPC_FUNC_THROW(__imp__NetDll_connect);
PPC_FUNC_THROW(__imp__NetDll_select);
PPC_FUNC_THROW(__imp__NetDll_recv);
PPC_FUNC_THROW(__imp__NetDll_recvfrom);
PPC_FUNC_THROW(__imp__NetDll_send);
PPC_FUNC_THROW(__imp__NetDll_sendto);
PPC_FUNC_THROW(__imp__NetDll_inet_addr);
PPC_FUNC_THROW(__imp__NetDll_WSAGetLastError);
PPC_FUNC_THROW(__imp__NetDll___WSAFDIsSet);
PPC_FUNC_THROW(__imp__XamSessionRefObjByHandle);
PPC_FUNC_THROW(__imp__XamSessionCreateHandle);
PPC_FUNC_THROW(__imp__XNetLogonGetTitleID);
PPC_FUNC_THROW(__imp__XamCreateEnumeratorHandle);
PPC_FUNC(__imp__XamUserReadProfileSettings) {
    uint32_t buffer_size_off = ctx.r6.u32;
    uint32_t buffer_off = ctx.r7.u32;

    if (buffer_off) {
        memset(reinterpret_cast<void*>(base + buffer_off), 0, PPC_LOAD_U32(buffer_size_off));
    }
    else {
        PPC_STORE_U32(buffer_size_off, 4);
    }
    ctx.r3.u32 = 0;
}
PPC_FUNC_THROW(__imp__XamUserGetMembershipTierFromXUID);
PPC_FUNC_THROW(__imp__XamUserGetOnlineCountryFromXUID);
PPC_FUNC_THROW(__imp__XMsgStartIORequestEx);
PPC_FUNC(__imp__RtlTryEnterCriticalSection) {
    bool locked = g_criticalSectionMutex.try_lock();
    ctx.r3.u32 = locked ? 1 : 0;
}
PPC_FUNC_THROW(__imp__XAudioGetVoiceCategoryVolume);
PPC_FUNC_THROW(__imp__MmMapIoSpace);
PPC_FUNC_THROW(__imp__XMACreateContext);
PPC_FUNC_THROW(__imp__XMAReleaseContext);
PPC_FUNC_THROW(__imp__KeWaitForMultipleObjects);
PPC_FUNC_THROW(__imp__XAudioSubmitRenderDriverFrame);
PPC_FUNC_THROW(__imp__XAudioUnregisterRenderDriverClient);
PPC_FUNC_THROW(__imp__XAudioRegisterRenderDriverClient);
PPC_FUNC_THROW(__imp__XAudioGetSpeakerConfig);
PPC_FUNC(__imp__KeTlsAlloc) {
    std::lock_guard<std::mutex> lock(g_tlsMutex);
    uint32_t index;
    if (!g_tlsFreeIndices.empty()) {
        index = g_tlsFreeIndices.back();
        g_tlsFreeIndices.pop_back();
    }
    else {
        index = static_cast<uint32_t>(g_tlsNextIndex++);
    }
    ctx.r3.u32 = index;
}
PPC_FUNC_THROW(__imp__RtlUnwind);
PPC_FUNC(__imp__KeTlsFree) {
    uint32_t index = ctx.r3.u32;
    std::lock_guard<std::mutex> lock(g_tlsMutex);
    g_tlsFreeIndices.push_back(index);
    ctx.r3.u32 = 1; // TRUE
}
PPC_FUNC(__imp__RtlInitializeCriticalSectionAndSpinCount) {
    // Basic initialization mirroring RtlInitializeCriticalSection but
    // honoring the specified spin count for the header value.
    uint32_t off = ctx.r3.u32;
    uint32_t spin = ctx.r4.u32;

    PPC_STORE_U32(off, (spin + 255) >> 8); // Header.Absolute
    PPC_STORE_U32(off + 4, 0);             // LockCount & RecursionCount
    PPC_STORE_U32(off + 8, 0);             // OwningThread

    ctx.r3.u32 = 0; // STATUS_SUCCESS
}
PPC_FUNC_THROW(__imp__ExTerminateThread);
PPC_FUNC_THROW(__imp__RtlFreeAnsiString);
PPC_FUNC_THROW(__imp__RtlUnicodeStringToAnsiString);
PPC_FUNC_THROW(__imp__RtlInitUnicodeString);
PPC_FUNC(__imp__RtlMultiByteToUnicodeN) {
    uint32_t dest_off = ctx.r3.u32;
    uint32_t max_bytes = ctx.r4.u32;
    uint32_t bytes_out_off = ctx.r5.u32;
    uint32_t src_off = ctx.r6.u32;
    uint32_t src_bytes = ctx.r7.u32;

    uint32_t length = std::min(max_bytes / 2, src_bytes);
    for (uint32_t i = 0; i < length; ++i) {
        uint16_t val = static_cast<uint8_t>(PPC_LOAD_U8(src_off + i));
        PPC_STORE_U16(dest_off + i * 2, val);
    }

    if (bytes_out_off)
        PPC_STORE_U32(bytes_out_off, length * 2);

    ctx.r3.u32 = 0; // STATUS_SUCCESS
}
PPC_FUNC(__imp__NtCreateMutant) {
    uint32_t handle_ptr = ctx.r3.u32;
    if (handle_ptr)
        PPC_STORE_U32(handle_ptr, 1); // dummy handle
    ctx.r3.u32 = 0; // STATUS_SUCCESS
}

PPC_FUNC(__imp__NtReleaseMutant) {
    ctx.r3.u32 = 0; // STATUS_SUCCESS
}
PPC_FUNC_THROW(__imp__RtlCaptureContext);
PPC_FUNC_THROW(__imp__ExRegisterTitleTerminateNotification);

void __imp__RtlImageXexHeaderField(PPCContext& __restrict ctx, uint8_t* base)
{
    std::cout << "RtlImageXexHeaderField Called" << std::endl;
}

void __imp__RtlEnterCriticalSection(PPCContext& __restrict ctx, uint8_t* base)
{
    g_criticalSectionMutex.lock();
}
