#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    const int a =5;
    cout<<"the value of a is:"<<a<<endl;
   // a=10; 
    //the value of a will not chage due to constant a
    //cout<<"the value of a is: "<<a<<endl;
    int x=10,y=200,z=4000,w=50000;
    cout<<"the value of x is "<<x<<endl;
    cout<<"the value of y is "<<y<<endl;
    cout<<"the value of z is "<<z<<endl;
    cout<<"the value of w is "<<w<<endl;
    cout<<"the value of x with setw is "<<setw(5)<<x<<endl;
    cout<<"the value of y with setw is "<<setw(5)<<y<<endl;
    cout<<"the value of z with setw is "<<setw(5)<<z<<endl;
    cout<<"the value of w with setw is "<<setw(5)<<w<<endl;
    cout<<"the value of w with setw is "<<setw(3)<<w<<endl;

    return 0;
}
