#include <iostream>
using namespace std;
class Base
{
public:
    virtual void show(void)
    {
        cout << "this is base class\n";
    }
};

class Derived1 : virtual public Base
{
public:
    void dot(void)
    {
        cout << "this is derived1\n";
    }
};

class Derived2 : virtual public Base
{
public:
    void doo(void)
    {
        cout << "this is output of base  2\n";
    }
};

class CallAll : public Derived1, public Derived2
{
public:
    void call(void)
    {
        cout << "shall call all\n";
    }
};
int main()
{
    CallAll cc;
    cc.show();
    cc.dot();
    cc.doo();
    cc.call();
}