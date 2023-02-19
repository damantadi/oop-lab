#include <iostream>
using namespace std;
#define n 4
#define m 5
class ar
{
    int *arr1;
    int *arr2;
int arr3[n+m];
public:
    void get()
    {
        arr1 = new int(n);
        cout << "enter the elements of array1:";
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        arr2 = new int(m);
        cout << "enter the elements of array2:";
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }
    }
    void set()
    {
        cout << "array 1:";
        for (int i = 0; i < n; i++)
        {
            cout<<" "<<arr1[i];
        }
        cout << endl;
        cout << "array 2:";
        for (int i = 0; i < m; i++)
        {
            cout<<" "<<arr2[i];
        }
        cout << endl;
    }
    void add()
    {
        for(int i=0;i<n;i++)
        {
            arr3[i]=arr1[i];
        }
        for(int i=n,j=0;i<n+m;i++,j++)
        {
            arr3[i]=arr2[j];
        }
        cout<<"array 3:";
        for(int i=0;i<n+m;i++)
        {
            cout<<" "<<arr3[i];
        }
        
    }
};
  
int main()
{
ar a1;
a1.get();
a1.set();
 a1.add();
    return 0;
}