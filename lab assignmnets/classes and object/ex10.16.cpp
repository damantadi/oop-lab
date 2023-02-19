#include<iostream>
using namespace std;
class phone
{
    char s[10];
    int price_low;
    int price_high;
    public:
    phone()
    {
    cout<<"enter the name of phone :";
    cin.ignore();
    cin.getline(s,10);
    cout<<"enter the range:";
    cin>>price_low>>price_high;
    }
    void display()
    {
        cout<<s<<"  price range "<<" "<<price_low<<"-"<<price_high<<endl;
    }
    
friend void search(phone p[],int n);
};
 void search(phone p[],int n)
    {
        int low,high;
    cout<<"enter your budget:";
    cin>>low>>high;
    for(int i=0;i<n;i++)
    {
        if(p[i].price_low<low && p[i].price_high>high)
          {
              cout<<"you can able to buy "<<p[i].s<<endl;
          }
          else{
              cout<<"you can able to buy "<<p[i].s<<endl;
          }
    }
    }
int main(){
    int n;
    cout<<"enter the no. of phones prsent in store";
    cin>>n;
    phone p[n];

for(int i=0;i<n;i++)
{
    p[i].display();
}
search(p,n);
    return 0;
}