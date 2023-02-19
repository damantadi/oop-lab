#include<iostream>
using namespace std;
class complex{
int num1;
int num2;
public:
void set()
{
    cout<<"enter the real and img part"<<endl;
    cin>>num1>>num2;
}

 friend complex operator +(complex c1,complex c2);
void show()
{
 cout<<"the complex number is "<<num1<<" + "<<num2<<"i"<<endl;
}
};
complex operator +(complex c1,complex c2)
{
    complex c;
    c.num1=c1.num1*c2.num1 - c1.num2*c2.num2;
    c.num2=c1.num2*c2.num1 + c1.num1*c2.num2;
    return c;
}
int main(){
    
complex A,B,sum;
A.set();
B.set();
sum=A+B;
sum.show();
    return 0;
}