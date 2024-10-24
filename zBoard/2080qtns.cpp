#include <iostream>
using namespace std;

class Height
{
    int meter;
    int centimeter;

public:
    // Constructor to initialize meter and centimeter
    Height(int m = 0, int cm = 0)
    {
        meter = m;
        centimeter = cm;
    }

    // Friend function to overload the + operator
    friend Height operator+(Height, Height);

    // Function to display height
    void display() const
    {
        cout << meter << " meters and " << centimeter << " centimeters" << endl;
    }
};

// Overloading the + operator using a friend function
Height operator+(Height h1, Height h2)
{
    Height r;
    r.centimeter = h1.centimeter + h2.centimeter;         // aadding both centimeters
    r.meter = h1.meter + h2.meter + (r.centimeter / 100); // Convert cm to meters
    r.centimeter = r.centimeter % 100;                    // Remaining centimeters
    return r;
}

int main()
{
    Height h1(2, 90), // 2 meters, 90 centimeters
        h2(1, 30),    // 1 meter, 30 centimeters
        h3 = h1 + h2; // Add the two heights

    cout << "Height 1: ";
    h1.display();

    cout << "Height 2: ";
    h2.display();

    cout << "Combined Height: ";
    h3.display();

    return 0;
}
