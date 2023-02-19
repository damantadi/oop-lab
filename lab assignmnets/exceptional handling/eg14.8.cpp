#include <iostream>
using namespace std;
template <class t1>
t1 area(t1 s)
{
    return s * s;
}
template <class t2>
t2 area(t2 s, t2 s2, t2 s3)
{
    return s * s2 + s2 * s3 + s3 * s;
}
template <class t3>
t3 area(t3 s, t3 h)
{
    return 3.14 * s * s * h;
}
int main()
{
    cout << "ara of square of side 3 is:" << area(3) << endl;
    float l = 1.2, b = 3.4, h = 0.2;
    cout << "area of rectangle box :" << area(l, b, h) << endl;
    float r = 3.0, h1 = 5.6;
    cout << "area of cylinder :" << area(r, h1) << endl;
    return 0;
}