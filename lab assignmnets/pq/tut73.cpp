#include <iostream>
using namespace std;

int main()
{
    int x = 19;
    int *p = &x;
    cout << "the value is " << *p << endl;
    float *q = new float(45.6);
    cout << "the value is " << *q << endl;

    int a[5] = {1, 2, 3, 4, 5};
    delete[] a;
    cout << "rhe values of a[0] is " << a[0] << endl;
    cout << "rhe values of a[1] is " << a[1] << endl;
    cout << "rhe values of a[2] is " << a[2] << endl;
    cout << "rhe values of a[3] is " << a[3] << endl;
    cout << "rhe values of a[4] is " << a[4] << endl;

    return 0;
}