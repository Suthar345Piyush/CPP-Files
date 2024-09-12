// in forward iterator is combination of both of the input and output iterator.

#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){

  vector<int> v1 = { 1, 2, 3, 4, 5,6};

  vector<int> :: iterator itr;

  for(itr = v1.begin(); itr != v1.end(); ++itr){
   *itr = 67;
  }

  for(itr = v1.begin(); itr != v1.end(); ++itr){
    cout << (*itr) << " ";
  }
  
}