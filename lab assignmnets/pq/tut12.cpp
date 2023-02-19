#include<iostream>
using namespace std;
int main()
{
        int age;
    cout<<"enter your age:"<<endl;
    cin>>age;
    switch(age)
    {
        case 17:
        cout<<"you are 17 only"<<endl;
        break;
        case 18:
        cout<<"you are 18 wow"<<endl;
        break;
         case 19:
         cout<<"you are 19 great!"<<endl;
         break;
         
        default:
        cout<<"no more cases"<<endl;
        break;

    }
    return 0;
}