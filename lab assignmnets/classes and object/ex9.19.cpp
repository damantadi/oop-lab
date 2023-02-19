#include<iostream>
using namespace std;
class a;
class b
{
int x;
public:
void get()
{
    cout<<"enter the value :";
    cin>>x;
}
friend class a;
};
class a
{
int y;
public:
void gets()
{
    cout<<"enter the value :";
    cin>>y;
}
void mean()
{ b b1;
b1.get();
float k;
   k=(b1.x+y)/2.0;
   cout<<"mean is :"<<k<<endl; 
}
};
int main(){
 a a1;
 a1.gets();
 a1.mean();   
    return 0;
}