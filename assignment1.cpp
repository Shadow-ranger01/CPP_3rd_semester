#include <iostream>
using namespace std;

class Equation {
public:
    double b, c, A, B, C;

    // Function to calculate power manually (works for double)
    double power(double base, int exp) {
        double result = 1.0;
        int i = 1;
      while ( i <= exp)
      {
        result = result * base;
        i++;
      }
        /* for (int i = 1; i <= exp; i++) {
            result = result * base;
        }*/
        return result;
    }

    // Function to calculate A
    void calculate() {
        B = (188 * power(b, 8));
        C = (299 * power(c, 11));

        A = (B) + (C) - 999;
    }

    // Function to show result
    void show() {
        cout << "The value of A = " << A << endl;
    }
};

int main() {
    Equation eq;

    cout << "Enter value of b: ";
    cin >> eq.b;

    cout << "Enter value of c: ";
    cin >> eq.c;

    eq.calculate();
    eq.show();

    return 0;
}
