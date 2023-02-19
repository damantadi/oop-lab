#include <iostream>
#include <string.h>
using namespace std;
class x
{
    char *s;
    int n;

public:
    x()
    {
        n = 0;
        s = NULL;
    }
    x(char *str)
    {
        n = strlen(str);
        s = new char(n + 1);
        strcpy(s, str);
    }
    x operator+=(x b)
    {
        x a;
        a.n = n + b.n;
        a.s = strcat(s, b.s);
        return a;
    }
    int operator==(x b)
    {
        if (strcmp(s, b.s) == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void show()
    {
        cout << s << endl;
    }
};
int main()
{
    x a1("hello");
    cout << "1st string" << endl;
    a1.show();
    char str[10];
    cout << "enter a string" << endl;
    cin >> str;
    x a2(str);
    cout << "2nd string" << endl;
    a2.show();
    cout << "concatination of string" << endl;
    a1 += a2;
    cout << "3rd string" << endl;
    a1.show();
    cout << "comparison of string" << endl;
    if (a1 == a2)
    {
        cout << "equal" << endl;
    }
    else
    {
        cout << "not equal" << endl;
    }
    return 0;
}