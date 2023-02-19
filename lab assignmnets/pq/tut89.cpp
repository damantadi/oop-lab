#include<iostream>
using namespace std;
int update(int n,int p,int v)
{
    int m=~(1<<p);
    n=n&m;
    return(n|(v<<p));
}
int main(){
     cout << update(7, 2,1) << endl;
    cout << update(8, 2,1) << endl;
    return 0;
}