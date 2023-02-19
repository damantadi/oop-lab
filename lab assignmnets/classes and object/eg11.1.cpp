#include <iostream>
using namespace std;
class oper
{
    int x;
    int y;
    int z;

public:
    oper(int n)
    {
        x = n;
        y = n;
        z = n;
        cout << endl;
    }
    int operator-()
    {
        x = -x;
    }
    int operator--()
    {
        y = y - 1;
    }
    int operator++()
    {
        z = z + 1;
    }

    void show()
    {
        cout << "using - operator: " << x << endl;
        cout << "using -- operator:" << y << endl;
        cout << "using ++ operator:" << z << endl;
    }
};
int main()
{
    oper o(5);
    o.show();
    -o;
    --o;
    ++o;
    o.show();
    return 0;
}