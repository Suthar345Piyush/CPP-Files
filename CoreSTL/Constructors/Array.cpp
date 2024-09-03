// we have to include the header of <array>
// #include<iostream>
// #include<array>
// #include<string>

// In this we use sorting which is basically arrange in specified order(sort is a part of algorithms)
// using namespace std;
// int main(){

//   array<int, 5> arr1{{8,9,5, 6 , 4}};
//   array<int , 5> arr2{{4, 5 , 6 ,8 ,9}};
//   array<string , 2> arr3{{string{"P"} , "Y"}};
 
//   cout << arr1[2] << " " << arr1[3] << endl;
//   cout << arr2[4] << " " << arr2[3] << endl;
//   cout << arr3[0] << " " << arr3[1] << endl;

//   cout << arr1.size() << endl;
//   cout << arr2.size() << endl;
//   cout << arr3.size() << endl;

//   cout << "\nInitial arr1: ";
//   for(auto i: arr1)
//   cout << i << ' ';
//   sort(arr1.begin(), arr1.end());

//   cout << "\nSorted arr1: ";
//   for(auto i : arr1)
//   cout << i << ' ';

//   cout << "\narr3: ";
//   for(auto &s : arr3);
//   cout << s << ' ';
//   return 0; 
// }

//commen syntax for member function is : array<object_name , object_size> name;

// this is part of sequential containers
// some member function in stl
//1. [] this as normal as array ,it can take value from the array
//2. front() and back() = front for acessing first element of array and back is for last element of array
//3. swap() = using for swapping the content
//4. empty() = it use to check stl function is empty or not if empty then true , not empty then false

// #include<iostream>
// #include<array>
// using namespace std;

// int main(){

//   array<int , 6> name = {'p','i', 'y' , 'u', 's', 'h'};
//   array<int , 6> name2 = {}; , //it is happen bydefault

//   bool y = name2.empty();
//   cout <<boolalpha<<(y); // boolalpha is used to take false and true as string not as 0 , 1

//   return 0;
// }

//5. at() = this function is used to get specific loaction of an element in the array
//6. fill() = it is used to fill the array with similar values.

// #include<iostream>
// #include<array>
// #include<string>
// using namespace std;


// int main(){
//   array<int , 6> arr;
//   arr.fill('p');
//   for(char  i: arr)
//   cout << i << " ";
//   return 0;

// }

//7. size(), max_size(), sizeof() = size, max_size is used for getting size of array , sizeof() for total size in bytes

// #include<iostream>
// #include<array>
// using namespace std;

// int main(){
//   array<float , 5> decimal;
//   cout << decimal.size() << '\n';
//   cout << decimal.max_size() << '\n';
//   cout << sizeof(decimal) << '\n';

//   return 0;

// }

//8. data() = it gives base adderess of the string/int/float or of the  any object type

#include<iostream>
#include<array>
#include<cstring>
using namespace std;

int main() {
  const char* str = "Piyush";
  array<char, 7> name;
  memcpy(name.data(), str, 7);
  cout << name.data() << '\n';
  return 0;
}






