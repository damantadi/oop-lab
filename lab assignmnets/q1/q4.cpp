#include<iostream>
#include<conio.h>
using namespace std;
const float pi=3.14;
float perimeter(float n,float b,float h)
{
float perimeter;
perimeter=n*b*h;
return perimeter;
}
float perimeter(float r)
{
float perimeter;
perimeter=2*pi*r;
return perimeter;
}
float perimeter(float l,float b)
{
float perimeter;
perimeter=2*(l+b);
return perimeter;
}
int main()
{
float b,h,r,l;
float result;
cout<<" \nEnter the Base and Hieght of Triangle:";
cin>>b>>h;
result=perimeter(0.5,b,h);
cout<<"perimeter of Triangle:"<<result<<endl;
cout<<"\nEnter the Radius of Circle: ";
cin>>r;
result=perimeter(r);
cout<<"\nperimeter of Circle: "<<result<<endl;
cout<<"\nEnter the Length & Bredth of Rectangle: ";
cin>>l>>b;
result=perimeter(l,b);
cout<<"\nperimeter of Rectangle: "<<result<<endl;
return 0;
}