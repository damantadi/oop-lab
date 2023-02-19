//product of numbers using default arguments
#include <iostream>
using namespace std;
int product(int a = 1, int b = 1, int c = 1, int d = 1)
{
    return a * b * c * d;
}
int main()
{
    int a, b, c, d;
    cout << "enter four integers :";
    cin >> a >> b >> c >> d;
    cout << "product of 2 integers are " << product(a, b) << endl;
    cout << "product of 3 integers are " << product(a, b, c) << endl;
    cout << "product of 4 integers are " << product(a, b, c, d) << endl;
    return 0;
}