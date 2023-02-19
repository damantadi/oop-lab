#include<iostream>
#include<string>
using namespace std;
void revstring(string s)
{
    if(s.length()==0)
    {
        return ;
    }
    string r=s.substr(1);
    revstring(r);
    cout<<s[0];
}
int main(){
    string s="daman";
    revstring(s);
    return 0;
}