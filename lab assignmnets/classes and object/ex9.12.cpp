#include<iostream>
using namespace std;
class ar
{
    static int x;
    public:
    static int count()
    {
cout<<" "<<x++;
    }
   static void show()
    {
        cout<<x--<<endl;
    }
};
 int ar :: x=1;
int main(){
    ar a1[4];
  for(int i=0;i<4;i++)
    a1[i].count();
    cout<<endl;
  for(int i=0;i<4;i++)
    a1[i].show();

    return 0;
}