#include<iostream>
using namespace std;
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
void count()
{int even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        if( (arr[i])%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout<<"no. of even is:"<<even<<endl;
    cout<<"no. of odd is :"<<odd<<endl;
}
};
int main(){
    a a1;
    a1.display();
    a1.count();
    return 0;
}