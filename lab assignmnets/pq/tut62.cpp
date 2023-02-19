#include<iostream>
#include<math.h>
using namespace std;
class point
{int a;
int b;
friend float distance(point ,point);
public:
 point(int ,int );
};
point ::point(int x1,int y1)
{
    a=x1;
    b=y1;
    cout<<"the coordinates are ("<<a<<","<<b<<")"<<endl;
}
float distance(point d,point m)
{
float g=sqrt((d.a-m.a)*(d.a-m.a) + (d.b-m.b)*(d.b-m.b));
cout<<"the distance between the points is "<<g<<endl;

}

int main(){
    point f(1,1);
    point k(0,0);
 distance(f,k);
    return 0;
}