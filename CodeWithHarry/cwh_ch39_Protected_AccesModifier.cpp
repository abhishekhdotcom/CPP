#include <iostream>
using namespace std;
// Base class...
class Base
{
protected:
    int a;

private:
    int b;
};

// Derived class...
class Derived : protected Base
{

};

int main()
{
    Base b;
    Derived d;
    // cout<<d.a; 
    return 0;
}