#include<iostream>
using namespace std;
//using iterative method

int bin_search(int a[],int l,int e,int k )
{
    
    while(l<=e)
{  int mid=(l+e)/2;

    if(k==a[mid])
{
    return mid;
}

    else if(k>a[mid])
{
    l=mid+1;
    //bin_search( a, l, e,k);
    
}
else{
     e=mid-1;
    // bin_search(a, l, e, k);
}
}
return 0;
}
int main(){
int a[10]={2,3,4,5,6,7,8,9,10,11};
int l=0;
int e=9;
int k;
cout<<"enter the value you need:"<<endl;
cin>>k;
cout<<bin_search(a,l,e,k);

    return 0;
}