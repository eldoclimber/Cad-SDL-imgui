#pragma once
/*
Note for release build:
OCCT and VTK must be rebuilt in CMAKE to release build configuration. Default build of all libraries is currently in debug.
Additionally, modify the linker library dependancies
*/

#include "HeaderList.h"

#include "core.h"


Core core;

int main(int argc, char* argv[]) {

    core.preLoop();

    core.mainLoop();

    core.postLoop();



    return 0;
}

