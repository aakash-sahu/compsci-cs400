/* Memory and storage */

#pragma once

namespace uiuc {
  class Cube {
    public:
      Cube(double length); 
      //copy constructor
      Cube(const Cube & obj);

      //copy assignment operator
      Cube & operator=(const Cube & obj);

      // added const here. Why?
      double getVolume() const;
      double getSurfaceArea() const;
      void setLength(double length);

    private:
      double length_;
  };
}
