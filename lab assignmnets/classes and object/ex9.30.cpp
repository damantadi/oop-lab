#include<iostream>
using namespace std;
#define n 3
#define m 2
class matrice
{
int ar[n][m];
public:
void get()
{
    cout<<"enter the matrice elements:";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>ar[i][j];
        }
    }
}
void set()
{
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<" "<<ar[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}
friend matrice add(matrice m1,matrice m2);
};
matrice add(matrice m1,matrice m2)
{
    matrice m3;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            m3.ar[i][j]=m1.ar[i][j]+m2.ar[i][j];
        }
    }
    return m3;
}
int main(){
 matrice m1,m2,m4;
 m1.get();
 m2.get();
 m1.set();
 m2.set();
m4=add(m1,m2);
m4.set();
    return 0;
}