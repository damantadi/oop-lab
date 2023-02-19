#include<iostream>
using namespace std;
#define n 10
template<class s>
s sort(s arr[])
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                s temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
template<class s>
void print(s arr[])
{
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
}
int main(){
   int arr[n];
    cout<<"enter the elements of array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr);
print(arr);
    char arr1[n];
    cout<<"enter the elements of array";
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    sort(arr1);
print(arr1);
    return 0;
}