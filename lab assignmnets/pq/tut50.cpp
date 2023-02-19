#include<iostream>
using namespace std;

inline void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}
int main(){
    int a,b;
    cout<<"enter the values to be swap"<<endl;
    cin>>a>>b;
    swap(&a,&b);
    cout<<"the values after swap of a is :"<<a<<"and b is :"<<b<<endl;
    
    return 0;
}