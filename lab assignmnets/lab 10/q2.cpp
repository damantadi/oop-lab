#include<iostream>
using namespace std;
class employee
{
int roll;
char dept[6];
public:
void get()
{
    cout<<"enter the roll:";
    cin>>roll;
    cout<<"enter the dept:";
cin>>dept;
}
void show()
{
    cout<<"roll no:"<<roll<<endl;
    cout<<"dept:"<<dept<<endl;
}
};
class student : virtual public employee
{
int marks[3];
public:
void getmarks()
{
    cout<<"enter the marks in 3 subjects:"<<endl;
    cin>>marks[0]>>marks[1]>>marks[2];
}
int total()
{
    return (marks[0]+marks[1]+marks[2]);
}
};
class faculty : virtual public employee
{

int maxmarks[3];
public:
void getmarks2()
{
    cout<<"enter the max marks in 3 subjects:"<<endl;
    cin>>maxmarks[0]>>maxmarks[1]>>maxmarks[2];
}
int totalmaxmarks()
{
    return (maxmarks[0]+maxmarks[1]+maxmarks[2]);
}
};
class supervisor:public student,public faculty
{
    public:
void result()
{
    cout<<"marks got "<<total()<<" out of  "<<totalmaxmarks()<<endl;
    float per=(total()/float(totalmaxmarks()))*100;
cout<<"percentage: "<<per<<endl;
}
};
int main(){
 supervisor s1;
 s1.getmarks();
 s1.total();
s1.getmarks2();
s1.totalmaxmarks();
s1.result();
    return 0;
}