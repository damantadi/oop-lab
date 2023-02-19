#include<iostream>
using namespace std;

int main(){
    int arr[9];
    cout<<"enter the no in the array"<<endl;
    for(int i=0;i<9;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<9;i++)
    {
        sum=sum^arr[i];    // sum=0^1^2^3^4^3^2^1 ----> 0^(1^1)^(2^2)^(3^3)^4 ------> 0^0^0^0^4 -----> 4
    }
    cout<<"the unique no is  "<<sum;
    return 0;
}