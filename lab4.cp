//
//  main.cpp
//  LAB4Struct
//
//  Created by Preferred Customer on 2/6/19.
//  Copyright © 2019 humza choudry. All rights reserved.
//#include <stdio.h>
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

struct Inventory {
    int itemNumber;
    int quanity;
    double cost;
    double updateTotalCost(){
        return quanity * cost;
    }
    
    Inventory(int i, int q, double c){
        itemNumber = i;
        quanity = q;
        cost = c;
        updateTotalCost();
    }
    Inventory(): Inventory(0,0,0){
        
    }
};


int main()
{
    Inventory warehouse;
    cout << "Enter item number\n";
    int itemNumber;
    int quanity;
    double cost;
    cin >> itemNumber;
    cout << "Enter quanity\n";
    cin >> quanity;
    cout << "Enter cost\n";
    cin >> cost;
    warehouse.cost =cost;
    warehouse.itemNumber=itemNumber;
    warehouse.quanity=quanity;
      cout << "Item Number: " << warehouse.itemNumber << endl << "Quanity: " << warehouse.quanity << endl << "Cost: " << warehouse.cost << endl << "Total Cost: " << warehouse.updateTotalCost() << endl;
    
    Inventory warehouse2(itemNumber,quanity,cost);
    cout << "Item Number: " << warehouse2.itemNumber << endl << "Quanity: " << warehouse2.quanity << endl << "Cost: " << warehouse2.cost << endl << "Total Cost: " << warehouse2.updateTotalCost() << endl;
    
    return 0;
}

