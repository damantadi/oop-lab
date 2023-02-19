#include<iostream>
using namespace std;

class complex{
 int a;
 int b;
 public:
 void set(int x,int y)
 {
     a=x;
     b=y;
 }
 void get()
 {
     cout<<"the complex number is "<<a<<" + "<<b<<"i"<<endl;
 }
 void complexsum(complex c1,complex c2){
  a= c1.a + c2.a;
  b= c1.b + c2.b;  
 }
};
int main(){
    complex k,k2,k3;
    k.set(1,3);
    k.get();
    k2.set(3,4);
    k2.get();
    k3.complexsum(k,k2);
    k3.get();
    return 0;
}