#include <iostream>
using namespace std;
// int count; // Global variable <yo rakhda ni tai tarrika ley run hunxa hehe😁 >
class Employee
{
public:
    int id;
    static int count; // static data member of class Employee.
    void setData(void)
    {
        cout << "Enter the id of employee: \n-->\t";
        cin >> id;
        count++;
        // cout << "Enter the salary of employee: ";
    }
    void getData(void)
    {
        cout << "The id of this employee is \t" << id << endl
             << "Employee number: " << count << endl;
    }

    static void getCount(void) // static member function
    {
        cout << "The value of count is " << count << endl;
    }
};

int Employee::count; // Default value is 0
int main()
{

    Employee ccn, aakku, adarasha;
    ccn.setData();
    ccn.getData();
    Employee::getCount();

    aakku.setData();
    aakku.getData();
    Employee::getCount();

    adarasha.setData();
    adarasha.getData();
    Employee::getCount();
    return 0;
}