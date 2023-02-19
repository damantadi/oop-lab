//q2.create a class which stores name ,roll,total marks of students input data fore n students find the averge marks stored by n students ,store it as a data member of the class and display it using a private function
#include<iostream>
using namespace std;
class student{
    private:
    char name[20];
    int roll;
    int marks[3];
    
    public:
  void getdata()
  {
      cout<<"enter the data of students:"<<endl;
      cout<<"enter the name of student :"<<endl;
      cin>>name;
      cout<<"enter the roll of student :"<<endl;
      cin>>roll;
      for(int i=0;i<3;i++)
      {
          cout<<"enter the marks of:"<< i+1 <<"subject :"<<endl;
          cin>>marks[i];
      }
  }
  void set()
  {
     cout<<" name of student :"<<name<<endl;  
      cout<<" roll of student :"<<roll<<endl;
       for(int i=0;i<3;i++)
      {
          cout<<" marks of "<<i+1<<"subject :"<<marks[i]<<endl;
  }
  }
  friend int total(student s);
};
int total(student s)
{
    int total_marks=0;
    for(int i=0;i<3;i++)
    {
        total_marks+=s.marks[i];
    }
    return total_marks;
}
int main()
{
    int n;
    cout << "Enter total numbers of student:";
    cin >> n;
    student s[n];
    for(int i=0;i<n;i++)
    {
        s[i].getdata();
        s[i].set();
        cout<<"total marks of student is :"<<total(s[i])<<endl;
     cout<<"avg marks of student "<<i+1<<" is : "<<float((total(s[i]))/3)<<endl;   
    }

return 0;
}