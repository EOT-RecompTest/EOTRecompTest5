#include <stdafx.h>
#include <cpuid.h>
#include <cpu/guest_thread.h>
#include <gpu/video.h>
#include <kernel/function.h>
#include <kernel/kernel.h>
#include <kernel/xam.h>
#include <kernel/io/file_system.h>
#include <file.h>
#include <xex.h>
#include <apu/audio.h>
#include <hid/hid.h>
#include <user/config.h>
#include <user/paths.h>
#include <user/persistent_storage_manager.h>
#include <user/registry.h>
#include <kernel/xdbf.h>
#include <os/logger.h>
#include <os/process.h>
#include <os/registry.h>
#include <ui/game_window.h>
#include <preload_executable.h>

#ifdef _WIN32
#include <timeapi.h>
#endif

#if defined(_WIN32) && defined(UNLEASHED_RECOMP_D3D12)
static std::array<std::string_view, 3> g_D3D12RequiredModules =
{
    "D3D12/D3D12Core.dll",
    "dxcompiler.dll",
    "dxil.dll"
};
#endif

const size_t XMAIOBegin = 0x7FEA0000;
const size_t XMAIOEnd = XMAIOBegin + 0x0000FFFF;
reblue::kernel::Memory reblue::kernel::g_memory;
reblue::kernel::Heap reblue::kernel::g_userHeap;
XDBFWrapper g_xdbfWrapper;
std::unordered_map<uint16_t, GuestTexture*> g_xdbfTextureCache;

struct XexSectionTableEntry
{
    uint32_t info;
    uint32_t virtualAddr;
    uint32_t rawAddr;
};

static constexpr uint32_t SECTION_SIZE_MASK   = 0x0FFFFFFF;
static constexpr uint32_t XEX_SECTION_NO_LOAD = 0x10000000;
static constexpr uint32_t XEX_HEADER_SECTION_TABLE = 0x00000400;

