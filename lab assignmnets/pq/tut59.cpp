#include <iostream>
using namespace std;
class y;
class x
{
    int a;
    friend int sum(x, y);

public:
    void setnumber()
    {
        int value;
        cout << "enter a value:" << endl;
        cin >> value;
        a = value;
    }
};
class y
{
    int a;
    friend int sum(x, y);

public:
    void setnumber()
    {
        int value;
        cout << "enter a value:" << endl;
        cin >> value;
        a = value;
    }
};
int sum(x o1, y o2)
{
    return o1.a + o2.a;
}
int main()
{
    x m;
    y p;
    m.setnumber();
    p.setnumber();
    int k = sum(m, p);
    cout << "the sum is " << k << endl;
    return 0;
}