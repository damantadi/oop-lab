#include<iostream>
using namespace std;
class x
{
int a,b;
public:
void set()
{
    cout<<"enter the values of a and b:";
    cin>>a>>b;
}
void get()
{
    cout<<"value of a is :"<<a<<endl;
    cout<<"value of b is :"<<b<<endl;
}
friend void swap(x &y);

};
void swap(x &y)
{
    int temp;
    temp=y.a;
    y.a=y.b;
    y.b=temp;
}
int main(){
    x a1;
    a1.set();
a1.get();
swap(a1);
a1.get();
    return 0;
}