#include<iostream>
using namespace std;
#define n 6
template<class s>
s search(s arr[],s a,int l,int h)
{
int mid=(l+h)/2;
if(arr[mid]==a)
{
    return mid;
}
else if(arr[mid]>a)
{
    h=mid;
    search(arr,a,l,h);
}
else
{
    l=mid+1;
    search(arr,a,l,h);
}

}
int main(){
    int arr[n];
    cout<<"enter the elements of an array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"enter the element you want to search:";
    cin>>k;
   if( search(arr,k,0,n))
{
    cout<<"found in "<<search(arr,k,0,n)+1<<" position"<<endl;
}
else
{
    cout<<"not found"<<endl;
}
    return 0;
}