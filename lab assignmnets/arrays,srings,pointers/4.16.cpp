#include<iostream>
using namespace std;
int exp(int a,int n)
{
if(n==0)
{
    return 1;
}
else
{
    return a*exp(a,n-1);
}
}
int main(){
    cout<<exp(3,3);
    return 0;
}