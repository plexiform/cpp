//
//  evennumbers.cpp
//  
//
//  Created by Haaris Siddiqui on 4/14/21.
//

#include <stdio.h>
#include <iostream>

int main() {
    int input;
    int currentEven = 0;
    
    std::cout<<"Please enter a positive integer: ";
    std::cin>>input;
    
    for (int i = 0; i < input; i++) {
        currentEven += 2;
        std::cout<<currentEven<<std::endl;
    }
    
    return 0;
}
