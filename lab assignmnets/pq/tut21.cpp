#include<iostream>
using namespace std;

struct badmass
{
    int idnumber;
    char favcharacter;
     float salary;
     int age;

};

int main(){
    struct badmass Daman;
    Daman.idnumber =2005839;
    Daman.favcharacter='m';
    Daman.salary =1000000000;
    Daman.age= 18;
    cout<<"the value is "<< Daman.idnumber<<endl;
    cout<<"the value is "<< Daman.favcharacter<<endl;
    cout<<"the value is "<< Daman.salary<<endl;
    cout<<"the value is "<<Daman.age<<endl;


    return 0;
}