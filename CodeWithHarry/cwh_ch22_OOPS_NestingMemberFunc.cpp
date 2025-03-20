#include <iostream>
using namespace std;

// Binary class...
class Binary
{
    private:
    string s;
    void chk_bin(void);         // Decleration...

public:
    void read(void);            // Decleration...
    void ones_compliment(void); // Decleration...
    void display(void);         // Decleration...
};

void Binary::read(void)
{
    cout << "Enter a binary number: ";
    cin >> s;
}

void Binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void Binary::ones_compliment(void)
{
    chk_bin(); // check it is Binery or not...

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }

        else
        {
            s.at(i) = '0';
        }
    }
}

void Binary::display(void)
{
    ones_compliment(); // change number 0-->1 and 1-->0...

    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    Binary bin;
    bin.read();
    // bin.chk_bin();
    cout << "Displaying your Original binary number." << endl;
    bin.display();
    // bin.ones_compliment();
    cout << "Displaying your binary number after change." << endl;
    bin.display();
    return 0;
}