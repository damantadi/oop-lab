#include <iostream>
using namespace std;

class complex;
class calc
{
public:
    int a;
    int b;
    int sum(int a, int b)
    {
        return (a + b);
    }
    int sumof(complex, complex);
    int sumin(complex,complex);
};
class complex
{
    int a;
    int b;
    //friend int calc ::sumof(complex, complex);
    //friend int calc ::sumin(complex, complex);  // individual 
friend class calc; //for whole class
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
int calc ::sumof(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calc ::sumin(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex q,v;
    q.number(4, 6);
    q.output();

    v.number(3,2);
    v.output();

    calc m;
   int p = m.sumof(q,v);
    int z = m.sumin(q,v);

   cout<<"the sum of real numbers are "<<p<<endl;
   cout<<"the sum of complex numbers are "<<z<<endl;
    return 0;
}