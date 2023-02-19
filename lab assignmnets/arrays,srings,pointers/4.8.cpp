#include<iostream>
#include<math.h>
using namespace std;
int fac(int n)
{int k=1;
    for(int i=n;i>0;i--)
    {
k*=i;
    }
    return k;
}
float fun(int n)
{
    float k=0;
    for(int i=1;i<=n;i++)
    {
k+=pow(i,i)/float(fac(i));
    }
    return k;
}
int main()
{int n;
    cout<<"enter the value:"<<endl;
cin>>n;
float p;
p=fun(n);
cout<<"sum of terms is:"<<p<<endl;
return 0;
}