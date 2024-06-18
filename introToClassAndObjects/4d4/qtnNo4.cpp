#include<iostream>
using namespace std;
class Test{
    private:
    int x;
    public:
    int y;
    void getdata()
    {
        cout<<"Enter the value of x and y"<<endl;
        cin>>x>>y;
    }
    };
    int main()
    {
        Test t;
        t.getdata();
        cout<<"enter the value of x \n";
        cin>>t.x;
        cout<<"ENter the value of y \n";
        cin>>t.y;
    }