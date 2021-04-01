	//
//  main.cpp
//  lab1
//
//  Created by Haaris Siddiqui on 3/31/21.
//  Copyright © 2021 Haaris Siddiqui. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int quarters, dimes, nickles, pennies;
    int sum, dollars, cents;
    
    cout<<"Please enter the number of coins:"<<endl;
    
    cout<<"# of quarters: ";
    cin>>quarters;
    
    cout<<"# of dimes: ";
    cin>>dimes;
    
    cout<<"# of nickles: ";
    cin>>nickles;
    
    cout<<"# of pennies: ";
    cin>>pennies;
    
    sum = (25 * quarters) + (10 * dimes) + (5 * nickles)+ (1 * pennies);
    
    cents = sum % 100;
    dollars = (sum - cents) / 100;
    
    cout<<"The total is "<<dollars<<" dollars and "<<cents<<" cents."<<endl;
    return 0;
}
