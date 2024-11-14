#include <iostream>
using namespace std;
class Person
{
    int age;
    string pass;

public:
    string name;
    void setData(int a, string p)
    {
        age = a;
        pass = p;
        // cout<<age; // only accessed from within class.
    }
};
int main()
{
    Person p;
    p.name = "Aakku";
    p.setData(16, "@aa123");
    cout << p.name << endl; //  can access from outside of class.
    // cout << p.age << p.pass; // cant access from outside of class.
    return 0;
}
