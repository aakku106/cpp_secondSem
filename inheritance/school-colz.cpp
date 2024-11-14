#include <iostream>
using namespace std;
class Teacher
{
    int id;
    string subject;

public:
    void getTeacher();
    void displayTeacher();
};

class Staff
{
    int id;
    string subject;

public:
    void getStaff();
    void displayStaff();
};
class Coordinators : public Teacher, public Staff
{
    Teacher t;
    Staff s;
    string program;

public:
    void getData();
    void displayData();
};

int main()
{
    Coordinators c;
    c.getData();
    c.getTeacher();
    // c.getStaff();
    c.displayData();
    c.displayTeacher();
    // c.displayStaff();
    return 0;
}
void Teacher::getTeacher()
{
    cout << "Enter Teacher ID:\t";
    cin >> id;
    cout << "Enter Teacher Subject:\t";
    cin >> subject;
}
void Teacher::displayTeacher()
{
    cout << "Teacher ID:\t" << id << endl;
    cout << "Teacher Subject:\t" << subject << endl;
}
void Coordinators::getData()
{
    cout << "WHat is the program of ur coordinator\t";
    cin >> program;
}
void Coordinators::displayData()
{
    cout << "the program of coordinator is\t" << program << endl;
    Teacher t;
    // t.getTeacher(); // this is aggrication
    // t.displayTeacher(); // aggreation dont need in inheritance
}
