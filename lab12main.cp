//
//  main.cpp
//  LAB 12
//
//  Created by Preferred Customer on 3/25/19.
//  Copyright © 2019 humza choudry. All rights reserved.
//


#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

//Humza Choudry 

int main() {
    double sum =0;
    int count= 0;
    vector<double> numbersInFile(21);

    fstream read_file;
    read_file.open("/Users/Customer/Desktop/grades.csv", ios::in);
    if(!read_file)
    {
        cout << "Cannot open file " << endl;
        exit(1);
    }
    else
    {
        read_file.seekg(8,ios::beg);
        
    }
    

    for(int i=0;i<20;++i)
    {
        read_file.seekg(11,ios::cur) >> numbersInFile[i];
        sum += numbersInFile[i];
        count++;
    }
    read_file.close();
    cout << sum << endl;
    ofstream write_file("/Users/Customer/Desktop/Result.txt");
    double avg = sum/count;
  
    
    write_file << right << setw(10) << setfill('@') <<"Sum: ";
    write_file << fixed << showpoint;
    write_file << setprecision(2);
    write_file << sum << endl;
    write_file << right << setw(10) << setfill('@') << "Count: ";
    write_file << fixed << showpoint;
    write_file << setprecision(0);
    write_file << count << endl;
    write_file << right << setw(10) << setfill('@') <<"Avg: ";
    write_file << fixed << showpoint;
    write_file << setprecision(2);
    write_file << avg << endl;
 
    write_file.flush();
    write_file.close();
    return 0;
}

