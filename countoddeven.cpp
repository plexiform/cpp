//
//  countoddeven.cpp
//  
//
//  Created by Haaris Siddiqui on 4/13/21.
//

#include <stdio.h>
#include <iostream>

int main() {
    int intArr[4] = {};
    int numEvens, numOdds;
    numEvens = 0;
    numOdds = 0;
    
    std::cout<<"Please enter 4 positive integers, separated by a space: ";
    std::cin>>intArr[0]>>intArr[1]>>intArr[2]>>intArr[3];
    
    for (int i = 0; i < sizeof(intArr)/sizeof(int); i++) {
        if (intArr[i] % 2 == 0) {
            numEvens += 1;
        }
        else {
            numOdds += 1;
        }
    }
    
    if (numEvens > numOdds) {
        std::cout<<"more evens";
    }
    else if (numOdds > numEvens) {
        std::cout<<"more odds";
    } else {
        std::cout<<"same number of evens and odds";
    }
    
    return 0;
}
