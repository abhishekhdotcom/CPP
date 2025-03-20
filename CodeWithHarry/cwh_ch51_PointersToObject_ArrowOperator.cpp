#include <iostream>
using namespace std;

// complex class...
class Complex
{
    int real, imeginary;

public:
    void get_data()
    {
        cout << "The real part is " << real << endl;
        cout << "The real part is " << imeginary << endl;
    }

    void set_data(int a, int b)
    {
        real = a;
        imeginary = b;
    }
};

int main()
{
    Complex c1;
    Complex *ptr1 = &c1;
    (*ptr1).set_data(1, 88);
    (*ptr1).get_data();

    // Arrow Operator...
    cout << "Using Arrow -> Operator" << endl;
    Complex *ptr2 = new Complex;
    ptr2->set_data(1, 88);
    ptr2->get_data();
    return 0;
}