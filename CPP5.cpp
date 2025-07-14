#include<iostream>

// cout << (insertion oprator)
// cin  >> (exteraction oprator)

int main(){
    
    int age;
    std::string name;
   
    std::cout << "What is you age? ";
    std::cin >> age;

    std::cout << "What's your full name? ";
    std::getline(std::cin >> std::ws, name);  //getline is a string function that allowes the spaces in the string 
                                              // using the ws function for the input buffer so that you can take inputs infornt of this too

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";


    return 0; 
}