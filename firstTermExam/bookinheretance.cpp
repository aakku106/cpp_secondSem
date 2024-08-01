#include <iostream>
using namespace std;
class Author
{
public:
    string name;
    string qualification;
    void getdata();
    void putdata();
};
class Publication
{
public:
    string pname;
    void getdata();
    void putdata();
};
class Book
{
public:
    Author a;
    Publication p;
    string title;
    int price;
    void getdata();
    void putdata();
};
int main()
{
    Book b;
    b.getdata();
    b.putdata();
    return 0;
}
void Author::getdata()
{
    cout << "Enter Author Name: \n Enter Author Qualification: ";
    cin >> name >> qualification;
}
void Author::putdata()
{
    cout << "Author Name: " << name << endl;
    cout << "Author Qualification: " << qualification << endl;
}
void Publication::getdata()
{
    cout << "Enter Publication Name: ";
    cin >> pname;
}
void Publication::putdata()
{
    cout << "Publication Name: " << pname << endl;
}

void Book::getdata()
{
    cout << "Enter Book Title: ";
    cin >> title;
    cout << "Enter Book Price: ";
    cin >> price;
    a.getdata();
    p.getdata();
}
void Book::putdata()
{
    cout << "Book Title: " << title << endl;
    cout << "Book Price: " << price << endl;
    a.putdata();
    p.putdata();
    void getdata();
    void putdata();
}