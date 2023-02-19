#include <iostream>
#include <string.h>
using namespace std;
class strings
{
    char str1[20];

public:
    void get()
    {
        cout << "enter the string:";
        cin.getline(str1, 20);
    }
    void set()
    {
        cout << str1 << endl;
    }
    friend strings con(strings s1, strings s2);
};
strings con(strings s1, strings s2)
{
    strings s3;
    strcat(s1.str1, s2.str1);
    strcpy(s3.str1, s1.str1);
    return s3;
}
int main()
{
    strings s1, s2, s4;
    s1.get();
    s2.get();
    s4 = con(s1, s2);
    s1.set();
    s2.set();
    s4.set();
    return 0;
}