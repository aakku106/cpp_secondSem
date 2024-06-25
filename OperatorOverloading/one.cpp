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
int main()
{
    Distance d1(10, 9), d2(7, 10), d3;
    cout << "Distance 1: ";
    d1.display();
    cout << "Distance 2: ";
    d2.display();
    d3 = d1 + d2;
    cout << "Distance 3: ";
    d3.display();
    return 0;
}