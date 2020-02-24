//
//  Savings.cpp
//  lab18
//
//  Created by Humza Choudry on 4/18/19.
//  Copyright © 2019 Humza Choudry. All rights reserved.
//


#include <string>
#include <sstream>
#include <iomanip>
#include "Savings.hpp"

using namespace std;
// Savings Account 

double Savings:: deposit(double deposit){
    if(deposit > 0){
        balance=getBalance()+deposit;
        return deposit;
    }
    else
        return 0;
}

string Savings:: getAccountType(){
    string s = "Savings";
    return s;
}


double Savings:: getInterestRate(){
    return interestRate;
}


ostream& operator<< (ostream&os, Savings &other){
    stringstream ost;
    ost<<right<<setw(15)<<"Account#: "<<other.getAccountNumber()<<endl;
    ost<<right<<setw(15)<<"Account Type: "<<other.getAccountType()<<endl;
    ost<<right<<setw(15)<<"Interest Rate: "<<setprecision(2)<<scientific<<other.getInterestRate()<<endl;
    ost<<right<<setw(15)<<"Balance: "<<fixed<<setprecision(2)<<other.getBalance()<<endl;
    ost<<setw(50)<<setfill('.')<<endl;  os<<ost.str();  return os;
}





//Constructor 
Savings:: Savings(double interestRate, string accountNumber,double balance):Account(accountNumber,balance){
    this-> interestRate=interestRate;
}
double Savings:: withdraw(double subtract){
    if(subtract < 1){
        return 0; }
    else {
        balance=getBalance()-subtract;
        return subtract;
    }
}


