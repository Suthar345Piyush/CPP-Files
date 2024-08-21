// #include<iostream>
// using namespace std;
// int main(){
//    cout<< "Hello there !" << endl;
//    return 0;

// }

// #include<iostream>
// using namespace std;

// int main(){
//   int number;
//   cin >> number;
//   printf("Your id is %d\n" , number + 4);

//   return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//   string my_game;
//   cout << "enter your fav. game: " << endl;
//   getline(cin, my_game);
//   cout<< "Hey " << my_game << " is my fav game" << endl;

//   return 0;

// }

#include<iostream>
#include<string>
using namespace std;

int main(){
   string firstName , lastName;
   cout <<"Enter your first name: "<< endl;
   getline(cin, firstName);
   cout<<"Enter your last name: " << endl;
   getline(cin, lastName);
   cout << "My name is " << firstName << " " << lastName << endl;

   return 0;


}