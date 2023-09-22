#pragma once

//#include "HeaderList.h"
//
//
//#include <vtkAutoInit.h>
//#include <vtkRenderer.h>
//#include <vtkRenderWindow.h>
//#include <vtkInteractorStyleTrackballCamera.h>
//#include <vtkRenderWindowInteractor.h>
//#include "vtkRenderingOpenGLConfigure.h"
//
//
//#define vtkRenderingContext2D_AUTOINIT 1(vtkRenderingContextOpenGL2)
//#define vtkRenderingCore_AUTOINIT 3(vtkInteractionStyle,vtkRenderingFreeType,vtkRenderingOpenGL2)
//#define vtkRenderingVolume_AUTOINIT 1(vtkRenderingVolumeOpenGL2)
//
//
//class Visualizer
//{
//	void makeBox(double dx, double dy, double dz);
//};
//


#pragma once

#include <vtkSmartPointer.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <vtkInteractorStyleTrackballCamera.h>
#include <vtkRenderWindowInteractor.h>
#include <TopoDS_Shape.hxx>

class Visualizer
{
public:
    Visualizer();
    ~Visualizer();

    void visualizeShape(const TopoDS_Shape& shape);
private:
    vtkSmartPointer<vtkRenderer> renderer;
    vtkSmartPointer<vtkRenderWindow> renderWindow;
    vtkSmartPointer<vtkRenderWindowInteractor> renderWindowInteractor;
};
