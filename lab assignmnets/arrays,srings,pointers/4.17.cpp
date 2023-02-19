#include<iostream>
using namespace std;
int fab(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {   
        return fab(n-1)+fab(n-2);
    }
}
int main(){
  cout<<fab(0)<<endl;
    cout<<fab(1)<<endl;
    cout<<fab(2)<<endl;
    cout<<fab(3)<<endl;
    cout<<fab(4)<<endl;
    cout<<fab(5)<<endl;
    cout<<fab(6)<<endl;
    cout<<fab(7)<<endl;

    return 0;
}