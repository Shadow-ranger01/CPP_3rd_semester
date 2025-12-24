#include<iostream>
using namespace std;

class Bank_account {
    private:
      string Rafi1;   //name 
      int Rafi2;      //account Number
      string Rafi3;   //accoutn type 
      double Rafi4;   //balence
      double Rafi5;   //finalAmmount
  
    public:
    // Function to assign initial values
    void Alam1(string Raf1, int Raf2, string Raf3, double Raf4) {
        Rafi1 = Raf1; //Name
        Rafi2 = Raf2; //account Number
        Rafi3 = Raf3; //account type
        Rafi4 = Raf4; //balence
    }

    // Function to calculate compound interest
    // Formula: A = P * (1 + r/100)^t
    double Alam2(int Rafi7, double Rafi8) {  //calcutaion
        double Rafi6 = Rafi4;   //rafi6 is ammount

        for (int i = 1; i <= Rafi7; i++) {
            Rafi6 = Rafi6 + (Rafi6 * Rafi8 / 100); //using the formula 
        }

        Rafi5 = Rafi6; //Updating final ammount with current ammount 
        return Rafi6;
    }

    // Function to display account info
    void Alam3() {
        cout << "Account Holder: " << Rafi1 << endl;
        cout << "Total Amount in Taka: " << Rafi5 << endl;
    }
};

int main() {
    Bank_account acc;

    // Assign initial values
    acc.Alam1("Rafi Alam", 12345, "Savings", 50000);

    int Rafi7; //year
    double Rafi8; //rate

    cout << "Enter number of years: ";
    cin >> Rafi7;

    cout << "Enter interest rate: ";
    cin >> Rafi8;

    // Calculate final amount
    acc.Alam2(Rafi7, Rafi8);

    // Display result
    acc.Alam3();

    return 0;
}