#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter the value of a";
    cin>>a;
    try
    {
        if(a==0)
        throw ("zero");
        else if(a>0)
        throw a;
        else if(a==-1)
        cout<< "it is negative"<<endl;
    }
    catch( int )
    {
        cout<<" "<<a<<endl;
    }
    catch(char const* s)
    {
        cout<<s<<endl;
    }
    cout<<"end of program"<<endl;
    return 0;
}