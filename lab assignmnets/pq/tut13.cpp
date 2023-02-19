#include<iostream>
using namespace std;
int main()
{
    int a,count=0;
    int i;
    cout<<"enter the values of a :"<<endl;
    cin>>a;
    cout<<"the table of a is given below"<<endl;
    for (int i=0;i<=10;i++){
    cout<<"if "<<a<<"is multiply to "<<i<< " gives   "<<a*i<<endl;
    count++;}
    cout<<"the number of loops is "<<count;
    return 0;
}