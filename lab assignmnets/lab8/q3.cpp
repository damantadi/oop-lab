//WAP to overload insertion and extraction operator
#include<iostream>
using namespace std;
class A
{
    float height;
    float width;
    float vol ;
	
    public :
	friend istream & operator >> (istream &, A &);
	friend ostream & operator << (ostream &, A &);
 };

 istream & operator >> (istream &din, A &b)
 {
	
	cout << "Enter Height: " ; din >> b.height ;
	cout << "Enter Width : " ; din >> b.width ;
	return (din) ;
}
ostream & operator << (ostream &dout, A &b)
{
	cout << endl;	
        b.vol = b.height * b.width ;
	
        cout << "The Volume is : " << b.vol << endl;
       
        return(dout) ;
 }

 int main()
 {
       A b1;

       cin >> b1;
       cout << b1;
return 0;
}