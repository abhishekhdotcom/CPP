#include <iostream>
using namespace std;

// --------Function Prototype --------
// type function-name (arguments);
int sum(int a, int b);
void g();

int main()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "The sum is " << num1 << " + " << num2 << ": " << sum(num1, num2)<<endl; // sum function calling...
    g();
    return 0;
}

// sum function...
int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// g function...
void g(){
    cout<<"Hello i am g function";
}