#include<iostream>
using namespace std;

int sum( int a,int b)
{
    int c= a+b;
    return c;
}
int main(){
    int a,b;
    cout<<"enter the value of a "<<endl;
    cin>>a;
    cout<<"enter the value of b "<<endl;
    cin>>b;
    cout<<"the sum is "<<sum(a,b);
    return 0;
}