//
//  main.cpp
//  Lab7
//
//  Created by Preferred Customer on 2/21/19.
//  Copyright © 2019 humza choudry. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

class ArrayDemo {
    int arr[10];
    int *ptrArr = arr;
    
public:
    ArrayDemo(){
        for (int i =0; i<10; i++) {
            ptrArr[i] = pow(i, i);
        }
    }
    void arrayAddress(){
        cout << "pointer address "<< &ptrArr << endl << "arr address " << &arr<< endl;
    }
    void arrayValue(){
        cout << "prt value "<< &ptrArr[0] << endl << "arr value " << &arr<<endl;
       
        
    }
    void subscriptAddress(int s){
        cout << "prtArr["<< s<< "] " << "address" << &ptrArr[s] << endl << "arr["<< s<< "]" << " address" << &arr[s] << endl;
    }
    void valueBySubscript(int s){
        cout << "prtArr["<< s<< "] " << "Value: " << ptrArr[s] << endl << "arr["<< s<< "]" << " Value: " << arr[s]<<endl;
    }
    void valueByArithmetic(int s){
        cout << "prtArr["<< s<< "] " << *(ptrArr+s) << endl;
        
    }
    
    
};

int main() {
    
    ArrayDemo arrDemo;
    
    cout << "Call to arrayAddress(): " << endl;
    arrDemo.arrayAddress();
    
    cout << endl << "Call to arrayValue(): " << endl;
    arrDemo.arrayValue();
    
    cout << endl << "Call to subscriptAddress(): " << endl;
    arrDemo.subscriptAddress(2);
    arrDemo.subscriptAddress(3);
    arrDemo.subscriptAddress(4);
    
    cout << endl << "Call to valueBySubscript(): " << endl;
    arrDemo.valueBySubscript(2);
    arrDemo.valueBySubscript(3);
    arrDemo.valueBySubscript(4);
    
    cout << endl << "Call to valueByArithmetic(): " << endl;
    arrDemo.valueByArithmetic(2);
    arrDemo.valueByArithmetic(3);
    arrDemo.valueByArithmetic(4);
    
    return 0;
}
