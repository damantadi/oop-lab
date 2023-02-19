#include<iostream>
using namespace std;
class binary
{
int arr[4];
public:
binary()
{
    for(int i=0;i<4;i++)
{
    arr[i]=0;
}
}
void getdata()
{  cout<<"enter the elements of binary no:";
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
}
binary &add(binary &b1,binary &b2 )
{ int carr[5]={0};
    for(int i=0;i<4;i++)
    {
if(b1.arr[i]==1 && b2.arr[i]==0)
{
arr[i]=1;
}
if(b1.arr[i]==0 && b2.arr[i]==0)
{
arr[i]=0;
}
if(b1.arr[i]==0 && b2.arr[i]==1)
{
arr[i]=1;
}
if(b1.arr[i]==1 && b2.arr[i]==1)
{
arr[i]=0;
carr[i+1]=1;
}
arr[i]+=carr[i];
if(arr[i]==2)
{
    arr[i]=0;
    carr[i+1]=1;
}

    }
}
void display()
{
    for(int i=0;i<4;i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
}
};
int main(){
    binary b1;
 b1.getdata();
 b1.display();

 binary b2;
 b2.getdata();
 b2.display();
 binary b3;
 b3.add(b1,b2);
 b3.display();   
    return 0;
}