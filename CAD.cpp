#include "CAD.h"

CAD::CAD() {
    // Constructor - any necessary initialization
}

CAD::~CAD() {
    // Destructor - any necessary cleanup
}

TopoDS_Shape CAD::makeBox(double dx, double dy, double dz) {
    BRepPrimAPI_MakeBox mkBox(dx, dy, dz);
    std::cout << "Box created in CAD object with " << dx << " " << dy << " " << dz << " " << std::endl;
    return mkBox.Shape();
}
