//
//  Circle.hpp
//  Lab17
//
//  Created by Preferred Customer on 4/15/19.
//  Copyright © 2019 humza choudry. All rights reserved.
//

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class Circle{
protected:
    string name;
    double radius;
public:
    Circle(string _name, double _radius);
   virtual ~Circle();
   virtual double surfaceArea();
    friend ostream &operator<<(ostream &os,  Circle &circle);
   
    
    
};




#endif /* Circle_hpp */
