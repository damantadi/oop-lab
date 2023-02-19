#include<iostream>
using namespace std;
 class complex{
int a;
int b;
public:
int number(int x,int y)
{
a=x;
b=y;
}
int output()
{
    cout<<"the complex number is  "<<a<<" + "<<b<<"i"<<endl;
}
friend int complexsum(complex x,complex y);
 };
int complexsum( complex x,complex y)
{  complex k;
    k.number((x.a + y.a),(x.b+y.b));
    k.output();
}
 
int main(){
    complex Daman,Ragahv;
    Daman.number(4,5);
    Daman.output();

    Ragahv.number(6,5);
    Ragahv.output();

complexsum(Daman,Ragahv);


    return 0;
}