#include <iostream>
#include "Cube.h"

// to use the count and endl by themselves
// using std::cout;
// using std::endl;

int main() { 
    int i = 4;
    i = i+2;

    char x = 'a';

    std::cout << "char is: " << x << " and number is i: " << i << std::endl;

    //define namespace so Cube from correct namespace is pulled
    //declare class variable
    uiuc::Cube c;
     c.setLength(5);
     double volume = c.getVolume();
     std::cout <<"Volume= " << volume <<std::endl;

     std::cout << "Surface area = " << c.getSurfaceArea() << std::endl;

    return 0;
}