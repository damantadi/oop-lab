#include<iostream>
#include<string.h>
using namespace std;
class stud1;
class stud
{
char course[10];
public:
void get()
{
    cout<<"enter the course:"<<endl;
   
    cin.getline(course,10);
}
void set()
{
    cout<<"selected course student 2 is :"<<course<<endl;
}
friend class stud1;
};
class stud1
{
char course[10];
public:
void get()
{
    cout<<"enter the course:"<<endl;
  
    cin.getline(course,10);
}
void swap(stud &s1)
{
char temp[20];
strcpy(temp,s1.course);
strcpy(s1.course,course);
strcpy(course,temp);
}
void set()
{
    cout<<"selected course of student 1 is :"<<course<<endl;
}
};
int main(){
    stud1 s1;
    stud s2;
    s1.get();
    s1.set();
    s2.get();
    s2.set();
    s1.swap(s2);
 cout<<"after changing th course:"<<endl;
    s1.set();
    s2.set();
    return 0;
}