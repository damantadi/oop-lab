#include <iostream>
using namespace std;
int vol(int a = 1)
{
    return a * a * a;
}
int volu(int l = 1, int h = 1, int b = 1)
{
    return l * b + b * h + l * h;
}
int main()
{
    int n;
    cout << "enter the side length of cube" << endl;
    cin >> n;
    int volume;
    volume = vol(n);
    cout << "volume of cube :" << volume << endl;
    int volume1;
    volume1 = volu(3);
    cout << "volume of cuboid :" << volume1 << endl;
    int l, h, b;
    cout << "enter the height,length,breadth:" << endl;
    cin >> h >> l >> b;
    int volume2 = volu(l, h, b);
    cout << "volume of cuboid :" << volume2 << endl;
    return 0;
}