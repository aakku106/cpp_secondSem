#include <iostream>
using namespace std;
class Student
{
private:
    int roll;
    string name;
    static int countStudent; // static data member

public:
    Student() {};
    getData()
    {
        cout << "Enter the roll number of the student: ";
        cin >> roll;
        cout << "Enter the name of the student: ";
        cin >> name;
        countStudent++; // always show one  so we need ststic data.
    }
    static void displayCount()
    {
        cout << "The total number of students are: " << countStudent << endl;
    }
};
int Student::countStudent = 0;
int main()
{
    Student s1, s2, s3;
    s1.getData();
    s2.getData();
    s3.getData();
    s1.displayCount();
    s2.displayCount();
    s3.displayCount();
    return 0;
}
