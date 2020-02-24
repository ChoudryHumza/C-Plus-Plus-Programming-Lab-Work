//
//  main.cpp
//  Lab20
//
//  Created by Preferred Customer on 5/6/19.
//  Copyright © 2019 humza choudry. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// HUMZA CHOUDRY 23434188
template <class T>

class Shape {
protected:
    T x;
    
public:
    Shape( T x){
        this->x=x;
    }
    
    virtual ~Shape(){
        
    }
    
    virtual string getInfo()=0;
    
};


class IntShape:public Shape<int>{
    
private:
    string name;
public:
    IntShape(string name, int x): Shape(x){
        this->name=name;
        
    }
    string getInfo(){
        return name;
    }
bool  operator >(const IntShape& other ){
        return x>other.x;
    }
    
friend ostream& operator <<( ostream& out, IntShape& other);
    
};

ostream& operator <<( ostream& out, IntShape& other){
    stringstream os;
    os<<other.name<<" "<<other.x;
    out<<os.str();
    return out;
}
template <class T2>
T2& getMax(T2& x, T2& y){
    return (x>y)? x:y;
    
}

int main() {
    
    IntShape s1("First Shape", 67);
    IntShape s2("Second Shape", 111);
    IntShape i3=getMax(s1, s2);
    cout<<"The largest of the two objects is: "<<i3.getInfo()<<endl;
    cout<<i3<<endl;
    
    return 0;
}
