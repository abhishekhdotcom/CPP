#include <iostream>
using namespace std;

// Employee class...
class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 125;
        cout << "Enter Employee id: ";
        cin >> id;
    }
    void getId(void)
    {
        cout << "The Id of Employee is: " << id << endl;
    }
};

int main()
{
    // Employee roushan, vikash, ankit, aman;
    // roushan.setId();
    // roushan.getId();

    Employee audi[5]; //Array of object...
    for (int i = 0; i < 5; i++)
    {
        audi[i].setId();
        audi[i].getId();
    }

    return 0;
}