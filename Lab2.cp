//============================================================================
// Name        : Lab2.cpp
// Author      : humza choudry
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
// LAB NUMBER 2

#include <iostream>
#include <string>
using namespace std;

class Computer {
private:
	int year;
	string model, purpose;
public:

	Computer(){
		year = -1;
		model = "";
		purpose = "";
	}
	~Computer(){
		cout << "Removing instance from memory";
	}
	Computer(string m, int y){
		model = m;
		year = y;
		purpose = "";
	}
	Computer(string m, string p, int y){
			model = m;
			year = y;
			purpose = p;
	}
	void setYear(int y){
		year = y;
	}
	int getYear(){
		return year;
	}
	void setModel(string m){
		model =m;
	}
	string getModel(){
		return model;
	}
	void setPurpose(string p){
		purpose = p;
	}
	string getPurpose(){
		return purpose;
	}
};

int main() {

	Computer test("a","b",1);
	cout << test.getModel() << test.getYear() << test.getPurpose() << endl;
}
