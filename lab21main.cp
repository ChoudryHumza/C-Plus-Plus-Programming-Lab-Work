//
//  main.cpp
//  Lab21
//
//  Created by Preferred Customer on 5/6/19.
//  Copyright © 2019 humza choudry. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class DistObj{
public:
    double distance;
    DistObj(double _distance);
    friend istream& operator>>(istream&is, DistObj&obj);
    friend bool operator==(const DistObj &obj1, const DistObj obj2);
};
DistObj::DistObj(double _distance){
    distance = _distance;
}
istream& operator>>(istream&is, DistObj&obj){
    is >> obj.distance;
    return is;
}

bool sortDistance (DistObj &obj1, DistObj &obj2){
    return obj1.distance < obj2.distance;
}
bool operator==(const DistObj &obj1, const DistObj obj2){
    if (obj1.distance == obj2.distance) {
        return true;
    }
    else
        return false;
}

int main() {

    vector<DistObj> myVec;
    for (int i =0; i < 25; i++) {
        DistObj c(-1);
        cin >> c;
        myVec.push_back(c);
    }
    
    sort(myVec.begin(), myVec.end(), sortDistance);
    
    vector<DistObj>::iterator p = myVec.begin();
    while (p != myVec.end()) {
        cout << p->distance << " " << endl; p++;
    }
   DistObj obj1(11.1);
   vector<DistObj> ::iterator iter;
   iter = find(myVec.begin(), myVec.end(), obj1);
    if (iter != myVec.end())
        cout << "FOUND 11.1" << endl;
    else
        cout << "NOT FOUND 11.1" << endl;
   
    DistObj obj2(73.9);
    iter = find(myVec.begin(), myVec.end(), obj2);
    if (iter != myVec.end())
        cout << "FOUND 73.9" << endl;
    else
        cout << "NOT FOUND 73.9" << endl;
}
