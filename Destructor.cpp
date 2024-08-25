#include<iostream>
using namespace std;

//its precedence with ~( tilde )  , not void and not take args and one class one destructors 

int count = 0;

class num{
  public:
    
    // constructor 

   num(){
     count++;
    cout << "This is the time when const is called for object number"<< count << endl;
    
   }

   // Destructor making

   ~num(){
    
    cout<< "This is the time when destructor is called for object number" << count << endl;
     count--;

   };
};

int main(){

   cout << "we are inside our main func"<<endl;
   cout  << "creating first object n1"<<endl;
   num n1;
   {
    cout <<" entering this block" << endl;
    cout << "creating more objects" << endl; 
    num n2, n3;
    cout << "EXit the block" << endl;

    // whenever i exit this block the things inside the block are destroyed
    // after exiting n2 , n3 are destroyed
   }

   cout << "Back to main " << endl;
  return 0;
}
