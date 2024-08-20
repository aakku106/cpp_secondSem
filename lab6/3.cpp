#include <iostream>
using namespace std;
class Base
{
public:
    virtual void show()
    {
        cout << "Base class" << endl;
    }
};
class Derived : public Base
{
public:
    void show()
    {
        cout << "Derived class" << endl;
    }
};
int main()
{
    Base *b;
    Derived d;
    b = &d; 
    b->show();
    return 0;
}

/*
pure virtual function
virtual function that ends with =0 is called pure virtual function

virtual void show()=0;
-> decleared in base class and have not been defined





*/