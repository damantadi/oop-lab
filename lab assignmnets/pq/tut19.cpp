#include<iostream>
using namespace std;

int main(){
    int marks[10]={100,99,97,95,90};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    int n;
    int maths[n];
    cout<<"enter the no. of sem"<<endl;
    cin>>n;
    cout<<"enter the marks of maths is every sem"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>maths[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<" marks of maths "<<i<< " is"<<maths[i]<<endl;
    }
    
        return 0;
}