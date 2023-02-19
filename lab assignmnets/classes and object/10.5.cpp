#include <iostream>
using namespace std;
class poly
{
    int coe[10];
    int exp[10];
    int n;

public:
    poly()
    {
        n = 0;
        for (int i = 0; i < 10; i++)
        {
            coe[i] = exp[i] = 0;
        }
    }
    poly(int k)
    {  n=k;
        for (int i = 0; i < n; i++)
        {
            cout << "enter the coefficients of " << i << "term" << endl;
            cin >> coe[i];
            exp[i] = i;
        }
    }
    poly &add(poly &p1, poly &p);
    void display();
};
poly &poly::add(poly &p1, poly &p)
{
   
    if (p1.n > p.n)
    {
        n = p1.n;
        for (int i = 0; i < p.n; i++)
        {
            coe[i] = p.coe[i] + p1.coe[i];
            exp[i] = p.exp[i];
        }
        for (int i = p.n; i < p1.n; i++)
        {
            coe[i] = p1.coe[i];
            exp[i] = p1.exp[i];
        }
    }
    else
    {
        n = p.n;
        for (int i = 0; i < p1.n; i++)
        {
            coe[i] = p.coe[i] + p1.coe[i];
            exp[i] = p1.exp[i];
        }
        for (int i = p1.n; i < p.n; i++)
        {
            coe[i] = p.coe[i];
            exp[i] = p.exp[i];
        }
    }
    
}
void poly::display()
{
    for (int i = 0; i < n - 1; i++)
    {
        cout << "" << coe[i] << "x" << exp[i] << " + ";
    }
    cout<<""<<coe[n-1]<<"x"<<exp[n-1]<<endl;
}
int main()
{
    poly p(2);
    p.display();
    poly p1(4);
    p1.display();
poly p3;
p3.add(p,p1);
cout<<"the resultant polynomial is:"<<endl;
p3.display();
    return 0;
}