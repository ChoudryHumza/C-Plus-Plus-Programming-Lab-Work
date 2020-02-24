//
//  main.cpp
//  Lab8
//
//  Created by Preferred Customer on 2/27/19.
//  Copyright © 2019 humza choudry. All rights reserved.
//



#include <iostream>
#include <string>

using namespace std;

double* expandArr(double arr[], int &size)
{
    int oldSize = size;
    int newSize = oldSize * 1.5;
    double *newArray = new double [newSize];
    for(int i =0; i < size; i++)
    {
        newArray[i] = arr[i];
    }
    delete [] arr;

    return newArray;
}
double getMax(double arr[], int size)
{
    int max = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max )
        {
            max = arr[i];
        }
        
        
    }
    return max;
    //
}
double getAvg( double arr[], int size)
{
    double sum = 0.0;
    double average;
    for(int i =0; i < size; i++)
    {
        sum += arr[i];
    }
    average = sum/size;
    return average;
}






int main()
{
    
    
    
    int size = 5;
    double *arr = new  double [size];
    cout << "Enter a number and use a negative number to stop and get the max and average.\n";
    
    double userInputValue;
    int count = 0;
    int count2 = 5;
    bool exit = false;
    while (true) {
        count++;
        cin >> userInputValue;
        arr[count-1] = userInputValue;
         if (userInputValue < 0) {
            getMax(arr, count);
            getAvg(arr, count);
            break;
        }
        if (count == 5) {
            double *n = new double;
            n = expandArr(arr, count);
            
            while (true) {
                count2++;
                cin >> userInputValue;
                n[count2-1] = userInputValue;
                
                if (userInputValue < 0) {
                    double m = getMax(n, count2);
                    double a =getAvg(n, count2);
                    cout << "The Max is " << m << endl << "The Average is " << a << endl;
                    exit = true;
                    break;
                }
                
        }
            if (exit == true){
                break;
            }
    }
}
    
    
    
    return 0;
}

