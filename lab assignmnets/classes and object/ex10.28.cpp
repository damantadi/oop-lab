#include<iostream>
using namespace std;
class cricketer
{
    char *s;
    int matched_played;
    float runrate;
    int wickets_taken ;
    int maiden_over;
int over_played;
int no_of_centuries;
int no_of_halfcenturies;
public:
cricketer()
{
    cout<<"enter the name of cricketer";
    s=new char(20);
    cin.ignore();
    cin.getline(s,20);
    cout<<"enter the no. of matches played ";
cin>>matched_played;
    cout<<"enter the no. runrate ";
cin>> runrate;
    cout<<"enter the no. of wickets taken ";
cin>> wickets_taken ;
    cout<<"enter the no. of maiden overs ";
cin>> maiden_over;
    cout<<"enter the no. of overs played ";
cin>> over_played;
    cout<<"enter the no. of centuries ";
cin>> no_of_centuries;
    cout<<"enter the no. of half_centuries ";
cin>> no_of_halfcenturies;
}
void display()
{
     cout<<"no. of matches played ";
cout<<matched_played<<endl;
    cout<<"no. runrate ";
cout<< runrate<<endl;
    cout<<"no. of wickets taken ";
cout<< wickets_taken<<endl ;
    cout<<"no. of maiden overs ";
cout<< maiden_over<<endl;
    cout<<"no. of overs played ";
cout<< over_played<<endl;
    cout<<"no. of centuries ";
cout<< no_of_centuries<<endl;
    cout<<"no. of half_centuries ";
cout<< no_of_halfcenturies<<endl;
}
};
int main(){
    cricketer c1;
    c1.display();
    return 0;
}