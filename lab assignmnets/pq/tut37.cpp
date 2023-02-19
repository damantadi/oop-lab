#include<iostream>
using namespace std;

class college{
    private:
    char a,b,c;
    public:
    int x,y,z;
    void year(char a,char b,char c);
    void stream(){
        cout<<"the stream of a is "<<a<<endl;
        cout<<"the stream of b is "<<b<<endl;
        cout<<"the stream of c is "<<c<<endl;
        cout<<"the stream of x is "<<x<<endl;
        cout<<"the stream of y is "<<y<<endl;
        cout<<"the stream of z is "<<z<<endl;
    }
};
void college :: year(char w,char m,char k)
{
    a=w;
    b=m;
    c=k;
}

int main(){
    college Daman;
    Daman.x=100;
    Daman.y=90;
    Daman.z=20;
    Daman.year('i','l','u');
    Daman.stream();
    return 0;
}