#include <iostream>
using namespace std;

// factorial function...
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    int a;
    cout << "Enter number to print factoril: ";
    cin >> a;
    cout << "The factorial of " << a << " is: " << factorial(a);
    return 0;
}