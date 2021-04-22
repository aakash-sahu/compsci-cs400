/* Constructors */

#include "Cube.h"
#include <iostream>

namespace uiuc {

  // custom default constructor
  Cube::Cube() {
    length_ = 1;
    std::cout << "Default constructor invoked!" << std::endl;
  }

  // custom constructor
  Cube::Cube(double length) {
    length_ = length;
    std::cout << "Custom constructor invoked!" << std::endl;
  }

  // copy constructor
  //copy contructor is a class constructor, only one argument which is the const reference of the same type as class
  // copy cons are invoked automatically when passing an object as parameter (by value), returning an object from a function(by value) or
  // initializing a new object
  Cube::Cube(const Cube & obj) {
    length_ = obj.length_;
    std::cout << "Copy constructor invoked!" << std::endl;
  }

  //copy assignment operator
  Cube & Cube::operator=(const Cube & obj) {
    length_ = obj.length_;
    std::cout << "Assignment constructor invoked!" << std::endl;
    return *this;     // return dereferenced valued of class obj
  }

  double Cube::getVolume() {
    return length_ * length_ * length_;
  }

  double Cube::getSurfaceArea() {
    return 6 * length_ * length_;
  }

  void Cube::setLength(double length) {
    length_ = length;
  }
}
