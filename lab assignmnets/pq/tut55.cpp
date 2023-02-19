#include<iostream>
using namespace std;
class business{
    char name[100];
    char city[100];
    public:
    int id;
    int room;
    void man();
    void result()
    {
        cout<<"the name is "<<name<<endl;
        cout<<"the city is "<<city<<endl;
        cout<<"the id is "<<id<<endl;
        cout<<"the room is "<<room<<endl;
    }
};
void  business:: man()
{
    cout<<"enter the name and city"<<endl;
    cin>>name>>city;
}
int main(){
 business d;
 d.id=1234;
 d.room=145;
 d.man();
 d.result();   
    return 0;
}