#include<iostream>
using namespace std;
class number{
int a,b;
public:
number(int x,int y)
{
    a=x;
    b=y;
}
number()
{
    a=0;
    b=0;
}
number(int x)
{
    a=x;
    b=0;
}
int printit()
{
    cout<<"the number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main(){
    number n(1,2);
    n.printit();

number n2;
n2.printit();

number n3(5);
n3.printit();


    return 0;
}