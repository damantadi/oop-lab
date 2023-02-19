#include<iostream>
using namespace std;
int fac(int n)
{int k=1;
    for(int i=n;i>0;i--)
    {
k*=i;
    }
    return k;
}
int main(){
    int n,r;
    cout<<"enter the p(n,r) n value and r value:"<<endl;
    cin>>n>>r;
    if(n<=0 && (n-r)<0)
    {
        cout<<"invalid";
    }
    else
    {float k=float(fac(n)/(fac(r)*fac(n-r)));
        cout<<"the permutaion is "<<k;
    }
    return 0;
}