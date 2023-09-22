#pragma once

#include <BRepPrimAPI_MakeBox.hxx>
#include <Standard_Version.hxx>

class CAD
{
public:
    CAD();
    ~CAD();

    TopoDS_Shape makeBox(double dx, double dy, double dz);

    TopoDS_Shape box = makeBox(10.0, 10.0, 10.0);  // example size
};
