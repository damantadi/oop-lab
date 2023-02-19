#include<iostream>
using namespace std;
class x
{
int *b;
int k;
public:
x()
{ 
    b=0;
}
x(int n)
{
    k=n;
    b=new int(n);
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
}
void show()
{
    for(int i=0;i<k;i++)
    {
        cout<<" "<<b[i];
    }
    cout<<endl;
}
friend void small(x a);
};
void small(x a)
{
     int small=a.b[0];
for(int i=1;i<a.k;i++)
{
if(small>a.b[i])
{
    small=a.b[i];
}
}
cout<<"smallest element is :"<<small;
}
int main(){
    int l;
    cout<<"enter the size of array:";
    cin>>l;
    x a1(l);
a1.show();
small(a1);
    return 0;
}