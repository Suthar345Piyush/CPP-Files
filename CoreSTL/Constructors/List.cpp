// list is called as doubly linked list , means the each element in list has connection with next element and previous element.
// through this the insertion and deletion of element is esay, list allows us to move in both directions , forward and backward
//we have to traverse the list to get acsess the element of the list
// basic syntax of list = list<data_type>list_name

#include<iostream>
#include<list>
using namespace std;

int main(){
  list<int> number{1, 2, 3, 4, 5};
  for(int i: number){
    cout<< i << ' ';
  }
}

// list membar functions :

//front() – Returns the value of the first element in the list.
// back() – Returns the value of the last element in the list.
// push_front() – Adds a new element ‘g’ at the beginning of the list.
// push_back() – Adds a new element ‘g’ at the end of the list.
// pop_front() – Removes the first element of the list, and reduces the size of the list by 1.
// pop_back() – Removes the last element of the list, and reduces the size of the list by 1.
// insert() – Inserts new elements in the list before the element at a specified position.
// size() – Returns the number of elements in the list.
// begin() – begin() function returns an iterator pointing to the first element of the list.
// end() – end() function returns an iterator pointing to the theoretical last element which follows the last element.


//forward list in cpp is singly linked list
//it tracks only next element of the list
//1.assign() = it assigns value in forward list.

#include<iostream>
#include<forward_list>
using namespace std;

int main(){
  forward_list<int> number;
  forward_list<int> number2;
  forward_list<int> number3;

  number.assign({1, 4 , 6 ,8});
  number2.assign(6 , 4);
  number3.assign(number.begin(), number.end());

  cout << "The elements of first forward list: ";
  for(int &a :  number);
  cout << a << ' ';
  cout<< endl;

  cout <<"The elements of second forward list: ";
  for(int &b : number2);
  cout << b << ' ';
  cout << endl;

  cout <<"The elements of third forward list: ";
  for(int &c: number3);
  cout << c << ' ';
  cout << endl;

  return 0;
}

//push_front(), pop_front(), emplace_front();
//emplace_front = used to insert the element in the start of the list

#include<iostream>
#include<forward_list>
using namespace std;

int main(){


  forward_list<int> backUp({1, 2, 3, 4, 5 ,6, 7});

  //push_front 
  backUp.push_front(20);

  cout <<"The list after push_front is: ";
  for(int &a: backUp)
  cout << a << " ";
  cout << endl;

  //emplace_front
  backUp.emplace_front(67);

  cout << "The list after emplace_front is: ";
  for(int &a : backUp)
  cout << a << " ";
  cout << endl;

  //pop_front()

  backUp.pop_front();

  cout << "The list after pop_front is : ";
  for(int &a : backUp)
  cout << a << " ";
  cout << endl;

  return 0;
}



//insert_after is used for insrerting the element at any position 
//emplace_after
//erase_after is used to erase element from particular position.

#include<iostream>
#include<forward_list>
using namespace std;

int main(){
  
  forward_list<int> blocks{1, 2, 3, 4 ,5 ,6};

  forward_list<int>::iterator ptr;

  ptr = blocks.insert_after(blocks.begin(), {7, 8 , 9});
  
  cout << "The cotainer blocks after insert_after is: ";
  for( int &a : blocks)
  cout << a << " ";
  cout << endl;

  ptr = blocks.emplace_after(ptr, 3);

  cout << "The container blocks after emplace_after is: ";
  for(int &a : blocks)
  cout << a << " ";
  cout << endl;

  ptr = blocks.erase_after(ptr);

  cout << "The container blocks after erase_after is: ";
  for(int &a : blocks)
  cout << a << " ";
  cout << endl;

  ptr = blocks.erase_after(blocks.begin(), blocks.end()); // erasing the whole range, erase all the elements after the first element
  
  cout << "The container blocks after erase_after is : ";
  for(int &a : blocks)
  cout << a << " ";
  cout << endl;

  return 0;
}


//remove() = removes the element from the particular list as per the condition
// remove_if() = remove according to condition of the arguments

#include<iostream>
#include<forward_list>
using namespace std;

int main(){

  forward_list<int> lists{1, 2, 3, 4, 5 ,6 };

  lists.remove(5);

  cout << "The lists after remove is: ";
  for(int &a: lists)
  cout <<  a << " ";
  cout << endl;

  lists.remove_if([](int x) {return x > 5;} );

  cout << "The lists after remove_if is : ";
  for(int &a : lists)
  cout<< a << " ";
  cout << endl;
  return 0;
}

//clear() = this is used to clear all the elements from the list 

#include<iostream>
#include<forward_list>
using namespace std;

int main(){

  forward_list<int> numbers{34, 56 , 89 , 99, 100};


   numbers.clear();
   cout << "The array after clear is: ";
   for(int &a : numbers)
   cout << a << " ";
   cout << endl;


   return 0;
}


//splice_after() = trnasfer value from one to another list 

#include<iostream>
#include<forward_list>
#include<string>
using namespace std;

int main(){
  forward_list<int> name1{20 , 88 , 576 , 78 , 67};
  forward_list<int> name2{67 , 78  , 89 , 343};

  name2.splice_after(name1.begin() , name2);

  
  cout << "After using splice_after the name1 is: ";
  for(int &a: name1)
  cout << a << " "; 
  cout << endl;


  

  return 0;
}







