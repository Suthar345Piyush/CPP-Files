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


//bidirectional iterators:
// they move in both directions, they can be decremented

#include<iostream>
#include<list>
using namespace std;

int main(){
  list<int> l1 = {1, 3, 4, 5,6, 7 ,8};

  list<int> :: iterator it;

//decrementing from last element
  for(it = l1.end(); it != l1.begin(); it--){
  if(it != l1.end()){
  cout << (*it) << " ";
  }
 }
 cout << *it << " ";
}



#include<iostream>
#include<list>
using namespace std;

int main(){

  list<int> l1 = {1, 2, 4 ,56, 77};

  list<int> :: iterator it1;

  for(it1 = l1.end(); it1 != l1.begin(); --it1){
    cout << (*it1) << " ";
  }

  // for(it1 = l1.end(); it1 != l1.begin(); --it1){
  //   cout << (*it1) << " ";
  // }

  cout << endl;
}



//Random Acsess iterators:
//it can be incremented as well as decremented
//it works with vectors,in this we relational and arithmatic operators


#include<iostream>
#include<vector>
using namespace std;

int main(){

  vector<int> v1= {1,2, 3, 4 ,5 ,6  };

  vector<int> :: iterator itr1;

  for(itr1 = v1.end() -  1; itr1 != v1.begin() - 1; --itr1 ){
     *itr1 = 8;
  } 
  for(itr1 = v1.end() - 1 itr1 != v1.begin() - 1; --itr1){
    cout <<  *itr1 << " ";
  }
  cout << endl;
}



#include<iostream>
#include<vector>
using namespace std;

int main(){


  vector<int> v1 = {1, 2, 3}; 

  vector<int> :: iterator it1;
  vector<int> :: iterator it2;


  it1 = v1.begin();
  it2 = v1.end();

  if(it1 > it2){
    cout << "Never" << endl;
  }

  int count = it2 - it1; // this is irrespective of value
  cout << count <<endl;


}

