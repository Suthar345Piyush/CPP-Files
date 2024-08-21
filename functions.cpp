#include<iostream>
using namespace std;

 void sayHello(){
    cout << "Hello there\n";
  }

 int  sayTwo(){
  return 2 ;
 }

 void sayThree(){
   puts("3");
 }

int main(){

 sayHello();
   cout << "%d\n" << sayTwo() + 3 << endl;
   sayThree();
  return 0;

}