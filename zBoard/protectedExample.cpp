#include <iostream>
using namespace std;

class Base
{
protected:
    int protectedValue;

public:
    Base()
    {
        protectedValue = 0;
    }

    void setProtectedValue(int val)
    {
        protectedValue = val;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Protected Value in Derived class: " << protectedValue << endl;
    }
};

int main()
{
    Derived obj;
    obj.setProtectedValue(10); // Public function can access protected member indirectly
    obj.show();                // Protected member accessed via derived class method

    // obj.protectedValue = 20; // Error: protectedValue is not accessible directly

    return 0;
}
