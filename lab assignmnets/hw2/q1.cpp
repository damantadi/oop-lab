//using friend func. find the product of two complex no.
#include <iostream>
using namespace std;
class complex
{
    int real;
    int img;

public:
    void setdata()
    {
        int a, b;
        cout << "enter the real and img no. of complex no." << endl;
        cin >> a >> b;
        real = a;
        img = b;
    }
    void getdata()
    {
        cout << "the complex no. is " << real << " + " << img << "i" << endl;
    }
    friend int product(complex c, complex c1);
};
int product(complex c, complex c1)
{
    int k = (c.real * c1.real) - (c.img * c1.img);
    int l = (c.real * c1.img) + (c.img * c1.real);
    cout << "the product of complex no. is  " << k << " + " << l << "i" << endl;
}

int main()
{
    complex x, y;
    x.setdata();
    x.getdata();
    y.setdata();
    y.getdata();
    product(x, y);
    return 0;
}