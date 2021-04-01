	//
//  main.cpp
//  lab1
//
//  Created by Haaris Siddiqui on 3/31/21.
//  Copyright © 2021 Haaris Siddiqui. All rights reserved.
//

#include <iostream>

int main() {
    int quarters, dimes, nickles, pennies;
    int sum, dollars, cents;
    
    std::cout<<"Please enter the number of coins."<<std::endl;
    
    std::cout<<"# of quarters: ";
    std::cin>>quarters;
    
    std::cout<<"# of dimes: ";
    std::cin>>dimes;
    
    std::cout<<"# of nickles: ";
    std::cin>>nickles;
    
    std::cout<<"# of pennies: ";
    std::cin>>pennies;
    
    sum = (25 * quarters) + (10 * dimes) + (5 * nickles)+ (1 * pennies);
    
    cents = sum % 100;
    dollars = (sum - cents) / 100;
    std::cout<<"The total is "<<dollars<<" dollars and "<<cents<<" cents."<<std::endl;
    return 0;
}
