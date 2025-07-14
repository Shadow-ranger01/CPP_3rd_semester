#include<iostream>
#include<vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t; 
  //the data type  std::vector<std::pair<std::string, the name is big so for shorting this we are using this
  
  //typedef std::string text_t;
  //typedef int number_t;

  using text_t = std::string;
  using number_t = int;

  // we can use using keyword and it will do the same work as typedef , NOTE : use these key word when you needed them

int main(){

    // typedef = nickname / additional name for a data type

    //pairlist_t pairlist;
    
    text_t firstName = "rafi";
    number_t age = 21;

    std::cout << firstName << '\n';
    std::cout << age << '\n';


    return 0;
}