#include<iostream>
using namespace std;
#define N 3
#define n 3
void sum(int arr1[n][N],int arr2[n][N]);
void multiply(int arr1[n][N],int arr2[n][N]);
void transpose(int arr[n][N]);
void subtract(int arr1[n][N],int arr2[n][N]);
void print(int arr[][N])
{
    cout<<"The matrix is : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<" "<<arr[i][j];
        }
        cout<<endl;
    }
}
int main(){
    int arr1[n][N],arr2[n][N];
    cout<<"enter the elments of an array1:"<<endl;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>arr1[i][j];
        }
    }
  print(arr1);
    cout<<"enter the elments of an array2:"<<endl;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>arr2[i][j];
        }
    }
    print(arr2);
    sum(arr1,arr2);
    print(arr1);
    subtract(arr1,arr2);
    print(arr1);
    transpose(arr1);
    multiply(arr1,arr2);
    return 0;
}
void sum(int arr1[n][N],int arr2[n][N])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<N;j++)
        {
arr1[i][j]+=arr2[i][j];
        }
    }
}
void multiply(int arr1[n][N],int arr2[N][n])
{ int arr3[N][N]={0};
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {arr3[i][j]=0;
            for(int k=0;k<N;k++)
            {
arr3[i][j]+=arr1[i][k]*arr2[k][j];
        }
        }
    }
    print(arr3);
}
void transpose(int arr[n][N])
{int arr2[N][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<N;j++)
        {
arr2[j][i]=arr[i][j];
        }
    }
    print(arr2);
}
void subtract(int arr1[n][N],int arr2[n][N])
{
      for(int i=0;i<n;i++)
    {
        for(int j=0;j<N;j++)
        {
arr1[i][j]-=arr2[i][j];
        }
    }
}