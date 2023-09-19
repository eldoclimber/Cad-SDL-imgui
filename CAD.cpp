#include "CAD.h"

void CAD::makeBox(double dx, double dy, double dz)
{
	BRepPrimAPI_MakeBox mkBox(dx, dy, dz);
	const TopoDS_Shape& shape = mkBox.Shape();

	//	VTK requires use of smart pointers for heap allocation. Commented code below is a standard formatting.
	/*
	vtkSmartPointer<vtkRenderWindow>
		renwin = vtkSmartPointer<vtkRenderWindow>::New();*/

	// VTK Smart pointer short form. Lives on stack, auto destroys when out of scope
	vtkNew<vtkRenderWindow> renwin;

	// VTK Renderer
	vtkNew<vtkRenderer> ren;
	renwin->AddRenderer(ren);

	vtkNew<vtkInteractorStyleTrackballCamera> istyle;
	vtkNew<vtkRenderWindowInteractor> iren;

	iren->SetRenderWindow(renwin);
	iren->SetInteractorStyle(istyle);

	renwin->Render();
	iren->Start();

}
