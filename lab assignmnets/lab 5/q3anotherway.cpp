#include<iostream>
using namespace std;

class complex{
private:
  int real;
  int img;
public:
  void setData(){
    cout<<"Enter real part:\n";
    cin>>real;
    cout<<"Enter imaginary part:\n";
    cin>>img;
    getData();
  }
  void getData(){
    cout<<"Complex number is "<<real<<" + "<<img<<"i"<<endl;
  }
};
int main(){
  complex com[5];
  int n=5;
  for(int i=0;i<n;i++){
    cout<<"Enter values of "<<i+1<<" complex number:\n";
    com[i].setData();
  }
  return 0;
}