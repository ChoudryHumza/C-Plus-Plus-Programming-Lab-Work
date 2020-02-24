//
//  main.cpp
//  LAB 16
//
//  Created by Preferred Customer on 4/11/19.
//  Copyright © 2019 humza choudry. All rights reserved.
//

//Q1
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// LAB 16


bool palindromic(string x, int index)
{
    if(index < x.size() / 2){
        if (x[index] == x[x.size()-1-index] )
            return palindromic(x, index+1);
        else
            return false;
    }
    return true;
}

bool areArraysEqual(int arrOne[], int arrTwo[], int arraySize1, int arraySize2,int index)
{
    if (arraySize1==arraySize2){
        if(index < arraySize1){
            if(arrOne[index] == arrTwo[index])
                return areArraysEqual(arrOne, arrTwo, arraySize1, arraySize2, index+1);
            else
                return false;
        }
        else
            return true;
    }
    else
        return false;
}

int recursionAddition(int x, int y)
{
    if (y > 0 )
    {
        return x + recursionAddition(x, y - 1);
    }
    else
    {
        return 0;
    }
    
}
int posOrNeg(int x, int y)
{
    int result = recursionAddition(x, abs(y));
    
    if (y <0)
    {
        return -result;
    }
    else
    {
        return result;
    }
}



int main ()
{
    cout << posOrNeg(8, -10) << endl;

    bool value = palindromic("FDEGFDSZFT", 0); //Checking for false.
    bool value2 = palindromic("CDC", 0);  //Checking for true.
    if (value == true) {
        cout << "Value 1 True" << endl;
    }
    else
        cout << "Value 1: FDEGFDSZFT is False" << endl;
    
    if (value2 == true) {
        cout << "Value 2: CDC is True" << endl;
    }
    else
        cout << "Value 2 is False" << endl;
    
    int arrayOne[] = {9,8,7,6,5,4};
    int arrayTwo[] = {9,8,7,6,5,4};
    int array3[] = {3,4,2,1,6};
    
    bool v1 = areArraysEqual(arrayOne, arrayTwo, 6, 6, 0);
    bool v2 = areArraysEqual(arrayTwo, array3, 6, 5, 0);
    
    if (v1 == true) {
        cout << "Arrays are the same" << endl;
    }
    else
        cout << "Array is not the same" << endl;
    
    if (v2 == true) {
        cout << "arrays are the same" << endl;
    }
    else
        cout << "arrays are not the same" << endl;
    
    return 0;




}
