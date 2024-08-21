// #include<iostream>
// using namespace std;

// struct User{
//    const int uId;
//    const char *name;
//    const char *email;
//    int kill_count;
// };

// int main(){
//   // here we cannot change uid but name, email can be changed bcoz the name and email are pointing towards an point not the value 
//   // for uid value of the integer is constant
//   User ninja = {001, "ninja", "ninja@gmail.com", 52};
//   User samurai = {002, "samurai", "samurai@gmail.com", 74};

//   cout << samurai.email << endl;
//   samurai.kill_count = 80;

//   samurai.email = "samurai@fighter.com";
//   samurai.uId = 23;

//   cout << samurai.email << endl;
//   cout << samurai.uId << endl;


//   return 0;
// }


// enums = enumerations
//enums,structure,functions are defined always over int main()

// #include<iostream>
// using namespace std;

// enum MsOffice{
//   BOLD = 5,
//   ITALICS = 1,
//   UNDERLINE,
//   CROSSED,
// };

// int main(){

//      int  myAttributes = BOLD + ITALICS;

//      cout<< myAttributes << endl;

//      return 0;
// }

//c++ is strongly typed language

#include<iostream>
#include<string>
using namespace std;

 string api_call(){
      return "Getting value from web\n";
 }

 string another_api_call(){
   return "Getting another value from web\n";
 }

 int main(){

  auto response = api_call();
  auto rep = another_api_call();
  cout <<"API CALLS SOME DATA\n" << response;
  cout << "Another API CALL SOME DATA\n" << rep << endl;



  if(typeid(response) == typeid(string)){
    
    cout << "The value can be executed in this response\n";
     
  }

  if(typeid(rep) == typeid(int)){

    cout <<" Then value can be existing in the your response\n";
  }

   return 0;

 }

 
