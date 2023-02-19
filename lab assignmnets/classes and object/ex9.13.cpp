#include<iostream>
using namespace std;
class book
{
char title[20];
char author[20];
char publisher[20];
int ISBN;
public:
void set()
{
cout<<"enter the title";
cin.ignore();
cin.getline(title,20);
cout<<"enter the author name";
cin.ignore();
cin.getline(author,20);
cout<<"enter the publisher";
cin.ignore();
cin.getline(publisher,20);
cout<<"enter the ISBN ";
cin>>ISBN;
}
void get()
{
    cout<<title <<" \t "<<author<<" \t "<<publisher<<"\t "<<ISBN<<endl;
}
};
int main(){
    book *b[2];
    int n=0;
    while(n<2)
    {
        b[n]=new book;
        b[n]->set();
        n++;
    }
    cout<<"title \t author \t publisher \t ISBN "<<endl;
for(int i=0;i<2;i++)
{
    b[i]->get();
}
    return 0;
}