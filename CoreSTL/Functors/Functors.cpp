//functors are not functions:
// Program to add elements of the two array:
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int arr1[] = {1,2,3,4};
//    int arr2[] = {5,6,7,8};
//    int n = sizeof(arr1)/sizeof(arr1[0]);
//    int res[n];

//    for(int i = 0; i < n; i++){
//     res[i] = arr1[i] + arr2[i];
//    }

//    for(int i = 0; i < 4; i++){
//     cout << res[i] << " ";
//    }
//    cout << endl;
// }

//using transform function to add two array in single line:

// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//     int arr1[] = {1,2,3,4};
//    int arr2[] = {5,6,7,8};
//    int n = sizeof(arr1)/sizeof(arr1[0]);
//    int res[n];


//    transform(arr1, arr1 + n, arr2, res, plus<int>());

//    for(int i = 0; i < n; i++){
//     cout << res[i] << " ";

//    }
//    cout << endl;
// }
//operators / 1.unary operator means single input

// #include<bits/stdc++.h>
// using namespace std;

// int increment(int x){
//   return x + 5;
// }



// int main(){
//   int arr1[] = {10, 20, 30, 40};
//   // int arr2[] = {12, 13, 14,15};
//   int n = sizeof(arr1)/sizeof(arr1[0]);


//   transform(arr1, arr1 + n, arr1, increment);

//   for(int i = 0; i < n; i++){
//     cout << arr1[i] << " ";
//   }
//   cout <<endl;


// }


//working of functors in the cpp

#include<bits/stdc++.h>
using namespace std;

class increment{
  private: 
    int num;

  public:
    increment (int n) : num(n) { }

// operator overloading 
    int operator() 
    (int arr_num) 
      const {
      return num + arr_num;
    }

int main(){
  int arr[] = {11,22,33,44,55};
  int n = sizeof(arr)/sizeof(arr[0]);
  int to_add = 1;

 
 transform(arr, arr + n, arr, increment(to_add));
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
   
  };
};
