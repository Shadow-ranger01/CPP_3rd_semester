#include <iostream>
using namespace std;

class pattern{

    private:
      int i , j;

      public:
        void patterns(){
            for(i=5; i >= 1; i--){
                for (j = 5; j >= i; j--)
                {
                    cout << i;
                }
               cout << "\n"; 
            }
        }

};

int main (){

    pattern p;

    p.patterns();

    return 0;
}