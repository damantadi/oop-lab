#include<iostream>
using namespace std;
float area(int r)
{
    return 3.14*r*r;
}
int main(){
    int r;
    float a;
    cout<<"enter the radius:"<<endl;
    cin>>r;
    a=area(r);
    cout<<"area of circle is :"<<a<<endl;
    return 0;
}