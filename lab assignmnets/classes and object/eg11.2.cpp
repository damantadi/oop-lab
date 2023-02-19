#include <iostream>
using namespace std;
class num
{
    int x;

public:
    num()
    {
        x = 0;
    }
    num(int n)
    {
        x = n;
    }
    num operator-()
    {
        num k;
        k.x = -x;
        return k;
    }
    void show()
    {
        cout << x << endl;
    }
};

int main()
{
    num n(-5);
    n.show();
    num n1;
    n1 = -n;
    n1.show();
    return 0;
}