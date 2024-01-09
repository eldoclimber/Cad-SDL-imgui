#pragma once

#include "HeaderList.h"
#include "Interface.h"
#include "CAD.h"
#include "Visualizer.h"
#include <vtkGenericOpenGLRenderWindow.h>

class Core
{
public:
	void preLoop();													// Sets up everything before entering the main loop.
	void mainLoop();												// The main event/render loop.
	void postLoop();												// Cleanup after main loop exits.
	void handleError(const std::string& error);						// Error handling function. Writes to console/log and exits.
																	
private:															
	void setupSystemComponents();									// Initializes system components like SDL and OpenGL.
	void setupRenderComponents();									// Sets up render-specific components like ImGui.
	void glewSetup();												// Initialize GLEW to manage OpenGL extensions.
	int initGraphicsLibrary();										// Initializes the graphics libraries, returns error code if fails.
	int initWindowHandler();										// Initializes SDL and creates a window, returns error code if fails.


	SDL_Window* window = SDL_CreateWindow("CAD Demo Program",
		SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
		800, 600, SDL_WINDOW_OPENGL);								// Pointer to the main SDL window.
	
	SDL_GLContext gl_context = SDL_GL_CreateContext(window);		// The OpenGL context associated with the window.

	vtkSmartPointer<vtkGenericOpenGLRenderWindow> vtkRenderWindow;	// VTK Render window context

};