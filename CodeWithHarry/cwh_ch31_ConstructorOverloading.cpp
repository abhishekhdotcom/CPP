#include <iostream>
using namespace std;

// Complex class...
class Complex
{
    int a, b;

public:
    // Create Complex constructor...
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex(int x)
    {
        a = x;
        b = 0;
    }

    Complex()
    {
        a = 0;
        b = 0;
    }

    // PrintNumber function...
    void printNumber()
    {
        cout << "your number a is " << a << " and b is " << b << endl;
    }
};

int main()
{
    Complex c1(4, 6);
    c1.printNumber();

    Complex c2(9);
    c2.printNumber();

    Complex c3;
    c3.printNumber();

    return 0;
}