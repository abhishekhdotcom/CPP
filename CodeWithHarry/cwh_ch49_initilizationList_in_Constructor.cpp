#include <iostream>
using namespace std;

/*
    class test{
        int a,b;
        public:
            Test(int a, int j) : a(i), b(j) {Constructor-body}
    };
*/
// Test class...
class Test
{
public:
    int a, b;
    Test(int i, int j) : a(i), b(j)
    {
        cout << "constructor call.";
        cout << "Value of a is: " << a << endl;
        cout << "Value of b is: " << b << endl;
    }
};

int main()
{
    Test t(4, 8);
    return 0;
}