#include<iostream>
using namespace std;
void powerof2(int n)
{
    if((n&(n-1))==0 && n!=0)
    {
        cout<<"the no. is power of 2"<<endl;}
    else
   
    cout<<"the no. is not the power of 2"<<endl;
}
int main(){
    int x;
    cout<<"enter a number"<<endl;
    cin>>x;
    powerof2(x);
    return 0;
}