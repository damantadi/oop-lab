#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter a number:";
    cin>>num;
    try
    {
        if(num==0)
        throw "zero";
        else if(num==-1)
        throw num;
        else if(num==1)
        throw num;
        else
        throw (float)num;
    }
    catch(int n)
    {
cout<<num<<endl;
    }
    catch(char const* s)
    {
        cout<<s<<endl;
    }
    catch(...)
    {
        cout<<"ignored"<<endl;
    }
    return 0;
}