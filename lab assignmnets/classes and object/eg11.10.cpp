#include<iostream>
using namespace std;
class date
{
int dd,mm,yy;
public:
friend istream &operator >>(istream &input,date& d)
{
input>>d.dd>>d.mm>>d.yy;
return input;
}
friend ostream &operator <<(ostream &output,date& d)
{
output<<" "<<d.dd<<"/"<<d.mm<<"/"<<d.yy;
return output;
}
};
int main(){
    date d1;
    cout<<"enter the date:"<<endl;
    cin>>d1;
    cout<<"date:";
cout<<d1;
    return 0;
}