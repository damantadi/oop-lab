#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
         cout<<"*";
        }
        cout<<"\n";
    }
     for(int i=n;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
         cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}