//
//  main.cpp
//  Lab 9
//
//  Created by Preferred Customer on 3/6/19.
//  Copyright © 2019 humza choudry. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class innerCircle;
class outterCircle;
class concentricCircle{
public:
    double getInnerRadius(innerCircle &_innerCircle);
    double getOutterRadius(outterCircle &_outterCircle);
};



class outterCircle {
private:
    double diameter;
    string name;
    friend void setOutterCircleInfo(outterCircle &_outterCircle, double _diameter, string _name);
    friend double concentricCircle::getOutterRadius(outterCircle &_outterCircle); // this function is a friend of this class. only the function.

};
double concentricCircle::getOutterRadius(outterCircle &_outterCircle){
    return (_outterCircle.diameter /2);
}
void setOutterCircleInfo(outterCircle &_outterCircle,double _diameter, string _name){
    _outterCircle.diameter = _diameter;
    _outterCircle.name = _name;
}




class innerCircle{
private:
    double diameter;
    string name;
    friend void setInnerCircleInfo(innerCircle &_innerCircle, double _diameter, string _name);
    friend double concentricCircle::getInnerRadius(innerCircle &_innerCircle); // this function is a friend of this class. only the function.
};
void setInnerCircleInfo(innerCircle &_innerCircle, double _diameter, string _name){
    _innerCircle.diameter = _diameter;
   _innerCircle.name = _name;
}
double concentricCircle::getInnerRadius(innerCircle &_innercircle){
    return (_innercircle.diameter / 2);
}


int main() {
    
    
    innerCircle c1;
    outterCircle c2;
    concentricCircle c3;
    setInnerCircleInfo(c1, 100, "The inner circle");
    setOutterCircleInfo(c2, 150, "The outer circle");
    cout << "Inner circle's radius = " << c3.getInnerRadius(c1) << endl;
    cout << "Outer circle's radius = " << c3.getOutterRadius(c2) << endl;
    
    
}
