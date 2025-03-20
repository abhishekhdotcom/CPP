#include <iostream>
using namespace std;

// sum function...
int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// swap function...
// --------call by value----------
void swap(int a, int b)
{ // this is not swapped...
    int temp = a;
    a = b;
    b = temp;
}

// swapPointer function
// ----------call By Reference Pointers-----------
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// swapReferVar function
// ----------call By Reference using C++ reference Variable-----------
void swapReferVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}



int main()
{
    int a = 4, b = 5;
    cout << "the sum of 4 and five is: " << sum(4, 5) << endl;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    // swap(a, b); //this can't swap a and b values...
    // swapPointer(&a, &b); //this is swap a nd b using pointer reference...
    swapReferVar(a, b); //this is swap a nd b using reference variable...
    cout << "The value of a is " << a << " and the value of b is " << b << endl;

    return 0;
}