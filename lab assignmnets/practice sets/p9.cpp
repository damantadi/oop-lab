#include<iostream>
#include<cmath>
using namespace std;
void chk(int l,int m,int n)
{
if(l==sqrt(m*m +n*n)){
cout<<"it is a pythagorus triplet"<<endl;}
else
cout<<"it is not a pythagorus triplet"<<endl;
}
int pythgorus(int a,int b,int c)
{int k;
    if(a>=b && a>=c)
{
    cout<<" largest no is"<<a<<endl;
    chk(a,b,c);
    
}
else if(b>=a &&b>=c)
{
     cout<<" largest no is "<<b<<endl;
     chk(b,a,c);
}
else
{
     cout<<" largest no is "<<c<<endl;
      chk(c,a,b);
}

}
int main(){
    int p,q,r,m;
cout<<"enter three numbers:"<<endl;
cin>>p>>q>>r;
 m=pythgorus(p,q,r);   
    return 0;
}