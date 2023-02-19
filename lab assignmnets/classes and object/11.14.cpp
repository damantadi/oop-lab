#include<iostream>
#include<math.h>
using namespace std;
class x
{
    int arr[10];
    int n;
    public:
    x()
    { n=0;
        arr[10]={0};
    }
    x(int k)
    {
        n=k;
        cout<<"enter the elements of an array:"<<endl;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
   
    }
void operator=(x a)
{
for(int i=0;i<n;i++)
{
    if(arr[i]!=a.arr[i])
    {
cout<<"binary no are not equal"<<endl;
break;
    }
}
}
int operator>(x a)
{ int arr1=0,arr2=0;
    for(int i=0;i<n;i++)
    {
 arr1=arr1+(pow(2,i))*arr[i];       
    }
    for(int i=0;i<n;i++)
    {
arr2= arr2+(pow(2,i))*(a.arr[i]);       
    }
    cout<<arr1<<arr2<<endl;;
if(arr1>arr2)
{
    return 1;
}
else 
{return 0;}
}
void show()
{
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
}
};
int main(){
    x a1(4),a2(4);
a1.show();
a2.show();
a1=a2;
if(a1>a2)
{
    cout<<"a1 is greater than a2"<<endl;
}
else
{
    cout<<"a2 is greater than a1"<<endl;

}
    return 0;
}