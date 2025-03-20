// There are 2 types of Header files...
/*
1. System Header files: It comes with the compiler.
2. user defined Header files: It is written by the Programmers.
*/

#include <iostream> //This is System Header file...
using namespace std;

int main()
{
    int a = 4, b = 5;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "Followings are the types of Operators in C++" << endl;
    cout<<"============================================="<<endl;
    // Arithmetic Operators:-
    cout << "The value of a + b is: " << a + b << endl;
    cout << "The value of a - b is: " << a - b << endl;
    cout << "The value of a * b is: " << a * b << endl;
    cout << "The value of a / b is: " << a / b << endl;
    cout << "The value of a % b is: " << a % b << endl;
    cout << "The value of a++ is: " << a++ << endl;
    cout << "The value of a-- is: " << a-- << endl;
    cout << "The value of ++a is: " << ++a << endl;
    cout << "The value of --a is: " << --a << endl;
    return 0;
}