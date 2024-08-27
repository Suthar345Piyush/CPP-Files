// Smart uses to less the memory leaks and security issues made by pointers :
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

  // unique_ptr<User> piyushh =  piyush ; // this type syntax is not allowed 
     
     cout<< "program ended" << endl;


  return 0;
}
    