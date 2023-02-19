#include<iostream>
using namespace std;
template<class s>
class a
{
s *arr;
int n;
public:
a()
{int k;
    cout<<"enter th size of array";
cin>>k;
n=k;
arr= new s(n);
cout<<"enter the array elements:";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
}
void print();
};
template<class s>
void a<s>::print()
{
for(int i=0;i<n;i++)
{
    cout<<" "<<arr[i];
}
cout<<endl;
}
int main(){
 a<int>arr;
 arr.print();
 a<char>arr1;
 arr1.print();

    return 0;
}