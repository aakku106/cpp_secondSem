#include <iostream>
using namespace std;
class Time
{
private:
    int hours, minutes;

public:
    Time() {};
    Time(int h, int m)
    {
        hours = h;
        minutes = m;
    }
    operator int()
    {
        return hours * 60 + minutes;
    }
    void display()
    {
        cout << "Hours: " << hours << " Minutes: " << minutes << endl;
    }
};
int main()
{
    Time t1(2, 45);
    int duration = t1;
    cout << "Duration in minutes: " << duration << endl;
    int h, m;
    cout << "Enter hours and minutes: " << endl;
    cin >> h >> m;
    Time t2(h, m);
    duration = t2;
    cout << "duration you entered in hour and minutes --> minutes: " << duration << endl;
    return 0;
}
