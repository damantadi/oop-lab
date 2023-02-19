#include<iostream>
using namespace std;

 typedef struct badmass
{
    int idnumber;
    char favcharacter;
     float salary;
     int age;

}dj;

int main(){
     dj Daman;
    Daman.idnumber =2005839;
    Daman.favcharacter='m';
    Daman.salary =1000000000;
    Daman.age= 18;
    cout<<"the value is "<< Daman.idnumber<<endl;
    cout<<"the value is "<< Daman.favcharacter<<endl;
    cout<<"the value is "<< Daman.salary<<endl;
    cout<<"the value is "<<Daman.age<<endl;
cout<<"_____________x______________"<<endl;
dj Rohan;
    Rohan.idnumber =2005111;
    Rohan.favcharacter='c';
    Rohan.salary =1000;
    Rohan.age= 17;
    cout<<"the value is "<< Rohan.idnumber<<endl;
    cout<<"the value is "<<Rohan.favcharacter<<endl;
    cout<<"the value is "<< Rohan.salary<<endl;
    cout<<"the value is "<<Rohan.age<<endl;
cout<<"_____________x______________"<<endl;
    dj Chetas;
   Chetas.idnumber =2005920;
    Chetas.favcharacter='k';
    Chetas.salary =10;
    Chetas.age= 16;
    cout<<"the value is "<< Chetas.idnumber<<endl;
    cout<<"the value is "<< Chetas.favcharacter<<endl;
    cout<<"the value is "<< Chetas.salary<<endl;
    cout<<"the value is "<<Chetas.age<<endl;

    
    return 0;
}