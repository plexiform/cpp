//
//  coins.cpp
//  
//
//  Created by Haaris Siddiqui on 3/31/21.
//

#include <iostream>

int main() {
    int dollars, cents;
    int numQ, numD, numN, numP;
    float trackerInCents;
    
    std::cout<<"Please enter the amount of money to convert:"<<std::endl;
    
    std::cout<<"# of dollars: ";
    std::cin>>dollars;
    
    std::cout<<"# of cents: ";
    std::cin>>cents;
    
    trackerInCents = (dollars * 100) + cents;
    
    numQ = trackerInCents / 25;
    trackerInCents = trackerInCents - (numQ * 25);
    
    numD = trackerInCents / 10;
    trackerInCents = trackerInCents - (numD * 10);
    
    numN = trackerInCents / 5;
    trackerInCents = trackerInCents - (numN * 5);
    
    numP = trackerInCents / 1;
    trackerInCents = trackerInCents - (numP * 1);
    
    std::cout<<"The coins are "<<numQ<<" quarters, "<<numD<<" dimes, "<<numN<<" nickels and "<<numP<<" pennies";
    return 0;
}
