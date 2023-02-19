#include<iostream>
using namespace std;
class x
{
    int *arr;
    int n;
public:
x(int k)
{ n=k;
    arr= new int(n);
    cout<<"enter the elements of an array"<<endl;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

}
void operator++()
{for(int i=0;i<n;i++)
   { (arr[i])++;}
}
void operator--()
{for(int i=0;i<n;i++)
   { (arr[i])--;}
}
void show()
{
  for(int i=0;i<n;i++)
   {cout<<" "<<arr[i];}  
   cout<<endl;
}
};
int main(){
 x a1(6);
 a1.show();   
 ++a1;
 a1.show();
 --a1;
 a1.show();
    return 0;
}