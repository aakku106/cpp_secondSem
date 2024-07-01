#include <iostream>
using namespace std;
int main()
{
    time t1(1, 20), t2(1, 30);
}
class time
{
private:
    int hour, minu;

public:
    time(int, int);
    ~time();
};

time::time(int h, int m)
{
    hour = h;
    minu = m;
}

time::~time()
{
    cout << "destroyed" << endl;
}
