#include <iostream>
using namespace std;
class Time
{
private:
    int hr, minu;

public:
    Time();
    Time(int t)
    {
        hr = t / 60;
        minu = t % 60;
    }
    void display();
};
int main()
{
    Time tm(106);
    tm.display();
    int duration;
    Time t1;
    cout << "Enter duration in integer \n";
    cin >> duration;
    Time t1 = duration;
    return 0;
}
void Time::display()
{
    cout << "Hour" << hr << "Minutes" << minu << endl;
}