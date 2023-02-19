#include<iostream>
#include<string.h>
using namespace std;
class str
{
char *str1;
int n;
int upper=0;
int lower=0;
int vovel=0;
public:
str()
{
    str1=new char(100);
    cout<<"enter the string:";
cin.getline(str1,100);
}
void count()
{n=strlen(str1);
cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
    if(str1[i]>='a' && str1[i]<='z')
    {
        lower++;
    }
    if(str1[i]>='A' && str1[i]<='Z')
    {
        upper++;
    }
    if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'||str1[i]=='A'||str1[i]=='E'||str1[i]=='I'||str1[i]=='O'||str1[i]=='U')
    {
        vovel++;
    }
}
cout<<"uppercase:"<<upper<<endl;
cout<<"lowercase:"<<lower<<endl;
cout<<"vovel:"<<vovel<<endl;

}
};
int main(){
str s1;    
 s1.count();

    return 0;
}