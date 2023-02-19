#include<iostream>
using namespace std;

int main(){
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=9;j++)
        {
            if((i==3&&(j==1||j==5||j==9)) ||(i==2&&j%2==0) ||(i==1&&(j==3||j==7 )))
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<"\n";
    }
    cout<<"_________________"<<endl;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=9;j++)
        {
            if((i+j)%2==0)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<"\n";
    }
     cout<<"_________________"<<endl;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=9;j++)
        {
            if((i+j)%4==0||(i==2&&j%2==0))
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}