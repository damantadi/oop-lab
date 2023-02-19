#include <iostream>
using namespace std;

class empl
{
    int salary;
    int parttime;

public:
    int name;
    int cabno;
    int data(int salary1, int parttime1);
    int store();
};
int empl ::data(int salary1, int parttime1)
{
    salary = salary1;
    parttime = parttime1;
}
int empl ::store()
{
    cout << "empl info is " << salary << endl;
    cout << "empl info is " << parttime << endl;
    cout << "empl info is " << name << endl;
    cout << "empl info is " << cabno << endl;
}
int main()
{
    empl daman;
    daman.name=123;
    daman.cabno=2;
    daman.data(100000, 50000);
    daman.store();
    return 0;
}