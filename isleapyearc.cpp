//
//  isleapyearc.cpp
//  
//
//  Created by Haaris Siddiqui on 4/13/21.
//

#include <stdio.h>
#include <iostream>

int main(int argc, char *argv[]) {
    int year;
    
    if (argc == 3) {
        year = atoi(argv[2]);
    }
    else if (argc == 2) {
        year = atoi(argv[1]);
    }

    if (year % 4 != 0) {
        std::cout<<year<<" was not a leap year";
    }
    else if (year % 100 != 0) {
        std::cout<<year<<" was a leap year";
    }
    else if (year % 400 != 0) {
        std::cout<<year<<" was not a leap year";
    }
    else {
        std::cout<<year<<" was a leap year";
    }
    
    return 0;
}
