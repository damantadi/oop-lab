//write a program which create  & usesarray of a objectclass(name ,age etc)
//Q3
#include <iostream>
using namespace std;
class employee
{
    private:
        char name[20];
        int age;
        double salary;
    public:
        void get()
        {
            cout<<"\nEnter the name of the employee:";
            cin>>name;
            cout<<"Enter the age of the employee:";
            cin>>age;
            cout<<"Enter the salary of the employee:";
            cin>>salary;
        }
        void display()
        {
            cout<<"\nName of the employee:"<<name<<endl;
            cout<<"Age of the employee:"<<age<<endl;
            cout<<"Salary of the employee:"<<salary<<endl;
        }
};
int main()
{
    int i,n;
    cout<<"Enter the number of employee:";
    cin>>n;
    employee e1[n];
    cout<<"Enter the details of the employee:"<<endl;
    for(i=0;i<n;i++)
    {
        e1[i].get();
    }
    cout<<"\n";
    cout<<"Your entered detalis are as follow:"<<endl;
    for(i=0;i<n;i++)
    {
        e1[i].display();
    }
    return 0;
}