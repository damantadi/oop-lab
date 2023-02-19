#include <iostream>
using namespace std;
class num
{
    int a;
    int b;
    int c;

public:
    num()
    {
    }
    num(int k, int m, int q)
    {
        a = k;
        b = m;
        c = q;
    }
    num(num &k, num &m, num &q) // copy constructor you may or may not use
    {
        a = k.a;
        b = m.b;
        c = q.c;
    }
    num(int k, int m)
    {
        a = k;
        b = m;
        c = 9;
    }

    void printnumber()
    {
        cout << "the number is " << a << "," << b << "," << c << endl;
    }
};
int main()
{
    num t, n(1, 2, 3), m(1,3,5),o(1,3),l(n);
    t.printnumber();
    n.printnumber();
    m.printnumber();
    o.printnumber();
    num z = n;
    z.printnumber();
    l.printnumber();

    return 0;
}