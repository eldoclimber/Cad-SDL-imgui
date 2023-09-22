//Standard includes and defines for libraries
#include <iostream>
#define SDL_MAIN_HANDLED


// Window and event handler
#include <SDL.h>
#include <GL/glew.h>
#include <vtkAutoInit.h>

// Dear ImGui headers
#include "Vendors/imgui/imgui.h"
#include "Vendors/imgui/imgui_impl_sdl2.h"
#include "Vendors/imgui/imgui_impl_opengl3.h"

// Open Cascade Headers
#include <BRepPrimAPI_MakeBox.hxx>
#include <Standard_Version.hxx>

#include <vtksys/Configure.hxx>
#include <vtksys/Status.hxx>
#include <vtksys/SystemTools.hxx>
#include "vtkSDL2OpenGLRenderWindow.h"

#include "core.h"