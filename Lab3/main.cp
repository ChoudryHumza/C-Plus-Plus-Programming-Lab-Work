//
//  main.cpp
//  inventory
//
//  Created by Preferred Customer on 2/5/19.
//  Copyright © 2019 humza choudry. All rights reserved.
//

#include "inventory.h"
    
    int main()
    {
        
        inventory objectOfInventory;
        cout << "Enter item number\n";
        int itemNumber;
        int quanity;
        double cost;
        cin >> itemNumber;
        cout << "Enter quanity\n";
        cin >> quanity;
        cout << "Enter cost\n";
        cin >> cost;
        objectOfInventory.setItemNumber(itemNumber);
        objectOfInventory.setQuanity(quanity);
        objectOfInventory.setCost(cost);
        cout << "Item Number: " << objectOfInventory.getItemNumber() << endl << "Quanity: " << objectOfInventory.getQuanity() << endl << "Cost: " << objectOfInventory.getCost() << endl << "Total Cost: " << objectOfInventory.getTotalCost()<< endl;
        
        inventory objectOfInventory2(itemNumber, quanity, cost);
        cout << "Item Number: " << objectOfInventory2.getItemNumber() << endl << "Quanity: " << objectOfInventory2.getQuanity() << endl << "Cost: " << objectOfInventory2.getCost() << endl << "Total Cost: " << objectOfInventory2.getTotalCost() << endl;
        
        return 0;
    }

