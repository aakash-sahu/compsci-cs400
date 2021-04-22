/* Constructors */

#include "Cube.h"
#include <iostream>

int main() {
  uiuc::Cube c; //constructor initilizes here // if only const with arg defined, compiler will error out.
  std::cout << "Volume: " << c.getVolume() << std::endl;
  std::cout << "Surface Area: " << c.getSurfaceArea() << std::endl;

  uiuc::Cube c2(2); //constructor with argument initilizes here
  std::cout << "Volume: " << c2.getVolume() << std::endl;
  std::cout << "Surface Area: " << c2.getSurfaceArea() << std::endl;

  //copy contructor is a class constructor, only one argument which is the const reference of the same type as class
  // if no copy cons provided, a default copy const will be provided which will copy all variables

  return 0;
}