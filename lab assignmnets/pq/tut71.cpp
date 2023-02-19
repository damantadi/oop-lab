#include <iostream>
#include <cmath>
using namespace std;
class calculator
{ int a,b;
public:
    
    int maths()
    {
        cout << "enter the valus of a and b" << endl;
        cin >>a>>b;
    }
    int give()
    {
        cout << "the valus of a + b is " << a + b << endl;
        cout << "the valus of a - b is " << a - b << endl;
        cout << "the valus of a * b is " << a * b << endl;
        cout << "the valus of a / b is " << a / b << endl;
    }
};
class scientific_calculator
{int a;
    int b;
public:
    
    void mathsscientific()
    {
        cout << "enter the valus of a and b" << endl;
        cin >>a>>b;
    }
    int givescientific()
    {
        cout << "the valus of a + b is " << a + b << endl;
        cout << "the valus of cos(a + b) is " << cos(a + b) << endl;
        cout << "the valus of cos(a - b) is " << cos(a - b) << endl;
        cout << "the valus of cos(a * b) is " << cos(a * b) << endl;
        cout << "the valus of sin(a + b) is " << sin(a + b) << endl;
        cout << "the valus of sin(a - b) is " << sin(a - b) << endl;
        cout << "the valus of tan(a * b) is " << tan(a * b) << endl;
        cout << "the valus of tan(a - b) is " << tan(a - b) << endl;
        cout << "the valus of cos(a * b) is " << cos(a * b) << endl;
    }
};
class hyrid_calculator : public calculator,public scientific_calculator
{
public:
    void display()
    {
         
    }
};
int main()
{
     hyrid_calculator cal;
        cal.maths();
         cal.give();
         
         cal.mathsscientific();
         cal.givescientific();

    return 0;
}