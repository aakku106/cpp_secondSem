#include <iostream>
using namespace std;
class Rectangle
{
private:
    int len, bre;

public:
    Rectangle(int, int);

    void area()
    {
        cout << "The area of the rectangle is " << len * bre << endl;
    }
};
Rectangle::Rectangle(int len, int bre)
{
    this->len = len;
    this->bre = bre;
}

int main()
{
    Rectangle r1(5, 6);
    Rectangle *R2 = new Rectangle(10, 20);
    r1.area();
    R2->area();
    return 0;
}
