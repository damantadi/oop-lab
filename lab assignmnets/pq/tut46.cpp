#include <iostream>
using namespace std;
class num2;
class num1
{
    int a;
    friend int swap(num1 &, num2 &);

public:
    int ak(int y)
    {
        a = y;
    }
    int show(void)
    {
        cout <<"the value of a is "<< a << endl;
    }
};
class num2
{
    int b;
    friend int swap(num1 &, num2 &);

public:
    int ck(int x)
    {
        b = x;
    }
    int show()
    {
        cout << "the value of b is "<<b << endl;
    }
};
int swap(num1 &u, num2 &v)  // reference
{
    int temp = u.a;
    u.a = v.b;
    v.b = temp;
}
int main()
{
    num1 m;
    m.ak(4);
    m.show();

    num2 d;
    d.ck(5);
    d.show();
cout<<"*******after swaping********"<<endl;
    swap(m, d);
     m.show() ;
     d.show() ;
    return 0;
}