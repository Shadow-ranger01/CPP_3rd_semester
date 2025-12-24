#include <iostream>
using namespace std;

class AREA {

private:
    float rafi1, rafi2, rafi3;  // variables (your first name)

public:
    void alam1();  // Trapezium
    void alam2();  // Circle
    void alam3();  // Square
    void alam4();  // Rhombus
};

void AREA :: alam1() {  // Trapezium

    cout << "Enter base1: ";
    cin >> rafi1;
    cout << "Enter base2: ";
    cin >> rafi2;
    cout << "Enter height: ";
    cin >> rafi3;

    float area = 0.5 * (rafi1 + rafi2) * rafi3;

    cout << "The area of Trapezium is: " << area;
}

void AREA :: alam2() {  // Circle

    cout << "Enter radius: ";
    cin >> rafi1;

    float area = 3.1416 * rafi1 * rafi1;

    cout << "The area of Circle is: " << area;
}

void AREA :: alam3() {  // Square

    cout << "Enter side: ";
    cin >> rafi1;

    float area = rafi1 * rafi1;

    cout << "The area of Square is: " << area;
}

void AREA :: alam4() {  // Rhombus

    cout << "Enter diagonal 1: ";
    cin >> rafi1;
    cout << "Enter diagonal 2: ";
    cin >> rafi2;

    float area = 0.5 * rafi1 * rafi2;

    cout << "The area of Rhombus is: " << area;
}

int main() {

    AREA obj;
    char rafi4;

    cout << "Enter your shape (T/C/S/R): ";
    cin >> rafi4;

    if (rafi4 == 'T' || rafi4 == 't') {
        obj.alam1();
    }
    else if (rafi4 == 'C' || rafi4 == 'c') {
        obj.alam2();
    }
    else if (rafi4 == 'S' || rafi4 == 's') {
        obj.alam3();
    }
    else if (rafi4 == 'R' || rafi4 == 'r') {
        obj.alam4();
    }
    else {
        cout << "INVALID INPUT!";
    }

    return 0;
}
