#include<iostream>
using namespace std;
class base
{
public :
int x;
void set(int a)
{
    x=a;
}
void get()
{
    cout<<"the value of x from the base class is "<<x<<endl;
}
};
class derived:public base
{
public :
int y;

void set(int a)
  {
        y=a;
}

void get()
 {   cout<<"the value of x from derived class is "<<x<<endl;
    cout<<"the value of y from derived class is "<<y<<endl;
}
};
int main(){
 base *ptrbase;
 base c;
 ptrbase = &c;
ptrbase->set(5);
ptrbase->get();
derived m;
ptrbase =&m;
//ptrbase->setderived(4);|wrong because it point to only base class
//ptrbase->getderived(); |
derived *ptrderived;
ptrderived=&m;
ptrderived->set(120);
ptrderived->get();
ptrderived->set(90);
ptrderived->get();

    return 0;
}