#include "CAD.h"

void CAD::makeBox(double dx, double dy, double dz)
{
	BRepPrimAPI_MakeBox mkBox(dx, dy, dz);
	const TopoDS_Shape& shape = mkBox.Shape();

	vtkRenderWindow* renwin = new vtkRenderWindow;

}
