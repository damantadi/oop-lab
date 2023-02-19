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
int n,pos;
cout<<"enter the element you want to insert:"<<endl;
cin>>n;
cout<<"enter the position you want to insert:"<<endl;
cin>>pos;
if(pos>=N)
{
cout<<"****cannot insert*****"<<endl;
}
else
{
    for(int i=k;i>pos;i--)
    {
arr[i]=arr[i-1];
    }
arr[pos]=n;
}
for(int i=0;i<k+1;i++)
{
cout<<" "<<arr[i];
}
    return 0;
}