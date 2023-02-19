#include <iostream>
using namespace std;
class comp
{
    int a;
    int b;

public:
    friend comp sumcomp(comp o1, comp o2);
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
comp sumcomp(comp o1, comp o2)
{
    comp o3;

    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    o3.getnumber();
}
int main()
{
    comp j, h, q;
    j.setnumber(4, 5);
    j.getnumber();

    h.setnumber(6, 7);
    h.getnumber();
    q = sumcomp(j, h);
    return 0;
}