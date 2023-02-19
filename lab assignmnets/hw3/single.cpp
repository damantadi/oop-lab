//single inheritance
//T. DAMAN
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
    }};
class DAMAN2:public DAMAN1{
public:
     DAMAN2(){
        cout<<"constructor of DAMAN2 called "<<endl;
    }
    ~DAMAN2(){
        cout<<"destructor of DAMAN2 called "<<endl;
    }};
int main(){
DAMAN2 r;
return 0;
}