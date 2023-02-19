#include<iostream>
using namespace std;
#define N 1
class faculty
{
    char name[20];
    char dep[10];
    public:
    void getdata();
    void display();
};
void faculty ::getdata()
{
    cout<<"enter the faculty name and deparment"<<endl;
//   cin.ignore();
    cin.getline(name,20);
   // cin.ignore();
    cin.getline(dep,10);
}
void faculty ::display()
{
    cout<<""<<name<<" \t "<<dep<<endl;
}
int main(){
    faculty f[N];
    for(int i=0;i<N;i++)
    {
        f[i].getdata();
    }
    cout<<"NAME \t DEPARTMENT"<<endl;
    for(int i=0;i<N;i++)
    {
        f[i].display();
    }
    return 0;
}