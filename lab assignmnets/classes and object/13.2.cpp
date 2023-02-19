#include<iostream>
using namespace std;
class student
{
char *name;
int roll;
public:
void get()
{
    int n;
    cout<<"enter the size of characters:";
    cin>>n;
    name=new char(n);
    cin.ignore();
    cin.getline(name,n);
    cout<<"enter the roll";
    cin>>roll;
}   
void show()
{
    cout<<"NAME:"<<name<<endl;
    cout<<"ROLL:"<<roll<<endl;
}

};
class fees:public student
{
int fees;
public:
void submit()
{
cout<<"enter the fees to submit:";
cin>>fees;
}
void recipt()
{
    cout<<"you have succesfully paide the fees "<<fees<<endl;
}
};
class result:public student
{
int marks[3];
char grade[5];
public:
void getmarks()
{ 
    get();
    cout<<"enter the marks of 3 subjects:";
    for(int i=0;i<3;i++)
    {
        cin>>marks[i];
    }
    int total_marks=0;
    for(int i=0;i<3;i++)
    {
        total_marks+=marks[i];
    }
   if(total_marks>90)
   {
       grade[0]='A';
   }
   else if(total_marks>80 && total_marks<90)
   {
       grade[0]='B';
   }
   else
   {
       grade[0]='C';
   }
}
void showresult()
{
    show();
    for(int i=0;i<3;i++)
    {
        cout<<"marks in "<<i+1<<"subject"<<marks[i]<<endl;

}
cout<<"Grade :"<<grade<<endl;
}
};
int main(){
 result r;
 r.getmarks();
 r.showresult();
 fees f;
 f.submit();
 f.recipt();
    return 0;
}