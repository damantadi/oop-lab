#include <iostream>
using namespace std;
class sort
{
    int *arr;
    int n;

public:
    sort()
    {
        n = 0;
        arr = NULL;
    }
    sort(int k)
    {
        n = k;
        arr = new int(n);
    }
    void getdata()
    {
        cout << "enter the elements of an array" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    void display()
    {
        for (int i = 0; i < n; i++)
        {
            cout << " " << arr[i];
        }
        cout << endl;
    }
    void bubblesortarray()
    {
        int temp;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    void insertitonsort()
    {
        int key, j;
        for (int i = 1; i < n; i++)
        {
            key = arr[i];
            j = i - 1;
            while(j >= 0 && key < arr[j])
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }
};
int main()
{
    sort s1(5);
    s1.getdata();
    s1.display();
    cout<<"sorted array:";
    s1.bubblesortarray();
    s1.display();
    sort s2(5);
    s2.getdata();
    s2.display();
    cout<<"sorted array:";
    s2.insertitonsort();
    s2.display();

    return 0;
}