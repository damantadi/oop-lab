#include<iostream>
using namespace std;
class student
{
char *name;
int roll;
public:
int total_marks;
void get()
{
    cout<<"enter the name of student:";
    name=new char(10);
    cin.ignore();
    cin.getline(name,10);
    cout<<"enter the roll:";
    cin>>roll;
    cout<<"enter the total marks";
    cin>>total_marks;
}
void show()
{
    cout<<"NAME: "<<name<<endl;
    cout<<"ROLL: "<<roll<<endl;
    cout<<"Total_Marks: "<<total_marks<<endl;
}

};
class topper:public student
{
public:
void getdata()
{
    get();
}
friend void set(topper s[5]);
void showdata()
{
show();
}
};
void set(topper s[5])
{  
    int k=s[0].total_marks;
    int l;
    for(int i=1;i<5;i++)
    {
     if(k<s[i].total_marks)
     {
         k=s[i].total_marks;
         l=i;
     }   
    }
    s[l].show();
}
int main(){
    topper t[5];
    for(int i=0;i<5;i++)
    {
        t[i].getdata();
    }
    for(int i=0;i<5;i++)
    {
        t[i].showdata();
    }
    cout<<"**************"<<endl;
    cout<<"   topper  :"<<endl;
    cout<<"**************"<<endl;
set(t);

    return 0;
}