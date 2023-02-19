#include<iostream>
using namespace std;
class binary{

string a;
public:
void write();
void chk();

};
void binary :: write()
{
    
    cout<<"enter a number:"<<endl;
    cin>>a;
}
void binary :: chk()
{
    for(int i=0;i< a.length();i++)
    {
if(a.at(i)!='0' && a.at(i)!='1')
{
    cout<<"it is not a binary number"<<endl;
exit(0);
}
else 
 continue;
    }
}
int main(){
    binary m;
    m.write();
    m.chk();
    return 0;
}