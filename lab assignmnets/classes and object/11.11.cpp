#include <iostream>
using namespace std;
class dis
{
    int kms, m;

public:
dis()
{
    kms=0;
    m=0;
}
    void get()
    {
        cout << "enter the distance:" << endl;
        cin >> kms >> m;
    }
    dis operator+(dis d1)
    {
        dis d2;
        d2.kms = kms + d1.kms;
        d2.m = m + d1.m;
        return d2;
    }
    void show()
    {
        cout<<"the distance is "<<kms<<"kms and "<<m <<"m"<<endl;
           }
};
int main()
{ dis d1,d2;
d1.get();
d1.show();
d2.get();
d2.show();
dis d3;
d3=d1+d2;
cout<<"total distance is :";
d3.show();
    return 0;
}