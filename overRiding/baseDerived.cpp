#include <iostream>
using namespace std;
class Base
{
public:
    void show()
    {
        cout << "Display of Base" << endl;
    }
};
class Base2
{
public:
    void show()
    {
        cout << "Display of Base2" << endl;
    }
};

class Derived : public Base,public Base2
{
// public:
//     void show()
//     {
//         cout << "Display of Derived" << endl;
//     }
};
int main()
{
    // Base b;
    // b.show();
    Derived d;
    d.Base::show();
    d.Base2::show();
   
    return 0;
}