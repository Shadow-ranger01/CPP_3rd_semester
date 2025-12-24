#include <iostream>
using namespace std;

class NWU {
private:
    string Rafi1; //name
    int Rafi2;    //ID
    float Rafi3;  //cgp
    string Rafi4; //department name

public:
    // Constructor to initialize private member data
    NWU(string Rafi5, int Rafi6, float Rafi7, string Rafi8) { //this is a constructur funtion so it has the same name as the class
        Rafi1 = Rafi5;
        Rafi2 = Rafi6;
        Rafi3 = Rafi7;   
        Rafi4 = Rafi8;
    }

    // Function to display the data
    void Alam1() {
        cout << "Name: " << Rafi1 << endl;
        cout << "ID Number: " << Rafi2 << endl;
        cout << "CGP: " << Rafi3 << endl;
        cout << "Name of Department: " << Rafi4 << endl;
    }
};

int main() {
    // Object created using constructor — data initialized automatically
    NWU s1("Rafi Alam", 101, 88.,"CSE");

    s1.Alam1();

    return 0;
}
