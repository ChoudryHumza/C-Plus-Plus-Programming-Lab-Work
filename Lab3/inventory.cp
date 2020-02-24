//
//  inventory.cpp
//  inventory
//
//  Created by Preferred Customer on 2/5/19.
//  Copyright © 2019 humza choudry. All rights reserved.
//

#include "inventory.h"

void inventory::updateTotalCost()
{
    totalCost = quanity * cost;
}

void inventory::setItemNumber(int i)
{
    itemNumber = i;
}

void inventory::setQuanity(int q)
{
    quanity = q;
    updateTotalCost();
}

void inventory::setCost(double c)
{
    cost = c;
    updateTotalCost();
}

void inventory::setTotalCost(double tc)
{
    totalCost = tc;
}

int inventory::getItemNumber()
{
    return itemNumber;
}

double inventory::getCost()
{
    return cost;
}

int inventory::getQuanity()
{
    return quanity;
}

double inventory::getTotalCost()
{
    return totalCost;
}

inventory::inventory()
{
    itemNumber = 0;
    quanity = 0;
    cost = 0;
    totalCost = 0;
    updateTotalCost();
}

inventory::inventory(int i, int q, double c)
{
    setItemNumber(i);
    setQuanity(q);
    setCost(c);
    updateTotalCost();
}
