#include <iostream>
using namespace std;
class Distance
{
private:
    int feet, inch;

public:
    Distance()
    {
        feet = 0;
        inch = 0;
    }
    Distance(int f, int i)
    {
        feet = f;
        inch = i;
    }
    void display()
    {
        cout << "Feet: " << feet << " Inch: " << inch << endl;
    }
    Distance operator+(Distance d)
    {
        Distance temp;
        temp.feet = feet + d.feet;
        temp.inch = inch + d.inch;
        return temp;
    }
};