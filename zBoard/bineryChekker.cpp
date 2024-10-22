#include <iostream>
using namespace std;
class Binary
{
    string s;
    void checkBinary();
    void displayBinary();
    void complementBinary();

public:
    void GetBinary();
};
int main()
{
    Binary b;
    b.GetBinary();
}
void Binary::GetBinary()
{
    cout << "Enter the binary number\t ";
    cin >> s;
    checkBinary();
}
void Binary::checkBinary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "The entered number is not a Binary Number" << endl;
            exit(1);
        }
    }
    displayBinary();
}
void Binary::displayBinary()
{
    cout << "The binary Number Entered is\t" << s << endl;
    complementBinary();
}
void Binary::complementBinary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }

        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
    cout << "The complement of binary is\t" << s << endl;
}
