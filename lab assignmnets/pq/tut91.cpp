#include <iostream>
using namespace std;
int count(int n)
{
    int c = 0;
    for (int i = 0;  n != 0; i++)
    {
        n = (n & (n - 1));
        c++;
    }
    return c;
    
}
int main()
{
    int x;
    cout << "enter a number" << endl;
    cin >> x;
    int k=count(x);
    cout << k << endl;

    return 0;
}