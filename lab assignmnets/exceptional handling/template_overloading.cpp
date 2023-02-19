#include<iostream>
using namespace std;
template <class s>
void display(s num)
{
    cout<<num<<endl;
}
template<class s1,class s2>
void display(s1 num,s2 mes)
{
    cout<<""<<mes<<" :"<<num<<endl;
}

int main(){
int n=10;
char s[20]="hello! how are you" ;
display(n);
 display(n,s);
    return 0;
}