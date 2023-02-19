#include<iostream>
using namespace std;
int main()
{  //refernce variables
    int x=10;
    int &y=x;
    cout<<"the value of x is:"<<x;
    cout<<"\n the value of y is "<<y;
//typecasting
  int a=50;
  float b=99.9;
  cout<<"\nthe value of a is "<<float(a)<<endl;
  cout<<"the value of a is "<<(float)a<<endl;
  cout<<"the value of b is "<<int(b)<<endl;
  cout<<"the value of b is "<<(int)b<<endl;


    return 0;
}