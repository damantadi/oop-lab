#include<iostream>
using namespace std;
class complex{
int a,b;
public:
complex(void);

void number()
{
    cout<<"the complex number is "<<a<<" + "<<b<<"i"<<endl;
}
};
complex :: complex (void)
{
    a=10;
    b=15;
}
int main(){
    complex k;
    k.number();
    return 0;
}