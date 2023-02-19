//name T.Daman
//roll 2005839
#include<iostream>
using namespace std;
void fact()
{
int n;
int k=1;
cout<<"enter the no. from you want the factorial "<<endl;
cin>>n;
for(int i=1;i<=n;i++)
{
    k=k*i;
}
cout<<"the factorial of "<<n<<" with no agrument and return value  is "<<k<<endl;
}
void factorial(int n)
{
    int y=1;
    for(int i=1;i<=n;i++)
{
    y=y*i;
}
cout<<"the factorial of "<<n<<" with argument and no return value is "<<y<<endl;

}
int factorialreturn()
{
    int n;
int k=1;
cout<<"enter the no. from you want the factorial "<<endl;
cin>>n;
for(int i=1;i<=n;i++)
{
    k=k*i;
}
return k;
}
int f(int n)
{
      int y=1;
    for(int i=1;i<=n;i++)
{
    y=y*i;
}
return y;
}
int main(){
    fact();
    int p,q;
    cout<<"enter the no. from you want the factorial "<<endl;
cin>>p;
factorial(p);
int m=factorialreturn(); 
cout<<"the factorial of is no argument and with return value "<<m<<endl; 
  cout<<"enter the no. from you want the factorial "<<endl;
cin>>q;
int l=f(q);
cout<<"the factorial with argument and return value of is "<<l<<endl; 

    return 0;
}