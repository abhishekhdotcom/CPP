#include <iostream>
#include <list>
using namespace std;

// display function...
void display(list<int> &lst)
{
    list<int>::iterator iter;
    for (iter = lst.begin(); iter != lst.end(); iter++)
    {
        cout << "value of list is: " << *iter << endl;
    }
}

int main()
{
    list<int> list1; // List of 0 length...
    // list<int> list2(5); // Empty list of size 5...

    list1.push_back(4);
    list1.push_back(8);
    list1.push_back(6);
    list1.push_back(27);
    list1.push_back(71);
    list1.push_back(9);
    list1.push_back(3);

    // list1.remove(6);//Rempve element specific index...
    // list1.sort(); // sort element...

    display(list1);

    return 0;
}