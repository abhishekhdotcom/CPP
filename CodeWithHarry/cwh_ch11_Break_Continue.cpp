#include<iostream>
using namespace std;

int main()
{
    // Break statment...
    for (int i = 1; i <= 5; i++)
    {
        if (i==3)
        {
            break;
        }
        cout<<i<<endl;
    }
    cout<<endl;
    
    // Continue statment...
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;
        }
        cout<<i<<endl;
        
    }
    

    return 0;
}