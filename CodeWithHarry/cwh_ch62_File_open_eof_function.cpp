#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string str;

    ofstream write;
    write.open("cwh_ch62_sample.txt");
    write << "This is me Abhi \ni am full stack developer.";
    write.close();

    ifstream read;
    // read.open("cwh_ch62_sample.txt");
    read.open("cwh_ch53_thisPointer_in.cpp");
    while (read.eof() == 0) // check file is empty or not...
    {
        getline(read, str);
        cout << str << endl;
    }
    read.close();


    return 0;
}