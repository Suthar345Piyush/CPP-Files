//if we want to access Nany element of the array we can use it location to access it using square bracket

#include<iostream>
using namespace std;

int main(){
   
   int integer_array[5] = {1,2,3,4,5};
   cout << integer_array[3] << endl;


   int another_array[5];
   another_array[0] = 6;
   another_array[1] = 20;


   cout<< another_array[0] <<endl;
   //when we dont put any value then default value is zero
 
 *another_array = 21;
 cout<< another_array[0] << endl;


 cout<< another_array[1] << endl;
 int *ap = another_array;
 ap++;

 *ap = 25;
 cout<< another_array[1] << endl;
 



   return 0;

   
}