#include<iostream>
using namespace std;
template<class g>
g greater_one(g a,g b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main(){
    int a,b;
    cout<<"enter two values:"<<endl;
    cin>>a>>b;
    cout<<"greater of two numbers is :"<<greater_one(a,b)<<endl;
    float a1,b1;
    cout<<"enter two values:"<<endl;
    cin>>a1>>b1;
    cout<<"greater of two numbers is :"<<greater_one(a1,b1)<<endl;
    double a2,b2;
    cout<<"enter two values:"<<endl;
    cin>>a2>>b2;
    cout<<"greater of two numbers is :"<<greater_one(a2,b2)<<endl;
    return 0;
}