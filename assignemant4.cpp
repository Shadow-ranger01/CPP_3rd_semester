#include <iostream>
using namespace std;

class rafi{

    private:
    string name;
    float Run;
    int innings;
    int notOut;
    float avg; 

    public:
    void alam(string N, float r, int i, int n){
        name = N;
        Run = r;
        innings = i;
        notOut = n;
    }

    void alam(float y,int z);
    void alam(int x);

};

void rafi :: alam(float,int){
    float cal_Innings = innings - notOut;
    if(cal_Innings != 0){
        avg = Run / cal_Innings;
    }
    else{
        avg = 0;
    }
}

void rafi :: alam(int){
     
    cout << "\nName: " << name << endl;
    cout << "Runs: " << Run << endl;
    cout << "Avg: " << avg << endl;
    cout << "Innings(Out): " << innings << endl;
    cout << "Innings(Not Out): " << notOut << endl;
    cout << "\n-------------------------------\n" << endl; 

}

int main (){

    rafi p1,p2,p3;

    cout << "\n The batting figures of the player in ODI \n" << endl;

    p1.alam("Sakib",6062,200,20);
    p2.alam("Tamim",5689,167,10);
    p3.alam("Rahim",5521,171,15);

    p1.alam(2,1);
    p2.alam(2,1);
    p3.alam(2,1);

    p1.alam(1);
    p2.alam(1);
    p3.alam(1);
    
    
    return 0;
}