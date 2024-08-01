#include <iostream>
using namespace std;
class Vehicle
{
public:
    Vehicle();
};
class Car : public Vehicle
{
public:
    Car();
};
Vehicle::Vehicle()
{
    cout << "Vehicle is this..." << endl;
} 
Car::Car()
{
    cout << "Car is this..." << endl;
}
int main()
{
    Car c, d;
    return 0;
}