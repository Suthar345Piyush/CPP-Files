#include<iostream>
#include<string>
using namespace std;

class User{
  private:  // in cpp(classes and objects) their are majorly two keyword are private and public(can be accesible by anyone or globally)
    int secret = 25;


    public: // public is an keyword 

    string name = "Piyush";
    string email = "piyush@gmail.com";
    void classMessage(){
      cout << "class is great " << name <<endl;
    };

   
};

int main(){


  User piyush;
  piyush.name = "prince";
  piyush.classMessage();

  User suthar;
  suthar.classMessage(); // they both are objects of the same class


}


