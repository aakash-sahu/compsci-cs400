#include <iostream>

// address of foo will be lower as stack memory goes from high to low
// once the function finishes the stack memory is cleared
// also variables have block scope defined in curly braces {}
void foo() {
    int num = 42;
    std::cout << "Value of num in foo(): "<< num << std::endl;
    std::cout << "Address of num in foo(): "<< &num << std::endl;

}

int main () {

    int num = 7;
    // Check the address of a variable in stack
    std::cout << "Value of Num in main(): "<< num << std::endl;
    std::cout << "Address of Num in main(): "<< &num << std::endl;

    foo();
    std::cout << "Value of Num in main() again: "<< num << std::endl;

    int *p = &num;
    std::cout << "Value of pointer in main(): "<< p << std::endl;
    std::cout << "Address of pointer in main(): "<< &p << std::endl;
    std::cout << "Value stored at pointer add: "<< *p << std::endl;

    *p = 123;
    std::cout << "Value of pointer in main(): "<< p << std::endl;
    std::cout << "Address of pointer in main(): "<< &p << std::endl;
    std::cout << "Value stored at pointer add: "<< *p << std::endl;


    return 0;
}