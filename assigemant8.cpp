#include <iostream>
using namespace std;

class Office {
private:
    string Rafi1; //Name
    int Rafi2;    // office ID
    float Rafi3;  // salary

public:
    // Default constructor
    Office() {
        Rafi1 = "Rafi Alam";
        Rafi2 = 12345678;
        Rafi3 = 50000;
    }

    // Parameterized constructor
    Office(string Rafi4, int Rafi5, float Rafi6) {
            Rafi1 = Rafi4;
            Rafi2 = Rafi5;
            Rafi3 = Rafi6;
    }

    // Copy constructor
    Office(const Office &ob) {
        Rafi1 = ob.Rafi1;
        Rafi2 = ob.Rafi2;
        Rafi3 = ob.Rafi3;        
    }

    // Display function
    void Alam1() {
        cout << "Name: " << Rafi1 << endl;
        cout << "Office ID: " << Rafi2 << endl;
        cout << "Salary: " << Rafi3 << endl;
        cout << "----------------------" << endl;
    }
};

int main() {

    // ----------- Implicit constructor call -----------
    Office s1("Rafi", 101123,40000);   // parameterized constructor called implicitly
    Office s2;               // default constructor called implicitly

    // ----------- Explicit constructor call -----------
    Office s3 = Office("Alam", 201241,45000);  // explicit call

    // ----------- Copy constructor -----------
    Office s4 = s1;   // copy constructor called implicitly

    // Display all objects
    s1.Alam1();
    s2.Alam1();
    s3.Alam1();
    s4.Alam1();

    return 0;
}
