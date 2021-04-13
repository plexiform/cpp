//
//  gradeclass.cpp
//  
//
//  Created by Haaris Siddiqui on 4/13/21.
//

#include <stdio.h>
#include <iostream>

int main() {
    double grade1, grade2;
    
    std::cout<<"Please enter 2 grades, separated by a space: ";
    std::cin>>grade1>>grade2;
    
    if (grade1 >= 95 && grade2 >= 95) {
        std::cout<<"Student Graduated with Honors:)";
    }
    else if (grade1 < 60 && grade2 < 60) {
        std::cout<<"Student Failed:(";
    }
    else {
        std::cout<<"Student Graduated!";
    }
    
    return 0;
}
