//name T.Daman
//roll 2005839
#include<iostream>
using namespace std;
int sum(int n)
{if(n==0)
{
return 0;
}
   return n+sum(n-1); 
}
int main()
{
    int n,k;
    cout<<"enter the number upto which you want the sum"<<endl;
    cin>>n;
   k= sum(n);
cout<<"the sum of "<<n<<" numbers is "<<k<<endl;
    return 0;
}