#include<iostream>
using namespace std;
class x
{
int arr[10];
int n;
public:
x()
{
    n=0;
    arr[10]={0};
}
x(int k)
{
    n=k;
    cout<<"enter the elements of an array"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
}
x operator +(x &a)
{  x b;
b.n=n;
    for(int i=0;i<n;i++)
    {
b.arr[i]=arr[i]+a.arr[i];
    }
    return b;
}
void show()
{
    for(int i=0;i<n;i++)
    cout<<" "<<arr[i];
    cout<<endl;
}
};
int main(){
 x a1(5),b1(5),b;
 a1.show();
 b1.show();
 b=a1+b1;
 b.show();   
    return 0;
}