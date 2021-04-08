//
//  bmimetric.cpp
//  
//
//  Created by Haaris Siddiqui on 3/31/21.
//

#include <iostream>
#include <cmath>
int main(){
    float weight, height, bmi, roundedBMI;
    
    std::cout<<"Please enter weight in kilograms: ";
    std::cin>>weight;
    std::cout<<"Please enter height in meters: ";
    std::cin>>height;
    
    bmi = weight/(height * height);
    roundedBMI = ceil(bmi * 100);
    std::cout<<"BMI is: "<<roundedBMI/100;
    return 0;
}
