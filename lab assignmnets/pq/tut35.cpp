#include<iostream>
using namespace std;
//volume of cube
int volume(int a)
{
    return a*a*a;
}
//volume of rectangle
int volume(int a,int b,int c)
{
    return a*b*c;
}
//volume of cylinder
float volume(int a,int b)
{
    return 3.14*a*a*b;
}
int main(){
    cout<<"volume of cube is "<<volume(4)<<endl;
    cout<<"volume of rectangle is "<<volume(4,5,6)<<endl;
    cout<<"volume of cylinder is "<<volume(2,4)<<endl;
    return 0;
}