uint32_t LdrLoadModule(const std::filesystem::path &path)
{
    auto loadResult = LoadFile(path);
    if (loadResult.empty())
    {
        assert("Failed to load module" && false);
        return 0;
    }

    LOGFN("Loading module: {}", path.string());

    auto* header = reinterpret_cast<const Xex2Header*>(loadResult.data());
    uint32_t headerSize = header->headerSize;
    uint32_t securityOffset = header->securityOffset;

    auto* security = reinterpret_cast<const Xex2SecurityInfo*>(loadResult.data() + securityOffset);
    uint32_t loadAddress = security->loadAddress;
    uint32_t imageSize = security->imageSize;

    const auto* fileFormatInfo = reinterpret_cast<const Xex2OptFileFormatInfo*>(getOptHeaderPtr(loadResult.data(), XEX_HEADER_FILE_FORMAT_INFO));
    uint32_t compressionType = fileFormatInfo->compressionType;
    uint32_t infoSize = fileFormatInfo->infoSize;

    auto entry = *reinterpret_cast<const big_endian<uint32_t>*>(
        getOptHeaderPtr(loadResult.data(), XEX_HEADER_ENTRY_POINT));

    std::vector<std::pair<uint32_t, uint32_t>> loadedRanges;
    bool usedSectionLoader = false;

    const uint8_t* sectionTableData = reinterpret_cast<const uint8_t*>(
        getOptHeaderPtr(loadResult.data(), XEX_HEADER_SECTION_TABLE));
    if (sectionTableData)
    {
        uint32_t dwordCount = *reinterpret_cast<const uint32_t*>(sectionTableData);
        byteswap_inplace(dwordCount);

        const size_t sectionCount = (dwordCount - 1) / 3;
        const auto* sections = reinterpret_cast<const XexSectionTableEntry*>(sectionTableData + 4);
        const size_t maxValid = (loadResult.data() + loadResult.size() - (sectionTableData + 4)) / sizeof(XexSectionTableEntry);

        if (sectionCount <= maxValid && sectionCount <= 512)
        {
            for (size_t i = 0; i < sectionCount; ++i)
            {
                const auto& s = sections[i];
                const uint32_t flags = s.info & 0xF0000000;
                const uint32_t size  = s.info & SECTION_SIZE_MASK;
                const uint32_t vaddr = s.virtualAddr;
                const uint32_t raw   = s.rawAddr;

                if (size == 0)
                    continue;

                uint8_t* dest = reinterpret_cast<uint8_t*>(reblue::kernel::g_memory.Translate(vaddr));
                if (!dest)
                    continue;

                if ((flags & XEX_SECTION_NO_LOAD) || raw == 0)
                {
                    std::memset(dest, 0, size);
                }
                else
                {
                    if (raw + size > loadResult.size())
                        continue;
                    std::memcpy(dest, loadResult.data() + raw, size);
                }

                loadedRanges.emplace_back(vaddr, vaddr + size);
            }

            usedSectionLoader = true;
            LOGFN("Loaded %zu sections via section table", sectionCount);
        }
    }

    bool entryCovered = std::any_of(loadedRanges.begin(), loadedRanges.end(),
        [&](const auto& r)
        {
            return entry >= r.first && entry < r.second;
        });

    if (!usedSectionLoader || !entryCovered)
    {
        uint32_t rawLoadAddress = security->loadAddress;
        uint8_t* dest = reinterpret_cast<uint8_t*>(reblue::kernel::g_memory.Translate(rawLoadAddress));
        const uint8_t* src = loadResult.data() + headerSize;

        if (compressionType == XEX_COMPRESSION_NONE)
        {
            std::memcpy(dest, src, imageSize);
        }
        else if (compressionType == XEX_COMPRESSION_BASIC)
        {
            auto* blocks = reinterpret_cast<const Xex2FileBasicCompressionBlock*>(fileFormatInfo + 1);
            size_t numBlocks = (infoSize / sizeof(Xex2FileBasicCompressionInfo)) - 1;

            for (size_t i = 0; i < numBlocks; ++i)
            {
                uint32_t dataSize = blocks[i].dataSize;
                uint32_t zeroSize = blocks[i].zeroSize;

                std::memcpy(dest, src, dataSize);
                dest += dataSize;
                src += dataSize;

                std::memset(dest, 0, zeroSize);
                dest += zeroSize;
            }
        }
        else
        {
            assert(false && "Unknown compression type.");
        }

        LOGFN("Copied XEX to 0x{:08X} ({} bytes)", rawLoadAddress, imageSize);
    }
    
    struct ResourceInfoSimple
    {
        big_endian<uint32_t> offset;
        big_endian<uint32_t> sizeOfData;
    };

    auto res = reinterpret_cast<const ResourceInfoSimple*>(
        getOptHeaderPtr(loadResult.data(), XEX_HEADER_RESOURCE_INFO));
    if (res)
    {
        g_xdbfWrapper = XDBFWrapper(
            static_cast<uint8_t*>(
                reblue::kernel::g_memory.Translate(res->offset.get())),
            res->sizeOfData.get());
    }

    LOGFN("XEX entry point: 0x{:08X}", entry);

    return entry;
}

__attribute__((constructor(101), target("no-avx,no-avx2"), noinline))
void init()
{
#ifdef __x86_64__
    uint32_t eax, ebx, ecx, edx;

    // Execute CPUID for processor info and feature bits.
    __get_cpuid(1, &eax, &ebx, &ecx, &edx);

    // Check for AVX support.
    if ((ecx & (1 << 28)) == 0)
    {
        printf("[*] CPU does not support the AVX instruction set.\n");

#ifdef _WIN32
        MessageBoxA(nullptr, "Your CPU does not meet the minimum system requirements.", "Unleashed Recompiled", MB_ICONERROR);
#endif

        std::_Exit(1);
    }
#endif
}

