#include<iostream>
using namespace std;

void dec(int k)
{
    if(k==0)
    {
        return ;
    }
    cout<<k<<endl;
    
    dec(k-1);
}
void inc(int n)
{
    if(n==0)
    {
        return ;
    }
    inc(n-1);
cout<<n<<endl;
}
int main(){
    int n;
    cout<<"enter a number :"<<endl;
    cin>>n;
    dec(n);
    cout<<"--------------"<<endl;
    inc(n);
    return 0;
}