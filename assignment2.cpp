#include <iostream>
using namespace std;

class Cricket{

    private:
    string name;
    float Run;
    int innings;
    int notOut;
    float avg; 

    public:
    void putdata(string N, float r, int i, int n){
        name = N;
        Run = r;
        innings = i;
        notOut = n;
    }

    void calculation();
    void display();

};

void Cricket :: calculation(){
    float cal_Innings = innings - notOut;
    if(cal_Innings != 0){
        avg = Run / cal_Innings;
    }
    else{
        avg = 0;
    }
}

void Cricket :: display(){
     
    cout << "\nName: " << name << endl;
    cout << "Runs: " << Run << endl;
    cout << "Avg: " << avg << endl;
    cout << "Innings(Out): " << innings << endl;
    cout << "Innings(Not Out): " << notOut << endl;
    cout << "\n-------------------------------\n" << endl; 

}

int main (){

    Cricket p1,p2,p3;

    cout << "\n The batting figures of the player in ODI \n" << endl;

    p1.putdata("Sakib",6062,200,20);
    p2.putdata("Tamim",5689,167,10);
    p3.putdata("Rahim",5521,171,15);

    p1.calculation();
    p2.calculation();
    p3.calculation();

    p1.display();
    p2.display();
    p3.display();
    
    
    return 0;
}