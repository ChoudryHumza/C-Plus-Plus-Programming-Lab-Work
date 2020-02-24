//
//  Cylinder.cpp
//  Lab17
//
//  Created by Preferred Customer on 4/15/19.
//  Copyright © 2019 humza choudry. All rights reserved.
//

#include "Cylinder.hpp"


Cylinder::~Cylinder() { 
    cout <<  "𝐷𝑒𝑎𝑙𝑙𝑜𝑐𝑎𝑡𝑖𝑛𝑔 𝐶𝑦𝑙𝑖𝑛𝑑𝑒𝑟′𝑠 𝑑𝑦𝑛𝑎𝑚𝑖𝑐 𝑚𝑒𝑚𝑜𝑟𝑦" << endl;
}
double Cylinder::surfaceArea(){
    return 2 * 3.14159 * radius * height + 2 * Circle::surfaceArea();
}
Cylinder:: Cylinder(string _name, double _radius , double _height): Circle(_name, _radius){
    height = _height;
}
