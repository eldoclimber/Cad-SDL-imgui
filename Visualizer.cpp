//#include "Visualizer.h"
//
//
//void Visualizer::makeBox(double dx, double dy, double dz)
//{
//	BRepPrimAPI_MakeBox mkBox(dx, dy, dz);
//	const TopoDS_Shape& shape = mkBox.Shape();
//
//	//	VTK requires use of smart pointers for heap allocation. Commented code below is a standard formatting.
//	/*
//	vtkSmartPointer<vtkRenderWindow>
//		renwin = vtkSmartPointer<vtkRenderWindow>::New();*/
//
//		// VTK Smart pointer short form. Lives on stack, auto destroys when out of scope
//	vtkNew<vtkRenderWindow> renwin;
//
//	// VTK Renderer
//	vtkNew<vtkRenderer> ren;
//	renwin->AddRenderer(ren);
//
//	vtkNew<vtkInteractorStyleTrackballCamera> istyle;
//	vtkNew<vtkRenderWindowInteractor> iren;
//
//	iren->SetRenderWindow(renwin);
//	iren->SetInteractorStyle(istyle);
//
//	renwin->Render();
//	iren->Start();
//
//}


#include "Visualizer.h"

Visualizer::Visualizer() {
    // Create default renderer and render window
    renderer = vtkSmartPointer<vtkRenderer>::New();
    renderWindow = vtkSmartPointer<vtkRenderWindow>::New();
    renderWindowInteractor = vtkSmartPointer<vtkRenderWindowInteractor>::New();

    renderWindow->AddRenderer(renderer);
    renderWindowInteractor->SetRenderWindow(renderWindow);
}

Visualizer::~Visualizer() {
    // Destructor - any necessary cleanup
}

void Visualizer::visualizeShape(const TopoDS_Shape& shape) {
    // TODO: Convert the OpenCascade shape to VTK data structures and add to the renderer

    // For now, just a demonstration:
    renderWindow->Render();
    renderWindowInteractor->Start();
}
