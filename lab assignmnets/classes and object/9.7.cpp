#include<iostream>
using namespace std;
#define N 2
class info
{
    static int id;
    int roll;
    char name[10];
    public:
    void getdata()
    {
        cout<<"enter the name"<<endl;
        cin.getline(name,10);
        roll=id++;
    } 
    void display()
    {
        cout<<""<<roll<<"\t "<<name<<endl;
    }
};
int info :: id=1000;
int main(){
    info s[N];
    for(int i=0;i<N;i++)
    {
        s[i].getdata();
    }
    cout<<"roll \t name"<<endl;
    for(int i=0;i<N;i++)
    {
        s[i].display();
    }

    return 0;
}