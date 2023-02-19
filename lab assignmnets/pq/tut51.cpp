#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char a;
    cout << "enter a char " << endl;
    cin >> a;

    char z;
    if (a >= 65 && a <= 90)
    {

        z = a + 32;

        cout << z;
    }
    else
        cout << "It is a small letter";

    return 0;
}