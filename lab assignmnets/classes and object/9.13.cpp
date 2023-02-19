#include<iostream>
#include<string.h>
using namespace std;
class x
{
    char name[20];
    int marks;
    public:
    void getdata()
    {
        cout<<"enter the name and marks of students"<<endl;
        cin.ignore();
        cin.getline(name,20);
        cin>>marks;
    }
void display()
{
    cout<<"Name of student : "<<name<<" \t marks:"<<marks<<endl;
}
friend void topper(x s[],int n);
};
void topper(x s[],int n)
{ int highest=s[0].marks;
char topper[10];
strcpy(topper,s[0].name);
    for(int i=0;i<n-1;i++)
    {
if(highest<s[i+1].marks)
{
highest=s[i+1].marks;
strcpy(topper,s[i+1].name);
}
    }
    cout<<"highest marks is :"<<highest<<" obtained by :"<<topper<<endl;
}
int main(){
    int n;
    cout<<"enter the numbr of students"<<endl;
    cin>>n;
    x s[n];
    for(int i=0;i<n;i++)
    {
        s[i].getdata();
    }
    for(int i=0;i<n;i++)
    {
        s[i].display();
    }
 topper(s,n);   
    return 0;
}