//
//  main.cpp
//  Lab19
//
//  Created by Preferred Customer on 4/29/19.
//  Copyright © 2019 humza choudry. All rights reserved.
//

#include <iostream>
#include "NewString.hpp"
int main() {

    try {
        
        NewString test1("Game Of Thrones");
        cout << "string: " << test1 << endl << "index 0: " << test1[0] << endl << "index 14: " << test1[14] << endl <<  "index 50: " <<  test1[50] << endl;
        
    }
    catch (const char *exception) {
        cout << exception << endl;
    }

    
    try {
        
        NewString test2("9845");
        cout << endl <<  "string input: " << test2 << endl << "string to # " <<  (int)test2 << endl;
        NewString test3("898");
        cout << "string input " << test3 << endl <<  "string to number " << (int)test3 << endl;
        NewString test4("letter 123");
        cout << "string input: " << test4 << endl <<  "string to number " << (int)test4 << endl;
        
    }
    catch (int exception) {
        cout << "Exception: " << exception <<  endl;
    }
    
    
    
    
    
    
    
    
    
    
    return 0;
    
}
