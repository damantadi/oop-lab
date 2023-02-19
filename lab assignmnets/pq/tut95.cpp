#include<iostream>
using namespace std;
int po(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    return (a*po(a,b-1));
}
int main(){
    int a,p;
    cin>>a>>p;
    cout<<"the value of  "<<a<<" to the power  "<<p<<" is  "<<po(a,p)<<endl;
    return 0;
}