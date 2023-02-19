#include<iostream>
using namespace std;

int sum( int a,int b);
void x();

int main(){
    int a,b;
    cout<<"enter the value of a "<<endl;
    cin>>a;
    cout<<"enter the value of b "<<endl;
    cin>>b;
    cout<<"the sum is "<<sum(a,b);
    x();
    return 0;
}
int sum( int a,int b)
{
    int c= a+b;
    return c;
}
void x()
{
    cout<<"\n!!!aur batao kya chal raha hai!!!";
}