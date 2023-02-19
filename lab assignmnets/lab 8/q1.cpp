//T.DAMAN
//2005839
// Q1
#include<iostream>
using namespace std;
class comp
{
    public:
    int real,imag,real2,imag2;
    comp()
    {
        real=0;
        real2=0;
        imag=0;
        imag2=0;
        
    }
    comp(int real1)
    {
        real=real1;
        imag=real1;  
    }
     comp(int real3,int imag3)
    {
        real2=real3;
        imag2=imag3;
    }
  friend void complexproduct(comp c ,comp c2);
   
};
void complexproduct(comp c ,comp c2)
    {
        int x=c.real*c2.real2+(c.imag*c2.imag2*(-1));
        int y=(c.real*c2.imag2)+(c.imag*c2.real2);
        cout<<"the resultant is : "<<x<<"+"<<y<<"i";
    }
int main()
{
    int real,real2,imag2;
    cout<<"ENTER REAL AND IMAGINARY VALUE FOR NUMBER 1: ";
    cin>>real;
    cout<<"ENTER REAL VALUE FOR NUMBER 2: ";
    cin>>real2;
    cout<<"ENTER IMAGINARY VALUE FOR NUMBER 2: ";
    cin>>imag2;
    comp c(real);
    comp c2(real2,imag2);
    comp c3;
  complexproduct(c,c2);
}