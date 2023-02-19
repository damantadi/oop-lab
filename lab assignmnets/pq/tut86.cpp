#include <iostream>
using namespace std;

int getbit(int n, int pos)
{
    return ((n >> pos) & 1);
}
int main()
{

    cout << getbit(9, 2) << endl;
    cout << getbit(9, 3) << endl;
    return 0;
}