#include<iostream>

int main(){
    
    //arithmetic opartor = reutrns the result of a specfic arithmetic opration (+ - / *)

    int students = 20;

    //students = students + 1;
    //students+=1;
    students++;

    //students = students - 1;
    //students-=1;
    students--;  // same for * and / 

    std::cout << students;

    //Type conversion = Implacit - 
    //                  explicit - double x = (int)3.14; it will take all the number in the intiger value

    double x = (int)3.14;
    char y = 100;

    std::cout<< x << '\n';
    std::cout<< y << '\n';
    
    int correct = 8;
    int question = 10;
    double score = correct/(double)question * 100; // the(double) is working as  explicit type converter

    std::cout<< score << "%";

    return 0;
}