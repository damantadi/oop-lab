//T.DAMAN
//ROLL 2005839
//Q1.
#include <iostream>
using namespace std;
class student
{
    int roll;

public:
    char name[10];
    void setdata()
    {
        cout << "enter the name and roll" << endl;
        cin >> name >> roll;
    }
    void getdata()
    {
        cout << "the name is :" << name << "\nroll is:" << roll << endl;
    }
};
class exam : public student
{
public:
    int marks[5];

    void setmarks()
    {
        student s;
        s.setdata();
        s.getdata();
        for (int i = 0; i < 5; i++)
        {
            cout << "enter the marks of subject " << i + 1 << endl;
            cin >> marks[i];
        }
    }
    void getmarks()
    {
        cout << " marks is :" << endl;
        for (int i = 0; i < 5; i++)
            cout << "the marks of subject " << i + 1 << " is : " << marks[i] << endl;
    }
};
class result : public exam
{
    int sum;

public:
    void totalmarks()
    {
        exam e;
        e.setmarks();
        e.getmarks();
        sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += e.marks[i];
        }
        cout << sum;
    }
};
int main()
{
    result r;
    r.totalmarks();
    return 0;
}
