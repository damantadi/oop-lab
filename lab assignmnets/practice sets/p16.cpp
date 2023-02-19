#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int n;
    char arr[100];
    cin>>arr;
    cout<<arr<<endl;
  int k=strlen(arr);
    cout<<strlen(arr)<<endl;
    int check;
    if(k%2!=0)
    {
         n=(k+1)/2;
    }
    else{

    n=(k/2)+1;}
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[k-i-1])
        {check=0;
cout<<"not a plindrome"<<endl;
break;

 }}
if(check!=0)
{
    cout<<"it is a palindrome ";
}

    

    return 0;
}