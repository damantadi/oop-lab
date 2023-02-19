#include<iostream>
using namespace std;

class teacher{
    private:
    int a,b,c;
    public:
    int d,e;
    void branch(int a1,int b1,int c1);
    void place()
    {
     cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
    cout<<"the value of c is "<<c<<endl;
    cout<<"the value of d is "<<d<<endl;
    cout<<"the value of e is "<<e<<endl;
    }
};
void teacher :: branch(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    teacher lucky;
    lucky.d=10;
    lucky.e=20;
    lucky.branch(3,5,7);
    lucky.place();
    
    return 0;
}