#include<iostream>
using namespace std;
class student{
int roll;
char course[5];
public:
int marks[3];
void getdata()
{
    cout<<"enter the roll"<<endl;
    cin>>roll;
    cout<<"enter th course :"<<endl;
    cin.ignore();
    cin.getline(course,5);
}
void show()
{
          cout<<"roll :"<<roll<<endl;
        cout<<"course: "<<course<<endl;
}
};
class result:private student
{
int total;
public:
void marksop()
{
    getdata();
    cout<<"enter the marks:";
    for(int i=0;i<3;i++)
    {
        cin>>marks[i];
    }
}
void totalmarks()
{
    int total=0;
    for(int i=0;i<3;i++)
    {
        total+=marks[i];
    }
    cout<<"total marks obtained is "<<total<<endl;
}
void showdata()
{
show();
totalmarks();
}
};
int main(){
 result r1;
 r1.marksop();
r1.showdata();
    return 0;
}