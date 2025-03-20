#include <iostream>
#include <string>
using namespace std;

// Harryclass...
template <class T> // template for curtom dataType...
class Harry
{
public:
    T data;
    // Harry constructor...
    Harry(T a) // T Accept any types of dataTypes...
    {
        data = a;
    }

    // diaplay1 function...
    void diaplay1()
    {
        cout << "This is Display1 function" << endl;
        cout << "The value of Data is: " << data << endl;
    }

    void display2();
};

// display2 function...
template <class T>        // T Accept any types of dataTypes...
void Harry<T>::display2() // :: scope resulation...
{
    cout << "This is Display2 function" << endl;
    cout << "The value of Data is: " << data << endl;
}

int main()
{
    Harry<string> h("Abhishekh kumar");
    h.diaplay1();
    cout << endl;
    h.display2();
    return 0;
}