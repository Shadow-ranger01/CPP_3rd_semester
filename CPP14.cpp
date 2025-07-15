#include<iostream>

int main(){

    //contnue - skipps 
    //break - breaks out 

    for (int i = 0; i <= 20; i++)
    {
        if(i==13){
            break;   //it will off at 13
            //contnue; //it will skip the 13 no
        }
        std::cout << i << '\n';
    }
    

    return 0;
}