#include<iostream>
using namespace std;

int main(){
    int i,j;
    for(int i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {int k=5-i;
        for(j=1;j<=k;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=5;j++){
            cout<<"*";}
        }
        cout<<"\n";
    }
    return 0;
}