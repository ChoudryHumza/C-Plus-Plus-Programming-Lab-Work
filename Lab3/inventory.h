//
//  inventory.hpp
//  inventory
//
//  Created by Preferred Customer on 2/5/19.
//  Copyright © 2019 humza choudry. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <iostream>
#ifndef inventory_h
#define inventory_h
using namespace std;

class inventory {
private:
    int itemNumber;
    int quanity;
    double cost;
    double totalCost;
    void updateTotalCost();
public:
    void setItemNumber(int i);
    void setQuanity(int q);
    void setCost(double c);
    void setTotalCost(double tc);
    int getItemNumber();
    double getCost();
    int getQuanity();
    double getTotalCost();
    inventory();
    inventory(int i, int q, double c);
    
    
};



#endif // !Inventory.h
