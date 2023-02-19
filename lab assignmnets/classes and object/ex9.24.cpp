#include<iostream>
using namespace std;
class student
{
int roll;
int marks[3];
public:
void set()
{
    cout<<"enter the roll no:";
    cin>>roll;
    cout<<"enter the marks in 3 subjects:";
    for(int i=0;i<3;i++)
    {
        cin>>marks[i];
    }
}
void get()
{
    cout<<"roll: "<<roll<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<" marks in subject "<<i+1<<" is "<<marks[i]<<endl;
    }
}
void display( )
{
for(int i=0;i<3;i++)
{
cout<<"marks is subject "<<i+1<<" is "<<marks[i]<<endl;;
}
}
};
int main(){
    student *s[3];
    int n=0;
    while(n<3)
    {
        s[n]=new student;
        n++;
    }
    for(int i=0;i<3;i++)
    {
        s[i]->set();
    }
    for(int i=0;i<3;i++)
    {
        s[i]->get();
    }
    int k;
  cout<<"enter the serial no of student you want the marks:";
  cin>>k;
  s[k-1]->display();
    return 0;
}