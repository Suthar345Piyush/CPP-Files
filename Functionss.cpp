//call by value

// #include<iostream>
// using namespace std;

// void lifeUp(int life){
//   life++;
// }

// int main(){
//   int life = 100;
//   lifeUp(life);
//   cout << life << endl;

//   return 0;


// }

//call by reference
//cpp allows same name of two functions



#include<iostream>
using namespace std;

void lifeUp(int &life){
  ++life;
}

// int addme(int a, int b){
//   return a + b;
//   } 


// float addme(float a, float b){
//    return a + b;
// }

template<typename K> // template is used for mulltiple datatype at a time , so we dont need to code for different-different datatype, it include all type of datatype

K addme(K a , K b){ //we can anything at the place of 'K'
  return a + b;
}


int main(){
  
  int life = 300;
  lifeUp(life);
  cout << life << endl;


  int c1 = 5;
  int c2 = 6;
  float c3 = 4.3;
  float c4 = 6.4;

  cout << addme(c3 , c4) << endl;

  return 0;

}
