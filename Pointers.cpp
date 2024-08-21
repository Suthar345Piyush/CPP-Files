// Pointers in CPP
// #include<iostream>
// using namespace std;

// int main(){
//   int health;
//   health = 3;

//   int ball;
//   ball = 5;

//   int marks;
//   marks = 45;
//   int my_marks = marks;

//   int *myp;
//   myp = &marks;
//    //& = refrences in c++
//   my_marks = *myp; //pointer derefrencing
//   printf("My marks is : %d\n", my_marks);
//    printf("My marks is : %p\n", myp);// for pointers we use p as a format specifier
//     printf("My marks is : %d\n", my_marks);
// }



// Refrencing 

//& is storing the adderess, using this we can create refrence as well

#include<iostream>
using namespace std;

int main(){

  int score = 100;
  int *myp = &score;


  printf("The value of the score is %d\n" , score);
  printf("The value of pointer is : %p\n" , myp);


  //any change in the refrence can change the actual value but the address is same

  int &another_score = score;
  another_score = 300;


  printf("The value of the score is %d\n" , score);
  printf("The value of pointer is : %p\n", myp) ;
  

}
