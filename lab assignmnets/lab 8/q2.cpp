//T.DAMAN
//2005839
//q2
#include<iostream>
using namespace std;
class fibo
{
private:
unsigned long int f0,f1,fib;
public:
fibo()
{
f0=0;
f1=1;
fib=f0+f1;
}
fibo (fibo &ptr)
{
f0=ptr.f0;
f1=ptr.f1;
fib=ptr.fib;
}
void increment()
{
f0=f1;
f1=fib;
fib=f0+f1;
}
void display()
{
cout << fib <<" ";
}
}; //end of class construction
int main()
{
    int n;
    cout<<"enter the no. of terms you want "<<endl;
    cin>>n;
fibo number;
for (int i=0; i<=n;i++)
{
number.display();
number.increment();
}
return 0;
}
