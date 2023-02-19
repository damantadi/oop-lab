#include <iostream>
using namespace std;
class data
{
int data4;
public:
    int data1, data2;
    void setdata()
    {
        data1 = 100;
        data2 = 300;
        data4=500;

    }
    void getit()
    {
        cout<<data4<<endl;
    }
};
class datader : public data
{
    int data3;

public:
    int set()
    {
        data3 = data1 + data2;
    }
    void display()
    {
        cout << "the values od data1 is " << data1 << endl;
        cout << "the values od data2 is " << data2 << endl;
        cout << "the values od data3 is " << data3 << endl;
    }
};
int main()
{
    datader d;
    d.setdata();
    d.set();
    d.display();
    d.getit();
    return 0;
}