#include<iostream>
using namespace std;
int gcd(int x,int y)
{
    int k;
while(k!=0)
    {
        k=x%y;
    x=y;
    y=k;
    }
    return x;
    
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"gcd of number is : "<<gcd(a,b);
    return 0;
}