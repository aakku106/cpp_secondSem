#include <iostream>
using namespace std;
class Polygon
{
protected:
    int width, height;

public:
    void setdata(int w, int h)
    {
        width = w;
        height = h;
    }
};
class triangle : public Polygon
{
public:
    int area()
    {
        return (width * height / 2);
    }
};
class rectangle : public Polygon
{
public:
    int area()
    {
        return (width * height);
    }
};
int main()
{
    Polygon *p1, *p2;
    rectangle rect;
    triangle tri;
    p1 = &rect;
    p2 = &tri;
    p1->setdata(4, 5);
    p2->setdata(4, 5);
    cout << "Area of rectangle is: " << rect.area() << endl;
    cout << "Area of triangle is: " << tri.area() << endl;
    return 0;
}