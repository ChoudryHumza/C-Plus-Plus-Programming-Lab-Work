//
//  Account.cpp
//  lab18
//
//  Created by Humza Choudry on 4/18/19.
//  Copyright © 2019 Humza Choudry. All rights reserved.
//

#include "Account.hpp"


using namespace std;



string Account::getAccountNumber(){
    return accountNumber;
}

double Account::getBalance(){
    return balance;
}

Account:: Account(string accountNumber, double balance){
   this->accountNumber=accountNumber;
   this->balance=balance;
    
}


