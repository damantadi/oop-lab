//T.DAMAN
//2005839
//q2.
#include <iostream>
using namespace std;
class solid
{
public:
    float height;
    int radius;
    void set()
    {
        cout << "enter the height and radius of solid: " << endl;
        cin >> height >> radius;
    }
    void get()
    {
        cout << "the height " << height << " and radius is " << radius << endl;
    }
};
class cylinder : public solid
{
public:
    void volume1()
    {
        solid s;
        s.set();
        s.get();
        float v = 1 * 3.14 * (s.radius) * (s.radius) * (s.height);
        cout << "the volume of cylinder is :" << v << endl;
    }
};
class cone : public solid
{
public:
    float volume2()
    {
        solid s;
        s.set();
        s.get();
        float v = 1 * 3.14 * (s.radius) * (s.radius) * (s.height) / 3;
        cout << "the volume of cone is :" << v << endl;
    }
};
int main()
{
    cylinder c1;
    c1.volume1();
    cone c2;
    c2.volume2();
    return 0;
}