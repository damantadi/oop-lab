#include <iostream>
using namespace std;
class employee
{
    char name[15];
    char dept[15];

public:
    void get()
    {
        cout << "enter the name:" << endl;

        cin.getline(name, 15);
        cout << "enter the department:" << endl;

        cin.getline(dept, 15);
    }
    void show()
    {
        cout << "NAME: " << name << endl;
        cout << "DEPT: " << dept << endl;
    }
};
class contract : public employee
{
    int salary;
    int hrs;
    int joining_date;
    int year_of_transfer;

public:
    void getdata()
    {
        get();
        cout << "enter the salary:" << endl;
        cin >> salary;
        cout << "enter the no of hours work per day:" << endl;
        cin >> hrs;
        cout << "enter the joining date:" << endl;
        cin >> joining_date;
        cout << "enter the year of transfer:" << endl;
        cin >> year_of_transfer;
    }
    void showdata()
    {
        show();
        cout << "SALARY: Rs" << salary << endl;
        cout << "HOURS WORK PER DAY: " << hrs <<"hrs"<< endl;
        cout << "JOINING DATE: " << joining_date << endl;
        cout << "YEAR OF TRANSFER: " << year_of_transfer << endl;
    }
};
class permanent : public employee
{
    int salary;
    int hrs;
    int joining_date;
    int retire_date;

public:
    void getdata()
    {
        get();
        cout << "enter the salary:" << endl;
        cin >> salary;
        cout << "enter the no of hours work per day:" <<endl;
        cin >> hrs;
        cout << "enter the joining date:" << endl;
        cin >> joining_date;
        cout << "enter the year of retirement:" << endl;
        cin >> retire_date;
    }
    void showdata()
    {
        show();
        cout << "SALARY: Rs" << salary << endl;
        cout << "HOURS WORK PER DAY: " << hrs <<"hrs"<< endl;
        cout << "JOINING DATE: " << joining_date << endl;
        cout << "YEAR OF retirement: " << retire_date << endl;
    }
};
int main()
{
    contract c1;
    c1.getdata();
    c1.showdata();
    permanent p1;
    p1.getdata();
    p1.showdata();
    return 0;
}