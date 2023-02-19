#include <iostream>
using namespace std;
class x
{
    int arr[10][10];
    int n;

public:
    x()
    {
        n = 0;
        arr[10][10] = {0};
    }
    x(int k)
    {
        n = k;
        cout << "enter the elements of an array" << endl;
        for (int i = 0; i < n; i++)
        {for(int j=0;j<n;j++)
           { cin >> arr[i][j];}
    }
    }
    friend x operator+(x a,x a1);

    void show()
    {
        for (int i = 0; i < n; i++)
        {for (int j = 0; j < n; j++)
           { cout << " " << arr[i][j];}
        cout<<endl;
        }
        cout << endl;
    }
};
x operator+(x a, x a1)
{
  x b;
  b.n=a.n;
    for (int i = 0; i <b.n ; i++)
    {
    for (int j = 0; j <b.n ; j++){
    b.arr[i][j]=a.arr[i][j]-a1.arr[i][j];
    }
    
    }
    return b;
}
int main()
{
    x a1(2), b1(2), b;
    a1.show();
    b1.show();
    b = a1 + b1;
    b.show();
    return 0;
}