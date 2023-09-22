#pragma once
/*
Note for release build:
OCCT and VTK must be rebuilt in CMAKE to release build configuration. Default build of all libraries is currently in debug.
Additionally, modify the linker library dependancies
*/

#include "HeaderList.h"

#include "core.h"

/* Global Instances need to be declared here for extern references */
Core core;														// An instance of the Core class to manage the main loop.
CAD cad;														// An instance of the CAD class to manage CAD operations.		
Visualizer visualizer;											// An instance of the Visualizer class to manage rendering.
Interface interface;											// An instance of the Interface class to manage GUI.



int main(int argc, char* argv[]) {

    core.preLoop();

    core.mainLoop();

    core.postLoop();
    
    


    return 0;
}

