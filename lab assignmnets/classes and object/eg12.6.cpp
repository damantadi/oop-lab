#include <iostream>
using namespace std;
class marks
{
    int marks[3];

public:
    void getdata()
    {
        cout << "enter the marks" << endl;
        for (int i = 0; i < 3; i++)
        {
            cin >> marks[i];
        }
    }
    int getvalue()
    {
        int n = 0;
        for (int i = 0; i < 3; i++)
        {
            n += marks[i];
        }
        return n;
    }
};
class student
{
    char name[10];
    int roll;

public:
    void getdata()
    {
        cout << "enter the name of student:" << endl;
        cin.ignore();
        cin.getline(name, 10);
        cout << "enter the roll" << endl;
        cin >> roll;
    }
    void showdata()
    {
        cout << "NAME:" << name << endl;
        cout << "ROLL:" << roll << endl;
    }
};
class result : public marks, public student
{
    int total;

public:
    void calculate()
    {
        int total;
        student::getdata();
        marks::getdata();
        showdata();
        total = getvalue();
        cout << "total marks obtained is :" << total << endl;
    }
};
int main()
{
    int p;
    cout << "enter the no. of student" << endl;
    cin >> p;
    result r1[p];
    for (int i = 0; i < p; i++)
    {
        r1[i].calculate();
    }
    return 0;
}