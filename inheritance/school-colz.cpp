#include <iostream>
using namespace std;

class Teacher
{

private:
    int id;
    string subject;

public:
    void getTeacher(int id, string subject);
    void displayTeacher(int id, string subject);
};

class Staff
{
private:
    int id;
    string subject;

public:
    void getStaff();
    void displayStaff();
};
class Coordinators : public Teacher, public Staff
{
private:
    string program;

public:
    void getdata();
    void displaydata();
};

int main()
{
    Coordinators c;
    c.getdata();
    c.displaydata();
    return 0;
}
void Teacher::getTeacher(int id, string subject)
{
    cout << "Enter Teacher ID: ";
    cin >> id;
    cout << "Enter Teacher Subject: ";
    cin >> subject;
}
void Teacher::displayTeacher(int id, string subject)
{
    cout << "Teacher ID: " << id << endl;
    cout << "Teacher Subject: " << subject << endl;
}