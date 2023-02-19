//create a class that contain two object of float values compare two objects

#include <iostream>
using namespace std;
 
class number {
   private:
      int num1;                    
   public:
      number( ){
          int k;
          cout<<"enter a number"<<endl;
          cin>>k;
         num1 = k;
      }
    
      bool operator <=(const number& d) {
         
         if(num1 == d.num1 || num1 < d.num1 ) {
            return true;
         }
         return false;
      }
      bool operator >=(const number& d) {
        
         if(num1 == d.num1 || num1 >d.num1 ) {
            return true;
         }
         return false;
      }
      bool operator ==(const number& d) {
        
         if(num1 == d.num1 ) {
            return true;
         }
         return false;
      }
      bool operator >(const number& d) {
        
         if( num1 >d.num1 ) {
            return true;
         }
         return false;
      }
      bool operator <(const number& d) {
        
         if( num1 <d.num1 ) {
            return true;
         }
         return false;
      }

      bool operator !=(const number& d) {
        
         if(num1 != d.num1 ) {
            return true;
         }
         return false;
      }
};

int main() {
   number D1, D2;
 
   if( D1 <= D2 ) {
      cout << "D1 is less than or equal to D2 " << endl;
   } else {
      cout << "D2 is less than D1 " << endl;
   }
    if( D1 >= D2 ) {
      cout << "D1 is greater than or equal to D2 " << endl;
   } else {
      cout << "D2 is greater than D1 " << endl;
   }
    if( D1 == D2 ) {
      cout << "D1 is  equal to D2 " << endl;
   } 
   else if( D1 != D2 ) {
      cout << "D1 is not equal to D2 " << endl;
   } 
   else if( D1 > D2 ) {
      cout << "D1 is greater ttha D2 " << endl;
   } 
   else if( D1 < D2 ) {
      cout << "D1 is less than  D2 " << endl;
   }

   return 0;
}