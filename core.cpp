#include "core.h"

// Prepare everything required before the main loop.
void Core::preLoop()
{
    int windowInit = initWindowHandler();
    int graphicsInit = initGraphicsLibrary();
    if (windowInit != 0 || graphicsInit != 0) {
        // If any initializations fail, handle the error.
        handleError("Initialization failed!");
    }
    setupRenderComponents();
}

// The main application loop.
void Core::mainLoop()
{
    bool done = false;
    while (!done) {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            ImGui_ImplSDL2_ProcessEvent(&event);
            if (event.type == SDL_QUIT)
                done = true;
        }

        // Start the ImGui frame
        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplSDL2_NewFrame(window);
        ImGui::NewFrame();

        // Render the GUI
        interface.imguione();

        // End the ImGui frame and render it
        ImGui::Render();
        glClear(GL_COLOR_BUFFER_BIT);
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
        SDL_GL_SwapWindow(window);
    }
}

// Cleanup and close everything after exiting the main loop.
void Core::postLoop()
{
    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplSDL2_Shutdown();
    ImGui::DestroyContext();

    SDL_GL_DeleteContext(gl_context);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

// Initializes the SDL & OpenGL.
void Core::setupSystemComponents()
{
    initWindowHandler();
    initGraphicsLibrary();
}

// Sets up GLEW and ImGui.
void Core::setupRenderComponents()
{
    glewSetup();
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    interface.setupPlatform(window, gl_context);
}

// Initialize GLEW.
void Core::glewSetup()
{
    if (glewInit() != GLEW_OK) {
        handleError("Failed to initialize GLEW");
    }
}

// Initializes graphics library (SDL in this case).
int Core::initGraphicsLibrary()
{
    if (!window) {
        return -1;  // Error code indicating failure.
    }
    return 0;  // Success.
}

// Initializes SDL and creates a window.
int Core::initWindowHandler()
{
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        return -1;  // Error code indicating failure.
    }
    return 0;  // Success.
}

// Error handling function. For now, just outputs error and exits.
void Core::handleError(const std::string& error)
{
    std::cerr << error << std::endl;
    exit(EXIT_FAILURE);
}
