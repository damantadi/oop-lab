#include<iostream>
using namespace std;
class cons
{
    int data;
    public:
    cons()
    {
        data=5;
    }
    void set()
    {
        cout<<"the value of data is:"<<data;
    }
};
int main(){
  cons s1;
  s1.set();   
    return 0;
}