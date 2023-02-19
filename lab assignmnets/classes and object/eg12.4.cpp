#include <iostream>
using namespace std;
class student
{
    char name[10];
    int roll;

public:
    void getdata()
    {
        cout << "enter the roll" << endl;
        cin >> roll;
        cout << "enter the name :";
        cin.ignore();
        cin.getline(name, 10);
    }
    void show()
    {
        cout << "roll:" << roll << endl;
        cout << "name:" << name << endl;
    }
};
class marks : public student
{
    int marks[3];

public:
    void getmarks()
    {
        getdata();
        cout << "enter the marks:" << endl;
        for (int i = 0; i < 3; i++)
        {
            cin >> marks[i];
        }
        show();
    }
    int total()
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += marks[i];
        }
        return sum;
    }
};
class result : public marks
{

public:
    void resultobtained()
    {
        getmarks();
        int n = total();
        cout << "total marks obtained is :" << n << endl;
    }
};
int main()
{
    result r1;
    r1.resultobtained();
    return 0;
}