#include<iostream>
using namespace std;
union badmass
{
    int idnumber;
    char favcharacter;
     float salary;
     int age;

};
int main(){
     union badmass Daman; //union only gives one value at a time
    Daman.idnumber =2005839;
    Daman.favcharacter='m';
    cout<<"the value is "<< Daman.idnumber<<endl; //now we will get the garbege value 
    cout<<"the value is "<< Daman.favcharacter<<endl;
    
    enum meal{ pizza,burger,chicken};
    cout<<pizza<<endl;
    cout<<burger<<endl;
    cout<<chicken<<endl;

    // we can also do this.
   // enum meal{ pizza,burger,chicken};
    //meal m1= pizza;
    //cout<<m1;
    
    return 0;
}