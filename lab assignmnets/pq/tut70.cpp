#include <iostream>
using namespace std;
class dj
{  protected:
    int age;

public:
    int v;
    int k;
    void give(int m, int n)
    {   
        age =45;
        v = m;
        k = n;
    }
};
class f
{  protected:
    int age1;

public:
    int r;
    int s;
    void get(int m1, int n1)
    {   age1 =28;
        r = m1;
        s = n1;
    }
};
class me : public dj, public f
{
public:
    int h; 
    
     void display()
    {
        cout << "the value of v and k and age is " << v << "and " << k <<" and "<<age<< endl;
        cout << "the value of r and s and age is " << r << " and " << s<<" and "<<age1 << endl;
        cout << "the value of h and p and age is " << v + r << " and " << k - s<<" and "<<age-age1 << endl;
    }
};
int main()
{
    me g;
    g.give(4, 5);

    g.get(7, 9);

    g.display();

    return 0;
}