#include <iostream>
using namespace std;
// ------Base class------
// Employee class...
class Employee
{
    int id; // bydefault private...

public:
    float salary;
    Employee() {} // default constructor...
    Employee(int empId)
    {
        id = empId;
        salary = 25.0;
    }
};

// ------Derived class------
// Derived class syntax...
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
  class members/method/etc...
}
*/
class Programmer : public Employee
{
public:
    int langCode = 105;
    Programmer(int empId)
    {
        salary = 25.0;
    }
};

int main()
{
    Programmer abhi(1), roushan(2);
    cout << abhi.salary << endl;
    cout << roushan.salary << endl;
    cout << abhi.langCode << endl;
    cout << roushan.langCode << endl;
    return 0;
}