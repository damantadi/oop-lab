//T.DAMAN
//2005839
//q3
#include<iostream>
using namespace std;
class A
{
    int a;
    int b;
    int c;
    public:
    void get()
    {int x,y,z;
    cout<<"enter the numbers:"<<endl;
    cin>>x>>y>>z;
    a=x;
    b=y;
    c=z;
    }
friend int greatest( A);
};
int greatest(A d )
{
    if(d.a>d.b)
    {
        if(d.b>d.c)
        {
            return d.a;
        }
        else if(d.c>d.a)
        {
            return d.c;
        }

    }
    else if(d.a<d.b)
    {
         if(d.a>d.c)
        {
            return d.b;
        }
        else if(d.c>d.b)
        {
            return d.c;
        }
    }
    
}

int main(){
    A d;
    d.get();
    cout<<"greatest is :"<<greatest(d);
    return 0;
}