//wap using overloading to overload operator -- using friend function
#include <iostream>
using namespace std;
class num
{
    int a, b, c;

public:
    num(int i, int j, int k)
    {
        a = i;
        b = j;
        c = k;
    }
    void show()
    {
        cout << a <<" "<<b<<" "<< c << endl;
    }
    void operator--()
    {
        a = --a;
        b = --b;
        c = --c;
    }
};
int main()
{
    num N(3, 4, 5);
    N.show();
    --N;
    N.show();
    return 0;
}