#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
string s="sdfkeralg sdffrew";
for(int i=0;i<s.length();i++)
{
    s[i]-=32;
}
cout<<s<<endl;
cout<<"-----------------------"<<endl;
string s1="dscsvakjabfk";
transform(s1.begin(),s1.end(),s1.begin(),::toupper);
cout<<s1<<endl;
transform(s1.begin(),s1.end(),s1.begin(),::tolower);
cout<<s1<<endl;
cout<<"-----------------------"<<endl;

string s2="5432343212";
sort(s2.begin(),s2.end());
cout<<"increasing order no will be "<<s2<<endl;

sort(s2.begin(),s2.end(),greater<char>());
cout<<"decreasing order no will be "<<s2<<endl;

    return 0;
}