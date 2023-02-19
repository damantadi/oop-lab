#include <iostream>
using namespace std;
class comp;
class total
{
public:
    int calculate(comp, comp);
};
class comp
{
    int a;
    int b;
    //  friend int total ::calculate(comp, comp);
    friend class total;

public:
    void setnumber(int k, int m)
    {
        a = k;
        b = m;
    }
    void getnumber()
    {
        cout << "the complex no is  " << a << " + " << b << "i" << endl;
    }
};
int total ::calculate(comp o1, comp o2)
{
    int real = (o1.a + o2.a);
    cout << "real no. is " << real << endl;
    int imaginary = (o1.b + o2.b);
    cout << "imaginary no. is " << imaginary << endl;
}

int main()
{
    comp i, j;
    i.setnumber(5, 7);
    j.setnumber(1, 3);
    total p;
    int res = p.calculate(i, j);

    return 0;
}