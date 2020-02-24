//
//  main.cpp
//  Lab5
//
//  Created by Preferred Customer on 2/11/19.
//  Copyright © 2019 humza choudry. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(){
    
    string nameInput;
    //int gradeInput;
    cout << "Enter five names\n";
    vector <string> names;
    for (int i =0; i <5; i++) {
        cin >> nameInput;
        names.push_back(nameInput);
    }
    
    cout << "Enter five grades for the names given\n";
    vector <int> grades(5);
    for (int i =0; i <5; i++) {
        cin >> grades[i];
    }
    
    for (int i =0; i<5; i++) {
        cout << "The name is: " << names[i] << " Grade: " << grades[i] << endl;
    }
    
    int firstValue = grades[0];
    int place =0;
    for (int i =1; i< 5; i++) {
        if (firstValue < grades[i]) {
            firstValue =grades[i];
            place = i;
        }
    }
    
    if (firstValue == grades[0]){
        cout << "The maximum grade is " << firstValue <<  " The name is: " << names[0] << endl;
        
    }
    else {
        cout << "The maximum grade is " << firstValue <<  " Name is: " << names[place] << endl;
    }
    
    int total =0;
    for (int i =0; i<5; i++) {
        total += grades[i];
    }
    int average = total / 5;
    cout << "The average is: " << average << endl;
    
    int b =0;
    int a =0;
    for (int i =0; i<5; i++) {
        if (grades[i] < average ) {
            b+=1;
        }
        else if (grades[i] > average){
            a+=1;
        }
    }
    
    cout << "Number of grades above the average is: " << a << endl;
    cout << "Number of grades below the average is " << b << endl;
    
    return 0;
    
}
