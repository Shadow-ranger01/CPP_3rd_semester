#include <iostream>
using namespace std;

class Series {
private:
    int n;
    float sum;

public:
    void getInput() {
        cout << "Enter value of n: ";
        cin >> n;
    }

    void calculate() {
        sum = 0;

        for (int i = 1; i <= n; i++) {

            float term = 1;

            // calculate (1/i)^i manually
            for (int j = 1; j <= i; j++) {
                term = term * (1.0 / i);
            }

            sum = sum + term;
        }
    }

    void display() {
        cout << "The value of A = " << sum;
    }
};

int main() {
    Series obj;

    obj.getInput();
    obj.calculate();
    obj.display();

    return 0;
}
