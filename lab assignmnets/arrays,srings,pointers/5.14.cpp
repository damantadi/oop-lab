#include<iostream>
using namespace std;
#define N 5
int main(){
     int arr1[N],arr2[N];
    cout<<"enter the elements of an array1:"<<endl;
    for(int i=0;i<N;i++)
    {
        cin>>arr1[i];
    }
    cout<<"the array 1 is :";
for(int i=0;i<N;i++)
{
cout<<" "<<arr1[i];
}
cout<<endl;
    cout<<"enter the elements of an array2:"<<endl;
    for(int i=0;i<N;i++)
    {
        cin>>arr2[i];
    }
    cout<<"the array 2 is :";
for(int i=0;i<N;i++)
{
cout<<" "<<arr2[i];
}
cout<<endl;
int arr3[N+N];
for(int i=0;i<N;i++)
{
    arr3[i]=arr1[i];
}
for(int i=N;i<2*N;i++)
{
arr3[i]=arr2[i-N];
}
 cout<<"the array 3 is :";
for(int i=0;i<2*N;i++)
{
cout<<" "<<arr3[i];
}
cout<<endl;
for(int i=0;i<2*N-1;i++)
{
    for(int j=0;j<2*N-i-1;j++)
    {
        if(arr3[j]>arr3[j+1])
        {
int temp=arr3[j];
arr3[j]=arr3[j+1];
arr3[j+1]=temp;
        }
    }
}
cout<<"the sorted array3 is:";
for(int i=0;i<2*N;i++)
{
cout<<" "<<arr3[i];
}
cout<<endl;
    return 0;
}