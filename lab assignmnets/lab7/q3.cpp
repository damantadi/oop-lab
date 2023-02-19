//T..DAMAN
//2005839
//Q3
#include<iostream>
using namespace std;
class person
{
	private:
		char name[10];
	protected:
		char add[20];
	public:
		int adhar;
		
};
class emloyee:private person
{
	private:
		char name[10];
	protected:
	    char ad[20];
	public:
	   int salary;
	   void input()
	   {
	   	cout<<"enter name adress and salary of employee:\n";
	    	cin>>name;
	    	cin>>ad;
	    	cin>>salary;
	        cout<<"---for privately inherted class person---\n";
	        cout<<"enter name\n";
	        cout<<"you can't access name for class emloyee as private member of class not inherit\n";
	        cout<<"enter adress: ";
	        cin>>add;
	        cout<<"enter adhar no.: ";
	        cin>>adhar;
	   	
	   }	
}e;
class teacher:public emloyee
{
	private:
		char name[10];
	protected:
		char adress[20];
	public:
		char school[10];
	    void input()
	    {
	    	cout<<"enter name adress and school name:\n";
	    	cin>>name;
	    	cin>>adress;
	    	cin>>school;
	        cout<<"---for inherted class employeee---\n";
	        cout<<"enter name\n";
	        cout<<"you can't access name for class emloyee as private member of class not inherit\n";
	        cout<<"enter adress: ";
	        cin>>ad;
	        cout<<"enter salary: ";
	        cin>>salary;
		}
}t;
int main()
{
	t.input();
	cout<<"---for main class empolyee---\n";
	e.input();
	cout<<"---now diffrence in main function---\n";
	cout<<"enter name of teacher:";
	cout<<"can't acess private member direcly\n";
	cout<<"enter adress of teacher:";
	cout<<"cant acess protected data directly though it can be inherited\n";
	cout<<"enter school of teacher:\n";
	cin>>t.school;
	cout<<"we can acess public data members direcly through main using object\n";
	
}