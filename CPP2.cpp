#include<iostream>

//namespace i can use same name but diffrent inputs an i have to call the name of the namespace only 
namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main(){
    using namespace first;

    //using std::cout;
    //using std::string; it is safe to declear what std function i am using in the using section 
    //this will save time for typing std:: every time i need to write the function name on only if i am using (using function)

    // The const Key word dose the same thing in C and make the compiler awar not to change 
    const double PI = 3.1416;
    const int Speed_light = 299792458;

    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << " cm";

    std::cout << first::x;

    // Namespaces

    int x = 0; 

    return 0; 
}