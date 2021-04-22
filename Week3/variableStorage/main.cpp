/* Constructors */

#include "Cube.h"
#include <iostream>
using uiuc::Cube;

bool sendCube(Cube c) {
  //... some logiv to send a Cube somewhere
  return true;
}

// sending by reference
bool sendCube2(Cube & c) {
  //... some logiv to send a Cube somewhere
  return true;
}

// sending by pointer
bool sendCube3(Cube * c) {
  //... some logiv to send a Cube somewhere
  return true;
}

double cube_on_stack() {
  Cube c(3);
  return c.getVolume();
}

double cube_on_heap() {
  Cube * c1 = new Cube(10);
  Cube * c2 = new Cube;     //this memory is not going to be
  delete c1;
}


int main() {
  /* variables can be stored by value (Cube c), by pointer(Cube *c), and by reference (Cube &c = cube) 
  by reference must alias something when initialized. doesn't take any memory*/

  // create cube --uses 1000 $
  Cube c(10); 

  // use copy const - copies 1000 $
  Cube myCube = c; 

  // Transfer the cube and assignment by memory - no new memory created. myCUbe2 just aliases the old cube
  Cube & myCube2 = c;

  //Transfer via pointer. Now two variables point to same cube, one is the value and other by pointer
  Cube * myCube3 = &c;

  //Pass values to functions
  // 3 ways variables can be passed to functions, pass by value (default) which makes a copy, pass by pointer (modified by *),
  //and pass by reference (modifed by &, acts as an alias)

  std::cout << "Passing to functions now  " <<std::endl;
  //by value, makes a copy
  sendCube(c);

  //sending by reference. no copies 
  sendCube2(c); 

  //sending by pointer
  sendCube3(&c);

  //return can be done by all 3 ways as well. by value, pointer, refe (never return a reference to a stack variable
  //created on the stack of your current function)

    /* destructor -- when instance of class is cleaned up. one is automatic default destructor if no defined. 
  when want to do logging or something when an instance is destroyed, need to have custom class destructor.
  Should never be called directly. Automatically called on runtime when object's memory is being reclaimed.
  If on stack, when function returns, if on heap when delete is used  */
  std::cout << "Destructors  " <<std::endl;

  cube_on_stack();
  cube_on_heap();
  cube_on_stack();
  return 0;
}