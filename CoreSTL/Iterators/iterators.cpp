// iteration means doing something again and again
//we can iterating some stuff of the unordered stuff like set,maps
#include<iostream>
#include<string>
#include<vector>
#include<iterator>
using namespace std;

int main(){

  vector<string> planets = {"earth", "venus", "jupiter", "mars"};

  // range based for loop
  //for traversing the array
  // for(string x : planets){
  //   cout << x << endl;
  // }

// using the iterator it
  for(vector<string> :: iterator it = planets.begin(); it != planets.end(); it++){
    cout << *it << endl; // just derefrence it to get the values 
  }
}

//end is function which gives the after end element of the array

#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){

  vector<int> arr = {1, 2, 4, 5, 6, 8};
  for(vector<int> :: iterator abc = arr.begin(); abc != arr.end(); abc++){
    cout << *abc << endl;
  }
}

//advance function
// for increase the iterator position, increment it

#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){

  vector<int> arr = {1, 2 ,3, 4, 5 ,6 ,7};

  vector<int> :: iterator abc = arr.begin();

  advance(abc, 5);

   cout << "The value of the arr is: ";
   cout << *abc << endl;
}

//next() and prev() , the next give the value after advancing the position of the iterator.
//prev() give value after decrementing the position of the iterator.

#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){


  vector<int> arr = {1, 2, 3, 4, 5 ,6, 7};

  vector<int> :: iterator itr1 = arr.begin();
  vector<int> :: iterator itr2 = arr.end();


   auto abcd = next(itr1 , 5);
   auto bcsd = prev(itr2, 4);

  cout << "The value after using next is: ";
  cout << *abcd << endl;


  cout << "THe value after using prev is: ";
  cout << *bcsd << endl;
}


//inserter = it is used to insert the elements at any position in the array
#include<iostream>
#include<vector>
#include<iterator>
#include<string>
using namespace std;

int main(){

  vector<string> arr1 = {"piyush", "suthar", "is", "dont"};
  vector<string> arr2 = {"so", "their", "will", "be"};

//initializing the iterator
 vector<string> :: iterator itr =  arr1.begin();              // :: it is use to acsess the element in an particluar scope

 advance(itr, 2); 

 copy(arr2.begin() , arr2.end(), inserter(arr1, itr));

 cout << "After inserting the arr2 element into arr1: ";
 for(string x : arr1){                                     
  cout << x << " ";
 }
 cout <<endl;
}