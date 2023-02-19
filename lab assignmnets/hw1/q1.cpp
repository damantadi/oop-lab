#include <iostream>
using namespace std;
int p1(int x, int y)
{
    return x * y;
}
int p2(int *x, int *y)
{
    int k = (*x) * (*y);
    return k;
}
int p3(int &x, int &y)
{
    return x * y;
}
int main()
{
    int a, b;
    cout << "enter two numbers:" << endl;
    cin >> a >> b;
    cout << "using call by value product is :" << p1(a, b) << endl;
    cout << "using call by address product is :" << p2(&a, &b) << endl;
    cout << "using call by reference product is :" << p3(a, b) << endl;
    return 0;
}