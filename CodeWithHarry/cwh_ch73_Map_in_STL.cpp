#include <iostream>
// #include<iterator>
#include <string>
#include <map>
using namespace std;

//  map is an associative array...

int main()
{
    map<string, int> marksMap;
    marksMap["Abhishekh"] = 65; // key and Value...
    marksMap["Roushan"] = 85;
    marksMap["Vikash"] = 79;
    marksMap["Ankit"] = 65;

    marksMap.insert({{"Kunal", 55}, {"aman", 85}});
    
    map<string, int>::iterator itr;
    for (itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout << (*itr).first<<" "<<(*itr).second<<endl;
    }

    return 0;
}