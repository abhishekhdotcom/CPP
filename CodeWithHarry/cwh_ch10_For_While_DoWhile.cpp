// *********** Loops in c++ ************
// There are 3 types of loops in c++
/*
   1. For loop
   2. While loop
   3. do-While loop
*/

#include <iostream>
using namespace std;

int main()
{

    //    For Loop...
    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }

    // While loop...
    int i = 1;
    while (i <= 5)
    {
        cout << "Hello i am While loop." << endl;
        i++;
    }

    // do-while loop...
    int a = 1;
    do
    {
        cout << "i am Do-While loop." << endl;
        a++;
    } while (a <= 10);

    // Q.1 print table

    int b = 1, num;
    cout << "Enter number for Writing table: ";
    cin >> num;
    do
    {
        cout << num << "*" << b << "= " << b * num << endl;
        b++;
    } while (b <= 10);

    return 0;
}