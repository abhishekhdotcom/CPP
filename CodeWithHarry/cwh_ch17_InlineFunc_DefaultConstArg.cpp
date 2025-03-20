#include<iostream>
using namespace std;

// product function...
inline int product(int a, int b ){ //Inline function...
    return a*b;
}

// fixedDeposite function...
float fixedDeposite(int moneyDeposit, float intrest = 1.04){ //default value...
    return moneyDeposit * intrest;
}

int main()
{
     int a, b;
     cout<<"Enter first Number: ";
     cin>>a;
     cout<<"Enter second Number: ";
     cin>>b;
     cout<<"The product of a * b is: "<<product(a, b)<<endl;
     cout<<"The product of a * b is: "<<product(a, b)<<endl;
     cout<<"The product of a * b is: "<<product(a, b)<<endl;
     cout<<"The product of a * b is: "<<product(a, b)<<endl;
     cout<<"The product of a * b is: "<<product(a, b)<<endl;

    int money = 100000;
     cout<<"if you are deposit in bank account "<<money<<" you get return in one year: "<<fixedDeposite(money)<<endl;
     cout<<"for Employee: if you are deposit in bank account "<<money<<" you get return in one year: "<<fixedDeposite(money, 1.1);
    return 0;
}