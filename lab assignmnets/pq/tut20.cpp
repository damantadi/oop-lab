#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int array[n];
    cout<<"enter the marks of is every sem"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"the address of 1st block is"<<array<<endl;
    int* p=array;
    for(int i=0;i<n-1;i++)
    {
    p+=i;
    cout<<"the address of marks "<<i<<"is "<<p<<endl;
    cout<<"the  value at address of marks "<<i<<"is "<<*p<<endl;
    }

    return 0;
}