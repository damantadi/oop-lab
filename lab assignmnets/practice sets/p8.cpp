#include<iostream>
using namespace std;
int sum(int n)
{int sum=0;
    for(int i=0;i<=n;i++)
    {
sum+=i;
    }
return sum;
}
int main(){
    int k;
    cout<<"enter upto which no. you want the sum:"<<endl;
    cin>>k;
    int s;
    s=sum(k);
    cout<<"the sum of "<<k<<" natural numbers are  "<<s<<endl;
    return 0;
}