#include <iostream>
using namespace std;
class Animal
{
public:
    void sound(void)
    {

        cout << "weee\n";
    }
};
class Dog : virtual public Animal
{
public:
    void sound(void)
    {
        cout << "bhouBhou\n";
    }
};
class Cat : virtual public Animal
{
public:
    void sound(void)
    {
        cout << "mewooMeoww\n";
    }
};
class CallAll : public Cat, public Dog
{
public:
    void call(void)
    {
        // Animal a;
        // Dog d;
        // Cat c;
        // a.sound(); // call base
        // d.sound(); // overrides the base and return dog
        // c.sound(); // overrides the base nad return cat
        Animal::sound(); // calls base
        Dog::sound();    // overrides base
        Cat::sound();    // overrides base
    }
};
int main()
{
    CallAll cc;
    cc.call(); // calling all at once
}