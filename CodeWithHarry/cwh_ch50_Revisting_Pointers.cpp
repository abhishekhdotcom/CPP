#include <iostream>
using namespace std;

int main()
{
    // Basic Examples...
    int a = 4;
    int *ptr = &a;
    cout << "The value of a is: " << *(ptr) << endl;

    // new Keyword...
    int *p = new int(40);
    cout << "The value at address p is: " << *(p) << endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout << "The value of arr[0] is: " << arr[0] << endl;
    cout << "The value of arr[1] is: " << arr[1] << endl;
    cout << "The value of arr[2] is: " << arr[2] << endl;

    // delete operator...
    // delete[] arr;
    
    return 0;
}