#include<iostream>
using namespace std;

int main(){
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
            
        }
        int k=2*4-2*i;
        for(j=1;j<=k;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
      for(i=4;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
            
        }
        int k=2*4-2*i;
        for(j=1;j<=k;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}