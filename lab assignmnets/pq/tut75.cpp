#include<iostream>
using namespace std;
class shop
{
int id ;
int price;
public:
void set(int a,int b)
{
    cout<<"enter the id and price of item"<<endl;
    cin>>a>>b;
    id=a;
    price = b;
}
void get()
{
    cout<<"the id no is "<<id<<endl;
    cout<<"the price of item is "<<price<<endl;
}
};
int main(){
    shop *ptr=new shop[5];
    shop *ptr1=ptr;
    int p,q;
    for(int i=0;i<5;i++)
    {
        ptr->set(p,q);
        ptr++;
    }
    for(int i=0;i<5;i++)
    {
         ptr1->get();
        ptr1++;
    }
    return 0;
}