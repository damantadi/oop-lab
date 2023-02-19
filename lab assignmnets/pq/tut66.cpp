#include <iostream>
using namespace std;
class autumn
{int k, r;
    

public:
    
    void printdata()
    {
        cout << "enter the values " << endl;
        cin >> k >> r;
    }
    void getdata()
    {
        int l;
        l = k + r;
        cout << "the value of sum is " << l << endl;
    }
    
};
class summer : public autumn
{
    int p;

public:
    void printline()
    {
        cout << "enter the values" << endl;
        cin >> p;
    }
    void display()
    {
        cout << "the no is  " << p << endl;
    }
    

};
int main()
{

    summer o;
    o.printline();
    o.display();
    o.printdata();
    o.getdata();
    return 0;
}