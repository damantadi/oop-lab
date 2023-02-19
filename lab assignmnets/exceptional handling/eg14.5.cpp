#include <iostream>
using namespace std;
#define n 7
template <class s>
s search(s arr[], s a)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == a)
        {
            return i;
        }
    }
    return 0;
}
int main()
{

    int arr[n];
    cout<<"ener the element of an array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "enter the value you want to search:";
    cin >> k;
    if (search(arr, k))
    {
        cout << "found in " <<search(arr,k)+1<<"position"<< endl;
    }
    else
    {
        cout << "element not found" << endl;
    }
    return 0;
}