// their are two type of copy functions in the algo of stl are:
//1. copy(strt_iter1, end_iter1, strt_iter2) = it takes 3 arguments.
//2. copy_n(strt_iter1, num, strt_iter1) = it takes 3 arguments.

#include<bits/stdc++.h>
using namespace std;

int main(){

  vector<int> vec1 = {1, 2, 3, 4 ,5 ,6 , 7};
  vector<int> vec2(5);
  vector<int> vec3(8);

// copy elements from 1 to 2 in vec1 and vec2
  copy(vec1.begin(), vec1.begin() + 4, vec2.begin());

  cout << "\nafter copying elements from vec1 to vec2 the vector is : ";
  for(int i = 0; i < vec2.size(); i++){
    cout << vec2[i] << " ";
  }


 //copying 3 elements from vec1 to vec3
  copy_n(vec1.begin(), 5 , vec3.begin());

  cout << "\nafter copying the 3 elements from vec2 from vec3 the vector is: ";
  for(int i = 0; i < vec3.size(); i++){
    cout << vec3[i] << " "; 
  }
 
 return 0;
  }





