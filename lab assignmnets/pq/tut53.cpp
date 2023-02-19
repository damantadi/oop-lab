#include <iostream>
using namespace std;

class stud
{
    int roll;
    int  phone;
    int marks;

public:
    char name;
    int info(int r1, int p1, int m1);
    int give();
};
int stud ::info(int r1, int p1, int m1)
{
    roll = r1;
    phone = p1;
    marks = m1;
}
int stud ::give()
{
    cout << "the roll of student is " << roll << endl;
    cout << "the phone of student is " << phone << endl;
    cout << "the marks of student is " << marks << endl;
    cout << "the name of student is " << name << endl;
}
int main()
{

    stud d1;
    d1.name='d';
    d1.info(839, 843634703, 100);
    d1.give();
    return 0;
}