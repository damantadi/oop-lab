// multi level inheritance
// T.DAMAN
//2005839

#include<iostream>
using namespace std;

class DAMAN1{
    public:
    DAMAN1(){
        cout<<"constructor of DAMAN1 called "<<endl;

    }
    ~DAMAN1(){
        cout<<"destructor of DAMAN1 calLed "<<endl;
    }
};
class DAMAN2:public DAMAN1
{
public:
      DAMAN2(){
          cout<<"constructor of DAMAN2 is called"<<endl;
      }
      
      ~DAMAN2(){
            cout<<"desstructor of DAMAN2 is called"<<endl;
      }
};

class DAMAN3: public DAMAN2
{

public:
      DAMAN3(){
          cout<<"constructor of DAMAN3 is called"<<endl;
      }
      
      ~DAMAN3(){
            cout<<"desstructor of DAMAN3 is called"<<endl;
      }
};

int main(){
DAMAN3 r;

return 0;
}
