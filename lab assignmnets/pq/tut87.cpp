
#include <iostream>
using namespace std;

int setbit(int n, int pos)
{
    return (n|(1<<pos));
}
int main()
{

    cout << setbit(9, 2) << endl;
    cout << setbit(9, 3) << endl;
    return 0;
}