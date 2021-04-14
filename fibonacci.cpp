//
//  fibonacci.cpp
//  
//
//  Created by Haaris Siddiqui on 4/14/21.
//

#include <stdio.h>
#include <iostream>

int main() {
    int input;
    int count = 0;
    int temp;
    int lastNum, secLastNum;
    
    std::cout<<"Please enter a positive integer greater than 1: ";
    std::cin>>input;
    
    while (count < input) {
        if (count == 0) {
            std::cout<<1<<std::endl;
            lastNum = 1;
            count++;
        } else if (count == 1) {
            std::cout<<1<<std::endl;
            lastNum = 1;
            secLastNum = 1;
            count++;
        } else {
            std::cout<<lastNum + secLastNum<<std::endl;
            temp = lastNum;
            lastNum = secLastNum + lastNum;
            secLastNum = temp;
            count++;
        }
    }
    
    return 0;
}
