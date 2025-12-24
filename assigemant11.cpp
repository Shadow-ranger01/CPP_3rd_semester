#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor
    Number(int v = 0) {
        value = v;
    }

    int getValue() {
        return value;
    }

    // Function that adds values of two objects
    void addObjects(Number obj1, Number obj2) {
        value = obj1.value + obj2.value;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n1(10);    // object 1
    Number n2(20);    // object 2
    Number result;    // empty object

    // Pass objects as arguments
    result.addObjects(n1, n2);

    cout << "After adding objects: ";
    result.display();

    return 0;
}
