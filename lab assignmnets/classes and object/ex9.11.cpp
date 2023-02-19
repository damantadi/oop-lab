#include<iostream>
using namespace std;
class array{
int arr[5];
public:
void set()
{
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
}
void get()
{
    for(int i=0;i<5;i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
}
void large()
{
    int large=arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    cout<<"largest element is :"<<large<<endl;
}
void small()
{
    int small=arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
        }
    }
    cout<<"smallest element is :"<<small<<endl;
}
};
int main(){
 array a1;
 a1.set();
 a1.get();
 a1.large();
 a1.small();   
    return 0;
}