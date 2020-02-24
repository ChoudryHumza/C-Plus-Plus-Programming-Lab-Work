//
//  Cylinder.hpp
//  Lab17
//
//  Created by Preferred Customer on 4/15/19.
//  Copyright © 2019 humza choudry. All rights reserved.
//

#ifndef Cylinder_hpp
#define Cylinder_hpp

#include "Circle.hpp"
#include <stdio.h>
#include <string>
using namespace std;

class Cylinder: public Circle{
private:
    double height;
public:
    Cylinder(string _name, double _radius , double _height);
  virtual double surfaceArea();
    ~Cylinder();
    
};

#endif /* Cylinder_hpp */
