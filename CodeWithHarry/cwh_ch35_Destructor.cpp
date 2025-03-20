#include <iostream>
using namespace std;

// Destructor naver takes any argument nor does it return any value...
// Num class...
int count = 0; // global variable...
class Num
{
public:
    // create Num constructor...
    Num()
    {
        count++;
        cout << "this is the time when constructor is call for onj number " << count << endl;
    }

    // create Num destructor...
    ~Num()
    {
        cout << "This is the time when destructor is call for object number " << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main function" << endl;
    cout << "creating first n1 objects" << endl;
    Num n1;
    {
        cout << "Entring this block" << endl;
        cout << "creating two more object" << endl;
        Num n2, n3;
        cout << "Exitong this block" << endl;
    }
    cout << "Back to main" << endl;

    return 0;
}