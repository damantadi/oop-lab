//function overloading
#include <iostream>
using namespace std;
int p(int a, int b)
{
    return a * b;
}
float p(float a, float b)
{
    return a * b;
}
double p(double a, double b)
{
    return a * b;
}
int main()
{
    int a, b;
    cout << "enter two integers :" << endl;
    cin >> a >> b;
    cout << "product of integers are : " << p(a, b) << endl;
    float c, d;
    cout << "enter two float values :" << endl;
    cin >> c >> d;
    cout << "product of float values are : " << p(c, d) << endl;
    double e, f;
    cout << "enter two double values :" << endl;
    cin >> e >> f;
    cout << "product of integers are : " << p(e, f) << endl;
    return 0;
}