#include<iostream>
using namespace std;
class create
{
static int created;
static int destroyed;
public:
create()
{
created++;
}
~create()
{
    destroyed++;
}
void showdata()
{
    cout<<"object created ="<<created<<endl;
    cout<<"object destroyed ="<<destroyed<<endl;
    cout<<"object active ="<<created-destroyed<<endl;
}
};
int create::  created=0;
int create::  destroyed=0;

int main(){
    create c1,c2,c3;
    c1.showdata();
 {   create c4;
    //c4.showdata();
    {
        create c5;
    c5.showdata();
    }
}
    c3.showdata();
    c2.showdata();
  create c6;
  {  create c7;
      c7.showdata();
  }
  c6.showdata();

    return 0;
}