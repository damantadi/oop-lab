#include<iostream>
using namespace std;
class rational
{
float a,b;
public:
void get()
{
    cout<<"enter two numbers"<<endl;
cin>>a>>b;
}
void display()
{
    cout<<a<<" "<<b<<endl;
}
void add()
{
    cout<<a+b<<endl;
}
void sub()
{
    cout<<a-b<<endl;
}
void mul()
{
    cout<<a*b<<endl;
}
void divide()
{
    cout<<a/b<<endl;
}
};

int main(){
 rational r1;
 r1.get();
 int k;
 int i=1;
 while(i)
 {
 cout<<"1.display\n2.add\n3.sub\n4.multiply\n5.divide"<<endl;
 cin>>k;
     switch (k)
 {
 case 1:
     r1.display();
     break;
 case 2:
     r1.add();
     break;
 case 3:
     r1.sub();
     break;
 case 4:
     r1.mul();
     break;
 case 5:
     r1.divide();
     break;
 
 default:
 cout<<"invalide"<<endl;
     break;
 }   
 cout<<"want more if yes type 1 else 0"<<endl;
 cin>>i;
}
    return 0;
}