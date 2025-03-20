#include <iostream>
using namespace std;

// A class...
class A
{
    int a;

public:
    void set_data(int a)
    {
        this->a = a; // this Keyword... 
    }

    void get_data()
    {
        cout << "The value of a is: " << a << endl;
    }
};

int main()
{
    A a1;
    a1.set_data(5);
    a1.get_data();
    return 0;
}