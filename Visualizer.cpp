#include "Visualizer.h"

#define vtkRenderingContext2D_AUTOINIT 1(vtkRenderingContextOpenGL2)
#define vtkRenderingCore_AUTOINIT 3(vtkInteractionStyle,vtkRenderingFreeType,vtkRenderingOpenGL2)
#define vtkRenderingVolume_AUTOINIT 1(vtkRenderingVolumeOpenGL2)


extern Core core;
extern CAD cad;														// An instance of the CAD class to manage CAD operations.		
extern Interface interface;											// An instance of the Interface class to manage GUI.


Visualizer::Visualizer() {
    // Create default renderer and render window
    renderer = vtkSmartPointer<vtkRenderer>::New();
    //renderWindow = vtkSmartPointer<vtkRenderWindow>::New();
    renderWindowInteractor = vtkSmartPointer<vtkRenderWindowInteractor>::New();

    renderWindow->AddRenderer(renderer);
    renderWindowInteractor->SetRenderWindow(renderWindow);

}

Visualizer::~Visualizer() {
    renderer->Delete();
    renderWindow->Delete();
    renderWindowInteractor->Delete();
}

void Visualizer::visualizeShape(const TopoDS_Shape& shape) {
    // TODO: Convert the OpenCascade shape to VTK data structures and add to the renderer

    // For now, just a demonstration:
    renderWindow->Render();   
    renderWindowInteractor->Start();
    renderer->AddActor(actor);
    renderer->SetRenderWindow(renderWindow);

    //std::cout << "Render Started" << std::endl;
    //std::cout << "Box visualized" << std::endl;
}

void Visualizer::setRenderWindow(vtkSmartPointer<vtkGenericOpenGLRenderWindow> rw) {
    renderWindow = rw;
    renderer->SetRenderWindow(renderWindow);
    renderWindowInteractor->SetRenderWindow(renderWindow);
}
