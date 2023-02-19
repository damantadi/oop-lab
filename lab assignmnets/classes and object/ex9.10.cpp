#include<iostream>
#include<time.h>
#include<math.h>
using namespace std;
class dis
{
    int x;
    int y;
    public:
    void set()
    {
        cout<<"enter the coordinates:";
cin>>x;
cin>>y;
    }
    void get()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
friend float distance(dis d1,dis d2);

};
float distance(dis d1,dis d2)
{
return pow((pow((d1.x-d2.x),2) + pow((d1.y-d2.y),2)),0.5);
}
int main(){
    dis d1,d2;
    d1.set();
    d1.get();
    d2.set();
    d2.get();
    cout<<"the distance between point is :"<<distance(d1,d2);
    return 0;
}