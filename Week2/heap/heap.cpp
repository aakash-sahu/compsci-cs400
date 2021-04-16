#include <iostream>
#include "Cube.h"
using uiuc::Cube;

int main() {
    
    // heap has to assigned by new operator
    int *numPtr = new int;

    std::cout << "*numptr: " << *numPtr << std::endl; // when dereferenced pointer is printed, it can return any random number
    std::cout << "numptr: " << numPtr << std::endl; //content of numPtr == address of heap memory -> a low number than stack memory as heap memory starts from low
    std::cout << "&numptr: " << &numPtr << std::endl; // high memory as numPtr variable stored in stack memory

    *numPtr = 42;

    std::cout << "*numptr: " << *numPtr << std::endl; // value assigned
    std::cout << "numptr: " << numPtr << std::endl; //remains same
    std::cout << "&numptr: " << &numPtr << std::endl;  //remains same
    
    delete numPtr; //delete the heap memory and give back to system
    std::cout << "*numptr after deleting: " << *numPtr << std::endl; // now pointer points to a memory that doesn't contain any data for us
    // so assign the ptr to nullptr after deleting as it's defined to be going nowhere (raises segmentation error when accesses and can't be deleted.
    // ) hence avoids the problem of dangling pointer.
    numPtr = nullptr;
   //std::cout << "*numptr after deleting: " << *numPtr << std::endl; // this prints a Segmenation fault. The program still compiles and runs till this point. 

    //ex 2
    Cube *c = new Cube;
    (*c).setLength(4);
    std::cout << "c: " << c << std::endl; //heap address for cube
    std::cout << "&c: " << &c << std::endl; //stack address of c
    //std::cout << "*c: " << *c << std::endl; //won't compile as not char
    std::cout << "c volume: " << (*c).getVolume() << std::endl; //call function for pointer
    std::cout << "c volume: " << c->getVolume() << std::endl; //another way of calling class functions.

    //ex3
    Cube *c1 = new Cube;
    Cube *c2 = c1; // points to the same data as c1

    c2->setLength(10);

    delete c2; // delete the data at memory at which c1 is there so error.
    // delete c1; // run gives error that double free memory

    // puzzle with reference variable
    int *x = new int;
    int &y = *x;    //y is a reference variable. It alias another memory and name a piece of memory. => this heap memory address is called y.
    y =4;
    std::cout << "Reference variable: "<< std::endl;
    std::cout << &x << std::endl;   //stack address = large
    std::cout << x << std::endl;    //ptr value at heap address = low value
    std::cout << *x << std::endl;   // value = 4

    std::cout << &y << std::endl;   // same as heap address
    std::cout << y << std::endl;    // value =4
    // std::cout << *y << std::endl;    //gives error as non-pointer => error = indirection requires pointer operand
    delete x;
    x = nullptr;

    //puzzle 3
    int *p, *q;
    p = new int;
    q = p;
    *q = 8;
     std::cout << "Puzzle 3: "<< std::endl;
    std::cout << *p << std::endl;   //should print 8

    q = new int;    //q now points to a new memory
    *q = 9;
    std::cout << *p << std::endl;     //should print 8
    std::cout << *q << std::endl;     //should print 9

    //puzzle 4 -- use of array and for loop
    std::cout << "Array and for loop: "<< std::endl;
    int *z;
    int size =3;
    z = new int[size];  //x == new integer array of size 3 => allocating a sequence of memory of size 3 total in heap

    for (int i =0; i < size; i++) {
        z[i] = i +3;
        std::cout << z[i] << std::endl;
    }
    std::cout << *z << std::endl;   //only prints the first value as ptr to first memory location
    
    delete[] z;     //delete array of memory.
    std::cout << *z << std::endl;

    //quiz question
    int *v = new int;
    *v =0;
    int &b = *v;    
     std::cout << "quiz: " << *v << b << std::endl;
    b++;
    std::cout << "quiz: " << *v << b << std::endl;

    return 0;
}