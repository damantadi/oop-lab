#include<iostream>
using namespace std;
class x
{
    int n;
    public:
    x()
    {
        n=0;
    }
    x(int k)
    {
        n=k;
    }
x operator ++();
x operator --();
void show();
};
void x:: show()
{
    cout<<n<<endl;
}
x x::operator++()
{
    n++;
return x(n);
}
x x::operator--()
{
    n--;
return x(n);
}
/*x x::operator++(int)
{
    
return x(n++);
}
x x::operator--(int)
{
    
return x(n--);
}*/

int main(){
    x x1(7),x2,x3;
x1.show();
x2=--x1;
x2.show();
x3=++x1;
x3.show();

    return 0;
}