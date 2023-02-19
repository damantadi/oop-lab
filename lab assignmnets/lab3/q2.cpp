//name T.Daman
//roll 2005839
#include <iostream>
using namespace std;

void result(int a, int b)
{

    cout << "the number is " << a << " + " << b << "i" << endl;
}
void sumcomplex(int a, int b, int a1, int b1)
{
int k,m;
k=a+a1;
m=b+b1;
 cout << "the sum is " << k << " + " << m << "i" << endl;
}
void productcomplex(int a, int b, int a1, int b1)
{
    int k,m;
    k=a*a1-b*b1;
    m=a*b1+b*a1;
 cout << "the product number is " << k << " + " << m << "i" << endl;
}
void subtractcomplex(int a, int b, int a1, int b1)
{
int k,m;
k=a-a1;
m=b-b1;
 cout << "the subtraction is " << k << " + " << m << "i" << endl;
}
void dividecomplex(int a,int b,int c,int d)
{
    float k=(a*c + b*d);
    float l=(c*c+d*d);
    float i=(b*c - a*d);
    cout << "the divison of complex number is " <<k/l<< " +  " << i/l << "i" << endl;
}

int main()
{
    int a,b,c,d;
cout<<"enter the real part of 1st complex no."<<endl;
cin>>a;
cout<<"enter the imaginary part of 1st complex no."<<endl;
cin>>b;
cout<<"enter the real part of 2nd complex no."<<endl;
cin>>c;
cout<<"enter the imaginary part of 2nd complex no."<<endl;
cin>>d;
result(a,b);
result(c,d);
sumcomplex(a,b,c,d);
productcomplex(a,b,c,d);
subtractcomplex(a,b,c,d);
dividecomplex(a,b,c,d);

    return 0;
}
