#include<iostream>
#include<string.h>
using namespace std;
class x
{
    int n;
    char *str;
    public:
    x()
    {
    n=0;
    }
    x(char *s)
    {
n=strlen(s);
str= new char (n+1);
strcpy(str,s);
    }
    x(x &a1)
    {
        n=a1.n;
        str=new char(n+1);
        strcpy(str,a1.str);
    }
    void display()
    {
        cout<<str<<endl;
    }
};
int main(){
    x a1("hello"),a3(a1);
    a1.display();
    a3.display();
    x a2=a3;
    a2.display();
    return 0;
}