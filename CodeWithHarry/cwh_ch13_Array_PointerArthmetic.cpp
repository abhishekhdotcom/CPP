#include <iostream>
using namespace std;

int main()
{
    // Array Examples...

    int marks[5] = {50, 88, 75, 68, 77};

    // Marks print...
    cout << "----------Marks Print----------" << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    cout << "Marks of idx 1 update new Marks." << endl;
    marks[1] = 99;
    cout << marks[1] << endl
         << endl;

    // Marks Print using For Loop...
    cout <<endl<< "----------Marks Print using For Loop----------" << endl<< endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "The value of Marks idx " << i << " is: " << marks[i] << endl;
    }

    // Marks Print using While Loop...
    cout <<endl<< "----------Marks Print using While Loop----------" << endl
         << endl;
    int m = 0;
    while (m < 5)
    {
        cout << "The value of Marks idx " << m << " is: " << marks[m] << endl;
        m++;
    }

    // Marks Print using Do-While Loop...
    cout <<endl<< "----------Marks Print using Do-While Loop--------" << endl<< endl;
    int n = 0;
    do
    {
        cout << "The value of Marks idx " << n << " is: " << marks[n] << endl;
        n++;
    } while (n < 5);

    // Pointers and Array...
    cout<<endl<<"-------Pointers and Array--------"<<endl;
    int *p = marks;
    cout<<"The value of marks[0] is: "<<*p<<endl;
    cout<<"The value of marks[1] is: "<<*(p+1)<<endl;
    cout<<"The value of marks[2] is: "<<*(p+2)<<endl;
    cout<<"The value of marks[3] is: "<<*(p+3)<<endl;
    cout<<"The value of marks[4] is: "<<*(p+4)<<endl;

    return 0;
}