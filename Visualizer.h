#pragma once
#include "HeaderList.h"
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
    void initVisualizer();
private:
    vtkSmartPointer<vtkRenderer> renderer;
    vtkSmartPointer<vtkRenderWindow> renderWindow;
    vtkSmartPointer<vtkRenderWindowInteractor> renderWindowInteractor;
    vtkSmartPointer<vtkInteractorStyleTrackballCamera> istyle;
    vtkSmartPointer<vtkActor> actor;
};
