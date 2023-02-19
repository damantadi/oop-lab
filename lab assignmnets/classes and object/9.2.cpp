#include<iostream>
using namespace std;
class stud{
int roll;
char name[10];
int marks[3];
int total;
public:
void getdata();
void display();
int tot();
};
void  stud:: getdata(){
    cout<<"enter your roll"<<endl;
    cin>>roll;
    cout<<"enter the name"<<endl;
    cin.ignore();
    cin.getline(name,10);
    cout<<"enter the marks"<<endl;
    for(int i=0;i<3;i++)
    {
        cin>>marks[i];
    }
}
void stud :: display()
{
    cout<<"ROLL NO,.:"<<roll<<endl;
    cout<<"NAME:"<<name<<endl;
    for(int i=0;i<3;i++)
    cout<<"marks in subject "<<i+1<<" is :"<<marks[i]<<endl;
}
int stud ::tot()
{
    int sum=0;
    for(int i=0;i<3;i++)
    sum+=marks[i];
return sum;
}
int main(){
    stud d;
    d.getdata();
    d.display();
    int total_marks=d.tot(); 
    cout<<"total marks obtained is "<<total_marks;
    return 0;
}