#include <iostream>
using namespace std;
class map1
{
private:
    int feet, inches;

public:
    map1();
    map1(int, int);
    void display();
};
class map2
{
private:
    int feet, inches;

public:
    map2();
    map2(int, int);
    operator map1();
};
map2::operator map1()
{
    int f, i, meter, centimeter;
    f = meter * 3.3;
    i = centimeter * 0.4;
    f = f + i / 12;
    i = i % 12;
    return map1(f, i);
}
void map1::display()
{
    cout << "Feet: " << feet << " Inches: " << inches << endl;
}
map1::map1()
{
    feet = 0;
    inches = 0;
}
map1::map1(int f, int i)
{
    feet = f;
    inches = i;
}
map2::map2()
{
    feet = 0;
    inches = 0;
}
map2::map2(int f, int i)
{
    feet = f;
    inches = i;
}
int main()
{
    map1 m1(3, 4);
    map2 m2(5, 6);
    m1 = m2;
    m1.display();
    return 0;
}