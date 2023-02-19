#include<iostream>
using namespace std;
class frac
{
int num;int den;
public:
frac()
{
    num=0;
}
void get()
{
    cout<<"enter the numerator  and denominator:";
    cin>>num>>den;
}
 frac operator+(frac f1);
 frac operator-(frac f1);
 frac operator/(frac f1);
 frac operator*(frac f1);
 int GCD(int a,int b)
 {
     if(b==0)
     return a;
     else
     return GCD(b,a%b);
 }
 void simplify()
 {
     int common_divisor=GCD(num,den);
num/=common_divisor;
den/=common_divisor;
 }
 void show();
};
 void frac::show()
 { simplify();
 
     cout<<num<<"/"<<den<<endl;
 }
frac frac::operator +(frac f1)
{
    frac f2;
    f2.num=num*f1.den+den*f1.num;
    f2.den=den*f1.den;
    return f2;
}
frac frac::operator -(frac f1)
{
    frac f2;
    f2.num=num*f1.den-den*f1.num;
    f2.den=den*f1.den;
    return f2;
}
frac frac::operator *(frac f1)
{
    frac f2;
    f2.num=num*f1.num;
    f2.den=den*f1.den;
    return f2;
}
frac frac::operator /(frac f1)
{
    frac f2;
    f2.num=num*f1.den;
    f2.den=den*f1.num;
    return f2;
}
int main(){
    frac f1,f2,f3,f4,f5;
    f1.get();
    f1.show();
    f2.get();
f2.show();
cout<<"additon of fraction:";
f3=f1+f2;
f3.show();
cout<<"subtraction of fraction:";
f4=f1-f2;
f4.show();
cout<<"divison of fraction:";
f5=f3/f4;
f5.show();
cout<<"multiplication of fraction:";
f5=f3*f4;
f5.show();
    return 0;
}