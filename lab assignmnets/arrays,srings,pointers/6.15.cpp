#include<iostream>
using namespace std;
#include<string.h>
int main(){
    char s[6]="hello";
    int n=strlen(s);
    for(int i=0;i<n;i++)
    {
for(int j=0;j<=i;j++)
{
    cout<<s[j];
}cout<<endl;
    }
    for(int i=n-1;i>=0;i--)
    {
for(int j=0;j<=i;j++)
{
    cout<<s[j];
}cout<<endl;
    }

    return 0;
}