#include<iostream>
using namespace std;
float recieved(int money,float interest=1.05)
{float moneyrecieved;
    return moneyrecieved = money*interest;
}
int main(){
int money = 100;
cout<<"i have money "<<money<<" after 1 year it will be "<<recieved(money);
cout<<"\n  for vip money "<<money<<" after 1 year it will be "<<recieved(money,10);
    
    return 0;
}