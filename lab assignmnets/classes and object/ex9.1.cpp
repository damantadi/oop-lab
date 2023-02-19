#include<iostream>
using namespace std;
#include<math.h>
class triangle
{
    int a,b,c;
    float s;
    public:
    void set()
    {
        cout<<"enter the sides of triangle";
        cin>>a>>b>>c;
        s=((a+b+c)/2.0);
    }
    float get()
    { 
return pow((s*(s-a)*(s-b)*(s-c)),0.5);
    }
};
int main(){
  triangle t1;
  t1.set();
  cout<<"area is :"<<t1.get()<<endl;  

    return 0;
}