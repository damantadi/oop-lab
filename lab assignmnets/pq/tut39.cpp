#include<iostream>
using namespace std;

class shop{
int item_id[50];
int item_price[50];
int counter;
public:
void count()
{
    counter=0;
}
void food(void);
void things();
};
void shop :: food(void)
{
    cout<<"enter the item_id"<<endl;
    cin>>item_id[counter];
    cout<<"enter the item_price"<<endl;
    cin>>item_price[counter];
    counter++;
}
void shop :: things()
{
    for(int i=0;i<counter;i++)
    {
        cout<<"the item no."<<i+1<<" with item_id is "<<item_id[i]<<" and the price is "<<item_price[i]<<endl;
    }
}

int main(){
shop market ;
market.count();
market.food();
market.food();
market.food();
market.things();   
    return 0;
}