#include <iostream>
using namespace std;

// Base1 class...
class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor call." << endl;
    }

    void print_data1(void)
    {
        cout << "The value of data1 is: " << data1 << endl;
    }
};

// Base2 class...
class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor call." << endl;
    }

    void print_data2(void)
    {
        cout << "The value of data1 is: " << data2 << endl;
    }
};

// Derived class...
class Derived : public Base1, public Base2
{
    int derived1, derived2; // default private

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor call." << endl;
    }

    void print_data_derived(void)
    {
        cout << "The value of derived1 is: " << derived1 << endl;
        cout << "The value of derived2 is: " << derived2 << endl;
    }
};

int main()
{
    Derived abhi(1, 2, 3, 4);
    abhi.print_data1();
    abhi.print_data2();
    abhi.print_data_derived();
    return 0;
}