#include<iostream>

int main(){

    //ternary oprator ?:

    //bool hungry = true; 
    // in CPP bool veriable are true/ false;

    //hungry ? std::cout <<"your are hungry" : std::cout <<"You are full";
    //std::cout << (hungry ? "your are hungry" : "You are full");

    double temp;
    char unit;

    std::cout << "************* Temprature Conversion ***************\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celcius\n";
    std::cout << "What unite would you like to convert to: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "\nEnter the temprature in calcius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32;
        std::cout << "Temprature is : " << temp << "F\n";
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout << "\nEnter the temprature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temprature is : " << temp << "C\n";        
    }
    else{
        std::cout << "Please enter in only C or F\n";
    }
    std::cout << "***************************************************";

    return 0;
}