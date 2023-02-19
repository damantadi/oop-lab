#include<iostream>
using namespace std;
class employee
{
int empno;
char *name;
char *des;
public:
void get()
{
cout<<"enter the empno:";
cin>>empno;
cout<<"enter the name of employee:";
name=new char(10);
cin.ignore();
cin.getline(name,10);
des=new char (10);
cout<<"enter the designation:";
cin.ignore();
cin.getline(des,10);
}
void show()
{
    cout<<"empno: "<<empno<<endl;
    cout<<"name: "<<name<<endl;
    cout<<"des: "<<des<<endl;
}
};
class qualification:public employee
{
int ug;
int pg;
public:
int exp;
void getdata()
{
    get();
cout<<"enter the year of ug(specific year)";
cin>>ug;
cout<<"enter the year of pg";
cin>>pg;
cout<<"enter the year of experience:";
cin>>exp;
}
void showdata()
{
show();
cout<<"pg:"<<pg<<endl;
cout<<"ug:"<<ug<<endl;
cout<<"experience:"<<exp<<endl;
}
};
class salary:public qualification
{ 
    public:
    void set()
    {
        getdata();

    }
    void increments()
    {
        showdata();
if(exp>3)
{
    cout<<"you will get promotion with increment in salary"<<endl;
}
else
{
    cout<<"you have to work "<<exp-3<<"years to get promotion"<<endl;
}
    }
};
int main(){
 salary s;
 s.set();
 s.increments();   
    return 0;
}