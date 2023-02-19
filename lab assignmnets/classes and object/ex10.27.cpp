#include<iostream>
using namespace std;
class salesman
{
    int target;
    int products_sale[12];
int total;
int com;
    public:
salesman()
{
    cout<<"enter the target";
    cin>>target;
    for(int i=0;i<12;i++)
    {
cout<<"enter the product sales in "<<i+1<<"month";
cin>>products_sale[i];
total=0;
  for(int i=0;i<12;i++)
  {
      total+=products_sale[i];
  }
}
}
void comission()
{
    for(int i=0;i<12;i++)
{if(target>total)
{
com=0;
}
else if(target==total)
{
com=10;
}
else{
com=25;
}
}
}
void display()
{
     for(int i=0;i<12;i++)
    {
cout<<"product sales in "<<i+1<<" month "<<"is "<<products_sale[i]<<endl;

}
cout<<"total product sale is "<<total<<endl;
cout<<"total commisson is :"<<com<<"percent at the end of year"<<endl;
}
};
int main(){
salesman s1[5];
for(int i=0;i<5;i++)
{
s1[i].comission();
s1[i].display();    
}
    return 0;
}