#include <iostream>
using namespace std;

// Vector class...
template <class T> // Template custom variable...
class Vector
{
public:
    T *arr;
    int size;
    // Vector COnstructor...
    Vector(int m)
    {
        size = m;
        arr = new T[size];
    }

    // sum function...
    T dotProduct(Vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    Vector <float>v1(3);
    v1.arr[0] = 4.4;
    v1.arr[1] = 3.8;
    v1.arr[2] = 1.9;

    Vector <float>v2(3);
    v2.arr[0] = 1.8;
    v2.arr[1] = 7.6;
    v2.arr[2] = 1.8;
    float a = v1.dotProduct(v2);
    cout << a;
    return 0;
}