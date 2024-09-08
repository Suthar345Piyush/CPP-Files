//set are like container which stores the unique element in sorted manner ( ascending order or descending order)
//define = set<datatype> set_name;
#include<iostream>
#include<set>
using namespace std;

int main(){
  set<int> sets;

  sets.insert(5);
  sets.insert(7);
  sets.insert(8);
  sets.insert(2);

  for(auto &a : sets){
    cout << a << " ";
    sets.erase(5);
  }

  cout << endl;
}



#include<iostream>
#include<set>
using namespace std;

int main(){
  set<int> isSet;

  isSet.insert(6);
  isSet.insert(7);
  isSet.insert(9);
  isSet.insert(3);

   cout << "After inserting the elements in set: ";
  for(int a : isSet){
    cout << a << " ";
    cout << endl;
  }

  if(isSet.find(7) != isSet.end()){
    cout << "7 is present in the set" << endl;
  }
  else{
    cout << "7  is not present in the set" << endl;

  }

  isSet.erase(3);

  cout << "After deleting 3 the set is: ";
  for(int a : isSet){
    cout <<  a << " ";
    cout << endl;
  }
}

//Multiset in cPP
//Multiset is also container but we can store same values in it
//we can remove element from multiset using erase() function a.erase(a.find());
// using count we can find out how many times the value is present in that multiset

#include<iostream>
#include<set>
using namespace std;

int main(){

  multiset<int> onSet;


  onSet.insert(8);
  onSet.insert(8);
  onSet.insert(8);
  onSet.insert(8);

  cout << "count of 8 in  the multiset";

  cout << onSet.count(8) << endl;

  onSet.erase(onSet.find(8));
  onSet.erase(onSet.find(8));

  cout << "After removing value from the multiset: " << endl;
  for(int a: onSet){
    cout << a << " ";
    cout << endl;

    onSet.erase(8);
  }
}
