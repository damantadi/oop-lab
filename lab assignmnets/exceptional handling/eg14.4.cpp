#include<iostream>
using namespace std;
template<class i>
i arr1(i arr[],i a)
{
    return arr[a-1];
}
int main(){
    int n;
    cout<<"enter the no. of element ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"enter the position you want the value:";
    cin>>k;
    cout<<"the value is :"<<arr1(arr,k);
    return 0;
}