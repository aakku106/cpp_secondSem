#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length, breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    };
    friend int area(Rectangle r);
};
int area(Rectangle r)
{
    return r.length * r.breadth;
}
int main()
{
    Rectangle r(2, 2);
    cout << "the area of Reacangle is: " << area(r);
}
