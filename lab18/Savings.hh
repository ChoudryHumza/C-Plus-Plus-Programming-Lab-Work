//
//  Savings.hpp
//  lab18
//
//  Created by Humza Choudry on 4/18/19.
//  Copyright © 2019 Humza Choudry. All rights reserved.
//

#ifndef Savings_hpp
#define Savings_hpp

#include <stdio.h>
#include <string>
#include "Account.hpp"
using namespace std;


class Savings : public Account{
private:
    double interestRate;
public:
    Savings(double interestRate, string AccountNumber, double balance);
    double withdraw(double);
     double deposit(double);
     string getAccountType();
    double getInterestRate();
    friend ostream& operator<<( ostream& os, Savings& other);
};

// LAB 18 

#endif /* Savings_hpp */