int main(int argc, char *argv[])
{
#ifdef _WIN32
    timeBeginPeriod(1);
#endif

    os::process::CheckConsole();

    if (!os::registry::Init())
        LOGN_WARNING("OS does not support registry.");

    os::logger::Init();

    PreloadContext preloadContext;
    preloadContext.PreloadExecutable();

    bool forceInstaller = false;
    bool forceDLCInstaller = false;
    bool useDefaultWorkingDirectory = true;
    bool forceInstallationCheck = false;
    bool graphicsApiRetry = false;
    const char *sdlVideoDriver = nullptr;

    // Use the executable directory so the debugger can locate D3D12 DLLs
    std::filesystem::path reblueBinPath = os::process::GetExecutablePath().parent_path();

    if (!useDefaultWorkingDirectory)
    {
        // Set the current working directory to the executable's path.
        std::error_code ec;
        std::filesystem::current_path(reblueBinPath, ec);
    }

    Config::Load();


#if defined(_WIN32) && defined(UNLEASHED_RECOMP_D3D12)
    for (auto& dll : g_D3D12RequiredModules)
    {
        auto dllPath = reblueBinPath / dll;
        if (!std::filesystem::exists(dllPath))
        {
            char text[512];
            snprintf(text, sizeof(text), Localise("System_Win32_MissingDLLs").c_str(), dll.data());

            // Log the missing DLL path so the user knows where to copy it.
            fprintf(stderr, "Missing %s - expected at: %s\n", dll.data(), dllPath.string().c_str());

            SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, GameWindow::GetTitle(), text, GameWindow::s_pWindow);
            std::_Exit(1);
        }
    }
#endif

    os::process::ShowConsole();

#ifdef _WIN32
    CoInitializeEx(nullptr, COINIT_MULTITHREADED);
#endif

    hid::Init();

    std::filesystem::path modulePath = "C:/X360/eot-game/game/default.xex";
    if (!std::filesystem::exists(modulePath))
    {
        modulePath = reblueBinPath / "rebluelib" / "private" / "default.xex";
        if (!std::filesystem::exists(modulePath))
        {
            modulePath = reblueBinPath / "default.xex";
        }
    }
    bool isGameInstalled = true;// Installer::checkGameInstall(GAME_INSTALL_DIRECTORY, modulePath);
    bool runInstallerWizard = forceInstaller || forceDLCInstaller || !isGameInstalled;
    //if (runInstallerWizard)
    //{
    //    if (!Video::CreateHostDevice(sdlVideoDriver, graphicsApiRetry))
    //    {
    //        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, GameWindow::GetTitle(), Localise("Video_BackendError").c_str(), GameWindow::s_pWindow);
    //        std::_Exit(1);
    //    }

    //    if (!InstallerWizard::Run(GAME_INSTALL_DIRECTORY, isGameInstalled && forceDLCInstaller))
    //    {
    //        std::_Exit(0);
    //    }
    //}

    //ModLoader::Init();

    if (!PersistentStorageManager::LoadBinary())
        LOGFN_ERROR("Failed to load persistent storage binary... (status code {})", (int)PersistentStorageManager::BinStatus);

    if (reblue::kernel::g_memory.base == nullptr)
    {
        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, GameWindow::GetTitle(), Localise("System_MemoryAllocationFailed").c_str(), GameWindow::s_pWindow);
        std::_Exit(1);
    }

    reblue::kernel::g_userHeap.Init();

    const auto gameContent = reblue::kernel::XamMakeContent(XCONTENTTYPE_RESERVED, "Game");
    const auto cacheContent = reblue::kernel::XamMakeContent(XCONTENTTYPE_RESERVED, "Cache");

    reblue::kernel::XamRegisterContent(gameContent, "C:/x360/reblue-game/game");
    reblue::kernel::XamRegisterContent(cacheContent, "C:/x360/reblue-game/cache");

    // Mount game
    reblue::kernel::XamContentCreateEx(0, "game", &gameContent, OPEN_EXISTING, nullptr, nullptr, 0, 0, nullptr);

    // OS mounts game data to D:
    reblue::kernel::XamContentCreateEx(0, "D", &gameContent, OPEN_EXISTING, nullptr, nullptr, 0, 0, nullptr);

    // Mount cache
    reblue::kernel::XamContentCreateEx(0, "cache", &cacheContent, OPEN_EXISTING, nullptr, nullptr, 0, 0, nullptr);


    XAudioInitializeSystem();

    uint32_t entry = LdrLoadModule(modulePath);

    //if (!runInstallerWizard)
    //{
        //if (!Video::CreateHostDevice(sdlVideoDriver, graphicsApiRetry))
        //{
        //    SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, GameWindow::GetTitle(), Localise("Video_BackendError").c_str(), GameWindow::s_pWindow);
        //    std::_Exit(1);
        //}
    //}

   //Video::StartPipelinePrecompilation();

    GuestThread::Start({ entry, 0, 0 });

    return 0;
}


