#include <iostream>
#include <cmath>
using namespace std;
class calculator
{
public:
    int a, b;

    calculator(int x, int y) : a(x), b(y)
    {
        cout << "the valus of a is " << a << endl;
        cout << "the valus of b is " << b << endl;
        cout << "the valus of a + b is " << a + b << endl;
        cout << "the valus of a - b is " << a - b << endl;
        cout << "the valus of a * b is " << a * b << endl;
        cout << "the valus of a / b is " << a / b << endl;
    }
};

int main()
{
    calculator cal(1, 5);

    return 0;
}