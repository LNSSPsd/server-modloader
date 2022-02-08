#include <modloader/loader.h>
#include "crashhandler/crash_handler.h"

using namespace modloader;

__attribute__((constructor))
static void modloader_init() {
    CrashHandler::registerCrashHandler();
    ModLoader::addLibSearchDir("mods");
    ModLoader::loadModsFromDirectory("mods");
}