#include <iostream>
using namespace std;

//  Base class...
class Base
{
    int data1; // bydefault private it is not inheritable...
public:
    int data2;

    void setData();
    int getData1();
    int getData2();
};

void Base::setData(void)
{
    data1 = 10;
    data2 = 20;
}

int Base::getData1()
{
    return data1;
}

int Base::getData2()
{
    return data2;
}

// Derive class...
class Derived : public Base
{
    int data3; // bydefault private it is not inheritable...

public:
    void process();
    void display();
};

void Derived::process()
{
    data3 = data2 * getData1();
}

void Derived::display()
{
    cout << "Value of data1 is " << getData1() << endl;
    cout << "Value of data2 is " << data2 << endl;
    cout << "Value of data3 is " << data3 << endl;
}

int main()
{
    Derived d;
    d.setData();
    d.process();
    d.display();
    return 0;
}