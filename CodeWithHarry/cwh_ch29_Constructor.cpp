#include <iostream>
using namespace std;

//  complex class...
class Complex
{
    int a, b;

public:
    // create Complex Constructor...
    Complex(void); // constructor decleration...

    // display function...
    void display()
    {
        cout << "Your Number \"a\" is " << a << " and \"b\" is " << b << endl;
    }
};

Complex::Complex(void) // default construction Initilization...
{
    a = 10;
    b = 20;
}

int main()
{
    Complex cplx;
    cplx.display();
    return 0;
}