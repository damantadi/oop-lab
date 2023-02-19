#include <iostream>
using namespace std;
class p
{
    int code;
    float price;

public:
    void get()
    {
        cout << "enter the code :";
        cin >> code;
        cout << "enter the price:" << endl;
        cin >> price;
    }
    void print()
    {
        int n;
        cout << "enter the no. of items you want to buy:" << endl;
        cin >> n;
        cout << "************************" << endl;
        cout << "code \t price \t  no. of items" << endl;
        cout << code << "\t " << price << " \t  " << n << endl;
        float total = price * n;
        cout << "************************" << endl;
        cout << "total price:-" << total;
    }
};
int main()
{
    p p1;
    p1.get();
    p1.print();
    return 0;
}