//
//  bmiimperial.cpp
//  
//
//  Created by Haaris Siddiqui on 4/8/21.
//

#include <iostream>
#include <cmath>

int main() {
    float weightLbs, heightInches, weightImp, heightImp, bmi, roundedBMI;
    
    std::cout<<"Please enter weight in pounds: ";
    std::cin>>weightLbs;
    std::cout<<"Please enter height in inches: ";
    std::cin>>heightInches;
    
    weightImp = weightLbs * 0.453592;
    heightImp = heightInches * 0.0254;
    
    bmi = weightImp/(heightImp * heightImp);
    roundedBMI = ceil(bmi*100);
    std::cout<<"BMI is: "<<roundedBMI/100;
    return 0;
}
