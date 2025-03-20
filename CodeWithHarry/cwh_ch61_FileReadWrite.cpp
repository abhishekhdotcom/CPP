#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string name, content;
    cout << "Enter your name:";
    getline(cin, name);
    ofstream write("cwh_ch61_sample.txt"); // Create new file...
    write << "Hello mr." + name;           // Write in file...
    write.close();                         // close writing...

    ifstream read("cwh_ch61_sample.txt");
    while (read.eof()==0) // Read from file...
    {
        getline(read, content);
    }
    cout << "The content of in this file: " << content;
    read.close(); // close reading...

    return 0;
}