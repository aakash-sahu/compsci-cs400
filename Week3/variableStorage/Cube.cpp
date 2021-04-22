/* Memory -- memory is the $*/

#include "Cube.h"
#include <iostream>

namespace uiuc {

  Cube::Cube(double length) {
    length_ = length;
    std::cout << "Custom constructor invoked!" << std::endl;
    std::cout << "Created $" << getVolume() << std::endl;
  }

  // copy constructor
  Cube::Cube(const Cube & obj) {
    length_ = obj.length_;
    std::cout << "Copy constructor invoked!" << std::endl;
    std::cout << "Created $" << getVolume() << " via copy" << std::endl;
  }

  //copy assignment operator
  Cube & Cube::operator=(const Cube & obj) {
    std::cout << "Transformed $" << getVolume() << "-> $" << obj.getVolume() << std::endl;
    length_ = obj.length_;
    std::cout << "Assignment constructor invoked!" << std::endl;
    return *this;     // return dereferenced valued of class obj
  }

  // adding const here as done by instructor and in the next function makes the compiler error go away. Why?
  double Cube::getVolume() const {
    return length_ * length_ * length_;
  }

  double Cube::getSurfaceArea() const {
    return 6 * length_ * length_;
  }

  void Cube::setLength(double length) {
    length_ = length;
  }
}
