#include<iostream>
using namespace std;
#define N 10
int main(){
     int arr[N],k;
    cout<<"enter the no of element in the array"<<endl;
    cin>>k;
    cout<<"enter the elements of an array:"<<endl;
    for(int i=0;i<k;i++)
    {
        cin>>arr[i];
    }
for(int i=0;i<k;i++)
{
cout<<" "<<arr[i];
}
cout<<endl;
int n;
cout<<"enter the element you want to insert:"<<endl;
cin>>n;
for(int i=0;i<k;i++)
{
    if(arr[i]>n)
    {
        for(int j=k;j>i;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[i]=n;
        break;
    }
   else
   {
       arr[k]=n;
   }
   
}
for(int i=0;i<k+1;i++)
{
cout<<" "<<arr[i];
}
    return 0;
}