/* Constructors */

#pragma once

namespace uiuc {
  class Cube {
    public:
      Cube(); //custom default constructor - same name as clas, zero parameters and no return type
      Cube(double length); //one param constructor, constructor doesn't have to be unique. can be many. as long as one is defined
      // compiler doesn't use default constructor at all

      //copy constructor
      Cube(const Cube & obj);

      //copy assignment operator
      // default provided will copy the contents for all member variables
      //4 properties - public member, fun name= operator=, return value of reference of class' type, and exactly one arg - const reference of class' type
      Cube & operator=(const Cube & obj);

      double getVolume();
      double getSurfaceArea();
      void setLength(double length);

    private:
      double length_;
  };
}
