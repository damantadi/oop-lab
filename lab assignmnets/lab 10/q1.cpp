#include<iostream>
using namespace std;
#include<math.h>
class shape
{
            protected:
            float areaofcuboid,areaofcone,areaofsphere,rc,rh,rs,l,b,h,l1,volofcuboid,volofcone,volofsphere;
            public:
            shape()
            {
                cout<<"base constructor called"<<endl;
            }
           virtual ~shape()
            {
                cout<<"base destructor called"<<endl;
            }
            virtual void area()
            {
            }
            virtual void display()
            {
            }
            virtual void volume()
            {

            }
};
class cuboid:public shape
{
            public:
            ~cuboid()
            {
                cout<<"cuboid destructor is called"<<endl;
            }
            void area()
            {
                        cout<<"\nEnter length,breadth,height of cuboid:";
                        cin>>l>>b>>h;
                        
            }
            void display()
            {
                areaofcuboid=2*(l*b+b*h+l*h);
                        cout<<"\nArea of cuboid:"<<areaofcuboid<<endl;
            }
            void volume()
            {
volofcuboid=l*b*h;
cout<<"volume of cuboid:"<<volofcuboid<<endl;
            }
};
class cone:public shape
{
            public:
  ~cone()
            {
                cout<<"cone destructor is called"<<endl;
            }
            void area()
            {
                        cout<<"\n\nEnter the radius and slantheight:";
                        cin>>rc>>l1;
            }
            void display()
            {
                        areaofcone=3.14*rc*(rc+l1);
                        cout<<"\nArea of cone:"<<areaofcone<<endl;
            }
            void volume()
            {
                volofcone=(3.14*rc*rc*(pow((l*l-rc*rc),1/2)))/3;
                cout<<"volume of cone is :"<<volofcone<<endl;
            }
};
class sphere:public shape
{
            public:
             ~sphere()
            {
                cout<<"sphere destructor is called"<<endl;
            }
            void area()
            {
                        cout<<"\n\nEnter radius of sphere:";
                        cin>>rs;
                      
            }
            void display()
            {
                        areaofsphere=4*3.14*rs*rs;
                        cout<<"\nArea of sphere:"<<areaofsphere<<endl;
            }
            void volume()
            {
                volofsphere=(3.14*rs*rs*rs*4)/3;
                cout<<"volume of sphere is :"<<volofsphere<<endl;
            }
};
int main()
{
            shape *shape_ptr;
            shape s;
            shape_ptr=&s;
            shape_ptr->area();
            shape_ptr->display();
            cuboid c;
            cone c1;
            sphere s1;
            shape_ptr=&c;
            shape_ptr->area();
            shape_ptr->display();
            shape_ptr->volume();
            shape_ptr=&c1;
            shape_ptr->area();
            shape_ptr->display();
            shape_ptr->volume();
            shape_ptr=&s1;
            shape_ptr->area();
            shape_ptr->display();
            shape_ptr->volume();
           
return 0;
}
