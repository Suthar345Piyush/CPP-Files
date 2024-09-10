//input iterators is used when we want to acsess the element
//find() is used to check the presence of the element in the list

// InputIterator find(InputIterator first, InputIterator last, const T&amp; val){

//   while(first != last){
//     if(*first == val) 
//     return first;
//     ++first;
//   }
//   return last;
// }
// input iterator is used for finding element in the list

//like find() method we have copy() method which copies the one element to other. 

//example:

#include<iostream>
#include<vector>
using namespace std;

int main(){

  vector<int> v = {1, 2, 3, 4, 5, 6 ,7};

  vector<int> :: iterator itr;

  for(itr = v.begin(); itr != v.end(); ++itr){
    cout << *itr << " ";
    cout << endl;
  }

}
