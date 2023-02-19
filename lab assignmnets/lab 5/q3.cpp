#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    int number(int x, int y)
    {
        a = x;
        b = y;
    }
    int output()
    {
        cout << "the complex number is  " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex q, v, c, d, e;
    q.number(4, 6);
    q.output();

    v.number(5, 6);
    v.output();

    c.number(7, 8);
    c.output();

    d.number(9, 10);
    d.output();

    e.number(11, 12);
    e.output();
    return 0;
}