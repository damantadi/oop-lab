#include<iostream>
using namespace std;
# define n 10
#include<time.h>
int main(){
    int arr[n];
    srand(time(0));
for(int i=0;i<n;i++)
{
    arr[i]=rand()%n;
}
printf("elements of array are:");
for(int i=0;i<n;i++)
{
    cout<<" "<<arr[i];
}

    return 0;
}