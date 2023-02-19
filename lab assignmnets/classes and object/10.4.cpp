#include<iostream>
#include<string.h>
using namespace std;
class x
{
char *str;
int n;
int uppercase;
int lowercase;
int vovels;
public:
/*x()
{
n=0;
uppercase=0;
lowercase=0;
vovels=0;
}*/
x(char *s)
{
n=0;
uppercase=0;
lowercase=0;
vovels=0;
    n=strlen(s);
    str= new char(n);
    strcpy(str,s);
}
void show()
{
    cout.write(str,n);
}
void count()
{
    for(int i=0;i<n;i++)
    {
        switch(str[i])
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':

            (vovels)++;
            break;
        }
        if(str[i]>='A' && str[i]<='Z')
        {
            uppercase++;
        }
        if(str[i]>='a' && str[i]<='z')
        {
            lowercase++;
        }
    }
       cout<<"the no of vovels are:"<<vovels<<endl;
       cout<<"the no of uppercase are:"<<uppercase<<endl;
       cout<<"the no of lowercase are:"<<lowercase<<endl;
    }

};
int main(){
    x a1("WELCOME to KIIT");
 a1.show();
 cout<<endl;
    a1.count();
  
    return 0;
}