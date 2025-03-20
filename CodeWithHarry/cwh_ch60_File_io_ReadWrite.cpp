#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/*
The useful classes for working with file in c++ are:-
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived form fstreambase
*/

int main()
{
    string str1 = "Hi my name is abhishekh kumar and i am a student of a (BCA) Vocational course. \nI am full stack Deveoper";
    string str2;
    /* Opening files using constructor and writing it...*/
    // ofstream write("cwh_ch60_SampleFile.txt");
    // write << str1;

    /*Opening files using constructor and Reading it...*/
    ifstream read("cwh_ch58_Abstract_BaseClass.cpp");

    while (read.eof() == 0)
    {
    getline(read, str2);
    cout << str2;
    }

    return 0;
}