//using inline func.
#include<iostream>
#include<math.h>
using namespace std;
inline float vol(int r,int h)
{float k=pow((r*r +h*h),0.5);

return (3.14*r*r*k)/3;
}

int main(){
    int p,q;
    cout<<"enter the radius and height of cone :"<<endl;
    cin>>p>>q;
    cout<<"volume of cone is : "<<vol(p,q);
    return 0;
}