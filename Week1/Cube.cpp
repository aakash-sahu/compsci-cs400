#include "Cube.h"

// Define class implementation here
// Enclose both header .h file and cpp file in namespace and namespace name
namespace uiuc {
    double Cube::getVolume() {
        return length_*length_*length_;
    }

    double Cube::getSurfaceArea() {
        return 6*length_*length_;
    }

    void Cube::setLength(double length) {
        length_ = length;
    }
}