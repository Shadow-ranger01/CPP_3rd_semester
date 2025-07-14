#include<iostream>

int main(){

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    /*if(name.empty()){                  // name.empty will detact there is no input an show the error signe
        std::cout << "You didn't enter your name ";
    }*/

    // name.clear will clear what ever the privious input was
    // name.append you can pre select and later update it with the input
    // name.at(position it will be number )
    // name.inset(position, "thing you want to put");
    // name.find('char')
    // name.erase(0, 3) it will erase the range of first index=0 to last index=3 in this case

    if(name.length() > 12){
        std::cout << "Your name can not be over 12 charectors";
    }
    else
    {
        std::cout << "welcome " << name;
    }  

    return 0;
}