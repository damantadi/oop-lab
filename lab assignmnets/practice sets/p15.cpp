#include<iostream>
using namespace std;

int main(){
    int mx=-199;
    int n;
     cout<<"enter the no of elements"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        mx=max(mx,arr[i]);
        cout<<mx;
        
    }

    return 0;
}