#include<iostream>
using namespace std;
#include<string.h>
class store
{
    char author[15];
    char title[10];
    int price;
    public:
store()
{
    strcpy(author,"\0");
    strcpy(title,"\0");
    price=0;
}
store(char *a,char *t,int p)
{
    strcpy(author,a);
    strcpy(title,t);
    price =p;
}
friend void cheapestbook(store **b,int n);
};
void cheapestbook(store **b,int n)
{
    int cheap=b[0]->price;
    char title1[10];
    for(int i=1;i<n;i++)
    {
        if(cheap>b[i]->price)
        {
            cheap=b[i]->price;
            strcpy(title1,b[i]->title);
        }
    }
    cout<<"the cheapest book is "<<title1<<" and its price is :"<<cheap<<endl;
}
int main(){
    int n;
    cout<<"enter the no. of books"<<endl;
    cin>>n;
char a[15],t[20];
int p;
 store *s[n];
for(int i=0;i<n;i++)
{
    cout<<"enter the name of book "<<endl;
    cin.ignore();
    cin.getline(t,20);
    cout<<"enter the name of author "<<endl;
    cin.ignore();
    cin.getline(a,15);
    cout<<"enter the price"<<endl;
    cin>>p;
    s[i]=new store(a,t,p);
}
cheapestbook(s,n);
    return 0;
}