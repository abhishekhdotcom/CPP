#include <iostream>
using namespace std;

// shop class...
class Shop
{
    int itemId[100];
    int itemPrice[155];
    int counter;

public:
    void initCounter(void)
    {
        counter = 0;
    }

    void setPrice(void);
    void displayPrice(void);

    void getCounter(void){
        cout<<"Number of items you are added: "<<counter<<endl;
        cout<<"--------------------------------------"<<endl;
    }
};

void Shop::setPrice(void)
{
    cout << "Enter Id of Your Item: ";
    cin >> itemId[counter];
    cout << "Enter price of Your Item: ";
    cin >> itemPrice[counter];
    counter++;
}

void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Price of Item: " << itemPrice[i] << endl;
        cout << "Id of item: " << itemId[i] << endl;
    }
}

int main()
{
    Shop s;
    s.initCounter();

    char ch;
    do
    {
        s.setPrice();
        cout << "do you want to continue (y/n)? : ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');

    cout << "--------------------------------------" << endl;
    s.getCounter();
    s.displayPrice();
    return 0;
}