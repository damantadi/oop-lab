#include<iostream>
using namespace std;

int main(){
   int array[100], pos,n;

   cout<<"Enter number of elements in array"<<endl;
   cin>>n;

   for (int c = 0; c < n; c++)
     { cin>>array[c];
     }
   cout<<"Enter the index where you wish to delete element"<<endl;
   cin>>pos;

   if (pos>= n+1)
      cout<<"Deletion not possible as the entered pos. is not there"<<endl;
   else
   {
      for (int c = pos - 1; c < n - 1; c++)
        { array[c] = array[c+1];
        }
      cout<<"final array:"<<endl;

      for (int c = 0; c < n - 1; c++)
      {
         cout<<" "<<array[c];
   }
   }

   return 0;
}
