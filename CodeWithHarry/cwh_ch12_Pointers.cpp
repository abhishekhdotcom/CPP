#include <iostream>
using namespace std;

int main()
{
    // What is Pointers in c++?
    // ---> Dtata type which holds the address of other data types.

    int a = 5;
    int *b = &a; // b hold Address of a...
    // & ---> (Address of) Operator.
    cout << "The Address of a is: " << &a << endl;
    cout << "The Address of a Hold b is: " << b << endl;

    // * ---> (Value at) Dereference Operator.
    cout << "The value at Address b is: " << *b << endl;

    // Pointer to Pointer...
    int **c = &b; // c hold Address of b...
    cout << "The Address of b Hold c is: " << c << endl;
    cout << "The Address of other variavle hold b Address hold c is: " << *c << endl;
    cout << "The value at Address  value at(Value(c)) is: " << **c << endl;

    return 0;
}