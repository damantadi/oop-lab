#include<iostream>
using namespace std;
void func(int a)
{
try
{
    if(a<18)
    throw ("not allowed");
    else if(a>18 && a<45)
    cout<<"allowed to take vaccine"<<endl;

}
catch(char const* s)
{
    throw ;
}
}
int main(){
    int age;
    cout<<"enter the value";
    cin>>age;
    try
    {
        func(age);
    }    
catch(char const* s)
{
    cout<<"if age is 18+ you can only take vaccine"<<endl;
}
    return 0;
}