#include<iostream>
#include<string>

using namespace std;

int main() {

  char  my_name[] = "Piyush";
  char us_name[] = {'p', 'i', 'y', 'u','s','h', 0};

  cout<<"My name is: "<< my_name << endl;

  for(int i=0; us_name[i] != 0; i++){
    cout << "name is :" << us_name[i] << endl;
  }

  cout << "Hello devlopers !" << endl;

   
  
   for(char *cp = us_name; *cp != 0; cp++){
    cout << "Hello i want to be b2c saas founder !"<< cp << endl;
   }

   cout << "take a break";
   for(char i:my_name){
    cout << "Char is : "<< i << endl;
   }

  return 0;
}