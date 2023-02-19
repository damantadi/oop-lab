#include<iostream>
using namespace std;
#define N 4
void print(int arr[N][N])
{
    cout<<"The matrix is : "<<endl;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<"\t"<<arr[i][j];
        }
        cout<<endl;
    }
}
int main(){
   int arr[N][N];
for(int i=0;i<N;i++)
{
    for(int j=0;j<N;j++)
    {
        if ((i==j || j==N-i-1))
        {
            arr[i][j]=0;
        }
        else if(j<=i)
        {
            arr[i][j]=-1;
        }
        else
        {
            arr[i][j]=1;
        }
    }
}
print(arr);
    return 0;
}