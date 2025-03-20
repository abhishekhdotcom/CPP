#include <iostream>
using namespace std;

// add function...
int add(int a, int b)
{
    cout << "Using function with 2 arguments." << endl;
    return a + b;
}

// add function...
int add(int a, int b, int c)
{
    cout << "Using function with 3 arguments." << endl;
    return a + b + c;
}

//cylinder volume function...
int volume(double r, int h)
{
    return (3.14* r * r * h);
}

//cube volume function...
int volume(int a){
    return (a*a*a);
}

// Rectaingle volume function...
int volume(int l, int b, int h){
    return (l*b*h);
}

int main()
{
    cout << "The sum of a + b  is: " << add(4, 5) << endl;
    cout << "The sum of a + b + c is: " << add(4, 5, 8) << endl;
    cout<<"The volume of cylinder is: "<<volume(3, 6)<<endl;
    cout<<"The volume of cube is: "<<volume(3)<<endl;
    cout<<"The volume of rectaingle is: "<<volume(3, 7, 6)<<endl;
    return 0;
}