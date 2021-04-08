#include <iostream>
#include "Cube.h"

int main() { 
    int i = 4;
    i = i+2;

    char x = 'a';

    std::cout << "char is: " << x << " and number is i: " << i << std::endl;

    //declare class variable
    Cube c;
     c.setLength(5);
     double volume = c.getVolume();
     std::cout <<"Volume= " << volume <<std::endl;

    return 0;
}