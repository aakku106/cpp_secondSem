#include <iostream>
using namespace std;
double a, b;

void division()
{
    if (b == 0)
    {
        throw b;
    }
    cout << "division is\t" << a / b << endl;
}
int main()
{
    cout << "Enter two numbers\t";
    // double a, b;
    cin >> a >> b;
    try
    {
        division();
    }
    catch (double exp)
    {
        cout << "cant divide by 0" << endl;
        main();
    }
}