#include<iostream>
#include<cmath>

int main(){

    double x = 3.99;
    double y = 4;
    double z;

    //z = std::max(x,y); // maximum
    //z = std::min(x,y); // minimum
    //z = pow(2, 3); //power
    //z = sqrt(9);  //squair root
    //z = abs(-3); //absolute value
    //z = round(x); //round the pint number into full number part only
    //z = ceil(x); // round up to the next full number 
    z = floor(x); // round down to lowest number

    std::cout << z;

    //cplusplus.com for more math functions


    return 0;
}