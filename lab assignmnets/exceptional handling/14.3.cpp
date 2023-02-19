#include<iostream>
using namespace std;
template<class s>
s sum_arr(s arr[],s n)
{ s sum=0;
    for(int i=0;i<n;i++)
    {
sum+=arr[i];
    }
    return sum;
}
int main(){
   int arr[5];
   cout<<"enter the values of array"<<endl;
   for(int i=0;i<5;i++)
   {
       cin>>arr[i];
   } 
   cout<<sum_arr(arr,5)<<endl;
   long int n;
   cin>>n;
   long int arr1[n];
   cout<<"enter the values of array"<<endl;
   for(int i=0;i<n;i++)
   {
       cin>>arr1[i];
   } 
   cout<<sum_arr(arr1,n);

    return 0;
}