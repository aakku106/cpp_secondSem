#include <iostream>
using namespace std;
template <class T>
T GetMax(T a, T b)
{
    return a > b ? a : b;
}

int main()
{
    int a = 1, b = 2, c;
    float w = 3, x = 3.6, y;
    char e = 'a', f = 'c', g;
    cout << "Largest among int is\t" << GetMax(a, b) << endl
         << "largest among float is\t" << GetMax(w, x) << endl
         << "largest among char is\t" << GetMax(e, f) << endl;
}