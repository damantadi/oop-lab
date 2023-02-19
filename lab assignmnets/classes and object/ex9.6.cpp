#include <iostream>
using namespace std;
class COMPLEX
{
    int real;
    int img;

public:
    void get()
    {
        cout << "real part:";
        cin >> real;
        cout << "img part";
        cin >> img;
    }
    void set()
    {
        cout << real << " + " << img << "i" << endl;
    }

    friend COMPLEX add(COMPLEX C1, COMPLEX C2);
    friend COMPLEX sub(COMPLEX C1, COMPLEX C2);
};
COMPLEX add(COMPLEX C1, COMPLEX C2)
{
    COMPLEX C3;
    C3.real = C1.real + C2.real;
    C3.img = C1.img + C2.img;
    return C3;
}
COMPLEX sub(COMPLEX C1, COMPLEX C2)
{
    COMPLEX C3;
    C3.real = C1.real - C2.real;
    C3.img = C1.img - C2.img;
    return C3;
}
int main()
{
    COMPLEX c1, c2, c3, c4;
    c1.get();
    c1.set();
    c2.get();
    c2.set();
    c3 = add(c1, c2);
    cout << "addition of two complex number is :";
    c3.set();
    c4 = sub(c1, c2);
    cout << "subtraction of two complex number is :";
    c4.set();
    return 0;
}