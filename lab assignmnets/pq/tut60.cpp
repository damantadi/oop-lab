#include<iostream>
using namespace std;
class y;
class x
{
int a;
friend void swap(x,y);
public:
void setnumber()
{int value;
    cout<<"enter a value:"<<endl;
cin>>value;
a=value;
}
};
class y
{
int a;
friend void swap(x,y);
public:
void setnumber()
{int value1;
    cout<<"enter a value:"<<endl;
cin>>value1;
a=value1;
}
};
void swap(x e,y f)
{cout<<"before swap the value of class x is  "<<e.a<<" and class y is  "<<f.a<<endl;
    int temp;
    temp=f.a;
    f.a=e.a;
    e.a=temp;
cout<<"after swap the value of class x is  "<<e.a<<" and class y is  "<<f.a<<endl;

}
int main(){
    x q;
    y d;
    q.setnumber();
    d.setnumber();
    swap(q,d);
    
    return 0;
}