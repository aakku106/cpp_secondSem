#include <iostream>
using namespace std;
class Student
{
    int mark1, mark2;

public:
    Student();
    Student(int, int);
    void operator=(Student);
    void Display();
    ~Student();
};
int main()
{
    Student s1(10, 20), s2(70, 30);
    s1.Display();
    s1 = s2;
    s1.Display();
    return 0;
}
void Student::Display()
{
    cout << "mark 1: " << mark1 << endl;
    cout << "mark 2 : " << mark2 << endl;
}
Student::Student(int a, int b)
{
    mark1 = a;
    mark2 = b;
}
void Student::operator=(Student a)
{
    mark1 = a.mark1;
    mark2 = a.mark2;
}
Student::~Student()
{
    cout << "destroyed" << endl;
}