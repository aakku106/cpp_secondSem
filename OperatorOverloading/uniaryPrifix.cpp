#include <iostream>

class Rectangle
{
private:
    int length, breadth;

public:
    Rectangle();
    Rectangle(int l, int b);
    void display();    // Corrected declaration
    void operator++(); // Declaration of prefix increment operator
};

Rectangle::Rectangle()
{
    length = 0;
    breadth = 0;
}

Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

void Rectangle::operator++()
{
    ++length;
    ++breadth;
}

void Rectangle::display() // Corrected definition
{
    std::cout << "Length: " << length << " Breadth: " << breadth << std::endl;
}

int main()
{
    Rectangle r1(10, 5);
    ++r1; // Calls the overloaded prefix increment operator
    r1.display();
    return 0;
}