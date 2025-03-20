#include <iostream>
using namespace std;
// BankDeposit class...
class BankDeposit
{
    int principal, year;
    float intrestRate, returnValue;

public:
    // create BankDeposit constructor...
    BankDeposit() {}
    BankDeposit(int p, int y, float r); // constructor initilization...
    BankDeposit(int p, int y, int r);   // constructor initilization...

    // show function...
    void show();
};

BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    intrestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intrestRate);
    }
}

BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    intrestRate = float(r) / 100; // typeCasting in float...
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intrestRate);
    }
}

void BankDeposit::show()
{
    cout << "principal amount was " << principal << endl
         << "Return value after " << year
         << " year is: " << returnValue << endl;
}

int main()
{
    BankDeposit bd1, bd2;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p y and r: ";
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p y and R: ";
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}