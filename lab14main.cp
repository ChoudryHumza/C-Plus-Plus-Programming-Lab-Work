//
//  main.cpp
//  LAB 14
//
//  Created by Preferred Customer on 4/1/19.
//  Copyright © 2019 humza choudry. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

// Humza Choudry Lab 14

int recursiveGCD( int x, int y){
    
    // remainder of x/y: %
    if( x % y == 0)
        return y;
    else
        return recursiveGCD(y, x % y);
}

int iterativeGCD( int x, int y){
    
 // iterative is the opposite of recursive. Doen without recursion.
    while (x != y) {
        
        if(x > y){
            x -= y;
            
        }
        else{
            y -= x;
        }
        
    }
    return x;
}

int iterativeSum( int x, int y){
    int total = 0;
    
    if(x > y){
        for( int i = x; i >= y; i--){
            total += i;
        }
    }
    else if(x < y){
        for( int i = y; i >= x; i--)
            total+=i;
    }
    else
        total = 2 * x;
    return total;
}

int recursiveSum( int x, int y){
    
    int total = 0;
    
    if(x==y){
        total = 2 * x;
        return total;
    }
    else if(x > y){
        // funtion recalled here
        total += ( x + (recursiveSum(x-1, y)));
        return total;
    }
    else {
        total += x + (recursiveSum(x+1, y));
        return total;
    }
}

int main() {
    
    // GIVEN CODE
    cout << "iterative GCD(420, 96) = " << iterativeGCD(420, 96) << endl;
    cout << "recursive GCD(420, 96) = " << recursiveGCD(420, 96) << endl;
    cout << "iterative GCD(54, 1) = " << iterativeGCD(54, 1) << endl;
    cout << "recursive GCD(54, 1) = " << recursiveGCD(54, 1) << endl;
    cout << "iterative GCD(54, 1) = " << iterativeGCD(42, 56) << endl;
    cout << "recursive GCD(54, 1) = " << recursiveGCD(42, 56) << endl;
    cout << "iterative Sum(0, 3) = " << iterativeSum(0, 3) << endl;
    cout << "recursive Sum(0, 3) = " << recursiveSum(0, 3) << endl;
    cout << "iterative Sum(9, 1000) = " << iterativeSum(9, 1000) << endl;
    cout << "recursive Sum(9, 1000) = " << recursiveSum(9, 1000) << endl;
    
    return 0;
}
