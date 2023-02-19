#include<iostream>
using namespace std;
int fun(int x)
{
    if(x%2==0)
    {
        return 1;
    }
    else
    return 0;
}
int main(){
    int num;
    cout<<"enter the number: "<<endl;
    cin>>num;
    if(fun(num))
    {
        cout<<"even number"<<endl;
    }
    else
    {
        cout<<"odd number"<<endl;
    }
    return 0;
}