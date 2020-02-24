//
//  main.cpp
//  Lab 11
//
//  Created by Preferred Customer on 3/20/19.
//  Copyright © 2019 humza choudry. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Item{
protected:
    int id;
    string name;
    double price;
public:
    Item(int _id, string _name, double _price);
    Item();
};
Item:: Item(int _id, string _name, double _price){
    id = _id;
    name = _name;
    price = _price;
}
Item::Item(){
    
}

class Chair : public Item {
private:
    int numLegs;
public:
    Chair(int _numLegs, int _id, string _name, double _price) : Item(_id, _name, _price){
        numLegs = _numLegs;
    }
    void setNumLegs(int _numLegs);
    int getNumLegs();
    
    Chair(int i=0){
        numLegs = i;
    }
    string tostring() {
        ostringstream str1, str2, str3;
        
        str1 << id;
        str2 << price;
        str3 << numLegs;
        return str1.str() + " " + name + " " + str2.str() + " " + str3.str() + "\n";
    }
    friend ostream & operator << (ostream & out, const Chair &c) {
        out << c.id << " " << c.name << " " << c.price << " " << c.numLegs << "\n";
        return out;
    }
    friend istream & operator >> (istream & in, Chair &c) {
        cout << "Enter id number : ";
        in >> c.id;
        cout << "Enter name : ";
        in >> c.name;
        cout << "Enter price : ";
        in >> c.price;
        cout << "Enter numLegs number : ";
        in >> c.numLegs;
        return in;
    }
};

void Chair:: setNumLegs(int _numLegs){
    numLegs = _numLegs;
}
int Chair::getNumLegs(){
    return numLegs;
}


int main() {
    Chair c(144, 33, "Working solution", 2.11);
    c.setNumLegs(45);
    int t = c.getNumLegs();
    cout << t << endl;
    
    cout << c.tostring();
    cout << c;
    c = 99;
    cout << c.getNumLegs() << endl;
    
    Chair d(200);
    cout << d.getNumLegs() << endl;
    
    
    Chair e;
    cin >> e;
    cout << "Inputed Values" << endl;
    cout << e.tostring();
}
