#include<iostream>
using namespace std;
class a
{
int *arr;
int n;
public:

a()
{
    cout<<"enter the size of array"<<endl;
    cin>>n;
    arr= new int (n);
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
void display()
{
   for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    } 
    cout<<endl;
}
friend void largest( a a1)
{
    int k=a1.arr[0];
for(int i=1;i<a1.n;i++)
{
    if(k<a1.arr[i])
    {
        k=a1.arr[i];
    }
}
cout<<"largest element is "<<k<<endl;
}
};
int main(){
 a a1;

 a1.display();   
 largest(a1);
    return 0;
}