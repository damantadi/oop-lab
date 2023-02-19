#include<iostream>
using namespace std;
int sum(int a,int b)
{
    int c=a+b;
    return c;
}
void swap(int a,int b)
{
    int k;  // a=6 b=9 k
    k=a;  //   a=6 b=9 k=6
    a=b;   //   a=9 b=9 k=6
    b=k;   //   a=9 b=6 k=6
    cout<<"the values of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
}
int main(){
    int a,b;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    cout<<"the sum is "<<sum(a,b)<<endl;
    cout<<"the values of and b after swaping is"<<endl;
    swap(a,b);
    return 0;
}