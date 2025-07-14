#include<iostream>

int main (){

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "*************** CALCULATOR *******************\n";
    
    std::cout << "ENTER EATHER (+ - * /): ";
    std::cin  >> op;

    std::cout << "Enter the NUMBER 1: ";
    std::cin >> num1;

    std::cout << "Enter the NUMBER 2: ";
    std::cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        std::cout << "Result: " << result << '\n';
        break;
    case '-':
        result = num1 - num2;
        std::cout << "Result: " << result << '\n';
        break;
    case '*':
        result = num1 * num2;
        std::cout << "Result: " << result << '\n';
        break;        
    case '/':
        result = num1 / num2;
        std::cout << "Result: " << result << '\n';
        break;        
    default:
        std::cout << "That was not a valid responce \n";
        break;
    }

    std::cout << "***********************************************\n";



    return 0;
}