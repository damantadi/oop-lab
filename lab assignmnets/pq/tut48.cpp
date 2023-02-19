#include<iostream>
#include<cmath>
using namespace std;

class length{
int a,b;
friend int distance(length ,length);
public:
   length(int x,int y)
{
    a=x;
    b=y;
}
int s()
{
    cout<<"the point is ("<<a<<","<<b<<")"<<endl;
}

};
int distance(length p ,length q)
{ int d;
d= (p.a-q.a)*(p.a-q.a) + (p.b-q.b)*(p.b-q.b);
int result = sqrt(d);
cout<<"the distance between the points is  "<<result<<endl;
}
int main(){
    length l(1,2);
    l.s();

    length k(5,5);
    k.s();
     distance(l,k);

    return 0;
}