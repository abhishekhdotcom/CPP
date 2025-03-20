#include <iostream>
using namespace std;

// Base1 class...
class Base1
{
protected:
    int base1;

public:
    void set_base1(int a)
    {
        base1 = a;
    }
};

// Base2 class...
class Base2
{
protected:
    int base2;

public:
    void set_base2(int a)
    {
        base2 = a;
    }
};

// Derived class...
class Derived : public Base1,public Base2
{
public:
    void show()
    {
        cout << "The value of Base1 is: " << base1 << endl;
        cout << "The value of Base2 is: " << base2 << endl;
        cout << "The sum of Base1 and Base2 is: " << base1 + base2 << endl;
    }
};

int main()
{
    Derived d;
    d.set_base1(44);
    d.set_base2(88);
    d.show();
    return 0;
}