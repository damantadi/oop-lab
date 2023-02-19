//T.DAMAN
//2005839
//q4
#include<iostream>
using namespace std;
class A
{
    int a;
    int b;
    public:
    void get()
    {int x,y;
    cout<<"enter the numbers:"<<endl;
    cin>>x>>y;
    a=x;
    b=y;
    }
friend int greatest( A);
};
int greatest(A c )
{
    if(c.a>c.b)
    {
        return c.a;
    }
    else

    return c.b;
}

int main(){
    A c;
    c.get();
    cout<<"greatest is :"<<greatest(c);
    return 0;
}