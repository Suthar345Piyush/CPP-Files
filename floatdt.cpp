//float , double , long double
// #include<iostream>

// using namespace std;

// int main() {

//  cout<< "Float size is %ld bits\n"<< sizeof(long double) << endl;

//  float my_p_value = 20.2 + 20.2;

//  if(my_p_value == 40.400002){
//   cout << "You got it right";

//  }else {
//   cout << "something" << endl;
//  } 

//  cout << "My P value is: %f in float\n"<< my_p_value << endl;

//   return 0;
// }   

// try catch syntax

#include<iostream>
using namespace std;

int main() {

     char call_api =  'p';

  try{
    cout << "trying to use api key\n";
    cout <<"did some testing with api\n";
    throw call_api; // return and throw ke baad vala statement print nai hota hain
    cout <<"Your api is been expired\n";
  }
  catch(int x){
    cout <<"integer exception is handled\n";
  }
  catch(float f){
    cout << "float exception is counterd\n";
  }
  catch(...){
    cout<< "Char for the reason\n"; 
  }  // instead of writing char c we can just three dot

  cout << "Your api is under testing\n";

  return 0;
}





