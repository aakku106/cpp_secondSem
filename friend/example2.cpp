#include <iostream>
using namespace std;

class Box
{
private:
    double length;
    double width;
    double height;

public:
    Box(double l = 0, double w = 0, double h = 0)
    {
        length = l;
        width = w;
        height = h;
    }

    // Declaring the friend function
    friend double volume(Box box);
};

// Definition of the friend function
double volume(Box box)
{
    return box.length * box.width * box.height;
}

// double Box::volume() // volume is not the member of class box so it throw error

int main()
{
    Box Box(1.5, 1, 0.05);
    cout << "Volume: " << volume(Box) << endl;
    return 0;
}
