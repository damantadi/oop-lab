#include <iostream>
#include<string.h>

using namespace std;
class st
{
    char *s_name;
    int roll;
    int sec;
    char *gender;
    int phn_no;

public:
    st()
    {
        cout << "enter the name of student";
        s_name = new char(10);
        cin.ignore();
        cin.getline(s_name, 10);
        cout << "enter the roll of student";
        cin >> roll;
        cout << "enter the section :";
        cin >> sec;
        cout << "enter the gender";
        gender = new char(8);
        cin.ignore();
        cin.getline(gender, 8);
        cout << "enter the phone no:";
        cin >> phn_no;
    }
    void display(int n)
    { 
        cout << "NAME: " << s_name << endl;
        cout << "ROLL: " << roll << endl;
        cout << "SECTION: " << sec << endl;
        cout << "GENDER: " << gender << endl;
        cout << "PHONE NO: " << phn_no << endl;
    }
};
int main()
{
    int n;
    cout << "enter the no. of students :";
    cin >> n;
    cout << "***details_of_students***" << endl;
    st s[n];
    for (int i = 0; i < n; i++)
    {     
               s[i].display(n);
    }
        cout << "***************" << endl;
    
    return 0;
}