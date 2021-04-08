//Header file contains the definition of the class
// All header (.h) files start with "#pragma once" so they are compiled only once
#pragma once

// A class is defined with the `class` keyword, the name
// of the class, curly braces, and a required semicolon
// at the end:

class Cube {
    public: //public members accessible to outside code
        double getVolume();
        double getSurfaceArea();
        void setLength(double length);

    private: //private members only accessible from within the class
    double length_; //underscore at end as convention to denote private member
};