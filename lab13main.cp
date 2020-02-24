//
//  main.cpp
//  Lab 13
//
//  Created by Preferred Customer on 3/27/19.
//  Copyright © 2019 humza choudry. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct TestScore{
    int studentId;
    double numeric;
};

TestScore dataReadFromFile[1];
void getRecord(int position){
    ifstream read_file;
    read_file.open("/Users/Customer/Desktop/arrScore.bin", ios::binary);
    read_file.seekg(sizeof(TestScore) * position, ios::beg);
    read_file.read(reinterpret_cast<char *>(dataReadFromFile), sizeof(TestScore));
    read_file.close();
}

int main() {
    
    TestScore testScore[100];
    
    cout << "Enter in 100 student id number and its numeric." << endl;
    cout << "First enter student id followed by its numeric" << endl;
    int si;
    double num;
    
    // TEST: CHANGE TO i<10 TO TEST CODE 
    for (int i=0; i<100; i++) {
        cin >> si;
        cin >> num;
        testScore[i].numeric = num;;
        testScore[i].studentId = si;;
    }

    ofstream write_file("/Users/Customer/Desktop/arrScore.bin", ios::binary);
    write_file.write(reinterpret_cast<char *>(testScore), sizeof(testScore));
    write_file.flush();
    write_file.close();
    
    
    for (int i = 0; i < 100; ++i) {
        getRecord(i);
        cout << "Entry# " << i << ": " << dataReadFromFile[0].studentId << ", " << dataReadFromFile[0].numeric << endl;
    }
    
    
    /* TEST CODE
     for (int i = 0; i < 10; ++i) {
     getRecord(i);
     cout << "Entry# " << i << ": " << dataReadFromFile[0].studentId << ", " << dataReadFromFile[0].numeric << endl;
     }
     */
    
}
