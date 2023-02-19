#include<iostream>
using namespace std;
class time
{
    int h,m,s;
    public:
    time()
    {
     cout<<"enter the valid time"<<endl;
     cin>>h>>m>>s;
    }
    void show()
    {
        cout<<"the time is "<<h<<" : "<<m<<" : "<<s<<endl;
    }
    void operator ++()
    {
        s++;
        if(s==60)
        {
            s=0;
            m++;
        }
        if(m==60)
        {
            m=0;
            h++;
        }
        if(h>=24)
        {
            h=0;
        }
    }
    void operator--()
    {
        s--;
        if(s==-1)
        {
            s=59;
            m--;
        }
        if(m==-1)
        {
            m=59;
            h--;
        }
        if(h<0)
        {
            h=23;
        }

    }
};
int main(){
    time t1;
    t1.show();
    ++t1;
    t1.show();
--t1;
t1.show();
    return 0;
}