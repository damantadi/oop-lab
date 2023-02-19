#include<iostream>
using namespace std;
class train
{
    protected:
int no_of_seats_1tire;
int no_of_seats_2tire;
int no_of_seats_3tire;
public:
void get()
{
    cout<<"enter the no. of seats in 1 tire:";
    cin>>no_of_seats_1tire;
    cout<<"enter the no. of seats in 2 tire:";
    cin>>no_of_seats_2tire;
    cout<<"enter the no. of seats in 3 tire:";
    cin>>no_of_seats_3tire;
}
void show()
{
    cout<<"NO. of seats in 1tire:"<<no_of_seats_1tire<<endl;
    cout<<"NO. of seats in 2tire:"<<no_of_seats_2tire<<endl;
    cout<<"NO. of seats in 3tire:"<<no_of_seats_3tire<<endl;
}
};
class resevation:public train
{
int seats_booked_1tire;
int seats_booked_2tire;
int seats_booked_3tire;
public:
void getbooked()
{get();
    cout<<"enter the no. of seats booked in 1 tire:";
    cin>>seats_booked_1tire;
    cout<<"enter the no. of seats booked in 2 tire:";
    cin>>seats_booked_2tire;
    cout<<"enter the no. of seats booked in 3 tire:";
    cin>>seats_booked_3tire;
}
void booking()
{    int n,c;
    cout<<"enter the choice you want to book seat "<<endl;
    int k,l;
    int i=1,j=1;
    while(i)
    {
    cout<<"1.seats_1tire \n2.seats_2tire \n3.seats_3tire \n4.cancel_tickets \n5.exit;"<<endl;
    cin>>n;
        switch (n)
        {
        case 1:
           if(no_of_seats_1tire-seats_booked_1tire>0)
           {
               cout<<"enter the no of seat you want to book:";
               cin>>k;
               if(no_of_seats_1tire-seats_booked_1tire>=k)
               {
                   cout<<"booked"<<endl;
                   seats_booked_1tire+=k;
               }
               else{
                 cout<<"sorry "<<no_of_seats_1tire-seats_booked_1tire<<" seats are only available "<<endl;
                 cout<<"you can book "<<no_of_seats_1tire-seats_booked_1tire<<" seats "<<"rest book in another tier if available"<<endl;
               }
           }
            break;
        case 2:
              if(no_of_seats_2tire-seats_booked_2tire>0)
           {
               cout<<"enter the no of seat you want to book:";
               cin>>k;
               if(no_of_seats_2tire-seats_booked_2tire>=k)
               {
                   cout<<"booked"<<endl;
                   seats_booked_2tire+=k;
               }
               else{
                 cout<<"sorry "<<no_of_seats_2tire-seats_booked_2tire<<" seats are only available "<<endl;
                 cout<<"you can book "<<no_of_seats_2tire-seats_booked_2tire<<" seats "<<"rest book in another tier if available"<<endl;
               }
           }
            break;
        case 3:
              if(no_of_seats_3tire-seats_booked_3tire>0)
           {
               cout<<"enter the no of seat you want to book:";
               cin>>k;
               if(no_of_seats_3tire-seats_booked_3tire>=k)
               {
                   cout<<"booked"<<endl;
                   seats_booked_3tire+=k;
               }
               else{
                 cout<<"sorry "<<no_of_seats_3tire-seats_booked_3tire<<" seats are only available "<<endl;
                 cout<<"you can book "<<no_of_seats_3tire-seats_booked_3tire<<" seats "<<"rest book in another tier if available"<<endl;
               }
           }
            break;
        case 4:
           while(j)
           {
            cout<<"enter the choice from which you want to cancel"<<endl;
            cout<<"1.1tire\n 2.2titre\n 3.3tire\n 4.exit"<<endl;
            cin>>c;
            switch (c)
            {
            case 1:
               cout<<"enter the no. of tickets you want to cancel:"<<endl;
               cin>>l;
            seats_booked_1tire-=l;   
                break;
            case 2:
                cout<<"enter the no. of tickets you want to cancel:"<<endl;
               cin>>l;
            seats_booked_2tire-=l;  
                break;
            case 3:
                cout<<"enter the no. of tickets you want to cancel:"<<endl;
               cin>>l;
            seats_booked_3tire-=l;  
                break;
            case 4:
               j=0;
                break;
            default:
                break;
            }
           }
            break;
        case 5:
      i=0;  
            break;
        default:
        cout<<"invalid selection"<<endl;
            break;
        }
    }
}
void showdata()
{
show();
cout<<"no of seats booked in 1tire:"<<seats_booked_1tire<<endl;
cout<<"no of seats booked in 2tire:"<<seats_booked_2tire<<endl;
cout<<"no of seats booked in 3tire:"<<seats_booked_3tire<<endl;
}
};
int main(){
 resevation r1;
 r1.getbooked();
 r1.showdata();
 r1.booking();
 r1.showdata();   
    return 0;
}