//
//  Circle.cpp
//  Lab17
//
//  Created by Preferred Customer on 4/15/19.
//  Copyright © 2019 humza choudry. All rights reserved.
//

#include "Circle.hpp"
#include <cmath>


Circle::~Circle(){
    cout << "𝐷𝑒𝑎𝑙𝑙𝑜𝑐𝑎𝑡𝑖𝑛𝑔 𝐶𝑖𝑟𝑐𝑙𝑒′𝑠 𝑑𝑦𝑛𝑎𝑚𝑖𝑐 𝑚𝑒𝑚𝑜𝑟𝑦" << endl;
}

Circle::Circle(string _name, double _radius){
    name = _name; radius = _radius;
}

double Circle::surfaceArea() {
    return  2 * 3.14159 * pow(radius, 2);
}
ostream &operator<<(ostream &os, Circle &circle){
    os << circle.name << ": ";
    os << circle.surfaceArea() << endl;
    return os;
}




