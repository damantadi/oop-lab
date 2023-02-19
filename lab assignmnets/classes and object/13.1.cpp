#include<iostream>
using namespace std;
class employee
{
char *dept;
public:
void get()
{
    dept=new char(10);
    cout<<"enter the department:";
    cin.ignore();
    cin.getline(dept,10);
}
void show()
{
    cout<<"DEPARTMENT :"<<dept<<endl;
}
};
class s1:public employee
{
int salary;
int id;
int phn_no;
public:
void getl()
{ 
     get();
    cout<<"enter the salary:";
    cin>>salary;
    cout<<"enter the id:";
    cin>>id;
    cout<<"enter the phn_no:";
    cin>>phn_no;

}
void set()
{    show();
     cout<<"salary:"<<salary<<endl;
     cout<<"ID: "<<id<<endl;
     cout<<"Phn_no :"<<phn_no<<endl;
}
};
int main(){
    s1 s[5];
    for(int i=0;i<5;i++)
    {
    s[i].getl();
    s[i].set();
    }
    return 0;
}