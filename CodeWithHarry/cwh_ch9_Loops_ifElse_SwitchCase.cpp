#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Tell me your age: ";
    cin >> age;

    // Selection control structure: if else-if else ladder...
    if ((age < 18) && (age > 0))
    {
        cout << "You are Not eligable for Voating." << endl;
    }
    else if (age == 18)
    {
        cout << "Hurray You are Adult Now." << endl;
    }
    else
    {
        cout << "Yoy are Eligable for Voating." << endl;
    }

    // Selection control structure: Switch case...
    switch (age)
    {
    case 18:
        cout << "Hurray You are Eighteen Now." << endl;
        break;
    case 55:
        cout << "Yoy are Senior citizen." << endl;
        break;

    default:
        cout << "Hello";
        break;
    }

    return 0;
}