// #include<iostream>
// using namespace std;

// int getTwo(){
//   return 2;
// }
// void intresting(){
//   puts("I am intresting");
// }
// int main(){
//   int hello = getTwo();
//   void (*pointstoIntresting)() = intresting; // when we call or write a function( with astrick) with pointer always have an () around it
//                                          // if we put () at end of intresting function it actually run it 
//   cout << hello << endl;
//   pointstoIntresting();
//   (*pointstoIntresting)();           // for run it again we need * and wrap it into parenthesis
//   return 0;

// }

// NULL  POINTER OR nullptr

#include<iostream>
using namespace std;

void printval(int a){
  printf("Integer value is: %d\n", a);
}

void printval(double b){
  printf("Double value is: %f\n", b);
}

void printval(int * a){
  printf("Pointer value is: %p\n", a);
}

int main(){
 
  printval(nullptr); // cpp have its own way to handle null property using nullptr 

  return 0;

}