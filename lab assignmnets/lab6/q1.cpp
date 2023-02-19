//create a class which stores x and y coordinates of point .calculate the distance between the two points
#include<iostream>
#include<math.h>
using namespace std;
class dist
{
    int a;
    int b;
public:
    void get()
{
    cout<<"Enter the  value of coordinates :";
    cin>>a>>b;
}
  friend float calc(dist,dist);
};
float calc(dist d1,dist d2)
{
    int k;
    k=(pow((d1.a-d2.a),2) + pow((d1.b-d2.b),2));
    float s;
    s=pow(k,0.5);
    return s;
}
int main()
{
    dist m,n;
    m.get();
    n.get();
    cout<<"the distance b/w points is "<<calc(m,n);
return 0;
}