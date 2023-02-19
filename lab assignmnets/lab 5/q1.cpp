#include<iostream>
using namespace std;
class stud
{
char name[10];
int roll;
int marks;
public:
void setdata()
{
cout<<"enter the name of student :"<<endl;
cin>>name;
cout<<"enter the roll of student"<<endl;
cin>>roll;
cout<<"enter total marks of student:"<<endl;
cin>>marks;
}
void getdata()
{
    cout<<"the name of student is "<< name<<endl;
    cout<<"roll no. is "<<roll<<endl;
    cout<<"total marks is "<<marks <<endl;
}
};
int main(){
    stud s1;
    s1.setdata();
    s1.getdata();

    return 0;
}