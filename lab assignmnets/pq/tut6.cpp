#include<iostream>

using namespace std;
int a=100;
int main()
{
    int a=50;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of global a is "<<::a;
    return 0;
}