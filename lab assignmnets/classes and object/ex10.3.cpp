#include <iostream>
using namespace std;
class cons
{
    int data;

public:
    cons(int k)
    {
        data = k;
    }
    void set()
    {
        cout << "the value of data is:" << data << endl;
    }
};
int main()
{
    cons s1(6);
    s1.set();
    cons s2 = 10;
    s2.set();
    return 0;
}