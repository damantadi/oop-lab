#include<iostream>
#include<conio.h>
using namespace std;
const float pi=3.14;
float FUN_AREA(float r)
{
float area;
area=pi*r*r;
cout<<"\narea of Circle: "<<area<<endl;;
}
float FUN_AREA(float l,float b)
{
float area;
area=(l*b);
cout<<"\narea of Rectangle: "<<area<<endl;
}
float FUN_AREA(float l,float b,float h)
{
float volume;
volume=(l*b*h);
cout<<"\nvolume of Rectangle: "<<volume<<endl;
}
float FUN_AREA()
{
    cout<<"In appropriate message"<<endl;
}
int main()
{
float b,h,r,l;
float result;
cout<<"\nEnter the Radius of Circle: ";
cin>>r;
FUN_AREA(r);

cout<<"\nEnter the Length & Bredth of Rectangle: ";
cin>>l>>b;
FUN_AREA(l,b);

cout<<"\nEnter the Length,Bredth & height of Rectangle: ";
cin>>l>>b>>h;
FUN_AREA(l,b,h);

FUN_AREA();
return 0;
}