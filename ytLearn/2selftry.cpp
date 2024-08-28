#include <iostream>
using namespace std;
int st = 106;
class employee
{
private:
    int principal, vicePrincipal, teacher;

public:
    int student, karmachari;
    void setData(int p, int vp, int t);
    void getData()
    {
        cout << "The value of principal is " << principal << endl;
        cout << "The value of vice-principal is " << vicePrincipal << endl;
        cout << "The value of teacher is " << teacher << endl;
        cout << "The value of student is " << student << endl;
        cout << "The value of karmachari is " << karmachari << endl;
    }
};
void employee::setData(int p, int vp, int t)
{
    principal = p;
    vicePrincipal = vp;
    teacher = t;
}

class kamdarr
{
private:
    int a, b;

public:
    void setdata(int a1, int b1)
    {
        employee ccn;
        a = a1; // yesma student ko value aako xa
        b = b1; // ra yesma chai karmachari koo value aako xa
        // c = ccn.principal;                               cannot be assed cause it is private
    }
    void showdata()
    {
        cout << "The value of student is " << a << endl;
        cout << "The value of karmachari is " << b << endl;
        // cout << "The value of principal is " << c << endl; cannot be assed cause it is private
    };
};
int main()
{

    employee ccn;
    ccn.student = 100;
    ccn.karmachari = 50;
    ccn.setData(10000, 5000, 500);
    ccn.getData();
    kamdarr k;
    k.setdata(ccn.student, ccn.karmachari); // student and karmachari are public so they can be accessed
    k.showdata();
    return 0;
}