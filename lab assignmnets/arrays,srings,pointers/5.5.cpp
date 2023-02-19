#include<iostream>
using namespace std;
#define N 5
int main(){
     int arr[N];
    cout<<"enter the elements of an array:"<<endl;
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
for(int i=0;i<N;i++)
{
cout<<" "<<arr[i];
}
cout<<endl;
int large=arr[0],secondlarge;
 for(int i=1;i<N;i++)
    {

    if(large<arr[i])
    { 
        secondlarge=large;
    large=arr[i];

    }
    }
    cout<<"the secondlarge element is :"<<secondlarge<<endl;
    return 0;
}