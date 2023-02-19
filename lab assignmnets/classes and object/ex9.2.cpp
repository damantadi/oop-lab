#include<iostream>
using namespace std;
#include<math.h>
class triangle
{
    int a,b,c;
    float s;
    public:
  
   float area(int a,int b)
   {
return (a*b)/2.0;
   }
   float area(int a,int b,int c)
   {
       s=(a+b+c)/2.0;
return pow((s*(s-a)*(s-b)*(s-c)),0.5);
   }
};
int main(){
  triangle t1;
  cout<<"area is :"<<t1.area(5,4)<<endl;
  cout<<"area is :"<<t1.area(5,5,5)<<endl;


    return 0;
}