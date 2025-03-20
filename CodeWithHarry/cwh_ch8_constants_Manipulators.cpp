#include <iostream>
using namespace std;

int main()
{
    int a = 34;
    cout << "The value of a was: " << a << endl;
    a = 45;
    cout << "The value of a is: " << a << endl;

    // Constant of c++...
    const int c = 3; // Not changable...
    cout << "The value of c was: " << c << endl;
    // c = 45; //Throw error bcz c is Constant...
    cout << "The value of c is: " << c << endl;

    // Mainpulators in c++...
    int x = 3, y = 45, z = 1255;
    cout<<"The value of without setw() is: "<<x<<endl;
    cout<<"The value of without setw() is: "<<y<<endl;
    cout<<"The value of without setw() is: "<<z<<endl;

    // cout<<"The value of with setw() is: "<<setw(4)<<x<<endl;
    // cout<<"The value of with setw() is: "<<setw(4)<<y<<endl;
    // cout<<"The value of with setw() is: "<<setw(4)<<z<<endl;

    return 0;
}