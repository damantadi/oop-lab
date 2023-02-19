#include<iostream>
using namespace std;
class x
{int a,b;
public:
x()
{
    a=0;
    b=0;
}
x(int l,int m=0 )
{
    a=l;
    b=m;
}
void set()
{
    cout<<a<<" "<<b<<endl;
}
};
int main(){
    x w;
    w.set();
    x y(2);
y.set();
x l(4,5);
l.set();
    return 0;
}