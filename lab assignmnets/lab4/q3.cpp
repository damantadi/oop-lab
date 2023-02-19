//function overloading
#include <iostream>
using namespace std;
int vol(int a)
{
    return a * a * a;
}
float vol(float r)
{
    return (4 * 3.14 * r * r * r) / 3;
}
float vol(float r, int h)
{
    return (3.14 * r * r * h) / 3;
}
int main()
{
    int a;
    cout << "enter the side of cube :" << endl;
    cin >> a;
    cout << "volume of cube is  : " << vol(a) << endl;
    float c;
    cout << "enter the radius of sphere :" << endl;
    cin >> c;
    cout << "volume of sphere is: " << vol(c) << endl;
    float e;
    int h;
    cout << "enter the radius and height of cylinder :" << endl;
    cin >> e >> h;
    cout << "volume of cylinder is : " << vol(e, h) << endl;
    return 0;
}