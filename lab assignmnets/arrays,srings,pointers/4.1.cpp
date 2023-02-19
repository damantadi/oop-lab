#include<iostream>
using namespace std;
int larger(int a,int b,int c)
{
    if(a>b && a>c)
    return a;
    else if(b>a && b>c)
    return b;
    else
    return c;
}
int main(){
    int a,b,c;
    int x;
    cout<<"enter the values of a,b,c"<<endl;
    cin>>a>>b>>c;
    x=larger(a,b,c);
    cout<<"largers of 3 nos. is :"<<x<<endl;
    return 0;
}