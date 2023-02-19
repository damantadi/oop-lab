#include<iostream>
using namespace std;
int series(int n)
{ if(n<2)
{
    return 1;
}
return series(n-1)+series(n-2);
}
int main(){
    int n;
    cout<<"enter the number upto which you want"<<endl;
    cin>>n;
    cout<<"in the series of  "<<n<<"the numbers is"<<series(n)<<endl;

    return 0;
}