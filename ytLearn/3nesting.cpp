#include <iostream>
using namespace std;

class Binary
{
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones(void);
    void display(void);
};

void Binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void Binary ::chk_bin(void)
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

void Binary ::ones(void)
{
    chk_bin();
    cout << "\n";
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i)= '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    cout << "The ones complement of the binary number is " << s << endl; // 😙
}

void Binary ::display(void)
{
    cout << "The binary number is\t " << s << endl; // we can also direct emplement like we used in ones() in the above function 😙
    // for (int i = 0; i < s.length(); i++)  // This is also correct
    // {                                    // But the above one is more efficient
    //     cout                             // as it doesn't need to loop through the string
    //         << s.at(i);                                 // to get the length of the string
    // }                                            // every time
}

int main()
{
    Binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones();
    return 0;
}