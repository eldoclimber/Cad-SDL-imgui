#pragma once
#include "HeaderList.h"

class Interface
{
public:
	void createContext();
	int mainMenu();
	int guiFrame();
	int menuLoop();
	static void imguione();
	void setupPlatform(SDL_Window* window, SDL_GLContext gl_context);

};

