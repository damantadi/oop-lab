//NAME T.DAMAN 
//ROLL 2005839 
#include <iostream>
using namespace std;
struct student
{
    char firstName[50];
    int roll;
    int marks[5];
} s;

int main()
{

    cout << "Enter information of student:" << endl;
    cout << "Enter roll: " << endl;
    cin>>s.roll;
    cout << "Enter first name: " << endl;
    cin>>s.firstName;
    cout << "Enter marks: " << endl;
    for (int j = 0; j < 5; j++)
    {
        cin>>s.marks[j];
    }
    cout << "---------------------------\n";
    cout << "\nRoll number: " << s.roll << endl;
    cout << "First name: " << s.firstName << endl;
    for (int j = 0; j < 5; j++)
    {
        cout << " marks of student in sub " << j + 1 << " is " << s.marks[j] << endl;
    }
    return 0;
}
