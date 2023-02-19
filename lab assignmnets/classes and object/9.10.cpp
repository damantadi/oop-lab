#include <iostream>
using namespace std;
class COMPLEX
{
    int real;
    int img;

public:
    void getdata()
    {
        cout << "enter the real and imaginary part" << endl;
        cin >> real >> img;
    }
    void display()
    {
        cout << "" << real << " + " << img << "i" << endl;
    }
    COMPLEX add(COMPLEX &c2);
};
COMPLEX COMPLEX ::add(COMPLEX &c2)
{
    COMPLEX c3;
    c3.real = real + c2.real;
    c3.img = img + c2.img;
    return c3;
}
int main()
{
    COMPLEX c1, c2, c4;
    c1.getdata();
    c1.display();
    c2.getdata();
    c2.display();
    c4 = c1.add(c2);
    cout << "sum is :" << endl;
    c4.display();
    return 0;
}