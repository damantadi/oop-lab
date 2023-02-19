#include<iostream>
using namespace std;
class base
{
    int roll;
    char course[10];
    public:
    int marks[3];
    void getdata()
    {
        cout<<"enter your roll no."<<endl;
        cin>>roll;
        cout<<"enter your course:"<<endl;
        cin.ignore();
        cin.getline(course,10);
    }
    void show()
    {
        cout<<"roll :"<<roll<<endl;
        cout<<"course: "<<course<<endl;
    }
};
class derived : public base
{
int total;
public:
void getmarks()
{cout<<"enter the marks :"<<endl;
    for(int i=0;i<3;i++)
    {
cin>>marks[i];
    }
}
void totalmarks()
{ int total=0;
    for(int i=0;i<3;i++)
    {
total+=marks[i];
    }
cout<<"total marks obtained is :"<<total<<endl;
}
};
int main(){
    derived d1;
    d1.getdata();
    d1.getmarks();
    d1.show();
    d1.totalmarks();
    return 0;
}