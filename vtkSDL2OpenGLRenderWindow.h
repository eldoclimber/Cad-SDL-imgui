#pragma once
// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
 // SPDX-License-Identifier: BSD-3-Clause
#ifndef vtkSDL2OpenGLRenderWindow_h
#define vtkSDL2OpenGLRenderWindow_h

#include "vtkOpenGLRenderWindow.h"
#include "vtkRenderingOpenGL2Module.h" // For export macro
// Ignore reserved-identifier warnings from
// 1. SDL2/SDL_stdinc.h: warning: identifier '_SDL_size_mul_overflow_builtin'
// 2. SDL2/SDL_stdinc.h: warning: identifier '_SDL_size_add_overflow_builtin'
// 3. SDL2/SDL_audio.h: warning: identifier '_SDL_AudioStream'
// 4. SDL2/SDL_joystick.h: warning: identifier '_SDL_Joystick'
// 5. SDL2/SDL_sensor.h: warning: identifier '_SDL_Sensor'
// 6. SDL2/SDL_gamecontroller.h: warning: identifier '_SDL_GameController'
// 7. SDL2/SDL_haptic.h: warning: identifier '_SDL_Haptic'
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-identifier"
#endif
#include "SDL.h" // for ivar
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#include <stack> // for ivar

VTK_ABI_NAMESPACE_BEGIN
class VTKRENDERINGOPENGL2_EXPORT vtkSDL2OpenGLRenderWindow : public vtkOpenGLRenderWindow
{
public:
	static vtkSDL2OpenGLRenderWindow* New();
	vtkTypeMacro(vtkSDL2OpenGLRenderWindow, vtkOpenGLRenderWindow);
	void PrintSelf(ostream& os, vtkIndent indent) override;

	void Initialize() override;

	void Finalize() override;

	void SetFullScreen(vtkTypeBool) override;

	void SetShowWindow(bool val) override;


	void SetSize(int, int) override;
	void SetSize(int a[2]) override { vtkOpenGLRenderWindow::SetSize(a); }

	int* GetSize() VTK_SIZEHINT(2) override;


	void SetPosition(int, int) override;
	void SetPosition(int a[2]) override { vtkOpenGLRenderWindow::SetPosition(a); }

	int* GetScreenSize() VTK_SIZEHINT(2) override;

	int* GetPosition() VTK_SIZEHINT(2) override;

	void SetWindowName(const char*) override;

	void* GetGenericDisplayId() override { return (void*)this->ContextId; }
	void* GetGenericWindowId() override { return (void*)this->WindowId; }
	void* GetGenericDrawable() override { return (void*)this->WindowId; }

	void MakeCurrent() override;

	void ReleaseCurrent() override;

	bool IsCurrent() override;

	void Clean();

	void Frame() override;


	void PushContext() override;
	void PopContext() override;

	bool SetSwapControl(int i) override;

	int GetColorBufferSizes(int* rgba) override;


	void HideCursor() override;
	void ShowCursor() override;

protected:
	vtkSDL2OpenGLRenderWindow();
	~vtkSDL2OpenGLRenderWindow() override;

	SDL_Window* WindowId;
	SDL_GLContext ContextId;
	std::stack<SDL_GLContext> ContextStack;
	std::stack<SDL_Window*> WindowStack;
	static const std::string DEFAULT_BASE_WINDOW_NAME;

	void CleanUpRenderers();
	void CreateAWindow() override;
	void DestroyWindow() override;

private:
	vtkSDL2OpenGLRenderWindow(const vtkSDL2OpenGLRenderWindow&) = delete;
	void operator=(const vtkSDL2OpenGLRenderWindow&) = delete;
};

VTK_ABI_NAMESPACE_END
#endif