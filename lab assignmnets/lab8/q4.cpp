//Wap to overload binary operator using friend function
#include<iostream>
using namespace std;
class Complex
{
int num1, num2;
 public:
 void accept()
{
cout<<"\n Enter Two Complex Numbers : ";
cin>>num1>>num2;
}
friend Complex operator+(Complex c1, Complex c2);   
void display()
{
  cout<<num1<<"+"<<num2<<"i"<<"\n";
 }
};
Complex operator+(Complex c1,     Complex c2)
{
        Complex c;
        c.num1=c1.num1+c2.num1;
        c.num2=c1.num2+c2.num2;
        return(c);
}
int main()
{
        Complex c1,c2, sum;      
        c1.accept();     
        c2.accept();
        sum = c1+c2;          
        c1.display();  
       c2.display();
        sum.display();  
      return 0;
}
