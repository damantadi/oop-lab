#include <iostream>
using namespace std;
class binary
{

    string a;

public:
    void write();
    void chk();
    void complement();
};
void binary ::write()
{

    cout << "enter a number:" << endl;
    cin >> a;
}
void binary ::chk()
{
    for (int i = 0; i < a.length(); i++)
    {
        if (a.at(i) != '0' && a.at(i) != '1')
        {
            cout << "it is not a binary number" << endl;
            exit(0);
        }
        else if (a.at(i) = '1')
            a.at(i) = '0';
        else
            a.at(i) = '1';
    }
}
void binary ::complement()
{
    for (int i = 0; i < a.length(); i++)
    {
        if (a.at(i) != '0' && a.at(i) != '1')
        {
            exit(0);
        }
        else if (a.at(i) == '1')
        {
            a.at(i) = '0';
            cout << "" << a.at(i);
        }
        else if (a.at(i) = '0')
        {
            a.at(i) = '1';
            cout << "" << a.at(i);
        }
    }

    /*for(int i=0;i< a.length();i++)
{
    cout<<""<<a.at(i);
}*/
}
int main()
{
    binary m;
    m.write();
    m.chk();
    cout << "the one complement is :" << endl;
    m.complement();
    return 0;
}