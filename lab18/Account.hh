//
//  Account.hpp
//  lab18
//
//  Created by Humza Choudry on 4/18/19.
//  Copyright © 2019 Humza Choudry. All rights reserved.
//

#ifndef Account_hpp
#define Account_hpp

#include <stdio.h>
#include <string>
using namespace std;
class Account{
protected:
    string accountNumber;
    double balance;
public:
    Account(string accountNumber, double balance);
    string getAccountNumber();
    double getBalance();
    virtual double withdraw( double)=0;
    virtual double deposit( double)=0;
    virtual string getAccountType()=0;
    
};


#endif /* Account_hpp */
