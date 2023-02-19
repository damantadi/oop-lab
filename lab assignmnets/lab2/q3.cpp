//Name TDAMAN
//Roll 2005839
#include <iostream>
using namespace std;
struct employee
{
    int id;
    char name[10];
    int age;
    int basicsal;
    float grosssal;
};
void display(struct employee *s,int n )
{
     for (int i = 0; i < n; i++)
    {
        cout << "emp " << i + 1 << " id is " << s->id << endl;
        cout << "emp " << i + 1 << " name is " << s->name << endl;
         cout << "emp " << i + 1 << " age is " << s->age << endl;
        cout << "emp " << i + 1 << " salary is " << s->basicsal << endl;
    }
}
int main()
{int n;
cout<<"enter no. of employees"<<endl;
cin>>n;
    employee emp[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter emp id :";
        cin >> emp[i].id;
        cout << "enter emp name: ";
        cin >> emp[i].name;
        cout << "enter emp age: ";
        cin >> emp[i].age;
        cout << "enter emp salary:";
        cin >> emp[i].basicsal;
    }
  display(emp,n);
    for (int i = 0; i < n; i++)
    {
        emp[i].grosssal = (emp[i].basicsal) + (emp[i].basicsal * 0.8) + (emp[i].basicsal * 0.1);
        cout << "employee " << i + 1 << " grosssalary is " << emp[i].grosssal << endl;
    }
    return 0;
}