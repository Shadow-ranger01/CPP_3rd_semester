#include <iostream>
using namespace std;

class rafi{

    private:
      int a = 0;
      int b = 0;

      public:
      void assigned(int A, int B){
           a = B;
           b = A;
      }
      void after_swap(){
        cout << "After swap = " << a << " " << b ;
      }
};

int main (){

    rafi a1;

    int x,y;

    cout << "Input a and b " << endl;
    cin >> x >> y;

    a1.assigned(x,y);
    a1.after_swap();
   
    return 0;
}