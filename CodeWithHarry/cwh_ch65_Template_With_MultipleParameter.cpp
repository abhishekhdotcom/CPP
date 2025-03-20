#include <iostream>
#include <string>
using namespace std;
/*
    Syntax:- template<class T1, class t2>
    class nameOfClass{
     //body
    }
*/

template <class T1, class T2, class T3, class T4> // set custopm dataType...
class MyClass
{
public:
    T1 data1;
    T2 data2;
    T2 data3;
    T2 data4;

    // MyClass constructor...
    MyClass(T1 a, T2 b, T3 c, T4 d)
    {
        data1 = a;
        data2 = b;
        data3 = c;
        data4 = d;
    }

    // display function...
    void display()
    {
        cout << "-------------------------------------" << endl;
        cout << "Your Name: " << this->data2 << endl;
        cout << "Your Stream: " << this->data4 << endl;
        cout << "Your Roll Number: " << this->data1 << endl;
        cout << "Your section: " << this->data3 << endl;
    }
};

int main()
{
    string name;
    int rollNo;
    char section;
    string stream;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your Stream: ";
    getline(cin, stream);
    cout << "Enter Roll Number: ";
    cin >> rollNo;
    cout << "Enter your Section: ";
    cin >> section;

    MyClass<int, string, char, string> obj(rollNo, name, section, stream);
    obj.display();
    return 0;
}