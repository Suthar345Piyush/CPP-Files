#include<iostream>
#include<cstdint> // through this we can use unsigned int
using namespace std;

// short int , int , long int, long long int.


int main(){
   
   //we can write long int or only long both give same output
  printf("size of the data type is %ld bits\n", sizeof(int) * 10);


  int wall = 0xb010101;
  printf("The value of wall is %d\n", wall);

  return 0;
}

// *cp = my_name