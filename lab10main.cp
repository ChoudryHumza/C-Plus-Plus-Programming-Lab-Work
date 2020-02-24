//
//  main.cpp
//  LAB 10
//
//  Created by Preferred Customer on 3/13/19.
//  Copyright © 2019 humza choudry. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
class Person{
private:
    string name;
    int age;
    
public:
    Person();
    Person(string _name, int _age);
    Person(const Person &obj);
    friend ostream& operator<<(ostream& os, const Person& r);
    friend istream& operator>>(istream& is, Person& r);
    
    Person operator++(int i){
        age++;
        return *this;
    }
    Person operator--(){
        --age;
        return *this;
    }

};
Person::Person(){
    name = "";
    age = 0;
}
Person::Person(string _name, int _age){
    name =_name;
    age = _age;
}
Person::Person(const Person &obj) {
    name = obj.name;
    age = obj.age;
}
ostream& operator<<(ostream& os, const Person& r){
    os << r.age;
    os << r.name;
    return os;
}
istream& operator>>(istream& is, Person& r){
    is >> r.age;
    is>>r.name;
    return is;
}




int main() {
    
// main not given or required

    
    
    
    
    
    
    
}
