#include <iostream>
using namespace std;

// // funcAverage1 function...
// float funcAverage1(int a, int b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }

// // funcAverage2 function...
// float funcAverage2(int a, float b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }

// // funcAverage2 function...
template <class T1, class T2> // use template for various dataTypes...
float funcAverage2(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

template <class T> // use template for any dataTypes...
void swaping(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    float a;
    a = funcAverage2(5, 2.4);
    cout << "The average of a and b is: " << a << endl;

    int x = 4, y = 8;
    cout << "Value of x and y Before swapping is: " << x << " and " << y << endl;
    swaping(x, y);
    cout << "Value of x and y After swapping is: " << x << " and " << y << endl;
    return 0;
}