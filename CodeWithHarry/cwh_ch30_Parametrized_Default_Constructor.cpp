#include <iostream>
using namespace std;

// complex class...
class Complex
{
    int a, b;

public:
    // create Complex constuctor...
    Complex(int, int); // constructor Decleration...

    // display function...
    void display()
    {
        cout << "Your Number a is " << a << " and b is " << b << endl;
    }
};

Complex::Complex(int x, int y) // parametrized constructor...
{
    a = x;
    b = y;
}

// Point class...
class Point
{
    int x, y;

public:
    // Point constructor...
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    // display function...
    void displayPoint()
    {
        cout << "Your Number a is " << x << " and b is " << y << endl;
    }
};

int main()
{
    Complex cplx(6, 9);
    cplx.display();

    Point p(1, 1);
    p.displayPoint();

    Point q(3, 2);
    q.displayPoint();

    return 0;
}