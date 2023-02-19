#include<iostream>
using namespace std;
#define N 10
int f=0;
void print(int arr[])
{
    for(int i=0;i<N;i++)
    {
        cout<<" "<<arr[i];
    }
}

int main(){
     int arr1[N];
    cout<<"enter the elements of an array1:"<<endl;
    for(int i=0;i<N;i++)
    {
        cin>>arr1[i];
    }
int k;
cout<<"enter the element you want to search:";
cin>>k;
int beg=0,mid,end=N;
while(beg<=end)
{
    mid=(beg+end)/2;
    if(arr1[mid]==k)
    {
cout<<"element found in "<<mid+1<<"position"<<endl;
break;
    }
    if(arr1[mid]>k)
    {
        end=mid-1;
    }
    else if(arr1[mid]<k)
    {
beg=mid+1;
    }
}
    return 0;
}