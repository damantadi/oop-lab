#include <iostream>
#include <string.h>
using namespace std;

class books
{
private:
    char author[20];
    char title[20];
    char publisher[50];
    int price;
    int copies;
    int stock;

public:
    void setData()
    {
        cin.ignore();
        cout << "\nEnter the following details:\nAuthor's Name:";
        gets(author);
        cout << "\nTitle :";
        gets(title);
        cout << "\nPublisher :";
        gets(publisher);
        cout << "\nPrice :";
        cin >> price;
        cout << "\nNumber of copies:";
        cin >> copies;
        cin.ignore();
        stock = 1;
    }
    void printdata()
    {
        cout << "author name is:" << author << "\ntitle is :" << title << "\npublisher is :" << publisher << "\nprice is :" << price << endl;
    }
    void check()
    {
        cin.ignore();
        char t[20], aut[20];
        int cop;
        cout << "\nEnter the following details to search for book:\n";
        cout << "\nTitle of the book:";
        gets(t);
        cout << "\nEnter Author's Name :";
        gets(aut);
        cout << "\nNumber of copies:";
        cin >> cop;
        if (strcmp(t, title) == 0 && strcmp(aut, author) == 0 && (cop <= copies))
        {
            cout << "\nBook is availabe in store\nPrice = " << cop * price << endl;
            copies -= cop;
        }
        else
        {
            cout << "Not available" << endl;
        }
    }
};
int main()
{
    int n;
    cout << "enter the no. of books " << endl;
    cin >> n;
    books bk[n];
    char choice = 'y';
    int ch;
    while (choice)
    {
        cout << "\n1.SETDATA\n2.SEARCH\n3.PRINTDATA";
        cout << "\nEnter the choice:- ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            for (int i = 0; i < n; i++)
            {
                bk[i].setData();
            }
            break;
        case 2:
            for (int i = 0; i < n; i++)
            {
                bk[0].check();
            }
            break;
        case 3:
            for (int i = 0; i < n; i++)
            {
                bk[i].printdata();
            }
            break;
        }
        cout << "Do you want to Continue:- ";
        cin >> choice;
    }
    return 0;
}