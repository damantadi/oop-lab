/*Create a class Data with data members: height and breadth of object given
by the user and member functions get_data() to read the values and put_data() to
display the values. Create another class Rectangle that inherits class Data and
implement its methods areaRectangle() and perimeterRectangle() that computes
the area and perimeter of a rectangle. Create another class Triangle that inherits
class Data and implement its methods areaTriangle() and perimeterTriangle() that
computes the area and perimeter of a triangle.*/
#include<iostream>
using namespace std;
class Data
{
  protected:
  int height;
  int breadth;
public:
void get_data()
{
cout<<"enter the height :";
cin>>height;
cout<<"enter the breadth :";
cin>>breadth;
}

void put_data()
{
cout<<"\nheight: "<<height<<" breadth:  "<<breadth<<endl;
}
};
class rectangle:public Data
{ 
public:

int areaRectangle()
{
  get_data();
  put_data();
cout<<"area of rectangle is :"<<(height)*(breadth)<<endl;
}
int perimeterRectangle()
{
cout<<"perimeter of rectangle is :"<<2*(height+breadth)<<endl;
}
};
class triangle:public Data
{ 
public:

int areatriangle()
{
  get_data();
  put_data();
cout<<"area of triangle is :"<<0.5*(height)*(breadth)<<endl;
}
int perimetertriangle()
{
cout<<"perimeter of triangle is :"<<<<endl;
}
};
int main()
{ 
  rectangle r1;
  r1.areaRectangle();
  r1.perimeterRectangle();
  triangle t1;
  t1.areatriangle();
  t1.perimetertriangle();
}