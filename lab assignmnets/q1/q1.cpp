
#include<iostream>
#include<conio.h>
using namespace std;
class Child;
class Parent
{
protected:
int num1;
public:
Parent()
{
num1=0;
}
void getdata()
{
    int k;
    cout<<"enter the value of 1st number:";
    cin>>k;
    num1=k;
}
void show()
{
cout<<"\n Value of Number 1 : "<<num1;
}
friend void swap(Parent *num1,Child *num2);
};
class Child
{
protected:
int num2;
public:
Child()
{
num2=0;
}
void getdata()
{
    int k;
    cout<<"enter the value of 2nd number:";
    cin>>k;
    num2=k;
}
void show()
{
cout<<"\n Value of Number 2 : "<<num2;
}
friend void swap(Parent *num1, Child *num2);
};
void swap(Parent *n1,Child *n2)
{
int n3;
n3=n1->num1;
n1->num1=n2->num2;
n2->num2=n3;
}
int main()
{

Parent p;
p.getdata();
Child c;
c.getdata();
cout<<"\nBefore swapping\n";
p.show();
c.show();
swap(&p, &c);
cout<<"\nAfter swapping\n";
p.show();
c.show();

}