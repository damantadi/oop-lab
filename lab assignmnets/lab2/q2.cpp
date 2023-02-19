//Name T.DAMAN
// roll 2005839
#include <iostream>
using namespace std;
struct student
{
    char firstName[50];
    int roll;
    int marks[5];
} s[10];
int total(struct student k[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int total = 0;
        for (int j = 0; j < 5; j++)
        {
            total += k[i].marks[j];
        }
        cout << "total marks of student " << i + 1 << " is " << total << endl;
        cout << "percentage of student " << i + 1 << " is " << (total / 5) << endl;
        if ((total / 5) >= 90)
        {
            cout << "Roll number: " << i + 1 << endl;
            cout << "First name: ";
            puts(s[i].firstName);
            cout << endl;
            cout << "percentage obtained is between 90-100" << endl;
        }
        else if ((total / 5) < 90 && ((total / 5) > 80))
        {
            cout << "Roll number: " << i + 1 << endl;
            cout << "First name: ";
            puts(s[i].firstName);
            cout << endl;
            cout << "percentage obtained is between 80-90" << endl;
        }
        else if ((total / 5) > 70 && ((total / 5) < 80))
        {
            cout << "Roll number: " << i + 1 << endl;
            cout << "First name: ";
            puts(s[i].firstName);
            cout << endl;
            cout << "percentage obtained is between 70-80" << endl;
        }
        else
        {
            cout << "you have to give the exam again" << endl;
        }
    }
}
void set_data(struct student k[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        s[i].roll = i + 1;
        cout << "For roll number " << s[i].roll << endl;
        cout << "Enter first name: " << endl;
        cin >> s[i].firstName;
        cout << "Enter marks: " << endl;
        for (int j = 0; j < 5; j++)
        {
            cin >> s[i].marks[j];
        }
    }
}
void get_data(struct student k[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << "Roll number: " << i + 1 << endl;
        cout << "First name: ";
        puts(s[i].firstName);
        for (int j = 0; j < 5; j++)
        {
            cout << " marks of student " << i + 1 << " in subject " << i + 1 << " is " << s[i].marks[j] << endl;
        }
        cout << endl;
    }
}
void sort(struct student s[],int n)
{
    for(int i=0;i<n;i++)
    {int temp;
        for(int j=0;j<5;j++)
        {
            for(int k=j+1;k<=4;k++)
            {
                if(s[i].marks[j]>s[i].marks[k])
                {
                temp=s[i].marks[j];
                s[i].marks[j]=s[i].marks[k];
                s[i].marks[k]=temp;
                }
            }
        }
    }
for(int i=0;i<n;i++)
{
    for(int k=0;k<5;k++)
    {
        cout<<s[i].marks[k]<<" ";
    }
    cout<<endl;
}
}
int main()
{
    int n;
    cout << "Enter information of students:" << endl;
    cout << "enter the no of students:";
    cin >> n;
    set_data(s, n);
    cout << "---------------------------" << endl;
    get_data(s, n);
    total(s, n);
    sort(s,n);
    return 0;
}