//
//  NewString.hpp
//  Lab19
//
//  Created by Preferred Customer on 4/29/19.
//  Copyright © 2019 humza choudry. All rights reserved.
//

#ifndef NewString_hpp
#define NewString_hpp

#include <stdio.h>
#include <string>
//#include <iostream>
using namespace std;

class NewString: public string {
public:
    NewString(string st);
    char operator[](int);
    operator int() const;
    
    
    
    
};



#endif /* NewString_hpp */
