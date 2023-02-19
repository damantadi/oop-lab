#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age:"<<endl;
    cin>>age;
    if(age<=17)
    {
        cout<<"you cannot get the vaccine"<<endl;
    }
    else if(age>=18&&age<=44)
    {
        cout<<"you can get vaccine"<<endl;
    }
    else
    {
        cout<<"you are vaccinated"<<endl;

    }
    return 0;
}