#include<iostream>
using namespace std;
int convert(int hr,int min)
{
return hr*60 + min;
}
int main(){
    int hr ,min;
    cout<<"enter the time :"<<endl;
    cin>>hr;
    cin>>min;
    int k=convert(hr,min);
    cout<<""<<k<<"minutes"<<endl;
    return 0;
}