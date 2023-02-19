#include<iostream>
using namespace std;

class binary
{
    string s;
    public:
    void bin(void);
    void chk_bin();
};
void binary :: bin(void)
{cout<<"enter a number:"<<endl;
cin>>s;

}
void binary :: chk_bin()
{
    for(int i=0;i<s.length();i++)
   {
       if(s.at(i)!='0' && s.at(i)!='1')
       {
           cout<<"the number is not binary"<<endl;
           exit(0);
       }   
            cout<<"the number is  binary"<<endl;
            exit(0);
   }
}
int main(){
    binary m;
    m.bin();
    m.chk_bin();
    return 0;
}