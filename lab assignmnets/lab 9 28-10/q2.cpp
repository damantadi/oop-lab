//overload binary * to find multiplication of two complex no.
#include <iostream>
using namespace std;
class complex
{
    double real;
    double imag;

public:
    complex operator*(complex c)
    {
        double real1, real2;
        real1 = real;
        real2 = c.real;
        real = (real * c.real) - (imag * c.imag);
        imag = (real1 * c.imag) + (imag * real2);
        complex temp;
        temp.real = real;
        temp.imag = imag;
        return temp;
    }
    void display() { cout << "the resultant comlex no. is " << real << " + " << imag << "i" << endl; }
    void set()
    {
        cout << "Enter real no.: " << endl;
        cin >> real;
        cout << "Enter imag no.: " << endl;
        cin >> imag;
    }
};
int main()
{
    complex c1, c2;
    c1.set();
    cout << "Enter 2nd complex no: " << endl;
    c2.set();
    c1 *c2;
    c1.display();
    return 0;
}