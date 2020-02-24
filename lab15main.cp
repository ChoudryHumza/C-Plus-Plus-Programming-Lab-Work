//
//  main.cpp
//  Lab 15
//
//  Created by Preferred Customer on 4/4/19.
//  Copyright © 2019 humza choudry. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

void iterCopy(int from[], int to[], int size) {
    for (int i = 0; i < size; ++i){
        to[i] = from[i];
        }
}

void printArr(int arr[], int i) {
    if (i >= 0) {
        printArr(arr, i - 1);
        cout << arr[i] << " ";
    }
}

void recCopy(int from[], int to[], int i)
{
    to[i] = from[i];
    if (i==0) {
        return;
    }
    recCopy(from, to, i-1);
    
}

void iterRevPrint(int a[], int size)
{

    for (int i= 1 ; i <= size; i++)
    {
        cout << a[size - i] << " ";
        if (i == size) {
            cout << endl;
        }
    }
}

void recRevPrint(int a[], int size)
{
    if (size > 0)
    {
        recRevPrint(a + 1, size - 1);
        cout << a[0] << " ";
    }
    if (size ==0) {
        cout << a[size] << " ";
    }
    // if size is equal to zero than do nothing.
}

int main()
{
    int from[] = { 100, 200, 300, 400 };
    int to[] = { -1, -1, -1, -1 };
    
    recCopy(from, to, 3);
    
    printArr(from, 3);
    cout << endl;
    printArr(to, 3);
    cout << endl;
    
    int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
    
    iterRevPrint(arr, 10);
    
    recRevPrint(arr, 9);
    
    return 0;
}

