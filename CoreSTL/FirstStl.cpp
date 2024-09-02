// Generic programming = datatype is not specified at the time of implementation of code logic

#include<iostream>
using namespace std;

template <typename T>
T getBigger(T a , T b){
  return (a > b) ? a: b;
}
int main(){
  cout << getBigger('a' , 'b') << endl;
}

//Vectors is part of containers of stl in cpp, they are dynamic means they can change their size.
