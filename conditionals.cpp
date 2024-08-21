// #include<iostream>
// using namespace std;

// int main() {

//  int dogs = 6;

//  if(dogs < 5){
//   puts("There are 5 dogs");
//  } else if(dogs == 6){
//   puts("There are not 7 dogs");
//  }

//  else{
//   puts("They are not dogs");
//  }

//  if(true){
//   puts("There are not any dog");
//  }

//  //in cpp zero means false compiler not consider it
//  return 0;



// }


//if else 

// #include<iostream>
// using namespace std;

// int main(){
//   int number;
//  cout << "Enter rating number between  1 to 5:" << endl;
//  cin >> number;
 


//  if(number == 1){
//   cout << "Our rating is low" << endl;
//  } 
//     if(number == 2){
//   cout << "Our rating is growing" << endl;
//  } 
//         if(number == 3){
//    cout << "Our rating is in up" << endl;
//  }
//              if(number == 4){
//    cout << "Our rating is good" << endl;
//  }
//           if(number == 5){
//   cout << "Our rating is excellent" << endl;
//  }

//         if(number > 5){
//     cout << "Our rating is out" << endl;

//  }
//  else{
//   cout << "Our rating is out2" << endl;
//  }

//  return 0;
// }

//switch statement


#include<iostream>
using namespace std;

int main(){
  
  int rating = 7;

  switch(rating){
    case 1: puts("1 star rating");
    break;
  
  case 2: puts("2 star rating");
  break;

  case 3: puts("3 star rating");
  break;

  case 4: puts("4 star rating");
  break;

  case 5: puts("5 star rating");
  break;

  default: puts("All the rating are out");
  break;

}
}