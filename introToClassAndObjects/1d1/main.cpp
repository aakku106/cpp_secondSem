#include <iostream>
using namespace std;
class Rectangle
{
private:
    int len, wid;

public:
    void setData(int l, int w)
    {
        len = l;
        wid = w;
    }
    void showSata()
    {
        cout << "length " << len << endl;
        cout << "widt " << wid << endl;
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
    // show data
    cout << "data of bok \n";
    book.showSata();
    cout << "data of lappy" << endl;
    lappy.showSata();
}
