/* Constructors */

#include "Cube.h"
#include <iostream>
using uiuc::Cube;


void foo(Cube cube) {
  // do nothing. 
  //if cube is send to foo, cube will be copied into the function foo's stackframe
}

// func to check copy cons. Returns Cube
Cube foo2() {
  Cube c;      // default const will be invoked here
  return c;   //when returning c will be copied again in the main function
}

int main() {
  Cube c; //constructor initilizes here // if only const with arg defined, compiler will error out.
  std::cout << "Volume: " << c.getVolume() << std::endl;
  std::cout << "Surface Area: " << c.getSurfaceArea() << std::endl;

  Cube c2(2); //constructor with argument initilizes here
  std::cout << "Volume: " << c2.getVolume() << std::endl;
  std::cout << "Surface Area: " << c2.getSurfaceArea() << std::endl;

  // //copy contructor is a class constructor, only one argument which is the const reference of the same type as class
  // // if no copy cons provided, a default copy const will be provided which will copy all variables

  foo(c); // default const, and then 1 copy const
  
  std::cout << "Ex c3: " << std::endl;
  Cube c3 = foo2(); // 1 default const, followed by 2 copy const as one 1 copy cons will be called here.
  // in the above eg copy const is not being called due to a compiler optimization. NVRO
  // adding this flag to make file, cancels that optimization - CXXFLAGS += -fno-elide-constructors
  std::cout << "Volume of c3: " << c3.getVolume() << std::endl;
  std::cout << "Surface Area of c3: " << c3.getSurfaceArea() << std::endl;

  // copy constructor will be called once
  Cube c4 = c;

  Cube myCube; //default const

  myCube = c; //copy const wont' be called as copy cons called only when object is const for first time.

  return 0;
}