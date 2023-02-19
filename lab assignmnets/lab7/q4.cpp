//T.DAMAN
//2005839

//q4
#include<iostream>
using namespace std;
class student
{
	public:
		char name[20];
		int age;
		void disp()
		{
			cout<<"\nEnter name:";
			cin.ignore();
			cin.getline(name, 20);
			cout<<"Enter age:";
			cin>>age;			
		}
};
class batch:public student
{
	public:
		char course[10];
		int std;
		void det_disp()
		{
			cout<<"Enter standard:";
			cin>>std;
			cout<<"Enter course:";
			cin.ignore();
			cin.getline(course, 10);
		}
};
class perf
{
	public:
		int roll, rank;
		void get_data()
		{
			cout<<"Enter roll no. : ";
			cin>>roll;
			cout<<"Enter rank:";
			cin>>rank;
		}
};
class personal: public batch, public perf
{
	public:
		char add[10];
		int phn;
		void pinfo()
		{
			disp();
			det_disp();
			get_data();
			cout<<"Enter city:";
			cin>>add;
			cout<<"Enter contact no.: ";
			cin>>phn;
		}
};
int main()
{
	personal s1;
	s1.pinfo();
	return 0;
}