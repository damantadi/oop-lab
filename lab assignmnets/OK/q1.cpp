#include <iostream>
using namespace std;

#include <bits/stdc++.h>

vector<int> orderpizza(vector<int> &ar, int k)
{
    int n = ar.size();
    vector<int> ans;

    for (int i = 0; i <= n - k; i++)
    {
        bool flag = false;
        for (int j = i; j < i + k; j++)
        {
            if (ar[j] < 0)
            {
                ans.push_back(ar[j]);
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            ans.push_back(0);
        }
    }
    return ans;
}

int main()
{
    vector<int> ar = {-11, -2, 19, 37, 64, -18};
    ar = orderpizza(ar, 3);
    for (int i = 0; i < ar.size(); i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}
