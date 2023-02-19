#include<iostream>
using namespace std;
template<class s>
s fac(s num)
{
    if(num==1)
    {
        return 1;
    }
    return num*fac(num-1);
}
int main(){
    int n=8;
    cout<<fac(n)<<endl;
    long int k;
    k=15;
    cout<<fac(k);
    return 0;
}