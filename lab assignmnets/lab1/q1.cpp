#include<iostream>
using namespace std;

void insertmid(int a[],int b[],int n,int p,int val)
{int i=0,j;

    while(i!=p-1)
    {
        b[i]=a[i];
        i++;
    }   
    b[i]=val;
    for(j=i+1;j<n+1;j++,i++)
    {
        b[j]=a[i];
    }
}
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<" "<< a[i];
    }
    cout<<endl;
}
int main()
{int a[]={1,2,3,4,10};
int b[6];

int pos,val;
cout<<"enter the position and value to be inserted";
cin>>pos>>val;
 insertmid(a,b,5,pos,val);
  display(b,6);
    return 0;
}