#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter = 0;

public:
    // void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter the id of your item number " << counter + 1 << "\n-->\t";
    cin >> itemId[counter];
    cout << "Enter the price of your item " << counter + 1 << "\n-->\t";
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    // dukaan.initCounter();
    int n;
    cout << "How manny item have you buyed ? \n -->\t";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        dukaan.setPrice();
    }

    dukaan.displayPrice();
    return 0;
}