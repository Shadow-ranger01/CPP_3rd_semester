#include<iostream>

int main(){

    // if statement
    int age;

    std::cout << "Enter your age ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "welcom to the site ";
    }
    else if(age < 0){
        std::cout << "you haven't been born yeat";
    }
    else if(age >= 100){
        std::cout << "You are too old to be in this site";
    }
    else{
        std::cout << "you are not old enought to enter";
    }

    return 0;
}