//
//  main.cpp
//  Lab17
//
//  Created by Preferred Customer on 4/15/19.
//  Copyright © 2019 humza choudry. All rights reserved.
//

#include "Cylinder.hpp"
#include "Circle.hpp"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;


int main() {
    Circle *circleArr[] = { new Circle("Ring", 10.99),
        new Circle("Track", 55.123),
        new Cylinder("Disk", 10.9, 2.5),
        new Cylinder("Tank", 5.5, 12.98) };
    for (int i = 0; i < 4; ++i)
        cout << *circleArr[i];
    for (int i = 0; i < 4; ++i)
        delete circleArr[i]; 
}
