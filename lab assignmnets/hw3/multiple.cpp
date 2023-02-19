//multiple inheritance
// DAMAN
//2005839
#include<iostream>
using namespace std;
class DAMAN1{
    public:
    DAMAN1(){
        cout<<"constructor of DAMAN1 called "<<endl;

    }
    ~DAMAN1(){
        cout<<"destructor of DAMAN1 called "<<endl;
    }
};
class DAMAN2{
public:
     DAMAN2(){
        cout<<"constructor of DAMAN2 called "<<endl;
    }
    ~DAMAN2(){
        cout<<"destructor of DAMAN2 called "<<endl;
    }
};

class DAMAN3{
    public:
     DAMAN3(){
        cout<<"constructor of DAMAN3 called "<<endl;
    }
    ~DAMAN3(){
        cout<<"destructor of DAMAN3 called "<<endl;
    }
};

class DAMAN4:public DAMAN1,public DAMAN2,public DAMAN3
{public:
     DAMAN4(){
        cout<<"constructor of DAMAN4 called "<<endl;
    }
    ~DAMAN4(){
        cout<<"destructor of DAMAN4 called "<<endl;
    }
};

int main(){
DAMAN4 r;
return 0;
}