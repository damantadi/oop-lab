#include<iostream>
using namespace std;
int merge(int a[],int b[],int p[],int m,int n)
{int i=0,j=0,k=0;


    while(i<m && j<n)
    {
    if(a[i]<b[j])
    {
        p[k]=a[i];
        k++;
        i++;
    }
    else
    {
        p[k]=b[j];
        k++;
        j++;
    }}
    for(;i<m;i++)
    {
        p[k]=a[i];
        k++;
    }
     for(;j<n;j++)
    {
        p[k]=b[j];
        k++;
    }
    for(int k=0;k<(m+n);k++)
    {
        cout<<" "<<p[k];
    }
cout<<endl;
}

int main(){
    int a[5]={30,39,44,54,57};
    int b[5]={1,2,31,40,99};
    int p[10];
merge(a,b,p,5,5);
int l[5]={15,32,45,50,60};
int y[15];
merge(p,l,y,10,5);
    return 0;
}