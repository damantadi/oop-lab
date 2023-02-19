#include <iostream>
#include <string.h>
using namespace std;
class bank
{
    int account_no;
    int balance;
    char name[15];

public:
    bank()
    {
        cout << "please enter your account no:" << endl;
        cin >> account_no;
        cout << "enter your balance amount:" << endl;
        cin >> balance;
        cout << "enter he name of account holder" << endl;
        cin.ignore();
        cin.getline(name, 15);
    }
    void withdrawn()
    {
        int amount_withdraw, NO;
        char NAME[15];
        cout << "enter your name and account no." << endl;
        cin.ignore();
        cin.getline(NAME, 15);
        cin >> NO;
        if (strcmp(name, NAME) && (account_no == NO))
        {
            cout << "enter the amount you want to withdraw" << endl;
            cin >> amount_withdraw;
            if ((balance - amount_withdraw) < 500)
            {
                cout << "! srry you cannot withdraw !" << endl;
                cout << "atleast you have to keep minnimum 500rs in it" << endl;
            }
            else
            {
                balance -= amount_withdraw;
            }
        }
        else
            cout << "invalid" << endl;
    }
    void deposit()
    {
        int depositamount;
        cout << "enter the amount to be deposited" << endl;
        cin >> depositamount;
        balance += depositamount;
    }
    void check_balance()
    {
        cout << "remaining balance in your account is : " << balance << endl;
    }
};
int main()
{
    bank b1;
    b1.withdrawn();
    b1.check_balance();
    b1.deposit();
    b1.check_balance();
    return 0;
}