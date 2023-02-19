#include<iostream>
using namespace std;
void print(float num)
{
    cout<<"number is :"<<num<<endl;

}
void print(char s[])
{
    cout<<"the string is :"<<s<<endl;
}
int main(){
    print(4);
    print(12.3);
    print("hello");
    return 0;
}