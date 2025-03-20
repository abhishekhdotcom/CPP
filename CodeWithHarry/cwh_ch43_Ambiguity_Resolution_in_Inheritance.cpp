#include <iostream>
using namespace std;

// Base1 class...
class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

// Base2 class...
class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho aap?" << endl;
    }
};

// Derived class...
class Derived : public Base1,
                public Base2
{
    int a;

public:
    void greet()
    {
        Base2::greet();
    }
};

int main()
{
    Derived der;
    der.greet();
    return 0;
}