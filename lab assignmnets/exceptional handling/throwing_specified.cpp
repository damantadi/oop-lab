#include<iostream> 
using namespace std;
void check(int i)throw(int)
{
    if(i==0)
    throw(i);
    else if(i==-1)
    throw (float)i;
    else
    throw (char)i;
}
int main(){
    int num;
    cout<<"enter a number :(-1,0,1)";
    cin>>num;
    try
    {
        check(num);
    }
    catch(int)
    {
        cout<<"caught integer";
    }
    catch(float)
    {
        cout<<"caught float value";
    }
    catch(char)
    {
        cout<<"caught a char";
    }
    cout<<"exit";
    return 0;
}