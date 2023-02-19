#include<iostream>
using namespace std;
bool sorted(int arr[],int n)
{
    if (n==1)
    {
        return true;
    }
bool restarr = sorted(arr+1,n-1);
if(arr[0]<arr[1] && restarr)
return true;
else 
return false;
}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
  cout<<sorted(arr,n);
    return 0;
}