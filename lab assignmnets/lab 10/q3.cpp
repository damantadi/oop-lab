#include <iostream>
using namespace std;
#include <conio.h>
class student

{
public:
    virtual void getdata() = 0;

    virtual void display() = 0;
};

class science : public student

{
    int r;
    char n[10];

public:
    void getdata()
    {
        cout << "science stream" << endl;
        cout << "enter name";
        cin >> n;
        cout << "enter roll";
        cin >> r;
    }

    void display()

    {
        cout << endl
             << "name=" << n;
        cout << endl
             << "roll=" << r << endl;
    }
};
class arts : public student
{
    int r;
    char n[10];

public:
    void getdata()
    {
        cout << "arts stream";
        cout << endl
             << "enter name";
        cin >> n;
        cout << "enter roll";
        cin >> r;
    }
    void display()
    {
        cout << endl
             << "name=" << n;
        cout << endl
             << "roll=" << r << endl;
    }
};

int main()

{
    student *ptr[3];
    science s;
    arts a;
    ptr[1] = &a;
    ptr[1]->getdata();
    ptr[1]->display();

    ptr[2] = &s;
    ptr[2]->getdata();
    ptr[2]->display();
    return 0;
}