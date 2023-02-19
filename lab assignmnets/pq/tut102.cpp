#include<iostream>
using namespace std;


int bin_search(int a[],int l,int e,int k )
{if(l==e)
{
    if(k==a[l])
    {
        return l;
    }
    else{
        return 0;
    }
}
    
else
{  int mid=(l+e)/2;

    if(k==a[mid])
{
    return mid;
}

    else if(k>a[mid])
{
    l=mid+1;
    return bin_search( a, l, e,k);
    
}
else{
     e=mid-1;
    return bin_search(a, l, e, k);
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