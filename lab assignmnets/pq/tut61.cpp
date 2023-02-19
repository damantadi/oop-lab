#include <iostream>
using namespace std;
class y;
class x
{
    int a;
    friend void swap(x &, y &);

public:
    void setnumber()
    {
        int value;
        cout << "enter a value:" << endl;
        cin >> value;
        a = value;
    }
    void getnumber()
    {
        cout << "the number is " << a << endl;
    }
};
class y
{
    int a;
    friend void swap(x &, y &);

public:
    void setnumber()
    {
        int value1;
        cout << "enter a value:" << endl;
        cin >> value1;
        a = value1;
    }
    void getnumber()
    {
        cout << "the number is " << a << endl;
    }
};
void swap(x &e, y &f)
{
    int temp;
    temp = f.a;
    f.a = e.a;
    e.a = temp;
}
int main()
{
    x q;
    y d;
    q.setnumber();
    d.setnumber();
    cout << "the value before swap of class x is " << endl;
    q.getnumber();
    cout << "the value before swap of class y is " << endl;
    d.getnumber();
    swap(q, d);
    cout << "the value after swap of class x is " << endl;
    q.getnumber();
    cout << "the value after swap of class y is " << endl;
    d.getnumber();

    return 0;
}