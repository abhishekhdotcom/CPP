#include <iostream>
using namespace std;

int c = 45; // global variable...

int main()
{
    int a, b, c;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    c = a + b;
    cout << "The Sum is: " << c << endl;
    cout << "The global c is: " << ::c << endl; //:: scope resulation variable...

    // ============== Literals float , Long double ================

    float d = 34.5F;       // F,f for floating number...
    long double e = 34.5L; // L,l for long double number...
    cout << endl;

    cout << "The size of 34.4 is: " << sizeof(34.4) << endl; // Bydefault double...
    cout << "The size of 34.4f is: " << sizeof(34.4f) << endl;
    cout << "The size of 34.4F is: " << sizeof(34.4F) << endl;
    cout << "The size of 34.4l is: " << sizeof(34.4l) << endl;
    cout << "The size of 34.4L is: " << sizeof(34.4L) << endl;

    cout << endl;

    cout << "The value of d is " << d << endl;
    cout<< "The value of e is " << e << endl<<endl;

    // ============== Reference variables ================

    float x = 455;
    float &y = x; // y refer value of x...
    cout<<x<<endl;
    cout<<y<<endl<<endl;

    // ============== Typecasting ================

    int val1 = 68;
    float val2 = 78.5;

    cout<<"The value of Val1 is: "<<(float)val1<<endl;
    cout<<"The value of Val2 is: "<<(int)val2;

    return 0;
}