#include <iostream>
using namespace std;
class shop
{
    int item[10];
    int price[10];
    int quantity[10];

public:
    int total[10];
    void get_data()
    {
        cout << "enter the item no.,quantity and price of every item want to buy:" << endl;
        for (int i = 0; i < 10; i++)
        {
            cin >> item[i] >> quantity[i] >> price[i];
        }
    }
    void quantity_price()
    {
        for (int i = 0; i < 10; i++)
            total[i] = quantity[i] * price[i];
    }
    void totalprice()
    {
        int k = 0;
        for (int i = 0; i < 10; i++)
            k += total[i];
        cout << "total bill: " << k;
    }
    void display_bill();
};
void shop ::display_bill()
{
    cout << "*****Your Bill******" << endl;
    cout << "ITEM \t price \t quantity\ttotal" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout <<"  "<<i+1<<" \t "<<price[i]<<"  \t "<<quantity[i]<<" \t "<<total[i]<<endl;
    }
    cout << "***************************" << endl;
}
int main()
{
    shop c1;
    c1.get_data();
    c1.quantity_price();
    c1.display_bill();
    c1.totalprice();
    return 0;
}