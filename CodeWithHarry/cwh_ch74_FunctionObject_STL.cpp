#include <iostream>
// #include<array>
#include <algorithm>
using namespace std;

// Function Object: Function wrapped in a class so that it available like an Object...

int main()
{
    int arr[] = {
        31,
        42,
        86,
        18,
        99,
        64,
        37,
    };
    sort(arr, arr+7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}