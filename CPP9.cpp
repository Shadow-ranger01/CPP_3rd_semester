#include<iostream>

int main (){

    char grade;

    std::cout << "What latter grade?: ";
    std::cin >> grade;

    switch (grade){
       case 'A':
        std::cout << "You did good!";
          break;
       case 'B':
        std::cout << "You did avrage";
           break;
       case 'C':
        std::cout << "You did OK";
           break;
       case 'F':
        std::cout << "you failed";
           break;
       default:
        std::cout << "Please USE a proper grade!!!";          
    }   

    return 0;
}