#include<iostream>
using namespace std;
template<class s1,class s2,class s3>
void display(s1 name,s2 roll,s3 marks)
{
cout<<"NAME:"<<name<<endl;
cout<<"ROKK:"<<roll<<endl;
cout<<"MARKS:"<<marks<<endl;
}
int main(){
    int roll;
    char name[20];
    float marks;
    cout<<"enter the name of student:";
    cin.ignore();
    cin.getline(name,20);
    cout<<"enter the roll:";
    cin>>roll;
    cout<<"enter the marks:";
    cin>>marks;
    display(name,roll,marks);
    return 0;
}