#include "Interface.h"

extern CAD cad;           // assuming cad is declared globally
extern Visualizer visualizer;


void Interface::createContext()
{
    // Setup the ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
}

int Interface::mainMenu()
{
    // Placeholder for main menu logic
    return -1;  // Return an error code to signify not implemented yet
}

// Removed the static imguione() function to avoid confusion

int Interface::guiFrame()
{
    // Placeholder for GUI frame logic
    return -1;  // Return an error code to signify not implemented yet
}

int Interface::menuLoop()
{
    // Placeholder for menu loop logic
    return -1;  // Return an error code to signify not implemented yet
}

//void Interface::imguione()
//{
//    ImGui::Begin("OpenCascade Info");
//    ImGui::Text("OpenCascade version: %s", OCC_VERSION_COMPLETE);
//    if (ImGui::Button("Make Box")) {
//        // TODO: Add logic to create a box using OpenCascade
//        std::cout << "Box created!" << std::endl;
//    }
//    ImGui::End();
//}
void Interface::imguione()
{
    ImGui::Begin("OpenCascade Info");
    ImGui::Text("OpenCascade version: %s", OCC_VERSION_COMPLETE);
    if (ImGui::Button("Make Box")) {
        // Create a box using OpenCascade
        TopoDS_Shape box = cad.makeBox(10.0, 10.0, 10.0);  // example size
        // Visualize the created box using VTK
        visualizer.visualizeShape(box);
        std::cout << "Box created and visualized!" << std::endl;
    }
    ImGui::End();
}

void Interface::setupPlatform(SDL_Window* window, SDL_GLContext gl_context)
{
    // Check if initialization was successful
    if (!ImGui_ImplSDL2_InitForOpenGL(window, gl_context)) {
        std::cerr << "Failed to initialize ImGui for SDL2 and OpenGL." << std::endl;
        return;
    }
    ImGui_ImplOpenGL3_Init("#version 130");
}
