#include <iostream>
using namespace std;

// Structure...
typedef struct employee
{
    string name;
    int eId;
    char favChar;
    float salary;
}empl;

// Union...
union money
{
    int rice;
    char car;
    float pound;
};

int main()
{
    // ----------Structure----------
    empl abhi;
    abhi.name = "Abhishekh Kumar";
    abhi.eId = 5;
    abhi.favChar = 'A';
    abhi.salary = 800000;

    cout << "Abhi Employee Name: " << abhi.name << endl;
    cout << "Abhi Employee Id: " << abhi.eId << endl;
    cout << "Abhi Favroute char: " << abhi.favChar << endl;
    cout << "Abhi salary: " << abhi.salary << endl<<endl;

    empl rous;
    {
        rous.name = "Roushan Kumar";
        rous.eId = 15;
        rous.favChar = 'r';
        rous.salary = 600000;
    };

    cout << "Rous Employee Name: " << rous.name << endl;
    cout << "Rous Employee Id: " << rous.eId << endl;
    cout << "Rous Favroute char: " << rous.favChar << endl;
    cout << "Rous salary: " << rous.salary << endl<<endl;

    // ----------Union----------
    union money m;
    m.rice = 45;
    cout<<"Rice: "<<m.rice<<endl<<endl;

    // ----------Enum----------
    enum meal{breakfast, lunch, dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    cout<<"Lunch ewual to 2: "<<(lunch==2);
    return 0;
}