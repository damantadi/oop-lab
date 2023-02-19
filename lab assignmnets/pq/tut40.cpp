#include<iostream>
using namespace std;

class worker{
    int id;
    int salary;
public:
void set()
{
    cout<<"enter the worker id:"<<endl;
    cin>>id;
    cout<<"enter the worker salary:"<<endl;
    cin>>salary;
}
void get()
{
    cout<<"the worker id is "<<id<<" and the salary is "<<salary<<endl;
}
};
int main(){
    worker google[10];
    for(int i=0;i<10;i++)
    {
        google[i].set();
        google[i].get();
    }
    return 0;
}