#include <iostream>
using namespace std;
class comp
{  int a, b;
public:
    void setit(int x, int y)
    {
        a = x;
        b = y;
    }
    void getit()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
    }
};
int main()
{    comp a;
    a.setit(3, 4);
    a.getit();
    cout << "new method" << endl;
    comp *p = &a;
    (*p).setit(3, 4);
    (*p).getit();
    cout << "new method" << endl;
    p->setit(3, 4);
    p->getit();
    cout << "new method" << endl;
    comp *q = new comp;
    (*q).setit(3, 4);
    (*q).getit();
    cout << "new method" << endl;
    q->setit(3, 4);
    q->getit();
    return 0;
}