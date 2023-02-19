#include<iostream>
using namespace std;
int sum(int b)
{
    if(b==0){
        return 0;
    }
    return (b+sum(b-1));
}

int main(){
    int n;
    cin>>n;
    cout<<"sum of n natural no is : "<<sum(n)<<endl;

    return 0;
}