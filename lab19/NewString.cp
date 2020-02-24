//
//  NewString.cpp
//  Lab19
//
//  Created by Preferred Customer on 4/29/19.
//  Copyright © 2019 humza choudry. All rights reserved.
//

#include "NewString.hpp"


NewString::NewString(string st): string(st) {
    // do nothing here
}
char NewString:: operator[](int i){
    // length() is finding the string size passed in the non-default constructor. length is a function in parent class.
    if (i < 0 || i >= length()) {
        throw "index out-of-bounds"; }
    //returns the char of string at index 'i'. string that was passed in non-defualt constructor
    return string::operator[](i);
    
}
NewString::operator int() const {
    
    for (int i = 0; i < length(); i++) {
        char c = string::operator[](i);
        if (c<'0' || c>'9') {
            throw 999;
        }
    }
    
    int intVal = stoi(string::c_str());
    
    return intVal;
    
}

