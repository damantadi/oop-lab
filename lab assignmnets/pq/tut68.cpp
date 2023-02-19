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
        data4 = 500;

    }
    void getit()
    {
        cout<<data4<<endl;
    }
};
class datader :  data
{
    int data3;

public:
    int set()
    {
        
         setdata();  
        data3 = data1 + data2;
    }
    void display()
    {
        cout << "the values of data1 is " << data1 << endl;
        cout << "the values of data2 is " << data2 << endl;
        cout << "the values of data3 is " << data3 << endl;
        
    }
};
int main()
{
    datader d;
data a;
    
    d.set();
    d.display();
    a.getit();    

    return 0;
}