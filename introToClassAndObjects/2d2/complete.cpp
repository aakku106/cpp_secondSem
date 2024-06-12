#include <iostream>
using namespace std;
class student
{
private:
    int roll;
    string name;
    int total;
    float perc;

public:
    // member function to get students details.
    void getDetails();
    // member function to print students details.
    void showData();
    // member function to print students details in one line.
    void studentsDetails();
};
// member function definition, outside of the class.
void student::getDetails()
{
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter total marks outof 500: ";
    cin >> total;
    perc = (float)total / 500 * 100;
}
// member function definition, outside of the class.
void student::showData()
{
    cout << "Student details:" << endl;
    cout << "Roll number: " << roll << endl;
    cout << "Name: " << name << endl;
    cout << "Total: " << total << endl;
    cout << "Percentage: " << perc << endl;
}
// member function definition, outside of the class.
void student::studentsDetails()
{
    cout << "students details are: \n";
    cout << "name: " << name << "roll: " << roll << "total: " << total << "percentage: " << perc << "\n";
}
int main()
{
    student std; // object of class student
    std.getDetails();
    cout << "----------------" << endl;
    std.showData();
    cout << "----------------" << endl;
    std.studentsDetails();
    return 0;
}