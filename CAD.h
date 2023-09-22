/* OLD CODE*/
//#pragma once
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

//class CAD
//{
//public:
//	
//	TopoDS_Shape makeBox(double dx, double dy, double dz);
//
//};
// *************************************************************************



/* NEW CODE*/

#pragma once

#include <BRepPrimAPI_MakeBox.hxx>
#include <Standard_Version.hxx>

class CAD
{
public:
    CAD();
    ~CAD();

    TopoDS_Shape makeBox(double dx, double dy, double dz);
};
