#include<iostream>
using namespace std;
template<class s>
void swap_no(s &a, s &b)
{
    s temp=a;
    a=b;
    b=temp;
}
int main(){
     int a,b;
    cout<<"enter two values:"<<endl;
    cin>>a>>b;
     cout<<"a="<<a<<" b="<<b<<endl;
     swap_no(a,b);
     cout<<"a="<<a<<" b="<<b<<endl;
     float a1,b1;
    cout<<"enter two values:"<<endl;
    cin>>a1>>b1;
     cout<<"a1="<<a1<<" b1="<<b1<<endl;
     swap_no(a1,b1);
     cout<<"a1="<<a1<<" b1="<<b1<<endl;
  
    return 0;
}