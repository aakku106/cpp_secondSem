#include <iostream>
using namespace std;
class polygon
{
protected:
    int width, height;

public:
    void set_values(int a, int b)
    {
        width = a;
        height = b;
    }
};
class rectangle : public polygon
{
public:
    int area()
    {
        return (width * height);
    }
};
class triangle: public polygon{
    public:
     int area()
     {
        return(width*height/2);
     }
};
int main()
{
    polygon *p1, *p2;
    rectangle rect;
    triangle tri;
    p1=&rect;
    p2=&tri;
    p1->set_values(4,5);
    p2->set_values(4,5);
    cout<<"Area of rectangle is: "<<rect.area()<<endl;
    cout<<"Area of triangle is: "<<tri.area()<<endl;    
    return 0;
}