#include<iostream>
using namespace std;
class stud
{
public:
int roll;
void num(int x)
{
    roll=x;
}
void getroll()
{
    cout<<"the roll number  is  "<<roll<<endl;
}
};
class marks : public stud{
    public:
        int phy,maths;
    void printline(int m1,int m2)
    {
        phy=m1;
        maths=m2;
    }
    void out()
    {
        cout<<"the marks of phy and maths are "<<phy<<"and "<<maths<<endl;
    }
};
class result : public marks{
float percentage;
public:
float display()
{
    cout<<"the final result is "<<(phy+maths)/2<<endl;
}
};
int main(){
    result m;
    m.num(839);
    m.getroll();
    m.printline(95,99);
    m.out();
    m.display();
    return 0;
}