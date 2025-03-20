#include <iostream>
#include <vector>
using namespace std;

// display function...
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << "value of index " << i << " is: " << v.at(i) << endl;
    }
}

int main()
{
    vector<int> vect1; // dynamic size of vector like array...
    int elm, size;
    cout << "Enter the size of Vector: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "enter an element to add in this vector: ";
        cin >> elm;
        vect1.push_back(elm); // add element from Back...
    }

    // vect1.pop_back(); // delete element from end...
    cout << "-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -" << endl;
    display(vect1);

    cout << "Insert element specific position." << endl;
    vector<int>::iterator iter = vect1.begin();
    vect1.insert(iter+2, 825);
    display(vect1);

    return 0;
}