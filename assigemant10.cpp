#include <iostream>
using namespace std;

class Temperature {
private:
    float Rafi1;  //celsius;
    float Rafi2;  //fahrenheit;

public:
    // Function to take Celsius input
    void Alam1(float Rafi3) {   
        Rafi1 = Rafi3;
    }

    // Function to convert Celsius → Fahrenheit
    void Alam2() {
        Rafi2 = (Rafi1 * 9/5) + 32;
    }

    // Function to display result
    void Alam3() {
        cout << Rafi1 << " Celsius " << endl; 
        cout << "------ converted to ------" << endl;
        cout << Rafi2 << " Fahrenheit" << endl;
    }
};

int main() {
    Temperature t;
    float Rafi3;

    cout << "Enter temperature in Celsius: ";
    cin >> Rafi3;   

    t.Alam1(Rafi3);
    t.Alam2();
    t.Alam3();

    return 0;
}
