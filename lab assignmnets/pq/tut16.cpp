#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter the value of "<<endl;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cout<<i<<endl;
        if(i==3)
        break;
    }
    return 0;
}