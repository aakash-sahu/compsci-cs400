/* Memory and storage */

#pragma once

namespace uiuc {
  class Cube {
    public:
      Cube();
      Cube(double length); 
      //copy constructor
      Cube(const Cube & obj);

      //copy assignment operator
      Cube & operator=(const Cube & obj);

        //Custom destructor
      //member function, name of class, preceded by ~, and zero arguments and no return type
      ~Cube();

      // added const here. Why?
      double getVolume() const;
      double getSurfaceArea() const;
      void setLength(double length);

    private:
      double length_;
  };
}
