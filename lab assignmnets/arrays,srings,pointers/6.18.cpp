#include<iostream>
using namespace std;
#include<string.h>
int main(){
    char sr[100];
    cout<<"enter the string"<<endl;
    //cin.ignore();
    cin.getline(sr,100);
    int k=strlen(sr);
    int i=0;
    while(sr[i]!='*')
    {
cout<<sr[i];
        i++;
    }
    cout<<endl;
    cout<<i<<endl;
    return 0;
}