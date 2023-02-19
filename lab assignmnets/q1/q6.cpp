#include<iostream>
using namespace std;
int leapyear(int n)
{
    if(n%400==0)
    {
        return 1;
    }
    if(n%100==0)
    {
        return 0;
    }
    if(n%4==0)
    {
        return 1;
    }
    return 0;
}
class dates
{
public:
int a,b,c;
dates(int d,int m,int y)
{
    a=d;
    b=m;
    c=y;
}
int daysincejan1(dates x )
{   
    if(b%2==0)
    {
    if(b>2)
    {
        if(leapyear(c))
{    int p=x.b-1;
    int q=x.a-1;
    return p*30+q+2;
}
else
{
  int p=x.b-1;
    int q=x.a-1;
    return p*30+q+1;   
}
    }
    else
    {
         int p=x.b-1;
    int q=x.a-1;
    return p*30+q+1;
    }
}
}
};
int main()
{
    cout<<"enter the date:-"<<endl;
    int d,m,y;
    cin>>d>>m>>y;
    dates a(d,m,y);
 cout<<"the difference is :"<<a.daysincejan1(a);
 
    return 0;
}