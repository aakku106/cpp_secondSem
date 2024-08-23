#include <iostream>
using namespace std;

class Shape
{

protected:
    double length, breadth;

    Shape()
    {
        length = 0;
        breadth = 0;
    }
    
};

class Rectangle : public Shape
{

public:
    setData(double l, double b)
    {
        cout << "Enter length and breadth of rectangle: ";
        cin >> length >> breadth;
    }
};

class triangle : public Shape
{

public:
    setData(double l, double b)
    {
        cout << "Enter length and breadth of triangle: ";
        cin >> length >> breadth;
    }
};
