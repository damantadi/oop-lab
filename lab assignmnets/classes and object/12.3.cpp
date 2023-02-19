#include <iostream>
using namespace std;
class person
{
protected:
    char name[30];
    int age;

public:
    void getdata()
    {
        cout << "enter the name" << endl;
        cin.ignore();
        cin.getline(name, 30);
        cout << "enter the age:" << endl;
        cin >> age;
    }
    void showdata()
    {
        cout << "NAME:" << name << endl;
        cout << "AGE:" << age << endl;
    }
};
class batsman : public person
{
    int runs;
    int odi_played;
    int no_halfcenturies;
    int no_centuries;

public:
    void getdetails()
    {
        getdata();
        cout << "enter the runs made:" << endl;
        cin >> runs;
        cout << "enter the no. of odi played :" << endl;
        cin >> odi_played;
        cout << "enter the no. of half centuries made :" << endl;
        cin >> no_halfcenturies;
        cout << "enter the no. of centuries made :" << endl;
        cin >> no_centuries;
    }
    void show_alldetails()
    {
        showdata();
        cout << "RUNS MADE:" << runs << endl;
        cout << "odi played :" << odi_played << endl;
        cout << "HALF CENTURIES MADE:" << no_halfcenturies << endl;
        cout << "CENTURIES MADE:" << no_centuries << endl;
    }
};
int main()
{
    batsman b1;
    b1.getdetails();
    b1.show_alldetails();
    return 0;
}