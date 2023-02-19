//q5
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
        friend void swap(number1,number2);
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
        friend void swap(number1,number2);
};
void swap(number1 p,number2 q)
{
    int m,o,v;
    m=p.n1;
    p.n1=q.n2;
    q.n2=m;
    cout<<"After swaping two number.\n";
    cout<<"The first number : "<<p.n1<<"\n";
    cout<<"The second number : "<<q.n2<<"\n";
}
int main()
{
    number1 n;
    n.get();
    number2 p;
    p.get();
    swap(n,p);
    return 0;
}