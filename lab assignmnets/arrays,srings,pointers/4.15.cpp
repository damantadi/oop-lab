#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    int rem;
    rem=a%b;
    if(rem==0)
    {
        return b;
    }
    else
    {
        return gcd(b,rem);
    }
}
int main(){
    cout<<gcd(7,3);
    return 0;
}