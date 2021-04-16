#include <iostream>

int main() {

    int *numPtr = new int;

    std::cout << "*numptr: " << *numPtr << std::endl; // when dereferenced pointer is printed, it can return any random number
    std::cout << "numptr: " << numPtr << std::endl; //content of numPtr == address of heap memory -> a low number than stack memory as heap memory starts from low
    std::cout << "&numptr: " << &numPtr << std::endl; // high memory as numPtr variable stored in stack memory

    *numPtr = 42;

    std::cout << "*numptr: " << *numPtr << std::endl; // value assigned
    std::cout << "numptr: " << numPtr << std::endl; //remains same
    std::cout << "&numptr: " << &numPtr << std::endl;  //remains same
}