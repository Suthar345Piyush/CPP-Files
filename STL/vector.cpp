// arraylist and vectors 

//standred template library

// vector (stl file)

#include<iostream>
#include<vector>
#include<string>
using namespace std;


struct Corners{
  float a , b , c , d;
};

//operator overloading for vector
// " << " this operator is streaming out all the value inside the class.
// stream is basically flow of data for into or out of a program.

ostream& operator<<(ostream& stream, const Corners& corner){
  stream << corner.a << " " << corner.b << " " << corner.c << " " << corner.d;

}

int main(){

   vector<int> piyush;
 //it having an back method which give an refrence back
 //begin give you an refrence of very start location
 // push_back is used to add an element at the end of the vector

   piyush.push_back(3);
   piyush.push_back(4);
   piyush.push_back(5);
   piyush.push_back(6);

   for( auto i = piyush.begin(); i != piyush.end(); ++i){
    cout<< *i << endl;
   }
     
     vector<Corners> corners;

     corners.push_back({1 , 2 ,3 ,4});
     corners.push_back({6 , 7, 8 ,9});

     for( int i = 0; i < corners.size(); ++i){
      cout << corners[i] << endl;
     }

     // this is done by operator overloading bcoz of large size and we need to overwrite this


}