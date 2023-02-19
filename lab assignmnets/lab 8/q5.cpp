//T.DAMAN
//2005839
//q5
#include<iostream>
using namespace std;
class DAMAN1; //Forward declaration
class DAMAN
{
         int data;
         public:
	void setvalue()
	{int value;
        cout<<"entre the value:"<<endl;
		cin>>value;
		data=value;
	}
	friend void add(DAMAN1,DAMAN);
};
class DAMAN1{
         int data;
         public:
	void setvalue()
	{ int value;
        cout<<"entre the value:"<<endl;
		cin>>value;
        data=value;
	}
	friend void add(DAMAN1,DAMAN);
};
void add (DAMAN1  obj1, DAMAN obj2 )
{
cout<<"sum="<<obj1.data+obj2.data;
}
int main(){
DAMAN1 X;  DAMAN A;
X.setvalue();
A.setvalue(); 
add(X,A); 
return 0;
}