//sort is the first algorithm in cpp, it means to arrange in the correct order.
//sort(first_iterator, last_iterator) = to sort the given vector
//sort(first_iterator, last_iterator, greater<int>() ) = to sort the vector in decending order
//reverse(first_iterator, last_iterator) = to reverse an given vector
//*maximum(first_iterator, last_iterator) = to find maximum in the vector
//*minimum(first_iterator, last_iterator) = to find minimum
//accumulate(first_iterator, last_iterator) = to sum of the all element of the vectors

#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;

int main(){
 int arr[] = {1, 6, 5, 4, 3,2};
 int n = sizeof(arr)/sizeof(arr[0]);
 vector<int> vect(arr, arr+n);

 cout << "\n vector is : ";
 for(int i = 0; i < n; i++)
  cout << vect[i] << " ";


  //sorting in acending order
  sort(vect.begin(), vect.end()); // sort(first_iterator, last_iterator)


  cout << "\n Vector after sorting: ";
  for(int i = 0; i < n; i++)
    cout << vect[i] << " ";


    //sorting vector in decending  order

    sort(vect.begin(), vect.end(), greater<int>());

    cout << "\n vector after decending sorting: ";
    for(int i = 0; i < n; i++)
      cout<< vect[i] << " ";

      //reversing the vector
      reverse(vect.begin(), vect.end());

      cout << "\n vector after reversing: ";
      for(int i = 0; i < n; i++)
        cout << vect[i] << " ";

//maximum of the vector
   cout << "\n maximum in the vector: ";
    cout << *max_element(vect.begin(), vect.end()) << endl;
    
    cout << "\n minimum in the vector: ";
    cout << *min_element(vect.begin(), vect.end()) << endl;
 
    cout << "\n adding all the vector element by using the accumulate function: ";
    cout << accumulate(vect.begin(), vect.end(), 0);

      }
  
