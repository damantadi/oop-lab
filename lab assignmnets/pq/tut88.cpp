#include<iostream>
using namespace std;

int clearbit(int n,int p)
{
    int k=~(1<<p);
    return (n&k);
}
int main(){
    cout << clearbit(7, 2) << endl;
    cout << clearbit(8, 2) << endl;
    return 0;
}