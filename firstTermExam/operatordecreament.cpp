#include<iostream>
using namespace std;
class counter {
    private: int count;
    public: 
    counter (){
        count = 15; 
        }
        counter operator--(){
            --count;
         
        }void display(){
            cout << "Count: " << count << endl;
        }
};
int main(){
    counter c;
    int a;
    c.display();
    cout<<"how many times to call operator overloading: "; 
    cin>>a;
    for(int i=0; i<a; i++)
    {
    --c;
}
    c.display();
    return 0;
}