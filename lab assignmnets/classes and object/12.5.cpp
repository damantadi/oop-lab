#include<iostream>
using namespace std;
class product
{
int model_no;
char company[20];
int price;
public:
void getdata()
{
    cout<<"enter the company name"<<endl;
    cin.ignore();
    cin.getline(company,20);
    cout<<"enter the model no. :"<<endl;
    cin>>model_no;
    cout<<"enter the price:"<<endl;
    cin>>price;
}
void show()
{
    cout<<"company:"<<company<<endl;
    cout<<"model number:"<<model_no<<endl;
    cout<<"price:Rs."<<price<<endl;
}
};
class manufacturer
{
char madein[10];
int mfg;
public:
void getdata()
{cout<<"enter the country name in which it is made:"<<endl;
cin.ignore();
cin.getline(madein,10);
cout<<"enter the mfg date:"<<endl;
cin>>mfg;
}
void show()
{
    cout<<"made in:"<<madein<<endl;
    cout<<"mfg:"<<mfg<<endl;
}
};
class lcd_tv:public product,public manufacturer
{
int inches;
public:
void get()
{
    cout<<"enter the size of tv (in inches)"<<endl;
    cin>>inches;
product::getdata();
manufacturer::getdata();
}
void show_details()
{
product::show();    
manufacturer::show();
cout<<"size :"<<inches<<"inches"<<endl;
}
};
int main(){
    lcd_tv l1;
    l1.get();
    l1.show_details();
    return 0;
}