#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 0;
    try
    {
        if (b == 0)
        {
            throw b;
        }
        else
        {
            cout << a / b << endl;
        }
    }

    catch (int i)
    {
        cout << i << endl;
    }

    try
    {
        throw 20;
    }
    catch (int e)
    {
        cout << "An exception occurred. Exception Nr. " << e << '\n';
    }
    return 0;
}