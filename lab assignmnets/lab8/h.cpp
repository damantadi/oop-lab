#include <iostream>
using namespace std;
class A
{
    int x, y;

public:
    void set();
    void get();
    void operator--()
    {
        x = --x;
        y = --y;
    }
};
void A::set()
{
    int a, b;
    cout << "enter the values :";
    cin >> a >> b;
    x = a;
    y = b;
}
void A::get()
{
    cout << "the value of x is " << x << " and the value of y is " << y << endl;
}
int main()
{
    A obj1;
    obj1.set();
    obj1.get();
    --obj1; //using urnary operator
    obj1.get();
    return 0;
}