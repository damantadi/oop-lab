#include<iostream>
using namespace std;
#define N 5
int main(){
    int arr[N];
    cout<<"enter the elements of an array:"<<endl;
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
for(int i=0;i<N;i++)
{
cout<<" "<<arr[i];
}
cout<<endl;
    int large,largepos=0,small,smallpos=0;
    large=arr[0];
    small=arr[0];
    for(int i=1;i<N;i++)
    {
    if(large<arr[i])
    { 
    large=arr[i];
largepos=i;
    }
    }
    for(int i=1;i<N;i++)
    {
    if(small>arr[i])
    { 
    small=arr[i];
smallpos=i;
    }
    }
    int temp;
temp=arr[largepos];
arr[largepos]=arr[smallpos];
arr[smallpos]=temp;
for(int i=0;i<N;i++)
{
cout<<" "<<arr[i];
}
cout<<endl;
    return 0;
}