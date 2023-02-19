#include<iostream>
using namespace std;

int main(){
    int arr[7][7]={0};
arr[0][0]=arr[1][0]=arr[1][1]=1;
int row=2;
while(row<=7)
{arr[row][0]=1;
    for(int col=1;col<=row;col++)
    {
arr[row][col]=arr[row-1][col]+arr[row-1][col-1];
    }
    row++;
}
for(int i=0;i<7;i++)
{
    for(int j=0;j<=i;j++)
    {
        cout<<" "<<arr[i][j];
    }
    cout<<endl;
}
    return 0;
}