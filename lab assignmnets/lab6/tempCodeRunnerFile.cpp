//wap to find the max. out of two numbers using friend functionb
#include <iostream>
using namespace std;
class number1;
class number2
{
    private:
        int n2;
    public:
        void get()
        {
            cout<<"Enter the second number:";
            cin>>n2;
        }
        friend void compare(number1,number2);
};
class number1
{
    private:
        int n1;
    public:
        void get()
        {
            cout<<"Enter the first number:";
            cin>>n1;
        }
        friend void compare(number1,number2);
};
void compare(number1 p,number2 q)
{
    int m;
    if(p.n1>q.n2)
    {
        m=p.n1;
        cout<<"The biggest number is : "<<m<<endl;
    }
    else
    {
        m=q.n2;
        cout<<"The biggest number is : "<<m<<endl;
    }
}
int main()
{
    number1 p;
    p.get();
    number2 q;
    q.get();
    compare(p,q);
    return 0;
}