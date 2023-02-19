#include<iostream>
using namespace std;

int main(){
    int i, j, limit;                                                              
  int composite = 0;                                                            
  cout<<"Enter limit: "<<endl;                                                      
  cin>>limit;                                                          
                                                                                
  cout<<"Composite Numbers upto "<<limit;                               
  for(i = 2;i <= limit;i++)                                                     
  {                                                                             
    composite = 0;                                                              
    for(j = i-1; j > 1 ; j--)                                                   
    {                                                                           
       if(i%j == 0)                                                             
         composite = 1;                                                         
    }                                                                           
    if(composite == 1)                                                          
     cout<<" "<< i;                                                         
  }                                                                             
  cout<<endl;                                                                 
    return 0;
}