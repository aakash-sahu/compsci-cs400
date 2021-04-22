/* Constructors */

#pragma once

namespace uiuc {
  class Cube {
    public:
      Cube(); //custom default constructor - same name as clas, zero parameters and no return type
      Cube(double length); //one param constructor, constructor doesn't have to be unique. can be many. as long as one is defined
      // compiler doesn't use default constructor at all
      double getVolume();
      double getSurfaceArea();
      void setLength(double length);

    private:
      double length_;
  };
}
