#include<iostream>
using namespace std;
 class square;
class rectangle
{
int a,b;
public:
void get()
{
    cout<<"enter the length and breadth:";
    cin>>a>>b;
}
int area()
{
    return a*b;
}
void set()
{
    cout<<"length:"<<a<<endl;
    cout<<"breadth:"<<b<<endl;

}
friend class square;
};
class square
{
int side;
public:
void get()
{
    cout<<"enter the side of square:";
    cin>>side;
}
void convert(rectangle &r)
{
    r.a=side;
    r.b=side;
}
};
int main(){
    rectangle r1;
    r1.get();
    r1.area();
    r1.set();
 cout<<"area of rectangle is:"<<r1.area()<<endl;
    square s1;
s1.get();
s1.convert(r1);
r1.set();
    return 0;
}