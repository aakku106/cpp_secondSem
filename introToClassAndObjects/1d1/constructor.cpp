#include <iostream>
using namespace std;
class Rectangle
{
private:
    int len, wid;

public:
    Rectangle(int l, int w)
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
    Rectangle book(2, 4), lappy(4, 8), desk(6, 10);
    // book.setData(2, 4);        this
    // lappy.setData(4, 8);         3 lines
    // desk.setData(6, 10);             are not needed any more
    // show data
    cout << "data of bok \n";
    book.showSata();
    cout << "data of lappy" << endl;
    lappy.showSata();
    cout << "data of desk" << endl;
    desk.showSata();
}
