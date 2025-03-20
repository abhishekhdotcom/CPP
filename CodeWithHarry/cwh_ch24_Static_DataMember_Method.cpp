#include <iostream>
using namespace std;

// Employee class...
class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter Employee id: ";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of Employee No." << count << " is: " << id << endl;
    }

    static void gatCount(void)
    {
        cout << "The  Number of Employee is: " << count;
    }
};

// count static data member...
int Employee::count; // Default value is 0.

main()
{
    Employee emp;

    char ch;
    do
    {
        emp.setData();
        emp.getData();
        cout << "Doy you want to continue(y/n)?: ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
    emp.gatCount(); // count Number of Employees...

    return 0;
}