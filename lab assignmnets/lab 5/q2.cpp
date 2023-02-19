#include<iostream>
using namespace std;
class marks
{
private:
    int marks[3];

public:
    void setmarks()
    {
        for(int i=0;i<3;i++)
{
cout<<"enter the marks of "<<i+1<<" subject"<<endl;
cin>>marks[i];
}   
 }
 void getvalues()
 {
     int totalmarks=0;
     float per;
     for(int i=0;i<3;i++)
     {
         totalmarks+=marks[i];
     }
     cout<<"total marks is "<<totalmarks<<endl;
per=totalmarks/3.0;
cout<<"percentage of student is :"<<per;
 }
};

int main(){
  marks m1;
    m1.setmarks();
    m1.getvalues();
    return 0;
}