#include <iostream>
using namespace std;
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "constructor called" << count << endl;
    }
    ~num()
    {
        cout << "destuctor is  called" << count << endl;
        count--;
    }
};

int main()
{
    cout << "come in the main " << endl;
    num a;
    {
        cout << "entering in the block " << endl;
        cout << "creating 2 objects" << endl;
        num c, d;
        cout << "exiting the block" << endl;
    }
    cout << "finish!!!" << endl;
    return 0;
}