#pragma once
#include "HeaderList.h"

#include <vtk-9.3/vtkAutoInit.h>
#include <vtk-9.3/vtkRenderer.h>
#include <vtk-9.3/vtkRenderWindow.h>
#include <vtk-9.3/vtkInteractorStyleTrackballCamera.h>
#include <vtk-9.3/vtkRenderWindowInteractor.h>

VTK_MODULE_INIT(vtkRenderingOpenGL2)
VTK_MODULE_INIT(vtkInteractorStyle)

class CAD
{
public:
	
	void makeBox(double dx, double dy, double dz);

};

