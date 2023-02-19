#include<iostream>
using namespace std;
class x
{
    int num;
    int din;
public:
x()
{ 
   
    cout<<"enter the numerator and denominator"<<endl;
  cin>>num>>din;

}
void operator++()
{
    num=num+din;
}
void operator--()
{
    num=num-din;
}
void show()
{
  
   {cout<<" "<<num<<"/"<<din;}  
   cout<<endl;
}
};
int main(){
 x a1;
 a1.show();   
 --a1;
 a1.show();
 ++a1;
 a1.show();
    return 0;
}