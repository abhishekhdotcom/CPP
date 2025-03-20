#include <iostream>
using namespace std;

// Base class...
class BaseClass
{
public:
    int var_base = 0;

    void display()
    {
        cout << "This is BaseClass: " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 0;
    void display()
    {
        cout << "This is BaseClass: " << var_base << endl;
        cout << "This is DerivedClass: " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_Ptr;
    BaseClass b1;

    DerivedClass d1;
    base_Ptr = &d1;

    base_Ptr->var_base = 45;
    // base_Ptr->var_derived = 88; //cant access

    d1.var_derived = 88;
    d1.display();

    return 0;
}