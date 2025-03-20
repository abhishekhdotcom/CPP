#include <iostream>
using namespace std;

int glo = 55; // global variable...
// sum function...
void sum()
{
    int a;
    a = 91;
    cout << "This is Sum function " << glo;
    cout << "\nThis is Sum function value of a is " << a;
}

int main()
{
    // int a = 4;
    // int b = 5;
    int glo = 71;     // Local variable...
    glo = 88;         // change only local variable values...
    int a = 4, b = 5; // Recommended...
    float pi = 3.14;
    char c = 'd';
    bool bol = a == b;
    sum(); //function calling...
    cout << "\nThis is glo value " << glo;
    cout << "\nThis is Video number 4. \nthe value of a is " << a << "\nThe value of b is " << b;
    cout << "\nThe value of PI is " << pi;
    cout << "\nThe value of c is " << c;
    cout << "\na and b is Equal: " << bol;
    return 0;
}