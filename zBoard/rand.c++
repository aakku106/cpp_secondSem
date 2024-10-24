#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    // Constructor to initialize coordinates
    Point(int xVal = 0, int yVal = 0)
    {
        x = xVal;
        y = yVal;
    }

    // Overloading the + operator to add two Point objects
    friend Point operator+(Point p1, Point p2)
    {
        Point p;
        p.x = p1.x + p2.x;
        p.y = p1.y + p2.y;
        return p;
    }

    // Function to display the point coordinates
    void display()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    Point p1(2, 3),
        p2(4, 5),
        p3 = p1 + p2; // Using the overloaded + operator

    p3.display(); // Output: (6, 8)

    return 0;
}
