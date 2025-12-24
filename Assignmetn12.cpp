#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int age;
    float salary;
    string joinDate;

public:
    // Function to take input
    void getData() {
        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Salary: ";
        cin >> salary;

        cout << "Enter Date of Joining: ";
        cin >> joinDate;

        cout << endl;
    }

    // Function to display output
    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
        cout << "Date of Joining: " << joinDate << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    int n;

    cout << "How many employees? ";
    cin >> n;

    Employee emp[100];   // array of objects (max 100 employees)

    // Input
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of employee " << i + 1 << ":\n";
        emp[i].getData();
    }

    // Output
    cout << "\n===== Employee Details =====\n";
    for (int i = 0; i < n; i++) {
        emp[i].displayData();
    }

    return 0;
}
