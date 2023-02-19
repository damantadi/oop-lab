//q6.
#include <iostream>
using namespace std;
class complex
{
    private:
        int a,b;
    public:
        void get()
        {
            cout<<"Enter the real part of the complex number:";
            cin>>a;
            cout<<"Enter the imaginary part of the complex number:";
            cin>>b;
        }
        void display()
        {
            cout<<"The complex number is : "<<a<<"+"<<b<<"i"<<"\n";
            cout<<"\n";
        }
        friend void add(complex l,complex m);
};
void add(complex l,complex m)
{
    int q,o;
    q=l.a+m.a;
    o=l.b+m.b;
    cout<<"The sum of given two complex number is : "<<q<<"+"<<o<<"i"<<endl;
}
int main()
{
    complex n,p;
    n.get();
    n.display();
    p.get();
    p.display();
    add(n,p);
    return 0;
}