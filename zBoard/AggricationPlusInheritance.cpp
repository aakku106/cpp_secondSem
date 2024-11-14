#include <iostream>
using namespace std;
class Author
{
protected:
    string name, qualification;
    void showData(void);

public:
    void getData(void);
};
class Publication
{
protected:
    string pName;
    void showData(void);

public:
    void getData(void);
};
class Book : public Author, public Publication
{
    string title;
    double price;

public:
    void getData(void)
    {
        cout << "\nEnter the book title\t";
        cin >> title;
        cout << "\nEnter the books price\t";
        cin >> price;
        Author::getData();
        Publication::getData();
    }
    void showData(void)
    {
        cout << "-------showing Data---------\n";
        cout << "\nThe title of book is\t" << title << endl;
        Author::showData();
        Publication::showData();
        cout << "and the price of book is\t" << price << endl;
        int n = 1;
        if (n == 0)
        {
            getData();
        }
    }
};
void Author::getData(void)
{
    cout << "\nenter the author name\t";
    cin >> name;
    cout << "\nEnter the qualification of Author\t";
    cin >> qualification;
}

void Author::showData(void)
{
    cout << "\nThe name of author is\t" << name << ", and his qualification is\t" << qualification << endl;
}

void Publication::showData(void)
{
    cout << "\nThe name of publication is\t" << pName << endl;
}
void Publication::getData(void)
{
    cout << "\nEnter the publication name\n";
    cin >> pName;
}

int main()
{
    Book b;
    b.getData();
    b.showData();
}