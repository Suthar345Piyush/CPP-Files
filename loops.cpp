// #include<iostream>
// using namespace std;

// int main(){

//   int all_number[] = {1, 2, 3, 4, 5, 6, 7};

//   int i = 5;

//   // while(i < 7){
//   //    cout << "the value is countered" << endl;
//   //     i++;
     
//   //   }
//   //    cout << "Current value is counterd" << all_number[i]  <<endl;

//   do{
//     cout << "the value is counterd" << all_number[i]<< endl;
//     i++;
//   }while(i == 4);


  
// return 0;
//   }


// for loops :

#include<iostream>
using namespace std;

int main(){

  int my_numbers[] = {1,2,3,4,5, 6};


  // for(int i=0; i<6; i++){
  //   cout << my_numbers[i] <<endl;
  // }

  for(int i:my_numbers){
    cout << my_numbers[3] <<endl;
  }

  return 0;
}




 

