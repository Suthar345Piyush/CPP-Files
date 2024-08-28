// Smart pointers are use to less the memory leaks and security issues made by pointers :
//1. Unique pointers = it freeze up the memory as the scope ends, we cannot share the memory references and a multiple refrences are not point to same location.

#include<iostream>
#include<string>
#include<memory>
using namespace std;

class User{
  public:
  //constructor

     User(){
      cout << "User created\n";
     }
 //destructor

     ~User(){
      cout << "User destroyed\n";
     }

      void testFunc(){
        cout << "Testing the function" << endl;
      }
};

int main(){
{
  
 


  unique_ptr<User> piyush = make_unique<User>();
  piyush -> testFunc();
}

// // we have another smart pointer called shared pointer the syntax is same as unique pointer, we can use it to  share memory refrences to multiple pointers 

{
   shared_ptr<User> Suthar = make_shared<User>();
   shared_ptr<User> Sutharr = Suthar;

   cout << "It can share memory refrences" << endl;
}

  // unique_ptr<User> piyushh =  piyush ; // this type syntax is not allowed 
     
     cout<< "program ended" << endl;
  return 0;
}

// swap two number program
//with move semantics: 


#include<iostream>
#include<string>
using namespace std;

void swap(int &a , int &b){


   int temp = move(a);
  a = move(b);
  b = move(temp);
  cout << "swapping value" << endl;
}

int main(){
  int a = 5;
  int b = 6;

  cout << "before swapping a = " << a << endl;
  cout << "before swapping  b = " << b << endl;
  swap(a , b);

  cout << "after swapping a = " <<  a << endl;
  cout << "after swapping  b = " << b << endl;


  return 0;
}

// rvalue and lvalue the rvalue refers to left hand thing of the assignment operator  and lvalue refers to the right hand  side of the assignment operator



    
