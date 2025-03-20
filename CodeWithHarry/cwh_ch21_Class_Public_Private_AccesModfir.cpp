#include <iostream>
using namespace std;

//  Employee class...
class Employee
{
private:
    int a, b, c;

public:
    int d, e;

    void setData(int a1, int b1, int c1); // Decleration...

    int getData()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
        cout << "The value of d is: " << d << endl;
        cout << "The value of e is: " << e << endl;
    }
};

void Employee::setData(int a1, int b1, int c1) // Initilize...
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee emp;
    emp.d = 2;
    emp.e = 6;
    emp.setData(4, 8, 7);
    emp.getData();
    return 0;
}