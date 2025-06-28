#include <iostream>
#include <filesystem>
#include "ppc/ppc_recomp_shared.h"
#include "App/runtime.h"

#ifdef _WIN32
#include <windows.h>
#else
#include <sys/mman.h>
#include <unistd.h>
#endif

int main(int argc, char* argv[]) {
    RecompMemory memory;
    if (!memory.init())
        return 1;

    std::filesystem::path xexPath{ "tools/private/Default.xex" };
    if (!std::filesystem::exists(xexPath)) {
        std::filesystem::path exePath = std::filesystem::absolute(argv[0]);
        auto searchDir = exePath.parent_path();
        for (int i = 0; i < 5 && !std::filesystem::exists(xexPath); ++i) {
            auto candidate = searchDir / xexPath;
            if (std::filesystem::exists(candidate)) {
                xexPath = candidate;
                break;
            }
            searchDir = searchDir.parent_path();
        }
    }
    if (!memory.loadXex(xexPath.string().c_str())) {
        std::cerr << "Warning: failed to load Default.xex" << std::endl;
    }
    else {
        std::cout << "Loaded XEX: " << xexPath << std::endl;
    }

    PPCContext ctx{};
    memory.initContext(ctx);

    _xstart(ctx, memory.base);

    memory.destroy();

    return 0;
}
