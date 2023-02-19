#include <iostream>
using namespace std;
#include <string.h>
class store
{
    int books;
    char *author;
    char *title;
    int no_of_copies;
    int price;
    int total_price;

public:
    store()
    {
        cout << "enter the title";
        title = new char(10);
        cin.ignore();
        cin.getline(title, 10);
        cout << "enter the author";
        author = new char(10);
        cin.ignore();
        cin.getline(author, 10);
        cout << "enter the no of copies present";
        cin >> no_of_copies;
        cout << "enter the price of each";
        cin >> price;
    }
    friend void search(store s1, char *s);
    void display()
    {
        cout << "author name :" << author << endl;
        cout << "title :" << title << endl;
        cout << "price of each :" << price << endl;
        cout << "no of copies present:" << no_of_copies << endl;
    }
};
void search(store s1, char *s)
{
    int k;
    s1.total_price = 0;
    if (strcmp(s, s1.title) == 0)
    {
        cout << "found" << endl;
        cout << "enter the no of copies you want";
        cin >> k;
        if (s1.no_of_copies - k >= 0)
        {
            s1.total_price = s1.price * k;
            s1.no_of_copies -= k;
    cout << "total price is:" << s1.total_price << endl;
    cout << "no of copies left: " << s1.no_of_copies << endl;
        }
    }
    else
    {
        cout << "not found" << endl;
    }
}
int main()
{
    store s1[3];
    for (int i = 0; i < 3; i++)
    {
        s1[i].display();
    }
    char s[10];
    cout << "enter the title of book you want ";
    cin >> s;
    for (int i = 0; i < 3; i++)
    {
        search(s1[i], s);
    }
    return 0;
}