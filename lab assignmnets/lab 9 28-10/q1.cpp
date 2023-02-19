//wap to overload following operators for class complex which stores complex number(s) as object(s)
//overload binary / to find the divison of two objects(using friend fnction)
#include <iostream>
using namespace std;
class complex
{
    float real;
    float imag;

public:
    friend complex operator*(const complex &c1, const complex &c2);
    void display_numbers()
    {
        cout <<""<< real << "," << imag <<""<< endl;
    }
    void set_data()
    {
        cout << "Enter real part : " << endl;
        cin >> real;
        cout << "Enter imaginary part : " << endl;
        cin >> imag;
    }
};

complex operator*(const complex &c1, const complex &c2)
{
    complex c3;
    c3.real = ((c1.real * c2.real) + (c1.imag * c2.imag)) / ((c2.real * c2.real) - (c2.imag * c2.imag));
    c3.imag = (c1.imag * c2.real) - (c1.real * c2.imag) / ((c2.real * c2.real) - (c2.imag * c2.imag));
    return c3;
}
int main()
{
    complex c1, c2;
    c1.set_data();
    cout << "Enter second complex no : " << endl;
    c2.set_data();
    complex c3(c1 * c2);
    c3.display_numbers();
    return 0;
}