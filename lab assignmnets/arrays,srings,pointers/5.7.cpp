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
int f=0;
for(int i=0;i<N;i++)
{
    for(int j=i+1;j<N;j++)
    {
        if(arr[i]==arr[j])
        { f=1;
            cout<<"the duplicate element is "<<arr[i]<<"in the pos of :"<<j<<endl;
        }
    }
}
if(f==0)
{
    cout<<"no duplicate";
}
    return 0;
}