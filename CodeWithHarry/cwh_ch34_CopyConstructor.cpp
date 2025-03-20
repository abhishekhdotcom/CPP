#include <iostream>
using namespace std;

// Number class...
class Number
{
    int a = 0;

public:
    // create number consrtuctor...
    Number() {}     // default constructor...
    Number(int num) // parametrized constructor...
    {
        a = num;
    }

    Number(Number &obj) // copy constructor...
    {
        cout << "-------Copy constructor call-------" << endl;
        a = obj.a;
    }

    // display function...
    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x(55), y, z(45);
    x.display();
    y.display();
    z.display();

    Number z1(x); // copy value of x
    z1.display();

    return 0;
}