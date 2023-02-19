#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void maths(int k, int l)
    {
        a = k;
        b = l;
    }
    void result()
    {
        cout << "the number is " << a << " + " << b << "i" << endl;
    }
    friend complex sumcomplex(complex x,complex y);
};
complex sumcomplex(complex x,complex y)
{
    complex l;
    l.maths((x.a +y.a),(x.b+y.b));
    return l;

}
int main()
{
    complex ak, sk,m;
    ak.maths(4, 5);
    ak.result();
    sk.maths(6, 5);
    sk.result();
    m=sumcomplex(ak,sk);
    m.result();
    return 0;
}