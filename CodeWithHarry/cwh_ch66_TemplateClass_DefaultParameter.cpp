#include <iostream>
using namespace std;

// Abhi class...
template <class T1 = int, class T2 = float, class T3 = char> // Default template dataType...
class Abhi
{
public:
    T1 a;
    T2 b;
    T3 c;

    // Abhi cunstructor...
    Abhi(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }

    // display function...
    void display()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
    }
};

int main()
{
    Abhi<> a1(4, 8.5, 'A');
    a1.display();

    return 0;
}