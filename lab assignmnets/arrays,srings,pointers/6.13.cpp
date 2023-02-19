#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the no. of students:";
    cin>>n;
    char name[n][10];
    for(int i=0;i<n;i++)
    {
        cout<<"enter the name of student "<<i+1<<endl;
       
     cin.ignore();
     cin.getline(name[i],10);
    }
for(int i=0;i<n;i++)
{
    cout<<name[i]<<endl;
}
    return 0;
}