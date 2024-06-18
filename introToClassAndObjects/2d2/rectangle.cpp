#include <iostream>
using namespace std;

class Rectangle
{
private:
    int len, wid;

public:
    Rectangle() : len(0), wid(0) {}                     // Default constructor
    Rectangle(int l, int w) : len(l), wid(w) {}         // Parameterized constructor
    Rectangle(Rectangle &r) : len(r.len), wid(r.wid) {} // Copy constructor

    void setData(int l, int w)
    {
        len = l;
        wid = w;
    }
    void showData()
    {
        cout << "Length: " << len << endl;
        cout << "Width: " << wid << endl;
    }
    int area() { return len * wid; }
    int perimeter() { return 2 * (len + wid); }
};

int main()
{
    Rectangle book, lappy, desk;
    book.setData(2, 4);
    lappy.setData(4, 8);
    desk.setData(6, 10);

    // Show data
    cout << "Data of book: \n";
    book.showData();
    cout << "Data of lappy:" << endl;
    lappy.showData();
    cout << "Data of desk:" << endl;
    desk.showData();
}