//name T.Daman
//roll 2005839
#include<iostream>
using namespace std;
int checkPrimeNumber(int n);
int main() {
    int n1, n2, i, f1;
    cout<<"Enter two positive integers: "<<endl;
    cin>>n1>>n2;
    cout<<"Prime numbers between "<<n1<<" and "<<n2 <<" are: "<<endl;
    for (i = n1 + 1; i < n2; ++i) {

        f1 = checkPrimeNumber(i);

        if (f1 == 1)
            cout<<" "<<i;
    }
    return 0;
}

int checkPrimeNumber(int n) {
    int j, f1 = 1;
    for (j = 2; j <= n / 2; ++j) {
        if (n % j == 0) {
            f1 = 0;
            break;
        }
    }
    return f1;
}