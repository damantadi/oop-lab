#include <iostream>
using namespace std;
class amount
{
    int principal;
    int years;
    float interest;
    float net;

public:
    amount()
    {
    }
    amount(int p, int y, float r);
    amount(int p, int y, int R);
    void printnumber();
};
amount::amount(int p, int y, float r)
{

    principal = p;
    years = y;
    interest = r;
    net = principal;
    for (int i = 0; i < y; i++)
    {
        net = net * (1 + interest);
    }
}
amount ::amount(int p, int y, int R)
{
    principal = p;
    years = y;
    interest = float(R) / 100;
    net = principal;
    for (int i = 0; i < y; i++)
    {
        net = net * (1 + interest);
    }
}
void amount ::printnumber()
{
    cout << "the net woth is " << net << endl;
}
int main()
{
    amount a, b, c;
    int p, y;
    float r;
    float R;
    cout << "enter the values:" << endl;
    cin >> p >> y >> r >> R;
    a = amount(p, y, r);
    a.printnumber();
    b = amount(p, y, R);
    b.printnumber();
    c = amount();
    c.printnumber();

    return 0;
}